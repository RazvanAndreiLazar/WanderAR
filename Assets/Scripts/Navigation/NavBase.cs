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

    protected List<GameObject> landmarkObjects = new();

    protected Coroutine movingCoroutine;

    protected virtual void NavigationSetup() { }
    protected virtual void MoveAction() { }
    protected virtual void MoveCleanup() { }
    protected virtual void StopCleanup() { }

    public void StartNavigating()
    {
        NavigationSetup();
        movingCoroutine = StartCoroutine(Navigating());
    }

    protected IEnumerator Navigating()
    {
        var i = 0;
        while (true)
        {
            MoveAction();
         
            Debug.Log($"Moving Iteration {i++}");
            yield return new WaitForSeconds(1);
            
            MoveCleanup();
        }
    }

    public void StopNavigating()
    {
        StopCleanup();

        StopCoroutine(movingCoroutine);
        landmarkObjects.ForEach(Destroy);
        landmarkObjects.Clear();
    }

    protected GameObject CreateLandmarkObject(WorldCoordinates cameraCoords, Landmark landmark)
    {
        var vector = PositioningUtils.GetPositioningVectorFromCamera(cameraCoords, landmark.Coordinates);

        var modelObj = landmark.Model == null ? Instantiate(landmarkPlaceholder) : ModelImporter.Import(landmark.Model);

        ModelImporter.ApplyMaterial(modelObj, landmarkMaterial);
        modelObj.transform.position = vector;
        modelObj.name = landmark.Name;

        return modelObj;
    }
}
