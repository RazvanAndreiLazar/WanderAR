using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class RouteUpdateDTO : SerializableBase<RouteUpdateDTO>
    {
        public int Id { get; set; }
        public string Name { get; set; } = string.Empty;
        public List<int> Landmarks { get; set; }
    }
}
