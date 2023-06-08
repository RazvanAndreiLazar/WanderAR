using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Services;
using Assets.Scripts.UIElements;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIAddUpdateRoute : MonoBehaviour
{
    private enum AddOrUpdate
    {
        Add, Update
    }

    public Action<RouteDTO> SuccessAction;

    #region PUBLIC GAME OBJECTS
    public Button saveButton;
    public Button cancelButton;
    public Button addLandmarkButton;

    public TMP_InputField nameTxt;
    public TMP_Text titleTxt;

    public Button nextPageButton;
    public Button prevPageButton;

    public GameObject landmarkContainer;

    public GameObject AddLandmarksScreen;
    #endregion

    private const int NO_TILES_PER_PAGE = 9;

    // !! DO NOT ADD TO _route.Landmarks -> create a new one and update I think
    private RouteWithLandmarksDTO _route = null;
    
    private RouteLandmarkListElement[] _listElements;
    private RouteService _routeService = RouteService.Instance;
    private string _routeName = string.Empty;

    private int page = 1;

    private AddOrUpdate _addOrUpdate;

    private void Start()
    {
        _listElements = new RouteLandmarkListElement[NO_TILES_PER_PAGE];

        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
        cancelButton.onClick.AddListener(OnCancelPressed);
        addLandmarkButton.onClick.AddListener(OnAddLandmarkPressed);
        saveButton.onClick.AddListener(OnSavePressed);

        for (int i = 0; i < landmarkContainer.transform.childCount; i++)
        {
            var j = i;
            _listElements[i] = landmarkContainer.transform.GetChild(i).GetComponent<RouteLandmarkListElement>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        _route.Name = nameTxt.text;

        prevPageButton.interactable = page > 1;
        nextPageButton.interactable = page - 1 < (_route.Landmarks.Count - 1) / NO_TILES_PER_PAGE;
    }

    public void AddRoute()
    {
        titleTxt.text = "Add route";
        _addOrUpdate = AddOrUpdate.Add;
        _route = new RouteWithLandmarksDTO()
        {
            Name = "",
            Landmarks = new()
        };
    }

    public void UpdateRoute(int routeId)
    {
        titleTxt.text = "Update route";
        _addOrUpdate = AddOrUpdate.Update;
        StartCoroutine(_routeService.GetRoute(routeId, UpdateRouteLandmarks, ErrorUtils.DisplayError));
    }


    private void UpdateRouteLandmarks(RouteWithLandmarksDTO route)
    {
        nameTxt.text = route.Name;
        _route = route;
        OnListModified();
    }

    private void OnListModified()
    {
        page = 1;
        OnPageChanged();
    }


    private void OnPageChanged()
    {

        for (int i = 0; i < NO_TILES_PER_PAGE; i++)
        {
            var listIndex = i + (page - 1) * NO_TILES_PER_PAGE;
            var j = i;

            _listElements[i].Landmark = listIndex < _route.Landmarks.Count ? _route.Landmarks[listIndex] : null;
            _listElements[i].SetDownButtonEnabled(listIndex < _route.Landmarks.Count - 1);
            _listElements[i].SetUpButtonEnabled(listIndex > 0);
            _listElements[i].UpAction = () =>
            {
                if (listIndex > 0)
                {
                    Swap(_route.Landmarks, listIndex - 1, listIndex);
                    _listElements[j].Landmark = _route.Landmarks[listIndex];
                    if (j > 0) _listElements[j - 1].Landmark = _route.Landmarks[listIndex - 1];
                }
            };
            _listElements[i].DownAction = () =>
            {
                if (listIndex < _route.Landmarks.Count - 1)
                {
                    Swap(_route.Landmarks, listIndex + 1, listIndex);
                    _listElements[j].Landmark = _route.Landmarks[listIndex];
                    if (j < NO_TILES_PER_PAGE - 1) _listElements[j + 1].Landmark = _route.Landmarks[listIndex + 1];
                }
            };
            _listElements[i].DeleteAction = () =>
            {
                _route.Landmarks.RemoveAt(j);
                OnListModified();
            };
        }
    }

    private void Swap<T>(List<T> list, int i1, int i2)
    {
        T temp = list[i1];
        list[i1] = list[i2];
        list[i2] = temp;
    }



    private void CommitUpdateRoute()
    {
        StartCoroutine(_routeService.UpdateRoute(
            new RouteUpdateDTO
            {
                Id = _route.Id,
                Name = _route.Name,
                Landmarks = _route.Landmarks.ConvertAll(l => l.Id)
            },
            r =>
            {
                _route = r;
                Exit();
                SuccessAction.Invoke(new RouteDTO
                {
                    Id = r.Id,
                    Name = r.Name,
                    TotalDistance = r.TotalDistance,
                    UserId = r.UserId,
                    NoLandmarks = r.Landmarks.Count
                });
            },
            ErrorUtils.DisplayError
        ));
    }

    private void CommitAddRoute()
    {
        StartCoroutine(_routeService.AddRoute(
            new RouteAddDTO
            {
                Name = _route.Name,
                Landmarks = _route.Landmarks.ConvertAll(l => l.Id)
            },
            r =>
            {
                _route = r;
                Exit();
                SuccessAction.Invoke(new RouteDTO
                {
                    Id = r.Id,
                    Name = r.Name,
                    TotalDistance = r.TotalDistance,
                    UserId = r.UserId,
                    NoLandmarks = r.Landmarks.Count
                });
            },
            ErrorUtils.DisplayError
        ));
    }

    private void Exit()
    {
        UpdateRouteLandmarks(new RouteWithLandmarksDTO
        {
            Name = "",
            Landmarks = new()
        });
        gameObject.SetActive(false);
    }

    #region Button OnClicks
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

    private void OnCancelPressed()
    {
        Exit();
    }

    private void OnAddLandmarkPressed()
    {
        AddLandmarksScreen.SetActive(true);
        AddLandmarksScreen.GetComponent<UIAddLandmarkToRoute>().StartAddingLandmarks(
            landmarks => {
                landmarks.ForEach(
                    lmk =>
                    {
                        _route.Landmarks.Add(new RouteLandmarkDTO
                        {
                            Id = lmk.Id,
                            Name = lmk.Name
                        });
                    }
                );
                OnListModified();
            }
        );
    }

    private void OnSavePressed()
    {
        switch (_addOrUpdate)
        {
            case AddOrUpdate.Add:
                CommitAddRoute();
                break;
            case AddOrUpdate.Update:
                CommitUpdateRoute();
                break;
            default:
                break;
        }
    }

    #endregion
}
