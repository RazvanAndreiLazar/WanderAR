using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class RouteWithLandmarksDTO : SerializableBase<RouteWithLandmarksDTO>
    {
        public int Id { get; set; }
        public string Name { get; set; } = "";
        public float TotalDistance { get; set; }
        public int UserId { get; set; }

        public List<RouteLandmarkDTO> Landmarks { get; set; }
    }
}
