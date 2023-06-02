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
        searchField.SetActive(!searchField.activeSelf);
        if (searchField.activeSelf) searchTxt.Select();
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
