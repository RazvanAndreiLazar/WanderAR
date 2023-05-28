using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class SessionVariables
{
    public const string SERVER_URL = "https://localhost:7145/api";


    private static string _sessionToken = "";
    public static string SessionToken {
        set { 
            _sessionToken = value;
            File.WriteAllText(Paths.SESSION_TOKEN_PATH, value);
        }
        get {
            if (_sessionToken == "")
            {
                _sessionToken = File.ReadAllText(Paths.SESSION_TOKEN_PATH);
            }
            return _sessionToken; 
        } 
    }

    public static User LoggedUser { get; set; } = null;

    private static List<Landmark> _landmarks = new();
    public static List<Landmark> Landmarks { get => _landmarks; set {
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
