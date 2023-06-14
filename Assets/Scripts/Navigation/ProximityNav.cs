using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProximityNav : NavBase
{
    //private WorldCoordinates initialCameraCoords;

    private Coroutine getLandmarksCoroutine;

    private LandmarkService _landmarkService = LandmarkService.Instance;

    private void GetProximityLandmarks()
    {
        if (!LocationManager.IsTracking) return;

        var cameraCoords = LocationManager.Location;

        var pastLandmarks = new List<NavigationLandmarkObject>(landmarkObjects);
        landmarkObjects.Clear();

        getLandmarksCoroutine = StartCoroutine(_landmarkService.GetProxyLandmarks(SessionVariables.ProximityRange, cameraCoords,
            (landmarks) =>
            {
                foreach (var lmk in landmarks)
                {
                    landmarkObjects.Add( CreateAndPositionObject(cameraCoords, Landmark.FromLandmarkDTO(lmk)) );
                }
                camera.transform.position = Vector3.zero;


                pastLandmarks.ForEach(l => Destroy(l.ModelObject));
            },
            (err) =>
            {

            }
        ));
    }

    protected override void MoveAction() => GetProximityLandmarks();
    protected override void MoveCleanup() => StopCoroutine(getLandmarksCoroutine);
    
}
