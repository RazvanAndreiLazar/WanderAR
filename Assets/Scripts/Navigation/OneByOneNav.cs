using Assets.Scripts.Domain;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneByOneNav : NavBase
{
    private WorldCoordinates initialCameraCoords;

    protected override void NavigationSetup()
    {
        initialCameraCoords = LocationManager.Location;
        camera.transform.position = Vector3.zero;

        landmarkObjects.Add(CreateLandmarkObject(initialCameraCoords, SessionVariables.CurrentLandmark));
    }
}
