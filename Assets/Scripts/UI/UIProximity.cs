using Assets.Scripts.Services;
using Assets.Scripts.Utils;
using System;
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
            Action helperAction = () =>
            {
                SessionVariables.ProximityRange = maxDist;
                AppState.NavigationState = NavigationState.Proximity;
                SceneManager.LoadScene(AppScenes.NAVIGATION);
            };

            if (AppState.NavigationState != NavigationState.None)
            {
                NotificationService.AddDialog("Navigation", "Another navigation is active. Do you want to cancel it and start a new one?", DialogModal.Buttons.CANCEL_OK, helperAction);
            }
            else
            {
                helperAction.Invoke();
            }
        } 
        else
        {
            ErrorUtils.DisplayError("The number input is not valid");
        }
    }
}
