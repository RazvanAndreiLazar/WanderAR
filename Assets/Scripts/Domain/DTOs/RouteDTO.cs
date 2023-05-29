using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class RouteDTO : SerializableBase<RouteDTO>
    {
        public int Id { get; set; }
        public string Name { get; set; } = "";
        public float TotalDistance { get; set; }
        public int UserId { get; set; }
        public int NoLandmarks { get; set; }
    }
}
