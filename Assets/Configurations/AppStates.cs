using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AppState
{
    Navigation, Menu
}

public enum NavigationState
{
    None, Proximity, OneByOne, AllAtOnce
}

public enum UserState
{
    Logged, Guest, None
}

public static class AppStates
{
    public static AppState AppState { get; set; }
    public static UserState UserState { get; set; }
    public static NavigationState NavigationState { get; set; } = NavigationState.None;
}
