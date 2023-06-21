using Assets.Scripts.Services;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UINotifications : MonoBehaviour
{
    public DialogModal dialogModal;
    public NotificationToast notificationToast;
    public GameObject loadingScreen;

    private bool isDisplayingLoadingScreen;

    private bool isDisplayingDialog;

    Coroutine activeToastCoroutine = null;

    // Start is called before the first frame update
    void Awake()
    {
        isDisplayingLoadingScreen = false;

        if (dialogModal != null)
        {
            isDisplayingDialog = false;
            dialogModal.gameObject.SetActive(false);
        }

        if (notificationToast != null)
        {
            notificationToast.gameObject.SetActive(false);
            NotificationService.ListenDisplayOnTopEvent(
                toast =>
                {
                    if (this == null) return;

                    if (!gameObject.activeSelf)
                        return;

                    if (activeToastCoroutine != null)
                    {
                        StopCoroutine(activeToastCoroutine);
                        activeToastCoroutine = null;
                    }

                    if (toast.Text == "")
                    {
                        notificationToast.gameObject.SetActive(false);
                        return;
                    }

                    activeToastCoroutine = StartCoroutine(DisplayToastNow(toast.Text, toast.Duration));
                });
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (dialogModal != null) DialogUpdateAction();
        if (notificationToast != null) ToastUpdateAction();
        if (loadingScreen != null) LoadingScreenUpdateAction();
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

        yield return new WaitForSeconds(toast.Duration);

        notificationToast.gameObject.SetActive(false);
    }

    public IEnumerator DisplayToastNow(string text, float duration)
    {
        notificationToast.Text = text;
        notificationToast.gameObject.SetActive(true);

        yield return new WaitForSeconds(duration);

        notificationToast.gameObject.SetActive(false);
    }

    private void DialogUpdateAction()
    {
        if (!NotificationService.IsDialogQueueEmpty && !isDisplayingDialog)
            DisplayNextDialog();
    }
    private void ToastUpdateAction()
    {
        if (!NotificationService.IsToastQueueEmpty && notificationToast.gameObject.activeSelf == false)
            StartCoroutine(DisplayNextToast());
    }
    private void LoadingScreenUpdateAction()
    {
        if (isDisplayingLoadingScreen && !NotificationService.LoadingScreen) { loadingScreen.SetActive(false); isDisplayingLoadingScreen = false; }
        if (!isDisplayingLoadingScreen && NotificationService.LoadingScreen) { loadingScreen.SetActive(true); isDisplayingLoadingScreen = true; }
    }
}
