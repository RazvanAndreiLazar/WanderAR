using Assets.Scripts.Domain;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AllAtOnceNav : NavBase 
{
    private bool positioned = false;
    private GameObject actualCamera => camera.transform.GetChild(0).gameObject;

    protected override void NavigationSetup()
    {
        foreach (var lmk in SessionVariables.Landmarks)
        {
            var l = CreateLandmarkObject(lmk);
            l.Hide();
            landmarkObjects.Add(l);
        }
        camera.transform.position = Vector3.zero;
        positioned = false;
    }

    protected override void MoveAction()
    {
        if (!LocationManager.IsTracking)
        {
            positioned = false;
            landmarkObjects.ForEach(l => l.Show());
            return;
        }

        if (!positioned)
        {
            var cameraPosition = LocationManager.Location;
            landmarkObjects.ForEach(l => { 
                l.Show(); 
                PositionLandmarkObject(cameraPosition, l); 
            });
            positioned = true;
        }

        if (Mathf.Abs(PositioningUtils.AngleDiff(
            actualCamera.transform.eulerAngles.y, 
            LocationManager.Heading.eulerAngles.y)) > 5)
            PositioningUtils.AdjustRotation(camera);
    }
}
