using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class RouteLandmarkDTO : SerializableBase<RouteLandmarkDTO>
    {
        public int Id { get; set; }
        public string Name { get; set; } = "";
    }
}
