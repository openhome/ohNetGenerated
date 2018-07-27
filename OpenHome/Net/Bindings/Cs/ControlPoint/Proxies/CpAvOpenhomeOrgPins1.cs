using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgPins1 : ICpProxy, IDisposable
    {
        void SyncGetDeviceMax(out uint aDeviceMax);
        void BeginGetDeviceMax(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDeviceMax(IntPtr aAsyncHandle, out uint aDeviceMax);
        void SyncGetAccountMax(out uint aAccountMax);
        void BeginGetAccountMax(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetAccountMax(IntPtr aAsyncHandle, out uint aAccountMax);
        void SyncGetModes(out String aModes);
        void BeginGetModes(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetModes(IntPtr aAsyncHandle, out String aModes);
        void SyncGetIdArray(out String aIdArray);
        void BeginGetIdArray(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetIdArray(IntPtr aAsyncHandle, out String aIdArray);
        void SyncGetCloudConnected(out bool aCloudConnected);
        void BeginGetCloudConnected(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetCloudConnected(IntPtr aAsyncHandle, out bool aCloudConnected);
        void SyncReadList(String aIds, out String aList);
        void BeginReadList(String aIds, CpProxy.CallbackAsyncComplete aCallback);
        void EndReadList(IntPtr aAsyncHandle, out String aList);
        void SyncInvokeId(uint aId);
        void BeginInvokeId(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndInvokeId(IntPtr aAsyncHandle);
        void SyncInvokeIndex(uint aIndex);
        void BeginInvokeIndex(uint aIndex, CpProxy.CallbackAsyncComplete aCallback);
        void EndInvokeIndex(IntPtr aAsyncHandle);
        void SyncInvokeUri(String aMode, String aType, String aUri, bool aShuffle);
        void BeginInvokeUri(String aMode, String aType, String aUri, bool aShuffle, CpProxy.CallbackAsyncComplete aCallback);
        void EndInvokeUri(IntPtr aAsyncHandle);
        void SyncSetDevice(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle);
        void BeginSetDevice(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetDevice(IntPtr aAsyncHandle);
        void SyncSetAccount(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle);
        void BeginSetAccount(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetAccount(IntPtr aAsyncHandle);
        void SyncClear(uint aId);
        void BeginClear(uint aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClear(IntPtr aAsyncHandle);
        void SyncSwap(uint aIndex1, uint aIndex2);
        void BeginSwap(uint aIndex1, uint aIndex2, CpProxy.CallbackAsyncComplete aCallback);
        void EndSwap(IntPtr aAsyncHandle);
        void SetPropertyDeviceMaxChanged(System.Action aDeviceMaxChanged);
        uint PropertyDeviceMax();
        void SetPropertyAccountMaxChanged(System.Action aAccountMaxChanged);
        uint PropertyAccountMax();
        void SetPropertyModesChanged(System.Action aModesChanged);
        String PropertyModes();
        void SetPropertyIdArrayChanged(System.Action aIdArrayChanged);
        String PropertyIdArray();
        void SetPropertyCloudConnectedChanged(System.Action aCloudConnectedChanged);
        bool PropertyCloudConnected();
    }

    internal class SyncGetDeviceMaxAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private uint iDeviceMax;

        public SyncGetDeviceMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public uint DeviceMax()
        {
            return iDeviceMax;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDeviceMax(aAsyncHandle, out iDeviceMax);
        }
    };

    internal class SyncGetAccountMaxAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private uint iAccountMax;

        public SyncGetAccountMaxAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public uint AccountMax()
        {
            return iAccountMax;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetAccountMax(aAsyncHandle, out iAccountMax);
        }
    };

    internal class SyncGetModesAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private String iModes;

        public SyncGetModesAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public String Modes()
        {
            return iModes;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetModes(aAsyncHandle, out iModes);
        }
    };

    internal class SyncGetIdArrayAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private String iIdArray;

        public SyncGetIdArrayAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public String IdArray()
        {
            return iIdArray;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetIdArray(aAsyncHandle, out iIdArray);
        }
    };

    internal class SyncGetCloudConnectedAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private bool iCloudConnected;

        public SyncGetCloudConnectedAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public bool CloudConnected()
        {
            return iCloudConnected;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetCloudConnected(aAsyncHandle, out iCloudConnected);
        }
    };

    internal class SyncReadListAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;
        private String iList;

        public SyncReadListAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        public String List()
        {
            return iList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReadList(aAsyncHandle, out iList);
        }
    };

    internal class SyncInvokeIdAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncInvokeIdAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInvokeId(aAsyncHandle);
        }
    };

    internal class SyncInvokeIndexAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncInvokeIndexAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInvokeIndex(aAsyncHandle);
        }
    };

    internal class SyncInvokeUriAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncInvokeUriAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndInvokeUri(aAsyncHandle);
        }
    };

    internal class SyncSetDeviceAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncSetDeviceAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetDevice(aAsyncHandle);
        }
    };

    internal class SyncSetAccountAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncSetAccountAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetAccount(aAsyncHandle);
        }
    };

    internal class SyncClearAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncClearAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClear(aAsyncHandle);
        }
    };

    internal class SyncSwapAvOpenhomeOrgPins1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgPins1 iService;

        public SyncSwapAvOpenhomeOrgPins1(CpProxyAvOpenhomeOrgPins1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSwap(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Pins:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgPins1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgPins1
    {
        private OpenHome.Net.Core.Action iActionGetDeviceMax;
        private OpenHome.Net.Core.Action iActionGetAccountMax;
        private OpenHome.Net.Core.Action iActionGetModes;
        private OpenHome.Net.Core.Action iActionGetIdArray;
        private OpenHome.Net.Core.Action iActionGetCloudConnected;
        private OpenHome.Net.Core.Action iActionReadList;
        private OpenHome.Net.Core.Action iActionInvokeId;
        private OpenHome.Net.Core.Action iActionInvokeIndex;
        private OpenHome.Net.Core.Action iActionInvokeUri;
        private OpenHome.Net.Core.Action iActionSetDevice;
        private OpenHome.Net.Core.Action iActionSetAccount;
        private OpenHome.Net.Core.Action iActionClear;
        private OpenHome.Net.Core.Action iActionSwap;
        private PropertyUint iDeviceMax;
        private PropertyUint iAccountMax;
        private PropertyString iModes;
        private PropertyString iIdArray;
        private PropertyBool iCloudConnected;
        private System.Action iDeviceMaxChanged;
        private System.Action iAccountMaxChanged;
        private System.Action iModesChanged;
        private System.Action iIdArrayChanged;
        private System.Action iCloudConnectedChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgPins1(ICpDevice aDevice)
            : base("av-openhome-org", "Pins", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetDeviceMax = new OpenHome.Net.Core.Action("GetDeviceMax");
            param = new ParameterUint("DeviceMax");
            iActionGetDeviceMax.AddOutputParameter(param);

            iActionGetAccountMax = new OpenHome.Net.Core.Action("GetAccountMax");
            param = new ParameterUint("AccountMax");
            iActionGetAccountMax.AddOutputParameter(param);

            iActionGetModes = new OpenHome.Net.Core.Action("GetModes");
            param = new ParameterString("Modes", allowedValues);
            iActionGetModes.AddOutputParameter(param);

            iActionGetIdArray = new OpenHome.Net.Core.Action("GetIdArray");
            param = new ParameterString("IdArray", allowedValues);
            iActionGetIdArray.AddOutputParameter(param);

            iActionGetCloudConnected = new OpenHome.Net.Core.Action("GetCloudConnected");
            param = new ParameterBool("CloudConnected");
            iActionGetCloudConnected.AddOutputParameter(param);

            iActionReadList = new OpenHome.Net.Core.Action("ReadList");
            param = new ParameterString("Ids", allowedValues);
            iActionReadList.AddInputParameter(param);
            param = new ParameterString("List", allowedValues);
            iActionReadList.AddOutputParameter(param);

            iActionInvokeId = new OpenHome.Net.Core.Action("InvokeId");
            param = new ParameterUint("Id");
            iActionInvokeId.AddInputParameter(param);

            iActionInvokeIndex = new OpenHome.Net.Core.Action("InvokeIndex");
            param = new ParameterUint("Index");
            iActionInvokeIndex.AddInputParameter(param);

            iActionInvokeUri = new OpenHome.Net.Core.Action("InvokeUri");
            param = new ParameterString("Mode", allowedValues);
            iActionInvokeUri.AddInputParameter(param);
            param = new ParameterString("Type", allowedValues);
            iActionInvokeUri.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionInvokeUri.AddInputParameter(param);
            param = new ParameterBool("Shuffle");
            iActionInvokeUri.AddInputParameter(param);

            iActionSetDevice = new OpenHome.Net.Core.Action("SetDevice");
            param = new ParameterUint("Index");
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("Mode", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("Type", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("Title", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("Description", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterString("ArtworkUri", allowedValues);
            iActionSetDevice.AddInputParameter(param);
            param = new ParameterBool("Shuffle");
            iActionSetDevice.AddInputParameter(param);

            iActionSetAccount = new OpenHome.Net.Core.Action("SetAccount");
            param = new ParameterUint("Index");
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("Mode", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("Type", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("Title", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("Description", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterString("ArtworkUri", allowedValues);
            iActionSetAccount.AddInputParameter(param);
            param = new ParameterBool("Shuffle");
            iActionSetAccount.AddInputParameter(param);

            iActionClear = new OpenHome.Net.Core.Action("Clear");
            param = new ParameterUint("Id");
            iActionClear.AddInputParameter(param);

            iActionSwap = new OpenHome.Net.Core.Action("Swap");
            param = new ParameterUint("Index1");
            iActionSwap.AddInputParameter(param);
            param = new ParameterUint("Index2");
            iActionSwap.AddInputParameter(param);

            iDeviceMax = new PropertyUint("DeviceMax", DeviceMaxPropertyChanged);
            AddProperty(iDeviceMax);
            iAccountMax = new PropertyUint("AccountMax", AccountMaxPropertyChanged);
            AddProperty(iAccountMax);
            iModes = new PropertyString("Modes", ModesPropertyChanged);
            AddProperty(iModes);
            iIdArray = new PropertyString("IdArray", IdArrayPropertyChanged);
            AddProperty(iIdArray);
            iCloudConnected = new PropertyBool("CloudConnected", CloudConnectedPropertyChanged);
            AddProperty(iCloudConnected);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceMax"></param>
        public void SyncGetDeviceMax(out uint aDeviceMax)
        {
            SyncGetDeviceMaxAvOpenhomeOrgPins1 sync = new SyncGetDeviceMaxAvOpenhomeOrgPins1(this);
            BeginGetDeviceMax(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDeviceMax = sync.DeviceMax();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDeviceMax().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDeviceMax(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDeviceMax, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetDeviceMax.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDeviceMax"></param>
        public void EndGetDeviceMax(IntPtr aAsyncHandle, out uint aDeviceMax)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDeviceMax = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAccountMax"></param>
        public void SyncGetAccountMax(out uint aAccountMax)
        {
            SyncGetAccountMaxAvOpenhomeOrgPins1 sync = new SyncGetAccountMaxAvOpenhomeOrgPins1(this);
            BeginGetAccountMax(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAccountMax = sync.AccountMax();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetAccountMax().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetAccountMax(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetAccountMax, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetAccountMax.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAccountMax"></param>
        public void EndGetAccountMax(IntPtr aAsyncHandle, out uint aAccountMax)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAccountMax = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aModes"></param>
        public void SyncGetModes(out String aModes)
        {
            SyncGetModesAvOpenhomeOrgPins1 sync = new SyncGetModesAvOpenhomeOrgPins1(this);
            BeginGetModes(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aModes = sync.Modes();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetModes().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetModes(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetModes, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetModes.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aModes"></param>
        public void EndGetModes(IntPtr aAsyncHandle, out String aModes)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aModes = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIdArray"></param>
        public void SyncGetIdArray(out String aIdArray)
        {
            SyncGetIdArrayAvOpenhomeOrgPins1 sync = new SyncGetIdArrayAvOpenhomeOrgPins1(this);
            BeginGetIdArray(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIdArray = sync.IdArray();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetIdArray().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetIdArray(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetIdArray, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIdArray.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIdArray"></param>
        public void EndGetIdArray(IntPtr aAsyncHandle, out String aIdArray)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIdArray = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aCloudConnected"></param>
        public void SyncGetCloudConnected(out bool aCloudConnected)
        {
            SyncGetCloudConnectedAvOpenhomeOrgPins1 sync = new SyncGetCloudConnectedAvOpenhomeOrgPins1(this);
            BeginGetCloudConnected(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aCloudConnected = sync.CloudConnected();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetCloudConnected().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetCloudConnected(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetCloudConnected, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetCloudConnected.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aCloudConnected"></param>
        public void EndGetCloudConnected(IntPtr aAsyncHandle, out bool aCloudConnected)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aCloudConnected = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIds"></param>
        /// <param name="aList"></param>
        public void SyncReadList(String aIds, out String aList)
        {
            SyncReadListAvOpenhomeOrgPins1 sync = new SyncReadListAvOpenhomeOrgPins1(this);
            BeginReadList(aIds, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aList = sync.List();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReadList().</remarks>
        /// <param name="aIds"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReadList(String aIds, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReadList, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReadList.InputParameter(inIndex++), aIds));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionReadList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aList"></param>
        public void EndReadList(IntPtr aAsyncHandle, out String aList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        public void SyncInvokeId(uint aId)
        {
            SyncInvokeIdAvOpenhomeOrgPins1 sync = new SyncInvokeIdAvOpenhomeOrgPins1(this);
            BeginInvokeId(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInvokeId().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInvokeId(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInvokeId, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionInvokeId.InputParameter(inIndex++), aId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndInvokeId(IntPtr aAsyncHandle)
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
        /// <param name="aIndex"></param>
        public void SyncInvokeIndex(uint aIndex)
        {
            SyncInvokeIndexAvOpenhomeOrgPins1 sync = new SyncInvokeIndexAvOpenhomeOrgPins1(this);
            BeginInvokeIndex(aIndex, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInvokeIndex().</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInvokeIndex(uint aIndex, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInvokeIndex, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionInvokeIndex.InputParameter(inIndex++), aIndex));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndInvokeIndex(IntPtr aAsyncHandle)
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
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aShuffle"></param>
        public void SyncInvokeUri(String aMode, String aType, String aUri, bool aShuffle)
        {
            SyncInvokeUriAvOpenhomeOrgPins1 sync = new SyncInvokeUriAvOpenhomeOrgPins1(this);
            BeginInvokeUri(aMode, aType, aUri, aShuffle, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndInvokeUri().</remarks>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aShuffle"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginInvokeUri(String aMode, String aType, String aUri, bool aShuffle, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionInvokeUri, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionInvokeUri.InputParameter(inIndex++), aMode));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInvokeUri.InputParameter(inIndex++), aType));
            invocation.AddInput(new ArgumentString((ParameterString)iActionInvokeUri.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionInvokeUri.InputParameter(inIndex++), aShuffle));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndInvokeUri(IntPtr aAsyncHandle)
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
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        public void SyncSetDevice(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle)
        {
            SyncSetDeviceAvOpenhomeOrgPins1 sync = new SyncSetDeviceAvOpenhomeOrgPins1(this);
            BeginSetDevice(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetDevice().</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetDevice(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetDevice, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetDevice.InputParameter(inIndex++), aIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aMode));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aType));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aTitle));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aDescription));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetDevice.InputParameter(inIndex++), aArtworkUri));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetDevice.InputParameter(inIndex++), aShuffle));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetDevice(IntPtr aAsyncHandle)
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
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        public void SyncSetAccount(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle)
        {
            SyncSetAccountAvOpenhomeOrgPins1 sync = new SyncSetAccountAvOpenhomeOrgPins1(this);
            BeginSetAccount(aIndex, aMode, aType, aUri, aTitle, aDescription, aArtworkUri, aShuffle, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetAccount().</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetAccount(uint aIndex, String aMode, String aType, String aUri, String aTitle, String aDescription, String aArtworkUri, bool aShuffle, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetAccount, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetAccount.InputParameter(inIndex++), aIndex));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aMode));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aType));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aTitle));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aDescription));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAccount.InputParameter(inIndex++), aArtworkUri));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetAccount.InputParameter(inIndex++), aShuffle));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetAccount(IntPtr aAsyncHandle)
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
        public void SyncClear(uint aId)
        {
            SyncClearAvOpenhomeOrgPins1 sync = new SyncClearAvOpenhomeOrgPins1(this);
            BeginClear(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClear().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClear(uint aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClear, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionClear.InputParameter(inIndex++), aId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClear(IntPtr aAsyncHandle)
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
        /// <param name="aIndex1"></param>
        /// <param name="aIndex2"></param>
        public void SyncSwap(uint aIndex1, uint aIndex2)
        {
            SyncSwapAvOpenhomeOrgPins1 sync = new SyncSwapAvOpenhomeOrgPins1(this);
            BeginSwap(aIndex1, aIndex2, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSwap().</remarks>
        /// <param name="aIndex1"></param>
        /// <param name="aIndex2"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSwap(uint aIndex1, uint aIndex2, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSwap, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSwap.InputParameter(inIndex++), aIndex1));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSwap.InputParameter(inIndex++), aIndex2));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSwap(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DeviceMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgPins1 instance will not overlap.</remarks>
        /// <param name="aDeviceMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDeviceMaxChanged(System.Action aDeviceMaxChanged)
        {
            lock (iPropertyLock)
            {
                iDeviceMaxChanged = aDeviceMaxChanged;
            }
        }

        private void DeviceMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDeviceMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the AccountMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgPins1 instance will not overlap.</remarks>
        /// <param name="aAccountMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAccountMaxChanged(System.Action aAccountMaxChanged)
        {
            lock (iPropertyLock)
            {
                iAccountMaxChanged = aAccountMaxChanged;
            }
        }

        private void AccountMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAccountMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Modes state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgPins1 instance will not overlap.</remarks>
        /// <param name="aModesChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyModesChanged(System.Action aModesChanged)
        {
            lock (iPropertyLock)
            {
                iModesChanged = aModesChanged;
            }
        }

        private void ModesPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iModesChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the IdArray state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgPins1 instance will not overlap.</remarks>
        /// <param name="aIdArrayChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIdArrayChanged(System.Action aIdArrayChanged)
        {
            lock (iPropertyLock)
            {
                iIdArrayChanged = aIdArrayChanged;
            }
        }

        private void IdArrayPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIdArrayChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CloudConnected state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgPins1 instance will not overlap.</remarks>
        /// <param name="aCloudConnectedChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCloudConnectedChanged(System.Action aCloudConnectedChanged)
        {
            lock (iPropertyLock)
            {
                iCloudConnectedChanged = aCloudConnectedChanged;
            }
        }

        private void CloudConnectedPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCloudConnectedChanged);
            }
        }

        /// <summary>
        /// Query the value of the DeviceMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DeviceMax property</returns>
        public uint PropertyDeviceMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iDeviceMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the AccountMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the AccountMax property</returns>
        public uint PropertyAccountMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iAccountMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Modes property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Modes property</returns>
        public String PropertyModes()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iModes.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the IdArray property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the IdArray property</returns>
        public String PropertyIdArray()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iIdArray.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CloudConnected property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CloudConnected property</returns>
        public bool PropertyCloudConnected()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCloudConnected.Value();
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
            iActionGetDeviceMax.Dispose();
            iActionGetAccountMax.Dispose();
            iActionGetModes.Dispose();
            iActionGetIdArray.Dispose();
            iActionGetCloudConnected.Dispose();
            iActionReadList.Dispose();
            iActionInvokeId.Dispose();
            iActionInvokeIndex.Dispose();
            iActionInvokeUri.Dispose();
            iActionSetDevice.Dispose();
            iActionSetAccount.Dispose();
            iActionClear.Dispose();
            iActionSwap.Dispose();
            iDeviceMax.Dispose();
            iAccountMax.Dispose();
            iModes.Dispose();
            iIdArray.Dispose();
            iCloudConnected.Dispose();
        }
    }
}

