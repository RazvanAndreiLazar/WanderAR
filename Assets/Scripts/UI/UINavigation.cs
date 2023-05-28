using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UINavigation : MonoBehaviour
{
    public GameObject informationPannel;
    public TMP_Text landmarkNameTxt;
    public TMP_Text distanceTxt;

    public NavManager navManager;

    private Landmark trackedLandmark;

    // Start is called before the first frame update
    void Start()
    {
        informationPannel.SetActive(true);

        switch (AppStates.NavigationState)
        {
            case NavigationState.None:
                informationPannel.SetActive(false);
                break;
            case NavigationState.Proximity:
                break;
            case NavigationState.OneByOne:
                trackedLandmark = SessionVariables.CurrentLandmark;
                landmarkNameTxt.text = trackedLandmark.Name;
                StartCoroutine(UpdateDistance());
                break;
            case NavigationState.AllAtOnce:
                break;
            default:
                break;
        }
    }

    private IEnumerator UpdateDistance()
    {
        while (true)
        {
            distanceTxt.text = CoordinatesUtils.DistanceBetweenPoints(LocationManager.Location, trackedLandmark.Coordinates).ToString();

            yield return new WaitForSeconds(1);
        }
    }

    public void BackToMenu()
    {
        // Just Navigate back to the menu
        SceneManager.LoadScene(ScenesManager.MENU);
    }

    public void ExitNavigation()
    {
        // Set the navigation state back to none and stop the navigation
        AppStates.NavigationState = NavigationState.None;
        navManager.StopNavigating();
        informationPannel?.SetActive(false);
    }

    public void DropPin()
    {

    }
}
