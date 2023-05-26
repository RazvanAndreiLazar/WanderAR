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
    }
}
