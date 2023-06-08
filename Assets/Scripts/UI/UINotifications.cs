using Assets.Scripts.Services;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UINotifications : MonoBehaviour
{
    public DialogModal dialogModal;
    public NotificationToast notificationToast;

    private bool isDisplayingDialog;
    private bool timerReset;

    // Start is called before the first frame update
    void Awake()
    {
        isDisplayingDialog = false;
        dialogModal.gameObject.SetActive(false);

        timerReset = false;
        notificationToast.gameObject.SetActive(false);
        NotificationService.ListenDisplayOnTopEvent(
            toast =>
            {
                if (this == null) return;

                if (!gameObject.activeSelf)
                    return;

                timerReset = true;
                notificationToast.Text = toast.Text;
                notificationToast.gameObject.SetActive(true);
            });
    }

    // Update is called once per frame
    void Update()
    {
        if (!NotificationService.IsDialogQueueEmpty && !isDisplayingDialog)
        {
            DisplayNextDialog();
        }
        if (!NotificationService.IsToastQueueEmpty && notificationToast.gameObject.activeSelf == false)
            StartCoroutine(DisplayNextToast());
    }

    private void DisplayNextDialog()
    {
        var dialog = NotificationService.GetDialog();

        dialogModal.Title = dialog.Title;
        dialogModal.Text = dialog.Text;
        dialogModal.DisplayButtons = dialog.Buttons;
        dialogModal.OkAction = () =>
        {
            dialog.ConfirmAction?.Invoke();
            isDisplayingDialog = false;
        };
        dialogModal.CancelAction = () =>
        {
            dialog.CancelAction?.Invoke();
            isDisplayingDialog = false;
        };
        isDisplayingDialog = true;

        dialogModal.gameObject.SetActive(true);
    }

    private IEnumerator DisplayNextToast()
    {
        var toast = NotificationService.GetToast();

        notificationToast.Text = toast.Text;
        notificationToast.gameObject.SetActive(true);

        while (true)
        {
            timerReset = false;
            yield return new WaitForSeconds(toast.Duration);

            if (!timerReset)
                yield break;
        }
    }
}
