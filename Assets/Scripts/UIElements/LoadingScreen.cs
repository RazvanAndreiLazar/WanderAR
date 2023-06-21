using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadingScreen : MonoBehaviour
{
    public float speed = 5;
    public GameObject img;

    private void FixedUpdate()
    {
        img.transform.Rotate(Vector3.back * speed);
    }
}
