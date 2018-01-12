using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkExakt1 : IDisposable
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
        /// Set the value of the SettingsChangedCount property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySettingsChangedCount(uint aValue);

        /// <summary>
        /// Get a copy of the value of the SettingsChangedCount property
        /// </summary>
        /// <returns>Value of the SettingsChangedCount property.</param>
        uint PropertySettingsChangedCount();

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
        /// Set the value of the UpdateTotalPercentage property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateTotalPercentage(uint aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateTotalPercentage property
        /// </summary>
        /// <returns>Value of the UpdateTotalPercentage property.</param>
        uint PropertyUpdateTotalPercentage();

        /// <summary>
        /// Set the value of the UpdateTotalJobs property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateTotalJobs(uint aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateTotalJobs property
        /// </summary>
        /// <returns>Value of the UpdateTotalJobs property.</param>
        uint PropertyUpdateTotalJobs();

        /// <summary>
        /// Set the value of the UpdateJob property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateJob(uint aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateJob property
        /// </summary>
        /// <returns>Value of the UpdateJob property.</param>
        uint PropertyUpdateJob();

        /// <summary>
        /// Set the value of the UpdateJobPercentage property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateJobPercentage(uint aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateJobPercentage property
        /// </summary>
        /// <returns>Value of the UpdateJobPercentage property.</param>
        uint PropertyUpdateJobPercentage();

        /// <summary>
        /// Set the value of the UpdateJobDescription property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateJobDescription(string aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateJobDescription property
        /// </summary>
        /// <returns>Value of the UpdateJobDescription property.</param>
        string PropertyUpdateJobDescription();

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
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Exakt:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkExakt1 : DvProvider, IDisposable, IDvProviderLinnCoUkExakt1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateDeviceList;
        private ActionDelegate iDelegateDeviceSettings;
        private ActionDelegate iDelegateSettingsAvailable;
        private ActionDelegate iDelegateSettingsChangedCount;
        private ActionDelegate iDelegateUpdate;
        private ActionDelegate iDelegateUpdateBlocking;
        private ActionDelegate iDelegateGetUpdateStatus;
        private ActionDelegate iDelegateChannelMap;
        private ActionDelegate iDelegateSetChannelMap;
        private ActionDelegate iDelegateAudioChannels;
        private ActionDelegate iDelegateSetAudioChannels;
        private ActionDelegate iDelegateVersion;
        private PropertyString iPropertyDeviceList;
        private PropertyBool iPropertySettingsAvailable;
        private PropertyUint iPropertySettingsChangedCount;
        private PropertyString iPropertyUpdateStatus;
        private PropertyUint iPropertyUpdateTotalPercentage;
        private PropertyUint iPropertyUpdateTotalJobs;
        private PropertyUint iPropertyUpdateJob;
        private PropertyUint iPropertyUpdateJobPercentage;
        private PropertyString iPropertyUpdateJobDescription;
        private PropertyString iPropertyChannelMap;
        private PropertyString iPropertyAudioChannels;
        private PropertyUint iPropertyVersion;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkExakt1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Exakt", 1)
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
        /// Enable the SettingsChangedCount property.
        /// </summary>
        public void EnablePropertySettingsChangedCount()
        {
            iPropertySettingsChangedCount = new PropertyUint(new ParameterUint("SettingsChangedCount"));
            AddProperty(iPropertySettingsChangedCount);
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
        /// Enable the UpdateTotalPercentage property.
        /// </summary>
        public void EnablePropertyUpdateTotalPercentage()
        {
            iPropertyUpdateTotalPercentage = new PropertyUint(new ParameterUint("UpdateTotalPercentage"));
            AddProperty(iPropertyUpdateTotalPercentage);
        }

        /// <summary>
        /// Enable the UpdateTotalJobs property.
        /// </summary>
        public void EnablePropertyUpdateTotalJobs()
        {
            iPropertyUpdateTotalJobs = new PropertyUint(new ParameterUint("UpdateTotalJobs"));
            AddProperty(iPropertyUpdateTotalJobs);
        }

        /// <summary>
        /// Enable the UpdateJob property.
        /// </summary>
        public void EnablePropertyUpdateJob()
        {
            iPropertyUpdateJob = new PropertyUint(new ParameterUint("UpdateJob"));
            AddProperty(iPropertyUpdateJob);
        }

        /// <summary>
        /// Enable the UpdateJobPercentage property.
        /// </summary>
        public void EnablePropertyUpdateJobPercentage()
        {
            iPropertyUpdateJobPercentage = new PropertyUint(new ParameterUint("UpdateJobPercentage"));
            AddProperty(iPropertyUpdateJobPercentage);
        }

        /// <summary>
        /// Enable the UpdateJobDescription property.
        /// </summary>
        public void EnablePropertyUpdateJobDescription()
        {
            List<String> allowedValues = new List<String>();
            iPropertyUpdateJobDescription = new PropertyString(new ParameterString("UpdateJobDescription", allowedValues));
            AddProperty(iPropertyUpdateJobDescription);
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
        /// Set the value of the SettingsChangedCount property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsChangedCount has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySettingsChangedCount(uint aValue)
        {
            if (iPropertySettingsChangedCount == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertySettingsChangedCount, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SettingsChangedCount property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySettingsChangedCount has previously been called.</remarks>
        /// <returns>Value of the SettingsChangedCount property.</returns>
        public uint PropertySettingsChangedCount()
        {
            if (iPropertySettingsChangedCount == null)
                throw new PropertyDisabledError();
            return iPropertySettingsChangedCount.Value();
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
        /// Set the value of the UpdateTotalPercentage property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateTotalPercentage(uint aValue)
        {
            if (iPropertyUpdateTotalPercentage == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyUpdateTotalPercentage, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateTotalPercentage property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.</remarks>
        /// <returns>Value of the UpdateTotalPercentage property.</returns>
        public uint PropertyUpdateTotalPercentage()
        {
            if (iPropertyUpdateTotalPercentage == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateTotalPercentage.Value();
        }

        /// <summary>
        /// Set the value of the UpdateTotalJobs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTotalJobs has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateTotalJobs(uint aValue)
        {
            if (iPropertyUpdateTotalJobs == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyUpdateTotalJobs, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateTotalJobs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTotalJobs has previously been called.</remarks>
        /// <returns>Value of the UpdateTotalJobs property.</returns>
        public uint PropertyUpdateTotalJobs()
        {
            if (iPropertyUpdateTotalJobs == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateTotalJobs.Value();
        }

        /// <summary>
        /// Set the value of the UpdateJob property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJob has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateJob(uint aValue)
        {
            if (iPropertyUpdateJob == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyUpdateJob, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateJob property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJob has previously been called.</remarks>
        /// <returns>Value of the UpdateJob property.</returns>
        public uint PropertyUpdateJob()
        {
            if (iPropertyUpdateJob == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateJob.Value();
        }

        /// <summary>
        /// Set the value of the UpdateJobPercentage property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJobPercentage has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateJobPercentage(uint aValue)
        {
            if (iPropertyUpdateJobPercentage == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyUpdateJobPercentage, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateJobPercentage property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJobPercentage has previously been called.</remarks>
        /// <returns>Value of the UpdateJobPercentage property.</returns>
        public uint PropertyUpdateJobPercentage()
        {
            if (iPropertyUpdateJobPercentage == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateJobPercentage.Value();
        }

        /// <summary>
        /// Set the value of the UpdateJobDescription property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJobDescription has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateJobDescription(string aValue)
        {
            if (iPropertyUpdateJobDescription == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyUpdateJobDescription, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateJobDescription property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateJobDescription has previously been called.</remarks>
        /// <returns>Value of the UpdateJobDescription property.</returns>
        public string PropertyUpdateJobDescription()
        {
            if (iPropertyUpdateJobDescription == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateJobDescription.Value();
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
        /// Signal that the action DeviceList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DeviceList must be overridden if this is called.</remarks>
        protected void EnableActionDeviceList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DeviceList");
            action.AddOutputParameter(new ParameterRelated("List", iPropertyDeviceList));
            iDelegateDeviceList = new ActionDelegate(DoDeviceList);
            EnableAction(action, iDelegateDeviceList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action DeviceSettings is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DeviceSettings must be overridden if this is called.</remarks>
        protected void EnableActionDeviceSettings()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DeviceSettings");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            action.AddOutputParameter(new ParameterString("Settings", allowedValues));
            iDelegateDeviceSettings = new ActionDelegate(DoDeviceSettings);
            EnableAction(action, iDelegateDeviceSettings, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SettingsAvailable is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SettingsAvailable must be overridden if this is called.</remarks>
        protected void EnableActionSettingsAvailable()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SettingsAvailable");
            action.AddOutputParameter(new ParameterRelated("SettingsAvailable", iPropertySettingsAvailable));
            iDelegateSettingsAvailable = new ActionDelegate(DoSettingsAvailable);
            EnableAction(action, iDelegateSettingsAvailable, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SettingsChangedCount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SettingsChangedCount must be overridden if this is called.</remarks>
        protected void EnableActionSettingsChangedCount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SettingsChangedCount");
            action.AddOutputParameter(new ParameterRelated("SettingsChangedCount", iPropertySettingsChangedCount));
            iDelegateSettingsChangedCount = new ActionDelegate(DoSettingsChangedCount);
            EnableAction(action, iDelegateSettingsChangedCount, GCHandle.ToIntPtr(iGch));
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
            action.AddInputParameter(new ParameterString("ManifestUri", allowedValues));
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
            action.AddInputParameter(new ParameterString("ManifestUri", allowedValues));
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
            action.AddOutputParameter(new ParameterRelated("UpdateTotalPercentage", iPropertyUpdateTotalPercentage));
            action.AddOutputParameter(new ParameterRelated("UpdateTotalJobs", iPropertyUpdateTotalJobs));
            action.AddOutputParameter(new ParameterRelated("UpdateJob", iPropertyUpdateJob));
            action.AddOutputParameter(new ParameterRelated("UpdateJobPercentage", iPropertyUpdateJobPercentage));
            action.AddOutputParameter(new ParameterRelated("UpdateJobDescription", iPropertyUpdateJobDescription));
            iDelegateGetUpdateStatus = new ActionDelegate(DoGetUpdateStatus);
            EnableAction(action, iDelegateGetUpdateStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ChannelMap is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ChannelMap must be overridden if this is called.</remarks>
        protected void EnableActionChannelMap()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ChannelMap");
            action.AddOutputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
            iDelegateChannelMap = new ActionDelegate(DoChannelMap);
            EnableAction(action, iDelegateChannelMap, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetChannelMap is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetChannelMap must be overridden if this is called.</remarks>
        protected void EnableActionSetChannelMap()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetChannelMap");
            action.AddInputParameter(new ParameterRelated("ChannelMap", iPropertyChannelMap));
            iDelegateSetChannelMap = new ActionDelegate(DoSetChannelMap);
            EnableAction(action, iDelegateSetChannelMap, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action AudioChannels is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// AudioChannels must be overridden if this is called.</remarks>
        protected void EnableActionAudioChannels()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("AudioChannels");
            action.AddOutputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
            iDelegateAudioChannels = new ActionDelegate(DoAudioChannels);
            EnableAction(action, iDelegateAudioChannels, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetAudioChannels is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetAudioChannels must be overridden if this is called.</remarks>
        protected void EnableActionSetAudioChannels()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetAudioChannels");
            action.AddInputParameter(new ParameterRelated("AudioChannels", iPropertyAudioChannels));
            iDelegateSetAudioChannels = new ActionDelegate(DoSetAudioChannels);
            EnableAction(action, iDelegateSetAudioChannels, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Version is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Version must be overridden if this is called.</remarks>
        protected void EnableActionVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Version");
            action.AddOutputParameter(new ParameterRelated("Version", iPropertyVersion));
            iDelegateVersion = new ActionDelegate(DoVersion);
            EnableAction(action, iDelegateVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// DeviceList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DeviceList action for the owning device.
        ///
        /// Must be implemented iff EnableActionDeviceList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aList"></param>
        protected virtual void DeviceList(IDvInvocation aInvocation, out string aList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// DeviceSettings action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DeviceSettings action for the owning device.
        ///
        /// Must be implemented iff EnableActionDeviceSettings was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceId"></param>
        /// <param name="aSettings"></param>
        protected virtual void DeviceSettings(IDvInvocation aInvocation, string aDeviceId, out string aSettings)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SettingsAvailable action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SettingsAvailable action for the owning device.
        ///
        /// Must be implemented iff EnableActionSettingsAvailable was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSettingsAvailable"></param>
        protected virtual void SettingsAvailable(IDvInvocation aInvocation, out bool aSettingsAvailable)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SettingsChangedCount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SettingsChangedCount action for the owning device.
        ///
        /// Must be implemented iff EnableActionSettingsChangedCount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSettingsChangedCount"></param>
        protected virtual void SettingsChangedCount(IDvInvocation aInvocation, out uint aSettingsChangedCount)
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
        /// <param name="aManifestUri"></param>
        protected virtual void Update(IDvInvocation aInvocation, string aManifestUri)
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
        /// <param name="aManifestUri"></param>
        protected virtual void UpdateBlocking(IDvInvocation aInvocation, string aManifestUri)
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
        /// <param name="aUpdateTotalPercentage"></param>
        /// <param name="aUpdateTotalJobs"></param>
        /// <param name="aUpdateJob"></param>
        /// <param name="aUpdateJobPercentage"></param>
        /// <param name="aUpdateJobDescription"></param>
        protected virtual void GetUpdateStatus(IDvInvocation aInvocation, out string aUpdateStatus, out uint aUpdateTotalPercentage, out uint aUpdateTotalJobs, out uint aUpdateJob, out uint aUpdateJobPercentage, out string aUpdateJobDescription)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ChannelMap action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ChannelMap action for the owning device.
        ///
        /// Must be implemented iff EnableActionChannelMap was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannelMap"></param>
        protected virtual void ChannelMap(IDvInvocation aInvocation, out string aChannelMap)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetChannelMap action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetChannelMap action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetChannelMap was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannelMap"></param>
        protected virtual void SetChannelMap(IDvInvocation aInvocation, string aChannelMap)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// AudioChannels action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// AudioChannels action for the owning device.
        ///
        /// Must be implemented iff EnableActionAudioChannels was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAudioChannels"></param>
        protected virtual void AudioChannels(IDvInvocation aInvocation, out string aAudioChannels)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetAudioChannels action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetAudioChannels action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetAudioChannels was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAudioChannels"></param>
        protected virtual void SetAudioChannels(IDvInvocation aInvocation, string aAudioChannels)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Version action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Version action for the owning device.
        ///
        /// Must be implemented iff EnableActionVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVersion"></param>
        protected virtual void Version(IDvInvocation aInvocation, out uint aVersion)
        {
            throw (new ActionDisabledError());
        }

        private static int DoDeviceList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string list;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.DeviceList(invocation, out list);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DeviceList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "DeviceList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceList" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDeviceSettings(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceId;
            string settings;
            try
            {
                invocation.ReadStart();
                deviceId = invocation.ReadString("DeviceId");
                invocation.ReadEnd();
                self.DeviceSettings(invocation, deviceId, out settings);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DeviceSettings");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "DeviceSettings" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceSettings" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceSettings" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSettingsAvailable(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool settingsAvailable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SettingsAvailable(invocation, out settingsAvailable);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SettingsAvailable");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SettingsAvailable" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SettingsAvailable" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SettingsAvailable" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSettingsChangedCount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint settingsChangedCount;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SettingsChangedCount(invocation, out settingsChangedCount);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SettingsChangedCount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SettingsChangedCount" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SettingsChangedCount" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("SettingsChangedCount", settingsChangedCount);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SettingsChangedCount" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string manifestUri;
            try
            {
                invocation.ReadStart();
                manifestUri = invocation.ReadString("ManifestUri");
                invocation.ReadEnd();
                self.Update(invocation, manifestUri);
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
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string manifestUri;
            try
            {
                invocation.ReadStart();
                manifestUri = invocation.ReadString("ManifestUri");
                invocation.ReadEnd();
                self.UpdateBlocking(invocation, manifestUri);
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
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string updateStatus;
            uint updateTotalPercentage;
            uint updateTotalJobs;
            uint updateJob;
            uint updateJobPercentage;
            string updateJobDescription;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpdateStatus(invocation, out updateStatus, out updateTotalPercentage, out updateTotalJobs, out updateJob, out updateJobPercentage, out updateJobDescription);
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
                invocation.WriteUint("UpdateTotalPercentage", updateTotalPercentage);
                invocation.WriteUint("UpdateTotalJobs", updateTotalJobs);
                invocation.WriteUint("UpdateJob", updateJob);
                invocation.WriteUint("UpdateJobPercentage", updateJobPercentage);
                invocation.WriteString("UpdateJobDescription", updateJobDescription);
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

        private static int DoChannelMap(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channelMap;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ChannelMap(invocation, out channelMap);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ChannelMap");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ChannelMap" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ChannelMap" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ChannelMap" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetChannelMap(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channelMap;
            try
            {
                invocation.ReadStart();
                channelMap = invocation.ReadString("ChannelMap");
                invocation.ReadEnd();
                self.SetChannelMap(invocation, channelMap);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetChannelMap");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetChannelMap" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetChannelMap" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetChannelMap" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoAudioChannels(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string audioChannels;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.AudioChannels(invocation, out audioChannels);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "AudioChannels");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "AudioChannels" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "AudioChannels" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "AudioChannels" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetAudioChannels(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string audioChannels;
            try
            {
                invocation.ReadStart();
                audioChannels = invocation.ReadString("AudioChannels");
                invocation.ReadEnd();
                self.SetAudioChannels(invocation, audioChannels);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetAudioChannels");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetAudioChannels" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAudioChannels" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAudioChannels" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExakt1 self = (DvProviderLinnCoUkExakt1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint version;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Version(invocation, out version);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Version");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Version" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Version" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Version" });
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

