using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkVolkano2 : IDisposable
    {

        /// <summary>
        /// Set the value of the DeviceInfo property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDeviceInfo(string aValue);

        /// <summary>
        /// Get a copy of the value of the DeviceInfo property
        /// </summary>
        /// <returns>Value of the DeviceInfo property.</param>
        string PropertyDeviceInfo();

        /// <summary>
        /// Set the value of the IpAddressList property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyIpAddressList(string aValue);

        /// <summary>
        /// Get a copy of the value of the IpAddressList property
        /// </summary>
        /// <returns>Value of the IpAddressList property.</param>
        string PropertyIpAddressList();

        /// <summary>
        /// Set the value of the MacAddressList property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMacAddressList(string aValue);

        /// <summary>
        /// Get a copy of the value of the MacAddressList property
        /// </summary>
        /// <returns>Value of the MacAddressList property.</param>
        string PropertyMacAddressList();

        /// <summary>
        /// Set the value of the CoreBoardId property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCoreBoardId(string aValue);

        /// <summary>
        /// Get a copy of the value of the CoreBoardId property
        /// </summary>
        /// <returns>Value of the CoreBoardId property.</param>
        string PropertyCoreBoardId();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Volkano:2 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkVolkano2 : DvProvider, IDisposable, IDvProviderLinnCoUkVolkano2
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateReboot;
        private ActionDelegate iDelegateBootMode;
        private ActionDelegate iDelegateSetBootMode;
        private ActionDelegate iDelegateBspType;
        private ActionDelegate iDelegateUglyName;
        private ActionDelegate iDelegateIpAddress;
        private ActionDelegate iDelegateIpAddressList;
        private ActionDelegate iDelegateMacAddress;
        private ActionDelegate iDelegateMacAddressList;
        private ActionDelegate iDelegateProductId;
        private ActionDelegate iDelegateBoardId;
        private ActionDelegate iDelegateBoardType;
        private ActionDelegate iDelegateMaxBoards;
        private ActionDelegate iDelegateSoftwareVersion;
        private ActionDelegate iDelegateSoftwareUpdate;
        private ActionDelegate iDelegateDeviceInfo;
        private ActionDelegate iDelegateCoreBoardId;
        private PropertyString iPropertyDeviceInfo;
        private PropertyString iPropertyIpAddressList;
        private PropertyString iPropertyMacAddressList;
        private PropertyString iPropertyCoreBoardId;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkVolkano2(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Volkano", 2)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the DeviceInfo property.
        /// </summary>
        public void EnablePropertyDeviceInfo()
        {
            List<String> allowedValues = new List<String>();
            iPropertyDeviceInfo = new PropertyString(new ParameterString("DeviceInfo", allowedValues));
            AddProperty(iPropertyDeviceInfo);
        }

        /// <summary>
        /// Enable the IpAddressList property.
        /// </summary>
        public void EnablePropertyIpAddressList()
        {
            List<String> allowedValues = new List<String>();
            iPropertyIpAddressList = new PropertyString(new ParameterString("IpAddressList", allowedValues));
            AddProperty(iPropertyIpAddressList);
        }

        /// <summary>
        /// Enable the MacAddressList property.
        /// </summary>
        public void EnablePropertyMacAddressList()
        {
            List<String> allowedValues = new List<String>();
            iPropertyMacAddressList = new PropertyString(new ParameterString("MacAddressList", allowedValues));
            AddProperty(iPropertyMacAddressList);
        }

        /// <summary>
        /// Enable the CoreBoardId property.
        /// </summary>
        public void EnablePropertyCoreBoardId()
        {
            List<String> allowedValues = new List<String>();
            iPropertyCoreBoardId = new PropertyString(new ParameterString("CoreBoardId", allowedValues));
            AddProperty(iPropertyCoreBoardId);
        }

        /// <summary>
        /// Set the value of the DeviceInfo property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceInfo has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDeviceInfo(string aValue)
        {
            if (iPropertyDeviceInfo == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyDeviceInfo, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DeviceInfo property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceInfo has previously been called.</remarks>
        /// <returns>Value of the DeviceInfo property.</returns>
        public string PropertyDeviceInfo()
        {
            if (iPropertyDeviceInfo == null)
                throw new PropertyDisabledError();
            return iPropertyDeviceInfo.Value();
        }

        /// <summary>
        /// Set the value of the IpAddressList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIpAddressList has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyIpAddressList(string aValue)
        {
            if (iPropertyIpAddressList == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyIpAddressList, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the IpAddressList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIpAddressList has previously been called.</remarks>
        /// <returns>Value of the IpAddressList property.</returns>
        public string PropertyIpAddressList()
        {
            if (iPropertyIpAddressList == null)
                throw new PropertyDisabledError();
            return iPropertyIpAddressList.Value();
        }

        /// <summary>
        /// Set the value of the MacAddressList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMacAddressList has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMacAddressList(string aValue)
        {
            if (iPropertyMacAddressList == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyMacAddressList, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the MacAddressList property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMacAddressList has previously been called.</remarks>
        /// <returns>Value of the MacAddressList property.</returns>
        public string PropertyMacAddressList()
        {
            if (iPropertyMacAddressList == null)
                throw new PropertyDisabledError();
            return iPropertyMacAddressList.Value();
        }

        /// <summary>
        /// Set the value of the CoreBoardId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCoreBoardId has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCoreBoardId(string aValue)
        {
            if (iPropertyCoreBoardId == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyCoreBoardId, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CoreBoardId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCoreBoardId has previously been called.</remarks>
        /// <returns>Value of the CoreBoardId property.</returns>
        public string PropertyCoreBoardId()
        {
            if (iPropertyCoreBoardId == null)
                throw new PropertyDisabledError();
            return iPropertyCoreBoardId.Value();
        }

        /// <summary>
        /// Signal that the action Reboot is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Reboot must be overridden if this is called.</remarks>
        protected void EnableActionReboot()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Reboot");
            iDelegateReboot = new ActionDelegate(DoReboot);
            EnableAction(action, iDelegateReboot, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BootMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BootMode must be overridden if this is called.</remarks>
        protected void EnableActionBootMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BootMode");
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Main");
            allowedValues.Add("Fallback");
            allowedValues.Add("Ram");
            action.AddOutputParameter(new ParameterString("aMode", allowedValues));
            allowedValues.Clear();
            iDelegateBootMode = new ActionDelegate(DoBootMode);
            EnableAction(action, iDelegateBootMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetBootMode is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetBootMode must be overridden if this is called.</remarks>
        protected void EnableActionSetBootMode()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetBootMode");
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Main");
            allowedValues.Add("Fallback");
            action.AddInputParameter(new ParameterString("aMode", allowedValues));
            allowedValues.Clear();
            iDelegateSetBootMode = new ActionDelegate(DoSetBootMode);
            EnableAction(action, iDelegateSetBootMode, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BspType is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BspType must be overridden if this is called.</remarks>
        protected void EnableActionBspType()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BspType");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aBspType", allowedValues));
            iDelegateBspType = new ActionDelegate(DoBspType);
            EnableAction(action, iDelegateBspType, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action UglyName is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// UglyName must be overridden if this is called.</remarks>
        protected void EnableActionUglyName()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("UglyName");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aUglyName", allowedValues));
            iDelegateUglyName = new ActionDelegate(DoUglyName);
            EnableAction(action, iDelegateUglyName, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action IpAddress is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// IpAddress must be overridden if this is called.</remarks>
        protected void EnableActionIpAddress()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("IpAddress");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aIpAddress", allowedValues));
            iDelegateIpAddress = new ActionDelegate(DoIpAddress);
            EnableAction(action, iDelegateIpAddress, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action IpAddressList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// IpAddressList must be overridden if this is called.</remarks>
        protected void EnableActionIpAddressList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("IpAddressList");
            action.AddOutputParameter(new ParameterRelated("aIpAddressList", iPropertyIpAddressList));
            iDelegateIpAddressList = new ActionDelegate(DoIpAddressList);
            EnableAction(action, iDelegateIpAddressList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action MacAddress is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// MacAddress must be overridden if this is called.</remarks>
        protected void EnableActionMacAddress()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("MacAddress");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aMacAddress", allowedValues));
            iDelegateMacAddress = new ActionDelegate(DoMacAddress);
            EnableAction(action, iDelegateMacAddress, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action MacAddressList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// MacAddressList must be overridden if this is called.</remarks>
        protected void EnableActionMacAddressList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("MacAddressList");
            action.AddOutputParameter(new ParameterRelated("aMacAddressList", iPropertyMacAddressList));
            iDelegateMacAddressList = new ActionDelegate(DoMacAddressList);
            EnableAction(action, iDelegateMacAddressList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ProductId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ProductId must be overridden if this is called.</remarks>
        protected void EnableActionProductId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ProductId");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aProductNumber", allowedValues));
            iDelegateProductId = new ActionDelegate(DoProductId);
            EnableAction(action, iDelegateProductId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BoardId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BoardId must be overridden if this is called.</remarks>
        protected void EnableActionBoardId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BoardId");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("aIndex"));
            action.AddOutputParameter(new ParameterString("aBoardNumber", allowedValues));
            iDelegateBoardId = new ActionDelegate(DoBoardId);
            EnableAction(action, iDelegateBoardId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BoardType is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BoardType must be overridden if this is called.</remarks>
        protected void EnableActionBoardType()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BoardType");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("aIndex"));
            action.AddOutputParameter(new ParameterString("aBoardNumber", allowedValues));
            iDelegateBoardType = new ActionDelegate(DoBoardType);
            EnableAction(action, iDelegateBoardType, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action MaxBoards is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// MaxBoards must be overridden if this is called.</remarks>
        protected void EnableActionMaxBoards()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("MaxBoards");
            action.AddOutputParameter(new ParameterUint("aMaxBoards"));
            iDelegateMaxBoards = new ActionDelegate(DoMaxBoards);
            EnableAction(action, iDelegateMaxBoards, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SoftwareVersion is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SoftwareVersion must be overridden if this is called.</remarks>
        protected void EnableActionSoftwareVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SoftwareVersion");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("aSoftwareVersion", allowedValues));
            iDelegateSoftwareVersion = new ActionDelegate(DoSoftwareVersion);
            EnableAction(action, iDelegateSoftwareVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SoftwareUpdate is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SoftwareUpdate must be overridden if this is called.</remarks>
        protected void EnableActionSoftwareUpdate()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SoftwareUpdate");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterBool("aAvailable"));
            action.AddOutputParameter(new ParameterString("aSoftwareVersion", allowedValues));
            iDelegateSoftwareUpdate = new ActionDelegate(DoSoftwareUpdate);
            EnableAction(action, iDelegateSoftwareUpdate, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action DeviceInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DeviceInfo must be overridden if this is called.</remarks>
        protected void EnableActionDeviceInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DeviceInfo");
            action.AddOutputParameter(new ParameterRelated("aDeviceInfoXml", iPropertyDeviceInfo));
            iDelegateDeviceInfo = new ActionDelegate(DoDeviceInfo);
            EnableAction(action, iDelegateDeviceInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action CoreBoardId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// CoreBoardId must be overridden if this is called.</remarks>
        protected void EnableActionCoreBoardId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("CoreBoardId");
            action.AddOutputParameter(new ParameterRelated("aCoreBoardId", iPropertyCoreBoardId));
            iDelegateCoreBoardId = new ActionDelegate(DoCoreBoardId);
            EnableAction(action, iDelegateCoreBoardId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Reboot action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Reboot action for the owning device.
        ///
        /// Must be implemented iff EnableActionReboot was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Reboot(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BootMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BootMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionBootMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaMode"></param>
        protected virtual void BootMode(IDvInvocation aInvocation, out string aaMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetBootMode action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetBootMode action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetBootMode was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaMode"></param>
        protected virtual void SetBootMode(IDvInvocation aInvocation, string aaMode)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BspType action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BspType action for the owning device.
        ///
        /// Must be implemented iff EnableActionBspType was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaBspType"></param>
        protected virtual void BspType(IDvInvocation aInvocation, out string aaBspType)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// UglyName action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// UglyName action for the owning device.
        ///
        /// Must be implemented iff EnableActionUglyName was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaUglyName"></param>
        protected virtual void UglyName(IDvInvocation aInvocation, out string aaUglyName)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// IpAddress action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// IpAddress action for the owning device.
        ///
        /// Must be implemented iff EnableActionIpAddress was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaIpAddress"></param>
        protected virtual void IpAddress(IDvInvocation aInvocation, out string aaIpAddress)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// IpAddressList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// IpAddressList action for the owning device.
        ///
        /// Must be implemented iff EnableActionIpAddressList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaIpAddressList"></param>
        protected virtual void IpAddressList(IDvInvocation aInvocation, out string aaIpAddressList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// MacAddress action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// MacAddress action for the owning device.
        ///
        /// Must be implemented iff EnableActionMacAddress was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaMacAddress"></param>
        protected virtual void MacAddress(IDvInvocation aInvocation, out string aaMacAddress)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// MacAddressList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// MacAddressList action for the owning device.
        ///
        /// Must be implemented iff EnableActionMacAddressList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaMacAddressList"></param>
        protected virtual void MacAddressList(IDvInvocation aInvocation, out string aaMacAddressList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ProductId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ProductId action for the owning device.
        ///
        /// Must be implemented iff EnableActionProductId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaProductNumber"></param>
        protected virtual void ProductId(IDvInvocation aInvocation, out string aaProductNumber)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BoardId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BoardId action for the owning device.
        ///
        /// Must be implemented iff EnableActionBoardId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaIndex"></param>
        /// <param name="aaBoardNumber"></param>
        protected virtual void BoardId(IDvInvocation aInvocation, uint aaIndex, out string aaBoardNumber)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BoardType action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BoardType action for the owning device.
        ///
        /// Must be implemented iff EnableActionBoardType was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaIndex"></param>
        /// <param name="aaBoardNumber"></param>
        protected virtual void BoardType(IDvInvocation aInvocation, uint aaIndex, out string aaBoardNumber)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// MaxBoards action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// MaxBoards action for the owning device.
        ///
        /// Must be implemented iff EnableActionMaxBoards was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaMaxBoards"></param>
        protected virtual void MaxBoards(IDvInvocation aInvocation, out uint aaMaxBoards)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SoftwareVersion action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SoftwareVersion action for the owning device.
        ///
        /// Must be implemented iff EnableActionSoftwareVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaSoftwareVersion"></param>
        protected virtual void SoftwareVersion(IDvInvocation aInvocation, out string aaSoftwareVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SoftwareUpdate action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SoftwareUpdate action for the owning device.
        ///
        /// Must be implemented iff EnableActionSoftwareUpdate was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaAvailable"></param>
        /// <param name="aaSoftwareVersion"></param>
        protected virtual void SoftwareUpdate(IDvInvocation aInvocation, out bool aaAvailable, out string aaSoftwareVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// DeviceInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DeviceInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionDeviceInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaDeviceInfoXml"></param>
        protected virtual void DeviceInfo(IDvInvocation aInvocation, out string aaDeviceInfoXml)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// CoreBoardId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// CoreBoardId action for the owning device.
        ///
        /// Must be implemented iff EnableActionCoreBoardId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaCoreBoardId"></param>
        protected virtual void CoreBoardId(IDvInvocation aInvocation, out string aaCoreBoardId)
        {
            throw (new ActionDisabledError());
        }

        private static int DoReboot(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Reboot(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Reboot");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Reboot" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Reboot" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Reboot" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBootMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aMode;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.BootMode(invocation, out aMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BootMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BootMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BootMode" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aMode", aMode);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BootMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetBootMode(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aMode;
            try
            {
                invocation.ReadStart();
                aMode = invocation.ReadString("aMode");
                invocation.ReadEnd();
                self.SetBootMode(invocation, aMode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetBootMode");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetBootMode" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBootMode" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBootMode" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBspType(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aBspType;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.BspType(invocation, out aBspType);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BspType");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BspType" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BspType" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aBspType", aBspType);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BspType" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUglyName(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aUglyName;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.UglyName(invocation, out aUglyName);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "UglyName");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "UglyName" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UglyName" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aUglyName", aUglyName);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UglyName" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoIpAddress(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aIpAddress;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.IpAddress(invocation, out aIpAddress);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "IpAddress");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "IpAddress" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IpAddress" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aIpAddress", aIpAddress);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IpAddress" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoIpAddressList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aIpAddressList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.IpAddressList(invocation, out aIpAddressList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "IpAddressList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "IpAddressList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IpAddressList" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aIpAddressList", aIpAddressList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "IpAddressList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoMacAddress(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aMacAddress;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.MacAddress(invocation, out aMacAddress);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "MacAddress");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "MacAddress" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MacAddress" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aMacAddress", aMacAddress);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MacAddress" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoMacAddressList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aMacAddressList;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.MacAddressList(invocation, out aMacAddressList);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "MacAddressList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "MacAddressList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MacAddressList" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aMacAddressList", aMacAddressList);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MacAddressList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoProductId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aProductNumber;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ProductId(invocation, out aProductNumber);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ProductId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ProductId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ProductId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aProductNumber", aProductNumber);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ProductId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBoardId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aIndex;
            string aBoardNumber;
            try
            {
                invocation.ReadStart();
                aIndex = invocation.ReadUint("aIndex");
                invocation.ReadEnd();
                self.BoardId(invocation, aIndex, out aBoardNumber);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BoardId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BoardId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BoardId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aBoardNumber", aBoardNumber);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BoardId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBoardType(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aIndex;
            string aBoardNumber;
            try
            {
                invocation.ReadStart();
                aIndex = invocation.ReadUint("aIndex");
                invocation.ReadEnd();
                self.BoardType(invocation, aIndex, out aBoardNumber);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BoardType");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BoardType" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BoardType" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aBoardNumber", aBoardNumber);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BoardType" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoMaxBoards(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint aMaxBoards;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.MaxBoards(invocation, out aMaxBoards);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "MaxBoards");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "MaxBoards" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MaxBoards" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("aMaxBoards", aMaxBoards);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "MaxBoards" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSoftwareVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aSoftwareVersion;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SoftwareVersion(invocation, out aSoftwareVersion);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SoftwareVersion");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SoftwareVersion" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SoftwareVersion" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aSoftwareVersion", aSoftwareVersion);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SoftwareVersion" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSoftwareUpdate(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool aAvailable;
            string aSoftwareVersion;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SoftwareUpdate(invocation, out aAvailable, out aSoftwareVersion);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SoftwareUpdate");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SoftwareUpdate" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SoftwareUpdate" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("aAvailable", aAvailable);
                invocation.WriteString("aSoftwareVersion", aSoftwareVersion);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SoftwareUpdate" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDeviceInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aDeviceInfoXml;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.DeviceInfo(invocation, out aDeviceInfoXml);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DeviceInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "DeviceInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aDeviceInfoXml", aDeviceInfoXml);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DeviceInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoCoreBoardId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkVolkano2 self = (DvProviderLinnCoUkVolkano2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aCoreBoardId;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.CoreBoardId(invocation, out aCoreBoardId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "CoreBoardId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "CoreBoardId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CoreBoardId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aCoreBoardId", aCoreBoardId);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CoreBoardId" });
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

