using Assets.Scripts.Domain;
using Assets.Scripts.Domain.DTOs;
using Assets.Scripts.Utils;
using System;
using System.Collections;

namespace Assets.Scripts.Services
{
    public class AuthenticationService : SingletonBase<AuthenticationService>
    {
        private AuthenticationService()
        {

        }

        public IEnumerator Login(string email, string password, Action callback, Action<ErrorDTO> errorCallback)
        {
            var user = new LogginRegisterUserDTO { Email = email, Password = password };

            bool noError = true;

            yield return WebUtils.Post<LogginRegisterUserDTO, TokenDTO>($"/login", user,
                callback: (token) =>
                {
                    SessionVariables.SessionToken = token.Token;
                },
                errorCallback: (err) =>
                {
                    errorCallback(err);
                    noError = false;
                }
            );

            if (!noError) yield break;

            yield return WebUtils.Get<User>($"/user", SessionVariables.SessionToken,
                (user) =>
                {
                    SessionVariables.LoggedUser = user;
                    callback();
                },
                errorCallback: (err) => errorCallback(err)
            );
        }

        public IEnumerator Registre(string email, string password, Action callback, Action<ErrorDTO> errorCallback)
        {
            var user = new LogginRegisterUserDTO { Email = email, Password = password };

            yield return WebUtils.Post<LogginRegisterUserDTO, User>($"/register", user,
                callback: (u) => callback(),
                errorCallback: (err) => errorCallback(err)
            );
        }

        public IEnumerator GetLoggedUser(Action callback)
        {
            yield return WebUtils.Get<User>($"/user", SessionVariables.SessionToken,
                (user) =>
                {
                    SessionVariables.LoggedUser = user;
                    callback();
                }
            );
        }


        public void Logout()
        {
            SessionVariables.SessionToken = "";
            SessionVariables.LoggedUser = null;
            SessionVariables.IsUsedAsGuest = false;
        }
    }
}
