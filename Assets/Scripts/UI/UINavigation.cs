using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
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


        navManager.StartNavigating();


        switch (AppState.NavigationState)
        {
            case NavigationState.None:
                informationPannel.SetActive(false);
                routeInformationPannel.SetActive(false);
                break;
            case NavigationState.Proximity:
                informationPannel.SetActive(true);
                routeInformationPannel.SetActive(false);
                landmarkNameTxt.text = "";
                distanceTxt.text = "";
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
                routeLandmarkNameTxt.text = "";
                routeDistanceTxt.text = "";
                break;
            case NavigationState.OneByOne:
                informationPannel.SetActive(false);
                routeInformationPannel.SetActive(true);

                trackedLandmark = SessionVariables.CurrentLandmark;
                routeLandmarkNameTxt.text = trackedLandmark.Name;

                prevLandmarkBut.enabled = true;
                nextLandmarkBut.enabled = true;
                SetLandmarkButtonsInteractibility();
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
            var dist = CoordinatesUtils.DistanceBetweenPoints(LocationManager.Location, trackedLandmark.Coordinates);
            distanceTxt.text = dist < 10000 ? $"{Mathf.Floor(dist)}m" : $"{Mathf.Floor(dist / 1000)}km";

            yield return new WaitForSeconds(1);
        }
    }

    private IEnumerator RouteUpdateDistance()
    {
        while (true)
        {
            var dist = CoordinatesUtils.DistanceBetweenPoints(LocationManager.Location, trackedLandmark.Coordinates);
            routeDistanceTxt.text = dist < 10000 ? $"{Mathf.Floor(dist)}m" : $"{Mathf.Floor(dist / 1000)}km";

            Debug.Log(routeDistanceTxt.text);

            yield return new WaitForSeconds(1);
        }
    }

    #region ButtonOnClicks

    public void BackToMenu()
    {
        // Just Navigate back to the menu
        SceneManager.LoadScene(AppScenes.MENU);
    }

    public void ExitNavigation()
    {
        NotificationService.AddDialog("Navigation", "Are you sure you want to exit navigation?", DialogModal.Buttons.CANCEL_OK, () =>
        {
            // Set the navigation state back to none and stop the navigation
            try
            {
                AppState.NavigationState = NavigationState.None;
                navManager.StopNavigating();
                informationPannel?.SetActive(false);
                routeInformationPannel?.SetActive(false);
            }
            catch (Exception E)
            {

                ErrorUtils.DisplayError(E.Message + " " + E.InnerException.Message);
            }
        });

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

        SetLandmarkButtonsInteractibility();
    }
    public void NextLandmark()
    {
        SessionVariables.NavigationLandmarkIndexUp();

        trackedLandmark = SessionVariables.CurrentLandmark;
        routeLandmarkNameTxt.text = trackedLandmark.Name;

        SetLandmarkButtonsInteractibility();
    }

    private void SetLandmarkButtonsInteractibility()
    {
        prevLandmarkBut.interactable = SessionVariables.NavigationLandmarkIndex > 0;
        nextLandmarkBut.interactable = SessionVariables.NavigationLandmarkIndex < SessionVariables.Landmarks.Count - 1;
    }

    public void SwitchMode()
    {
        if (AppState.NavigationState == NavigationState.OneByOne)
        {
            AppState.NavigationState = NavigationState.AllAtOnce;
            trackedLandmark = null;
            StopAllCoroutines();
            routeLandmarkNameTxt.text = "";
            routeDistanceTxt.text = "";

            nextLandmarkBut.gameObject.SetActive(false);
            prevLandmarkBut.gameObject.SetActive(false);

            switchNavBut.transform.GetChild(0).gameObject.SetActive(false);
            switchNavBut.transform.GetChild(1).gameObject.SetActive(true);

            navManager.SwitchRouteNavigationMode();
        }
        else if (AppState.NavigationState == NavigationState.AllAtOnce)
        {
            AppState.NavigationState = NavigationState.OneByOne;
            StopAllCoroutines();
            trackedLandmark = SessionVariables.CurrentLandmark;
            routeLandmarkNameTxt.text = trackedLandmark.Name;

            prevLandmarkBut.gameObject.SetActive(true);
            nextLandmarkBut.gameObject.SetActive(true);

            switchNavBut.transform.GetChild(0).gameObject.SetActive(true);
            switchNavBut.transform.GetChild(1).gameObject.SetActive(false);

            navManager.SwitchRouteNavigationMode();

            StartCoroutine(RouteUpdateDistance());
        }
    }

    #endregion

}
