using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assets.Scripts.Services
{
    public class LandmarkService : SingletonBase<LandmarkService>
    {
        private LandmarkService() { }

        private const string BASE_ENDPOINT = "/landmarks";

        public IEnumerator GetGlobalLandmarks(Action<IEnumerable<NoModelLandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get(BASE_ENDPOINT + "/user/global", SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator GetOwnLandmarks(Action<IEnumerable<NoModelLandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get(BASE_ENDPOINT + "/user/own", SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator GetAllAvailableLandmarks(Action<IEnumerable<NoModelLandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get(BASE_ENDPOINT + "/user", SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator GetAllAvailableLandmarksGuest(Action<IEnumerable<NoModelLandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get(BASE_ENDPOINT, callback: callback, errorCallback: errorCallback);
        }

        public IEnumerator GetLandmark(int landmarkId, Action<LandmarkDTO> callback, Action<ErrorDTO> errorCallback)
        {
            if (AppStates.UserState == UserState.Guest) 
                yield return WebUtils.Get($"{BASE_ENDPOINT}/{landmarkId}",
                    callback: callback, errorCallback: errorCallback);
            if (AppStates.UserState == UserState.Logged)
                yield return WebUtils.Get($"{BASE_ENDPOINT}/{landmarkId}", SessionVariables.SessionToken, 
                    callback: callback, errorCallback: errorCallback);
        }

        public IEnumerator GetProxyLandmarks(float distance, WorldCoordinates cameraCoords, Action<IEnumerable<LandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
            => GetProxyLandmarks(distance, cameraCoords.Latitude, cameraCoords.Longitude, cameraCoords.Altitude, callback, errorCallback);
        public IEnumerator GetProxyLandmarks(float distance, float latitude, float longitude, float altitude, Action<IEnumerable<LandmarkDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            var paramString = $"distance={distance}&latitude={latitude}&longitude={longitude}&altitude={altitude}";

            if (SessionVariables.SessionToken == "")
                yield return WebUtils.Get($"{BASE_ENDPOINT}/proximity?{paramString}", callback: callback, errorCallback: errorCallback);
            else
                yield return WebUtils.Get($"{BASE_ENDPOINT}/user/proximity?{paramString}", SessionVariables.SessionToken, 
                    callback: callback, errorCallback: errorCallback);
        }
    }
}
