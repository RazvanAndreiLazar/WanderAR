using Assets.Scripts.Domain;
using System;
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
        class Matrix3x3
        {
            private float[,] _data = new float[3, 3];

            public float this[int row, int col]
            {
                get => _data[row, col];
                set { _data[row, col] = value; }
            }

            public Matrix3x3()
            {

            }
            public Matrix3x3(float[] data)
            {
                if (data.Length != 9) throw new System.ArgumentException();

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        _data[i, j] = data[i * 3 + j];
                    }
                }
            }
            public Matrix3x3(Vector3 r1, Vector3 r2, Vector3 r3)
            {
                _data[0, 0] = r1.x; _data[0, 1] = r1.y; _data[0, 2] = r1.z;
                _data[1, 0] = r2.x; _data[1, 1] = r2.y; _data[1, 2] = r2.z;
                _data[2, 0] = r3.x; _data[2, 1] = r3.y; _data[2, 2] = r3.z;
            }

            public static Matrix3x3 operator +(Matrix3x3 m) => m;
            public static Matrix3x3 operator -(Matrix3x3 m) {
                var nm = new Matrix3x3();
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        nm[i, j] = -m[i, j];
                    }
                }
                return nm;
            }

            public static Matrix3x3 operator +(Matrix3x3 m1, Matrix3x3 m2)
            {
                var nm = new Matrix3x3();
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        nm[i, j] = m1[i, j] + m2[i, j];
                    }
                }
                return nm;
            }
            public static Matrix3x3 operator -(Matrix3x3 m1, Matrix3x3 m2) => m1 + (-m2);

            public static Matrix3x3 operator *(Matrix3x3 m1, Matrix3x3 m2)
            {
                var nm = new Matrix3x3();
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        var val = 0f;
                        for (int k = 0; k < 3; k++)
                        {
                            val += m1[i, k] * m2[k, j];
                        }
                        nm[i, j] = val;
                    }
                }
                return nm;
            }

            public static Vector3 operator *(Matrix3x3 m, Vector3 v)
            {
                var nv = Vector3.zero;

                nv.x = m[0, 0] * v.x + m[0, 1] * v.y + m[0, 2] * v.z;
                nv.y = m[1, 0] * v.x + m[1, 1] * v.y + m[1, 2] * v.z;
                nv.z = m[2, 0] * v.x + m[2, 1] * v.y + m[2, 2] * v.z;

                return nv;
            }

            public override string ToString()
            {
                return $"[[{_data[0, 0]}, {_data[0, 1]}, {_data[0, 2]}]; [{_data[1, 0]}, {_data[1, 1]}, {_data[1, 2]}]; [{_data[2, 0]}, {_data[2, 1]}, {_data[2, 2]}]]";
            }
        }

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
        /// Computes the Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates from real-world geodetic coordinates (WGS 84)
        /// </summary>
        /// <param name="coords"></param>
        /// <returns></returns>
        public static Vector3 GeodeticToECEF(WorldCoordinates coords) => RadGeodeticToECEF(coords.LatitudeRad, coords.LongitudeRad, coords.Altitude);
        
        /// <summary>
        /// Computes the Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates from real-world geodetic coordinates (WGS 84)
        /// </summary>
        /// <param name="coords"></param>
        /// <returns></returns>
        public static Vector3 GeodeticToECEF(WorldCoordinates coords, bool noAltitude) => RadGeodeticToECEF(coords.LatitudeRad, coords.LongitudeRad, 0);

        /// <summary>
        /// Computes the Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates from real-world geodetic coordinates (WGS 84).
        /// The point is considered at 0m altitude.
        /// </summary>
        /// <param name="latitude">degrees</param>
        /// <param name="longitude">degrees</param>
        /// <returns></returns>
        public static Vector3 GeodeticToECEF(float latitude, float longitude) => RadGeodeticToECEF(Mathf.Deg2Rad * latitude, Mathf.Deg2Rad * longitude);

        /// <summary>
        /// Computes the Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates from real-world geodetic coordinates (WGS 84).
        /// The point is considered at 0m altitude.
        /// </summary>
        /// <param name="latitude">radians</param>
        /// <param name="longitude">radians</param>
        /// <returns></returns>
        public static Vector3 RadGeodeticToECEF(float latitude, float longitude) => RadGeodeticToECEF(latitude, longitude, 0);

        /// <summary>
        /// Computes the Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates from real-world geodetic coordinates (WGS 84)
        /// </summary>
        /// <param name="latitude">radians</param>
        /// <param name="longitude">radians</param>
        /// <param name="altitude"></param>
        /// <returns></returns>
        public static Vector3 RadGeodeticToECEF(float latitude, float longitude, float altitude)
        {
            //https://journals.pan.pl/Content/98324/PDF/art05.pdf
            var e2 = ECCENTRICITY_SQUARED;
            var N = RadiusOfCurvatureInPoint(latitude);
            var h = altitude;

            // since Unity works in a frame with Y up and Z depth, switch the y and z coordinates
            // => x - prime meridian U equator, y - nort pole, z - completing
            var x = (N + h) * Mathf.Cos(latitude) * Mathf.Cos(longitude);   // x in formula
            var y = ((1 - e2) * N + h) * Mathf.Sin(latitude);               // z in formula
            var z = (N + h) * Mathf.Cos(latitude) * Mathf.Sin(longitude);   // y in formula

            return new Vector3(x, y, z);
        }

        /// <summary>
        /// Computes the East-Up-North (EUN) Cartesian coordinates from Earth-Centered-Earth-Fixed (ECEF) Cartesian coordinates.
        /// The EUN frame has its origin at the observer
        /// </summary>
        /// <param name="ecefCoords"></param>
        /// <param name="observerCoordinates"></param>
        /// <returns></returns>
        public static Vector3 ECEFtoEUN(Vector3 ecefCoords, WorldCoordinates observerCoordinates)
        {
            Vector3 observerECEF = GeodeticToECEF(observerCoordinates);
            Matrix3x3 translationMatrix = GetTranslationMatrix(observerCoordinates);

            return translationMatrix * (ecefCoords - observerECEF);
        }

        /// <summary>
        /// Get the translation matrix from ECEF to EUN.
        /// </summary>
        /// <param name="observerCoordinates"></param>
        /// <returns></returns>
        /// <exception cref="NotImplementedException"></exception>
        private static Matrix3x3 GetTranslationMatrix(WorldCoordinates observerCoordinates) 
        {
            // https://gssc.esa.int/navipedia/index.php/Transformations_between_ECEF_and_ENU_coordinates

            var phi = observerCoordinates.LatitudeRad;
            var lambda = observerCoordinates.LongitudeRad;

            // since Unity works in a frame with Y up and Z depth, switch the y and z coordinates
            // => x - prime meridian U equator, y - nort pole, z - completing
            // this implies switching the 2nd and 3rd column for the multiplication and the 2nd and 3rd row for the result
            return new Matrix3x3(new float[] { 
                -Mathf.Sin(lambda), 0, Mathf.Cos(lambda),
                Mathf.Cos(lambda) * Mathf.Cos(phi), Mathf.Sin(phi), Mathf.Sin(lambda) * Mathf.Cos(phi),
                -Mathf.Cos(lambda) * Mathf.Sin(phi), Mathf.Cos(phi), -Mathf.Sin(lambda) * Mathf.Sin(phi)
            });
        }

        /// <summary>
        /// Computes the straight distance between two points given by their geodetic coordinates
        /// </summary>
        /// <param name="p1"></param>
        /// <param name="p2"></param>
        /// <returns></returns>
        public static float DistanceBetweenPoints(WorldCoordinates p1, WorldCoordinates p2)
        {
            return Vector3.Distance(GeodeticToECEF(p1), GeodeticToECEF(p2));
        }
        
        /// <summary>
        /// Calculates the straight distance between two points given by their Cartesian coordinates
        /// !! coordinates need to be in the same system (ECEF or EUN) otherwise the results are not relevant 
        /// </summary>
        /// <param name="p1"></param>
        /// <param name="p2"></param>
        /// <returns></returns>
        public static float DistanceBetweenPoints(Vector3 p1, Vector3 p2)
        {
            return Vector3.Distance(p1, p2);
        }

    }
}
