using Assets.Scripts.Domain;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Services;
using Assets.Scripts.Utils;
using System.Collections;
using UnityEngine;

public class SingularNav : NavBase
{
    private NavigationLandmarkObject lnavObj;
    private bool isCalibrated;
    private float bestYawAccuracy = 100;
    private GameObject actualCamera => camera.transform.GetChild(0).gameObject;


    protected override void NavigationSetup()
    {
        lnavObj = CreateLandmarkObject(SessionVariables.CurrentLandmark);
        landmarkObjects.Add(lnavObj);
        lnavObj.Hide();
        camera.transform.position = Vector3.zero;
        isCalibrated = false;

        //Debug.Log(PositioningUtils.AngleDiff(150, 40));
        //Debug.Log(PositioningUtils.AngleDiff(150, 170));
        //Debug.Log(PositioningUtils.AngleDiff(150, 200));
        //Debug.Log(PositioningUtils.AngleDiff(150, 350));

        //Debug.Log(PositioningUtils.AngleDiff(240, 40));
        //Debug.Log(PositioningUtils.AngleDiff(240, 170));
        //Debug.Log(PositioningUtils.AngleDiff(240, 200));
        //Debug.Log(PositioningUtils.AngleDiff(240, 350));
    }

    protected override void MoveAction()
    {
        base.MoveAction();
        if (!LocationManager.IsTracking)
        {
            isCalibrated = false;
            lnavObj?.Hide();
            return;
        }

        if (!isCalibrated)
        {
            lnavObj.Show();
            initialCameraCoords = LocationManager.Location;

            PositioningUtils.AdjustRotation(camera);
            PositionLandmarkObject(LocationManager.Location, lnavObj);
            isCalibrated = true;

            //ErrorUtils.DisplayError($"Session origin rotation: {camera.transform.rotation}\ncamera rotation: {camera.transform.GetChild(0).rotation}\n{actualCamera.transform.localEulerAngles.y}\n" +
            //    $"{camera.transform.eulerAngles.y}-{actualCamera.transform.eulerAngles.y} = {camera.transform.eulerAngles.y - actualCamera.transform.eulerAngles.y}");
        }
        else if (Mathf.Abs(PositioningUtils.AngleDiff(actualCamera.transform.eulerAngles.y, LocationManager.Heading.eulerAngles.y)) > 5)
            PositioningUtils.AdjustRotation(camera);
        //NotificationService.DisplayOnTop($"coords {LocationManager.Location}\nheading {LocationManager.Heading}\n{LocationManager.Heading.eulerAngles.y}");
    }
}
