using Assets.Scripts.Services;
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
                SetEmailText(SessionVariables.LoggedUser.Email);
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
        _authenticationService.Logout();
        SceneManager.LoadScene(ScenesManager.LOGIN);
    }

}
