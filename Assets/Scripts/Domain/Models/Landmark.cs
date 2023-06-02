using Assets.Scripts.Domain.DTOs;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts.Domain.Models
{
    public class Landmark
    {
        public int Id { get; set; }
        public string Name { get; set; } = "";
        public string City { get; set; } = "";

        public WorldCoordinates Coordinates { get; set; }
        public Vector3 Size { get; set; }

        public int UserId { get; set; }
        public byte[]? Model { get; set; }

        public static Landmark FromLandmarkDTO(LandmarkDTO landmarkDTO)
        {
            var lmk = new Landmark();
            lmk.Name = landmarkDTO.Name;
            lmk.City = landmarkDTO.City;
            lmk.Coordinates = new WorldCoordinates(landmarkDTO.Latitude, landmarkDTO.Longitude, landmarkDTO.Altitude);
            lmk.Size = new Vector3(landmarkDTO.SizeX, landmarkDTO.SizeY, landmarkDTO.SizeZ);
            lmk.UserId = landmarkDTO.UserId;
            lmk.Model = landmarkDTO.Model;

            return lmk;
        }
        public static Landmark FromNoModelLandmarkDTO(NoModelLandmarkDTO landmarkDTO)
        {
            var lmk = new Landmark();
            lmk.Id = landmarkDTO.Id;
            lmk.Name = landmarkDTO.Name;
            lmk.City = landmarkDTO.City;
            lmk.Coordinates = new WorldCoordinates(landmarkDTO.Latitude, landmarkDTO.Longitude, landmarkDTO.Altitude);
            lmk.Size = new Vector3(landmarkDTO.SizeX, landmarkDTO.SizeY, landmarkDTO.SizeZ);
            lmk.UserId = landmarkDTO.UserId;

            return lmk;
        }

        public NoModelLandmarkDTO ToNoModelLandmarkDTO()
        {
            return new NoModelLandmarkDTO
            {
                Id = Id,
                Name = Name,
                City = City,
                Latitude = Coordinates.Latitude,
                Longitude = Coordinates.Longitude,
                Altitude = Coordinates.Altitude,
                SizeX = Size.x,
                SizeY = Size.y,
                SizeZ = Size.z,
                UserId = UserId
            };
        }
    }
}
