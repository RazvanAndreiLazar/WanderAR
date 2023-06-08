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

    private void SetEmailText(string email)
    {
        emailText.text = $"Email: {email}";
    }

    private AuthenticationService _authenticationService = AuthenticationService.Instance;

    // Start is called before the first frame update
    void Start()
    {
        switch (AppStates.UserState)
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
    }

    private void OnLogoutClick()
    {
        Action helperAction = () =>
        {
            _authenticationService.Logout();
            SceneManager.LoadScene(ScenesManager.LOGIN);
        };

        if (AppStates.UserState == UserState.None || AppStates.UserState == UserState.Guest) {
            helperAction.Invoke();
            return;
        }

        NotificationService.AddDialog("User", "Are you sure you want to log out?", DialogModal.Buttons.CANCEL_OK, helperAction);
    }

}
