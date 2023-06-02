using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Domain.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Assets.Scripts.UIElements
{
    public class RouteLandmarkAddListElement : ListElementBase<LandmarkWithDistance>
    {
        public LandmarkWithDistance Landmark
        {
            get => item;
            set { item = value; }
        }

        private bool isSelected;

        public bool IsSelected
        {
            get { return isSelected; }
            set {
                checkedImage.gameObject.SetActive(value);
                isSelected = value; 
            }
        }



        private TMP_Text landmarkInfoText;
        private TMP_Text landmarkCityText;
        private Image checkedImage;

        #region PRIVATE CONSTS
        private const int IMAGE_POS = 0; 
        private const int NAME_POS = 1; 
        private const int CITY_POS = 2; 
        #endregion

        protected override void StartSetup()
        {
            checkedImage = transform.GetChild(IMAGE_POS).gameObject.GetComponent<Image>();
            landmarkInfoText = transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            landmarkCityText = transform.GetChild(CITY_POS).gameObject.GetComponent<TMP_Text>();
        }

        protected override void UpdateBehaviour()
        {
            var displayDistance = item.Distance < 10000 ? $"{Mathf.Floor(item.Distance)}m" : $"{Mathf.Floor(item.Distance / 1000)}km";

            landmarkInfoText.text = $"{Landmark.Landmark.Name} ({displayDistance})";
            landmarkCityText.text = Landmark.Landmark.City;
        }

        public void SetOnClickAction(Action<LandmarkWithDistance> action)
        {
            GetComponent<Button>().onClick.AddListener(() => action.Invoke(Landmark));
        }
    }
}