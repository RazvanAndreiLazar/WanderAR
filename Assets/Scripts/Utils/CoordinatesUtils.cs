using Assets.Scripts.Domain;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assets.Scripts.Utils
{
    /// <summary>
    /// Class for transformations from geodetic coordinates to virtual (Cartesian) coordinates
    /// </summary>
    public static class CoordinatesUtils
    {
        // in m
        public const float POLAR_RADIUS = 6356752.314245f;                // semi-minor radius
        public const float ECUATORIAL_RADIUS = 6378137f;                // semi-major radius
        public const float ECCENTRICITY_SQUARED = 1 - (POLAR_RADIUS / ECUATORIAL_RADIUS) * (POLAR_RADIUS / ECUATORIAL_RADIUS);  // first eccentricity sqared


        public static float RadiusOfCurvatureInPoint(float latitudeDeg) => RadRadiusOfCurvatureInPoint(latitudeDeg * Mathf.Deg2Rad);
        public static float RadRadiusOfCurvatureInPoint(float latitudeRad)
        {
            // https://journals.pan.pl/Content/98324/PDF/art05.pdf
            var sinLat = Mathf.Sin(latitudeRad);
            return ECUATORIAL_RADIUS / Mathf.Sqrt(1 - ECCENTRICITY_SQUARED * sinLat * sinLat);
        }


        /// <summary>
        /// Computes the Cartesian coordinates from real-world coordinates (WGS 84)
        /// </summary>
        /// <param name="coords">degrees</param>
        /// <returns></returns>
        public static Vector3 CoorinatesToCartesian(WorldCoordinates coords) => RadCoorinatesToCartesian(coords.LatitudeRad, coords.LongitudeRad, coords.Altitude);
        
        /// <summary>
        /// Computes the Cartesian coordinates from real-world coordinates (WGS 84)
        /// </summary>
        /// <param name="latitude">degrees</param>
        /// <param name="longitude">degrees</param>
        /// <returns></returns>
        public static Vector3 CoorinatesToCartesian(float latitude, float longitude) => RadCoorinatesToCartesian(Mathf.Deg2Rad * latitude, Mathf.Deg2Rad * longitude);

        /// <summary>
        /// Computes the Cartesian coordinates from real-world coordinates (WGS 84)
        /// </summary>
        /// <param name="latitude">radians</param>
        /// <param name="longitude">radians</param>
        /// <returns></returns>
        public static Vector3 RadCoorinatesToCartesian(float latitude, float longitude) => RadCoorinatesToCartesian(latitude, longitude, 0);

        /// <summary>
        /// Computes the Cartesian coordinates from real-world coordinates (WGS 84)
        /// </summary>
        /// <param name="latitude">radians</param>
        /// <param name="longitude">radians</param>
        /// <param name="altitude"></param>
        /// <returns></returns>
        public static Vector3 RadCoorinatesToCartesian(float latitude, float longitude, float altitude)
        {
            //https://journals.pan.pl/Content/98324/PDF/art05.pdf
            var e2 = ECCENTRICITY_SQUARED;
            var N = RadiusOfCurvatureInPoint(latitude);
            var h = altitude;

            //! might need geocentric latitude as well
            var x = (N + h) * Mathf.Cos(latitude) * Mathf.Cos(longitude);   // x in formula
            var y = ((1 - e2) * N + h) * Mathf.Sin(latitude);               // z in formula
            var z = (N + h) * Mathf.Cos(latitude) * Mathf.Sin(longitude);   // y in formula

            return new Vector3(x, y, z);
        }



        public static float DistanceBetweenPoints(WorldCoordinates p1, WorldCoordinates p2)
        {
            return Vector3.Distance(CoorinatesToCartesian(p1), CoorinatesToCartesian(p2));
        }
        public static float DistanceBetweenPoints(Vector3 p1, Vector3 p2)
        {
            return Vector3.Distance(p1, p2);
        }

    }
}
