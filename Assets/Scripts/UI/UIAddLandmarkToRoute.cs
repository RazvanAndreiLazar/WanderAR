using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.UIElements;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static FilterSortDropdown;

public class UIAddLandmarkToRoute : MonoBehaviour
{

    #region PUBLIC GAME OBJECTS
    public Button addButton;
    public TMP_Text addButtonTxt;
    public Button backButton;

    public Button nextPageButton;
    public Button prevPageButton;

    public GameObject landmarkContainer;

    public GameObject dropdown;
    public GameObject searchbar;
    #endregion

    private List<LandmarkWithDistance> landmarkList = new();
    private List<LandmarkWithDistance> _landmarkList = new();
    private HashSet<int> _selectedLandmarks = new();

    private int noTilesPerPage;
    private RouteLandmarkAddListElement[] _listElements;

    private LandmarkService _landmarkService = LandmarkService.Instance;

    private int page = 1;

    private int selectedCount;
    public int SelectedCount
    {
        get { return selectedCount; }
        set { 
            selectedCount = value;
            if (selectedCount > 0)
            {
                addButton.interactable = true;
                addButtonTxt.text = $"Add ({value})";
            }
            else
            {
                addButton.interactable = false;
                addButtonTxt.text = "Add";
            }
        }
    }


    private Action<List<NoModelLandmarkDTO>> actionCompleteCallback;

    private float lastDistanceUpdate;
    private const float DISTANCE_UPDATE_DELTA = 10000;
    // Start is called before the first frame update
    void Start()
    {
        noTilesPerPage = landmarkContainer.transform.childCount;
        _listElements = new RouteLandmarkAddListElement[noTilesPerPage];

        SelectedCount = 0;

        for (int i = 0; i < landmarkContainer.transform.childCount; i++)
        {
            var j = i;
            _listElements[i] = landmarkContainer.transform.GetChild(i).GetComponent<RouteLandmarkAddListElement>();
            _listElements[i].SetOnClickAction(
                lmk =>
                { 
                    if (_selectedLandmarks.Contains(lmk.Landmark.Id))
                    {
                        _listElements[j].IsSelected = false;
                        _selectedLandmarks.Remove(lmk.Landmark.Id);
                        SelectedCount--;
                    }
                    else
                    {
                        _listElements[j].IsSelected = !_listElements[j].IsSelected;
                        _selectedLandmarks.Add(lmk.Landmark.Id);
                        SelectedCount++;
                    }
                });
        }

        searchbar.GetComponent<Searchbar>().OnSearchTextChanged = OnSearchTextChanged;

        var dropdownScript = dropdown.GetComponent<FilterSortDropdown>();

        dropdownScript.OnFilterChanged = OnFilterChanged;
        dropdownScript.OnSortChanged = OnSortChanged;

        addButton.onClick.AddListener(OnAddPressed);
        backButton.onClick.AddListener(OnBackPressed);
        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
    }

    // Update is called once per frame
    void Update()
    {
        prevPageButton.interactable = page > 1;
        nextPageButton.interactable = page - 1 < (landmarkList.Count - 1) / noTilesPerPage;
    }

    public void StartAddingLandmarks(Action<List<NoModelLandmarkDTO>> callback)
    {
        OnFilterChanged(dropdown.GetComponent<FilterSortDropdown>().ActiveFilters);
        actionCompleteCallback = callback;
    }

    private void OnFilterChanged(HashSet<Filters> filters)
    {
        var global = filters.Contains(Filters.Global);
        var own = filters.Contains(Filters.Own);

        StartCoroutine(ManipulateList(global, own));
    }

    private void OnSearchTextChanged(string txt)
    {
        if (txt == "" || txt == null)
            landmarkList = _landmarkList;
        else
            landmarkList = _landmarkList.FindAll(l => l.Landmark.Name.ToLower().StartsWith(txt.ToLower()));

        OnSortChanged(dropdown.GetComponent<FilterSortDropdown>().SortMode);
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
    }

    private void OnListOfLandmarksUpdated()
    {
        page = 1;
        OnPageChanged();
    }

    private void DisplayError(ErrorDTO error)
    {

    }

    private void OnPageChanged()
    {

        for (int i = 0; i < noTilesPerPage; i++)
        {
            var listIndex = i + (page - 1) * noTilesPerPage;
            var j = i;

            if (listIndex < landmarkList.Count)
            {
                _listElements[i].Landmark = landmarkList[listIndex];
                _listElements[i].IsSelected = _selectedLandmarks.Contains(landmarkList[listIndex].Landmark.Id);
            }
            else
            {
                _listElements[i].Landmark = null;
            }
        }
    }

    private void Exit()
    {
        _selectedLandmarks.Clear();
        SelectedCount = 0;

        searchbar.GetComponent<Searchbar>().ResetValues();
        dropdown.GetComponent<FilterSortDropdown>().ResetValues();

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

    private void OnBackPressed()
    {
        Exit();
    }

    private void OnAddPressed()
    {
        actionCompleteCallback.Invoke(
            landmarkList
            .FindAll(x => _selectedLandmarks.Contains(x.Landmark.Id))
            .ConvertAll(l => l.Landmark.ToNoModelLandmarkDTO())
        );
        Exit();
    }

    #endregion
}
