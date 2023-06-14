using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class SessionVariables
{
    private const string LOCALHOST_SERVER_URL = "https://localhost:7145/api";

    private const string PHONE_IP = "192.168.124.191";
    private const string DORM_PUB_IP = "10.152.0.80";
    private const string DORM_PRIV_IP = "192.168.0.193";

    private const string IP = DORM_PUB_IP;
    private const string PORT = "80";

#if UNITY_EDITOR
    private const string REMOTE_SERVER_URL = "http://www.wanderar.com/api";
#else
    private const string REMOTE_SERVER_URL = "http://" + IP + ":" + PORT + "/api";
#endif

    public const string SERVER_URL = REMOTE_SERVER_URL;


    private static string _sessionToken = "";
    public static string SessionToken {
        set {
            _sessionToken = value;

            try
            {
                File.WriteAllText(Paths.SESSION_TOKEN_PATH, value);

            }
            catch (IOException)
            {
                File.Create(Paths.SESSION_TOKEN_PATH);
                File.WriteAllText(Paths.SESSION_TOKEN_PATH, value);
            }
        }
        get {
            if (_sessionToken == "")
            {
                try
                {
                    _sessionToken = File.ReadAllText(Paths.SESSION_TOKEN_PATH);
                }
                catch (IOException) { }
            }
            return _sessionToken; 
        } 
    }

    public static User LoggedUser { get; set; } = null;

    private static List<Landmark> _landmarks = new();
    public static List<Landmark> Landmarks { 
        get => _landmarks; 
        set {
            NavigationLandmarkIndex = 0;
            _landmarks = value;
        } 
    }
    public static int NavigationLandmarkIndex { get; private set; } = 0;
    public static void NavigationLandmarkIndexUp()
    {
        if (NavigationLandmarkIndex < Landmarks.Count - 1)
            NavigationLandmarkIndex++;
    }
    public static void NavigationLandmarkIndexDown()
    {
        if (NavigationLandmarkIndex > 0)
            NavigationLandmarkIndex--;
    }

    public static Landmark CurrentLandmark => _landmarks[NavigationLandmarkIndex];


    public static float ProximityRange { get; set; }
}
