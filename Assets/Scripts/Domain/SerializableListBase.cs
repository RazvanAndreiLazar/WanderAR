using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain
{
    public abstract class SerializableListBase
    {
        public static string Serialized<T>(IEnumerable<T> objList) where T : SerializableBase<T>
        {
            return JsonConvert.SerializeObject(objList, new JsonSerializerSettings
            {
                ContractResolver = new Newtonsoft.Json.Serialization.CamelCasePropertyNamesContractResolver()
            });
        }

        public static IEnumerable<T> Deserialize<T>(string str) where T : SerializableBase<T>
        {
            return JsonConvert.DeserializeObject<IEnumerable<T>>(str);
        }   
    }
}
