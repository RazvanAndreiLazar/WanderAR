using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using Assets.Scripts.Services;
using System.Text.RegularExpressions;
using UnityEngine.UI;
using System;
using Assets.Scripts.Domain.DTOs;

public class UILogin : MonoBehaviour
{
    public GameObject loginForm;
    public GameObject registerForm;

    public TMP_Text errorText;

    public TMP_InputField loginEmailInputField;
    public TMP_InputField loginPasswordInputField;

    public TMP_InputField registreEmailInputField;
    public TMP_InputField registrePasswordInputField;

    public Button loginButton;
    public Button registerButton;
    public Button guestButton;

    private AuthenticationService _authenticationService = AuthenticationService.Instance;


    private bool isLoginEmailValid = false;
    private bool isLoginPasswordValid = false;

    private bool isRegistreEmailValid = false;
    private bool isRegistrePasswordValid = false;

    private Color errorBackgroundColor = new Color(1, 0.4f, 0.4f);

    int i = 0;

    // Start is called before the first frame update
    private void Start()
    {
        errorText.text = "1";
        AppState.UserState = UserState.None;
        errorText.text = "2";

        if (SessionVariables.SessionToken != "")
        {
            errorText.text = "3";
            GetLoggedUser();
        }

        errorText.text = "5";
        SwitchToLogin();
        errorText.text = "";

        ManipulateLoginButton();
        ManipulateRegisterButton();

        loginButton.onClick.AddListener(Login);
        registerButton.onClick.AddListener(Register);
        guestButton.onClick.AddListener(LoginAsGuest);
    }


    public void SwitchToRegister()
    {
        loginEmailInputField.text = "";
        loginPasswordInputField.text = "";
        errorText.text = "";

        loginForm.SetActive(false);
        registerForm.SetActive(true);
    }

    public void SwitchToLogin()
    {
        registreEmailInputField.text = "";
        registrePasswordInputField.text = "";
        errorText.text = "";

        loginForm.SetActive(true);
        registerForm.SetActive(false);
    }

    public void SetErrorText(string _errorText)
    {
        errorText.text = _errorText;
    }

    //public void TryCatchWrapper(Func<IEnumerator> routine)
    //{
    //    try
    //    {
    //        StartCoroutine(routine());
    //    }
    //    catch (System.Exception e)
    //    {

    //        errorText.text = e.Message;
    //    }
    //}

    private string GetErrorString(ErrorDTO error)
    {
        return string.Join("\n", error.Errors["$"]);
    }

    public void Login()
    {
        if (loginEmailInputField.text == "" || loginPasswordInputField.text == "")
            throw new System.Exception("Fields cannot be empty");

        if (!Regex.IsMatch(loginPasswordInputField.text, @"^[^(){}[\]|`¬¦!""£$%^&*""<>:;#~_\-\+=,@]+$"))
            throw new System.Exception("Password cannot contain special characters: (){}[]|`¬¦! \"£$% ^&*<>:;#~_-+=,@");

        StartCoroutine(_authenticationService.Login(loginEmailInputField.text, loginPasswordInputField.text, 
            () => {
                AppState.UserState = UserState.Logged;
                SceneManager.LoadScene(AppScenes.MENU);
            },
            (err) => SetErrorText(GetErrorString(err))
        ));
    }

    public void LoginAsGuest()
    {
        AppState.UserState = UserState.Guest;
        SceneManager.LoadScene(AppScenes.MENU);
        SetErrorText(AppScenes.MENU.ToString());
    }

    public void GetLoggedUser()
    {
        StartCoroutine(_authenticationService.GetLoggedUser(
            () => {
                AppState.UserState = UserState.Logged;
                SceneManager.LoadScene(AppScenes.MENU);
        }));
    }

    public void Register()
    {

        if (registreEmailInputField.text == "" || registrePasswordInputField.text == "")
            throw new System.Exception("Fields cannot be empty");

        if (!Regex.IsMatch(registrePasswordInputField.text, @"^[^(){}[\]|`¬¦!""£$%^&*""<>:;#~_\-\+=,@]+$"))
            throw new System.Exception("Password cannot contain special characters: (){}[]|`¬¦! \"£$% ^&*<>:;#~_-+=,@");

        StartCoroutine(_authenticationService.Register(loginEmailInputField.text, loginPasswordInputField.text,
            () => SwitchToLogin(),
            (err) => SetErrorText(GetErrorString(err))
        ));
    }

    private bool ValidateEmail(TMP_InputField inputField)
    {
        string email = inputField.text;

        bool isValid = Regex.IsMatch(email, @"^\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*$");

        if (isValid) inputField.GetComponent<Image>().color = Color.white;
        else inputField.GetComponent<Image>().color = errorBackgroundColor;

        return isValid;
    }

    private void ManipulateLoginButton()
    {
        if (isLoginEmailValid && isLoginPasswordValid)
            loginButton.interactable = true;
        else loginButton.interactable = false;
    }

    private void ManipulateRegisterButton()
    {
        if (isRegistreEmailValid && isRegistrePasswordValid)
            registerButton.interactable = true;
        else registerButton.interactable = false;
    }

    #region TextInput Events
    public void OnLoginEmailValueChanged()
    {
        isLoginEmailValid = ValidateEmail(loginEmailInputField);
        ManipulateLoginButton();
    }
    public void OnLoginPasswordValueChanged()
    {
        isLoginPasswordValid = loginPasswordInputField.text != "";
        ManipulateLoginButton();
    }

    public void OnRegistreEmailValueChanged()
    {
        isRegistreEmailValid = ValidateEmail(registreEmailInputField);
        ManipulateRegisterButton();
    }
    public void OnRegistrePasswordValueChanged()
    {
        isRegistrePasswordValid = registrePasswordInputField.text != "";
        ManipulateRegisterButton();
    }
    #endregion
}
