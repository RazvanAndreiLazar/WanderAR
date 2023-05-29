using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts.Domain.DTOs;
using TMPro;
using UnityEngine.UI;
using System;

namespace Assets.Scripts.UIElements
{
    public class RouteLandmarkListElement : ListElementBase<RouteLandmarkDTO>
    {
        public RouteLandmarkDTO Landmark
        {
            get => item;
            set { item = value; }
        }

        public Action upAction;
        public Action downAction;

        private TMP_Text nameTxt;

        private Button upButton;
        private Button downButton;


        #region PRIVATE CONSTS
        private const int UP_POS = 0;
        private const int DOWN_POS = 1;
        private const int NAME_POS = 2;
        #endregion

        private void UpAction() => upAction.Invoke();
        private void DownAction() => downAction.Invoke();

        protected override void StartSetup()
        {
            nameTxt = transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            upButton = transform.GetChild(UP_POS).gameObject.GetComponent<Button>();
            downButton = transform.GetChild(DOWN_POS).gameObject.GetComponent<Button>();

            upButton.onClick.AddListener(UpAction);
            downButton.onClick.AddListener(DownAction);
        }

        protected override void UpdateBehaviour()
        {
            nameTxt.text = Landmark.Name;
        }
        
        public void SetUpButtonEnabled(bool interactable)
        {
            upButton.interactable = interactable;
        }
        public void SetDownButtonEnabled(bool interactable)
        {
            downButton.interactable = interactable;
        }
    }
}
