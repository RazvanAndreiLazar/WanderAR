using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HiddenIPSetter : MonoBehaviour
{
    private Button saveButton;
    private TMP_InputField inputField;

    // Start is called before the first frame update
    void Start()
    {
        saveButton = transform.GetChild(0).GetComponent<Button>();
        saveButton.onClick.AddListener(Save);
        inputField = transform.GetChild(1).GetComponent<TMP_InputField>();

        GetComponent<Button>().onClick.AddListener(Show);

        saveButton.gameObject.SetActive(false);
        inputField.gameObject.SetActive(false);
    }

    private void Show()
    {
        saveButton.gameObject.SetActive(true);
        inputField.gameObject.SetActive(true);
        inputField.text = SessionVariables.ServerIP;
        inputField.Select();
    }

    void Save()
    {
        SessionVariables.ServerIP = inputField.text;

        saveButton.gameObject.SetActive(false);
        inputField.gameObject.SetActive(false);
    }
}
