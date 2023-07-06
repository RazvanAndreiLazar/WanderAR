using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Searchbar : MonoBehaviour
{
    public TMP_InputField searchTxt;
    public Button searchBut;
    public GameObject idleImg;
    public GameObject activeImg;
    public GameObject searchField;

    public Action<string> OnSearchTextChanged { get; set; }
    public string SearchText { get; private set; }

    private const float TIME_AFTER_TYPED = 1; //in seconds

    private Coroutine trySearching = null;

    private const float ANIMATION_SPEED = 9; // greater -> slower?

    void Start()
    {
        searchBut.onClick.AddListener(OnSearchButtonClicked);
        searchTxt.onValueChanged.AddListener(TextChanged);

        idleImg.SetActive(true);
        activeImg.SetActive(false);

        searchField.SetActive(false);
    }

    private void OnSearchButtonClicked()
    {
        if (searchField.activeSelf) StartCoroutine(HideSearchField());
        else StartCoroutine(ShowSearchField());
        //searchField.SetActive(!searchField.activeSelf);
        if (searchField.activeSelf) searchTxt.Select();
    }

    private IEnumerator ShowSearchField()
    {
        var rt = searchField.GetComponent<RectTransform>();
        var initialLeft = rt.rect.width - rt.offsetMin.y;
        rt.offsetMin = new Vector2(initialLeft, rt.offsetMin.y);
        searchField.SetActive(true);

        var left = initialLeft;
        while(left > 0)
        {
            yield return new WaitForFixedUpdate();
            left -= initialLeft / ANIMATION_SPEED;
            rt.offsetMin = new Vector2(left, rt.offsetMin.y);
        }
    }

    private IEnumerator HideSearchField()
    {
        var rt = searchField.GetComponent<RectTransform>();
        var initialLeft = rt.rect.width - rt.offsetMin.y;
        rt.offsetMin = new Vector2(0, rt.offsetMin.y);

        var left = 0f;
        while (left < initialLeft)
        {
            yield return new WaitForFixedUpdate();
            left += initialLeft / ANIMATION_SPEED;
            rt.offsetMin = new Vector2(left, rt.offsetMin.y);
        }
        searchField.SetActive(false);
        rt.offsetMin = new Vector2(0, rt.offsetMin.y);
    }

    private void TextChanged(string txt)
    {
        if (trySearching != null) StopCoroutine(trySearching);
        trySearching = StartCoroutine(Search(txt));
    }

    private IEnumerator Search(string txt)
    {
        yield return new WaitForSeconds(TIME_AFTER_TYPED);

        activeImg.SetActive(txt != "");
        idleImg.SetActive(txt == "");

        SearchText = txt;
        OnSearchTextChanged?.Invoke(txt);
    }

    public void ResetValues()
    {
        SearchText = "";
        searchTxt.text = "";

        idleImg.SetActive(true);
        activeImg.SetActive(false);

        searchField.SetActive(false);
    }
}
