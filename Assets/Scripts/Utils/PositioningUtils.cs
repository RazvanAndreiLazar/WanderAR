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

        public static void AdjustRotation(GameObject sessionOriginObj)
        {
            var camera = sessionOriginObj.transform.GetChild(0);
            var cameraYaw = camera.transform.eulerAngles.y;
            var cameraYawOffset = camera.transform.localEulerAngles.y;
            var sessionOriginYaw = sessionOriginObj.transform.localEulerAngles.y;

            var phoneYaw = LocationManager.Heading.eulerAngles.y;

            //var rotation = 0f;
            //if (phoneYaw > cameraYaw)
            //{
            //    if (phoneYaw - cameraYaw < 180) rotation = phoneYaw - cameraYaw;
            //    else rotation = cameraYaw - phoneYaw;
            //}

            sessionOriginObj.transform.Rotate(Vector3.up, AngleDiff(cameraYaw, phoneYaw));
            //sessionOriginObj.transform.rotation = Quaternion.Euler(0, phoneYaw - cameraYawOffset, 0);
        }

        /// <summary>
        /// Computes the angle difference between a1 and a2 (reduced to a circle - 0=360)
        /// how much a1 needs to rotate to match a2 (positive is clockwise, negative is anti-clockwise)
        /// </summary>
        /// <param name="a1"></param>
        /// <param name="a2"></param>
        /// <returns></returns>
        public static float AngleDiff(float a1, float a2)
        {
            var oppositeA1 = a1 < 180 ? a1 + 180 : a1 - 180;
            
            if (a1 < 180)
            {
                // right rotation
                if (a2 < oppositeA1) return a2 - a1;
                // left rotation
                if (a2 <= a1) return a2 - a1;
                return a2 - (360 + a1);
            }

            // right rotation
            if (a2 >= a1) return a2 - a1;
            if (a2 < oppositeA1) return (360 + a2) - a1;
            // left rotation
            return a2 - a1;
        }

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
