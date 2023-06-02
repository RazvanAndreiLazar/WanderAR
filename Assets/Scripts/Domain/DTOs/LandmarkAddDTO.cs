using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class LandmarkAddDTO : SerializableBase<LandmarkAddDTO>
    {
        public string Name { get; set; } = "";
        public string City { get; set; } = "";
        public float Latitude { get; set; }
        public float Longitude { get; set; }
        public float Altitude { get; set; }
        public float SizeX { get; set; } = 0;
        public float SizeY { get; set; } = 0;
        public float SizeZ { get; set; } = 0;
        public byte[]? Model { get; set; } = null;
    }
}
