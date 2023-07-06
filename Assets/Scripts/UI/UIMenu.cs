using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;
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

    private Tabs? selectedTab = null;

    // Start is called before the first frame update
    void Start()
    {
        if (AppState.UserState == UserState.None)
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

    private void DeselectAllButtons()
    {
        const int INACTIVE_CHILD = 0;
        const int ACTIVE_CHILD = 1;

        foreach (var button in buttons)
        {
            if (button.transform.childCount < 2) continue;
            button.transform.GetChild(INACTIVE_CHILD).gameObject.SetActive(true);
            button.transform.GetChild(ACTIVE_CHILD).gameObject.SetActive(false);
        }
    }

    private void Select(Tabs tab)
    {
        const int INACTIVE_CHILD = 0;
        const int ACTIVE_CHILD = 1;

        var button = tabCorespondence[tab].Key;
        var pannel = tabCorespondence[tab].Value;

        DeselectAllButtons();

        button.gameObject.transform.GetChild(INACTIVE_CHILD).gameObject.SetActive(false);
        button.gameObject.transform.GetChild(ACTIVE_CHILD).gameObject.SetActive(true);

        if (selectedTab == null || selectedTab == Tabs.SETTINGS || tab == Tabs.SETTINGS || tab == selectedTab)
        {
            HideAllPannels();
            pannel.SetActive(true);
        }
        else
        {
            bool reverse = (selectedTab == Tabs.ROUTE && tab == Tabs.LANDMARK) ||
                (selectedTab == Tabs.ROUTE && tab == Tabs.PROXY) || (selectedTab == Tabs.LANDMARK && tab == Tabs.PROXY);
            StartCoroutine(TabTransition(tabCorespondence[selectedTab ?? Tabs.LANDMARK].Value, pannel, reverse));
        }
        selectedTab = tab;
    }
    IEnumerator TabTransition(GameObject pannelFrom, GameObject pannelTo, bool reverse = false)
    {
        const int WIDTH = 1080;
        const int SPEED = 360;
        Vector3 direction = reverse ? Vector3.left : Vector3.right;
        pannelTo.transform.Translate(-direction * WIDTH);
        pannelTo.SetActive(true);
        for (int i = 1; i <= WIDTH/SPEED; i++)
        {
            yield return new WaitForFixedUpdate();
            pannelFrom.transform.Translate(direction * SPEED);
            pannelTo.transform.Translate(direction * SPEED);
        }
        pannelFrom.SetActive(false);
        pannelFrom.transform.Translate(-direction * WIDTH);
    }

    public void SelectSettings() => Select(Tabs.SETTINGS);
    public void SelectLandmark() => Select(Tabs.LANDMARK);
    public void SelectProxy() => Select(Tabs.PROXY);
    public void SelectRoute() => Select(Tabs.ROUTE);

    public void ExitMenu()
    {
        SceneManager.LoadScene(AppScenes.NAVIGATION);
    }
}
