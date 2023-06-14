using Assets.Scripts.Domain;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneByOneNav : NavBase
{
    private Landmark displayedLandmark;

    protected override void NavigationSetup()
    {
        initialCameraCoords = LocationManager.Location;
        camera.transform.position = Vector3.zero;

        displayedLandmark = SessionVariables.CurrentLandmark;
        var l = CreateLandmarkObject(displayedLandmark);
        landmarkObjects.Add(l);
        PositionLandmarkObject(initialCameraCoords, l);
    }

    protected override void MoveAction()
    {
        if (displayedLandmark.Id != SessionVariables.CurrentLandmark.Id)
        {
            StopCoroutine(movingCoroutine);
            landmarkObjects.ForEach(l => Destroy(l.ModelObject));
            landmarkObjects.Clear();

            StartNavigating();
        }
    }
}
