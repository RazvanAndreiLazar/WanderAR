using Assets.Scripts.Domain;
using Assets.Scripts.Services;
using Google.XR.ARCoreExtensions;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class LocationManager : MonoBehaviour
{
    public static WorldCoordinates Location { get; private set; } = new(46.77472f, 23.62172f, 360);
    public static Quaternion Heading { get; private set; }
    public static bool IsTracking { get; private set; } = false;

    public AREarthManager earthManager;
    public ARCoreExtensions arCoreExtensions;

    public bool isDebugging = true;

    // these are used for non-android
    public float latitude = 46.77472f;
    public float longitude = 23.62172f;
    public float altitude = 360;
    public Vector3 heading = Vector3.zero;

    private bool _enablingGeospatial = false;
    private bool _isLocalizing = false;
    private bool _isEnabled = false;
    private float _localizationPassedTime = 0;
    private float _configurePrepareTime = 3;

    private Coroutine _startLocationService;

    private Quaternion? _initialHeading = null;
    private Quaternion? _initialRotation = null;

    private bool _messageDisplayed = false;

    #region Tresholds
    /// <summary>
    /// Accuracy threshold for orientation yaw accuracy in degrees that can be treated as
    /// localization completed.
    /// </summary>
    private const double ORIENTATION_YAW_ACCURACY_TRESHOLD = 25;

    /// <summary>
    /// Accuracy threshold for heading degree that can be treated as localization completed.
    /// </summary>
    private const double _headingAccuracyThreshold = 25;

    /// <summary>
    /// Accuracy threshold for altitude and longitude that can be treated as localization
    /// completed.
    /// </summary>
    private const double HORIZONTAL_ACCURACY_TRESHOLD = 20;

    /// <summary>
    /// The timeout period waiting for localization to be completed.
    /// </summary>
    private const float _timeoutSeconds = 60;
    #endregion

    private void Awake()
    {
        // for non-android -> to be able to change the location
        Location = new(latitude, longitude, altitude);
        Heading = Quaternion.Euler(heading);

        // Lock screen to portrait.
        Screen.autorotateToLandscapeLeft = false;
        Screen.autorotateToLandscapeRight = false;
        Screen.autorotateToPortraitUpsideDown = false;
        Screen.orientation = ScreenOrientation.Portrait;

        Application.targetFrameRate = 60;

        if (arCoreExtensions == null)
        {
            Debug.LogError("Cannot find ARCoreExtensions.");
        }
    }
    public void OnEnable()
    {
        _startLocationService = StartCoroutine(StartLocationService());

        _enablingGeospatial = false;
        _localizationPassedTime = 0f;
        _isLocalizing = true;

        DisplayOnDebug("Localising");

        _isEnabled = true;
    }

    public void OnDisable()
    {
        if (_startLocationService != null)
        {
            StopCoroutine(_startLocationService);
            _startLocationService = null;

        }

        IsTracking = false;
        Debug.Log("Stop location services.");
        Input.location.Stop();
    }

    private IEnumerator StartLocationService()
    {
#if UNITY_EDITOR
        DisplayOnDebug("Location service is disabled because running in Windows.");
        IsTracking = true;
        yield break;
#endif

#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Debug.Log("Requesting fine location permission.");
            Permission.RequestUserPermission(Permission.FineLocation);
            yield return new WaitForSeconds(3.0f);
        }
#endif

        if (!Input.location.isEnabledByUser)
        {
            DisplayOnDebug("Location service is disabled by User.");
            yield break;
        }

        DisplayOnDebug("Start location service.");
        Input.location.Start();

        while (Input.location.status == LocationServiceStatus.Initializing)
        {
            DisplayOnDebug("Initializing");
            yield return null;
        }

        if (Input.location.status != LocationServiceStatus.Running)
        {
            DisplayOnDebug($"Location service ends with {Input.location.status} status.");
            Input.location.Stop();
        }

    }


    // Update is called once per frame
    void Update()
    {
#if UNITY_EDITOR
        Location = new(latitude, longitude, altitude);
        Heading = Quaternion.Euler(heading);

        return;
#endif

        if (!_isEnabled) return;
        if (ARSession.state != ARSessionState.SessionInitializing
            && ARSession.state != ARSessionState.SessionTracking) return;
        if (!CheckFeatureSupport()) return;

        // waiting for configurations 
        if (_enablingGeospatial)
        {
            _configurePrepareTime -= Time.deltaTime;
            if (_configurePrepareTime < 0)
            {
                _enablingGeospatial = false;
            }
            else
            {
                return;
            }
        }

        if (!CheckEarthStatus()) return;

        #region Check earth localisation
        bool isSessionReady = ARSession.state == ARSessionState.SessionTracking && Input.location.status == LocationServiceStatus.Running;
        var earthTrackingState = earthManager.EarthTrackingState;
        var pose = earthTrackingState == TrackingState.Tracking ?
            earthManager.CameraGeospatialPose : new GeospatialPose();
        if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
            pose.OrientationYawAccuracy > ORIENTATION_YAW_ACCURACY_TRESHOLD ||
            pose.HorizontalAccuracy > HORIZONTAL_ACCURACY_TRESHOLD)
        {
            NotificationService.DisplayOnTop($"{pose.OrientationYawAccuracy > ORIENTATION_YAW_ACCURACY_TRESHOLD}\n{pose.HorizontalAccuracy > HORIZONTAL_ACCURACY_TRESHOLD}\n" +
                $"{!isSessionReady || earthTrackingState != TrackingState.Tracking}");

            if (!_isLocalizing)
            {
                _isLocalizing = true;
                _localizationPassedTime = 0;
            }

            if (_localizationPassedTime > _timeoutSeconds)
            {
                DisplayOnDebug("Geospatial sample localization passed timeout.");
                //ReturnWithReason("Cannot localise");
            }
            else
            {
                _localizationPassedTime += Time.deltaTime;
                NotificationService.DisplayOnTop($"Point your camera at buildings, stores, and signs near you.");
                _messageDisplayed = true;
            }
            IsTracking = false;
            return;
        }
        else if (_isLocalizing)
        {
            // Finished localization.
            _isLocalizing = false;
            _localizationPassedTime = 0f;
            DisplayOnDebug("Localisation success");
        }

        #endregion

        // update location
        if (earthTrackingState == TrackingState.Tracking)
        {
            if (_messageDisplayed)
            {
                NotificationService.DisplayOnTop($"");
                _messageDisplayed = false;
            }
            IsTracking = true;
            Location = new WorldCoordinates((float)pose.Latitude, (float)pose.Longitude, (float)pose.Altitude);
            Heading = pose.EunRotation;

            if (_initialHeading == null)
            {
                _initialRotation = gameObject.transform.GetChild(0).rotation;
                _initialHeading = pose.EunRotation;
            }
            var so = gameObject.transform.GetChild(0);
            DisplayOnDebug($"{_initialHeading}\n{_initialRotation}\n({Location.Latitude}, {Location.Longitude}, {Location.Altitude})\n{Heading}\n({so.position.x:0.####}, {so.position.y:0.####}, {so.position.z:0.####})\n{so.rotation}");
        }
    }

    /// <summary>
    /// Check EarthState
    /// if the earthstatus is Enabled return true, else false
    /// </summary>
    /// <returns></returns>
    private bool CheckEarthStatus()
    {
        var earthState = earthManager.EarthState;
        if (earthState == EarthState.ErrorEarthNotReady)
        {
            NotificationService.DisplayOnTop("Initializing");
            return false;
        }
        
        if (earthState != EarthState.Enabled)
        {
            string errorMessage =
                "Geospatial sample encountered an EarthState error: " + earthState;
                NotificationService.DisplayOnTop(errorMessage);
            return false;
        }
        return true;
    }

    /// <summary>
    /// Check if the Geospatial API is supported
    /// Returns true if the future is supported, false otherwise
    /// </summary>
    private bool CheckFeatureSupport()
    {
        var featureSupport = earthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
        switch (featureSupport)
        {
            case FeatureSupported.Supported:
                if (arCoreExtensions.ARCoreExtensionsConfig.GeospatialMode == GeospatialMode.Disabled)
                {
                    arCoreExtensions.ARCoreExtensionsConfig.GeospatialMode = GeospatialMode.Enabled;
                    _configurePrepareTime = 3;
                    _enablingGeospatial = true;

                    return false;
                }
                break;
            case FeatureSupported.Unknown:
                return false;
            case FeatureSupported.Unsupported:
                NotificationService.DisplayOnTop("Geospatial API is not available on this device");
                return false;
            default:
                break;
        }
        return true;
    }

    private void DisplayOnDebug(string txt)
    {
        if (isDebugging)
            NotificationService.DisplayOnTop(txt);
    }
}
