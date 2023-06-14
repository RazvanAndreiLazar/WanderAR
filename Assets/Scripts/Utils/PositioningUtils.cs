using Assets.Scripts.Domain;
using System;
using UnityEngine;

namespace Assets.Scripts.Utils
{
    public static class PositioningUtils
    {
        /// <summary>
        /// The distance where the short-range mode becomes long-range
        /// </summary>
        public const float CRIT_DISTANCE = 50000;

        /// <summary>
        /// The scale of the model (how many metres are in each unit)
        /// </summary>
        //public static int Scale { get; set; }

        public static Vector3 GetPositioningVectorFromCamera(WorldCoordinates cameraCoords, WorldCoordinates landmarkCoords)
        {
            var cameraCartesianCoords = CoordinatesUtils.GeodeticToECEF(cameraCoords);
            var landmarkCartesianCoords = CoordinatesUtils.GeodeticToECEF(landmarkCoords);

            var dist = CoordinatesUtils.DistanceBetweenPoints(cameraCartesianCoords, landmarkCartesianCoords);

            if (dist < CRIT_DISTANCE)
                return ShortRange(cameraCoords, landmarkCoords);
            return LongRange(cameraCoords, landmarkCoords);
        }

        private static Vector3 LongRange(WorldCoordinates cameraCoords, WorldCoordinates landmarkCoords)
        {
            var landmarkCartesianCoords = CoordinatesUtils.GeodeticToECEF(landmarkCoords);
            //return CoordinatesUtils.ECEFtoEUN(landmarkCartesianCoords, cameraCoords);
            return CoordinatesUtils.ECEFtoEUN(landmarkCartesianCoords, cameraCoords).normalized * CRIT_DISTANCE;
        }

        private static Vector3 ShortRange(WorldCoordinates cameraCoords, WorldCoordinates landmarkCoords)
        {
            // create an intermediate point with the latitude of the landmark and longitude of camera
            var pCoords = new WorldCoordinates(landmarkCoords.Latitude, cameraCoords.Longitude);

            // get the two vectors with the right lengths
            var a = GetDirectionVector(cameraCoords, pCoords);
            var b = GetDirectionVector(pCoords, landmarkCoords);

            // return the composed vector with the up axis value the difference in altitude
            return a + b + Vector3.up * (landmarkCoords.Altitude - cameraCoords.Altitude);
        }


        private static Vector3 GetDirectionVector(WorldCoordinates from, WorldCoordinates to)
        {
            var fromCart = CoordinatesUtils.RadGeodeticToECEF(from.LatitudeRad, from.LongitudeRad);
            var toCart = CoordinatesUtils.RadGeodeticToECEF(to.LatitudeRad, to.LongitudeRad);

            var dist = CoordinatesUtils.DistanceBetweenPoints(fromCart, toCart);

            if (from.Latitude == to.Latitude)
                return Vector3.right * dist * (from.Longitude > to.Longitude ? -1 : 1);
            if (from.Longitude == to.Longitude)
                return Vector3.forward * dist * (from.Latitude > to.Latitude ? -1 : 1);
            throw new Exception("Cannot use this function for the 2 coordinates provided");
        }
    }
}
