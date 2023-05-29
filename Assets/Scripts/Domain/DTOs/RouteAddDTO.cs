using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class RouteAddDTO : SerializableBase<RouteAddDTO>
    {
        public string Name { get; set; }
        public List<int> Landmarks { get; set; }
    }
}
