using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.UIElements
{
    public class LandmarkListElement : ListElementBase<LandmarkWithDistance>
    {
        public LandmarkWithDistance Landmark 
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

        private SwipeToAction swipeBehaviour;

        protected override void StartSetup()
        {
            var topView = transform.GetChild(1);

            nameTxt = topView.transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            locationTxt = topView.transform.GetChild(LOCATION_POS).gameObject.GetComponent<TMP_Text>();
            distanceTxt = topView.transform.GetChild(DISTANCE_POS).gameObject.GetComponent<TMP_Text>();


            var but = gameObject.GetComponent<Button>();
            swipeBehaviour = gameObject.GetComponent<SwipeToAction>();
        }

        protected override void UpdateBehaviour()
        {
            nameTxt.text = item.Landmark.Name;
            locationTxt.text = item.Landmark.City;

            distanceTxt.text = item.Distance < 10000 ? $"{Mathf.Floor(item.Distance)}m" : $"{Mathf.Floor(item.Distance/1000)}km";
             
            //swipeBehaviour.enabled = Landmark.Id == SessionVariables.LoggedUser.Id;

        }
    }
}
