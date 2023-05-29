using Assets.Scripts.Domain.DTOs;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


namespace Assets.Scripts.UIElements
{
    public class LandmarkListElement : ListElementBase<NoModelLandmarkDTO>
    {
        public NoModelLandmarkDTO Landmark 
        { 
            get => item; 
            set { item = value; } 
        }

        private TMP_Text nameTxt;
        private TMP_Text locationTxt;
        private TMP_Text distanceTxt;

        #region PRIVATE CONSTS
        private const int NAME_POS = 0;
        private const int LOCATION_POS = 1;
        private const int DISTANCE_POS = 2;
        #endregion

        protected override void StartSetup()
        {

            nameTxt = transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            locationTxt = transform.GetChild(LOCATION_POS).gameObject.GetComponent<TMP_Text>();
            distanceTxt = transform.GetChild(DISTANCE_POS).gameObject.GetComponent<TMP_Text>();
        }

        protected override void UpdateBehaviour()
        {
            nameTxt.text = item.Name;
            locationTxt.text = item.City;
            distanceTxt.text = $"{item.Latitude} {item.Longitude} {item.Altitude}";
        }
    }
}
