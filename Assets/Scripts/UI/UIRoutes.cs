using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.UIElements;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIRoutes : MonoBehaviour
{
    public int noTilesPerPage = 7;

    #region PUBLIC GAME OBJECTS
    public GameObject guestTextPrompt;

    public GameObject routeContainer;
    public GameObject routeTilePrefab;

    public Button nextPageButton; 
    public Button prevPageButton; 
    public Button addRouteButton; 

    public GameObject disabledTrashCan;

    public GameObject addUpdatePanel;
    #endregion

    private RouteListElement[] _listElements;
    private List<RouteDTO> _routeList = new();

    private int page = 1;

    private RouteService _routeService = RouteService.Instance;
    private LandmarkService _landmarkService = LandmarkService.Instance;

    // Start is called before the first frame update
    void Start()
    {
        SetupTiles();

        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
        addRouteButton.onClick.AddListener(OnAddRoutePressed);

        switch (AppStates.UserState)
        {
            case UserState.Logged:
                routeContainer.SetActive(true);
                guestTextPrompt.SetActive(false);
                StartCoroutine(ManipulateList());
                break;
            case UserState.Guest:
                addRouteButton.interactable = false;
                prevPageButton.interactable = false;
                nextPageButton.interactable = false;
                routeContainer.SetActive(false);
                guestTextPrompt.SetActive(true);
                break;
            case UserState.None:
                gameObject.SetActive(false);
                break;
            default:
                break;
        }
    }


    // Update is called once per frame
    void Update()
    {
        if (AppStates.UserState == UserState.Logged)
        {
            prevPageButton.interactable = page > 1;
            nextPageButton.interactable = page - 1 < (_routeList.Count - 1) / noTilesPerPage;
        }
    }

    private void SetupTiles()
    {
        _listElements = new RouteListElement[noTilesPerPage];

        for (int i = 0; i < noTilesPerPage; i++)
        {
            int j = i;

            var routeObj = Instantiate(routeTilePrefab);
            routeObj.transform.SetParent(routeContainer.transform, false);

            routeObj.transform.Translate(0, -260 * i, 0);

            _listElements[i] = routeObj.GetComponent<RouteListElement>();
            _listElements[i].disabledTrashCan = disabledTrashCan;
            _listElements[i].UpdateRouteAction = route =>
            {
                addUpdatePanel.SetActive(true);
                var comp = addUpdatePanel.GetComponent<UIAddUpdateRoute>();
                comp.SuccessAction = route =>
                {
                    // TODO Change: add route to list manually and trigger a list update without querying the server
                    StartCoroutine(ManipulateList());
                };
                comp.UpdateRoute(route.Id);
            };
            _listElements[i].DeleteRouteAction = route =>
            {
                StartCoroutine(_routeService.DeleteRoute(route.Id,
                    () => {
                        StartCoroutine(ManipulateList());
                    },
                    err => { }
                ));
            };

            routeObj.GetComponent<Button>().onClick.AddListener(
                () => OnRouteSelected(_listElements[j].Route)
            );
        }
    }

    private IEnumerator ManipulateList()
    {
        yield return _routeService.GetRoutes(UpdateListOfRoutes, (err) => { });
    }

    private void UpdateListOfRoutes(IEnumerable<RouteDTO> routes)
    {
        _routeList = new List<RouteDTO>(routes);
        page = 1;
        OnPageChanged();
    }

    private void OnRouteSelected(RouteDTO route)
    {
        StartCoroutine(_OnRouteSelected(route));
    }

    private IEnumerator _OnRouteSelected(RouteDTO route)
    {
        RouteWithLandmarksDTO r = null;

        yield return _routeService.GetRoute(route.Id, _route => r = _route, err => { });

        List<Landmark> landmarks = new();

        foreach (var lmk in r?.Landmarks)
        {
            yield return _landmarkService.GetLandmark(lmk.Id, 
                _landmark => landmarks.Add(new Landmark
                {
                    Id = _landmark.Id,
                    Name = _landmark.Name,
                    City = _landmark.City,
                    UserId = _landmark.UserId,
                    Coordinates = new(_landmark.Latitude, _landmark.Longitude, _landmark.Altitude),
                    Size = new(_landmark.SizeX, _landmark.SizeY, _landmark.SizeZ),
                    Model = _landmark.Model
                }),
                err => { }
            );
        }

        SessionVariables.Landmarks = landmarks;
        AppStates.NavigationState = NavigationState.OneByOne;
        SceneManager.LoadScene(ScenesManager.NAVIGATION);
    }

    private void NextPage()
    {
        page++;
        OnPageChanged();
    }

    private void PrevPage()
    {
        page--;
        OnPageChanged();
    }
    private void OnPageChanged()
    {

        for (int i = 0; i < noTilesPerPage; i++)
        {
            var listIndex = i + (page - 1) * noTilesPerPage;

            _listElements[i].Route = listIndex < _routeList.Count ? _routeList[listIndex] : null;
        }
    }

    private void OnAddRoutePressed()
    {
        addUpdatePanel.SetActive(true);
        var comp = addUpdatePanel.GetComponent<UIAddUpdateRoute>();
        comp.SuccessAction = route =>
        {
            // TODO Change: add route to list manually and trigger a list update without querying the server
            StartCoroutine(ManipulateList());
        };
        comp.AddRoute();
    }
}
