using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SwipeToAction : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public enum SwipeDirection
    {
        Right, Left
    }

    public Transform topView;

    public SwipeDirection swipeDirection = SwipeDirection.Left;
    public float commitDistance = 100f;
    public float stopDistance = 600f;   // negative for infinite

    public Action<GameObject> SwipeAction { get; set; }

    private Vector3 startPosition;
    private Vector3 topViewStartPosition;

    private bool wasMoved;

    private bool CompareDistance(float distace, float comp)
    {
        switch (swipeDirection)
        {
            case SwipeDirection.Right:
                return distace > comp;
            case SwipeDirection.Left:
                return distace < -comp;
            default:
                return false;
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        var but = gameObject.GetComponent<Button>();
        if (but != null) but.enabled = true;
        wasMoved = false;
        startPosition = eventData.position;
        topViewStartPosition = topView.localPosition;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.pointerClick != null && eventData.pointerClick != this.gameObject)
            return;

        Vector3 distance = (Vector3)eventData.position - startPosition;

        if (CompareDistance(distance.x, 1)) wasMoved = true;
        var increment = 0f;
        if (stopDistance < 0)
            increment =
                swipeDirection == SwipeDirection.Left ? Mathf.Min(0f, distance.x) :
                swipeDirection == SwipeDirection.Right ? Mathf.Max(0f, distance.x) :
                0;
        else 
            increment = 
                swipeDirection == SwipeDirection.Left ? Mathf.Max(Mathf.Min(0f, distance.x), -stopDistance) :
                swipeDirection == SwipeDirection.Right ? Mathf.Min(Mathf.Max(0f, distance.x), stopDistance) : 
                0;

        float newPositionX = topViewStartPosition.x + increment;
        topView.localPosition = new Vector3(newPositionX, topViewStartPosition.y, topViewStartPosition.z);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        Vector3 distance = (Vector3)eventData.position - startPosition;
        var but = gameObject.GetComponent<Button>();
        if (but != null) but.enabled = !wasMoved;


        if (CompareDistance(distance.x, commitDistance))
        {
            SwipeAction.Invoke(gameObject);
            topView.localPosition = topViewStartPosition;
        }
        else
        {
            topView.localPosition = topViewStartPosition;
        }
    }
}
