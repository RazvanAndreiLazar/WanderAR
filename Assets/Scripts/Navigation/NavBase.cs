using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using Assets.Scripts.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class NavBase : MonoBehaviour
{
    public GameObject camera;
    public Material landmarkMaterial;
    public GameObject landmarkPlaceholder;

    protected List<NavigationLandmarkObject> landmarkObjects = new();

    protected Coroutine movingCoroutine;
    protected float movingCoroutineTimeout = .5f; //in seconds

    protected WorldCoordinates initialCameraCoords;
    protected Quaternion initialCameraHeading;

    protected virtual void NavigationSetup() { }
    protected virtual void MoveAction() { }
    protected virtual void MoveCleanup() { }
    protected virtual void StopCleanup() { }

    public void StartNavigating()
    {
        NavigationSetup();
        movingCoroutine = StartCoroutine(Navigating());
    }

    private IEnumerator Navigating()
    {
        var i = 0;
        while (true)
        {
            MoveAction();
         
            Debug.Log($"Moving Iteration {i++}");
            yield return new WaitForSeconds(movingCoroutineTimeout);
            
            MoveCleanup();
        }
    }

    public void StopNavigating()
    {
        StopCleanup();

        StopCoroutine(movingCoroutine);
        landmarkObjects.ForEach(l => Destroy(l.ModelObject));
        landmarkObjects.Clear();
    }

    protected NavigationLandmarkObject CreateLandmarkObject(Landmark landmark)
    {
        GameObject modelObj;
        var isPlaceholder = false;
        try
        {
            if (landmark.Model == null)
            {
                modelObj = Instantiate(landmarkPlaceholder);
                isPlaceholder = true;
            }
            else
                modelObj = ModelImporter.Import(landmark.Model);
        }
        catch (System.Exception)
        {
            ErrorUtils.DisplayError("Error while creating the object model.\nDisplaying placeholder");
            modelObj = Instantiate(landmarkPlaceholder);
            isPlaceholder = true;
        }

        ModelImporter.ApplyMaterial(modelObj, landmarkMaterial);
        modelObj.name = landmark.Name;

        return new NavigationLandmarkObject { IsModelPlaceholder = isPlaceholder, ModelObject = modelObj, Landmark = landmark };
    }

    protected void PositionLandmarkObject(WorldCoordinates cameraCoords, NavigationLandmarkObject landmark)
    {
        var vector = PositioningUtils.GetPositioningVectorFromCamera(cameraCoords, landmark.Landmark.Coordinates);

        landmark.ModelObject.transform.position = vector;
        
        if (landmark.IsModelPlaceholder)
            landmark.ModelObject.transform.localScale = Vector3.one * Mathf.Min(1000, Mathf.Max(1, vector.magnitude * .1f));
    }

    protected NavigationLandmarkObject CreateAndPositionObject(WorldCoordinates cameraCoords, Landmark landmark)
    {
        var l = CreateLandmarkObject(landmark);
        PositionLandmarkObject(cameraCoords, l);
        return l;
    }
}
