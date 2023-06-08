using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavManager : MonoBehaviour
{
    public GameObject landmarkPlaceholder;
    public Material landmarkMaterial;
    public GameObject camera;

    private NavBase activeNavigation;


    public void StartNavigating()
    {
        //ErrorUtils.DisplayError($"In Nav manager start navigaing {AppStates.NavigationState}");

        switch (AppStates.NavigationState)
        {
            case NavigationState.None:
                break;
            case NavigationState.Proximity:
                SetupProximityNav();
                break;
            case NavigationState.Singular:
                SetupSingularNav();
                break;
            case NavigationState.AllAtOnce:
                break;
            case NavigationState.OneByOne:
                SetupOneByOneNav();
                break;
            default:
                break;
        }
    }

    private void SetupSingularNav()
    {
        var singularNav = gameObject.AddComponent<SingularNav>();
        singularNav.camera = camera;
        singularNav.landmarkMaterial = landmarkMaterial;
        singularNav.landmarkPlaceholder = landmarkPlaceholder;

        singularNav.StartNavigating();
        activeNavigation = singularNav;
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

    private void SetupOneByOneNav()
    {
        var allAtOnceNav = gameObject.AddComponent<AllAtOnceNav>();
        allAtOnceNav.camera = camera;
        allAtOnceNav.landmarkMaterial = landmarkMaterial;
        allAtOnceNav.landmarkPlaceholder = landmarkPlaceholder;

        var oneByOneNav = gameObject.AddComponent<OneByOneNav>();
        oneByOneNav.camera = camera;
        oneByOneNav.landmarkMaterial = landmarkMaterial;
        oneByOneNav.landmarkPlaceholder = landmarkPlaceholder;
        oneByOneNav.StartNavigating();

        activeNavigation = oneByOneNav;
    }

    public void SwitchRouteNavigationMode()
    {
        var allAtOnceNav = gameObject.GetComponent<AllAtOnceNav>();
        var oneByOneNav = gameObject.GetComponent<OneByOneNav>();

        if (activeNavigation == allAtOnceNav)
        {
            allAtOnceNav.StopNavigating();
            oneByOneNav.StartNavigating();
            activeNavigation = oneByOneNav;
        } 
        else if (activeNavigation == oneByOneNav)
        {
            oneByOneNav.StopNavigating();
            allAtOnceNav.StartNavigating();
            activeNavigation = allAtOnceNav;
        }
    }

    public void StopNavigating()
    {
        activeNavigation.StopNavigating();
        activeNavigation = null;
    }
}
