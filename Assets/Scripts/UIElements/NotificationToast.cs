using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NotificationToast : MonoBehaviour
{
    public TMP_Text contentTxt;

    private void Awake()
    {
        gameObject.GetComponent<Button>().onClick.AddListener(() =>
        {
            Text = "";
            gameObject.SetActive(false);
        });
    }

    public string Text
    {
        get { return contentTxt.text; }
        set { contentTxt.text = value; }
    }
}
