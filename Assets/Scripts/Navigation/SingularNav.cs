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
    }

    protected override void MoveAction()
    {
        base.MoveAction();
        if (!LocationManager.IsTracking)
        {
            isCalibrated = false;
            return;
        }
        lnavObj.Show();

        if (!isCalibrated)
        {
            initialCameraCoords = LocationManager.Location;

            PositioningUtils.AdjustRotation(camera);
            PositionLandmarkObject(LocationManager.Location, lnavObj);
            isCalibrated = true;

            //ErrorUtils.DisplayError($"Session origin rotation: {camera.transform.rotation}\ncamera rotation: {camera.transform.GetChild(0).rotation}\n{actualCamera.transform.localEulerAngles.y}\n" +
            //    $"{camera.transform.eulerAngles.y}-{actualCamera.transform.eulerAngles.y} = {camera.transform.eulerAngles.y - actualCamera.transform.eulerAngles.y}");
        }
        //NotificationService.DisplayOnTop($"coords {LocationManager.Location}\nheading {LocationManager.Heading}\n{LocationManager.Heading.eulerAngles.y}");
    }
}
