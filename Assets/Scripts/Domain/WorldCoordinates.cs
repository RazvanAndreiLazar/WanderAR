using UnityEngine;

namespace Assets.Scripts.Domain
{
    public class WorldCoordinates
    {
        private float _longitude = 0;
        public float Longitude
        {
            get { return _longitude; }
            set { _longitude = value; }
        }
        public float LongitudeRad
        {
            get => _longitude * Mathf.Deg2Rad;
            set
            {
                _longitude = value * Mathf.Rad2Deg;
            }
        }


        private float _latitude;
        public float Latitude
        {
            get { return _latitude; }
            set { _latitude = value; }
        }
        public float LatitudeRad
        {
            get => _latitude * Mathf.Deg2Rad;
            set
            {
                _latitude = value * Mathf.Rad2Deg;
            }
        }


        public float Altitude { get; set; } = 0;

        public WorldCoordinates(float latitude, float longitude)
        {
            _latitude = latitude;
            _longitude = longitude;
            Altitude = 0;
        }
        public WorldCoordinates(float latitude, float longitude, float altitude)
        {
            _latitude = latitude;
            _longitude = longitude;
            Altitude = altitude;
        }
    }
}
