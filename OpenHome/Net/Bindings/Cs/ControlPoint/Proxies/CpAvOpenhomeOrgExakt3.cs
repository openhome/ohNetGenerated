using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgExakt3 : ICpProxy, IDisposable
    {
        void SyncDeviceList(out String aList);
        void BeginDeviceList(CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceList(IntPtr aAsyncHandle, out String aList);
        void SyncDeviceSettings(String aDeviceId, out String aSettings);
        void BeginDeviceSettings(String aDeviceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceSettings(IntPtr aAsyncHandle, out String aSettings);
        void SyncConnectionStatus(out String aConnectionStatus);
        void BeginConnectionStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndConnectionStatus(IntPtr aAsyncHandle, out String aConnectionStatus);
        void SyncSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist);
        void BeginSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist, CpProxy.CallbackAsyncComplete aCallback);
        void EndSet(IntPtr aAsyncHandle);
        void SyncReprogram(String aDeviceId, String aFileUri);
        void BeginReprogram(String aDeviceId, String aFileUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndReprogram(IntPtr aAsyncHandle);
        void SyncReprogramFallback(String aDeviceId, String aFileUri);
        void BeginReprogramFallback(String aDeviceId, String aFileUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndReprogramFallback(IntPtr aAsyncHandle);
        void SyncChannelMap(out String aChannelMap);
        void BeginChannelMap(CpProxy.CallbackAsyncComplete aCallback);
        void EndChannelMap(IntPtr aAsyncHandle, out String aChannelMap);
        void SyncSetChannelMap(String aChannelMap);
        void BeginSetChannelMap(String aChannelMap, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetChannelMap(IntPtr aAsyncHandle);
        void SyncAudioChannels(out String aAudioChannels);
        void BeginAudioChannels(CpProxy.CallbackAsyncComplete aCallback);
        void EndAudioChannels(IntPtr aAsyncHandle, out String aAudioChannels);
        void SyncSetAudioChannels(String aAudioChannels);
        void BeginSetAudioChannels(String aAudioChannels, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetAudioChannels(IntPtr aAsyncHandle);
        void SyncVersion(out String aVersion);
        void BeginVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndVersion(IntPtr aAsyncHandle, out String aVersion);
        void SetPropertyDeviceListChanged(System.Action aDeviceListChanged);
        String PropertyDeviceList();
        void SetPropertyConnectionStatusChanged(System.Action aConnectionStatusChanged);
        String PropertyConnectionStatus();
        void SetPropertyChannelMapChanged(System.Action aChannelMapChanged);
        String PropertyChannelMap();
        void SetPropertyAudioChannelsChanged(System.Action aAudioChannelsChanged);
        String PropertyAudioChannels();
        void SetPropertyVersionChanged(System.Action aVersionChanged);
        String PropertyVersion();
    }

    internal class SyncDeviceListAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iList;

        public SyncDeviceListAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String List()
        {
            return iList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeviceList(aAsyncHandle, out iList);
        }
    };

    internal class SyncDeviceSettingsAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iSettings;

        public SyncDeviceSettingsAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String Settings()
        {
            return iSettings;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeviceSettings(aAsyncHandle, out iSettings);
        }
    };

    internal class SyncConnectionStatusAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iConnectionStatus;

        public SyncConnectionStatusAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String ConnectionStatus()
        {
            return iConnectionStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndConnectionStatus(aAsyncHandle, out iConnectionStatus);
        }
    };

    internal class SyncSetAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;

        public SyncSetAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSet(aAsyncHandle);
        }
    };

    internal class SyncReprogramAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;

        public SyncReprogramAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReprogram(aAsyncHandle);
        }
    };

    internal class SyncReprogramFallbackAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;

        public SyncReprogramFallbackAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReprogramFallback(aAsyncHandle);
        }
    };

    internal class SyncChannelMapAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iChannelMap;

        public SyncChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String ChannelMap()
        {
            return iChannelMap;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndChannelMap(aAsyncHandle, out iChannelMap);
        }
    };

    internal class SyncSetChannelMapAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;

        public SyncSetChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetChannelMap(aAsyncHandle);
        }
    };

    internal class SyncAudioChannelsAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iAudioChannels;

        public SyncAudioChannelsAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String AudioChannels()
        {
            return iAudioChannels;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndAudioChannels(aAsyncHandle, out iAudioChannels);
        }
    };

    internal class SyncSetAudioChannelsAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;

        public SyncSetAudioChannelsAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetAudioChannels(aAsyncHandle);
        }
    };

    internal class SyncVersionAvOpenhomeOrgExakt3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt3 iService;
        private String iVersion;

        public SyncVersionAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3 aProxy)
        {
            iService = aProxy;
        }
        public String Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVersion(aAsyncHandle, out iVersion);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Exakt:3 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgExakt3 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgExakt3
    {
        private OpenHome.Net.Core.Action iActionDeviceList;
        private OpenHome.Net.Core.Action iActionDeviceSettings;
        private OpenHome.Net.Core.Action iActionConnectionStatus;
        private OpenHome.Net.Core.Action iActionSet;
        private OpenHome.Net.Core.Action iActionReprogram;
        private OpenHome.Net.Core.Action iActionReprogramFallback;
        private OpenHome.Net.Core.Action iActionChannelMap;
        private OpenHome.Net.Core.Action iActionSetChannelMap;
        private OpenHome.Net.Core.Action iActionAudioChannels;
        private OpenHome.Net.Core.Action iActionSetAudioChannels;
        private OpenHome.Net.Core.Action iActionVersion;
        private PropertyString iDeviceList;
        private PropertyString iConnectionStatus;
        private PropertyString iChannelMap;
        private PropertyString iAudioChannels;
        private PropertyString iVersion;
        private System.Action iDeviceListChanged;
        private System.Action iConnectionStatusChanged;
        private System.Action iChannelMapChanged;
        private System.Action iAudioChannelsChanged;
        private System.Action iVersionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgExakt3(ICpDevice aDevice)
            : base("av-openhome-org", "Exakt", 3, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionDeviceList = new OpenHome.Net.Core.Action("DeviceList");
            param = new ParameterString("List", allowedValues);
            iActionDeviceList.AddOutputParameter(param);

            iActionDeviceSettings = new OpenHome.Net.Core.Action("DeviceSettings");
            param = new ParameterString("DeviceId", allowedValues);
            iActionDeviceSettings.AddInputParameter(param);
            param = new ParameterString("Settings", allowedValues);
            iActionDeviceSettings.AddOutputParameter(param);

            iActionConnectionStatus = new OpenHome.Net.Core.Action("ConnectionStatus");
            param = new ParameterString("ConnectionStatus", allowedValues);
            iActionConnectionStatus.AddOutputParameter(param);

            iActionSet = new OpenHome.Net.Core.Action("Set");
            param = new ParameterString("DeviceId", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterUint("BankId");
            iActionSet.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterBool("Mute");
            iActionSet.AddInputParameter(param);
            param = new ParameterBool("Persist");
            iActionSet.AddInputParameter(param);

            iActionReprogram = new OpenHome.Net.Core.Action("Reprogram");
            param = new ParameterString("DeviceId", allowedValues);
            iActionReprogram.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionReprogram.AddInputParameter(param);

            iActionReprogramFallback = new OpenHome.Net.Core.Action("ReprogramFallback");
            param = new ParameterString("DeviceId", allowedValues);
            iActionReprogramFallback.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionReprogramFallback.AddInputParameter(param);

            iActionChannelMap = new OpenHome.Net.Core.Action("ChannelMap");
            param = new ParameterString("ChannelMap", allowedValues);
            iActionChannelMap.AddOutputParameter(param);

            iActionSetChannelMap = new OpenHome.Net.Core.Action("SetChannelMap");
            param = new ParameterString("ChannelMap", allowedValues);
            iActionSetChannelMap.AddInputParameter(param);

            iActionAudioChannels = new OpenHome.Net.Core.Action("AudioChannels");
            param = new ParameterString("AudioChannels", allowedValues);
            iActionAudioChannels.AddOutputParameter(param);

            iActionSetAudioChannels = new OpenHome.Net.Core.Action("SetAudioChannels");
            param = new ParameterString("AudioChannels", allowedValues);
            iActionSetAudioChannels.AddInputParameter(param);

            iActionVersion = new OpenHome.Net.Core.Action("Version");
            param = new ParameterString("Version", allowedValues);
            iActionVersion.AddOutputParameter(param);

            iDeviceList = new PropertyString("DeviceList", DeviceListPropertyChanged);
            AddProperty(iDeviceList);
            iConnectionStatus = new PropertyString("ConnectionStatus", ConnectionStatusPropertyChanged);
            AddProperty(iConnectionStatus);
            iChannelMap = new PropertyString("ChannelMap", ChannelMapPropertyChanged);
            AddProperty(iChannelMap);
            iAudioChannels = new PropertyString("AudioChannels", AudioChannelsPropertyChanged);
            AddProperty(iAudioChannels);
            iVersion = new PropertyString("Version", VersionPropertyChanged);
            AddProperty(iVersion);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aList"></param>
        public void SyncDeviceList(out String aList)
        {
            SyncDeviceListAvOpenhomeOrgExakt3 sync = new SyncDeviceListAvOpenhomeOrgExakt3(this);
            BeginDeviceList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aList = sync.List();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeviceList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeviceList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeviceList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionDeviceList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aList"></param>
        public void EndDeviceList(IntPtr aAsyncHandle, out String aList)
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
        /// <param name="aDeviceId"></param>
        /// <param name="aSettings"></param>
        public void SyncDeviceSettings(String aDeviceId, out String aSettings)
        {
            SyncDeviceSettingsAvOpenhomeOrgExakt3 sync = new SyncDeviceSettingsAvOpenhomeOrgExakt3(this);
            BeginDeviceSettings(aDeviceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettings = sync.Settings();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeviceSettings().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeviceSettings(String aDeviceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeviceSettings, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionDeviceSettings.InputParameter(inIndex++), aDeviceId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionDeviceSettings.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettings"></param>
        public void EndDeviceSettings(IntPtr aAsyncHandle, out String aSettings)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSettings = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aConnectionStatus"></param>
        public void SyncConnectionStatus(out String aConnectionStatus)
        {
            SyncConnectionStatusAvOpenhomeOrgExakt3 sync = new SyncConnectionStatusAvOpenhomeOrgExakt3(this);
            BeginConnectionStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aConnectionStatus = sync.ConnectionStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndConnectionStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginConnectionStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionConnectionStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionConnectionStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aConnectionStatus"></param>
        public void EndConnectionStatus(IntPtr aAsyncHandle, out String aConnectionStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aConnectionStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aBankId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aMute"></param>
        /// <param name="aPersist"></param>
        public void SyncSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist)
        {
            SyncSetAvOpenhomeOrgExakt3 sync = new SyncSetAvOpenhomeOrgExakt3(this);
            BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSet().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aBankId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aMute"></param>
        /// <param name="aPersist"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSet, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSet.InputParameter(inIndex++), aBankId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aFileUri));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSet.InputParameter(inIndex++), aMute));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSet.InputParameter(inIndex++), aPersist));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSet(IntPtr aAsyncHandle)
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
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        public void SyncReprogram(String aDeviceId, String aFileUri)
        {
            SyncReprogramAvOpenhomeOrgExakt3 sync = new SyncReprogramAvOpenhomeOrgExakt3(this);
            BeginReprogram(aDeviceId, aFileUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReprogram().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReprogram(String aDeviceId, String aFileUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReprogram, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogram.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogram.InputParameter(inIndex++), aFileUri));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndReprogram(IntPtr aAsyncHandle)
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
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        public void SyncReprogramFallback(String aDeviceId, String aFileUri)
        {
            SyncReprogramFallbackAvOpenhomeOrgExakt3 sync = new SyncReprogramFallbackAvOpenhomeOrgExakt3(this);
            BeginReprogramFallback(aDeviceId, aFileUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReprogramFallback().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReprogramFallback(String aDeviceId, String aFileUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReprogramFallback, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogramFallback.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogramFallback.InputParameter(inIndex++), aFileUri));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndReprogramFallback(IntPtr aAsyncHandle)
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
        /// <param name="aChannelMap"></param>
        public void SyncChannelMap(out String aChannelMap)
        {
            SyncChannelMapAvOpenhomeOrgExakt3 sync = new SyncChannelMapAvOpenhomeOrgExakt3(this);
            BeginChannelMap(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aChannelMap = sync.ChannelMap();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndChannelMap().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginChannelMap(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionChannelMap, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionChannelMap.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aChannelMap"></param>
        public void EndChannelMap(IntPtr aAsyncHandle, out String aChannelMap)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aChannelMap = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannelMap"></param>
        public void SyncSetChannelMap(String aChannelMap)
        {
            SyncSetChannelMapAvOpenhomeOrgExakt3 sync = new SyncSetChannelMapAvOpenhomeOrgExakt3(this);
            BeginSetChannelMap(aChannelMap, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetChannelMap().</remarks>
        /// <param name="aChannelMap"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetChannelMap(String aChannelMap, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetChannelMap, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetChannelMap.InputParameter(inIndex++), aChannelMap));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetChannelMap(IntPtr aAsyncHandle)
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
        /// <param name="aAudioChannels"></param>
        public void SyncAudioChannels(out String aAudioChannels)
        {
            SyncAudioChannelsAvOpenhomeOrgExakt3 sync = new SyncAudioChannelsAvOpenhomeOrgExakt3(this);
            BeginAudioChannels(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAudioChannels = sync.AudioChannels();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndAudioChannels().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginAudioChannels(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionAudioChannels, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionAudioChannels.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAudioChannels"></param>
        public void EndAudioChannels(IntPtr aAsyncHandle, out String aAudioChannels)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aAudioChannels = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAudioChannels"></param>
        public void SyncSetAudioChannels(String aAudioChannels)
        {
            SyncSetAudioChannelsAvOpenhomeOrgExakt3 sync = new SyncSetAudioChannelsAvOpenhomeOrgExakt3(this);
            BeginSetAudioChannels(aAudioChannels, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetAudioChannels().</remarks>
        /// <param name="aAudioChannels"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetAudioChannels(String aAudioChannels, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetAudioChannels, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetAudioChannels.InputParameter(inIndex++), aAudioChannels));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetAudioChannels(IntPtr aAsyncHandle)
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
        /// <param name="aVersion"></param>
        public void SyncVersion(out String aVersion)
        {
            SyncVersionAvOpenhomeOrgExakt3 sync = new SyncVersionAvOpenhomeOrgExakt3(this);
            BeginVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndVersion(IntPtr aAsyncHandle, out String aVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the DeviceList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt3 instance will not overlap.</remarks>
        /// <param name="aDeviceListChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDeviceListChanged(System.Action aDeviceListChanged)
        {
            lock (iPropertyLock)
            {
                iDeviceListChanged = aDeviceListChanged;
            }
        }

        private void DeviceListPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDeviceListChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ConnectionStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt3 instance will not overlap.</remarks>
        /// <param name="aConnectionStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyConnectionStatusChanged(System.Action aConnectionStatusChanged)
        {
            lock (iPropertyLock)
            {
                iConnectionStatusChanged = aConnectionStatusChanged;
            }
        }

        private void ConnectionStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iConnectionStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ChannelMap state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt3 instance will not overlap.</remarks>
        /// <param name="aChannelMapChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyChannelMapChanged(System.Action aChannelMapChanged)
        {
            lock (iPropertyLock)
            {
                iChannelMapChanged = aChannelMapChanged;
            }
        }

        private void ChannelMapPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iChannelMapChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the AudioChannels state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt3 instance will not overlap.</remarks>
        /// <param name="aAudioChannelsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAudioChannelsChanged(System.Action aAudioChannelsChanged)
        {
            lock (iPropertyLock)
            {
                iAudioChannelsChanged = aAudioChannelsChanged;
            }
        }

        private void AudioChannelsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAudioChannelsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Version state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt3 instance will not overlap.</remarks>
        /// <param name="aVersionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVersionChanged(System.Action aVersionChanged)
        {
            lock (iPropertyLock)
            {
                iVersionChanged = aVersionChanged;
            }
        }

        private void VersionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVersionChanged);
            }
        }

        /// <summary>
        /// Query the value of the DeviceList property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DeviceList property</returns>
        public String PropertyDeviceList()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDeviceList.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ConnectionStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ConnectionStatus property</returns>
        public String PropertyConnectionStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iConnectionStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ChannelMap property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ChannelMap property</returns>
        public String PropertyChannelMap()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iChannelMap.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the AudioChannels property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the AudioChannels property</returns>
        public String PropertyAudioChannels()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iAudioChannels.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Version property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Version property</returns>
        public String PropertyVersion()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iVersion.Value();
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
            iActionDeviceList.Dispose();
            iActionDeviceSettings.Dispose();
            iActionConnectionStatus.Dispose();
            iActionSet.Dispose();
            iActionReprogram.Dispose();
            iActionReprogramFallback.Dispose();
            iActionChannelMap.Dispose();
            iActionSetChannelMap.Dispose();
            iActionAudioChannels.Dispose();
            iActionSetAudioChannels.Dispose();
            iActionVersion.Dispose();
            iDeviceList.Dispose();
            iConnectionStatus.Dispose();
            iChannelMap.Dispose();
            iAudioChannels.Dispose();
            iVersion.Dispose();
        }
    }
}

