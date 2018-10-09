using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkUpdate1 : ICpProxy, IDisposable
    {
        void SyncPushManifest(String aUri);
        void BeginPushManifest(String aUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndPushManifest(IntPtr aAsyncHandle);
        void SyncGetSoftwareStatus(out String aSoftwareStatus);
        void BeginGetSoftwareStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSoftwareStatus(IntPtr aAsyncHandle, out String aSoftwareStatus);
        void SyncGetExecutorStatus(out String aExecutorStatus);
        void BeginGetExecutorStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetExecutorStatus(IntPtr aAsyncHandle, out String aExecutorStatus);
        void SyncApply();
        void BeginApply(CpProxy.CallbackAsyncComplete aCallback);
        void EndApply(IntPtr aAsyncHandle);
        void SyncRecover();
        void BeginRecover(CpProxy.CallbackAsyncComplete aCallback);
        void EndRecover(IntPtr aAsyncHandle);
        void SyncCheckNow();
        void BeginCheckNow(CpProxy.CallbackAsyncComplete aCallback);
        void EndCheckNow(IntPtr aAsyncHandle);
        void SetPropertySoftwareStatusChanged(System.Action aSoftwareStatusChanged);
        String PropertySoftwareStatus();
        void SetPropertyExecutorStatusChanged(System.Action aExecutorStatusChanged);
        String PropertyExecutorStatus();
    }

    internal class SyncPushManifestLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncPushManifestLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPushManifest(aAsyncHandle);
        }
    };

    internal class SyncGetSoftwareStatusLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;
        private String iSoftwareStatus;

        public SyncGetSoftwareStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        public String SoftwareStatus()
        {
            return iSoftwareStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSoftwareStatus(aAsyncHandle, out iSoftwareStatus);
        }
    };

    internal class SyncGetExecutorStatusLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;
        private String iExecutorStatus;

        public SyncGetExecutorStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        public String ExecutorStatus()
        {
            return iExecutorStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetExecutorStatus(aAsyncHandle, out iExecutorStatus);
        }
    };

    internal class SyncApplyLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncApplyLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndApply(aAsyncHandle);
        }
    };

    internal class SyncRecoverLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncRecoverLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRecover(aAsyncHandle);
        }
    };

    internal class SyncCheckNowLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncCheckNowLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCheckNow(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Update:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkUpdate1 : CpProxy, IDisposable, ICpProxyLinnCoUkUpdate1
    {
        private OpenHome.Net.Core.Action iActionPushManifest;
        private OpenHome.Net.Core.Action iActionGetSoftwareStatus;
        private OpenHome.Net.Core.Action iActionGetExecutorStatus;
        private OpenHome.Net.Core.Action iActionApply;
        private OpenHome.Net.Core.Action iActionRecover;
        private OpenHome.Net.Core.Action iActionCheckNow;
        private PropertyString iSoftwareStatus;
        private PropertyString iExecutorStatus;
        private System.Action iSoftwareStatusChanged;
        private System.Action iExecutorStatusChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkUpdate1(ICpDevice aDevice)
            : base("linn-co-uk", "Update", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPushManifest = new OpenHome.Net.Core.Action("PushManifest");
            param = new ParameterString("Uri", allowedValues);
            iActionPushManifest.AddInputParameter(param);

            iActionGetSoftwareStatus = new OpenHome.Net.Core.Action("GetSoftwareStatus");
            param = new ParameterString("SoftwareStatus", allowedValues);
            iActionGetSoftwareStatus.AddOutputParameter(param);

            iActionGetExecutorStatus = new OpenHome.Net.Core.Action("GetExecutorStatus");
            param = new ParameterString("ExecutorStatus", allowedValues);
            iActionGetExecutorStatus.AddOutputParameter(param);

            iActionApply = new OpenHome.Net.Core.Action("Apply");

            iActionRecover = new OpenHome.Net.Core.Action("Recover");

            iActionCheckNow = new OpenHome.Net.Core.Action("CheckNow");

            iSoftwareStatus = new PropertyString("SoftwareStatus", SoftwareStatusPropertyChanged);
            AddProperty(iSoftwareStatus);
            iExecutorStatus = new PropertyString("ExecutorStatus", ExecutorStatusPropertyChanged);
            AddProperty(iExecutorStatus);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aUri"></param>
        public void SyncPushManifest(String aUri)
        {
            SyncPushManifestLinnCoUkUpdate1 sync = new SyncPushManifestLinnCoUkUpdate1(this);
            BeginPushManifest(aUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPushManifest().</remarks>
        /// <param name="aUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPushManifest(String aUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPushManifest, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionPushManifest.InputParameter(inIndex++), aUri));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPushManifest(IntPtr aAsyncHandle)
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
        /// <param name="aSoftwareStatus"></param>
        public void SyncGetSoftwareStatus(out String aSoftwareStatus)
        {
            SyncGetSoftwareStatusLinnCoUkUpdate1 sync = new SyncGetSoftwareStatusLinnCoUkUpdate1(this);
            BeginGetSoftwareStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSoftwareStatus = sync.SoftwareStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSoftwareStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSoftwareStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSoftwareStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSoftwareStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSoftwareStatus"></param>
        public void EndGetSoftwareStatus(IntPtr aAsyncHandle, out String aSoftwareStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSoftwareStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aExecutorStatus"></param>
        public void SyncGetExecutorStatus(out String aExecutorStatus)
        {
            SyncGetExecutorStatusLinnCoUkUpdate1 sync = new SyncGetExecutorStatusLinnCoUkUpdate1(this);
            BeginGetExecutorStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aExecutorStatus = sync.ExecutorStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetExecutorStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetExecutorStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetExecutorStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetExecutorStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aExecutorStatus"></param>
        public void EndGetExecutorStatus(IntPtr aAsyncHandle, out String aExecutorStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aExecutorStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncApply()
        {
            SyncApplyLinnCoUkUpdate1 sync = new SyncApplyLinnCoUkUpdate1(this);
            BeginApply(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndApply().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginApply(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionApply, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndApply(IntPtr aAsyncHandle)
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
        public void SyncRecover()
        {
            SyncRecoverLinnCoUkUpdate1 sync = new SyncRecoverLinnCoUkUpdate1(this);
            BeginRecover(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRecover().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRecover(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRecover, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndRecover(IntPtr aAsyncHandle)
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
        public void SyncCheckNow()
        {
            SyncCheckNowLinnCoUkUpdate1 sync = new SyncCheckNowLinnCoUkUpdate1(this);
            BeginCheckNow(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndCheckNow().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginCheckNow(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionCheckNow, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndCheckNow(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the SoftwareStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate1 instance will not overlap.</remarks>
        /// <param name="aSoftwareStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySoftwareStatusChanged(System.Action aSoftwareStatusChanged)
        {
            lock (iPropertyLock)
            {
                iSoftwareStatusChanged = aSoftwareStatusChanged;
            }
        }

        private void SoftwareStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSoftwareStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ExecutorStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate1 instance will not overlap.</remarks>
        /// <param name="aExecutorStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyExecutorStatusChanged(System.Action aExecutorStatusChanged)
        {
            lock (iPropertyLock)
            {
                iExecutorStatusChanged = aExecutorStatusChanged;
            }
        }

        private void ExecutorStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iExecutorStatusChanged);
            }
        }

        /// <summary>
        /// Query the value of the SoftwareStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SoftwareStatus property</returns>
        public String PropertySoftwareStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSoftwareStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ExecutorStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ExecutorStatus property</returns>
        public String PropertyExecutorStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iExecutorStatus.Value();
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
            iActionPushManifest.Dispose();
            iActionGetSoftwareStatus.Dispose();
            iActionGetExecutorStatus.Dispose();
            iActionApply.Dispose();
            iActionRecover.Dispose();
            iActionCheckNow.Dispose();
            iSoftwareStatus.Dispose();
            iExecutorStatus.Dispose();
        }
    }
}

