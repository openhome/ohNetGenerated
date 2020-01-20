using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkUpdate3 : ICpProxy, IDisposable
    {
        void SyncPushManifest(String aUri);
        void BeginPushManifest(String aUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndPushManifest(IntPtr aAsyncHandle);
        void SyncPushManifest2(String aUri, out uint aId);
        void BeginPushManifest2(String aUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndPushManifest2(IntPtr aAsyncHandle, out uint aId);
        void SyncGetSoftwareStatus(out String aSoftwareStatus);
        void BeginGetSoftwareStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSoftwareStatus(IntPtr aAsyncHandle, out String aSoftwareStatus);
        void SyncGetExecutorStatus(out String aExecutorStatus);
        void BeginGetExecutorStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetExecutorStatus(IntPtr aAsyncHandle, out String aExecutorStatus);
        void SyncGetJobStatus(out String aJobStatus);
        void BeginGetJobStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetJobStatus(IntPtr aAsyncHandle, out String aJobStatus);
        void SyncApply();
        void BeginApply(CpProxy.CallbackAsyncComplete aCallback);
        void EndApply(IntPtr aAsyncHandle);
        void SyncApply2(out uint aId);
        void BeginApply2(CpProxy.CallbackAsyncComplete aCallback);
        void EndApply2(IntPtr aAsyncHandle, out uint aId);
        void SyncRecover();
        void BeginRecover(CpProxy.CallbackAsyncComplete aCallback);
        void EndRecover(IntPtr aAsyncHandle);
        void SyncRecover2(out uint aId);
        void BeginRecover2(CpProxy.CallbackAsyncComplete aCallback);
        void EndRecover2(IntPtr aAsyncHandle, out uint aId);
        void SyncCheckNow();
        void BeginCheckNow(CpProxy.CallbackAsyncComplete aCallback);
        void EndCheckNow(IntPtr aAsyncHandle);
        void SyncGetRecoverSupported(out bool aRecoverSupported);
        void BeginGetRecoverSupported(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetRecoverSupported(IntPtr aAsyncHandle, out bool aRecoverSupported);
        void SetPropertySoftwareStatusChanged(System.Action aSoftwareStatusChanged);
        String PropertySoftwareStatus();
        void SetPropertyExecutorStatusChanged(System.Action aExecutorStatusChanged);
        String PropertyExecutorStatus();
        void SetPropertyJobStatusChanged(System.Action aJobStatusChanged);
        String PropertyJobStatus();
        void SetPropertyRecoverSupportedChanged(System.Action aRecoverSupportedChanged);
        bool PropertyRecoverSupported();
    }

    internal class SyncPushManifestLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;

        public SyncPushManifestLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPushManifest(aAsyncHandle);
        }
    };

    internal class SyncPushManifest2LinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private uint iId;

        public SyncPushManifest2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        public uint Id()
        {
            return iId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPushManifest2(aAsyncHandle, out iId);
        }
    };

    internal class SyncGetSoftwareStatusLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private String iSoftwareStatus;

        public SyncGetSoftwareStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
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

    internal class SyncGetExecutorStatusLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private String iExecutorStatus;

        public SyncGetExecutorStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
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

    internal class SyncGetJobStatusLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private String iJobStatus;

        public SyncGetJobStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        public String JobStatus()
        {
            return iJobStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetJobStatus(aAsyncHandle, out iJobStatus);
        }
    };

    internal class SyncApplyLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;

        public SyncApplyLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndApply(aAsyncHandle);
        }
    };

    internal class SyncApply2LinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private uint iId;

        public SyncApply2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        public uint Id()
        {
            return iId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndApply2(aAsyncHandle, out iId);
        }
    };

    internal class SyncRecoverLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;

        public SyncRecoverLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRecover(aAsyncHandle);
        }
    };

    internal class SyncRecover2LinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private uint iId;

        public SyncRecover2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        public uint Id()
        {
            return iId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRecover2(aAsyncHandle, out iId);
        }
    };

    internal class SyncCheckNowLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;

        public SyncCheckNowLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCheckNow(aAsyncHandle);
        }
    };

    internal class SyncGetRecoverSupportedLinnCoUkUpdate3 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate3 iService;
        private bool iRecoverSupported;

        public SyncGetRecoverSupportedLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3 aProxy)
        {
            iService = aProxy;
        }
        public bool RecoverSupported()
        {
            return iRecoverSupported;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetRecoverSupported(aAsyncHandle, out iRecoverSupported);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Update:3 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkUpdate3 : CpProxy, IDisposable, ICpProxyLinnCoUkUpdate3
    {
        private OpenHome.Net.Core.Action iActionPushManifest;
        private OpenHome.Net.Core.Action iActionPushManifest2;
        private OpenHome.Net.Core.Action iActionGetSoftwareStatus;
        private OpenHome.Net.Core.Action iActionGetExecutorStatus;
        private OpenHome.Net.Core.Action iActionGetJobStatus;
        private OpenHome.Net.Core.Action iActionApply;
        private OpenHome.Net.Core.Action iActionApply2;
        private OpenHome.Net.Core.Action iActionRecover;
        private OpenHome.Net.Core.Action iActionRecover2;
        private OpenHome.Net.Core.Action iActionCheckNow;
        private OpenHome.Net.Core.Action iActionGetRecoverSupported;
        private PropertyString iSoftwareStatus;
        private PropertyString iExecutorStatus;
        private PropertyString iJobStatus;
        private PropertyBool iRecoverSupported;
        private System.Action iSoftwareStatusChanged;
        private System.Action iExecutorStatusChanged;
        private System.Action iJobStatusChanged;
        private System.Action iRecoverSupportedChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkUpdate3(ICpDevice aDevice)
            : base("linn-co-uk", "Update", 3, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPushManifest = new OpenHome.Net.Core.Action("PushManifest");
            param = new ParameterString("Uri", allowedValues);
            iActionPushManifest.AddInputParameter(param);

            iActionPushManifest2 = new OpenHome.Net.Core.Action("PushManifest2");
            param = new ParameterString("Uri", allowedValues);
            iActionPushManifest2.AddInputParameter(param);
            param = new ParameterUint("Id");
            iActionPushManifest2.AddOutputParameter(param);

            iActionGetSoftwareStatus = new OpenHome.Net.Core.Action("GetSoftwareStatus");
            param = new ParameterString("SoftwareStatus", allowedValues);
            iActionGetSoftwareStatus.AddOutputParameter(param);

            iActionGetExecutorStatus = new OpenHome.Net.Core.Action("GetExecutorStatus");
            param = new ParameterString("ExecutorStatus", allowedValues);
            iActionGetExecutorStatus.AddOutputParameter(param);

            iActionGetJobStatus = new OpenHome.Net.Core.Action("GetJobStatus");
            param = new ParameterString("JobStatus", allowedValues);
            iActionGetJobStatus.AddOutputParameter(param);

            iActionApply = new OpenHome.Net.Core.Action("Apply");

            iActionApply2 = new OpenHome.Net.Core.Action("Apply2");
            param = new ParameterUint("Id");
            iActionApply2.AddOutputParameter(param);

            iActionRecover = new OpenHome.Net.Core.Action("Recover");

            iActionRecover2 = new OpenHome.Net.Core.Action("Recover2");
            param = new ParameterUint("Id");
            iActionRecover2.AddOutputParameter(param);

            iActionCheckNow = new OpenHome.Net.Core.Action("CheckNow");

            iActionGetRecoverSupported = new OpenHome.Net.Core.Action("GetRecoverSupported");
            param = new ParameterBool("RecoverSupported");
            iActionGetRecoverSupported.AddOutputParameter(param);

            iSoftwareStatus = new PropertyString("SoftwareStatus", SoftwareStatusPropertyChanged);
            AddProperty(iSoftwareStatus);
            iExecutorStatus = new PropertyString("ExecutorStatus", ExecutorStatusPropertyChanged);
            AddProperty(iExecutorStatus);
            iJobStatus = new PropertyString("JobStatus", JobStatusPropertyChanged);
            AddProperty(iJobStatus);
            iRecoverSupported = new PropertyBool("RecoverSupported", RecoverSupportedPropertyChanged);
            AddProperty(iRecoverSupported);
            
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
            SyncPushManifestLinnCoUkUpdate3 sync = new SyncPushManifestLinnCoUkUpdate3(this);
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
        /// <param name="aUri"></param>
        /// <param name="aId"></param>
        public void SyncPushManifest2(String aUri, out uint aId)
        {
            SyncPushManifest2LinnCoUkUpdate3 sync = new SyncPushManifest2LinnCoUkUpdate3(this);
            BeginPushManifest2(aUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aId = sync.Id();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPushManifest2().</remarks>
        /// <param name="aUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPushManifest2(String aUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPushManifest2, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionPushManifest2.InputParameter(inIndex++), aUri));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionPushManifest2.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aId"></param>
        public void EndPushManifest2(IntPtr aAsyncHandle, out uint aId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSoftwareStatus"></param>
        public void SyncGetSoftwareStatus(out String aSoftwareStatus)
        {
            SyncGetSoftwareStatusLinnCoUkUpdate3 sync = new SyncGetSoftwareStatusLinnCoUkUpdate3(this);
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
            SyncGetExecutorStatusLinnCoUkUpdate3 sync = new SyncGetExecutorStatusLinnCoUkUpdate3(this);
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
        /// <param name="aJobStatus"></param>
        public void SyncGetJobStatus(out String aJobStatus)
        {
            SyncGetJobStatusLinnCoUkUpdate3 sync = new SyncGetJobStatusLinnCoUkUpdate3(this);
            BeginGetJobStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aJobStatus = sync.JobStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetJobStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetJobStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetJobStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetJobStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aJobStatus"></param>
        public void EndGetJobStatus(IntPtr aAsyncHandle, out String aJobStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aJobStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncApply()
        {
            SyncApplyLinnCoUkUpdate3 sync = new SyncApplyLinnCoUkUpdate3(this);
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
        /// <param name="aId"></param>
        public void SyncApply2(out uint aId)
        {
            SyncApply2LinnCoUkUpdate3 sync = new SyncApply2LinnCoUkUpdate3(this);
            BeginApply2(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aId = sync.Id();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndApply2().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginApply2(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionApply2, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionApply2.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aId"></param>
        public void EndApply2(IntPtr aAsyncHandle, out uint aId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncRecover()
        {
            SyncRecoverLinnCoUkUpdate3 sync = new SyncRecoverLinnCoUkUpdate3(this);
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
        /// <param name="aId"></param>
        public void SyncRecover2(out uint aId)
        {
            SyncRecover2LinnCoUkUpdate3 sync = new SyncRecover2LinnCoUkUpdate3(this);
            BeginRecover2(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aId = sync.Id();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRecover2().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRecover2(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRecover2, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionRecover2.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aId"></param>
        public void EndRecover2(IntPtr aAsyncHandle, out uint aId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncCheckNow()
        {
            SyncCheckNowLinnCoUkUpdate3 sync = new SyncCheckNowLinnCoUkUpdate3(this);
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aRecoverSupported"></param>
        public void SyncGetRecoverSupported(out bool aRecoverSupported)
        {
            SyncGetRecoverSupportedLinnCoUkUpdate3 sync = new SyncGetRecoverSupportedLinnCoUkUpdate3(this);
            BeginGetRecoverSupported(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aRecoverSupported = sync.RecoverSupported();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetRecoverSupported().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetRecoverSupported(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetRecoverSupported, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetRecoverSupported.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aRecoverSupported"></param>
        public void EndGetRecoverSupported(IntPtr aAsyncHandle, out bool aRecoverSupported)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aRecoverSupported = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the SoftwareStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate3 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkUpdate3 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the JobStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate3 instance will not overlap.</remarks>
        /// <param name="aJobStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyJobStatusChanged(System.Action aJobStatusChanged)
        {
            lock (iPropertyLock)
            {
                iJobStatusChanged = aJobStatusChanged;
            }
        }

        private void JobStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iJobStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the RecoverSupported state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate3 instance will not overlap.</remarks>
        /// <param name="aRecoverSupportedChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRecoverSupportedChanged(System.Action aRecoverSupportedChanged)
        {
            lock (iPropertyLock)
            {
                iRecoverSupportedChanged = aRecoverSupportedChanged;
            }
        }

        private void RecoverSupportedPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRecoverSupportedChanged);
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
        /// Query the value of the JobStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the JobStatus property</returns>
        public String PropertyJobStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iJobStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the RecoverSupported property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the RecoverSupported property</returns>
        public bool PropertyRecoverSupported()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRecoverSupported.Value();
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
            iActionPushManifest2.Dispose();
            iActionGetSoftwareStatus.Dispose();
            iActionGetExecutorStatus.Dispose();
            iActionGetJobStatus.Dispose();
            iActionApply.Dispose();
            iActionApply2.Dispose();
            iActionRecover.Dispose();
            iActionRecover2.Dispose();
            iActionCheckNow.Dispose();
            iActionGetRecoverSupported.Dispose();
            iSoftwareStatus.Dispose();
            iExecutorStatus.Dispose();
            iJobStatus.Dispose();
            iRecoverSupported.Dispose();
        }
    }
}

