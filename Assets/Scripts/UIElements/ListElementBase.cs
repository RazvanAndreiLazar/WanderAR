using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts.UIElements
{
    public abstract class ListElementBase<T> : MonoBehaviour where T : class
    {
        public T item = null;
        public GameObject disabledTrashCan = null;
        private Transform normalParent;

        private void Start()
        {
            normalParent = gameObject.transform.parent;
            StartSetup();
        }

        private void Update()
        {
            if (item == null)
                Hide();
            else
            {
                Show();
                UpdateBehaviour();
            }
        }

        protected abstract void StartSetup();
        protected abstract void UpdateBehaviour();


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
