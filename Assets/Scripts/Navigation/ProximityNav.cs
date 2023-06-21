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
    private Coroutine getLandmarksCoroutine;

    private LandmarkService _landmarkService = LandmarkService.Instance;

    private bool isGettingLandmarks = false;

    private GameObject actualCamera => camera.transform.GetChild(0).gameObject;


    protected override void NavigationSetup()
    {
        movingCoroutineTimeout = 5f;
    }

    protected override void StopCleanup()
    {
        if (getLandmarksCoroutine != null) StopCoroutine(getLandmarksCoroutine);
    }

    private void GetProximityLandmarks()
    {
        isGettingLandmarks = true;
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

                isGettingLandmarks = false;
            },
            ErrorUtils.DisplayError
        ));
    }

    protected override void MoveAction()
    {
        if (!LocationManager.IsTracking) return;

        if (!isGettingLandmarks)
            GetProximityLandmarks();

        if (Mathf.Abs(PositioningUtils.AngleDiff(
            actualCamera.transform.eulerAngles.y,
            LocationManager.Heading.eulerAngles.y)) > 5)
            PositioningUtils.AdjustRotation(camera);
    }
    protected override void MoveCleanup() => StopCoroutine(getLandmarksCoroutine);
    
}
