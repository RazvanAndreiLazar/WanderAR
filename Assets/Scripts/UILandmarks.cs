using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Services;
using Assets.Scripts.UIElements;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UILandmarks : MonoBehaviour
{
    internal enum Sorts
    {
        Asc, Desc
    }
    internal enum Filters
    {
        Mine, Global
    }

    public int noTilesPerPage = 10;

    #region PUBLIC GAME OBJECTS

    public Button dropdownButton;
    public GameObject dropdown;

    public GameObject MyLandmarks;
    public GameObject GlobalLandmarks;
    public GameObject AscendSort;
    public GameObject DescendSort;

    public GameObject landmarkContainer;
    public GameObject landmarkTilePrefab;

    public Button nextPageButton;
    public Button prevPageButton;

    public GameObject disabledTrashCan;
    #endregion

    #region PRIVATE VARIABLES

    private bool isDropdownVisible = false;

    private int page = 1;

    private LandmarkListElement[] _listElemets;

    private Image myLandmarkImg;
    private Image globalLandmarkImg;
    private Image ascendSortImg;
    private Image descendSortImg;

    private Sorts sortMode = Sorts.Asc;
    private HashSet<Filters> filters = new HashSet<Filters> { Filters.Global, Filters.Mine };

    private LandmarkService _landmarkService = LandmarkService.Instance;
    private List<NoModelLandmarkDTO> _landmarkList = new();

    #endregion

    // Start is called before the first frame update
    void Start()
    {
        SetupTiles();


        myLandmarkImg = MyLandmarks.transform.GetChild(0).GetComponent<Image>();
        globalLandmarkImg = GlobalLandmarks.transform.GetChild(0).GetComponent<Image>();
        ascendSortImg = AscendSort.transform.GetChild(0).GetComponent<Image>();
        descendSortImg = DescendSort.transform.GetChild(0).GetComponent<Image>();

        OnFilterChanged();
        OnSortChanged();

        dropdownButton.onClick.AddListener(OnDropdownPressed);
        MyLandmarks.GetComponent<Button>().onClick.AddListener(
            () => {
                if (filters.Contains(Filters.Mine)) filters.Remove(Filters.Mine);
                else filters.Add(Filters.Mine);
                OnFilterChanged();
            } 
        );
        GlobalLandmarks.GetComponent<Button>().onClick.AddListener(
            () => {
                if (filters.Contains(Filters.Global)) filters.Remove(Filters.Global);
                else filters.Add(Filters.Global);
                OnFilterChanged();
            } 
        );
        AscendSort.GetComponent<Button>().onClick.AddListener(
            () => {
                sortMode = Sorts.Asc;
                OnSortChanged();
            } 
        );
        DescendSort.GetComponent<Button>().onClick.AddListener(
            () => {
                sortMode = Sorts.Desc;
                OnSortChanged();
            } 
        );

        nextPageButton.onClick.AddListener(NextPage);
        prevPageButton.onClick.AddListener(PrevPage);
    }

    // Update is called once per frame
    void Update()
    {
        dropdown.SetActive(isDropdownVisible);

        prevPageButton.interactable = page > 1;
        nextPageButton.interactable = page - 1 < (_landmarkList.Count - 1) / noTilesPerPage;
    }

    private void OnDropdownPressed()
    {
        isDropdownVisible = !isDropdownVisible;
    }

    private void OnFilterChanged()
    {
        globalLandmarkImg.enabled = filters.Contains(Filters.Global);
        myLandmarkImg.enabled = filters.Contains(Filters.Mine);

        StartCoroutine(ManipulateList(globalLandmarkImg.enabled, myLandmarkImg.enabled));
    }

    private void OnSortChanged()
    {
        ascendSortImg.enabled = sortMode == Sorts.Asc;
        descendSortImg.enabled = sortMode == Sorts.Desc;
    }

    private IEnumerator ManipulateList(bool globalLandmarks, bool ownLandmarks)
    {
        if (SessionVariables.IsUsedAsGuest)
        {
            if (globalLandmarks)
                yield return _landmarkService.GetAllAvailableLandmarksGuest(
                    (lmks) => UpdateListOfLandmarks(lmks),
                    (err) => DisplayError(err)
                );
            else
            {
                UpdateListOfLandmarks(new List<NoModelLandmarkDTO>());
            }
            yield break;
        }

        if (globalLandmarks && ownLandmarks)
        {
            yield return _landmarkService.GetAllAvailableLandmarks(
                (lmks) => UpdateListOfLandmarks(lmks),
                (err) => DisplayError(err)
            );
        }
        else if (globalLandmarks)
        {
            yield return _landmarkService.GetGlobalLandmarks(
                (lmks) => UpdateListOfLandmarks(lmks),
                (err) => DisplayError(err)
            );
        }
        else if (ownLandmarks)
        {
            yield return _landmarkService.GetOwnLandmarks(
                (lmks) => UpdateListOfLandmarks(lmks),
                (err) => DisplayError(err)
            );
        }
        else
        {
            UpdateListOfLandmarks(new List<NoModelLandmarkDTO>());
        }
    }

    private void UpdateListOfLandmarks(IEnumerable<NoModelLandmarkDTO> landmarks)
    {
        _landmarkList = new List<NoModelLandmarkDTO> ( landmarks );
        OnListOfLandmarksUpdated();
    }


    private void OnListOfLandmarksUpdated()
    {
        page = 1;
        OnPageChanged();
    }

    private void DisplayError(ErrorDTO error)
    {

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

            _listElemets[i].landmark = listIndex < _landmarkList.Count ? _landmarkList[i] : null;
        }
    }

    private void SetupTiles()
    {
        _listElemets = new LandmarkListElement[noTilesPerPage];

        for (int i = 0; i < noTilesPerPage; i++)
        {
            int j = i;

            var landmarkObj = Instantiate(landmarkTilePrefab);
            landmarkObj.transform.SetParent(landmarkContainer.transform, false);

            // position
            landmarkObj.transform.Translate(0, -180 * i, 0);

            // linking landmark
            _listElemets[i] = landmarkObj.AddComponent<LandmarkListElement>();
            _listElemets[i].disabledTrashCan = disabledTrashCan;

            // button functionality
            landmarkObj.GetComponent<Button>().onClick
                .AddListener(() => OnLandmarkSelected(_listElemets[j].landmark));
        }
    }

    public void OnLandmarkSelected(NoModelLandmarkDTO selectedLandmark)
    {
        SessionVariables.Landmarks = new() { selectedLandmark };
        SceneManager.LoadScene(ScenesManager.NAVIGATION);
    }
}
