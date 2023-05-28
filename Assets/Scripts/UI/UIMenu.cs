using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class UIMenu : MonoBehaviour
{
    private enum Tabs
    {
        SETTINGS, LANDMARK, PROXY, ROUTE
    }

    #region Game Objects
    public GameObject SettingsButton;
    public GameObject LandmarkButton;
    public GameObject ProxyButton;
    public GameObject RouteButton;

    public GameObject SettingsPannel;
    public GameObject LandmarkPannel;
    public GameObject ProxyPannel;
    public GameObject RoutePannel;
    #endregion

    private Dictionary<Tabs, KeyValuePair<GameObject, GameObject>> tabCorespondence;

    private GameObject[] buttons;
    private GameObject[] pannels;

    // Start is called before the first frame update
    void Start()
    {
        if (AppStates.UserState == UserState.None)
            gameObject.SetActive(false);

        buttons = new GameObject[] { SettingsButton, LandmarkButton, ProxyButton, RouteButton };
        pannels = new GameObject[] { SettingsPannel, LandmarkPannel, ProxyPannel, RoutePannel };
        tabCorespondence = new Dictionary<Tabs, KeyValuePair<GameObject, GameObject>>()
        {
            { Tabs.SETTINGS, new(SettingsButton, SettingsPannel) },
            { Tabs.LANDMARK, new(LandmarkButton, LandmarkPannel) },
            { Tabs.PROXY, new(ProxyButton, ProxyPannel) },
            { Tabs.ROUTE, new(RouteButton, RoutePannel) },
        };

        Select(Tabs.LANDMARK);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void HideAllPannels() 
    {
        foreach (var pan in pannels)
        {
            pan.SetActive(false);
        }
    }

    private void Select(Tabs tab)
    {
        var button = tabCorespondence[tab].Key;
        var pannel = tabCorespondence[tab].Value;

        button.GetComponent<Button>().Select();

        HideAllPannels();

        pannel.SetActive(true);
    }

    public void SelectSettings() => Select(Tabs.SETTINGS);
    public void SelectLandmark() => Select(Tabs.LANDMARK);
    public void SelectProxy() => Select(Tabs.PROXY);
    public void SelectRoute() => Select(Tabs.ROUTE);

    public void ExitMenu()
    {
        SceneManager.LoadScene(ScenesManager.NAVIGATION);
    }
}
