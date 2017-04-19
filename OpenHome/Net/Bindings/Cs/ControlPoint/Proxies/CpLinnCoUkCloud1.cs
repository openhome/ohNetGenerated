using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkCloud1 : ICpProxy, IDisposable
    {
        void SyncGetChallengeResponse(String aChallenge, out String aResponse);
        void BeginGetChallengeResponse(String aChallenge, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetChallengeResponse(IntPtr aAsyncHandle, out String aResponse);
        void SyncSetControlEnabled(bool aEnabled);
        void BeginSetControlEnabled(bool aEnabled, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetControlEnabled(IntPtr aAsyncHandle);
        void SyncGetControlEnabled(out bool aEnabled);
        void BeginGetControlEnabled(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetControlEnabled(IntPtr aAsyncHandle, out bool aEnabled);
        void SetPropertyControlEnabledChanged(System.Action aControlEnabledChanged);
        bool PropertyControlEnabled();
    }

    internal class SyncGetChallengeResponseLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;
        private String iResponse;

        public SyncGetChallengeResponseLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        public String Response()
        {
            return iResponse;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetChallengeResponse(aAsyncHandle, out iResponse);
        }
    };

    internal class SyncSetControlEnabledLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;

        public SyncSetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetControlEnabled(aAsyncHandle);
        }
    };

    internal class SyncGetControlEnabledLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;
        private bool iEnabled;

        public SyncGetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        public bool Enabled()
        {
            return iEnabled;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetControlEnabled(aAsyncHandle, out iEnabled);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Cloud:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkCloud1 : CpProxy, IDisposable, ICpProxyLinnCoUkCloud1
    {
        private OpenHome.Net.Core.Action iActionGetChallengeResponse;
        private OpenHome.Net.Core.Action iActionSetControlEnabled;
        private OpenHome.Net.Core.Action iActionGetControlEnabled;
        private PropertyBool iControlEnabled;
        private System.Action iControlEnabledChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkCloud1(ICpDevice aDevice)
            : base("linn-co-uk", "Cloud", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetChallengeResponse = new OpenHome.Net.Core.Action("GetChallengeResponse");
            param = new ParameterString("Challenge", allowedValues);
            iActionGetChallengeResponse.AddInputParameter(param);
            param = new ParameterString("Response", allowedValues);
            iActionGetChallengeResponse.AddOutputParameter(param);

            iActionSetControlEnabled = new OpenHome.Net.Core.Action("SetControlEnabled");
            param = new ParameterBool("Enabled");
            iActionSetControlEnabled.AddInputParameter(param);

            iActionGetControlEnabled = new OpenHome.Net.Core.Action("GetControlEnabled");
            param = new ParameterBool("Enabled");
            iActionGetControlEnabled.AddOutputParameter(param);

            iControlEnabled = new PropertyBool("ControlEnabled", ControlEnabledPropertyChanged);
            AddProperty(iControlEnabled);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChallenge"></param>
        /// <param name="aResponse"></param>
        public void SyncGetChallengeResponse(String aChallenge, out String aResponse)
        {
            SyncGetChallengeResponseLinnCoUkCloud1 sync = new SyncGetChallengeResponseLinnCoUkCloud1(this);
            BeginGetChallengeResponse(aChallenge, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aResponse = sync.Response();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetChallengeResponse().</remarks>
        /// <param name="aChallenge"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetChallengeResponse(String aChallenge, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetChallengeResponse, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetChallengeResponse.InputParameter(inIndex++), aChallenge));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetChallengeResponse.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aResponse"></param>
        public void EndGetChallengeResponse(IntPtr aAsyncHandle, out String aResponse)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aResponse = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnabled"></param>
        public void SyncSetControlEnabled(bool aEnabled)
        {
            SyncSetControlEnabledLinnCoUkCloud1 sync = new SyncSetControlEnabledLinnCoUkCloud1(this);
            BeginSetControlEnabled(aEnabled, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetControlEnabled().</remarks>
        /// <param name="aEnabled"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetControlEnabled(bool aEnabled, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetControlEnabled, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetControlEnabled.InputParameter(inIndex++), aEnabled));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetControlEnabled(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aEnabled"></param>
        public void SyncGetControlEnabled(out bool aEnabled)
        {
            SyncGetControlEnabledLinnCoUkCloud1 sync = new SyncGetControlEnabledLinnCoUkCloud1(this);
            BeginGetControlEnabled(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aEnabled = sync.Enabled();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetControlEnabled().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetControlEnabled(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetControlEnabled, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetControlEnabled.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aEnabled"></param>
        public void EndGetControlEnabled(IntPtr aAsyncHandle, out bool aEnabled)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aEnabled = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the ControlEnabled state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkCloud1 instance will not overlap.</remarks>
        /// <param name="aControlEnabledChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyControlEnabledChanged(System.Action aControlEnabledChanged)
        {
            lock (iPropertyLock)
            {
                iControlEnabledChanged = aControlEnabledChanged;
            }
        }

        private void ControlEnabledPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iControlEnabledChanged);
            }
        }

        /// <summary>
        /// Query the value of the ControlEnabled property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ControlEnabled property</returns>
        public bool PropertyControlEnabled()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iControlEnabled.Value();
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
            iActionGetChallengeResponse.Dispose();
            iActionSetControlEnabled.Dispose();
            iActionGetControlEnabled.Dispose();
            iControlEnabled.Dispose();
        }
    }
}

