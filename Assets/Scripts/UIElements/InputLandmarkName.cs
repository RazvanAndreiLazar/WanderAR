using Assets.Scripts.Services;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class InputLandmarkName : MonoBehaviour
{
    public TMP_InputField nameInput;
    public Button cancelBut;
    public Button submitBut;

    public Action OnClosed { get; set; }

    void Start()
    {
        cancelBut.onClick.AddListener(Hide);
        submitBut.onClick.AddListener(Submit);
    }

    public void Focus()
    {
        nameInput.Select();
    }

    private void Hide()
    {
        nameInput.text = "";
        OnClosed.Invoke();
        gameObject.SetActive(false);
    }

    private void Submit()
    {
        StartCoroutine(LandmarkService.Instance.DropPin(nameInput.text, lmk => {
            Hide();
        }, err => { }));
    }
}
