using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts.Utils
{
    public static class ErrorUtils
    {
        public static void DisplayError(ErrorDTO error)
        {
            var errStr = string.Concat(error?.Errors?["$"]);

            if (errStr == "Request timeout") errStr = "Cannot connect to the server";

            //NotificationService.AddDialog(error.Title, errStr, DialogModal.Buttons.OK);
            NotificationService.AddDialog("ERROR", errStr, DialogModal.Buttons.OK);
        }
        public static void DisplayError(string error)
        {
            NotificationService.AddDialog("ERROR", error, DialogModal.Buttons.OK);
        }
    }
}
