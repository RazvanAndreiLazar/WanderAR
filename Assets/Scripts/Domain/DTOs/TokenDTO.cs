using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Domain.DTOs
{
    public class TokenDTO : SerializableBase<TokenDTO>
    {
        public string Token { get; set; }
    }
}
