using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UINavigation : MonoBehaviour
{
    public GameObject informationPannel;
    public TMP_Text landmarkNameTxt;
    public TMP_Text distanceTxt;
    
    public GameObject routeInformationPannel;
    public TMP_Text routeLandmarkNameTxt;
    public TMP_Text routeDistanceTxt;
    public Button prevLandmarkBut;
    public Button nextLandmarkBut;
    public Button switchNavBut;
    public InputLandmarkName inputLandmarkName;

    public NavManager navManager;

    private Landmark trackedLandmark;


    // Start is called before the first frame update
    void Start()
    {
        inputLandmarkName.OnClosed = () =>
        {

        };

        switch (AppStates.NavigationState)
        {
            case NavigationState.None:
                informationPannel.SetActive(false);
                routeInformationPannel.SetActive(false);
                break;
            case NavigationState.Proximity:
                informationPannel.SetActive(true);
                routeInformationPannel.SetActive(false);
                break;
            case NavigationState.Singular:
                informationPannel.SetActive(true);
                routeInformationPannel.SetActive(false);
                trackedLandmark = SessionVariables.CurrentLandmark;
                landmarkNameTxt.text = trackedLandmark.Name;
                StartCoroutine(UpdateDistance());
                break;
            case NavigationState.AllAtOnce:
                informationPannel.SetActive(false);
                routeInformationPannel.SetActive(true);
                break;
            case NavigationState.OneByOne:
                informationPannel.SetActive(false);
                routeInformationPannel.SetActive(true);

                trackedLandmark = SessionVariables.CurrentLandmark;
                routeLandmarkNameTxt.text = trackedLandmark.Name;

                prevLandmarkBut.enabled = true;
                nextLandmarkBut.enabled = true;
                prevLandmarkBut.onClick.AddListener(PreviousLandmark);
                nextLandmarkBut.onClick.AddListener(NextLandmark);
                switchNavBut.onClick.AddListener(SwitchMode);

                StartCoroutine(RouteUpdateDistance());
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

    private IEnumerator RouteUpdateDistance()
    {
        while (true)
        {
            routeDistanceTxt.text = CoordinatesUtils.DistanceBetweenPoints(LocationManager.Location, trackedLandmark.Coordinates).ToString();

            Debug.Log(routeDistanceTxt.text);

            yield return new WaitForSeconds(1);
        }
    }

    #region ButtonOnClicks

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
        inputLandmarkName.gameObject.SetActive(true);
        inputLandmarkName.Focus();
    }

    public void PreviousLandmark()
    {
        SessionVariables.NavigationLandmarkIndexDown();

        trackedLandmark = SessionVariables.CurrentLandmark;
        routeLandmarkNameTxt.text = trackedLandmark.Name;
    }
    public void NextLandmark()
    {
        SessionVariables.NavigationLandmarkIndexUp();

        trackedLandmark = SessionVariables.CurrentLandmark;
        routeLandmarkNameTxt.text = trackedLandmark.Name;
    }
    public void SwitchMode()
    {
        if (AppStates.NavigationState == NavigationState.OneByOne)
        {
            AppStates.NavigationState = NavigationState.AllAtOnce;
            trackedLandmark = null;
            StopAllCoroutines();
            nextLandmarkBut.gameObject.SetActive(false);
            prevLandmarkBut.gameObject.SetActive(false);

            switchNavBut.transform.GetChild(0).gameObject.SetActive(false);
            switchNavBut.transform.GetChild(1).gameObject.SetActive(true);

            navManager.SwitchRouteNavigationMode();
        }
        else if (AppStates.NavigationState == NavigationState.AllAtOnce)
        {
            AppStates.NavigationState = NavigationState.OneByOne;
            StopAllCoroutines();
            trackedLandmark = SessionVariables.CurrentLandmark;
            routeLandmarkNameTxt.text = trackedLandmark.Name;

            prevLandmarkBut.gameObject.SetActive(true);
            nextLandmarkBut.gameObject.SetActive(true);

            switchNavBut.transform.GetChild(0).gameObject.SetActive(true);
            switchNavBut.transform.GetChild(1).gameObject.SetActive(false);

            navManager.SwitchRouteNavigationMode();
        }
    }

    #endregion

}
