using Assets.Scripts.Domain.DTOs;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class SessionVariables
{
    public const string SERVER_URL = "https://localhost:7145/api";

    public static bool IsUsedAsGuest { get; set; }


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

    public static List<NoModelLandmarkDTO> Landmarks { get; set; } = new();
}
