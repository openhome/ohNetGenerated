using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkExaktInputs1 : ICpProxy, IDisposable
    {
        void SyncGetAssociation(uint aInputIndex, out String aDeviceId);
        void BeginGetAssociation(uint aInputIndex, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetAssociation(IntPtr aAsyncHandle, out String aDeviceId);
        void SyncSetAssociation(uint aInputIndex, String aDeviceId);
        void BeginSetAssociation(uint aInputIndex, String aDeviceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetAssociation(IntPtr aAsyncHandle);
        void SyncClearAssociation(uint aInputIndex);
        void BeginClearAssociation(uint aInputIndex, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearAssociation(IntPtr aAsyncHandle);
        void SyncInputCount(out uint aInputCount);
        void BeginInputCount(CpProxy.CallbackAsyncComplete aCallback);
        void EndInputCount(IntPtr aAsyncHandle, out uint aInputCount);
        void SetPropertyAssociationsChanged(System.Action aAssociationsChanged);
        String PropertyAssociations();
    }

    internal class SyncGetAssociationLinnCoUkExaktInputs1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExaktInputs1 iService;
        private String iDeviceId;

        public SyncGetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
        {
            iService = aProxy;
        }
        public String DeviceId()
        {
            return iDeviceId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetAssociation(aAsyncHandle, out iDeviceId);
        }
    };

    internal class SyncSetAssociationLinnCoUkExaktInputs1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExaktInputs1 iService;

        public SyncSetAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetAssociation(aAsyncHandle);
        }
    };

    internal class SyncClearAssociationLinnCoUkExaktInputs1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExaktInputs1 iService;

        public SyncClearAssociationLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearAssociation(aAsyncHandle);
        }
    };

    internal class SyncInputCountLinnCoUkExaktInputs1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExaktInputs1 iService;
        private uint iInputCount;

        public SyncInputCountLinnCoUkExaktInputs1(CpProxyLinnCoUkExaktInputs1 aProxy)
        {
            iService = aProxy;
        }
        public uint InputCount()
        {
            return iInputCount;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInputCount(aAsyncHandle, out iInputCount);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:ExaktInputs:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkExaktInputs1 : CpProxy, IDisposable, ICpProxyLinnCoUkExaktInputs1
    {
        private OpenHome.Net.Core.Action iActionGetAssociation;
        private OpenHome.Net.Core.Action iActionSetAssociation;
        private OpenHome.Net.Core.Action iActionClearAssociation;
        private OpenHome.Net.Core.Action iActionInputCount;
        private PropertyString iAssociations;
        private System.Action iAssociationsChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkExaktInputs1(ICpDevice aDevice)
            : base("linn-co-uk", "ExaktInputs", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetAssociation = new OpenHome.Net.Core.Action("GetAssociation");
            param = new ParameterUint("InputIndex");
            iActionGetAssociation.AddInputParameter(param);
            param = new ParameterString("DeviceId", allowedValues);
            iActionGetAssociation.AddOutputParameter(param);

            iActionSetAssociation = new OpenHome.Net.Core.Action("SetAssociation");
            param = new ParameterUint("InputIndex");
            iActionSetAssociation.AddInputParameter(param);
            param = new ParameterString("DeviceId", allowedValues);
            iActionSetAssociation.AddInputParameter(param);

            iActionClearAssociation = new OpenHome.Net.Core.Action("ClearAssociation");
            param = new ParameterUint("InputIndex");
            iActionClearAssociation.AddInputParameter(param);

            iActionInputCount = new OpenHome.Net.Core.Action("InputCount");
            param = new ParameterUint("InputCount");
            iActionInputCount.AddOutputParameter(param);

            iAssociations = new PropertyString("Associations", AssociationsPropertyChanged);
            AddProperty(iAssociations);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInputIndex"></param>
        /// <param name="aDeviceId"></param>
        public void SyncGetAssociation(uint aInputIndex, out String aDeviceId)
        {
            SyncGetAssociationLinnCoUkExaktInputs1 sync = new SyncGetAssociationLinnCoUkExaktInputs1(this);
            BeginGetAssociation(aInputIndex, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDeviceId = sync.DeviceId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetAssociation().</remarks>
        /// <param name="aInputIndex"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetAssociation(uint aInputIndex, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetAssociation, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionGetAssociation.InputParameter(inIndex++), aInputIndex));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetAssociation.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDeviceId"></param>
        public void EndGetAssociation(IntPtr aAsyncHandle, out String aDeviceId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDeviceId = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aInputIndex"></param>
        /// <param name="aDeviceId"></param>
        public void SyncSetAssociation(uint aInputIndex, String aDeviceId)
        {
            SyncSetAssociationLinnCoUkExaktInputs1 sync = new SyncSetAssociationLinnCoUkExaktInputs1(this);
            BeginSetAssociation(aInputIndex, aDeviceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetAssociation().</remarks>
        /// <param name="aInputIndex"></param>
        /// <param name="aDeviceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetAssociation(uint aInputIndex, String aDeviceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetAssociation, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetAssociation.InputParameter(inIndex++), aInputIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAssociation.InputParameter(inIndex++), aDeviceId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetAssociation(IntPtr aAsyncHandle)
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
        /// <param name="aInputIndex"></param>
        public void SyncClearAssociation(uint aInputIndex)
        {
            SyncClearAssociationLinnCoUkExaktInputs1 sync = new SyncClearAssociationLinnCoUkExaktInputs1(this);
            BeginClearAssociation(aInputIndex, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearAssociation().</remarks>
        /// <param name="aInputIndex"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearAssociation(uint aInputIndex, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearAssociation, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionClearAssociation.InputParameter(inIndex++), aInputIndex));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearAssociation(IntPtr aAsyncHandle)
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
        /// <param name="aInputCount"></param>
        public void SyncInputCount(out uint aInputCount)
        {
            SyncInputCountLinnCoUkExaktInputs1 sync = new SyncInputCountLinnCoUkExaktInputs1(this);
            BeginInputCount(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aInputCount = sync.InputCount();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInputCount().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInputCount(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInputCount, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionInputCount.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aInputCount"></param>
        public void EndInputCount(IntPtr aAsyncHandle, out uint aInputCount)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aInputCount = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Associations state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExaktInputs1 instance will not overlap.</remarks>
        /// <param name="aAssociationsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAssociationsChanged(System.Action aAssociationsChanged)
        {
            lock (iPropertyLock)
            {
                iAssociationsChanged = aAssociationsChanged;
            }
        }

        private void AssociationsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAssociationsChanged);
            }
        }

        /// <summary>
        /// Query the value of the Associations property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Associations property</returns>
        public String PropertyAssociations()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iAssociations.Value();
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
            iActionGetAssociation.Dispose();
            iActionSetAssociation.Dispose();
            iActionClearAssociation.Dispose();
            iActionInputCount.Dispose();
            iAssociations.Dispose();
        }
    }
}

