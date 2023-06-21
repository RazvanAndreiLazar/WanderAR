using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.UIElements;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIRoutes : MonoBehaviour
{
    public int noTilesPerPage = 6;

    #region PUBLIC GAME OBJECTS
    public GameObject guestTextPrompt;

    public GameObject routeContainer;
    public GameObject routeTilePrefab;

    public Button nextPageButton; 
    public Button prevPageButton; 
    public Button addRouteButton;

    public Button refreshButton;

    public GameObject disabledTrashCan;

    public GameObject addUpdatePanel;
    #endregion

    private RouteListElement[] _listElements;
    private List<RouteDTO> _routeList = new();

    private int page = 1;

    private RouteService _routeService = RouteService.Instance;
    private LandmarkService _landmarkService = LandmarkService.Instance;

    private Coroutine manipulateListCoroutine;

    // Start is called before the first frame update
    void Start()
    {
        SetupTiles();

        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
        addRouteButton.onClick.AddListener(OnAddRoutePressed);
        refreshButton.onClick.AddListener(OnRefreshClicked);

        switch (AppState.UserState)
        {
            case UserState.Logged:
                routeContainer.SetActive(true);
                guestTextPrompt.SetActive(false);
                manipulateListCoroutine = StartCoroutine(ManipulateList());
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

    private void OnEnable()
    {
        manipulateListCoroutine = StartCoroutine(ManipulateList());
    }

    private void OnDisable()
    {
        if (manipulateListCoroutine != null)
            StopCoroutine(manipulateListCoroutine);
    }


    // Update is called once per frame
    void Update()
    {
        if (AppState.UserState == UserState.Logged)
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
                    var listIndex = j + (page - 1) * noTilesPerPage;
                    NotificationService.AddToast($"Route updated: {_routeList[listIndex].Name} -> {route.Name}");
                    _routeList[listIndex] = route;
                    UpdateListOfRoutes(_routeList);
                    // StartCoroutine(ManipulateList());
                };
                comp.UpdateRoute(route.Id);
            };
            _listElements[i].DeleteRouteAction = route =>
            {
                NotificationService.AddDialog("Route", "Are you sure you want to delete this route?", DialogModal.Buttons.CANCEL_OK, 
                    () => {
                        StartCoroutine(_routeService.DeleteRoute(route.Id,
                        () => {
                            NotificationService.AddToast($"Route {route.Name} deleted");
                            UpdateListOfRoutes( _routeList.Where(r => r.Id != route.Id).ToList() );
                            //StartCoroutine(ManipulateList());
                        },
                        ErrorUtils.DisplayError
                    ));
                });
            };

            routeObj.GetComponent<Button>().onClick.AddListener(
                () => OnRouteSelected(_listElements[j].Route)
            );
        }
    }

    private IEnumerator ManipulateList()
    {
        NotificationService.ShowLoadingScreen();

        yield return _routeService.GetRoutes(UpdateListOfRoutes,
        (err) =>
        {
            UpdateListOfRoutes(new List<RouteDTO>());
            ErrorUtils.DisplayError(err);
        });
    }

    private void UpdateListOfRoutes(IEnumerable<RouteDTO> routes)
    {
        _routeList = new List<RouteDTO>(routes);
        refreshButton.gameObject.SetActive(_routeList.Count == 0);
        NotificationService.HideLoadingScreen();
        page = 1;
        OnPageChanged();
    }

    private void OnRouteSelected(RouteDTO route)
    {
        Action helperAction = () => StartCoroutine(_OnRouteSelected(route));

        if (AppState.NavigationState != NavigationState.None)
        {
            NotificationService.AddDialog("Navigation", "Another navigation is active. Do you want to cancel it and start a new one?", DialogModal.Buttons.CANCEL_OK, helperAction);
        }
        else
        {
            helperAction.Invoke();
        }
    }

    private IEnumerator _OnRouteSelected(RouteDTO route)
    {
        NotificationService.ShowLoadingScreen();
        RouteWithLandmarksDTO r = null;

        yield return _routeService.GetRoute(route.Id, _route => r = _route, DisplayServerError);

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
                DisplayServerError
            );
        }

        NotificationService.HideLoadingScreen();
        SessionVariables.Landmarks = landmarks;
        AppState.NavigationState = NavigationState.OneByOne;
        SceneManager.LoadScene(AppScenes.NAVIGATION);
    }

    private void DisplayServerError(ErrorDTO error)
    {
        NotificationService.HideLoadingScreen();
        ErrorUtils.DisplayError(error);
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
            NotificationService.AddToast($"Route {route.Name} added");
            _routeList.Add(route);
            UpdateListOfRoutes(_routeList);
        };
        comp.AddRoute();
    }

    public void OnRefreshClicked()
    {
        refreshButton.gameObject.SetActive(false);
        StopCoroutine(manipulateListCoroutine);
        manipulateListCoroutine = StartCoroutine(ManipulateList());
    }
}
