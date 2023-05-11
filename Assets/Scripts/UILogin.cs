using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UILogin : MonoBehaviour
{
    public GameObject loginForm;
    public GameObject registerForm;

    public TMP_Text errorText;

    // Start is called before the first frame update
    void Start()
    {
        SwitchToLogin();
        errorText.text = "";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SwitchToRegister()
    {
        loginForm.SetActive(false);
        registerForm.SetActive(true);
    }

    public void SwitchToLogin()
    {
        loginForm.SetActive(true);
        registerForm.SetActive(false);
    }

    public void SetErrorText(string _errorText)
    {
        errorText.text = _errorText;
    }
}
