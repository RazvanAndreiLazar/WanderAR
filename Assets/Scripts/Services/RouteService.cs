using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Utils;
using System;
using System.Collections;
using System.Collections.Generic;

namespace Assets.Scripts.Services
{
    public class RouteService : SingletonBase<RouteService>
    {
        private RouteService() { }

        private const string BASE_ENDPOINT = "/routes";

        public IEnumerator GetRoutes(Action<IEnumerable<RouteDTO>> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get(BASE_ENDPOINT, SessionVariables.SessionToken, callback, errorCallback);
        }
        public IEnumerator GetRoute(int routeId, Action<RouteWithLandmarksDTO> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Get($"{BASE_ENDPOINT}/{routeId}", SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator UpdateRoute(RouteUpdateDTO route, Action<RouteWithLandmarksDTO> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Put(BASE_ENDPOINT, route, SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator AddRoute(RouteAddDTO route, Action<RouteWithLandmarksDTO> callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Post(BASE_ENDPOINT, route, SessionVariables.SessionToken, callback, errorCallback);
        }

        public IEnumerator DeleteRoute(int routeId, Action callback, Action<ErrorDTO> errorCallback)
        {
            yield return WebUtils.Delete($"{BASE_ENDPOINT}/{routeId}", SessionVariables.SessionToken, callback, errorCallback);
        }
    }
}
