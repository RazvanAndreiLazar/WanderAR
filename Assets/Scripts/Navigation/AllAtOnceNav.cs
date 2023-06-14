using Assets.Scripts.Domain;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AllAtOnceNav : NavBase {

    protected override void NavigationSetup()
    {
        foreach (var lmk in SessionVariables.Landmarks)
        {
            landmarkObjects.Add(CreateAndPositionObject(LocationManager.Location, lmk));
        }
        camera.transform.position = Vector3.zero;
    }

    protected override void MoveAction()
    {
        base.MoveAction();
    }
}
