using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Paths
{
    public static string SESSION_TOKEN_PATH => Application.persistentDataPath + "/Token.txt";
    public static string SERVER_ADDRESS_PATH => Application.persistentDataPath + "/ServerAddr.txt";
}
