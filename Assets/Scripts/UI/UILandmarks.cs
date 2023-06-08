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
using static FilterSortDropdown;

public class UILandmarks : MonoBehaviour
{

    public int noTilesPerPage = 9;

    #region PUBLIC GAME OBJECTS

    public GameObject landmarkContainer;
    public GameObject landmarkTilePrefab;

    public Button nextPageButton;
    public Button prevPageButton;

    public GameObject disabledTrashCan;

    public GameObject dropdown;
    public GameObject searchbar;
    #endregion

    #region PRIVATE VARIABLES

    private bool isDropdownVisible = false;

    private int page = 1;

    private LandmarkListElement[] _listElements;

    private LandmarkService _landmarkService = LandmarkService.Instance;
    private List<LandmarkWithDistance> landmarkList = new();
    private List<LandmarkWithDistance> _landmarkList = new();


    private float lastDistanceUpdate;
    private const float DISTANCE_UPDATE_DELTA = 10000;
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        if (AppStates.UserState == UserState.None)
            enabled = false;

        SetupTiles();

        var dropdownScript = dropdown.GetComponent<FilterSortDropdown>();
        searchbar.GetComponent<Searchbar>().OnSearchTextChanged = OnSearchTextChanged;

        OnFilterChanged(dropdownScript.ActiveFilters);

