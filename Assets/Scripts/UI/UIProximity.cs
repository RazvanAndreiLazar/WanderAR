using Assets.Scripts.Services;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIProximity : MonoBehaviour
{
    public TMP_InputField maxDistance;
    public Button startButton;

    public int maxDistanceUpperLimit = 50000;
    public int maxDistanceLowerLimit = 500;

    public float latitude;
    public float longitude;
    public float altitude;

    private LandmarkService _landmarkService = LandmarkService.Instance;

    // Start is called before the first frame update
    void Start()
    {
        startButton.onClick.AddListener(StartProximityMode);
        maxDistance.onDeselect.AddListener((s) => BoundMaxDistance(s));
    }

    // Update is called once per frame
    void Update()
    {
    }

    private void BoundMaxDistance(string s)
    {

        if (int.TryParse(maxDistance.text, out int maxDist))
        {
            if (maxDist < maxDistanceLowerLimit)
                maxDistance.text = maxDistanceLowerLimit.ToString();
            if (maxDist > maxDistanceUpperLimit)
                maxDistance.text = maxDistanceUpperLimit.ToString();
        }
    }

    private void StartProximityMode()
    {
        if (int.TryParse(maxDistance.text, out int maxDist))
        {
            SessionVariables.ProximityRange = maxDist;
            AppStates.NavigationState = NavigationState.Proximity;
            SceneManager.LoadScene(ScenesManager.NAVIGATION);

            //StartCoroutine(_landmarkService.GetProxyLandmarks(maxDist, latitude, longitude, altitude,
            //    (landmarks) =>
            //    {
            //        SessionVariables.Landmarks = new(landmarks);
            //        AppStates.NavigationState = NavigationState.Proximity;
            //        SceneManager.LoadScene(ScenesManager.NAVIGATION);
            //    }, 
            //    (err) => { }
            //));
        }
    }
}
