using Assets.Scripts.Domain;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AllAtOnceNav : NavBase 
{
    private bool positioned = false;

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
            return;
        }

        if (!positioned)
        {
            var cameraPosition = LocationManager.Location;
            landmarkObjects.ForEach(l => { l.Show(); PositionLandmarkObject(cameraPosition, l); });
            positioned = true;
        }
    }
}
