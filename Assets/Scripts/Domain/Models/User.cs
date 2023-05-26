using Assets.Scripts.Domain;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User : SerializableBase<User>
{
    public int Id { get; set; }
    public string Email { get; set; }
}
