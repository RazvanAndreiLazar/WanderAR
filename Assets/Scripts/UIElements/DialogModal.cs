using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class DialogModal : MonoBehaviour
{
    public enum Buttons
    {
        OK, CANCEL_OK
    }

    public TMP_Text titleTxt;
    public TMP_Text contentTxt;

    public GameObject okButtonPannel;
    public GameObject cancelOkButtonPannel;

    public string Title { 
        get => titleTxt.text; 
        set
        {
            titleTxt.text = value;
        } 
    }

    public string Text { 
        get => contentTxt.text;
        set
        {
            contentTxt.text = value;
        }
    }

    private Buttons _buttons = Buttons.CANCEL_OK;
    public Buttons DisplayButtons { 
        get => _buttons;
        set
        {
            _buttons = value;
            switch (value)
            {
                case Buttons.OK:
                    okButtonPannel.SetActive(true);
                    cancelOkButtonPannel.SetActive(false);
                    break;
                case Buttons.CANCEL_OK:
                    okButtonPannel.SetActive(false);
                    cancelOkButtonPannel.SetActive(true);
                    break;
                default:
                    break;
            }
        }
    }

    public Action OkAction { get; set; }
    public Action CancelAction { get; set; }

    public void Confirm()
    {
        OkAction?.Invoke();
        gameObject.SetActive(false);
    }
    public void Cancel()
    {
        CancelAction?.Invoke();
        gameObject.SetActive(false);
    }
}
