using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgExakt4 : IDisposable
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
        /// Set the value of the ConnectionStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyConnectionStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the ConnectionStatus property
        /// </summary>
        /// <returns>Value of the ConnectionStatus property.</param>
        string PropertyConnectionStatus();

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
        bool SetPropertyVersion(string aValue);

        /// <summary>
        /// Get a copy of the value of the Version property
        /// </summary>
        /// <returns>Value of the Version property.</param>
        string PropertyVersion();

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
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Exakt:4 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgExakt4 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgExakt4
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateDeviceList;
        private ActionDelegate iDelegateDeviceSettings;
        private ActionDelegate iDelegateConnectionStatus;
        private ActionDelegate iDelegateSet;
        private ActionDelegate iDelegateReprogram;
        private ActionDelegate iDelegateReprogramFallback;
        private ActionDelegate iDelegateChannelMap;
        private ActionDelegate iDelegateSetChannelMap;
        private ActionDelegate iDelegateAudioChannels;
        private ActionDelegate iDelegateSetAudioChannels;
        private ActionDelegate iDelegateVersion;
        private ActionDelegate iDelegateGetIntegratedDevicesPresent;
        private ActionDelegate iDelegateBootIntegratedDevicesToFallback;
        private PropertyString iPropertyDeviceList;
        private PropertyString iPropertyConnectionStatus;
        private PropertyString iPropertyChannelMap;
        private PropertyString iPropertyAudioChannels;
        private PropertyString iPropertyVersion;
        private PropertyBool iPropertyIntegratedDevicesPresent;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgExakt4(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Exakt", 4)
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
        /// Enable the ConnectionStatus property.
        /// </summary>
        public void EnablePropertyConnectionStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus", allowedValues));
            AddProperty(iPropertyConnectionStatus);
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
            List<String> allowedValues = new List<String>();
            iPropertyVersion = new PropertyString(new ParameterString("Version", allowedValues));
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
        /// Set the value of the ConnectionStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConnectionStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyConnectionStatus(string aValue)
        {
            if (iPropertyConnectionStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyConnectionStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ConnectionStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConnectionStatus has previously been called.</remarks>
        /// <returns>Value of the ConnectionStatus property.</returns>
        public string PropertyConnectionStatus()
        {
            if (iPropertyConnectionStatus == null)
                throw new PropertyDisabledError();
            return iPropertyConnectionStatus.Value();
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
        public bool SetPropertyVersion(string aValue)
        {
            if (iPropertyVersion == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyVersion, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Version property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVersion has previously been called.</remarks>
        /// <returns>Value of the Version property.</returns>
        public string PropertyVersion()
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
        /// Signal that the action ConnectionStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ConnectionStatus must be overridden if this is called.</remarks>
        protected void EnableActionConnectionStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ConnectionStatus");
            action.AddOutputParameter(new ParameterRelated("ConnectionStatus", iPropertyConnectionStatus));
            iDelegateConnectionStatus = new ActionDelegate(DoConnectionStatus);
            EnableAction(action, iDelegateConnectionStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Set is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Set must be overridden if this is called.</remarks>
        protected void EnableActionSet()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Set");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            action.AddInputParameter(new ParameterUint("BankId"));
            action.AddInputParameter(new ParameterString("FileUri", allowedValues));
            action.AddInputParameter(new ParameterBool("Mute"));
            action.AddInputParameter(new ParameterBool("Persist"));
            iDelegateSet = new ActionDelegate(DoSet);
            EnableAction(action, iDelegateSet, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Reprogram is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Reprogram must be overridden if this is called.</remarks>
        protected void EnableActionReprogram()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Reprogram");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            action.AddInputParameter(new ParameterString("FileUri", allowedValues));
            iDelegateReprogram = new ActionDelegate(DoReprogram);
            EnableAction(action, iDelegateReprogram, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ReprogramFallback is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ReprogramFallback must be overridden if this is called.</remarks>
        protected void EnableActionReprogramFallback()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ReprogramFallback");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            action.AddInputParameter(new ParameterString("FileUri", allowedValues));
            iDelegateReprogramFallback = new ActionDelegate(DoReprogramFallback);
            EnableAction(action, iDelegateReprogramFallback, GCHandle.ToIntPtr(iGch));
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
        /// ConnectionStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ConnectionStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionConnectionStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aConnectionStatus"></param>
        protected virtual void ConnectionStatus(IDvInvocation aInvocation, out string aConnectionStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Set action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Set action for the owning device.
        ///
        /// Must be implemented iff EnableActionSet was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceId"></param>
        /// <param name="aBankId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aMute"></param>
        /// <param name="aPersist"></param>
        protected virtual void Set(IDvInvocation aInvocation, string aDeviceId, uint aBankId, string aFileUri, bool aMute, bool aPersist)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Reprogram action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Reprogram action for the owning device.
        ///
        /// Must be implemented iff EnableActionReprogram was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        protected virtual void Reprogram(IDvInvocation aInvocation, string aDeviceId, string aFileUri)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ReprogramFallback action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ReprogramFallback action for the owning device.
        ///
        /// Must be implemented iff EnableActionReprogramFallback was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        protected virtual void ReprogramFallback(IDvInvocation aInvocation, string aDeviceId, string aFileUri)
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
        protected virtual void Version(IDvInvocation aInvocation, out string aVersion)
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

        private static int DoDeviceList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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

        private static int DoConnectionStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string connectionStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ConnectionStatus(invocation, out connectionStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ConnectionStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ConnectionStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ConnectionStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ConnectionStatus", connectionStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ConnectionStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSet(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceId;
            uint bankId;
            string fileUri;
            bool mute;
            bool persist;
            try
            {
                invocation.ReadStart();
                deviceId = invocation.ReadString("DeviceId");
                bankId = invocation.ReadUint("BankId");
                fileUri = invocation.ReadString("FileUri");
                mute = invocation.ReadBool("Mute");
                persist = invocation.ReadBool("Persist");
                invocation.ReadEnd();
                self.Set(invocation, deviceId, bankId, fileUri, mute, persist);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Set");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Set" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Set" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Set" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoReprogram(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceId;
            string fileUri;
            try
            {
                invocation.ReadStart();
                deviceId = invocation.ReadString("DeviceId");
                fileUri = invocation.ReadString("FileUri");
                invocation.ReadEnd();
                self.Reprogram(invocation, deviceId, fileUri);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Reprogram");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Reprogram" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Reprogram" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Reprogram" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoReprogramFallback(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string deviceId;
            string fileUri;
            try
            {
                invocation.ReadStart();
                deviceId = invocation.ReadString("DeviceId");
                fileUri = invocation.ReadString("FileUri");
                invocation.ReadEnd();
                self.ReprogramFallback(invocation, deviceId, fileUri);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ReprogramFallback");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ReprogramFallback" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReprogramFallback" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReprogramFallback" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoChannelMap(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string version;
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
                invocation.WriteString("Version", version);
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

        private static int DoGetIntegratedDevicesPresent(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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
            DvProviderAvOpenhomeOrgExakt4 self = (DvProviderAvOpenhomeOrgExakt4)gch.Target;
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

