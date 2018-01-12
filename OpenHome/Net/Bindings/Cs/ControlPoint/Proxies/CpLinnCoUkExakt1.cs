using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkExakt1 : ICpProxy, IDisposable
    {
        void SyncDeviceList(out String aList);
        void BeginDeviceList(CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceList(IntPtr aAsyncHandle, out String aList);
        void SyncDeviceSettings(String aDeviceId, out String aSettings);
        void BeginDeviceSettings(String aDeviceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceSettings(IntPtr aAsyncHandle, out String aSettings);
        void SyncSettingsAvailable(out bool aSettingsAvailable);
        void BeginSettingsAvailable(CpProxy.CallbackAsyncComplete aCallback);
        void EndSettingsAvailable(IntPtr aAsyncHandle, out bool aSettingsAvailable);
        void SyncSettingsChangedCount(out uint aSettingsChangedCount);
        void BeginSettingsChangedCount(CpProxy.CallbackAsyncComplete aCallback);
        void EndSettingsChangedCount(IntPtr aAsyncHandle, out uint aSettingsChangedCount);
        void SyncUpdate(String aManifestUri);
        void BeginUpdate(String aManifestUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndUpdate(IntPtr aAsyncHandle);
        void SyncUpdateBlocking(String aManifestUri);
        void BeginUpdateBlocking(String aManifestUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndUpdateBlocking(IntPtr aAsyncHandle);
        void SyncGetUpdateStatus(out String aUpdateStatus, out uint aUpdateTotalPercentage, out uint aUpdateTotalJobs, out uint aUpdateJob, out uint aUpdateJobPercentage, out String aUpdateJobDescription);
        void BeginGetUpdateStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpdateStatus(IntPtr aAsyncHandle, out String aUpdateStatus, out uint aUpdateTotalPercentage, out uint aUpdateTotalJobs, out uint aUpdateJob, out uint aUpdateJobPercentage, out String aUpdateJobDescription);
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
        void SyncVersion(out uint aVersion);
        void BeginVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndVersion(IntPtr aAsyncHandle, out uint aVersion);
        void SetPropertyDeviceListChanged(System.Action aDeviceListChanged);
        String PropertyDeviceList();
        void SetPropertySettingsAvailableChanged(System.Action aSettingsAvailableChanged);
        bool PropertySettingsAvailable();
        void SetPropertySettingsChangedCountChanged(System.Action aSettingsChangedCountChanged);
        uint PropertySettingsChangedCount();
        void SetPropertyUpdateStatusChanged(System.Action aUpdateStatusChanged);
        String PropertyUpdateStatus();
        void SetPropertyUpdateTotalPercentageChanged(System.Action aUpdateTotalPercentageChanged);
        uint PropertyUpdateTotalPercentage();
        void SetPropertyUpdateTotalJobsChanged(System.Action aUpdateTotalJobsChanged);
        uint PropertyUpdateTotalJobs();
        void SetPropertyUpdateJobChanged(System.Action aUpdateJobChanged);
        uint PropertyUpdateJob();
        void SetPropertyUpdateJobPercentageChanged(System.Action aUpdateJobPercentageChanged);
        uint PropertyUpdateJobPercentage();
        void SetPropertyUpdateJobDescriptionChanged(System.Action aUpdateJobDescriptionChanged);
        String PropertyUpdateJobDescription();
        void SetPropertyChannelMapChanged(System.Action aChannelMapChanged);
        String PropertyChannelMap();
        void SetPropertyAudioChannelsChanged(System.Action aAudioChannelsChanged);
        String PropertyAudioChannels();
        void SetPropertyVersionChanged(System.Action aVersionChanged);
        uint PropertyVersion();
    }

    internal class SyncDeviceListLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private String iList;

        public SyncDeviceListLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
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

    internal class SyncDeviceSettingsLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private String iSettings;

        public SyncDeviceSettingsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
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

    internal class SyncSettingsAvailableLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private bool iSettingsAvailable;

        public SyncSettingsAvailableLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        public bool SettingsAvailable()
        {
            return iSettingsAvailable;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSettingsAvailable(aAsyncHandle, out iSettingsAvailable);
        }
    };

    internal class SyncSettingsChangedCountLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private uint iSettingsChangedCount;

        public SyncSettingsChangedCountLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        public uint SettingsChangedCount()
        {
            return iSettingsChangedCount;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSettingsChangedCount(aAsyncHandle, out iSettingsChangedCount);
        }
    };

    internal class SyncUpdateLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;

        public SyncUpdateLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUpdate(aAsyncHandle);
        }
    };

    internal class SyncUpdateBlockingLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;

        public SyncUpdateBlockingLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUpdateBlocking(aAsyncHandle);
        }
    };

    internal class SyncGetUpdateStatusLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private String iUpdateStatus;
        private uint iUpdateTotalPercentage;
        private uint iUpdateTotalJobs;
        private uint iUpdateJob;
        private uint iUpdateJobPercentage;
        private String iUpdateJobDescription;

        public SyncGetUpdateStatusLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        public String UpdateStatus()
        {
            return iUpdateStatus;
        }
        public uint UpdateTotalPercentage()
        {
            return iUpdateTotalPercentage;
        }
        public uint UpdateTotalJobs()
        {
            return iUpdateTotalJobs;
        }
        public uint UpdateJob()
        {
            return iUpdateJob;
        }
        public uint UpdateJobPercentage()
        {
            return iUpdateJobPercentage;
        }
        public String UpdateJobDescription()
        {
            return iUpdateJobDescription;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpdateStatus(aAsyncHandle, out iUpdateStatus, out iUpdateTotalPercentage, out iUpdateTotalJobs, out iUpdateJob, out iUpdateJobPercentage, out iUpdateJobDescription);
        }
    };

    internal class SyncChannelMapLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private String iChannelMap;

        public SyncChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
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

    internal class SyncSetChannelMapLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;

        public SyncSetChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetChannelMap(aAsyncHandle);
        }
    };

    internal class SyncAudioChannelsLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private String iAudioChannels;

        public SyncAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
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

    internal class SyncSetAudioChannelsLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;

        public SyncSetAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetAudioChannels(aAsyncHandle);
        }
    };

    internal class SyncVersionLinnCoUkExakt1 : SyncProxyAction
    {
        private CpProxyLinnCoUkExakt1 iService;
        private uint iVersion;

        public SyncVersionLinnCoUkExakt1(CpProxyLinnCoUkExakt1 aProxy)
        {
            iService = aProxy;
        }
        public uint Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVersion(aAsyncHandle, out iVersion);
        }
    };

    /// <summary>
    /// Proxy for the linn.co.uk:Exakt:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkExakt1 : CpProxy, IDisposable, ICpProxyLinnCoUkExakt1
    {
        private OpenHome.Net.Core.Action iActionDeviceList;
        private OpenHome.Net.Core.Action iActionDeviceSettings;
        private OpenHome.Net.Core.Action iActionSettingsAvailable;
        private OpenHome.Net.Core.Action iActionSettingsChangedCount;
        private OpenHome.Net.Core.Action iActionUpdate;
        private OpenHome.Net.Core.Action iActionUpdateBlocking;
        private OpenHome.Net.Core.Action iActionGetUpdateStatus;
        private OpenHome.Net.Core.Action iActionChannelMap;
        private OpenHome.Net.Core.Action iActionSetChannelMap;
        private OpenHome.Net.Core.Action iActionAudioChannels;
        private OpenHome.Net.Core.Action iActionSetAudioChannels;
        private OpenHome.Net.Core.Action iActionVersion;
        private PropertyString iDeviceList;
        private PropertyBool iSettingsAvailable;
        private PropertyUint iSettingsChangedCount;
        private PropertyString iUpdateStatus;
        private PropertyUint iUpdateTotalPercentage;
        private PropertyUint iUpdateTotalJobs;
        private PropertyUint iUpdateJob;
        private PropertyUint iUpdateJobPercentage;
        private PropertyString iUpdateJobDescription;
        private PropertyString iChannelMap;
        private PropertyString iAudioChannels;
        private PropertyUint iVersion;
        private System.Action iDeviceListChanged;
        private System.Action iSettingsAvailableChanged;
        private System.Action iSettingsChangedCountChanged;
        private System.Action iUpdateStatusChanged;
        private System.Action iUpdateTotalPercentageChanged;
        private System.Action iUpdateTotalJobsChanged;
        private System.Action iUpdateJobChanged;
        private System.Action iUpdateJobPercentageChanged;
        private System.Action iUpdateJobDescriptionChanged;
        private System.Action iChannelMapChanged;
        private System.Action iAudioChannelsChanged;
        private System.Action iVersionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkExakt1(ICpDevice aDevice)
            : base("linn-co-uk", "Exakt", 1, aDevice)
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

            iActionSettingsAvailable = new OpenHome.Net.Core.Action("SettingsAvailable");
            param = new ParameterBool("SettingsAvailable");
            iActionSettingsAvailable.AddOutputParameter(param);

            iActionSettingsChangedCount = new OpenHome.Net.Core.Action("SettingsChangedCount");
            param = new ParameterUint("SettingsChangedCount");
            iActionSettingsChangedCount.AddOutputParameter(param);

            iActionUpdate = new OpenHome.Net.Core.Action("Update");
            param = new ParameterString("ManifestUri", allowedValues);
            iActionUpdate.AddInputParameter(param);

            iActionUpdateBlocking = new OpenHome.Net.Core.Action("UpdateBlocking");
            param = new ParameterString("ManifestUri", allowedValues);
            iActionUpdateBlocking.AddInputParameter(param);

            iActionGetUpdateStatus = new OpenHome.Net.Core.Action("GetUpdateStatus");
            param = new ParameterString("UpdateStatus", allowedValues);
            iActionGetUpdateStatus.AddOutputParameter(param);
            param = new ParameterUint("UpdateTotalPercentage");
            iActionGetUpdateStatus.AddOutputParameter(param);
            param = new ParameterUint("UpdateTotalJobs");
            iActionGetUpdateStatus.AddOutputParameter(param);
            param = new ParameterUint("UpdateJob");
            iActionGetUpdateStatus.AddOutputParameter(param);
            param = new ParameterUint("UpdateJobPercentage");
            iActionGetUpdateStatus.AddOutputParameter(param);
            param = new ParameterString("UpdateJobDescription", allowedValues);
            iActionGetUpdateStatus.AddOutputParameter(param);

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
            param = new ParameterUint("Version");
            iActionVersion.AddOutputParameter(param);

            iDeviceList = new PropertyString("DeviceList", DeviceListPropertyChanged);
            AddProperty(iDeviceList);
            iSettingsAvailable = new PropertyBool("SettingsAvailable", SettingsAvailablePropertyChanged);
            AddProperty(iSettingsAvailable);
            iSettingsChangedCount = new PropertyUint("SettingsChangedCount", SettingsChangedCountPropertyChanged);
            AddProperty(iSettingsChangedCount);
            iUpdateStatus = new PropertyString("UpdateStatus", UpdateStatusPropertyChanged);
            AddProperty(iUpdateStatus);
            iUpdateTotalPercentage = new PropertyUint("UpdateTotalPercentage", UpdateTotalPercentagePropertyChanged);
            AddProperty(iUpdateTotalPercentage);
            iUpdateTotalJobs = new PropertyUint("UpdateTotalJobs", UpdateTotalJobsPropertyChanged);
            AddProperty(iUpdateTotalJobs);
            iUpdateJob = new PropertyUint("UpdateJob", UpdateJobPropertyChanged);
            AddProperty(iUpdateJob);
            iUpdateJobPercentage = new PropertyUint("UpdateJobPercentage", UpdateJobPercentagePropertyChanged);
            AddProperty(iUpdateJobPercentage);
            iUpdateJobDescription = new PropertyString("UpdateJobDescription", UpdateJobDescriptionPropertyChanged);
            AddProperty(iUpdateJobDescription);
            iChannelMap = new PropertyString("ChannelMap", ChannelMapPropertyChanged);
            AddProperty(iChannelMap);
            iAudioChannels = new PropertyString("AudioChannels", AudioChannelsPropertyChanged);
            AddProperty(iAudioChannels);
            iVersion = new PropertyUint("Version", VersionPropertyChanged);
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
            SyncDeviceListLinnCoUkExakt1 sync = new SyncDeviceListLinnCoUkExakt1(this);
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
            SyncDeviceSettingsLinnCoUkExakt1 sync = new SyncDeviceSettingsLinnCoUkExakt1(this);
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
        /// <param name="aSettingsAvailable"></param>
        public void SyncSettingsAvailable(out bool aSettingsAvailable)
        {
            SyncSettingsAvailableLinnCoUkExakt1 sync = new SyncSettingsAvailableLinnCoUkExakt1(this);
            BeginSettingsAvailable(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettingsAvailable = sync.SettingsAvailable();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSettingsAvailable().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSettingsAvailable(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSettingsAvailable, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionSettingsAvailable.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettingsAvailable"></param>
        public void EndSettingsAvailable(IntPtr aAsyncHandle, out bool aSettingsAvailable)
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
        /// <param name="aSettingsChangedCount"></param>
        public void SyncSettingsChangedCount(out uint aSettingsChangedCount)
        {
            SyncSettingsChangedCountLinnCoUkExakt1 sync = new SyncSettingsChangedCountLinnCoUkExakt1(this);
            BeginSettingsChangedCount(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettingsChangedCount = sync.SettingsChangedCount();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSettingsChangedCount().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSettingsChangedCount(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSettingsChangedCount, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionSettingsChangedCount.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettingsChangedCount"></param>
        public void EndSettingsChangedCount(IntPtr aAsyncHandle, out uint aSettingsChangedCount)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSettingsChangedCount = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aManifestUri"></param>
        public void SyncUpdate(String aManifestUri)
        {
            SyncUpdateLinnCoUkExakt1 sync = new SyncUpdateLinnCoUkExakt1(this);
            BeginUpdate(aManifestUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUpdate().</remarks>
        /// <param name="aManifestUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUpdate(String aManifestUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUpdate, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionUpdate.InputParameter(inIndex++), aManifestUri));
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
        /// <param name="aManifestUri"></param>
        public void SyncUpdateBlocking(String aManifestUri)
        {
            SyncUpdateBlockingLinnCoUkExakt1 sync = new SyncUpdateBlockingLinnCoUkExakt1(this);
            BeginUpdateBlocking(aManifestUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUpdateBlocking().</remarks>
        /// <param name="aManifestUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUpdateBlocking(String aManifestUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUpdateBlocking, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionUpdateBlocking.InputParameter(inIndex++), aManifestUri));
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
        /// <param name="aUpdateTotalPercentage"></param>
        /// <param name="aUpdateTotalJobs"></param>
        /// <param name="aUpdateJob"></param>
        /// <param name="aUpdateJobPercentage"></param>
        /// <param name="aUpdateJobDescription"></param>
        public void SyncGetUpdateStatus(out String aUpdateStatus, out uint aUpdateTotalPercentage, out uint aUpdateTotalJobs, out uint aUpdateJob, out uint aUpdateJobPercentage, out String aUpdateJobDescription)
        {
            SyncGetUpdateStatusLinnCoUkExakt1 sync = new SyncGetUpdateStatusLinnCoUkExakt1(this);
            BeginGetUpdateStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUpdateStatus = sync.UpdateStatus();
            aUpdateTotalPercentage = sync.UpdateTotalPercentage();
            aUpdateTotalJobs = sync.UpdateTotalJobs();
            aUpdateJob = sync.UpdateJob();
            aUpdateJobPercentage = sync.UpdateJobPercentage();
            aUpdateJobDescription = sync.UpdateJobDescription();
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
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetUpdateStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUpdateStatus"></param>
        /// <param name="aUpdateTotalPercentage"></param>
        /// <param name="aUpdateTotalJobs"></param>
        /// <param name="aUpdateJob"></param>
        /// <param name="aUpdateJobPercentage"></param>
        /// <param name="aUpdateJobDescription"></param>
        public void EndGetUpdateStatus(IntPtr aAsyncHandle, out String aUpdateStatus, out uint aUpdateTotalPercentage, out uint aUpdateTotalJobs, out uint aUpdateJob, out uint aUpdateJobPercentage, out String aUpdateJobDescription)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUpdateStatus = Invocation.OutputString(aAsyncHandle, index++);
            aUpdateTotalPercentage = Invocation.OutputUint(aAsyncHandle, index++);
            aUpdateTotalJobs = Invocation.OutputUint(aAsyncHandle, index++);
            aUpdateJob = Invocation.OutputUint(aAsyncHandle, index++);
            aUpdateJobPercentage = Invocation.OutputUint(aAsyncHandle, index++);
            aUpdateJobDescription = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannelMap"></param>
        public void SyncChannelMap(out String aChannelMap)
        {
            SyncChannelMapLinnCoUkExakt1 sync = new SyncChannelMapLinnCoUkExakt1(this);
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
            SyncSetChannelMapLinnCoUkExakt1 sync = new SyncSetChannelMapLinnCoUkExakt1(this);
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
            SyncAudioChannelsLinnCoUkExakt1 sync = new SyncAudioChannelsLinnCoUkExakt1(this);
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
            SyncSetAudioChannelsLinnCoUkExakt1 sync = new SyncSetAudioChannelsLinnCoUkExakt1(this);
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
        public void SyncVersion(out uint aVersion)
        {
            SyncVersionLinnCoUkExakt1 sync = new SyncVersionLinnCoUkExakt1(this);
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
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndVersion(IntPtr aAsyncHandle, out uint aVersion)
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
        /// Set a delegate to be run when the DeviceList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the SettingsChangedCount state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aSettingsChangedCountChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySettingsChangedCountChanged(System.Action aSettingsChangedCountChanged)
        {
            lock (iPropertyLock)
            {
                iSettingsChangedCountChanged = aSettingsChangedCountChanged;
            }
        }

        private void SettingsChangedCountPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSettingsChangedCountChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the UpdateTotalPercentage state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aUpdateTotalPercentageChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateTotalPercentageChanged(System.Action aUpdateTotalPercentageChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateTotalPercentageChanged = aUpdateTotalPercentageChanged;
            }
        }

        private void UpdateTotalPercentagePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateTotalPercentageChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateTotalJobs state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aUpdateTotalJobsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateTotalJobsChanged(System.Action aUpdateTotalJobsChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateTotalJobsChanged = aUpdateTotalJobsChanged;
            }
        }

        private void UpdateTotalJobsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateTotalJobsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateJob state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aUpdateJobChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateJobChanged(System.Action aUpdateJobChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateJobChanged = aUpdateJobChanged;
            }
        }

        private void UpdateJobPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateJobChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateJobPercentage state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aUpdateJobPercentageChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateJobPercentageChanged(System.Action aUpdateJobPercentageChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateJobPercentageChanged = aUpdateJobPercentageChanged;
            }
        }

        private void UpdateJobPercentagePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateJobPercentageChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UpdateJobDescription state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
        /// <param name="aUpdateJobDescriptionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateJobDescriptionChanged(System.Action aUpdateJobDescriptionChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateJobDescriptionChanged = aUpdateJobDescriptionChanged;
            }
        }

        private void UpdateJobDescriptionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateJobDescriptionChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ChannelMap state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// CpProxyLinnCoUkExakt1 instance will not overlap.</remarks>
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
        /// Query the value of the SettingsChangedCount property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SettingsChangedCount property</returns>
        public uint PropertySettingsChangedCount()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iSettingsChangedCount.Value();
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
        /// Query the value of the UpdateTotalPercentage property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateTotalPercentage property</returns>
        public uint PropertyUpdateTotalPercentage()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iUpdateTotalPercentage.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateTotalJobs property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateTotalJobs property</returns>
        public uint PropertyUpdateTotalJobs()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iUpdateTotalJobs.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateJob property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateJob property</returns>
        public uint PropertyUpdateJob()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iUpdateJob.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateJobPercentage property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateJobPercentage property</returns>
        public uint PropertyUpdateJobPercentage()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iUpdateJobPercentage.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UpdateJobDescription property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateJobDescription property</returns>
        public String PropertyUpdateJobDescription()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iUpdateJobDescription.Value();
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
            iActionSettingsAvailable.Dispose();
            iActionSettingsChangedCount.Dispose();
            iActionUpdate.Dispose();
            iActionUpdateBlocking.Dispose();
            iActionGetUpdateStatus.Dispose();
            iActionChannelMap.Dispose();
            iActionSetChannelMap.Dispose();
            iActionAudioChannels.Dispose();
            iActionSetAudioChannels.Dispose();
            iActionVersion.Dispose();
            iDeviceList.Dispose();
            iSettingsAvailable.Dispose();
            iSettingsChangedCount.Dispose();
            iUpdateStatus.Dispose();
            iUpdateTotalPercentage.Dispose();
            iUpdateTotalJobs.Dispose();
            iUpdateJob.Dispose();
            iUpdateJobPercentage.Dispose();
            iUpdateJobDescription.Dispose();
            iChannelMap.Dispose();
            iAudioChannels.Dispose();
            iVersion.Dispose();
        }
    }
}

