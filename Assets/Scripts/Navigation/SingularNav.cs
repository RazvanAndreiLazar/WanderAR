using Assets.Scripts.Domain;
using UnityEngine;

public class SingularNav : NavBase
{
    private WorldCoordinates initialCameraCoords;

    protected override void NavigationSetup()
    {
        initialCameraCoords = LocationManager.Location;
        camera.transform.position = Vector3.zero;

        landmarkObjects.Add(CreateLandmarkObject(initialCameraCoords, SessionVariables.CurrentLandmark));
    }
}
