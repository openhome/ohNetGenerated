using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkPrivacy1 : ICpProxy, IDisposable
    {
        void SyncGetPolicyVersion(out uint aVersion);
        void BeginGetPolicyVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPolicyVersion(IntPtr aAsyncHandle, out uint aVersion);
        void SyncGetPolicyAgreed(out uint aVersion);
        void BeginGetPolicyAgreed(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPolicyAgreed(IntPtr aAsyncHandle, out uint aVersion);
        void SyncSetPolicyAgreed(uint aAgreed);
        void BeginSetPolicyAgreed(uint aAgreed, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetPolicyAgreed(IntPtr aAsyncHandle);
        void SyncGetPolicyDetails(out String aDetails);
        void BeginGetPolicyDetails(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPolicyDetails(IntPtr aAsyncHandle, out String aDetails);
        void SyncSetPolicyDetails(String aDetails);
        void BeginSetPolicyDetails(String aDetails, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetPolicyDetails(IntPtr aAsyncHandle);
        void SetPropertyPolicyVersionChanged(System.Action aPolicyVersionChanged);
        uint PropertyPolicyVersion();
        void SetPropertyPolicyAgreedChanged(System.Action aPolicyAgreedChanged);
        uint PropertyPolicyAgreed();
        void SetPropertyPolicyDetailsChanged(System.Action aPolicyDetailsChanged);
        String PropertyPolicyDetails();
    }

    internal class SyncGetPolicyVersionLinnCoUkPrivacy1 : SyncProxyAction
    {
        private CpProxyLinnCoUkPrivacy1 iService;
        private uint iVersion;

        public SyncGetPolicyVersionLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
        {
            iService = aProxy;
        }
        public uint Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPolicyVersion(aAsyncHandle, out iVersion);
        }
    };

    internal class SyncGetPolicyAgreedLinnCoUkPrivacy1 : SyncProxyAction
    {
        private CpProxyLinnCoUkPrivacy1 iService;
        private uint iVersion;

        public SyncGetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
        {
            iService = aProxy;
        }
        public uint Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPolicyAgreed(aAsyncHandle, out iVersion);
        }
    };

    internal class SyncSetPolicyAgreedLinnCoUkPrivacy1 : SyncProxyAction
    {
        private CpProxyLinnCoUkPrivacy1 iService;

        public SyncSetPolicyAgreedLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetPolicyAgreed(aAsyncHandle);
        }
    };

    internal class SyncGetPolicyDetailsLinnCoUkPrivacy1 : SyncProxyAction
    {
        private CpProxyLinnCoUkPrivacy1 iService;
        private String iDetails;

        public SyncGetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
        {
            iService = aProxy;
        }
        public String Details()
        {
            return iDetails;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPolicyDetails(aAsyncHandle, out iDetails);
        }
    };

    internal class SyncSetPolicyDetailsLinnCoUkPrivacy1 : SyncProxyAction
    {
        private CpProxyLinnCoUkPrivacy1 iService;

        public SyncSetPolicyDetailsLinnCoUkPrivacy1(CpProxyLinnCoUkPrivacy1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetPolicyDetails(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Privacy:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkPrivacy1 : CpProxy, IDisposable, ICpProxyLinnCoUkPrivacy1
    {
        private OpenHome.Net.Core.Action iActionGetPolicyVersion;
        private OpenHome.Net.Core.Action iActionGetPolicyAgreed;
        private OpenHome.Net.Core.Action iActionSetPolicyAgreed;
        private OpenHome.Net.Core.Action iActionGetPolicyDetails;
        private OpenHome.Net.Core.Action iActionSetPolicyDetails;
        private PropertyUint iPolicyVersion;
        private PropertyUint iPolicyAgreed;
        private PropertyString iPolicyDetails;
        private System.Action iPolicyVersionChanged;
        private System.Action iPolicyAgreedChanged;
        private System.Action iPolicyDetailsChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkPrivacy1(ICpDevice aDevice)
            : base("linn-co-uk", "Privacy", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetPolicyVersion = new OpenHome.Net.Core.Action("GetPolicyVersion");
            param = new ParameterUint("Version");
            iActionGetPolicyVersion.AddOutputParameter(param);

            iActionGetPolicyAgreed = new OpenHome.Net.Core.Action("GetPolicyAgreed");
            param = new ParameterUint("Version");
            iActionGetPolicyAgreed.AddOutputParameter(param);

            iActionSetPolicyAgreed = new OpenHome.Net.Core.Action("SetPolicyAgreed");
            param = new ParameterUint("Agreed");
            iActionSetPolicyAgreed.AddInputParameter(param);

            iActionGetPolicyDetails = new OpenHome.Net.Core.Action("GetPolicyDetails");
            param = new ParameterString("Details", allowedValues);
            iActionGetPolicyDetails.AddOutputParameter(param);

            iActionSetPolicyDetails = new OpenHome.Net.Core.Action("SetPolicyDetails");
            param = new ParameterString("Details", allowedValues);
            iActionSetPolicyDetails.AddInputParameter(param);

            iPolicyVersion = new PropertyUint("PolicyVersion", PolicyVersionPropertyChanged);
            AddProperty(iPolicyVersion);
            iPolicyAgreed = new PropertyUint("PolicyAgreed", PolicyAgreedPropertyChanged);
            AddProperty(iPolicyAgreed);
            iPolicyDetails = new PropertyString("PolicyDetails", PolicyDetailsPropertyChanged);
            AddProperty(iPolicyDetails);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVersion"></param>
        public void SyncGetPolicyVersion(out uint aVersion)
        {
            SyncGetPolicyVersionLinnCoUkPrivacy1 sync = new SyncGetPolicyVersionLinnCoUkPrivacy1(this);
            BeginGetPolicyVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPolicyVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPolicyVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPolicyVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetPolicyVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndGetPolicyVersion(IntPtr aAsyncHandle, out uint aVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVersion"></param>
        public void SyncGetPolicyAgreed(out uint aVersion)
        {
            SyncGetPolicyAgreedLinnCoUkPrivacy1 sync = new SyncGetPolicyAgreedLinnCoUkPrivacy1(this);
            BeginGetPolicyAgreed(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPolicyAgreed().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPolicyAgreed(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPolicyAgreed, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetPolicyAgreed.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndGetPolicyAgreed(IntPtr aAsyncHandle, out uint aVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAgreed"></param>
        public void SyncSetPolicyAgreed(uint aAgreed)
        {
            SyncSetPolicyAgreedLinnCoUkPrivacy1 sync = new SyncSetPolicyAgreedLinnCoUkPrivacy1(this);
            BeginSetPolicyAgreed(aAgreed, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetPolicyAgreed().</remarks>
        /// <param name="aAgreed"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetPolicyAgreed(uint aAgreed, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetPolicyAgreed, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetPolicyAgreed.InputParameter(inIndex++), aAgreed));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetPolicyAgreed(IntPtr aAsyncHandle)
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
        /// <param name="aDetails"></param>
        public void SyncGetPolicyDetails(out String aDetails)
        {
            SyncGetPolicyDetailsLinnCoUkPrivacy1 sync = new SyncGetPolicyDetailsLinnCoUkPrivacy1(this);
            BeginGetPolicyDetails(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDetails = sync.Details();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPolicyDetails().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPolicyDetails(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPolicyDetails, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetPolicyDetails.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDetails"></param>
        public void EndGetPolicyDetails(IntPtr aAsyncHandle, out String aDetails)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDetails = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDetails"></param>
        public void SyncSetPolicyDetails(String aDetails)
        {
            SyncSetPolicyDetailsLinnCoUkPrivacy1 sync = new SyncSetPolicyDetailsLinnCoUkPrivacy1(this);
            BeginSetPolicyDetails(aDetails, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetPolicyDetails().</remarks>
        /// <param name="aDetails"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetPolicyDetails(String aDetails, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetPolicyDetails, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetPolicyDetails.InputParameter(inIndex++), aDetails));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetPolicyDetails(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PolicyVersion state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkPrivacy1 instance will not overlap.</remarks>
        /// <param name="aPolicyVersionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPolicyVersionChanged(System.Action aPolicyVersionChanged)
        {
            lock (iPropertyLock)
            {
                iPolicyVersionChanged = aPolicyVersionChanged;
            }
        }

        private void PolicyVersionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPolicyVersionChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PolicyAgreed state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkPrivacy1 instance will not overlap.</remarks>
        /// <param name="aPolicyAgreedChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPolicyAgreedChanged(System.Action aPolicyAgreedChanged)
        {
            lock (iPropertyLock)
            {
                iPolicyAgreedChanged = aPolicyAgreedChanged;
            }
        }

        private void PolicyAgreedPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPolicyAgreedChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PolicyDetails state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkPrivacy1 instance will not overlap.</remarks>
        /// <param name="aPolicyDetailsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPolicyDetailsChanged(System.Action aPolicyDetailsChanged)
        {
            lock (iPropertyLock)
            {
                iPolicyDetailsChanged = aPolicyDetailsChanged;
            }
        }

        private void PolicyDetailsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPolicyDetailsChanged);
            }
        }

        /// <summary>
        /// Query the value of the PolicyVersion property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PolicyVersion property</returns>
        public uint PropertyPolicyVersion()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iPolicyVersion.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the PolicyAgreed property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PolicyAgreed property</returns>
        public uint PropertyPolicyAgreed()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iPolicyAgreed.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the PolicyDetails property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PolicyDetails property</returns>
        public String PropertyPolicyDetails()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iPolicyDetails.Value();
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
            iActionGetPolicyVersion.Dispose();
            iActionGetPolicyAgreed.Dispose();
            iActionSetPolicyAgreed.Dispose();
            iActionGetPolicyDetails.Dispose();
            iActionSetPolicyDetails.Dispose();
            iPolicyVersion.Dispose();
            iPolicyAgreed.Dispose();
            iPolicyDetails.Dispose();
        }
    }
}

