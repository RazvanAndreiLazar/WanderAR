using Assets.Scripts.Services;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UISettings : MonoBehaviour
{
    public Button logoutButton;
    public TMP_Text emailText;
    public Button isDebuggingButton;

    private void SetEmailText(string email)
    {
        emailText.text = $"Email: {email}";
    }

    private AuthenticationService _authenticationService = AuthenticationService.Instance;

    // Start is called before the first frame update
    void Start()
    {
        switch (AppState.UserState)
        {
            case UserState.Logged:
                if (SessionVariables.LoggedUser == null) ErrorUtils.DisplayError("Invalid user");
                else SetEmailText(SessionVariables.LoggedUser.Email);
                break;
            case UserState.Guest:
                SetEmailText("Logged in as GUEST");
                break;
            case UserState.None:
                this.enabled = false;
                return;
            default:
                break;
        }

        logoutButton.onClick.AddListener(OnLogoutClick);

        DisplayCheckmark();
        isDebuggingButton.onClick.AddListener(OnIsDebuggingClick);
    }

    private void OnLogoutClick()
    {
        Action helperAction = () =>
        {
            _authenticationService.Logout();
            SceneManager.LoadScene(AppScenes.LOGIN);
        };

        if (AppState.UserState == UserState.None || AppState.UserState == UserState.Guest) {
            helperAction.Invoke();
            return;
        }

        NotificationService.AddDialog("User", "Are you sure you want to log out?", DialogModal.Buttons.CANCEL_OK, helperAction);
    }

    private void DisplayCheckmark()
    {
        if (SessionVariables.IsDebugging)
        {
            isDebuggingButton.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            isDebuggingButton.gameObject.transform.GetChild(1).gameObject.SetActive(false);
        }
        else
        {
            isDebuggingButton.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            isDebuggingButton.gameObject.transform.GetChild(1).gameObject.SetActive(true);
        }
    }

    private void OnIsDebuggingClick()
    {
        SessionVariables.IsDebugging = !SessionVariables.IsDebugging;
        DisplayCheckmark();
    }
}
