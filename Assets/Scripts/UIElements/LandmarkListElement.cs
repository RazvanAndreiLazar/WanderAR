using Assets.Scripts.Domain.DTOs;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


namespace Assets.Scripts.UIElements
{
    public class LandmarkListElement : MonoBehaviour
    {
        public NoModelLandmarkDTO landmark = null;

        public GameObject disabledTrashCan = null;

        private Transform normalParent;

        private TMP_Text nameTxt;
        private TMP_Text locationTxt;
        private TMP_Text distanceTxt;

        #region PRIVATE CONSTS
        private const int NAME_POS = 0;
        private const int LOCATION_POS = 1;
        private const int DISTANCE_POS = 2;
        #endregion

        private void Start()
        {
            normalParent = gameObject.transform.parent;

            nameTxt = transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            locationTxt = transform.GetChild(LOCATION_POS).gameObject.GetComponent<TMP_Text>();
            distanceTxt = transform.GetChild(DISTANCE_POS).gameObject.GetComponent<TMP_Text>();
        }

        private void Update()
        {
            if (landmark == null)
                Hide();
            else
            {
                Show();
                nameTxt.text = landmark.Name;
                locationTxt.text = landmark.City;
                distanceTxt.text = $"{landmark.Latitude} {landmark.Longitude} {landmark.Altitude}";
            }
        }

        private void Hide()
        {
            gameObject.transform.SetParent(disabledTrashCan.transform, false);
        }

        private void Show()
        {
            gameObject.transform.SetParent(normalParent, false);
        }
    }
}
