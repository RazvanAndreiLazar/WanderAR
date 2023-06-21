using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

namespace Assets.Scripts.Utils
{
    public class WebUtils : MonoBehaviour
    {
        private const int REQUEST_TIMEOUT = 10;

        private static string baseUrl => SessionVariables.SERVER_URL;

        private static UnityWebRequest SetupPostRequest<T>(string endpoint, SerializableBase<T> body, string authToken) where T : SerializableBase<T>
        {
            UnityWebRequest request = UnityWebRequest.Put(baseUrl + endpoint, body.Serialized());
            request.method = "POST";
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Accept", "*/*");
            request.timeout = REQUEST_TIMEOUT;

            if (authToken != null)
                request.SetRequestHeader("Authorization", $"Bearer {authToken}");
            return request;
        }

        private static void ProcessResults<U>(UnityWebRequest request, Action<U> callback, Action<ErrorDTO> errorCallback) where U : SerializableBase<U>
        {
            if (request.result == UnityWebRequest.Result.Success)
            {
                callback?.Invoke(SerializableBase<U>.Deserialize(request.downloadHandler.text));
            }
            else
            {
                Debug.Log(request.error);
                if (ErrorDTO.TryDeserialize(request.downloadHandler.text, out ErrorDTO err))
                    errorCallback?.Invoke(err);
                else
                    errorCallback?.Invoke(new()
                    {
                        Errors = new() { { "$", new string[] { request.error } } },
                        Title = "ERROR"
                    });
            }
        }

        private static void ProcessResults<U>(UnityWebRequest request, Action<IEnumerable<U>> callback, Action<ErrorDTO> errorCallback) where U : SerializableBase<U>
        {
            if (request.result == UnityWebRequest.Result.Success)
            {
                callback?.Invoke(SerializableListBase.Deserialize<U>(request.downloadHandler.text));
            }
            else
            {
                Debug.Log(request.error);

                if (ErrorDTO.TryDeserialize(request.downloadHandler.text, out ErrorDTO err))
                    errorCallback?.Invoke(err);
                else
                    errorCallback?.Invoke(new()
                    {
                        Errors = new() { { "$", new string[] { request.error } } },
                        Title = "ERROR"
                    });
            }
        }
     
        public static IEnumerator Post<T, U>(string endpoint, SerializableBase<T> body, string authToken = null, Action<U> callback = null, Action<ErrorDTO> errorCallback = null) where T : SerializableBase<T> where U : SerializableBase<U>
        {
            UnityWebRequest request = SetupPostRequest(endpoint, body, authToken);

            yield return request.SendWebRequest();

            ProcessResults(request, callback, errorCallback);
        }
     
        public static IEnumerator Put<T, U>(string endpoint, SerializableBase<T> body, string authToken = null, Action<U> callback = null, Action<ErrorDTO> errorCallback = null) where T : SerializableBase<T> where U : SerializableBase<U>
        {
            UnityWebRequest request = UnityWebRequest.Put(baseUrl + endpoint, body.Serialized());
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Accept", "*/*");
            request.timeout = REQUEST_TIMEOUT;

            if (authToken != null)
                request.SetRequestHeader("Authorization", $"Bearer {authToken}");

            yield return request.SendWebRequest();

            ProcessResults(request, callback, errorCallback);
        }
     
        public static IEnumerator Get<T>(string endpoint, string authToken = null, Action<T> callback = null, Action<ErrorDTO> errorCallback = null) where T : SerializableBase<T>
        {
            UnityWebRequest request = UnityWebRequest.Get(baseUrl + endpoint);
            request.SetRequestHeader("Accept", "*/*");
            request.timeout = REQUEST_TIMEOUT;

            if (authToken != null)
                request.SetRequestHeader("Authorization", $"Bearer {authToken}");

            yield return request.SendWebRequest();

            ProcessResults(request, callback, errorCallback);
        }

        public static IEnumerator Get<T>(string endpoint, string authToken = null, Action<IEnumerable<T>> callback = null, Action<ErrorDTO> errorCallback = null) where T : SerializableBase<T>
        {
            UnityWebRequest request = UnityWebRequest.Get(baseUrl + endpoint);
            request.SetRequestHeader("Accept", "*/*");
            request.timeout = REQUEST_TIMEOUT;

            if (authToken != null)
                request.SetRequestHeader("Authorization", $"Bearer {authToken}");

            yield return request.SendWebRequest();

            ProcessResults(request, callback, errorCallback);
        }
     
        public static IEnumerator Delete(string endpoint, string authToken = null, Action callback = null, Action<ErrorDTO> errorCallback = null)
        {
            UnityWebRequest request = UnityWebRequest.Put(baseUrl + endpoint, "");
            request.method = "DELETE";
            request.SetRequestHeader("Accept", "*/*");
            request.timeout = REQUEST_TIMEOUT;
            //UnityWebRequest request = UnityWebRequest.Delete(baseUrl + endpoint);
            //request.SetRequestHeader("Accept", "*/*");

            if (authToken != null)
                request.SetRequestHeader("Authorization", $"Bearer {authToken}");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                callback?.Invoke();
            }
            else
            {
                Debug.Log(request.error);
                errorCallback?.Invoke(ErrorDTO.Deserialize(request.downloadHandler.text));
            }
        }
    }
}
