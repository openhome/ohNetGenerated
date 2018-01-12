using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkLipSync1 : ICpProxy, IDisposable
    {
        void SyncSetDelay(uint aDelay);
        void BeginSetDelay(uint aDelay, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDelay(IntPtr aAsyncHandle);
        void SyncDelay(out uint aDelay);
        void BeginDelay(CpProxy.CallbackAsyncComplete aCallback);
        void EndDelay(IntPtr aAsyncHandle, out uint aDelay);
        void SyncDelayMinimum(out uint aMin);
        void BeginDelayMinimum(CpProxy.CallbackAsyncComplete aCallback);
        void EndDelayMinimum(IntPtr aAsyncHandle, out uint aMin);
        void SyncDelayMaximum(out uint aMax);
        void BeginDelayMaximum(CpProxy.CallbackAsyncComplete aCallback);
        void EndDelayMaximum(IntPtr aAsyncHandle, out uint aMax);
        void SetPropertyDelayChanged(System.Action aDelayChanged);
        uint PropertyDelay();
        void SetPropertyDelayMinimumChanged(System.Action aDelayMinimumChanged);
        uint PropertyDelayMinimum();
        void SetPropertyDelayMaximumChanged(System.Action aDelayMaximumChanged);
        uint PropertyDelayMaximum();
    }

    internal class SyncSetDelayLinnCoUkLipSync1 : SyncProxyAction
    {
        private CpProxyLinnCoUkLipSync1 iService;

        public SyncSetDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDelay(aAsyncHandle);
        }
    };

    internal class SyncDelayLinnCoUkLipSync1 : SyncProxyAction
    {
        private CpProxyLinnCoUkLipSync1 iService;
        private uint iDelay;

        public SyncDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
        {
            iService = aProxy;
        }
        public uint Delay()
        {
            return iDelay;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDelay(aAsyncHandle, out iDelay);
        }
    };

    internal class SyncDelayMinimumLinnCoUkLipSync1 : SyncProxyAction
    {
        private CpProxyLinnCoUkLipSync1 iService;
        private uint iMin;

        public SyncDelayMinimumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
        {
            iService = aProxy;
        }
        public uint Min()
        {
            return iMin;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDelayMinimum(aAsyncHandle, out iMin);
        }
    };

    internal class SyncDelayMaximumLinnCoUkLipSync1 : SyncProxyAction
    {
        private CpProxyLinnCoUkLipSync1 iService;
        private uint iMax;

        public SyncDelayMaximumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1 aProxy)
        {
            iService = aProxy;
        }
        public uint Max()
        {
            return iMax;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDelayMaximum(aAsyncHandle, out iMax);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:LipSync:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkLipSync1 : CpProxy, IDisposable, ICpProxyLinnCoUkLipSync1
    {
        private OpenHome.Net.Core.Action iActionSetDelay;
        private OpenHome.Net.Core.Action iActionDelay;
        private OpenHome.Net.Core.Action iActionDelayMinimum;
        private OpenHome.Net.Core.Action iActionDelayMaximum;
        private PropertyUint iDelay;
        private PropertyUint iDelayMinimum;
        private PropertyUint iDelayMaximum;
        private System.Action iDelayChanged;
        private System.Action iDelayMinimumChanged;
        private System.Action iDelayMaximumChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkLipSync1(ICpDevice aDevice)
            : base("linn-co-uk", "LipSync", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            

            iActionSetDelay = new OpenHome.Net.Core.Action("SetDelay");
            param = new ParameterUint("Delay");
            iActionSetDelay.AddInputParameter(param);

            iActionDelay = new OpenHome.Net.Core.Action("Delay");
            param = new ParameterUint("Delay");
            iActionDelay.AddOutputParameter(param);

            iActionDelayMinimum = new OpenHome.Net.Core.Action("DelayMinimum");
            param = new ParameterUint("Min");
            iActionDelayMinimum.AddOutputParameter(param);

            iActionDelayMaximum = new OpenHome.Net.Core.Action("DelayMaximum");
            param = new ParameterUint("Max");
            iActionDelayMaximum.AddOutputParameter(param);

            iDelay = new PropertyUint("Delay", DelayPropertyChanged);
            AddProperty(iDelay);
            iDelayMinimum = new PropertyUint("DelayMinimum", DelayMinimumPropertyChanged);
            AddProperty(iDelayMinimum);
            iDelayMaximum = new PropertyUint("DelayMaximum", DelayMaximumPropertyChanged);
            AddProperty(iDelayMaximum);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDelay"></param>
        public void SyncSetDelay(uint aDelay)
        {
            SyncSetDelayLinnCoUkLipSync1 sync = new SyncSetDelayLinnCoUkLipSync1(this);
            BeginSetDelay(aDelay, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDelay().</remarks>
        /// <param name="aDelay"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDelay(uint aDelay, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDelay, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDelay.InputParameter(inIndex++), aDelay));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDelay(IntPtr aAsyncHandle)
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
        /// <param name="aDelay"></param>
        public void SyncDelay(out uint aDelay)
        {
            SyncDelayLinnCoUkLipSync1 sync = new SyncDelayLinnCoUkLipSync1(this);
            BeginDelay(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDelay = sync.Delay();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDelay().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDelay(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDelay, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionDelay.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDelay"></param>
        public void EndDelay(IntPtr aAsyncHandle, out uint aDelay)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDelay = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMin"></param>
        public void SyncDelayMinimum(out uint aMin)
        {
            SyncDelayMinimumLinnCoUkLipSync1 sync = new SyncDelayMinimumLinnCoUkLipSync1(this);
            BeginDelayMinimum(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMin = sync.Min();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDelayMinimum().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDelayMinimum(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDelayMinimum, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionDelayMinimum.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMin"></param>
        public void EndDelayMinimum(IntPtr aAsyncHandle, out uint aMin)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMin = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMax"></param>
        public void SyncDelayMaximum(out uint aMax)
        {
            SyncDelayMaximumLinnCoUkLipSync1 sync = new SyncDelayMaximumLinnCoUkLipSync1(this);
            BeginDelayMaximum(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMax = sync.Max();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDelayMaximum().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDelayMaximum(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDelayMaximum, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionDelayMaximum.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMax"></param>
        public void EndDelayMaximum(IntPtr aAsyncHandle, out uint aMax)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMax = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Delay state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkLipSync1 instance will not overlap.</remarks>
        /// <param name="aDelayChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDelayChanged(System.Action aDelayChanged)
        {
            lock (iPropertyLock)
            {
                iDelayChanged = aDelayChanged;
            }
        }

        private void DelayPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDelayChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DelayMinimum state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkLipSync1 instance will not overlap.</remarks>
        /// <param name="aDelayMinimumChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDelayMinimumChanged(System.Action aDelayMinimumChanged)
        {
            lock (iPropertyLock)
            {
                iDelayMinimumChanged = aDelayMinimumChanged;
            }
        }

        private void DelayMinimumPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDelayMinimumChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DelayMaximum state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkLipSync1 instance will not overlap.</remarks>
        /// <param name="aDelayMaximumChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDelayMaximumChanged(System.Action aDelayMaximumChanged)
        {
            lock (iPropertyLock)
            {
                iDelayMaximumChanged = aDelayMaximumChanged;
            }
        }

        private void DelayMaximumPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDelayMaximumChanged);
            }
        }

        /// <summary>
        /// Query the value of the Delay property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Delay property</returns>
        public uint PropertyDelay()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iDelay.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the DelayMinimum property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DelayMinimum property</returns>
        public uint PropertyDelayMinimum()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iDelayMinimum.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the DelayMaximum property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DelayMaximum property</returns>
        public uint PropertyDelayMaximum()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iDelayMaximum.Value();
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
            iActionSetDelay.Dispose();
            iActionDelay.Dispose();
            iActionDelayMinimum.Dispose();
            iActionDelayMaximum.Dispose();
            iDelay.Dispose();
            iDelayMinimum.Dispose();
            iDelayMaximum.Dispose();
        }
    }
}

