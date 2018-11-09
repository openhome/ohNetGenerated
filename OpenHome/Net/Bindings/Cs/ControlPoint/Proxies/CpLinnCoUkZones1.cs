using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkZones1 : ICpProxy, IDisposable
    {
        void SyncGetInputs(out String aInputs);
        void BeginGetInputs(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetInputs(IntPtr aAsyncHandle, out String aInputs);
        void SyncGetOutputs(out String aOutputs);
        void BeginGetOutputs(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetOutputs(IntPtr aAsyncHandle, out String aOutputs);
        void SyncGetMappings(out String aMappings);
        void BeginGetMappings(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetMappings(IntPtr aAsyncHandle, out String aMappings);
        void SyncSetMappings(String aMappings);
        void BeginSetMappings(String aMappings, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetMappings(IntPtr aAsyncHandle);
        void SetPropertyInputsChanged(System.Action aInputsChanged);
        String PropertyInputs();
        void SetPropertyOutputsChanged(System.Action aOutputsChanged);
        String PropertyOutputs();
        void SetPropertyMappingsChanged(System.Action aMappingsChanged);
        String PropertyMappings();
    }

    internal class SyncGetInputsLinnCoUkZones1 : SyncProxyAction
    {
        private CpProxyLinnCoUkZones1 iService;
        private String iInputs;

        public SyncGetInputsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
        {
            iService = aProxy;
        }
        public String Inputs()
        {
            return iInputs;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetInputs(aAsyncHandle, out iInputs);
        }
    };

    internal class SyncGetOutputsLinnCoUkZones1 : SyncProxyAction
    {
        private CpProxyLinnCoUkZones1 iService;
        private String iOutputs;

        public SyncGetOutputsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
        {
            iService = aProxy;
        }
        public String Outputs()
        {
            return iOutputs;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetOutputs(aAsyncHandle, out iOutputs);
        }
    };

    internal class SyncGetMappingsLinnCoUkZones1 : SyncProxyAction
    {
        private CpProxyLinnCoUkZones1 iService;
        private String iMappings;

        public SyncGetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
        {
            iService = aProxy;
        }
        public String Mappings()
        {
            return iMappings;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetMappings(aAsyncHandle, out iMappings);
        }
    };

    internal class SyncSetMappingsLinnCoUkZones1 : SyncProxyAction
    {
        private CpProxyLinnCoUkZones1 iService;

        public SyncSetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetMappings(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Zones:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkZones1 : CpProxy, IDisposable, ICpProxyLinnCoUkZones1
    {
        private OpenHome.Net.Core.Action iActionGetInputs;
        private OpenHome.Net.Core.Action iActionGetOutputs;
        private OpenHome.Net.Core.Action iActionGetMappings;
        private OpenHome.Net.Core.Action iActionSetMappings;
        private PropertyString iInputs;
        private PropertyString iOutputs;
        private PropertyString iMappings;
        private System.Action iInputsChanged;
        private System.Action iOutputsChanged;
        private System.Action iMappingsChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkZones1(ICpDevice aDevice)
            : base("linn-co-uk", "Zones", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetInputs = new OpenHome.Net.Core.Action("GetInputs");
            param = new ParameterString("Inputs", allowedValues);
            iActionGetInputs.AddOutputParameter(param);

            iActionGetOutputs = new OpenHome.Net.Core.Action("GetOutputs");
            param = new ParameterString("Outputs", allowedValues);
            iActionGetOutputs.AddOutputParameter(param);

            iActionGetMappings = new OpenHome.Net.Core.Action("GetMappings");
            param = new ParameterString("Mappings", allowedValues);
            iActionGetMappings.AddOutputParameter(param);

            iActionSetMappings = new OpenHome.Net.Core.Action("SetMappings");
            param = new ParameterString("Mappings", allowedValues);
            iActionSetMappings.AddInputParameter(param);

            iInputs = new PropertyString("Inputs", InputsPropertyChanged);
            AddProperty(iInputs);
            iOutputs = new PropertyString("Outputs", OutputsPropertyChanged);
            AddProperty(iOutputs);
            iMappings = new PropertyString("Mappings", MappingsPropertyChanged);
            AddProperty(iMappings);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInputs"></param>
        public void SyncGetInputs(out String aInputs)
        {
            SyncGetInputsLinnCoUkZones1 sync = new SyncGetInputsLinnCoUkZones1(this);
            BeginGetInputs(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aInputs = sync.Inputs();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetInputs().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetInputs(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetInputs, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetInputs.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aInputs"></param>
        public void EndGetInputs(IntPtr aAsyncHandle, out String aInputs)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aInputs = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aOutputs"></param>
        public void SyncGetOutputs(out String aOutputs)
        {
            SyncGetOutputsLinnCoUkZones1 sync = new SyncGetOutputsLinnCoUkZones1(this);
            BeginGetOutputs(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aOutputs = sync.Outputs();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetOutputs().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetOutputs(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetOutputs, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetOutputs.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aOutputs"></param>
        public void EndGetOutputs(IntPtr aAsyncHandle, out String aOutputs)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aOutputs = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMappings"></param>
        public void SyncGetMappings(out String aMappings)
        {
            SyncGetMappingsLinnCoUkZones1 sync = new SyncGetMappingsLinnCoUkZones1(this);
            BeginGetMappings(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMappings = sync.Mappings();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetMappings().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetMappings(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetMappings, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetMappings.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMappings"></param>
        public void EndGetMappings(IntPtr aAsyncHandle, out String aMappings)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMappings = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMappings"></param>
        public void SyncSetMappings(String aMappings)
        {
            SyncSetMappingsLinnCoUkZones1 sync = new SyncSetMappingsLinnCoUkZones1(this);
            BeginSetMappings(aMappings, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetMappings().</remarks>
        /// <param name="aMappings"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetMappings(String aMappings, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetMappings, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetMappings.InputParameter(inIndex++), aMappings));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetMappings(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Inputs state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkZones1 instance will not overlap.</remarks>
        /// <param name="aInputsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyInputsChanged(System.Action aInputsChanged)
        {
            lock (iPropertyLock)
            {
                iInputsChanged = aInputsChanged;
            }
        }

        private void InputsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iInputsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Outputs state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkZones1 instance will not overlap.</remarks>
        /// <param name="aOutputsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyOutputsChanged(System.Action aOutputsChanged)
        {
            lock (iPropertyLock)
            {
                iOutputsChanged = aOutputsChanged;
            }
        }

        private void OutputsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iOutputsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Mappings state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkZones1 instance will not overlap.</remarks>
        /// <param name="aMappingsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMappingsChanged(System.Action aMappingsChanged)
        {
            lock (iPropertyLock)
            {
                iMappingsChanged = aMappingsChanged;
            }
        }

        private void MappingsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMappingsChanged);
            }
        }

        /// <summary>
        /// Query the value of the Inputs property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Inputs property</returns>
        public String PropertyInputs()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iInputs.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Outputs property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Outputs property</returns>
        public String PropertyOutputs()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iOutputs.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Mappings property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Mappings property</returns>
        public String PropertyMappings()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iMappings.Value();
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
            iActionGetInputs.Dispose();
            iActionGetOutputs.Dispose();
            iActionGetMappings.Dispose();
            iActionSetMappings.Dispose();
            iInputs.Dispose();
            iOutputs.Dispose();
            iMappings.Dispose();
        }
    }
}

