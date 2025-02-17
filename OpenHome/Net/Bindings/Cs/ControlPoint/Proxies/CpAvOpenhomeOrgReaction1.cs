using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgReaction1 : ICpProxy, IDisposable
    {
        void SyncGetCanReact(out bool aCanReact);
        void BeginGetCanReact(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetCanReact(IntPtr aAsyncHandle, out bool aCanReact);
        void SyncGetCurrentReaction(out String aReaction);
        void BeginGetCurrentReaction(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetCurrentReaction(IntPtr aAsyncHandle, out String aReaction);
        void SyncGetAvailableReactions(out String aAvailableReactions);
        void BeginGetAvailableReactions(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetAvailableReactions(IntPtr aAsyncHandle, out String aAvailableReactions);
        void SyncSetReaction(String aReaction);
        void BeginSetReaction(String aReaction, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetReaction(IntPtr aAsyncHandle);
        void SyncClearReaction();
        void BeginClearReaction(CpProxy.CallbackAsyncComplete aCallback);
        void EndClearReaction(IntPtr aAsyncHandle);
        void SetPropertyCanReactChanged(System.Action aCanReactChanged);
        bool PropertyCanReact();
        void SetPropertyCurrentReactionChanged(System.Action aCurrentReactionChanged);
        String PropertyCurrentReaction();
        void SetPropertyAvailableReactionsChanged(System.Action aAvailableReactionsChanged);
        String PropertyAvailableReactions();
    }

    internal class SyncGetCanReactAvOpenhomeOrgReaction1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgReaction1 iService;
        private bool iCanReact;

        public SyncGetCanReactAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
        {
            iService = aProxy;
        }
        public bool CanReact()
        {
            return iCanReact;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetCanReact(aAsyncHandle, out iCanReact);
        }
    };

    internal class SyncGetCurrentReactionAvOpenhomeOrgReaction1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgReaction1 iService;
        private String iReaction;

        public SyncGetCurrentReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
        {
            iService = aProxy;
        }
        public String Reaction()
        {
            return iReaction;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetCurrentReaction(aAsyncHandle, out iReaction);
        }
    };

    internal class SyncGetAvailableReactionsAvOpenhomeOrgReaction1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgReaction1 iService;
        private String iAvailableReactions;

        public SyncGetAvailableReactionsAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
        {
            iService = aProxy;
        }
        public String AvailableReactions()
        {
            return iAvailableReactions;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetAvailableReactions(aAsyncHandle, out iAvailableReactions);
        }
    };

    internal class SyncSetReactionAvOpenhomeOrgReaction1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgReaction1 iService;

        public SyncSetReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetReaction(aAsyncHandle);
        }
    };

    internal class SyncClearReactionAvOpenhomeOrgReaction1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgReaction1 iService;

        public SyncClearReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearReaction(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Reaction:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgReaction1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgReaction1
    {
        private OpenHome.Net.Core.Action iActionGetCanReact;
        private OpenHome.Net.Core.Action iActionGetCurrentReaction;
        private OpenHome.Net.Core.Action iActionGetAvailableReactions;
        private OpenHome.Net.Core.Action iActionSetReaction;
        private OpenHome.Net.Core.Action iActionClearReaction;
        private PropertyBool iCanReact;
        private PropertyString iCurrentReaction;
        private PropertyString iAvailableReactions;
        private System.Action iCanReactChanged;
        private System.Action iCurrentReactionChanged;
        private System.Action iAvailableReactionsChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgReaction1(ICpDevice aDevice)
            : base("av-openhome-org", "Reaction", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetCanReact = new OpenHome.Net.Core.Action("GetCanReact");
            param = new ParameterBool("CanReact");
            iActionGetCanReact.AddOutputParameter(param);

            iActionGetCurrentReaction = new OpenHome.Net.Core.Action("GetCurrentReaction");
            param = new ParameterString("Reaction", allowedValues);
            iActionGetCurrentReaction.AddOutputParameter(param);

            iActionGetAvailableReactions = new OpenHome.Net.Core.Action("GetAvailableReactions");
            param = new ParameterString("AvailableReactions", allowedValues);
            iActionGetAvailableReactions.AddOutputParameter(param);

            iActionSetReaction = new OpenHome.Net.Core.Action("SetReaction");
            param = new ParameterString("Reaction", allowedValues);
            iActionSetReaction.AddInputParameter(param);

            iActionClearReaction = new OpenHome.Net.Core.Action("ClearReaction");

            iCanReact = new PropertyBool("CanReact", CanReactPropertyChanged);
            AddProperty(iCanReact);
            iCurrentReaction = new PropertyString("CurrentReaction", CurrentReactionPropertyChanged);
            AddProperty(iCurrentReaction);
            iAvailableReactions = new PropertyString("AvailableReactions", AvailableReactionsPropertyChanged);
            AddProperty(iAvailableReactions);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aCanReact"></param>
        public void SyncGetCanReact(out bool aCanReact)
        {
            SyncGetCanReactAvOpenhomeOrgReaction1 sync = new SyncGetCanReactAvOpenhomeOrgReaction1(this);
            BeginGetCanReact(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aCanReact = sync.CanReact();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetCanReact().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetCanReact(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetCanReact, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetCanReact.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aCanReact"></param>
        public void EndGetCanReact(IntPtr aAsyncHandle, out bool aCanReact)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aCanReact = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aReaction"></param>
        public void SyncGetCurrentReaction(out String aReaction)
        {
            SyncGetCurrentReactionAvOpenhomeOrgReaction1 sync = new SyncGetCurrentReactionAvOpenhomeOrgReaction1(this);
            BeginGetCurrentReaction(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aReaction = sync.Reaction();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetCurrentReaction().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetCurrentReaction(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetCurrentReaction, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetCurrentReaction.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aReaction"></param>
        public void EndGetCurrentReaction(IntPtr aAsyncHandle, out String aReaction)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aReaction = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAvailableReactions"></param>
        public void SyncGetAvailableReactions(out String aAvailableReactions)
        {
            SyncGetAvailableReactionsAvOpenhomeOrgReaction1 sync = new SyncGetAvailableReactionsAvOpenhomeOrgReaction1(this);
            BeginGetAvailableReactions(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAvailableReactions = sync.AvailableReactions();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetAvailableReactions().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetAvailableReactions(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetAvailableReactions, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetAvailableReactions.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAvailableReactions"></param>
        public void EndGetAvailableReactions(IntPtr aAsyncHandle, out String aAvailableReactions)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAvailableReactions = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aReaction"></param>
        public void SyncSetReaction(String aReaction)
        {
            SyncSetReactionAvOpenhomeOrgReaction1 sync = new SyncSetReactionAvOpenhomeOrgReaction1(this);
            BeginSetReaction(aReaction, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetReaction().</remarks>
        /// <param name="aReaction"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetReaction(String aReaction, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetReaction, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetReaction.InputParameter(inIndex++), aReaction));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetReaction(IntPtr aAsyncHandle)
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
        public void SyncClearReaction()
        {
            SyncClearReactionAvOpenhomeOrgReaction1 sync = new SyncClearReactionAvOpenhomeOrgReaction1(this);
            BeginClearReaction(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearReaction().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearReaction(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearReaction, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearReaction(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanReact state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgReaction1 instance will not overlap.</remarks>
        /// <param name="aCanReactChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanReactChanged(System.Action aCanReactChanged)
        {
            lock (iPropertyLock)
            {
                iCanReactChanged = aCanReactChanged;
            }
        }

        private void CanReactPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanReactChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CurrentReaction state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgReaction1 instance will not overlap.</remarks>
        /// <param name="aCurrentReactionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCurrentReactionChanged(System.Action aCurrentReactionChanged)
        {
            lock (iPropertyLock)
            {
                iCurrentReactionChanged = aCurrentReactionChanged;
            }
        }

        private void CurrentReactionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCurrentReactionChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the AvailableReactions state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgReaction1 instance will not overlap.</remarks>
        /// <param name="aAvailableReactionsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAvailableReactionsChanged(System.Action aAvailableReactionsChanged)
        {
            lock (iPropertyLock)
            {
                iAvailableReactionsChanged = aAvailableReactionsChanged;
            }
        }

        private void AvailableReactionsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAvailableReactionsChanged);
            }
        }

        /// <summary>
        /// Query the value of the CanReact property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanReact property</returns>
        public bool PropertyCanReact()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanReact.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CurrentReaction property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CurrentReaction property</returns>
        public String PropertyCurrentReaction()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iCurrentReaction.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the AvailableReactions property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the AvailableReactions property</returns>
        public String PropertyAvailableReactions()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iAvailableReactions.Value();
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
            iActionGetCanReact.Dispose();
            iActionGetCurrentReaction.Dispose();
            iActionGetAvailableReactions.Dispose();
            iActionSetReaction.Dispose();
            iActionClearReaction.Dispose();
            iCanReact.Dispose();
            iCurrentReaction.Dispose();
            iAvailableReactions.Dispose();
        }
    }
}

