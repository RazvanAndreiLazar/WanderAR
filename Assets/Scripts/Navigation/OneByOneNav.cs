using Assets.Scripts.Domain;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneByOneNav : NavBase
{
    private WorldCoordinates initialCameraCoords;

    private Landmark displayedLandmark;

    protected override void NavigationSetup()
    {
        initialCameraCoords = LocationManager.Location;
        camera.transform.position = Vector3.zero;

        displayedLandmark = SessionVariables.CurrentLandmark;
        landmarkObjects.Add(CreateLandmarkObject(initialCameraCoords, displayedLandmark));
    }

    protected override void MoveAction()
    {
        if (displayedLandmark.Id != SessionVariables.CurrentLandmark.Id)
        {
            StopCoroutine(movingCoroutine);
            landmarkObjects.ForEach(Destroy);
            landmarkObjects.Clear();

            StartNavigating();
        }
    }
}
