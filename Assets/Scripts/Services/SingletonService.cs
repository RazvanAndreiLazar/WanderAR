using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Services
{
    public abstract class SingletonService
    {
        private SingletonService _instance = null;
        public SingletonService Instance
        {
            get
            {
                if (_instance == null)
                    _instance = NewInstance();
                return _instance;
            }
        }

        protected abstract SingletonService NewInstance();
    }
}
