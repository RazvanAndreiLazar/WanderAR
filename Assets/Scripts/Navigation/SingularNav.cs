using Assets.Scripts.Domain;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.Utils;
using System.Collections;
using UnityEngine;

public class SingularNav : NavBase
{
    private NavigationLandmarkObject lnavObj;

    protected override void NavigationSetup()
    {
        lnavObj = CreateLandmarkObject(SessionVariables.CurrentLandmark);
        landmarkObjects.Add(lnavObj);
        lnavObj.Hide();
        camera.transform.position = Vector3.zero;
    }

    protected override void MoveAction()
    {
        base.MoveAction();
        if (!LocationManager.IsTracking) return;

        lnavObj.Show();

        if (initialCameraCoords != null)
            initialCameraCoords = LocationManager.Location;

        NotificationService.DisplayOnTop($"coords {LocationManager.Location}\nheading {LocationManager.Heading}");

        PositionLandmarkObject(LocationManager.Location, lnavObj);    
    }
}
