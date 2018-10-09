using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgPins1 : IDisposable
    {

        /// <summary>
        /// Set the value of the DeviceMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDeviceMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the DeviceMax property
        /// </summary>
        /// <returns>Value of the DeviceMax property.</param>
        uint PropertyDeviceMax();

        /// <summary>
        /// Set the value of the AccountMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAccountMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the AccountMax property
        /// </summary>
        /// <returns>Value of the AccountMax property.</param>
        uint PropertyAccountMax();

        /// <summary>
        /// Set the value of the Modes property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyModes(string aValue);

        /// <summary>
        /// Get a copy of the value of the Modes property
        /// </summary>
        /// <returns>Value of the Modes property.</param>
        string PropertyModes();

        /// <summary>
        /// Set the value of the IdArray property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyIdArray(string aValue);

        /// <summary>
        /// Get a copy of the value of the IdArray property
        /// </summary>
        /// <returns>Value of the IdArray property.</param>
        string PropertyIdArray();

        /// <summary>
        /// Set the value of the CloudConnected property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCloudConnected(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CloudConnected property
        /// </summary>
        /// <returns>Value of the CloudConnected property.</param>
        bool PropertyCloudConnected();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Pins:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgPins1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgPins1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetDeviceMax;
        private ActionDelegate iDelegateGetAccountMax;
        private ActionDelegate iDelegateGetModes;
        private ActionDelegate iDelegateGetIdArray;
        private ActionDelegate iDelegateGetCloudConnected;
        private ActionDelegate iDelegateReadList;
        private ActionDelegate iDelegateInvokeId;
        private ActionDelegate iDelegateInvokeIndex;
        private ActionDelegate iDelegateInvokeUri;
        private ActionDelegate iDelegateSetDevice;
        private ActionDelegate iDelegateSetAccount;
        private ActionDelegate iDelegateClear;
        private ActionDelegate iDelegateSwap;
        private PropertyUint iPropertyDeviceMax;
        private PropertyUint iPropertyAccountMax;
        private PropertyString iPropertyModes;
        private PropertyString iPropertyIdArray;
        private PropertyBool iPropertyCloudConnected;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgPins1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Pins", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the DeviceMax property.
        /// </summary>
        public void EnablePropertyDeviceMax()
        {
            iPropertyDeviceMax = new PropertyUint(new ParameterUint("DeviceMax"));
            AddProperty(iPropertyDeviceMax);
        }

        /// <summary>
        /// Enable the AccountMax property.
        /// </summary>
        public void EnablePropertyAccountMax()
        {
            iPropertyAccountMax = new PropertyUint(new ParameterUint("AccountMax"));
            AddProperty(iPropertyAccountMax);
        }

        /// <summary>
        /// Enable the Modes property.
        /// </summary>
        public void EnablePropertyModes()
        {
            List<String> allowedValues = new List<String>();
            iPropertyModes = new PropertyString(new ParameterString("Modes", allowedValues));
            AddProperty(iPropertyModes);
        }

        /// <summary>
        /// Enable the IdArray property.
        /// </summary>
        public void EnablePropertyIdArray()
        {
            List<String> allowedValues = new List<String>();
            iPropertyIdArray = new PropertyString(new ParameterString("IdArray", allowedValues));
            AddProperty(iPropertyIdArray);
        }

        /// <summary>
        /// Enable the CloudConnected property.
        /// </summary>
        public void EnablePropertyCloudConnected()
        {
            iPropertyCloudConnected = new PropertyBool(new ParameterBool("CloudConnected"));
            AddProperty(iPropertyCloudConnected);
        }

        /// <summary>
        /// Set the value of the DeviceMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDeviceMax(uint aValue)
        {
            if (iPropertyDeviceMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyDeviceMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DeviceMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDeviceMax has previously been called.</remarks>
        /// <returns>Value of the DeviceMax property.</returns>
        public uint PropertyDeviceMax()
        {
            if (iPropertyDeviceMax == null)
                throw new PropertyDisabledError();
            return iPropertyDeviceMax.Value();
        }

        /// <summary>
        /// Set the value of the AccountMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAccountMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAccountMax(uint aValue)
        {
            if (iPropertyAccountMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyAccountMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the AccountMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAccountMax has previously been called.</remarks>
        /// <returns>Value of the AccountMax property.</returns>
        public uint PropertyAccountMax()
        {
            if (iPropertyAccountMax == null)
                throw new PropertyDisabledError();
            return iPropertyAccountMax.Value();
        }

        /// <summary>
        /// Set the value of the Modes property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyModes has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyModes(string aValue)
        {
            if (iPropertyModes == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyModes, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Modes property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyModes has previously been called.</remarks>
        /// <returns>Value of the Modes property.</returns>
        public string PropertyModes()
        {
            if (iPropertyModes == null)
                throw new PropertyDisabledError();
            return iPropertyModes.Value();
        }

        /// <summary>
        /// Set the value of the IdArray property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIdArray has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyIdArray(string aValue)
        {
            if (iPropertyIdArray == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyIdArray, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the IdArray property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIdArray has previously been called.</remarks>
        /// <returns>Value of the IdArray property.</returns>
        public string PropertyIdArray()
        {
            if (iPropertyIdArray == null)
                throw new PropertyDisabledError();
            return iPropertyIdArray.Value();
        }

        /// <summary>
        /// Set the value of the CloudConnected property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCloudConnected has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCloudConnected(bool aValue)
        {
            if (iPropertyCloudConnected == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCloudConnected, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CloudConnected property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCloudConnected has previously been called.</remarks>
        /// <returns>Value of the CloudConnected property.</returns>
        public bool PropertyCloudConnected()
        {
            if (iPropertyCloudConnected == null)
                throw new PropertyDisabledError();
            return iPropertyCloudConnected.Value();
        }

        /// <summary>
        /// Signal that the action GetDeviceMax is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetDeviceMax must be overridden if this is called.</remarks>
        protected void EnableActionGetDeviceMax()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetDeviceMax");
            action.AddOutputParameter(new ParameterRelated("DeviceMax", iPropertyDeviceMax));
            iDelegateGetDeviceMax = new ActionDelegate(DoGetDeviceMax);
            EnableAction(action, iDelegateGetDeviceMax, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetAccountMax is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetAccountMax must be overridden if this is called.</remarks>
        protected void EnableActionGetAccountMax()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetAccountMax");
            action.AddOutputParameter(new ParameterRelated("AccountMax", iPropertyAccountMax));
            iDelegateGetAccountMax = new ActionDelegate(DoGetAccountMax);
            EnableAction(action, iDelegateGetAccountMax, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetModes is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetModes must be overridden if this is called.</remarks>
        protected void EnableActionGetModes()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetModes");
            action.AddOutputParameter(new ParameterRelated("Modes", iPropertyModes));
            iDelegateGetModes = new ActionDelegate(DoGetModes);
            EnableAction(action, iDelegateGetModes, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetIdArray is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetIdArray must be overridden if this is called.</remarks>
        protected void EnableActionGetIdArray()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetIdArray");
            action.AddOutputParameter(new ParameterRelated("IdArray", iPropertyIdArray));
            iDelegateGetIdArray = new ActionDelegate(DoGetIdArray);
            EnableAction(action, iDelegateGetIdArray, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetCloudConnected is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetCloudConnected must be overridden if this is called.</remarks>
        protected void EnableActionGetCloudConnected()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetCloudConnected");
            action.AddOutputParameter(new ParameterRelated("CloudConnected", iPropertyCloudConnected));
            iDelegateGetCloudConnected = new ActionDelegate(DoGetCloudConnected);
            EnableAction(action, iDelegateGetCloudConnected, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ReadList is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ReadList must be overridden if this is called.</remarks>
        protected void EnableActionReadList()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ReadList");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Ids", allowedValues));
            action.AddOutputParameter(new ParameterString("List", allowedValues));
            iDelegateReadList = new ActionDelegate(DoReadList);
            EnableAction(action, iDelegateReadList, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InvokeId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InvokeId must be overridden if this is called.</remarks>
        protected void EnableActionInvokeId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InvokeId");
            action.AddInputParameter(new ParameterUint("Id"));
            iDelegateInvokeId = new ActionDelegate(DoInvokeId);
            EnableAction(action, iDelegateInvokeId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InvokeIndex is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InvokeIndex must be overridden if this is called.</remarks>
        protected void EnableActionInvokeIndex()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InvokeIndex");
            action.AddInputParameter(new ParameterUint("Index"));
            iDelegateInvokeIndex = new ActionDelegate(DoInvokeIndex);
            EnableAction(action, iDelegateInvokeIndex, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InvokeUri is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InvokeUri must be overridden if this is called.</remarks>
        protected void EnableActionInvokeUri()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InvokeUri");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Mode", allowedValues));
            action.AddInputParameter(new ParameterString("Type", allowedValues));
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            action.AddInputParameter(new ParameterBool("Shuffle"));
            iDelegateInvokeUri = new ActionDelegate(DoInvokeUri);
            EnableAction(action, iDelegateInvokeUri, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetDevice is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDevice must be overridden if this is called.</remarks>
        protected void EnableActionSetDevice()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDevice");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("Index"));
            action.AddInputParameter(new ParameterString("Mode", allowedValues));
            action.AddInputParameter(new ParameterString("Type", allowedValues));
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            action.AddInputParameter(new ParameterString("Title", allowedValues));
            action.AddInputParameter(new ParameterString("Description", allowedValues));
            action.AddInputParameter(new ParameterString("ArtworkUri", allowedValues));
            action.AddInputParameter(new ParameterBool("Shuffle"));
            iDelegateSetDevice = new ActionDelegate(DoSetDevice);
            EnableAction(action, iDelegateSetDevice, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetAccount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetAccount must be overridden if this is called.</remarks>
        protected void EnableActionSetAccount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetAccount");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("Index"));
            action.AddInputParameter(new ParameterString("Mode", allowedValues));
            action.AddInputParameter(new ParameterString("Type", allowedValues));
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            action.AddInputParameter(new ParameterString("Title", allowedValues));
            action.AddInputParameter(new ParameterString("Description", allowedValues));
            action.AddInputParameter(new ParameterString("ArtworkUri", allowedValues));
            action.AddInputParameter(new ParameterBool("Shuffle"));
            iDelegateSetAccount = new ActionDelegate(DoSetAccount);
            EnableAction(action, iDelegateSetAccount, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Clear is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Clear must be overridden if this is called.</remarks>
        protected void EnableActionClear()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Clear");
            action.AddInputParameter(new ParameterUint("Id"));
            iDelegateClear = new ActionDelegate(DoClear);
            EnableAction(action, iDelegateClear, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Swap is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Swap must be overridden if this is called.</remarks>
        protected void EnableActionSwap()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Swap");
            action.AddInputParameter(new ParameterUint("Index1"));
            action.AddInputParameter(new ParameterUint("Index2"));
            iDelegateSwap = new ActionDelegate(DoSwap);
            EnableAction(action, iDelegateSwap, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetDeviceMax action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetDeviceMax action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetDeviceMax was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDeviceMax"></param>
        protected virtual void GetDeviceMax(IDvInvocation aInvocation, out uint aDeviceMax)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetAccountMax action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetAccountMax action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetAccountMax was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAccountMax"></param>
        protected virtual void GetAccountMax(IDvInvocation aInvocation, out uint aAccountMax)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetModes action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetModes action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetModes was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aModes"></param>
        protected virtual void GetModes(IDvInvocation aInvocation, out string aModes)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetIdArray action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetIdArray action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetIdArray was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIdArray"></param>
        protected virtual void GetIdArray(IDvInvocation aInvocation, out string aIdArray)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetCloudConnected action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetCloudConnected action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetCloudConnected was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aCloudConnected"></param>
        protected virtual void GetCloudConnected(IDvInvocation aInvocation, out bool aCloudConnected)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ReadList action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ReadList action for the owning device.
        ///
        /// Must be implemented iff EnableActionReadList was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIds"></param>
        /// <param name="aList"></param>
        protected virtual void ReadList(IDvInvocation aInvocation, string aIds, out string aList)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InvokeId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InvokeId action for the owning device.
        ///
        /// Must be implemented iff EnableActionInvokeId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        protected virtual void InvokeId(IDvInvocation aInvocation, uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InvokeIndex action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InvokeIndex action for the owning device.
        ///
        /// Must be implemented iff EnableActionInvokeIndex was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIndex"></param>
        protected virtual void InvokeIndex(IDvInvocation aInvocation, uint aIndex)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InvokeUri action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InvokeUri action for the owning device.
        ///
        /// Must be implemented iff EnableActionInvokeUri was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aShuffle"></param>
        protected virtual void InvokeUri(IDvInvocation aInvocation, string aMode, string aType, string aUri, bool aShuffle)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetDevice action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDevice action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDevice was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        protected virtual void SetDevice(IDvInvocation aInvocation, uint aIndex, string aMode, string aType, string aUri, string aTitle, string aDescription, string aArtworkUri, bool aShuffle)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetAccount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetAccount action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetAccount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIndex"></param>
        /// <param name="aMode"></param>
        /// <param name="aType"></param>
        /// <param name="aUri"></param>
        /// <param name="aTitle"></param>
        /// <param name="aDescription"></param>
        /// <param name="aArtworkUri"></param>
        /// <param name="aShuffle"></param>
        protected virtual void SetAccount(IDvInvocation aInvocation, uint aIndex, string aMode, string aType, string aUri, string aTitle, string aDescription, string aArtworkUri, bool aShuffle)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Clear action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Clear action for the owning device.
        ///
        /// Must be implemented iff EnableActionClear was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        protected virtual void Clear(IDvInvocation aInvocation, uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Swap action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Swap action for the owning device.
        ///
        /// Must be implemented iff EnableActionSwap was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIndex1"></param>
        /// <param name="aIndex2"></param>
        protected virtual void Swap(IDvInvocation aInvocation, uint aIndex1, uint aIndex2)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetDeviceMax(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint deviceMax;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetDeviceMax(invocation, out deviceMax);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetDeviceMax");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetDeviceMax" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceMax" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("DeviceMax", deviceMax);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetDeviceMax" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetAccountMax(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint accountMax;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetAccountMax(invocation, out accountMax);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetAccountMax");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetAccountMax" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAccountMax" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("AccountMax", accountMax);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAccountMax" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetModes(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string modes;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetModes(invocation, out modes);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetModes");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetModes" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetModes" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Modes", modes);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetModes" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetIdArray(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string idArray;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetIdArray(invocation, out idArray);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetIdArray");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetIdArray" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIdArray" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("IdArray", idArray);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIdArray" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetCloudConnected(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool cloudConnected;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetCloudConnected(invocation, out cloudConnected);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetCloudConnected");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetCloudConnected" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCloudConnected" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("CloudConnected", cloudConnected);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCloudConnected" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoReadList(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string ids;
            string list;
            try
            {
                invocation.ReadStart();
                ids = invocation.ReadString("Ids");
                invocation.ReadEnd();
                self.ReadList(invocation, ids, out list);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ReadList");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ReadList" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReadList" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReadList" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInvokeId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint id;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadUint("Id");
                invocation.ReadEnd();
                self.InvokeId(invocation, id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InvokeId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "InvokeId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeId" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInvokeIndex(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint index;
            try
            {
                invocation.ReadStart();
                index = invocation.ReadUint("Index");
                invocation.ReadEnd();
                self.InvokeIndex(invocation, index);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InvokeIndex");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "InvokeIndex" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeIndex" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeIndex" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInvokeUri(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string mode;
            string type;
            string uri;
            bool shuffle;
            try
            {
                invocation.ReadStart();
                mode = invocation.ReadString("Mode");
                type = invocation.ReadString("Type");
                uri = invocation.ReadString("Uri");
                shuffle = invocation.ReadBool("Shuffle");
                invocation.ReadEnd();
                self.InvokeUri(invocation, mode, type, uri, shuffle);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InvokeUri");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "InvokeUri" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeUri" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InvokeUri" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetDevice(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint index;
            string mode;
            string type;
            string uri;
            string title;
            string description;
            string artworkUri;
            bool shuffle;
            try
            {
                invocation.ReadStart();
                index = invocation.ReadUint("Index");
                mode = invocation.ReadString("Mode");
                type = invocation.ReadString("Type");
                uri = invocation.ReadString("Uri");
                title = invocation.ReadString("Title");
                description = invocation.ReadString("Description");
                artworkUri = invocation.ReadString("ArtworkUri");
                shuffle = invocation.ReadBool("Shuffle");
                invocation.ReadEnd();
                self.SetDevice(invocation, index, mode, type, uri, title, description, artworkUri, shuffle);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDevice");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDevice" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDevice" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDevice" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetAccount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint index;
            string mode;
            string type;
            string uri;
            string title;
            string description;
            string artworkUri;
            bool shuffle;
            try
            {
                invocation.ReadStart();
                index = invocation.ReadUint("Index");
                mode = invocation.ReadString("Mode");
                type = invocation.ReadString("Type");
                uri = invocation.ReadString("Uri");
                title = invocation.ReadString("Title");
                description = invocation.ReadString("Description");
                artworkUri = invocation.ReadString("ArtworkUri");
                shuffle = invocation.ReadBool("Shuffle");
                invocation.ReadEnd();
                self.SetAccount(invocation, index, mode, type, uri, title, description, artworkUri, shuffle);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetAccount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetAccount" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAccount" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAccount" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClear(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint id;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadUint("Id");
                invocation.ReadEnd();
                self.Clear(invocation, id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Clear");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Clear" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Clear" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Clear" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSwap(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgPins1 self = (DvProviderAvOpenhomeOrgPins1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint index1;
            uint index2;
            try
            {
                invocation.ReadStart();
                index1 = invocation.ReadUint("Index1");
                index2 = invocation.ReadUint("Index2");
                invocation.ReadEnd();
                self.Swap(invocation, index1, index2);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Swap");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Swap" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Swap" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Swap" });
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

