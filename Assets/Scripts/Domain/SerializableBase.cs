using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain
{
    public abstract class SerializableBase<T> where T : SerializableBase<T>
    {
        public string Serialized()
        {
            return JsonConvert.SerializeObject(this, new JsonSerializerSettings
            {
                ContractResolver = new Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver()
            });
        }

        public static T Deserialize(string str)
        {
            return JsonConvert.DeserializeObject<T>(str);
        }   

        public static bool TryDeserialize(string str, out T obj)
        {
            obj = JsonConvert.DeserializeObject<T>(str);
            return obj != null;
        }
    }
}
