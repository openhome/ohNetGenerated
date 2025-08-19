using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkVolkano2 : ICpProxy, IDisposable
    {
        void SyncReboot();
        void BeginReboot(CpProxy.CallbackAsyncComplete aCallback);
        void EndReboot(IntPtr aAsyncHandle);
        void SyncBootMode(out String aMode);
        void BeginBootMode(CpProxy.CallbackAsyncComplete aCallback);
        void EndBootMode(IntPtr aAsyncHandle, out String aMode);
        void SyncSetBootMode(String aMode);
        void BeginSetBootMode(String aMode, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetBootMode(IntPtr aAsyncHandle);
        void SyncBspType(out String aBspType);
        void BeginBspType(CpProxy.CallbackAsyncComplete aCallback);
        void EndBspType(IntPtr aAsyncHandle, out String aBspType);
        void SyncUglyName(out String aUglyName);
        void BeginUglyName(CpProxy.CallbackAsyncComplete aCallback);
        void EndUglyName(IntPtr aAsyncHandle, out String aUglyName);
        void SyncIpAddress(out String aIpAddress);
        void BeginIpAddress(CpProxy.CallbackAsyncComplete aCallback);
        void EndIpAddress(IntPtr aAsyncHandle, out String aIpAddress);
        void SyncIpAddressList(out String aIpAddressList);
        void BeginIpAddressList(CpProxy.CallbackAsyncComplete aCallback);
        void EndIpAddressList(IntPtr aAsyncHandle, out String aIpAddressList);
        void SyncMacAddress(out String aMacAddress);
        void BeginMacAddress(CpProxy.CallbackAsyncComplete aCallback);
        void EndMacAddress(IntPtr aAsyncHandle, out String aMacAddress);
        void SyncMacAddressList(out String aMacAddressList);
        void BeginMacAddressList(CpProxy.CallbackAsyncComplete aCallback);
        void EndMacAddressList(IntPtr aAsyncHandle, out String aMacAddressList);
        void SyncProductId(out String aProductNumber);
        void BeginProductId(CpProxy.CallbackAsyncComplete aCallback);
        void EndProductId(IntPtr aAsyncHandle, out String aProductNumber);
        void SyncBoardId(uint aIndex, out String aBoardNumber);
        void BeginBoardId(uint aIndex, CpProxy.CallbackAsyncComplete aCallback);
        void EndBoardId(IntPtr aAsyncHandle, out String aBoardNumber);
        void SyncBoardType(uint aIndex, out String aBoardNumber);
        void BeginBoardType(uint aIndex, CpProxy.CallbackAsyncComplete aCallback);
        void EndBoardType(IntPtr aAsyncHandle, out String aBoardNumber);
        void SyncMaxBoards(out uint aMaxBoards);
        void BeginMaxBoards(CpProxy.CallbackAsyncComplete aCallback);
        void EndMaxBoards(IntPtr aAsyncHandle, out uint aMaxBoards);
        void SyncSoftwareVersion(out String aSoftwareVersion);
        void BeginSoftwareVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndSoftwareVersion(IntPtr aAsyncHandle, out String aSoftwareVersion);
        void SyncSoftwareUpdate(out bool aAvailable, out String aSoftwareVersion);
        void BeginSoftwareUpdate(CpProxy.CallbackAsyncComplete aCallback);
        void EndSoftwareUpdate(IntPtr aAsyncHandle, out bool aAvailable, out String aSoftwareVersion);
        void SyncDeviceInfo(out String aDeviceInfoXml);
        void BeginDeviceInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceInfo(IntPtr aAsyncHandle, out String aDeviceInfoXml);
        void SyncCoreBoardId(out String aCoreBoardId);
        void BeginCoreBoardId(CpProxy.CallbackAsyncComplete aCallback);
        void EndCoreBoardId(IntPtr aAsyncHandle, out String aCoreBoardId);
        void SetPropertyDeviceInfoChanged(System.Action aDeviceInfoChanged);
        String PropertyDeviceInfo();
        void SetPropertyIpAddressListChanged(System.Action aIpAddressListChanged);
        String PropertyIpAddressList();
        void SetPropertyMacAddressListChanged(System.Action aMacAddressListChanged);
        String PropertyMacAddressList();
        void SetPropertyCoreBoardIdChanged(System.Action aCoreBoardIdChanged);
        String PropertyCoreBoardId();
    }

    internal class SyncRebootLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;

        public SyncRebootLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReboot(aAsyncHandle);
        }
    };

    internal class SyncBootModeLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iMode;

        public SyncBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String Mode()
        {
            return iMode;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBootMode(aAsyncHandle, out iMode);
        }
    };

    internal class SyncSetBootModeLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;

        public SyncSetBootModeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetBootMode(aAsyncHandle);
        }
    };

    internal class SyncBspTypeLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iBspType;

        public SyncBspTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String BspType()
        {
            return iBspType;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBspType(aAsyncHandle, out iBspType);
        }
    };

    internal class SyncUglyNameLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iUglyName;

        public SyncUglyNameLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String UglyName()
        {
            return iUglyName;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUglyName(aAsyncHandle, out iUglyName);
        }
    };

    internal class SyncIpAddressLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iIpAddress;

        public SyncIpAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String IpAddress()
        {
            return iIpAddress;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndIpAddress(aAsyncHandle, out iIpAddress);
        }
    };

    internal class SyncIpAddressListLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iIpAddressList;

        public SyncIpAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String IpAddressList()
        {
            return iIpAddressList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndIpAddressList(aAsyncHandle, out iIpAddressList);
        }
    };

    internal class SyncMacAddressLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iMacAddress;

        public SyncMacAddressLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String MacAddress()
        {
            return iMacAddress;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndMacAddress(aAsyncHandle, out iMacAddress);
        }
    };

    internal class SyncMacAddressListLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iMacAddressList;

        public SyncMacAddressListLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String MacAddressList()
        {
            return iMacAddressList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndMacAddressList(aAsyncHandle, out iMacAddressList);
        }
    };

    internal class SyncProductIdLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iProductNumber;

        public SyncProductIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String ProductNumber()
        {
            return iProductNumber;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndProductId(aAsyncHandle, out iProductNumber);
        }
    };

    internal class SyncBoardIdLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iBoardNumber;

        public SyncBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String BoardNumber()
        {
            return iBoardNumber;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBoardId(aAsyncHandle, out iBoardNumber);
        }
    };

    internal class SyncBoardTypeLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iBoardNumber;

        public SyncBoardTypeLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String BoardNumber()
        {
            return iBoardNumber;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBoardType(aAsyncHandle, out iBoardNumber);
        }
    };

    internal class SyncMaxBoardsLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private uint iMaxBoards;

        public SyncMaxBoardsLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public uint MaxBoards()
        {
            return iMaxBoards;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndMaxBoards(aAsyncHandle, out iMaxBoards);
        }
    };

    internal class SyncSoftwareVersionLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iSoftwareVersion;

        public SyncSoftwareVersionLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String SoftwareVersion()
        {
            return iSoftwareVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSoftwareVersion(aAsyncHandle, out iSoftwareVersion);
        }
    };

    internal class SyncSoftwareUpdateLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private bool iAvailable;
        private String iSoftwareVersion;

        public SyncSoftwareUpdateLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public bool Available()
        {
            return iAvailable;
        }
        public String SoftwareVersion()
        {
            return iSoftwareVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSoftwareUpdate(aAsyncHandle, out iAvailable, out iSoftwareVersion);
        }
    };

    internal class SyncDeviceInfoLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iDeviceInfoXml;

        public SyncDeviceInfoLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String DeviceInfoXml()
        {
            return iDeviceInfoXml;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeviceInfo(aAsyncHandle, out iDeviceInfoXml);
        }
    };

    internal class SyncCoreBoardIdLinnCoUkVolkano2 : SyncProxyAction
    {
        private CpProxyLinnCoUkVolkano2 iService;
        private String iCoreBoardId;

        public SyncCoreBoardIdLinnCoUkVolkano2(CpProxyLinnCoUkVolkano2 aProxy)
        {
            iService = aProxy;
        }
        public String CoreBoardId()
        {
            return iCoreBoardId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCoreBoardId(aAsyncHandle, out iCoreBoardId);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Volkano:2 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkVolkano2 : CpProxy, IDisposable, ICpProxyLinnCoUkVolkano2
    {
        private OpenHome.Net.Core.Action iActionReboot;
        private OpenHome.Net.Core.Action iActionBootMode;
        private OpenHome.Net.Core.Action iActionSetBootMode;
        private OpenHome.Net.Core.Action iActionBspType;
        private OpenHome.Net.Core.Action iActionUglyName;
        private OpenHome.Net.Core.Action iActionIpAddress;
        private OpenHome.Net.Core.Action iActionIpAddressList;
        private OpenHome.Net.Core.Action iActionMacAddress;
        private OpenHome.Net.Core.Action iActionMacAddressList;
        private OpenHome.Net.Core.Action iActionProductId;
        private OpenHome.Net.Core.Action iActionBoardId;
        private OpenHome.Net.Core.Action iActionBoardType;
        private OpenHome.Net.Core.Action iActionMaxBoards;
        private OpenHome.Net.Core.Action iActionSoftwareVersion;
        private OpenHome.Net.Core.Action iActionSoftwareUpdate;
        private OpenHome.Net.Core.Action iActionDeviceInfo;
        private OpenHome.Net.Core.Action iActionCoreBoardId;
        private PropertyString iDeviceInfo;
        private PropertyString iIpAddressList;
        private PropertyString iMacAddressList;
        private PropertyString iCoreBoardId;
        private System.Action iDeviceInfoChanged;
        private System.Action iIpAddressListChanged;
        private System.Action iMacAddressListChanged;
        private System.Action iCoreBoardIdChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkVolkano2(ICpDevice aDevice)
            : base("linn-co-uk", "Volkano", 2, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionReboot = new OpenHome.Net.Core.Action("Reboot");

            iActionBootMode = new OpenHome.Net.Core.Action("BootMode");
            allowedValues.Add("Main");
            allowedValues.Add("Fallback");
            allowedValues.Add("Ram");
            param = new ParameterString("aMode", allowedValues);
            iActionBootMode.AddOutputParameter(param);
            allowedValues.Clear();

            iActionSetBootMode = new OpenHome.Net.Core.Action("SetBootMode");
            allowedValues.Add("Main");
            allowedValues.Add("Fallback");
            param = new ParameterString("aMode", allowedValues);
            iActionSetBootMode.AddInputParameter(param);
            allowedValues.Clear();

            iActionBspType = new OpenHome.Net.Core.Action("BspType");
            param = new ParameterString("aBspType", allowedValues);
            iActionBspType.AddOutputParameter(param);

            iActionUglyName = new OpenHome.Net.Core.Action("UglyName");
            param = new ParameterString("aUglyName", allowedValues);
            iActionUglyName.AddOutputParameter(param);

            iActionIpAddress = new OpenHome.Net.Core.Action("IpAddress");
            param = new ParameterString("aIpAddress", allowedValues);
            iActionIpAddress.AddOutputParameter(param);

            iActionIpAddressList = new OpenHome.Net.Core.Action("IpAddressList");
            param = new ParameterString("aIpAddressList", allowedValues);
            iActionIpAddressList.AddOutputParameter(param);

            iActionMacAddress = new OpenHome.Net.Core.Action("MacAddress");
            param = new ParameterString("aMacAddress", allowedValues);
            iActionMacAddress.AddOutputParameter(param);

            iActionMacAddressList = new OpenHome.Net.Core.Action("MacAddressList");
            param = new ParameterString("aMacAddressList", allowedValues);
            iActionMacAddressList.AddOutputParameter(param);

            iActionProductId = new OpenHome.Net.Core.Action("ProductId");
            param = new ParameterString("aProductNumber", allowedValues);
            iActionProductId.AddOutputParameter(param);

            iActionBoardId = new OpenHome.Net.Core.Action("BoardId");
            param = new ParameterUint("aIndex");
            iActionBoardId.AddInputParameter(param);
            param = new ParameterString("aBoardNumber", allowedValues);
            iActionBoardId.AddOutputParameter(param);

            iActionBoardType = new OpenHome.Net.Core.Action("BoardType");
            param = new ParameterUint("aIndex");
            iActionBoardType.AddInputParameter(param);
            param = new ParameterString("aBoardNumber", allowedValues);
            iActionBoardType.AddOutputParameter(param);

            iActionMaxBoards = new OpenHome.Net.Core.Action("MaxBoards");
            param = new ParameterUint("aMaxBoards");
            iActionMaxBoards.AddOutputParameter(param);

            iActionSoftwareVersion = new OpenHome.Net.Core.Action("SoftwareVersion");
            param = new ParameterString("aSoftwareVersion", allowedValues);
            iActionSoftwareVersion.AddOutputParameter(param);

            iActionSoftwareUpdate = new OpenHome.Net.Core.Action("SoftwareUpdate");
            param = new ParameterBool("aAvailable");
            iActionSoftwareUpdate.AddOutputParameter(param);
            param = new ParameterString("aSoftwareVersion", allowedValues);
            iActionSoftwareUpdate.AddOutputParameter(param);

            iActionDeviceInfo = new OpenHome.Net.Core.Action("DeviceInfo");
            param = new ParameterString("aDeviceInfoXml", allowedValues);
            iActionDeviceInfo.AddOutputParameter(param);

            iActionCoreBoardId = new OpenHome.Net.Core.Action("CoreBoardId");
            param = new ParameterString("aCoreBoardId", allowedValues);
            iActionCoreBoardId.AddOutputParameter(param);

            iDeviceInfo = new PropertyString("DeviceInfo", DeviceInfoPropertyChanged);
            AddProperty(iDeviceInfo);
            iIpAddressList = new PropertyString("IpAddressList", IpAddressListPropertyChanged);
            AddProperty(iIpAddressList);
            iMacAddressList = new PropertyString("MacAddressList", MacAddressListPropertyChanged);
            AddProperty(iMacAddressList);
            iCoreBoardId = new PropertyString("CoreBoardId", CoreBoardIdPropertyChanged);
            AddProperty(iCoreBoardId);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncReboot()
        {
            SyncRebootLinnCoUkVolkano2 sync = new SyncRebootLinnCoUkVolkano2(this);
            BeginReboot(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReboot().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReboot(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReboot, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndReboot(IntPtr aAsyncHandle)
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
        public void SyncBootMode(out String aMode)
        {
            SyncBootModeLinnCoUkVolkano2 sync = new SyncBootModeLinnCoUkVolkano2(this);
            BeginBootMode(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMode = sync.Mode();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBootMode().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBootMode(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBootMode, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBootMode.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMode"></param>
        public void EndBootMode(IntPtr aAsyncHandle, out String aMode)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMode = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMode"></param>
        public void SyncSetBootMode(String aMode)
        {
            SyncSetBootModeLinnCoUkVolkano2 sync = new SyncSetBootModeLinnCoUkVolkano2(this);
            BeginSetBootMode(aMode, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetBootMode().</remarks>
        /// <param name="aMode"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetBootMode(String aMode, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetBootMode, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetBootMode.InputParameter(inIndex++), aMode));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetBootMode(IntPtr aAsyncHandle)
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
        /// <param name="aBspType"></param>
        public void SyncBspType(out String aBspType)
        {
            SyncBspTypeLinnCoUkVolkano2 sync = new SyncBspTypeLinnCoUkVolkano2(this);
            BeginBspType(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBspType = sync.BspType();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBspType().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBspType(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBspType, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBspType.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBspType"></param>
        public void EndBspType(IntPtr aAsyncHandle, out String aBspType)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBspType = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aUglyName"></param>
        public void SyncUglyName(out String aUglyName)
        {
            SyncUglyNameLinnCoUkVolkano2 sync = new SyncUglyNameLinnCoUkVolkano2(this);
            BeginUglyName(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUglyName = sync.UglyName();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUglyName().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUglyName(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUglyName, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionUglyName.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUglyName"></param>
        public void EndUglyName(IntPtr aAsyncHandle, out String aUglyName)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUglyName = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIpAddress"></param>
        public void SyncIpAddress(out String aIpAddress)
        {
            SyncIpAddressLinnCoUkVolkano2 sync = new SyncIpAddressLinnCoUkVolkano2(this);
            BeginIpAddress(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIpAddress = sync.IpAddress();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndIpAddress().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginIpAddress(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionIpAddress, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionIpAddress.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIpAddress"></param>
        public void EndIpAddress(IntPtr aAsyncHandle, out String aIpAddress)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIpAddress = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIpAddressList"></param>
        public void SyncIpAddressList(out String aIpAddressList)
        {
            SyncIpAddressListLinnCoUkVolkano2 sync = new SyncIpAddressListLinnCoUkVolkano2(this);
            BeginIpAddressList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIpAddressList = sync.IpAddressList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndIpAddressList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginIpAddressList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionIpAddressList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionIpAddressList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIpAddressList"></param>
        public void EndIpAddressList(IntPtr aAsyncHandle, out String aIpAddressList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIpAddressList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMacAddress"></param>
        public void SyncMacAddress(out String aMacAddress)
        {
            SyncMacAddressLinnCoUkVolkano2 sync = new SyncMacAddressLinnCoUkVolkano2(this);
            BeginMacAddress(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMacAddress = sync.MacAddress();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndMacAddress().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginMacAddress(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionMacAddress, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionMacAddress.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMacAddress"></param>
        public void EndMacAddress(IntPtr aAsyncHandle, out String aMacAddress)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMacAddress = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMacAddressList"></param>
        public void SyncMacAddressList(out String aMacAddressList)
        {
            SyncMacAddressListLinnCoUkVolkano2 sync = new SyncMacAddressListLinnCoUkVolkano2(this);
            BeginMacAddressList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMacAddressList = sync.MacAddressList();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndMacAddressList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginMacAddressList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionMacAddressList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionMacAddressList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMacAddressList"></param>
        public void EndMacAddressList(IntPtr aAsyncHandle, out String aMacAddressList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMacAddressList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aProductNumber"></param>
        public void SyncProductId(out String aProductNumber)
        {
            SyncProductIdLinnCoUkVolkano2 sync = new SyncProductIdLinnCoUkVolkano2(this);
            BeginProductId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aProductNumber = sync.ProductNumber();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndProductId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginProductId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionProductId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionProductId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aProductNumber"></param>
        public void EndProductId(IntPtr aAsyncHandle, out String aProductNumber)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aProductNumber = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aBoardNumber"></param>
        public void SyncBoardId(uint aIndex, out String aBoardNumber)
        {
            SyncBoardIdLinnCoUkVolkano2 sync = new SyncBoardIdLinnCoUkVolkano2(this);
            BeginBoardId(aIndex, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBoardNumber = sync.BoardNumber();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBoardId().</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBoardId(uint aIndex, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBoardId, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionBoardId.InputParameter(inIndex++), aIndex));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBoardId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBoardNumber"></param>
        public void EndBoardId(IntPtr aAsyncHandle, out String aBoardNumber)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBoardNumber = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aBoardNumber"></param>
        public void SyncBoardType(uint aIndex, out String aBoardNumber)
        {
            SyncBoardTypeLinnCoUkVolkano2 sync = new SyncBoardTypeLinnCoUkVolkano2(this);
            BeginBoardType(aIndex, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aBoardNumber = sync.BoardNumber();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBoardType().</remarks>
        /// <param name="aIndex"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBoardType(uint aIndex, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBoardType, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionBoardType.InputParameter(inIndex++), aIndex));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBoardType.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aBoardNumber"></param>
        public void EndBoardType(IntPtr aAsyncHandle, out String aBoardNumber)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aBoardNumber = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMaxBoards"></param>
        public void SyncMaxBoards(out uint aMaxBoards)
        {
            SyncMaxBoardsLinnCoUkVolkano2 sync = new SyncMaxBoardsLinnCoUkVolkano2(this);
            BeginMaxBoards(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aMaxBoards = sync.MaxBoards();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndMaxBoards().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginMaxBoards(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionMaxBoards, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionMaxBoards.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aMaxBoards"></param>
        public void EndMaxBoards(IntPtr aAsyncHandle, out uint aMaxBoards)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aMaxBoards = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSoftwareVersion"></param>
        public void SyncSoftwareVersion(out String aSoftwareVersion)
        {
            SyncSoftwareVersionLinnCoUkVolkano2 sync = new SyncSoftwareVersionLinnCoUkVolkano2(this);
            BeginSoftwareVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSoftwareVersion = sync.SoftwareVersion();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSoftwareVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSoftwareVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSoftwareVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionSoftwareVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSoftwareVersion"></param>
        public void EndSoftwareVersion(IntPtr aAsyncHandle, out String aSoftwareVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSoftwareVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAvailable"></param>
        /// <param name="aSoftwareVersion"></param>
        public void SyncSoftwareUpdate(out bool aAvailable, out String aSoftwareVersion)
        {
            SyncSoftwareUpdateLinnCoUkVolkano2 sync = new SyncSoftwareUpdateLinnCoUkVolkano2(this);
            BeginSoftwareUpdate(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAvailable = sync.Available();
            aSoftwareVersion = sync.SoftwareVersion();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSoftwareUpdate().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSoftwareUpdate(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSoftwareUpdate, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionSoftwareUpdate.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionSoftwareUpdate.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAvailable"></param>
        /// <param name="aSoftwareVersion"></param>
        public void EndSoftwareUpdate(IntPtr aAsyncHandle, out bool aAvailable, out String aSoftwareVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAvailable = Invocation.OutputBool(aAsyncHandle, index++);
            aSoftwareVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceInfoXml"></param>
        public void SyncDeviceInfo(out String aDeviceInfoXml)
        {
            SyncDeviceInfoLinnCoUkVolkano2 sync = new SyncDeviceInfoLinnCoUkVolkano2(this);
            BeginDeviceInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aDeviceInfoXml = sync.DeviceInfoXml();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeviceInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeviceInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeviceInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionDeviceInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aDeviceInfoXml"></param>
        public void EndDeviceInfo(IntPtr aAsyncHandle, out String aDeviceInfoXml)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aDeviceInfoXml = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aCoreBoardId"></param>
        public void SyncCoreBoardId(out String aCoreBoardId)
        {
            SyncCoreBoardIdLinnCoUkVolkano2 sync = new SyncCoreBoardIdLinnCoUkVolkano2(this);
            BeginCoreBoardId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aCoreBoardId = sync.CoreBoardId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndCoreBoardId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginCoreBoardId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionCoreBoardId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionCoreBoardId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aCoreBoardId"></param>
        public void EndCoreBoardId(IntPtr aAsyncHandle, out String aCoreBoardId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aCoreBoardId = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the DeviceInfo state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkVolkano2 instance will not overlap.</remarks>
        /// <param name="aDeviceInfoChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDeviceInfoChanged(System.Action aDeviceInfoChanged)
        {
            lock (iPropertyLock)
            {
                iDeviceInfoChanged = aDeviceInfoChanged;
            }
        }

        private void DeviceInfoPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDeviceInfoChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the IpAddressList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkVolkano2 instance will not overlap.</remarks>
        /// <param name="aIpAddressListChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIpAddressListChanged(System.Action aIpAddressListChanged)
        {
            lock (iPropertyLock)
            {
                iIpAddressListChanged = aIpAddressListChanged;
            }
        }

        private void IpAddressListPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIpAddressListChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the MacAddressList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkVolkano2 instance will not overlap.</remarks>
        /// <param name="aMacAddressListChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMacAddressListChanged(System.Action aMacAddressListChanged)
        {
            lock (iPropertyLock)
            {
                iMacAddressListChanged = aMacAddressListChanged;
            }
        }

        private void MacAddressListPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMacAddressListChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CoreBoardId state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkVolkano2 instance will not overlap.</remarks>
        /// <param name="aCoreBoardIdChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCoreBoardIdChanged(System.Action aCoreBoardIdChanged)
        {
            lock (iPropertyLock)
            {
                iCoreBoardIdChanged = aCoreBoardIdChanged;
            }
        }

        private void CoreBoardIdPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCoreBoardIdChanged);
            }
        }

        /// <summary>
        /// Query the value of the DeviceInfo property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DeviceInfo property</returns>
        public String PropertyDeviceInfo()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDeviceInfo.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the IpAddressList property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the IpAddressList property</returns>
        public String PropertyIpAddressList()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iIpAddressList.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the MacAddressList property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the MacAddressList property</returns>
        public String PropertyMacAddressList()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iMacAddressList.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CoreBoardId property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CoreBoardId property</returns>
        public String PropertyCoreBoardId()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iCoreBoardId.Value();
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
            iActionReboot.Dispose();
            iActionBootMode.Dispose();
            iActionSetBootMode.Dispose();
            iActionBspType.Dispose();
            iActionUglyName.Dispose();
            iActionIpAddress.Dispose();
            iActionIpAddressList.Dispose();
            iActionMacAddress.Dispose();
            iActionMacAddressList.Dispose();
            iActionProductId.Dispose();
            iActionBoardId.Dispose();
            iActionBoardType.Dispose();
            iActionMaxBoards.Dispose();
            iActionSoftwareVersion.Dispose();
            iActionSoftwareUpdate.Dispose();
            iActionDeviceInfo.Dispose();
            iActionCoreBoardId.Dispose();
            iDeviceInfo.Dispose();
            iIpAddressList.Dispose();
            iMacAddressList.Dispose();
            iCoreBoardId.Dispose();
        }
    }
}

