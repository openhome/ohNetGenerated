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
        void SyncSetUpdateFeedParams(String aTopic, String aChannel);
        void BeginSetUpdateFeedParams(String aTopic, String aChannel, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetUpdateFeedParams(IntPtr aAsyncHandle);
        void SyncGetUpdateFeedParams(out String aTopic, out String aChannel);
        void BeginGetUpdateFeedParams(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpdateFeedParams(IntPtr aAsyncHandle, out String aTopic, out String aChannel);
        void SyncGetSoftwareStatus(out String aSoftwareStatus);
        void BeginGetSoftwareStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSoftwareStatus(IntPtr aAsyncHandle, out String aSoftwareStatus);
        void SyncGetExecutorStatus(out String aExecutorStatus);
        void BeginGetExecutorStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetExecutorStatus(IntPtr aAsyncHandle, out String aExecutorStatus);
        void SyncApply();
        void BeginApply(CpProxy.CallbackAsyncComplete aCallback);
        void EndApply(IntPtr aAsyncHandle);
        void SyncRestore();
        void BeginRestore(CpProxy.CallbackAsyncComplete aCallback);
        void EndRestore(IntPtr aAsyncHandle);
        void SetPropertySoftwareStatusChanged(System.Action aSoftwareStatusChanged);
        String PropertySoftwareStatus();
        void SetPropertyExecutorStatusChanged(System.Action aExecutorStatusChanged);
        String PropertyExecutorStatus();
        void SetPropertyUpdateTopicChanged(System.Action aUpdateTopicChanged);
        String PropertyUpdateTopic();
        void SetPropertyUpdateChannelChanged(System.Action aUpdateChannelChanged);
        String PropertyUpdateChannel();
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

    internal class SyncSetUpdateFeedParamsLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncSetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetUpdateFeedParams(aAsyncHandle);
        }
    };

    internal class SyncGetUpdateFeedParamsLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;
        private String iTopic;
        private String iChannel;

        public SyncGetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        public String Topic()
        {
            return iTopic;
        }
        public String Channel()
        {
            return iChannel;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpdateFeedParams(aAsyncHandle, out iTopic, out iChannel);
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

    internal class SyncRestoreLinnCoUkUpdate1 : SyncProxyAction
    {
        private CpProxyLinnCoUkUpdate1 iService;

        public SyncRestoreLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRestore(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Update:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkUpdate1 : CpProxy, IDisposable, ICpProxyLinnCoUkUpdate1
    {
        private OpenHome.Net.Core.Action iActionPushManifest;
        private OpenHome.Net.Core.Action iActionSetUpdateFeedParams;
        private OpenHome.Net.Core.Action iActionGetUpdateFeedParams;
        private OpenHome.Net.Core.Action iActionGetSoftwareStatus;
        private OpenHome.Net.Core.Action iActionGetExecutorStatus;
        private OpenHome.Net.Core.Action iActionApply;
        private OpenHome.Net.Core.Action iActionRestore;
        private PropertyString iSoftwareStatus;
        private PropertyString iExecutorStatus;
        private PropertyString iUpdateTopic;
        private PropertyString iUpdateChannel;
        private System.Action iSoftwareStatusChanged;
        private System.Action iExecutorStatusChanged;
        private System.Action iUpdateTopicChanged;
        private System.Action iUpdateChannelChanged;
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

            iActionSetUpdateFeedParams = new OpenHome.Net.Core.Action("SetUpdateFeedParams");
            param = new ParameterString("Topic", allowedValues);
            iActionSetUpdateFeedParams.AddInputParameter(param);
            allowedValues.Add("release");
            allowedValues.Add("beta");
            allowedValues.Add("development");
            allowedValues.Add("nightly");
            param = new ParameterString("Channel", allowedValues);
            iActionSetUpdateFeedParams.AddInputParameter(param);
            allowedValues.Clear();

            iActionGetUpdateFeedParams = new OpenHome.Net.Core.Action("GetUpdateFeedParams");
            param = new ParameterString("Topic", allowedValues);
            iActionGetUpdateFeedParams.AddOutputParameter(param);
            allowedValues.Add("release");
            allowedValues.Add("beta");
            allowedValues.Add("development");
            allowedValues.Add("nightly");
            param = new ParameterString("Channel", allowedValues);
            iActionGetUpdateFeedParams.AddOutputParameter(param);
            allowedValues.Clear();

            iActionGetSoftwareStatus = new OpenHome.Net.Core.Action("GetSoftwareStatus");
            param = new ParameterString("SoftwareStatus", allowedValues);
            iActionGetSoftwareStatus.AddOutputParameter(param);

            iActionGetExecutorStatus = new OpenHome.Net.Core.Action("GetExecutorStatus");
            param = new ParameterString("ExecutorStatus", allowedValues);
            iActionGetExecutorStatus.AddOutputParameter(param);

            iActionApply = new OpenHome.Net.Core.Action("Apply");

            iActionRestore = new OpenHome.Net.Core.Action("Restore");

            iSoftwareStatus = new PropertyString("SoftwareStatus", SoftwareStatusPropertyChanged);
            AddProperty(iSoftwareStatus);
            iExecutorStatus = new PropertyString("ExecutorStatus", ExecutorStatusPropertyChanged);
            AddProperty(iExecutorStatus);
            iUpdateTopic = new PropertyString("UpdateTopic", UpdateTopicPropertyChanged);
            AddProperty(iUpdateTopic);
            iUpdateChannel = new PropertyString("UpdateChannel", UpdateChannelPropertyChanged);
            AddProperty(iUpdateChannel);
            
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
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        public void SyncSetUpdateFeedParams(String aTopic, String aChannel)
        {
            SyncSetUpdateFeedParamsLinnCoUkUpdate1 sync = new SyncSetUpdateFeedParamsLinnCoUkUpdate1(this);
            BeginSetUpdateFeedParams(aTopic, aChannel, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetUpdateFeedParams().</remarks>
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetUpdateFeedParams(String aTopic, String aChannel, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetUpdateFeedParams, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetUpdateFeedParams.InputParameter(inIndex++), aTopic));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetUpdateFeedParams.InputParameter(inIndex++), aChannel));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetUpdateFeedParams(IntPtr aAsyncHandle)
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
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        public void SyncGetUpdateFeedParams(out String aTopic, out String aChannel)
        {
            SyncGetUpdateFeedParamsLinnCoUkUpdate1 sync = new SyncGetUpdateFeedParamsLinnCoUkUpdate1(this);
            BeginGetUpdateFeedParams(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aTopic = sync.Topic();
            aChannel = sync.Channel();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUpdateFeedParams().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUpdateFeedParams(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUpdateFeedParams, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateFeedParams.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateFeedParams.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        public void EndGetUpdateFeedParams(IntPtr aAsyncHandle, out String aTopic, out String aChannel)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aTopic = Invocation.OutputString(aAsyncHandle, index++);
            aChannel = Invocation.OutputString(aAsyncHandle, index++);
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
        public void SyncRestore()
        {
            SyncRestoreLinnCoUkUpdate1 sync = new SyncRestoreLinnCoUkUpdate1(this);
            BeginRestore(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRestore().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRestore(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRestore, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndRestore(IntPtr aAsyncHandle)
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
        /// Set a delegate to be run when the UpdateTopic state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate1 instance will not overlap.</remarks>
        /// <param name="aUpdateTopicChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateTopicChanged(System.Action aUpdateTopicChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateTopicChanged = aUpdateTopicChanged;
            }
        }

        private void UpdateTopicPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateTopicChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateChannel state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkUpdate1 instance will not overlap.</remarks>
        /// <param name="aUpdateChannelChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateChannelChanged(System.Action aUpdateChannelChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateChannelChanged = aUpdateChannelChanged;
            }
        }

        private void UpdateChannelPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateChannelChanged);
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
        /// Query the value of the UpdateTopic property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateTopic property</returns>
        public String PropertyUpdateTopic()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUpdateTopic.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateChannel property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateChannel property</returns>
        public String PropertyUpdateChannel()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUpdateChannel.Value();
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
            iActionSetUpdateFeedParams.Dispose();
            iActionGetUpdateFeedParams.Dispose();
            iActionGetSoftwareStatus.Dispose();
            iActionGetExecutorStatus.Dispose();
            iActionApply.Dispose();
            iActionRestore.Dispose();
            iSoftwareStatus.Dispose();
            iExecutorStatus.Dispose();
            iUpdateTopic.Dispose();
            iUpdateChannel.Dispose();
        }
    }
}

