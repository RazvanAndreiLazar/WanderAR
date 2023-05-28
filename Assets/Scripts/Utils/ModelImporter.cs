using Dummiesman;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace Assets.Scripts.Utils
{ 
    public static class ModelImporter
    {
        public static GameObject Import(byte[] modelBytes)
        {
            MemoryStream stream = new(modelBytes);
            return new OBJLoader().Load(stream);
        }

        public static void ApplyMaterial(GameObject landmark, Material modelMaterial)
        {
            for (int i = 0; i < landmark.transform.childCount; i++)
            {
                var child = landmark.transform.GetChild(i);
                var renderer = child.gameObject.GetComponent<Renderer>();
                var copyMaterials = renderer.sharedMaterials;
                for (var j = 0; j < renderer.sharedMaterials.Length; j++)
                {
                    copyMaterials[j] = modelMaterial;
                }
                renderer.sharedMaterials = copyMaterials;
            }
        }
    }
}
