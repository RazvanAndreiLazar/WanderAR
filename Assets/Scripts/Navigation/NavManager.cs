using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavManager : MonoBehaviour
{
    public GameObject landmarkPlaceholder;
    public Material landmarkMaterial;
    public GameObject camera;

    private NavBase activeNavigation;

    // Start is called before the first frame update
    void Start()
    {
        switch (AppStates.NavigationState)
        {
            case NavigationState.None:
                break;
            case NavigationState.Proximity:
                SetupProximityNav();
                break;
            case NavigationState.OneByOne:
                SetupOneByOneNav();
                break;
            case NavigationState.AllAtOnce:
                break;
            default:
                break;
        }
    }

    private void SetupOneByOneNav()
    {
        var oneByOneNav = gameObject.AddComponent<OneByOneNav>();
        oneByOneNav.camera = camera;
        oneByOneNav.landmarkMaterial = landmarkMaterial;
        oneByOneNav.landmarkPlaceholder = landmarkPlaceholder;

        oneByOneNav.StartNavigating();
        activeNavigation = oneByOneNav;
    }

    private void SetupProximityNav()
    {
        var proximityNav = gameObject.AddComponent<ProximityNav>();
        proximityNav.camera = camera;
        proximityNav.landmarkMaterial = landmarkMaterial;
        proximityNav.landmarkPlaceholder = landmarkPlaceholder;

        proximityNav.StartNavigating();
        activeNavigation = proximityNav;
    }

    public void StopNavigating()
    {
        activeNavigation.StopNavigating();
        activeNavigation = null;
    }
}