using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    internal class LogginRegisterUserDTO : SerializableBase<LogginRegisterUserDTO>
    {
        public string Email { get; set; }
        public string Password { get; set; }
    }
}
