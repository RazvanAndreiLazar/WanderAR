using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts.Domain.DTOs;
using TMPro;
using UnityEngine.UI;
using System;
using UnityEngine.Events;

namespace Assets.Scripts.UIElements
{
    public class RouteLandmarkListElement : ListElementBase<RouteLandmarkDTO>
    {
        public RouteLandmarkDTO Landmark
        {
            get => item;
            set { item = value; }
        }

        public Action UpAction;
        public Action DownAction;
        public Action DeleteAction;

        private TMP_Text nameTxt;

        private Button upButton;
        private Button downButton;
        private Button deleteButton;


        #region PRIVATE CONSTS
        private const int UP_POS = 0;
        private const int DOWN_POS = 1;
        private const int NAME_POS = 2;
        #endregion

        private void _UpAction() => UpAction.Invoke();
        private void _DownAction() => DownAction.Invoke();
        private void _DeleteAction() => DeleteAction.Invoke();

        protected override void StartSetup()
        {
            var topView = transform.GetChild(1);

            nameTxt = topView.transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            upButton = topView.transform.GetChild(UP_POS).gameObject.GetComponent<Button>();
            downButton = topView.transform.GetChild(DOWN_POS).gameObject.GetComponent<Button>();

            gameObject.GetComponent<SwipeToAction>().SwipeAction = _ => _DeleteAction();

            upButton.onClick.AddListener(_UpAction);
            downButton.onClick.AddListener(_DownAction);
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
