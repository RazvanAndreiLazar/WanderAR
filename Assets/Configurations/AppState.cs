using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum NavigationState
{
    None, Proximity, Singular, OneByOne, AllAtOnce
}

public enum UserState
{
    Logged, Guest, None
}

public static class AppState
{
    public static UserState UserState { get; set; }
    public static NavigationState NavigationState { get; set; } = NavigationState.None;
}
