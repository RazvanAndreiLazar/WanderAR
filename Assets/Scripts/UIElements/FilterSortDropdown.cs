using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FilterSortDropdown : MonoBehaviour
{
    private enum State
    {
        Closed, Expanded
    }

    public enum Sorts
    {
        NameAsc, NameDesc, DistanceAsc, DistanceDesc
    }
    public enum Filters
    {
        Own, Global
    }

    private Sorts sortMode = Sorts.DistanceAsc;
    private HashSet<Filters> filters = new HashSet<Filters> { Filters.Global, Filters.Own };
    
    private State state;

    public Button dropdownButton;
    public GameObject dropdownPanel;

    public Button ownLandmarks;
    public Button globalLandmarks;
    public Button nameSort;
    public Button distanceSort;

    private Image ownLandmarkImg;
    private Image globalLandmarkImg;

    private Image nameAscSortImg;
    private Image nameDescSortImg;
    private Image distAscSortImg;
    private Image distDescSortImg;

    public Sorts SortMode => sortMode;
    public HashSet<Filters> ActiveFilters => filters;

    public Action<Sorts> OnSortChanged;
    public Action<HashSet<Filters>> OnFilterChanged;

    // Start is called before the first frame update
    void Start()
    {
        ownLandmarkImg = ownLandmarks.transform.GetChild(0).GetComponent<Image>();
        ownLandmarkImg.enabled = true;
        globalLandmarkImg = globalLandmarks.transform.GetChild(0).GetComponent<Image>();
        globalLandmarkImg.enabled = true;

        nameAscSortImg = nameSort.transform.GetChild(0).GetComponent<Image>();
        nameDescSortImg = nameSort.transform.GetChild(1).GetComponent<Image>();
        distAscSortImg = distanceSort.transform.GetChild(0).GetComponent<Image>();
        distDescSortImg = distanceSort.transform.GetChild(1).GetComponent<Image>();

        nameAscSortImg.enabled = true;
        nameDescSortImg.enabled = false;
        distAscSortImg.enabled = false;
        distDescSortImg.enabled = false;

        state = State.Closed;
        dropdownPanel.SetActive(false);

        dropdownButton.onClick.AddListener(OnDropdownButClicked);
        nameSort.onClick.AddListener(OnNameSortClicked);
        distanceSort.onClick.AddListener(OnDistanceSortClicked);
        ownLandmarks.onClick.AddListener(OnOwnFilterClicked);
        globalLandmarks.onClick.AddListener(OnGlobalFilterClicked);
    }

    #region Button OnClick
    private void OnDropdownButClicked()
    {
        switch (state)
        {
            case State.Closed:
                dropdownPanel.SetActive(true);
                state = State.Expanded;
                break;
            case State.Expanded:
                dropdownPanel.SetActive(false);
                state = State.Closed;
                break;
            default:
                break;
        }
    }

    private void OnNameSortClicked()
    {
        if (sortMode == Sorts.NameAsc)
        {
            sortMode = Sorts.NameDesc;
            nameAscSortImg.enabled = false;
            nameDescSortImg.enabled = true;
        }
        else
        {
            sortMode = Sorts.NameAsc;
            nameAscSortImg.enabled = true;
            nameDescSortImg.enabled = false;
        }

        distAscSortImg.enabled = false;
        distDescSortImg.enabled = false;
    
        OnSortChanged.Invoke(sortMode);
    }
    private void OnDistanceSortClicked()
    {
        if (sortMode == Sorts.DistanceAsc)
        {
            sortMode = Sorts.DistanceDesc;
            distAscSortImg.enabled = false;
            distDescSortImg.enabled = true;
        }
        else
        {
            sortMode = Sorts.DistanceAsc;
            distAscSortImg.enabled = true;
            distDescSortImg.enabled = false;
        }

        nameAscSortImg.enabled = false;
        nameDescSortImg.enabled = false;

        OnSortChanged.Invoke(sortMode);
    }
    private void OnOwnFilterClicked()
    {
        if (filters.Contains(Filters.Own))
        {
            filters.Remove(Filters.Own);
            ownLandmarkImg.enabled = false;
        }
        else
        {
            filters.Add(Filters.Own);
            ownLandmarkImg.enabled = true;
        }
        OnFilterChanged.Invoke(filters);
    }
    private void OnGlobalFilterClicked()
    {
        if (filters.Contains(Filters.Global))
        {
            filters.Remove(Filters.Global);
            globalLandmarkImg.enabled = false;
        }
        else
        {
            filters.Add(Filters.Global);
            globalLandmarkImg.enabled = true;
        }
        OnFilterChanged.Invoke(filters);
    }
    #endregion

    public void ResetValues()
    {
        sortMode = Sorts.DistanceAsc;
        filters = new HashSet<Filters> { Filters.Global, Filters.Own };

        ownLandmarkImg.enabled = true;
        globalLandmarkImg.enabled = true;

        nameAscSortImg.enabled = true;
        nameDescSortImg.enabled = false;
        distAscSortImg.enabled = false;
        distDescSortImg.enabled = false;

        state = State.Closed;
        dropdownPanel.SetActive(false);
    }
}
