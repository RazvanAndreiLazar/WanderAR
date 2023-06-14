using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static DialogModal;

namespace Assets.Scripts.Services
{
    public static class NotificationService
    {
        public class DialogItem
        {
            public DialogItem(string title, string text, Buttons buttons, Action confirmAction, Action cancelAction)
            {
                Title = title;
                Text = text;
                Buttons = buttons;
                ConfirmAction = confirmAction;
                CancelAction = cancelAction;
            }

            public string Title { private set; get; }
            public string Text { private set; get; }
            public Buttons Buttons { private set; get; }
            public Action ConfirmAction { private set; get; }
            public Action CancelAction { private set; get; }
        }
        
        public class ToastItem
        {
            public string Text { get; set; }


            public float Duration { get; set; }

            public ToastItem(string text) : this(text, 3) { }
            public ToastItem(string text, float duration)
            {
                Text = text;
                Duration = duration;
            }
        }

        #region Dialog

        private static Queue<DialogItem> _dialogsQueue = new Queue<DialogItem>();

        public static void AddDialog(string title, string text, Buttons buttons, Action okAction = null, Action cancelAction = null)
        {
            _dialogsQueue.Enqueue(new DialogItem(title, text, buttons, okAction, cancelAction));
        }

        public static bool IsDialogQueueEmpty => _dialogsQueue.Count == 0;
        public static DialogItem GetDialog()
        {
            return _dialogsQueue.Dequeue();
        }
        #endregion

        #region Toast

        private static Queue<ToastItem> _toastQueue = new();

        public static bool IsToastQueueEmpty => _toastQueue.Count == 0;
        public static int ToastQueueCount => _toastQueue.Count;
        public static void AddToast(string text) => _toastQueue.Enqueue(new(text));
        public static ToastItem GetToast() => _toastQueue.Dequeue();

        private static List<Action<ToastItem>> _listeners = new();

        public static void ListenDisplayOnTopEvent(Action<ToastItem> action) => _listeners.Add(action);
        public static void DisplayOnTop(string text)
        {
            _listeners.ForEach(l => l?.Invoke(new(text)));
        }
        #endregion

    }
}
