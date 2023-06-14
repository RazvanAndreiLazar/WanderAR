using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts.Domain.Models
{
    public class NavigationLandmarkObject
    {
        public bool IsModelPlaceholder { get; set; }
        public GameObject ModelObject { get; set; }
        public Landmark Landmark { get; set; }

        public void Hide()
        {
            ModelObject.SetActive(false);
        }
        public void Show()
        {
            ModelObject?.SetActive(true);
        }
    }
}