        dropdownScript.OnFilterChanged = OnFilterChanged;
        dropdownScript.OnSortChanged = OnSortChanged;

        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
    }

    // Update is called once per frame
    void Update()
    {
        prevPageButton.interactable = page > 1;
        nextPageButton.interactable = page - 1 < (landmarkList.Count - 1) / noTilesPerPage;
    }

    private void OnFilterChanged(HashSet<Filters> filters)
    {
        var global = filters.Contains(Filters.Global);
        var own = filters.Contains(Filters.Own);

        StartCoroutine(ManipulateList(global, own));
    }

    private void OnSortChanged(Sorts sort)
    {
        switch (sort)
        {
            case Sorts.NameAsc:
                landmarkList = landmarkList.OrderBy(l => l.Landmark.Name).ToList();
                break;
            case Sorts.NameDesc:
                landmarkList = landmarkList.OrderByDescending(l => l.Landmark.Name).ToList();
                break;
            case Sorts.DistanceAsc:
                UpdateLandmarkDistances();
                landmarkList = landmarkList.OrderBy(l => l.Distance).ToList();
                break;
            case Sorts.DistanceDesc:
                UpdateLandmarkDistances();
                landmarkList = landmarkList.OrderByDescending(l => l.Distance).ToList();
                break;
            default:
                break;
        }

        OnListOfLandmarksUpdated();
    }

    private void OnSearchTextChanged(string txt)
    {
        if (txt == "" || txt == null)
            landmarkList = _landmarkList; 
        else
            landmarkList = _landmarkList.FindAll(l => l.Landmark.Name.ToLower().StartsWith(txt.ToLower()));

        OnSortChanged(dropdown.GetComponent<FilterSortDropdown>().SortMode);
    }

    private void UpdateLandmarkDistances()
    {
        if (Time.time - lastDistanceUpdate > DISTANCE_UPDATE_DELTA)
        {
            landmarkList.ForEach(lmk => lmk.Distance = CoordinatesUtils.DistanceBetweenPoints(lmk.Landmark.Coordinates, LocationManager.Location));
            lastDistanceUpdate = Time.time;
        }
    }

    private IEnumerator ManipulateList(bool globalLandmarks, bool ownLandmarks)
    {
        if (AppStates.UserState == UserState.None)
            yield break;

        if (AppStates.UserState == UserState.Guest)
        {
            if (globalLandmarks)
                yield return _landmarkService.GetAllAvailableLandmarksGuest(UpdateListOfLandmarks, DisplayError);
            else
            {
                UpdateListOfLandmarks(new List<NoModelLandmarkDTO>());
            }
            yield break;
        }

        if (globalLandmarks && ownLandmarks)
        {
            yield return _landmarkService.GetAllAvailableLandmarks(UpdateListOfLandmarks, DisplayError);
        }
        else if (globalLandmarks)
        {
            yield return _landmarkService.GetGlobalLandmarks(UpdateListOfLandmarks, DisplayError);
        }
        else if (ownLandmarks)
        {
            yield return _landmarkService.GetOwnLandmarks(UpdateListOfLandmarks, DisplayError);
        }
        else
        {
            UpdateListOfLandmarks(new List<NoModelLandmarkDTO>());
        }
    }

    private void UpdateListOfLandmarks(IEnumerable<NoModelLandmarkDTO> landmarks)
    {
        _landmarkList = new List<NoModelLandmarkDTO>(landmarks).ConvertAll(
            l => {
                var lmk = Landmark.FromNoModelLandmarkDTO(l);
                return new LandmarkWithDistance
                {
                    Landmark = lmk,
                    Distance = CoordinatesUtils.DistanceBetweenPoints(lmk.Coordinates, LocationManager.Location)
                };
            });
        lastDistanceUpdate = Time.time;

        OnSearchTextChanged(searchbar.GetComponent<Searchbar>().SearchText);
        //OnSortChanged(dropdown.GetComponent<FilterSortDropdown>().SortMode);
    }


    private void OnListOfLandmarksUpdated()
    {
        page = 1;
        OnPageChanged();
    }

    private void DisplayError(ErrorDTO error)
    {
        ErrorUtils.DisplayError(error);
    }

    public void NextPage()
    {
        page++;
        OnPageChanged();
    }

    public void PrevPage()
    {
        page--;
        OnPageChanged();
    }

    private void OnPageChanged()
    {

        for (int i = 0; i < noTilesPerPage; i++)
        {
            var listIndex = i + (page - 1) * noTilesPerPage;

            _listElements[i].Landmark = listIndex < landmarkList.Count ? landmarkList[listIndex] : null;
        }
    }

    private void SetupTiles()
    {
        _listElements = new LandmarkListElement[noTilesPerPage];

        for (int i = 0; i < noTilesPerPage; i++)
        {
            int j = i;

            var landmarkObj = Instantiate(landmarkTilePrefab);
            landmarkObj.transform.SetParent(landmarkContainer.transform, false);

            // position
            landmarkObj.transform.Translate(0, -180 * i, 0);

            // linking landmark
            _listElements[i] = landmarkObj.AddComponent<LandmarkListElement>();
            _listElements[i].disabledTrashCan = disabledTrashCan;

            // button functionality
            landmarkObj.GetComponent<Button>().onClick
                .AddListener(() => {
                    OnLandmarkSelected(_listElements[j].Landmark);
                });

            // swipe functionality
            var swipe = landmarkObj.GetComponent<SwipeToAction>();
            swipe.SwipeAction = _ => DeleteLandmark(_listElements[j].Landmark);
        }
    }

    public void OnLandmarkSelected(LandmarkWithDistance selectedLandmark)
    {
        Action helperAction = () =>
        {
            StartCoroutine(_landmarkService.GetLandmark(selectedLandmark.Landmark.Id,
            (lmk) =>
            {
                SessionVariables.Landmarks = new() { Landmark.FromLandmarkDTO(lmk) };
                AppStates.NavigationState = NavigationState.Singular;
                SceneManager.LoadScene(ScenesManager.NAVIGATION);
            },
            ErrorUtils.DisplayError
            ));
        };

        
        if (AppStates.NavigationState != NavigationState.None)
        {
            NotificationService.AddDialog("Navigation", "Another navigation is active. Do you want to cancel it and start a new one?", DialogModal.Buttons.CANCEL_OK, helperAction);
        }
        else
        {
            helperAction.Invoke();
        }
    }

    private void DeleteLandmark(LandmarkWithDistance landmark)
    {
        NotificationService.AddDialog("Landmark", "Are you sure you want to delete this landmark?", DialogModal.Buttons.CANCEL_OK, () =>
        {
            StartCoroutine(_landmarkService.DeleteLandmark(landmark.Landmark.Id,
                () =>
                {
                    landmarkList.Remove(landmark);
                    OnListOfLandmarksUpdated();
                }, 
                ErrorUtils.DisplayError));
        });
    }
}
