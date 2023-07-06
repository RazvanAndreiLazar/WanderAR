using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class SessionVariables
{
    private const string LOCALHOST_SERVER_URL = "https://localhost:7145/api";

    private const string PHONE_IP = "192.168.58.191";

    private const string IP = PHONE_IP;
    private const string PORT = "80";

#if UNITY_EDITOR
    //private const string REMOTE_SERVER_URL = "https://localhost:44348/api";
    private const string REMOTE_SERVER_URL = "http://www.wanderar.com/api";
#else
    private const string REMOTE_SERVER_URL = "http://" + IP + ":" + PORT + "/api";
#endif


#if UNITY_EDITOR
    //private const string REMOTE_SERVER_URL = "https://localhost:44348/api";
    public static string SERVER_URL => REMOTE_SERVER_URL;
#else
    public static string SERVER_URL => "http://" + ServerIP + ":" + PORT + "/api";
#endif


    private static string _serverIP = "";
    public static string ServerIP
    {
        get {
            if (_serverIP == "")
            {
                //if (IsDebugging)
                //{
                //    ServerIP = IP;
                //    return IP;
                //}
                try
                {
                    _serverIP = File.ReadAllText(Paths.SERVER_ADDRESS_PATH);
                }
                catch (IOException) { }
            }
            return _serverIP;
        }
        set
        {
            _serverIP = value;

            try
            {
                File.WriteAllText(Paths.SERVER_ADDRESS_PATH, value);

            }
            catch (IOException)
            {
                File.Create(Paths.SERVER_ADDRESS_PATH);
                File.WriteAllText(Paths.SERVER_ADDRESS_PATH, value);
            }
        }
    }


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

    public static bool IsDebugging { get; set; } = false;

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

    public static float AngleErr { get; set; } = 5;
}
