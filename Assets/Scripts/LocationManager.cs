using Assets.Scripts.Domain;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocationManager : MonoBehaviour
{
    public static WorldCoordinates Location { get; set; } = new(46.77472f, 23.62172f, 360);

    // used for the location until changed to an actual location provider
    public float latitude;
    public float longitude;
    public float altitude;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Location.Latitude = latitude;
        Location.Longitude = longitude;
        Location.Altitude = altitude;
    }
}
