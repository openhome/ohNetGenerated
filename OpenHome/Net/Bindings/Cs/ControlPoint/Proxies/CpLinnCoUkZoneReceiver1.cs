using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkZoneReceiver1 : ICpProxy, IDisposable
    {
        void SyncGetSender(out String aSender);
        void BeginGetSender(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSender(IntPtr aAsyncHandle, out String aSender);
        void SetPropertySenderChanged(System.Action aSenderChanged);
        String PropertySender();
    }

    internal class SyncGetSenderLinnCoUkZoneReceiver1 : SyncProxyAction
    {
        private CpProxyLinnCoUkZoneReceiver1 iService;
        private String iSender;

        public SyncGetSenderLinnCoUkZoneReceiver1(CpProxyLinnCoUkZoneReceiver1 aProxy)
        {
            iService = aProxy;
        }
        public String Sender()
        {
            return iSender;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSender(aAsyncHandle, out iSender);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:ZoneReceiver:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkZoneReceiver1 : CpProxy, IDisposable, ICpProxyLinnCoUkZoneReceiver1
    {
        private OpenHome.Net.Core.Action iActionGetSender;
        private PropertyString iSender;
        private System.Action iSenderChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkZoneReceiver1(ICpDevice aDevice)
            : base("linn-co-uk", "ZoneReceiver", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetSender = new OpenHome.Net.Core.Action("GetSender");
            param = new ParameterString("Sender", allowedValues);
            iActionGetSender.AddOutputParameter(param);

            iSender = new PropertyString("Sender", SenderPropertyChanged);
            AddProperty(iSender);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSender"></param>
        public void SyncGetSender(out String aSender)
        {
            SyncGetSenderLinnCoUkZoneReceiver1 sync = new SyncGetSenderLinnCoUkZoneReceiver1(this);
            BeginGetSender(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSender = sync.Sender();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSender().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSender(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSender, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSender.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSender"></param>
        public void EndGetSender(IntPtr aAsyncHandle, out String aSender)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSender = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Sender state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkZoneReceiver1 instance will not overlap.</remarks>
        /// <param name="aSenderChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySenderChanged(System.Action aSenderChanged)
        {
            lock (iPropertyLock)
            {
                iSenderChanged = aSenderChanged;
            }
        }

        private void SenderPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSenderChanged);
            }
        }

        /// <summary>
        /// Query the value of the Sender property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Sender property</returns>
        public String PropertySender()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSender.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionGetSender.Dispose();
            iSender.Dispose();
        }
    }
}

