using Assets.Scripts.Domain.DTOs;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts.UIElements
{
    public class RouteListElement : ListElementBase<RouteDTO>
    {
        public Action<RouteDTO> UpdateRouteAction;
        public Action<RouteDTO> DeleteRouteAction;

        public RouteDTO Route {
            get => item; 
            set { item = value; } 
        }

        private TMP_Text nameTxt;
        private TMP_Text infoTxt;

        #region PRIVATE CONSTS
        private const int NAME_POS = 0;
        private const int INFO_POS = 1;
        #endregion

        private SwipeToActionDouble swipe;

        private void UpdateRoute()
        {
            Debug.Log($"Update has been pressed for route {Route.Id}");
            UpdateRouteAction.Invoke(Route);
        }

        private void DeleteRoute()
        {
            Debug.Log($"Delete has been pressed for route {Route.Id}");
            DeleteRouteAction.Invoke(Route);
        }

        protected override void StartSetup()
        {
            var topView = transform.GetChild(1);

            nameTxt = topView.transform.GetChild(NAME_POS).gameObject.GetComponent<TMP_Text>();
            infoTxt = topView.transform.GetChild(INFO_POS).gameObject.GetComponent<TMP_Text>();

            swipe = gameObject.GetComponent<SwipeToActionDouble>();

            swipe.RightSwipeAction = _ => UpdateRoute();
            swipe.LeftSwipeAction = _ => DeleteRoute();
        }

        protected override void UpdateBehaviour()
        {
            nameTxt.text = Route.Name;
            infoTxt.text = $"{Route.NoLandmarks} landmarks (distance: {Route.TotalDistance} m)";
        }
    }
}
