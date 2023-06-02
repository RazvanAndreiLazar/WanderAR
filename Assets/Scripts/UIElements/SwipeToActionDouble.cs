using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SwipeToActionDouble : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public Transform topView;

    public float commitDistance = 100f;
    public float stopDistance = 600f;   // negative for infinite

    public Action<GameObject> LeftSwipeAction { get; set; }
    public Action<GameObject> RightSwipeAction { get; set; }

    private Vector3 startPosition;
    private Vector3 topViewStartPosition;

    private bool wasMoved;


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
        Vector3 distance = (Vector3)eventData.position - startPosition;

        if (Mathf.Abs(distance.x) > 1) wasMoved = true;
        var increment = stopDistance < 0 ? distance.x : 
            Mathf.Min(Mathf.Max(distance.x, -stopDistance), stopDistance); 

        float newPositionX = topViewStartPosition.x + increment;
        topView.localPosition = new Vector3(newPositionX, topViewStartPosition.y, topViewStartPosition.z);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        Vector3 distance = (Vector3)eventData.position - startPosition;
        var but = gameObject.GetComponent<Button>();
        if (but != null) but.enabled = !wasMoved;


        if (distance.x < -commitDistance)
            LeftSwipeAction.Invoke(gameObject);
        else if (distance.x > commitDistance)
            RightSwipeAction.Invoke(gameObject);
        
        topView.localPosition = topViewStartPosition;
    }
}
