using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkWifi1 : ICpProxy, IDisposable
    {
        void SyncClearCredentials();
        void BeginClearCredentials(CpProxy.CallbackAsyncComplete aCallback);
        void EndClearCredentials(IntPtr aAsyncHandle);
        void SyncGetAdapterInUse(out bool aAdapterInUse);
        void BeginGetAdapterInUse(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetAdapterInUse(IntPtr aAsyncHandle, out bool aAdapterInUse);
        void SyncGetConfiguration(out String aConfiguration);
        void BeginGetConfiguration(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetConfiguration(IntPtr aAsyncHandle, out String aConfiguration);
        void SyncGetNetworkInfo(out String aNetworkInfo);
        void BeginGetNetworkInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetNetworkInfo(IntPtr aAsyncHandle, out String aNetworkInfo);
        void SyncGetScanResults(out String aScanResults);
        void BeginGetScanResults(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetScanResults(IntPtr aAsyncHandle, out String aScanResults);
        void SyncGetSignalInfo(out String aSignalInfo);
        void BeginGetSignalInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSignalInfo(IntPtr aAsyncHandle, out String aSignalInfo);
        void SyncGetStatus(out String aStatus);
        void BeginGetStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetStatus(IntPtr aAsyncHandle, out String aStatus);
        void SyncScan();
        void BeginScan(CpProxy.CallbackAsyncComplete aCallback);
        void EndScan(IntPtr aAsyncHandle);
        void SyncSetCredentials(String aSsid, String aPassword);
        void BeginSetCredentials(String aSsid, String aPassword, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetCredentials(IntPtr aAsyncHandle);
        void SetPropertyAdapterInUseChanged(System.Action aAdapterInUseChanged);
        bool PropertyAdapterInUse();
        void SetPropertyConfigurationChanged(System.Action aConfigurationChanged);
        String PropertyConfiguration();
        void SetPropertyScanResultsChanged(System.Action aScanResultsChanged);
        String PropertyScanResults();
        void SetPropertyStatusChanged(System.Action aStatusChanged);
        String PropertyStatus();
    }

    internal class SyncClearCredentialsLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;

        public SyncClearCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearCredentials(aAsyncHandle);
        }
    };

    internal class SyncGetAdapterInUseLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private bool iAdapterInUse;

        public SyncGetAdapterInUseLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public bool AdapterInUse()
        {
            return iAdapterInUse;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetAdapterInUse(aAsyncHandle, out iAdapterInUse);
        }
    };

    internal class SyncGetConfigurationLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private String iConfiguration;

        public SyncGetConfigurationLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public String Configuration()
        {
            return iConfiguration;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetConfiguration(aAsyncHandle, out iConfiguration);
        }
    };

    internal class SyncGetNetworkInfoLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private String iNetworkInfo;

        public SyncGetNetworkInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public String NetworkInfo()
        {
            return iNetworkInfo;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetNetworkInfo(aAsyncHandle, out iNetworkInfo);
        }
    };

    internal class SyncGetScanResultsLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private String iScanResults;

        public SyncGetScanResultsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public String ScanResults()
        {
            return iScanResults;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetScanResults(aAsyncHandle, out iScanResults);
        }
    };

    internal class SyncGetSignalInfoLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private String iSignalInfo;

        public SyncGetSignalInfoLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public String SignalInfo()
        {
            return iSignalInfo;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSignalInfo(aAsyncHandle, out iSignalInfo);
        }
    };

    internal class SyncGetStatusLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;
        private String iStatus;

        public SyncGetStatusLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        public String Status()
        {
            return iStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetStatus(aAsyncHandle, out iStatus);
        }
    };

    internal class SyncScanLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;

        public SyncScanLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndScan(aAsyncHandle);
        }
    };

    internal class SyncSetCredentialsLinnCoUkWifi1 : SyncProxyAction
    {
        private CpProxyLinnCoUkWifi1 iService;

        public SyncSetCredentialsLinnCoUkWifi1(CpProxyLinnCoUkWifi1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetCredentials(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Wifi:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkWifi1 : CpProxy, IDisposable, ICpProxyLinnCoUkWifi1
    {
        private OpenHome.Net.Core.Action iActionClearCredentials;
        private OpenHome.Net.Core.Action iActionGetAdapterInUse;
        private OpenHome.Net.Core.Action iActionGetConfiguration;
        private OpenHome.Net.Core.Action iActionGetNetworkInfo;
        private OpenHome.Net.Core.Action iActionGetScanResults;
        private OpenHome.Net.Core.Action iActionGetSignalInfo;
        private OpenHome.Net.Core.Action iActionGetStatus;
        private OpenHome.Net.Core.Action iActionScan;
        private OpenHome.Net.Core.Action iActionSetCredentials;
        private PropertyBool iAdapterInUse;
        private PropertyString iConfiguration;
        private PropertyString iScanResults;
        private PropertyString iStatus;
        private System.Action iAdapterInUseChanged;
        private System.Action iConfigurationChanged;
        private System.Action iScanResultsChanged;
        private System.Action iStatusChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkWifi1(ICpDevice aDevice)
            : base("linn-co-uk", "Wifi", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionClearCredentials = new OpenHome.Net.Core.Action("ClearCredentials");

            iActionGetAdapterInUse = new OpenHome.Net.Core.Action("GetAdapterInUse");
            param = new ParameterBool("AdapterInUse");
            iActionGetAdapterInUse.AddOutputParameter(param);

            iActionGetConfiguration = new OpenHome.Net.Core.Action("GetConfiguration");
            param = new ParameterString("Configuration", allowedValues);
            iActionGetConfiguration.AddOutputParameter(param);

            iActionGetNetworkInfo = new OpenHome.Net.Core.Action("GetNetworkInfo");
            param = new ParameterString("NetworkInfo", allowedValues);
            iActionGetNetworkInfo.AddOutputParameter(param);

            iActionGetScanResults = new OpenHome.Net.Core.Action("GetScanResults");
            param = new ParameterString("ScanResults", allowedValues);
            iActionGetScanResults.AddOutputParameter(param);

            iActionGetSignalInfo = new OpenHome.Net.Core.Action("GetSignalInfo");
            param = new ParameterString("SignalInfo", allowedValues);
            iActionGetSignalInfo.AddOutputParameter(param);

            iActionGetStatus = new OpenHome.Net.Core.Action("GetStatus");
            param = new ParameterString("Status", allowedValues);
            iActionGetStatus.AddOutputParameter(param);

            iActionScan = new OpenHome.Net.Core.Action("Scan");

            iActionSetCredentials = new OpenHome.Net.Core.Action("SetCredentials");
            param = new ParameterString("Ssid", allowedValues);
            iActionSetCredentials.AddInputParameter(param);
            param = new ParameterString("Password", allowedValues);
            iActionSetCredentials.AddInputParameter(param);

            iAdapterInUse = new PropertyBool("AdapterInUse", AdapterInUsePropertyChanged);
            AddProperty(iAdapterInUse);
            iConfiguration = new PropertyString("Configuration", ConfigurationPropertyChanged);
            AddProperty(iConfiguration);
            iScanResults = new PropertyString("ScanResults", ScanResultsPropertyChanged);
            AddProperty(iScanResults);
            iStatus = new PropertyString("Status", StatusPropertyChanged);
            AddProperty(iStatus);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncClearCredentials()
        {
            SyncClearCredentialsLinnCoUkWifi1 sync = new SyncClearCredentialsLinnCoUkWifi1(this);
            BeginClearCredentials(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearCredentials().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearCredentials(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearCredentials, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearCredentials(IntPtr aAsyncHandle)
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
        /// <param name="aAdapterInUse"></param>
        public void SyncGetAdapterInUse(out bool aAdapterInUse)
        {
            SyncGetAdapterInUseLinnCoUkWifi1 sync = new SyncGetAdapterInUseLinnCoUkWifi1(this);
            BeginGetAdapterInUse(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAdapterInUse = sync.AdapterInUse();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetAdapterInUse().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetAdapterInUse(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetAdapterInUse, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetAdapterInUse.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAdapterInUse"></param>
        public void EndGetAdapterInUse(IntPtr aAsyncHandle, out bool aAdapterInUse)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAdapterInUse = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aConfiguration"></param>
        public void SyncGetConfiguration(out String aConfiguration)
        {
            SyncGetConfigurationLinnCoUkWifi1 sync = new SyncGetConfigurationLinnCoUkWifi1(this);
            BeginGetConfiguration(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aConfiguration = sync.Configuration();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetConfiguration().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetConfiguration(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetConfiguration, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetConfiguration.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aConfiguration"></param>
        public void EndGetConfiguration(IntPtr aAsyncHandle, out String aConfiguration)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aConfiguration = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aNetworkInfo"></param>
        public void SyncGetNetworkInfo(out String aNetworkInfo)
        {
            SyncGetNetworkInfoLinnCoUkWifi1 sync = new SyncGetNetworkInfoLinnCoUkWifi1(this);
            BeginGetNetworkInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNetworkInfo = sync.NetworkInfo();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetNetworkInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetNetworkInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetNetworkInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetNetworkInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNetworkInfo"></param>
        public void EndGetNetworkInfo(IntPtr aAsyncHandle, out String aNetworkInfo)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNetworkInfo = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aScanResults"></param>
        public void SyncGetScanResults(out String aScanResults)
        {
            SyncGetScanResultsLinnCoUkWifi1 sync = new SyncGetScanResultsLinnCoUkWifi1(this);
            BeginGetScanResults(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aScanResults = sync.ScanResults();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetScanResults().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetScanResults(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetScanResults, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetScanResults.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aScanResults"></param>
        public void EndGetScanResults(IntPtr aAsyncHandle, out String aScanResults)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aScanResults = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSignalInfo"></param>
        public void SyncGetSignalInfo(out String aSignalInfo)
        {
            SyncGetSignalInfoLinnCoUkWifi1 sync = new SyncGetSignalInfoLinnCoUkWifi1(this);
            BeginGetSignalInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSignalInfo = sync.SignalInfo();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSignalInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSignalInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSignalInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSignalInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSignalInfo"></param>
        public void EndGetSignalInfo(IntPtr aAsyncHandle, out String aSignalInfo)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSignalInfo = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStatus"></param>
        public void SyncGetStatus(out String aStatus)
        {
            SyncGetStatusLinnCoUkWifi1 sync = new SyncGetStatusLinnCoUkWifi1(this);
            BeginGetStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aStatus = sync.Status();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aStatus"></param>
        public void EndGetStatus(IntPtr aAsyncHandle, out String aStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncScan()
        {
            SyncScanLinnCoUkWifi1 sync = new SyncScanLinnCoUkWifi1(this);
            BeginScan(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndScan().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginScan(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionScan, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndScan(IntPtr aAsyncHandle)
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
        /// <param name="aSsid"></param>
        /// <param name="aPassword"></param>
        public void SyncSetCredentials(String aSsid, String aPassword)
        {
            SyncSetCredentialsLinnCoUkWifi1 sync = new SyncSetCredentialsLinnCoUkWifi1(this);
            BeginSetCredentials(aSsid, aPassword, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetCredentials().</remarks>
        /// <param name="aSsid"></param>
        /// <param name="aPassword"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetCredentials(String aSsid, String aPassword, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetCredentials, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetCredentials.InputParameter(inIndex++), aSsid));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetCredentials.InputParameter(inIndex++), aPassword));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetCredentials(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the AdapterInUse state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkWifi1 instance will not overlap.</remarks>
        /// <param name="aAdapterInUseChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAdapterInUseChanged(System.Action aAdapterInUseChanged)
        {
            lock (iPropertyLock)
            {
                iAdapterInUseChanged = aAdapterInUseChanged;
            }
        }

        private void AdapterInUsePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAdapterInUseChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Configuration state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkWifi1 instance will not overlap.</remarks>
        /// <param name="aConfigurationChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyConfigurationChanged(System.Action aConfigurationChanged)
        {
            lock (iPropertyLock)
            {
                iConfigurationChanged = aConfigurationChanged;
            }
        }

        private void ConfigurationPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iConfigurationChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ScanResults state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkWifi1 instance will not overlap.</remarks>
        /// <param name="aScanResultsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyScanResultsChanged(System.Action aScanResultsChanged)
        {
            lock (iPropertyLock)
            {
                iScanResultsChanged = aScanResultsChanged;
            }
        }

        private void ScanResultsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iScanResultsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Status state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkWifi1 instance will not overlap.</remarks>
        /// <param name="aStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyStatusChanged(System.Action aStatusChanged)
        {
            lock (iPropertyLock)
            {
                iStatusChanged = aStatusChanged;
            }
        }

        private void StatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iStatusChanged);
            }
        }

        /// <summary>
        /// Query the value of the AdapterInUse property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the AdapterInUse property</returns>
        public bool PropertyAdapterInUse()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iAdapterInUse.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Configuration property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Configuration property</returns>
        public String PropertyConfiguration()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iConfiguration.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ScanResults property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ScanResults property</returns>
        public String PropertyScanResults()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iScanResults.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Status property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Status property</returns>
        public String PropertyStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iStatus.Value();
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
            iActionClearCredentials.Dispose();
            iActionGetAdapterInUse.Dispose();
            iActionGetConfiguration.Dispose();
            iActionGetNetworkInfo.Dispose();
            iActionGetScanResults.Dispose();
            iActionGetSignalInfo.Dispose();
            iActionGetStatus.Dispose();
            iActionScan.Dispose();
            iActionSetCredentials.Dispose();
            iAdapterInUse.Dispose();
            iConfiguration.Dispose();
            iScanResults.Dispose();
            iStatus.Dispose();
        }
    }
}

