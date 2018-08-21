using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkExakt21 : ICpProxy, IDisposable
    {
        void SyncGetDeviceList(out String aList);
        void BeginGetDeviceList(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDeviceList(IntPtr aAsyncHandle, out String aList);
        void SyncGetDeviceSettings(String aDeviceId, out String aSettings);
        void BeginGetDeviceSettings(String aDeviceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetDeviceSettings(IntPtr aAsyncHandle, out String aSettings);
        void SyncGetSettingsAvailable(out bool aSettingsAvailable);
        void BeginGetSettingsAvailable(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSettingsAvailable(IntPtr aAsyncHandle, out bool aSettingsAvailable);
        void SyncGetSettingsChangedSeq(out String aSettingsChangedSeq);
        void BeginGetSettingsChangedSeq(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSettingsChangedSeq(IntPtr aAsyncHandle, out String aSettingsChangedSeq);
        void SyncUpdate(String aManifest);
        void BeginUpdate(String aManifest, CpProxy.CallbackAsyncComplete aCallback);
        void EndUpdate(IntPtr aAsyncHandle);
        void SyncUpdateBlocking(String aManifest);
        void BeginUpdateBlocking(String aManifest, CpProxy.CallbackAsyncComplete aCallback);
        void EndUpdateBlocking(IntPtr aAsyncHandle);
        void SyncGetUpdateStatus(out String aUpdateStatus);
        void BeginGetUpdateStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpdateStatus(IntPtr aAsyncHandle, out String aUpdateStatus);
        void SyncGetChannelMap(out String aChannelMap);
        void BeginGetChannelMap(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetChannelMap(IntPtr aAsyncHandle, out String aChannelMap);
        void SyncGetAudioChannels(out String aAudioChannels);
        void BeginGetAudioChannels(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetAudioChannels(IntPtr aAsyncHandle, out String aAudioChannels);
        void SyncGetVersion(out uint aVersion);
        void BeginGetVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetVersion(IntPtr aAsyncHandle, out uint aVersion);
        void SyncApplyUpdate();
        void BeginApplyUpdate(CpProxy.CallbackAsyncComplete aCallback);
        void EndApplyUpdate(IntPtr aAsyncHandle);
        void SyncPlayTestTrack(String aChannelMap, String aUri, String aMetadata);
        void BeginPlayTestTrack(String aChannelMap, String aUri, String aMetadata, CpProxy.CallbackAsyncComplete aCallback);
        void EndPlayTestTrack(IntPtr aAsyncHandle);
        void SyncClearTestTrack();
        void BeginClearTestTrack(CpProxy.CallbackAsyncComplete aCallback);
        void EndClearTestTrack(IntPtr aAsyncHandle);
        void SyncGetIntegratedDevicesPresent(out bool aIntegratedDevicesPresent);
        void BeginGetIntegratedDevicesPresent(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetIntegratedDevicesPresent(IntPtr aAsyncHandle, out bool aIntegratedDevicesPresent);
        void SyncBootIntegratedDevicesToFallback();
        void BeginBootIntegratedDevicesToFallback(CpProxy.CallbackAsyncComplete aCallback);
        void EndBootIntegratedDevicesToFallback(IntPtr aAsyncHandle);
        void SetPropertyDeviceListChanged(System.Action aDeviceListChanged);
        String PropertyDeviceList();
        void SetPropertySettingsAvailableChanged(System.Action aSettingsAvailableChanged);
        bool PropertySettingsAvailable();
        void SetPropertySettingsChangedSeqChanged(System.Action aSettingsChangedSeqChanged);
        String PropertySettingsChangedSeq();
        void SetPropertyUpdateStatusChanged(System.Action aUpdateStatusChanged);
        String PropertyUpdateStatus();
        void SetPropertyChannelMapChanged(System.Action aChannelMapChanged);
        String PropertyChannelMap();
        void SetPropertyAudioChannelsChanged(System.Action aAudioChannelsChanged);
        String PropertyAudioChannels();
        void SetPropertyVersionChanged(System.Action aVersionChanged);
        uint PropertyVersion();
        void SetPropertyIntegratedDevicesPresentChanged(System.Action aIntegratedDevicesPresentChanged);
        bool PropertyIntegratedDevicesPresent();
    }

    internal class SyncGetDeviceListLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iList;

        public SyncGetDeviceListLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String List()
        {
            return iList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDeviceList(aAsyncHandle, out iList);
        }
    };

    internal class SyncGetDeviceSettingsLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iSettings;

        public SyncGetDeviceSettingsLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String Settings()
        {
            return iSettings;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetDeviceSettings(aAsyncHandle, out iSettings);
        }
    };

    internal class SyncGetSettingsAvailableLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private bool iSettingsAvailable;

        public SyncGetSettingsAvailableLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public bool SettingsAvailable()
        {
            return iSettingsAvailable;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSettingsAvailable(aAsyncHandle, out iSettingsAvailable);
        }
    };

    internal class SyncGetSettingsChangedSeqLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iSettingsChangedSeq;

        public SyncGetSettingsChangedSeqLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String SettingsChangedSeq()
        {
            return iSettingsChangedSeq;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSettingsChangedSeq(aAsyncHandle, out iSettingsChangedSeq);
        }
    };

    internal class SyncUpdateLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUpdate(aAsyncHandle);
        }
    };

    internal class SyncUpdateBlockingLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncUpdateBlockingLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUpdateBlocking(aAsyncHandle);
        }
    };

    internal class SyncGetUpdateStatusLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iUpdateStatus;

        public SyncGetUpdateStatusLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String UpdateStatus()
        {
            return iUpdateStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpdateStatus(aAsyncHandle, out iUpdateStatus);
        }
    };

    internal class SyncGetChannelMapLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iChannelMap;

        public SyncGetChannelMapLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String ChannelMap()
        {
            return iChannelMap;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetChannelMap(aAsyncHandle, out iChannelMap);
        }
    };

    internal class SyncGetAudioChannelsLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private String iAudioChannels;

        public SyncGetAudioChannelsLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public String AudioChannels()
        {
            return iAudioChannels;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetAudioChannels(aAsyncHandle, out iAudioChannels);
        }
    };

    internal class SyncGetVersionLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private uint iVersion;

        public SyncGetVersionLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public uint Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetVersion(aAsyncHandle, out iVersion);
        }
    };

    internal class SyncApplyUpdateLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncApplyUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndApplyUpdate(aAsyncHandle);
        }
    };

    internal class SyncPlayTestTrackLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncPlayTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlayTestTrack(aAsyncHandle);
        }
    };

    internal class SyncClearTestTrackLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncClearTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearTestTrack(aAsyncHandle);
        }
    };

    internal class SyncGetIntegratedDevicesPresentLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;
        private bool iIntegratedDevicesPresent;

        public SyncGetIntegratedDevicesPresentLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        public bool IntegratedDevicesPresent()
        {
            return iIntegratedDevicesPresent;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetIntegratedDevicesPresent(aAsyncHandle, out iIntegratedDevicesPresent);
        }
    };

    internal class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt21 iService;

        public SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(CpProxyLinnCoUkExakt21 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBootIntegratedDevicesToFallback(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Exakt2:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkExakt21 : CpProxy, IDisposable, ICpProxyLinnCoUkExakt21
    {
        private OpenHome.Net.Core.Action iActionGetDeviceList;
        private OpenHome.Net.Core.Action iActionGetDeviceSettings;
        private OpenHome.Net.Core.Action iActionGetSettingsAvailable;
        private OpenHome.Net.Core.Action iActionGetSettingsChangedSeq;
        private OpenHome.Net.Core.Action iActionUpdate;
        private OpenHome.Net.Core.Action iActionUpdateBlocking;
        private OpenHome.Net.Core.Action iActionGetUpdateStatus;
        private OpenHome.Net.Core.Action iActionGetChannelMap;
        private OpenHome.Net.Core.Action iActionGetAudioChannels;
        private OpenHome.Net.Core.Action iActionGetVersion;
        private OpenHome.Net.Core.Action iActionApplyUpdate;
        private OpenHome.Net.Core.Action iActionPlayTestTrack;
        private OpenHome.Net.Core.Action iActionClearTestTrack;
        private OpenHome.Net.Core.Action iActionGetIntegratedDevicesPresent;
        private OpenHome.Net.Core.Action iActionBootIntegratedDevicesToFallback;
        private PropertyString iDeviceList;
        private PropertyBool iSettingsAvailable;
        private PropertyString iSettingsChangedSeq;
        private PropertyString iUpdateStatus;
        private PropertyString iChannelMap;
        private PropertyString iAudioChannels;
        private PropertyUint iVersion;
        private PropertyBool iIntegratedDevicesPresent;
        private System.Action iDeviceListChanged;
        private System.Action iSettingsAvailableChanged;
        private System.Action iSettingsChangedSeqChanged;
        private System.Action iUpdateStatusChanged;
        private System.Action iChannelMapChanged;
        private System.Action iAudioChannelsChanged;
        private System.Action iVersionChanged;
        private System.Action iIntegratedDevicesPresentChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkExakt21(ICpDevice aDevice)
            : base("linn-co-uk", "Exakt2", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetDeviceList = new OpenHome.Net.Core.Action("GetDeviceList");
            param = new ParameterString("List", allowedValues);
            iActionGetDeviceList.AddOutputParameter(param);

            iActionGetDeviceSettings = new OpenHome.Net.Core.Action("GetDeviceSettings");
            param = new ParameterString("DeviceId", allowedValues);
            iActionGetDeviceSettings.AddInputParameter(param);
            param = new ParameterString("Settings", allowedValues);
            iActionGetDeviceSettings.AddOutputParameter(param);

            iActionGetSettingsAvailable = new OpenHome.Net.Core.Action("GetSettingsAvailable");
            param = new ParameterBool("SettingsAvailable");
            iActionGetSettingsAvailable.AddOutputParameter(param);

            iActionGetSettingsChangedSeq = new OpenHome.Net.Core.Action("GetSettingsChangedSeq");
            param = new ParameterString("SettingsChangedSeq", allowedValues);
            iActionGetSettingsChangedSeq.AddOutputParameter(param);

            iActionUpdate = new OpenHome.Net.Core.Action("Update");
            param = new ParameterString("Manifest", allowedValues);
            iActionUpdate.AddInputParameter(param);

            iActionUpdateBlocking = new OpenHome.Net.Core.Action("UpdateBlocking");
            param = new ParameterString("Manifest", allowedValues);
            iActionUpdateBlocking.AddInputParameter(param);

            iActionGetUpdateStatus = new OpenHome.Net.Core.Action("GetUpdateStatus");
            param = new ParameterString("UpdateStatus", allowedValues);
            iActionGetUpdateStatus.AddOutputParameter(param);

            iActionGetChannelMap = new OpenHome.Net.Core.Action("GetChannelMap");
            param = new ParameterString("ChannelMap", allowedValues);
            iActionGetChannelMap.AddOutputParameter(param);

            iActionGetAudioChannels = new OpenHome.Net.Core.Action("GetAudioChannels");
            param = new ParameterString("AudioChannels", allowedValues);
            iActionGetAudioChannels.AddOutputParameter(param);

            iActionGetVersion = new OpenHome.Net.Core.Action("GetVersion");
            param = new ParameterUint("Version");
            iActionGetVersion.AddOutputParameter(param);

            iActionApplyUpdate = new OpenHome.Net.Core.Action("ApplyUpdate");

            iActionPlayTestTrack = new OpenHome.Net.Core.Action("PlayTestTrack");
            param = new ParameterString("ChannelMap", allowedValues);
            iActionPlayTestTrack.AddInputParameter(param);
            param = new ParameterString("Uri", allowedValues);
            iActionPlayTestTrack.AddInputParameter(param);
            param = new ParameterString("Metadata", allowedValues);
            iActionPlayTestTrack.AddInputParameter(param);

            iActionClearTestTrack = new OpenHome.Net.Core.Action("ClearTestTrack");

            iActionGetIntegratedDevicesPresent = new OpenHome.Net.Core.Action("GetIntegratedDevicesPresent");
            param = new ParameterBool("IntegratedDevicesPresent");
            iActionGetIntegratedDevicesPresent.AddOutputParameter(param);

            iActionBootIntegratedDevicesToFallback = new OpenHome.Net.Core.Action("BootIntegratedDevicesToFallback");

            iDeviceList = new PropertyString("DeviceList", DeviceListPropertyChanged);
            AddProperty(iDeviceList);
            iSettingsAvailable = new PropertyBool("SettingsAvailable", SettingsAvailablePropertyChanged);
            AddProperty(iSettingsAvailable);
            iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", SettingsChangedSeqPropertyChanged);
            AddProperty(iSettingsChangedSeq);
            iUpdateStatus = new PropertyString("UpdateStatus", UpdateStatusPropertyChanged);
            AddProperty(iUpdateStatus);
            iChannelMap = new PropertyString("ChannelMap", ChannelMapPropertyChanged);
            AddProperty(iChannelMap);
            iAudioChannels = new PropertyString("AudioChannels", AudioChannelsPropertyChanged);
            AddProperty(iAudioChannels);
            iVersion = new PropertyUint("Version", VersionPropertyChanged);
            AddProperty(iVersion);
            iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", IntegratedDevicesPresentPropertyChanged);
            AddProperty(iIntegratedDevicesPresent);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aList"></param>
        public void SyncGetDeviceList(out String aList)
        {
            SyncGetDeviceListLinnCoUkExakt21 sync = new SyncGetDeviceListLinnCoUkExakt21(this);
            BeginGetDeviceList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aList = sync.List();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDeviceList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDeviceList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDeviceList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDeviceList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aList"></param>
        public void EndGetDeviceList(IntPtr aAsyncHandle, out String aList)
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
        public void SyncGetDeviceSettings(String aDeviceId, out String aSettings)
        {
            SyncGetDeviceSettingsLinnCoUkExakt21 sync = new SyncGetDeviceSettingsLinnCoUkExakt21(this);
            BeginGetDeviceSettings(aDeviceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettings = sync.Settings();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetDeviceSettings().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetDeviceSettings(String aDeviceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetDeviceSettings, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetDeviceSettings.InputParameter(inIndex++), aDeviceId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetDeviceSettings.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettings"></param>
        public void EndGetDeviceSettings(IntPtr aAsyncHandle, out String aSettings)
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
        /// <param name="aSettingsAvailable"></param>
        public void SyncGetSettingsAvailable(out bool aSettingsAvailable)
        {
            SyncGetSettingsAvailableLinnCoUkExakt21 sync = new SyncGetSettingsAvailableLinnCoUkExakt21(this);
            BeginGetSettingsAvailable(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettingsAvailable = sync.SettingsAvailable();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSettingsAvailable().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSettingsAvailable(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSettingsAvailable, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetSettingsAvailable.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettingsAvailable"></param>
        public void EndGetSettingsAvailable(IntPtr aAsyncHandle, out bool aSettingsAvailable)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSettingsAvailable = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSettingsChangedSeq"></param>
        public void SyncGetSettingsChangedSeq(out String aSettingsChangedSeq)
        {
            SyncGetSettingsChangedSeqLinnCoUkExakt21 sync = new SyncGetSettingsChangedSeqLinnCoUkExakt21(this);
            BeginGetSettingsChangedSeq(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettingsChangedSeq = sync.SettingsChangedSeq();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSettingsChangedSeq().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSettingsChangedSeq(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSettingsChangedSeq, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSettingsChangedSeq.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettingsChangedSeq"></param>
        public void EndGetSettingsChangedSeq(IntPtr aAsyncHandle, out String aSettingsChangedSeq)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSettingsChangedSeq = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aManifest"></param>
        public void SyncUpdate(String aManifest)
        {
            SyncUpdateLinnCoUkExakt21 sync = new SyncUpdateLinnCoUkExakt21(this);
            BeginUpdate(aManifest, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUpdate().</remarks>
        /// <param name="aManifest"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUpdate(String aManifest, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUpdate, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionUpdate.InputParameter(inIndex++), aManifest));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndUpdate(IntPtr aAsyncHandle)
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
        /// <param name="aManifest"></param>
        public void SyncUpdateBlocking(String aManifest)
        {
            SyncUpdateBlockingLinnCoUkExakt21 sync = new SyncUpdateBlockingLinnCoUkExakt21(this);
            BeginUpdateBlocking(aManifest, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUpdateBlocking().</remarks>
        /// <param name="aManifest"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUpdateBlocking(String aManifest, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUpdateBlocking, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionUpdateBlocking.InputParameter(inIndex++), aManifest));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndUpdateBlocking(IntPtr aAsyncHandle)
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
        /// <param name="aUpdateStatus"></param>
        public void SyncGetUpdateStatus(out String aUpdateStatus)
        {
            SyncGetUpdateStatusLinnCoUkExakt21 sync = new SyncGetUpdateStatusLinnCoUkExakt21(this);
            BeginGetUpdateStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUpdateStatus = sync.UpdateStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUpdateStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUpdateStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUpdateStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUpdateStatus"></param>
        public void EndGetUpdateStatus(IntPtr aAsyncHandle, out String aUpdateStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUpdateStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannelMap"></param>
        public void SyncGetChannelMap(out String aChannelMap)
        {
            SyncGetChannelMapLinnCoUkExakt21 sync = new SyncGetChannelMapLinnCoUkExakt21(this);
            BeginGetChannelMap(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aChannelMap = sync.ChannelMap();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetChannelMap().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetChannelMap(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetChannelMap, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetChannelMap.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aChannelMap"></param>
        public void EndGetChannelMap(IntPtr aAsyncHandle, out String aChannelMap)
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
        /// <param name="aAudioChannels"></param>
        public void SyncGetAudioChannels(out String aAudioChannels)
        {
            SyncGetAudioChannelsLinnCoUkExakt21 sync = new SyncGetAudioChannelsLinnCoUkExakt21(this);
            BeginGetAudioChannels(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aAudioChannels = sync.AudioChannels();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetAudioChannels().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetAudioChannels(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetAudioChannels, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetAudioChannels.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aAudioChannels"></param>
        public void EndGetAudioChannels(IntPtr aAsyncHandle, out String aAudioChannels)
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
        /// <param name="aVersion"></param>
        public void SyncGetVersion(out uint aVersion)
        {
            SyncGetVersionLinnCoUkExakt21 sync = new SyncGetVersionLinnCoUkExakt21(this);
            BeginGetVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndGetVersion(IntPtr aAsyncHandle, out uint aVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncApplyUpdate()
        {
            SyncApplyUpdateLinnCoUkExakt21 sync = new SyncApplyUpdateLinnCoUkExakt21(this);
            BeginApplyUpdate(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndApplyUpdate().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginApplyUpdate(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionApplyUpdate, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndApplyUpdate(IntPtr aAsyncHandle)
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
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        public void SyncPlayTestTrack(String aChannelMap, String aUri, String aMetadata)
        {
            SyncPlayTestTrackLinnCoUkExakt21 sync = new SyncPlayTestTrackLinnCoUkExakt21(this);
            BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPlayTestTrack().</remarks>
        /// <param name="aChannelMap"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPlayTestTrack(String aChannelMap, String aUri, String aMetadata, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPlayTestTrack, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionPlayTestTrack.InputParameter(inIndex++), aChannelMap));
            invocation.AddInput(new ArgumentString((ParameterString)iActionPlayTestTrack.InputParameter(inIndex++), aUri));
            invocation.AddInput(new ArgumentString((ParameterString)iActionPlayTestTrack.InputParameter(inIndex++), aMetadata));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPlayTestTrack(IntPtr aAsyncHandle)
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
        public void SyncClearTestTrack()
        {
            SyncClearTestTrackLinnCoUkExakt21 sync = new SyncClearTestTrackLinnCoUkExakt21(this);
            BeginClearTestTrack(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearTestTrack().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearTestTrack(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearTestTrack, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearTestTrack(IntPtr aAsyncHandle)
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
        /// <param name="aIntegratedDevicesPresent"></param>
        public void SyncGetIntegratedDevicesPresent(out bool aIntegratedDevicesPresent)
        {
            SyncGetIntegratedDevicesPresentLinnCoUkExakt21 sync = new SyncGetIntegratedDevicesPresentLinnCoUkExakt21(this);
            BeginGetIntegratedDevicesPresent(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIntegratedDevicesPresent = sync.IntegratedDevicesPresent();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetIntegratedDevicesPresent().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetIntegratedDevicesPresent(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetIntegratedDevicesPresent, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetIntegratedDevicesPresent.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIntegratedDevicesPresent"></param>
        public void EndGetIntegratedDevicesPresent(IntPtr aAsyncHandle, out bool aIntegratedDevicesPresent)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIntegratedDevicesPresent = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncBootIntegratedDevicesToFallback()
        {
            SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 sync = new SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(this);
            BeginBootIntegratedDevicesToFallback(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBootIntegratedDevicesToFallback().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBootIntegratedDevicesToFallback(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBootIntegratedDevicesToFallback, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndBootIntegratedDevicesToFallback(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the DeviceList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the SettingsAvailable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
        /// <param name="aSettingsAvailableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySettingsAvailableChanged(System.Action aSettingsAvailableChanged)
        {
            lock (iPropertyLock)
            {
                iSettingsAvailableChanged = aSettingsAvailableChanged;
            }
        }

        private void SettingsAvailablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSettingsAvailableChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the SettingsChangedSeq state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
        /// <param name="aSettingsChangedSeqChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySettingsChangedSeqChanged(System.Action aSettingsChangedSeqChanged)
        {
            lock (iPropertyLock)
            {
                iSettingsChangedSeqChanged = aSettingsChangedSeqChanged;
            }
        }

        private void SettingsChangedSeqPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSettingsChangedSeqChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
        /// <param name="aUpdateStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateStatusChanged(System.Action aUpdateStatusChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateStatusChanged = aUpdateStatusChanged;
            }
        }

        private void UpdateStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ChannelMap state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the IntegratedDevicesPresent state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt21 instance will not overlap.</remarks>
        /// <param name="aIntegratedDevicesPresentChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIntegratedDevicesPresentChanged(System.Action aIntegratedDevicesPresentChanged)
        {
            lock (iPropertyLock)
            {
                iIntegratedDevicesPresentChanged = aIntegratedDevicesPresentChanged;
            }
        }

        private void IntegratedDevicesPresentPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIntegratedDevicesPresentChanged);
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
        /// Query the value of the SettingsAvailable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SettingsAvailable property</returns>
        public bool PropertySettingsAvailable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iSettingsAvailable.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the SettingsChangedSeq property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SettingsChangedSeq property</returns>
        public String PropertySettingsChangedSeq()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSettingsChangedSeq.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateStatus property</returns>
        public String PropertyUpdateStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUpdateStatus.Value();
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
        public uint PropertyVersion()
        {
            PropertyReadLock();
            uint val;
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
        /// Query the value of the IntegratedDevicesPresent property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the IntegratedDevicesPresent property</returns>
        public bool PropertyIntegratedDevicesPresent()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iIntegratedDevicesPresent.Value();
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
            iActionGetDeviceList.Dispose();
            iActionGetDeviceSettings.Dispose();
            iActionGetSettingsAvailable.Dispose();
            iActionGetSettingsChangedSeq.Dispose();
            iActionUpdate.Dispose();
            iActionUpdateBlocking.Dispose();
            iActionGetUpdateStatus.Dispose();
            iActionGetChannelMap.Dispose();
            iActionGetAudioChannels.Dispose();
            iActionGetVersion.Dispose();
            iActionApplyUpdate.Dispose();
            iActionPlayTestTrack.Dispose();
            iActionClearTestTrack.Dispose();
            iActionGetIntegratedDevicesPresent.Dispose();
            iActionBootIntegratedDevicesToFallback.Dispose();
            iDeviceList.Dispose();
            iSettingsAvailable.Dispose();
            iSettingsChangedSeq.Dispose();
            iUpdateStatus.Dispose();
            iChannelMap.Dispose();
            iAudioChannels.Dispose();
            iVersion.Dispose();
            iIntegratedDevicesPresent.Dispose();
        }
    }
}

