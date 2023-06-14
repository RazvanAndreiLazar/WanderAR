using Assets.Scripts.Domain;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneByOneNav : NavBase
{
    private Landmark displayedLandmark;
    private NavigationLandmarkObject lnavObj;

    private bool isCalibrated;

    protected override void NavigationSetup()
    {
        camera.transform.position = Vector3.zero;

        displayedLandmark = SessionVariables.CurrentLandmark;
        lnavObj = CreateLandmarkObject(displayedLandmark);
        landmarkObjects.Add(lnavObj);
        lnavObj.Hide();

        isCalibrated = false;
        //PositionLandmarkObject(initialCameraCoords, lnavObj);
    }

    protected override void MoveAction()
    {
        if (displayedLandmark.Id != SessionVariables.CurrentLandmark.Id)
        {
            StopCoroutine(movingCoroutine);
            landmarkObjects.ForEach(l => Destroy(l.ModelObject));
            landmarkObjects.Clear();

            StartNavigating();
            return;
        }

        if (!LocationManager.IsTracking)
        {
            isCalibrated = false;
            return;
        }
        

        if (!isCalibrated)
        {
            lnavObj.Show();
            initialCameraCoords = LocationManager.Location;
            
            PositionLandmarkObject(LocationManager.Location, lnavObj);
            PositioningUtils.AdjustRotation(camera);

            isCalibrated = true;

            //ErrorUtils.DisplayError($"Session origin rotation: {camera.transform.rotation}\ncamera rotation: {camera.transform.GetChild(0).rotation}\n{actualCamera.transform.localEulerAngles.y}\n" +
            //    $"{camera.transform.eulerAngles.y}-{actualCamera.transform.eulerAngles.y} = {camera.transform.eulerAngles.y - actualCamera.transform.eulerAngles.y}");
        }
    }
}
