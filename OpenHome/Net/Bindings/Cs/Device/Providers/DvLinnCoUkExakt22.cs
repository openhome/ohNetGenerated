using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkExakt22 : IDisposable
    {

        /// <summary>
        /// Set the value of the DeviceList property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDeviceList(string aValue);

        /// <summary>
        /// Get a copy of the value of the DeviceList property
        /// </summary>
        /// <returns>Value of the DeviceList property.</param>
        string PropertyDeviceList();

        /// <summary>
        /// Set the value of the SettingsAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySettingsAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the SettingsAvailable property
        /// </summary>
        /// <returns>Value of the SettingsAvailable property.</param>
        bool PropertySettingsAvailable();

        /// <summary>
        /// Set the value of the SettingsChangedSeq property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySettingsChangedSeq(string aValue);

        /// <summary>
        /// Get a copy of the value of the SettingsChangedSeq property
        /// </summary>
        /// <returns>Value of the SettingsChangedSeq property.</param>
        string PropertySettingsChangedSeq();

        /// <summary>
        /// Set the value of the UpdateStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateStatus property
        /// </summary>
        /// <returns>Value of the UpdateStatus property.</param>
        string PropertyUpdateStatus();

        /// <summary>
        /// Set the value of the ChannelMap property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyChannelMap(string aValue);

        /// <summary>
        /// Get a copy of the value of the ChannelMap property
        /// </summary>
        /// <returns>Value of the ChannelMap property.</param>
        string PropertyChannelMap();

        /// <summary>
        /// Set the value of the AudioChannels property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAudioChannels(string aValue);

        /// <summary>
        /// Get a copy of the value of the AudioChannels property
        /// </summary>
        /// <returns>Value of the AudioChannels property.</param>
        string PropertyAudioChannels();

        /// <summary>
        /// Set the value of the Version property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVersion(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Version property
        /// </summary>
        /// <returns>Value of the Version property.</param>
        uint PropertyVersion();

        /// <summary>
        /// Set the value of the IntegratedDevicesPresent property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyIntegratedDevicesPresent(bool aValue);

        /// <summary>
        /// Get a copy of the value of the IntegratedDevicesPresent property
        /// </summary>
        /// <returns>Value of the IntegratedDevicesPresent property.</param>
        bool PropertyIntegratedDevicesPresent();

        /// <summary>
        /// Set the value of the TestTrackPlaying property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyTestTrackPlaying(bool aValue);

        /// <summary>
        /// Get a copy of the value of the TestTrackPlaying property
        /// </summary>
        /// <returns>Value of the TestTrackPlaying property.</param>
        bool PropertyTestTrackPlaying();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Exakt2:2 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkExakt22 : DvProvider, IDisposable, IDvProviderLinnCoUkExakt22
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetDeviceList;
        private ActionDelegate iDelegateGetDeviceSettings;
        private ActionDelegate iDelegateGetSettingsAvailable;
        private ActionDelegate iDelegateGetSettingsChangedSeq;
        private ActionDelegate iDelegateUpdate;
        private ActionDelegate iDelegateUpdateBlocking;
        private ActionDelegate iDelegateGetUpdateStatus;
        private ActionDelegate iDelegateGetChannelMap;
        private ActionDelegate iDelegateGetAudioChannels;
        private ActionDelegate iDelegateGetVersion;
        private ActionDelegate iDelegateApplyUpdate;
        private ActionDelegate iDelegatePlayTestTrack;
        private ActionDelegate iDelegateClearTestTrack;
        private ActionDelegate iDelegateGetIntegratedDevicesPresent;
        private ActionDelegate iDelegateBootIntegratedDevicesToFallback;
        private ActionDelegate iDelegateGetTestTrackPlaying;
        private PropertyString iPropertyDeviceList;
        private PropertyBool iPropertySettingsAvailable;
        private PropertyString iPropertySettingsChangedSeq;
        private PropertyString iPropertyUpdateStatus;
        private PropertyString iPropertyChannelMap;
        private PropertyString iPropertyAudioChannels;
        private PropertyUint iPropertyVersion;
        private PropertyBool iPropertyIntegratedDevicesPresent;
        private PropertyBool iPropertyTestTrackPlaying;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkExakt22(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Exakt2", 2)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the DeviceList property.
        /// </summary>
        public void EnablePropertyDeviceList()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList", allowedValues));
            AddProperty(iPropertyDeviceList);
        }

        /// <summary>
        /// Enable the SettingsAvailable property.
        /// </summary>
        public void EnablePropertySettingsAvailable()
        {
            iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
            AddProperty(iPropertySettingsAvailable);
        }

        /// <summary>
        /// Enable the SettingsChangedSeq property.
        /// </summary>
        public void EnablePropertySettingsChangedSeq()
        {
            List<String> allowedValues = new List<String>();
            iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq", allowedValues));
            AddProperty(iPropertySettingsChangedSeq);
        }

        /// <summary>
        /// Enable the UpdateStatus property.
        /// </summary>
        public void EnablePropertyUpdateStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus", allowedValues));
            AddProperty(iPropertyUpdateStatus);
        }

        /// <summary>
        /// Enable the ChannelMap property.
        /// </summary>
        public void EnablePropertyChannelMap()
        {
            List<String> allowedValues = new List<String>();
            iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap", allowedValues));
            AddProperty(iPropertyChannelMap);
        }

        /// <summary>
        /// Enable the AudioChannels property.
        /// </summary>
        public void EnablePropertyAudioChannels()
        {
            List<String> allowedValues = new List<String>();
            iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels", allowedValues));
            AddProperty(iPropertyAudioChannels);
        }

        /// <summary>
        /// Enable the Version property.
        /// </summary>
        public void EnablePropertyVersion()
        {
            iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
            AddProperty(iPropertyVersion);
        }

        /// <summary>
        /// Enable the IntegratedDevicesPresent property.
        /// </summary>
        public void EnablePropertyIntegratedDevicesPresent()
        {
            iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
            AddProperty(iPropertyIntegratedDevicesPresent);
        }

        /// <summary>
        /// Enable the TestTrackPlaying property.
        /// </summary>
        public void EnablePropertyTestTrackPlaying()
        {
            iPropertyTestTrackPlaying = new PropertyBool(new ParameterBool("TestTrackPlaying"));
            AddProperty(iPropertyTestTrackPlaying);
        }

        /// <summary>
        /// Set the value of the DeviceList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceList has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDeviceList(string aValue)
        {
            if (iPropertyDeviceList == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDeviceList, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DeviceList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceList has previously been called.</remarks>
        /// <returns>Value of the DeviceList property.</returns>
        public string PropertyDeviceList()
        {
            if (iPropertyDeviceList == null)
                throw new PropertyDisabledError();
            return iPropertyDeviceList.Value();
        }

        /// <summary>
        /// Set the value of the SettingsAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySettingsAvailable(bool aValue)
        {
            if (iPropertySettingsAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertySettingsAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SettingsAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsAvailable has previously been called.</remarks>
        /// <returns>Value of the SettingsAvailable property.</returns>
        public bool PropertySettingsAvailable()
        {
            if (iPropertySettingsAvailable == null)
                throw new PropertyDisabledError();
            return iPropertySettingsAvailable.Value();
        }

        /// <summary>
        /// Set the value of the SettingsChangedSeq property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsChangedSeq has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySettingsChangedSeq(string aValue)
        {
            if (iPropertySettingsChangedSeq == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySettingsChangedSeq, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SettingsChangedSeq property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsChangedSeq has previously been called.</remarks>
        /// <returns>Value of the SettingsChangedSeq property.</returns>
        public string PropertySettingsChangedSeq()
        {
            if (iPropertySettingsChangedSeq == null)
                throw new PropertyDisabledError();
            return iPropertySettingsChangedSeq.Value();
        }

        /// <summary>
        /// Set the value of the UpdateStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateStatus(string aValue)
        {
            if (iPropertyUpdateStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyUpdateStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateStatus has previously been called.</remarks>
        /// <returns>Value of the UpdateStatus property.</returns>
        public string PropertyUpdateStatus()
        {
            if (iPropertyUpdateStatus == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateStatus.Value();
        }

        /// <summary>
        /// Set the value of the ChannelMap property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyChannelMap has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyChannelMap(string aValue)
        {
            if (iPropertyChannelMap == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyChannelMap, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ChannelMap property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyChannelMap has previously been called.</remarks>
        /// <returns>Value of the ChannelMap property.</returns>
        public string PropertyChannelMap()
        {
            if (iPropertyChannelMap == null)
                throw new PropertyDisabledError();
            return iPropertyChannelMap.Value();
        }

        /// <summary>
        /// Set the value of the AudioChannels property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAudioChannels has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAudioChannels(string aValue)
        {
            if (iPropertyAudioChannels == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyAudioChannels, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the AudioChannels property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAudioChannels has previously been called.</remarks>
        /// <returns>Value of the AudioChannels property.</returns>
        public string PropertyAudioChannels()
        {
            if (iPropertyAudioChannels == null)
                throw new PropertyDisabledError();
            return iPropertyAudioChannels.Value();
        }

        /// <summary>
        /// Set the value of the Version property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVersion has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVersion(uint aValue)
        {
            if (iPropertyVersion == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVersion, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Version property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVersion has previously been called.</remarks>
        /// <returns>Value of the Version property.</returns>
        public uint PropertyVersion()
        {
            if (iPropertyVersion == null)
                throw new PropertyDisabledError();
            return iPropertyVersion.Value();
        }

        /// <summary>
        /// Set the value of the IntegratedDevicesPresent property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyIntegratedDevicesPresent(bool aValue)
        {
            if (iPropertyIntegratedDevicesPresent == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyIntegratedDevicesPresent, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the IntegratedDevicesPresent property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.</remarks>
        /// <returns>Value of the IntegratedDevicesPresent property.</returns>
        public bool PropertyIntegratedDevicesPresent()
        {
            if (iPropertyIntegratedDevicesPresent == null)
                throw new PropertyDisabledError();
            return iPropertyIntegratedDevicesPresent.Value();
        }

        /// <summary>
        /// Set the value of the TestTrackPlaying property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTestTrackPlaying has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyTestTrackPlaying(bool aValue)
        {
            if (iPropertyTestTrackPlaying == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyTestTrackPlaying, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the TestTrackPlaying property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTestTrackPlaying has previously been called.</remarks>
        /// <returns>Value of the TestTrackPlaying property.</returns>
        public bool PropertyTestTrackPlaying()
        {
            if (iPropertyTestTrackPlaying == null)
                throw new PropertyDisabledError();
            return iPropertyTestTrackPlaying.Value();
        }

        /// <summary>
        /// Signal that the action GetDeviceList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDeviceList must be overridden if this is called.</remarks>
        protected void EnableActionGetDeviceList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDeviceList");
            action.AddOutputParameter(new ParameterRelated("List", iPropertyDeviceList));
            iDelegateGetDeviceList = new ActionDelegate(DoGetDeviceList);
            EnableAction(action, iDelegateGetDeviceList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetDeviceSettings is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDeviceSettings must be overridden if this is called.</remarks>
        protected void EnableActionGetDeviceSettings()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDeviceSettings");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            action.AddOutputParameter(new ParameterString("Settings", allowedValues));
            iDelegateGetDeviceSettings = new ActionDelegate(DoGetDeviceSettings);
            EnableAction(action, iDelegateGetDeviceSettings, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSettingsAvailable is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSettingsAvailable must be overridden if this is called.</remarks>
        protected void EnableActionGetSettingsAvailable()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSettingsAvailable");
            action.AddOutputParameter(new ParameterRelated("SettingsAvailable", iPropertySettingsAvailable));
            iDelegateGetSettingsAvailable = new ActionDelegate(DoGetSettingsAvailable);
            EnableAction(action, iDelegateGetSettingsAvailable, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSettingsChangedSeq is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSettingsChangedSeq must be overridden if this is called.</remarks>
        protected void EnableActionGetSettingsChangedSeq()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSettingsChangedSeq");
            action.AddOutputParameter(new ParameterRelated("SettingsChangedSeq", iPropertySettingsChangedSeq));
            iDelegateGetSettingsChangedSeq = new ActionDelegate(DoGetSettingsChangedSeq);
            EnableAction(action, iDelegateGetSettingsChangedSeq, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Update is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Update must be overridden if this is called.</remarks>
        protected void EnableActionUpdate()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Update");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Manifest", allowedValues));
            iDelegateUpdate = new ActionDelegate(DoUpdate);
            EnableAction(action, iDelegateUpdate, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action UpdateBlocking is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// UpdateBlocking must be overridden if this is called.</remarks>
        protected void EnableActionUpdateBlocking()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("UpdateBlocking");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Manifest", allowedValues));
            iDelegateUpdateBlocking = new ActionDelegate(DoUpdateBlocking);
            EnableAction(action, iDelegateUpdateBlocking, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetUpdateStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUpdateStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetUpdateStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUpdateStatus");
            action.AddOutputParameter(new ParameterRelated("UpdateStatus", iPropertyUpdateStatus));
            iDelegateGetUpdateStatus = new ActionDelegate(DoGetUpdateStatus);
            EnableAction(action, iDelegateGetUpdateStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetChannelMap is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetChannelMap must be overridden if this is called.</remarks>
        protected void EnableActionGetChannelMap()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetChannelMap");
            action.AddOutputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
            iDelegateGetChannelMap = new ActionDelegate(DoGetChannelMap);
            EnableAction(action, iDelegateGetChannelMap, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetAudioChannels is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetAudioChannels must be overridden if this is called.</remarks>
        protected void EnableActionGetAudioChannels()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetAudioChannels");
            action.AddOutputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
            iDelegateGetAudioChannels = new ActionDelegate(DoGetAudioChannels);
            EnableAction(action, iDelegateGetAudioChannels, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetVersion is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetVersion must be overridden if this is called.</remarks>
        protected void EnableActionGetVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetVersion");
            action.AddOutputParameter(new ParameterRelated("Version", iPropertyVersion));
            iDelegateGetVersion = new ActionDelegate(DoGetVersion);
            EnableAction(action, iDelegateGetVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ApplyUpdate is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ApplyUpdate must be overridden if this is called.</remarks>
        protected void EnableActionApplyUpdate()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ApplyUpdate");
            iDelegateApplyUpdate = new ActionDelegate(DoApplyUpdate);
            EnableAction(action, iDelegateApplyUpdate, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action PlayTestTrack is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// PlayTestTrack must be overridden if this is called.</remarks>
        protected void EnableActionPlayTestTrack()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("PlayTestTrack");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ChannelMap", allowedValues));
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            action.AddInputParameter(new ParameterString("Metadata", allowedValues));
            iDelegatePlayTestTrack = new ActionDelegate(DoPlayTestTrack);
            EnableAction(action, iDelegatePlayTestTrack, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearTestTrack is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearTestTrack must be overridden if this is called.</remarks>
        protected void EnableActionClearTestTrack()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearTestTrack");
            iDelegateClearTestTrack = new ActionDelegate(DoClearTestTrack);
            EnableAction(action, iDelegateClearTestTrack, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetIntegratedDevicesPresent is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetIntegratedDevicesPresent must be overridden if this is called.</remarks>
        protected void EnableActionGetIntegratedDevicesPresent()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetIntegratedDevicesPresent");
            action.AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", iPropertyIntegratedDevicesPresent));
            iDelegateGetIntegratedDevicesPresent = new ActionDelegate(DoGetIntegratedDevicesPresent);
            EnableAction(action, iDelegateGetIntegratedDevicesPresent, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BootIntegratedDevicesToFallback is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BootIntegratedDevicesToFallback must be overridden if this is called.</remarks>
        protected void EnableActionBootIntegratedDevicesToFallback()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BootIntegratedDevicesToFallback");
            iDelegateBootIntegratedDevicesToFallback = new ActionDelegate(DoBootIntegratedDevicesToFallback);
            EnableAction(action, iDelegateBootIntegratedDevicesToFallback, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetTestTrackPlaying is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetTestTrackPlaying must be overridden if this is called.</remarks>
        protected void EnableActionGetTestTrackPlaying()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetTestTrackPlaying");
            action.AddOutputParameter(new ParameterRelated("TestTrackPlaying", iPropertyTestTrackPlaying));
            iDelegateGetTestTrackPlaying = new ActionDelegate(DoGetTestTrackPlaying);
            EnableAction(action, iDelegateGetTestTrackPlaying, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetDeviceList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDeviceList action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDeviceList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aList"></param>
        protected virtual void GetDeviceList(IDvInvocation aInvocation, out string aList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetDeviceSettings action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDeviceSettings action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDeviceSettings was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceId"></param>
        /// <param name="aSettings"></param>
        protected virtual void GetDeviceSettings(IDvInvocation aInvocation, string aDeviceId, out string aSettings)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSettingsAvailable action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSettingsAvailable action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSettingsAvailable was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSettingsAvailable"></param>
        protected virtual void GetSettingsAvailable(IDvInvocation aInvocation, out bool aSettingsAvailable)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSettingsChangedSeq action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSettingsChangedSeq action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSettingsChangedSeq was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSettingsChangedSeq"></param>
        protected virtual void GetSettingsChangedSeq(IDvInvocation aInvocation, out string aSettingsChangedSeq)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Update action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Update action for the owning device.
        ///
        /// Must be implemented iff EnableActionUpdate was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aManifest"></param>
        protected virtual void Update(IDvInvocation aInvocation, string aManifest)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// UpdateBlocking action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// UpdateBlocking action for the owning device.
        ///
        /// Must be implemented iff EnableActionUpdateBlocking was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aManifest"></param>
        protected virtual void UpdateBlocking(IDvInvocation aInvocation, string aManifest)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetUpdateStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUpdateStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUpdateStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUpdateStatus"></param>
        protected virtual void GetUpdateStatus(IDvInvocation aInvocation, out string aUpdateStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetChannelMap action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetChannelMap action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetChannelMap was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannelMap"></param>
        protected virtual void GetChannelMap(IDvInvocation aInvocation, out string aChannelMap)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetAudioChannels action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetAudioChannels action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetAudioChannels was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAudioChannels"></param>
        protected virtual void GetAudioChannels(IDvInvocation aInvocation, out string aAudioChannels)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetVersion action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetVersion action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVersion"></param>
        protected virtual void GetVersion(IDvInvocation aInvocation, out uint aVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ApplyUpdate action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ApplyUpdate action for the owning device.
        ///
        /// Must be implemented iff EnableActionApplyUpdate was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ApplyUpdate(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// PlayTestTrack action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// PlayTestTrack action for the owning device.
        ///
        /// Must be implemented iff EnableActionPlayTestTrack was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannelMap"></param>
        /// <param name="aUri"></param>
        /// <param name="aMetadata"></param>
        protected virtual void PlayTestTrack(IDvInvocation aInvocation, string aChannelMap, string aUri, string aMetadata)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearTestTrack action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearTestTrack action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearTestTrack was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ClearTestTrack(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetIntegratedDevicesPresent action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetIntegratedDevicesPresent action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetIntegratedDevicesPresent was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIntegratedDevicesPresent"></param>
        protected virtual void GetIntegratedDevicesPresent(IDvInvocation aInvocation, out bool aIntegratedDevicesPresent)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BootIntegratedDevicesToFallback action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BootIntegratedDevicesToFallback action for the owning device.
        ///
        /// Must be implemented iff EnableActionBootIntegratedDevicesToFallback was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void BootIntegratedDevicesToFallback(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetTestTrackPlaying action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetTestTrackPlaying action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetTestTrackPlaying was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aTestTrackPlaying"></param>
        protected virtual void GetTestTrackPlaying(IDvInvocation aInvocation, out bool aTestTrackPlaying)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetDeviceList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string list;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDeviceList(invocation, out list);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDeviceList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDeviceList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceList" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("List", list);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetDeviceSettings(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceId;
            string settings;
            try
            {
                invocation.ReadStart();
                deviceId = invocation.ReadString("DeviceId");
                invocation.ReadEnd();
                self.GetDeviceSettings(invocation, deviceId, out settings);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDeviceSettings");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDeviceSettings" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceSettings" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Settings", settings);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceSettings" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSettingsAvailable(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool settingsAvailable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSettingsAvailable(invocation, out settingsAvailable);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSettingsAvailable");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSettingsAvailable" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSettingsAvailable" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("SettingsAvailable", settingsAvailable);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSettingsAvailable" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSettingsChangedSeq(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string settingsChangedSeq;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSettingsChangedSeq(invocation, out settingsChangedSeq);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSettingsChangedSeq");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSettingsChangedSeq" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSettingsChangedSeq" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SettingsChangedSeq", settingsChangedSeq);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSettingsChangedSeq" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string manifest;
            try
            {
                invocation.ReadStart();
                manifest = invocation.ReadString("Manifest");
                invocation.ReadEnd();
                self.Update(invocation, manifest);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Update");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Update" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Update" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Update" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUpdateBlocking(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string manifest;
            try
            {
                invocation.ReadStart();
                manifest = invocation.ReadString("Manifest");
                invocation.ReadEnd();
                self.UpdateBlocking(invocation, manifest);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "UpdateBlocking");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "UpdateBlocking" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UpdateBlocking" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UpdateBlocking" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetUpdateStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string updateStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpdateStatus(invocation, out updateStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUpdateStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetUpdateStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("UpdateStatus", updateStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetChannelMap(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channelMap;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetChannelMap(invocation, out channelMap);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetChannelMap");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetChannelMap" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetChannelMap" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ChannelMap", channelMap);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetChannelMap" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetAudioChannels(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string audioChannels;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetAudioChannels(invocation, out audioChannels);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetAudioChannels");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetAudioChannels" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAudioChannels" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("AudioChannels", audioChannels);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAudioChannels" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint version;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetVersion(invocation, out version);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetVersion");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetVersion" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetVersion" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Version", version);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetVersion" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoApplyUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ApplyUpdate(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ApplyUpdate");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ApplyUpdate" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ApplyUpdate" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ApplyUpdate" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPlayTestTrack(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channelMap;
            string uri;
            string metadata;
            try
            {
                invocation.ReadStart();
                channelMap = invocation.ReadString("ChannelMap");
                uri = invocation.ReadString("Uri");
                metadata = invocation.ReadString("Metadata");
                invocation.ReadEnd();
                self.PlayTestTrack(invocation, channelMap, uri, metadata);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "PlayTestTrack");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "PlayTestTrack" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PlayTestTrack" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PlayTestTrack" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearTestTrack(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ClearTestTrack(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearTestTrack");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearTestTrack" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearTestTrack" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearTestTrack" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetIntegratedDevicesPresent(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool integratedDevicesPresent;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetIntegratedDevicesPresent(invocation, out integratedDevicesPresent);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetIntegratedDevicesPresent");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetIntegratedDevicesPresent" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIntegratedDevicesPresent" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("IntegratedDevicesPresent", integratedDevicesPresent);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIntegratedDevicesPresent" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBootIntegratedDevicesToFallback(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.BootIntegratedDevicesToFallback(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BootIntegratedDevicesToFallback");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BootIntegratedDevicesToFallback" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BootIntegratedDevicesToFallback" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BootIntegratedDevicesToFallback" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetTestTrackPlaying(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt22 self = (DvProviderLinnCoUkExakt22)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool testTrackPlaying;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetTestTrackPlaying(invocation, out testTrackPlaying);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetTestTrackPlaying");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetTestTrackPlaying" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTestTrackPlaying" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("TestTrackPlaying", testTrackPlaying);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetTestTrackPlaying" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public virtual void Dispose()
        {
            if (DisposeProvider())
                iGch.Free();
        }
    }
}

