using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgOAuth1 : IDisposable
    {

        /// <summary>
        /// Set the value of the PublicKey property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPublicKey(string aValue);

        /// <summary>
        /// Get a copy of the value of the PublicKey property
        /// </summary>
        /// <returns>Value of the PublicKey property.</param>
        string PropertyPublicKey();

        /// <summary>
        /// Set the value of the UpdateId property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateId(uint aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateId property
        /// </summary>
        /// <returns>Value of the UpdateId property.</param>
        uint PropertyUpdateId();

        /// <summary>
        /// Set the value of the JobUpdateId property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyJobUpdateId(uint aValue);

        /// <summary>
        /// Get a copy of the value of the JobUpdateId property
        /// </summary>
        /// <returns>Value of the JobUpdateId property.</param>
        uint PropertyJobUpdateId();

        /// <summary>
        /// Set the value of the SupportedServices property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySupportedServices(string aValue);

        /// <summary>
        /// Get a copy of the value of the SupportedServices property
        /// </summary>
        /// <returns>Value of the SupportedServices property.</param>
        string PropertySupportedServices();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:OAuth:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgOAuth1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgOAuth1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetToken;
        private ActionDelegate iDelegateGetPublicKey;
        private ActionDelegate iDelegateClearToken;
        private ActionDelegate iDelegateClearShortLivedToken;
        private ActionDelegate iDelegateClearLongLivedToken;
        private ActionDelegate iDelegateClearShortLivedTokens;
        private ActionDelegate iDelegateClearLongLivedTokens;
        private ActionDelegate iDelegateClearAllTokens;
        private ActionDelegate iDelegateGetUpdateId;
        private ActionDelegate iDelegateGetServiceStatus;
        private ActionDelegate iDelegateGetJobUpdateId;
        private ActionDelegate iDelegateGetJobStatus;
        private ActionDelegate iDelegateGetSupportedServices;
        private ActionDelegate iDelegateBeginLimitedInputFlow;
        private PropertyString iPropertyPublicKey;
        private PropertyUint iPropertyUpdateId;
        private PropertyUint iPropertyJobUpdateId;
        private PropertyString iPropertySupportedServices;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgOAuth1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "OAuth", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the PublicKey property.
        /// </summary>
        public void EnablePropertyPublicKey()
        {
            List<String> allowedValues = new List<String>();
            iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey", allowedValues));
            AddProperty(iPropertyPublicKey);
        }

        /// <summary>
        /// Enable the UpdateId property.
        /// </summary>
        public void EnablePropertyUpdateId()
        {
            iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
            AddProperty(iPropertyUpdateId);
        }

        /// <summary>
        /// Enable the JobUpdateId property.
        /// </summary>
        public void EnablePropertyJobUpdateId()
        {
            iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
            AddProperty(iPropertyJobUpdateId);
        }

        /// <summary>
        /// Enable the SupportedServices property.
        /// </summary>
        public void EnablePropertySupportedServices()
        {
            List<String> allowedValues = new List<String>();
            iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices", allowedValues));
            AddProperty(iPropertySupportedServices);
        }

        /// <summary>
        /// Set the value of the PublicKey property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPublicKey has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPublicKey(string aValue)
        {
            if (iPropertyPublicKey == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyPublicKey, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PublicKey property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPublicKey has previously been called.</remarks>
        /// <returns>Value of the PublicKey property.</returns>
        public string PropertyPublicKey()
        {
            if (iPropertyPublicKey == null)
                throw new PropertyDisabledError();
            return iPropertyPublicKey.Value();
        }

        /// <summary>
        /// Set the value of the UpdateId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateId has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateId(uint aValue)
        {
            if (iPropertyUpdateId == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyUpdateId, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateId has previously been called.</remarks>
        /// <returns>Value of the UpdateId property.</returns>
        public uint PropertyUpdateId()
        {
            if (iPropertyUpdateId == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateId.Value();
        }

        /// <summary>
        /// Set the value of the JobUpdateId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyJobUpdateId has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyJobUpdateId(uint aValue)
        {
            if (iPropertyJobUpdateId == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyJobUpdateId, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the JobUpdateId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyJobUpdateId has previously been called.</remarks>
        /// <returns>Value of the JobUpdateId property.</returns>
        public uint PropertyJobUpdateId()
        {
            if (iPropertyJobUpdateId == null)
                throw new PropertyDisabledError();
            return iPropertyJobUpdateId.Value();
        }

        /// <summary>
        /// Set the value of the SupportedServices property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySupportedServices has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySupportedServices(string aValue)
        {
            if (iPropertySupportedServices == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySupportedServices, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SupportedServices property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySupportedServices has previously been called.</remarks>
        /// <returns>Value of the SupportedServices property.</returns>
        public string PropertySupportedServices()
        {
            if (iPropertySupportedServices == null)
                throw new PropertyDisabledError();
            return iPropertySupportedServices.Value();
        }

        /// <summary>
        /// Signal that the action SetToken is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetToken must be overridden if this is called.</remarks>
        protected void EnableActionSetToken()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetToken");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            action.AddInputParameter(new ParameterString("TokenId", allowedValues));
            action.AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
            action.AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
            action.AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
            action.AddInputParameter(new ParameterBool("IsLongLived"));
            iDelegateSetToken = new ActionDelegate(DoSetToken);
            EnableAction(action, iDelegateSetToken, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetPublicKey is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPublicKey must be overridden if this is called.</remarks>
        protected void EnableActionGetPublicKey()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPublicKey");
            action.AddOutputParameter(new ParameterRelated("PublicKey", iPropertyPublicKey));
            iDelegateGetPublicKey = new ActionDelegate(DoGetPublicKey);
            EnableAction(action, iDelegateGetPublicKey, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearToken is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearToken must be overridden if this is called.</remarks>
        protected void EnableActionClearToken()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearToken");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            action.AddInputParameter(new ParameterString("TokenId", allowedValues));
            iDelegateClearToken = new ActionDelegate(DoClearToken);
            EnableAction(action, iDelegateClearToken, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearShortLivedToken is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearShortLivedToken must be overridden if this is called.</remarks>
        protected void EnableActionClearShortLivedToken()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearShortLivedToken");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            action.AddInputParameter(new ParameterString("TokenId", allowedValues));
            iDelegateClearShortLivedToken = new ActionDelegate(DoClearShortLivedToken);
            EnableAction(action, iDelegateClearShortLivedToken, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearLongLivedToken is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearLongLivedToken must be overridden if this is called.</remarks>
        protected void EnableActionClearLongLivedToken()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearLongLivedToken");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            action.AddInputParameter(new ParameterString("TokenId", allowedValues));
            iDelegateClearLongLivedToken = new ActionDelegate(DoClearLongLivedToken);
            EnableAction(action, iDelegateClearLongLivedToken, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearShortLivedTokens is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearShortLivedTokens must be overridden if this is called.</remarks>
        protected void EnableActionClearShortLivedTokens()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearShortLivedTokens");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            iDelegateClearShortLivedTokens = new ActionDelegate(DoClearShortLivedTokens);
            EnableAction(action, iDelegateClearShortLivedTokens, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearLongLivedTokens is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearLongLivedTokens must be overridden if this is called.</remarks>
        protected void EnableActionClearLongLivedTokens()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearLongLivedTokens");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            iDelegateClearLongLivedTokens = new ActionDelegate(DoClearLongLivedTokens);
            EnableAction(action, iDelegateClearLongLivedTokens, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearAllTokens is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearAllTokens must be overridden if this is called.</remarks>
        protected void EnableActionClearAllTokens()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearAllTokens");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            iDelegateClearAllTokens = new ActionDelegate(DoClearAllTokens);
            EnableAction(action, iDelegateClearAllTokens, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetUpdateId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUpdateId must be overridden if this is called.</remarks>
        protected void EnableActionGetUpdateId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUpdateId");
            action.AddOutputParameter(new ParameterRelated("UpdateId", iPropertyUpdateId));
            iDelegateGetUpdateId = new ActionDelegate(DoGetUpdateId);
            EnableAction(action, iDelegateGetUpdateId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetServiceStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetServiceStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetServiceStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetServiceStatus");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("ServiceStatusJson", allowedValues));
            iDelegateGetServiceStatus = new ActionDelegate(DoGetServiceStatus);
            EnableAction(action, iDelegateGetServiceStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetJobUpdateId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetJobUpdateId must be overridden if this is called.</remarks>
        protected void EnableActionGetJobUpdateId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetJobUpdateId");
            action.AddOutputParameter(new ParameterRelated("JobUpdateId", iPropertyJobUpdateId));
            iDelegateGetJobUpdateId = new ActionDelegate(DoGetJobUpdateId);
            EnableAction(action, iDelegateGetJobUpdateId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetJobStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetJobStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetJobStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetJobStatus");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("JobStatusJson", allowedValues));
            iDelegateGetJobStatus = new ActionDelegate(DoGetJobStatus);
            EnableAction(action, iDelegateGetJobStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSupportedServices is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSupportedServices must be overridden if this is called.</remarks>
        protected void EnableActionGetSupportedServices()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSupportedServices");
            action.AddOutputParameter(new ParameterRelated("SupportedServiceListJson", iPropertySupportedServices));
            iDelegateGetSupportedServices = new ActionDelegate(DoGetSupportedServices);
            EnableAction(action, iDelegateGetSupportedServices, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BeginLimitedInputFlow is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BeginLimitedInputFlow must be overridden if this is called.</remarks>
        protected void EnableActionBeginLimitedInputFlow()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BeginLimitedInputFlow");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("ServiceId", allowedValues));
            action.AddOutputParameter(new ParameterString("JobId", allowedValues));
            action.AddOutputParameter(new ParameterString("LoginUrl", allowedValues));
            action.AddOutputParameter(new ParameterString("UserCode", allowedValues));
            iDelegateBeginLimitedInputFlow = new ActionDelegate(DoBeginLimitedInputFlow);
            EnableAction(action, iDelegateBeginLimitedInputFlow, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetToken action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetToken action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetToken was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aIsLongLived"></param>
        protected virtual void SetToken(IDvInvocation aInvocation, string aServiceId, string aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aIsLongLived)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetPublicKey action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPublicKey action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPublicKey was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aPublicKey"></param>
        protected virtual void GetPublicKey(IDvInvocation aInvocation, out string aPublicKey)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearToken action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearToken action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearToken was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        protected virtual void ClearToken(IDvInvocation aInvocation, string aServiceId, string aTokenId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearShortLivedToken action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearShortLivedToken action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearShortLivedToken was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        protected virtual void ClearShortLivedToken(IDvInvocation aInvocation, string aServiceId, string aTokenId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearLongLivedToken action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearLongLivedToken action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearLongLivedToken was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        protected virtual void ClearLongLivedToken(IDvInvocation aInvocation, string aServiceId, string aTokenId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearShortLivedTokens action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearShortLivedTokens action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearShortLivedTokens was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        protected virtual void ClearShortLivedTokens(IDvInvocation aInvocation, string aServiceId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearLongLivedTokens action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearLongLivedTokens action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearLongLivedTokens was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        protected virtual void ClearLongLivedTokens(IDvInvocation aInvocation, string aServiceId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearAllTokens action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearAllTokens action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearAllTokens was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        protected virtual void ClearAllTokens(IDvInvocation aInvocation, string aServiceId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetUpdateId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUpdateId action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUpdateId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUpdateId"></param>
        protected virtual void GetUpdateId(IDvInvocation aInvocation, out uint aUpdateId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetServiceStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetServiceStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetServiceStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceStatusJson"></param>
        protected virtual void GetServiceStatus(IDvInvocation aInvocation, out string aServiceStatusJson)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetJobUpdateId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetJobUpdateId action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetJobUpdateId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aJobUpdateId"></param>
        protected virtual void GetJobUpdateId(IDvInvocation aInvocation, out uint aJobUpdateId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetJobStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetJobStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetJobStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aJobStatusJson"></param>
        protected virtual void GetJobStatus(IDvInvocation aInvocation, out string aJobStatusJson)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSupportedServices action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSupportedServices action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSupportedServices was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSupportedServiceListJson"></param>
        protected virtual void GetSupportedServices(IDvInvocation aInvocation, out string aSupportedServiceListJson)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BeginLimitedInputFlow action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BeginLimitedInputFlow action for the owning device.
        ///
        /// Must be implemented iff EnableActionBeginLimitedInputFlow was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aServiceId"></param>
        /// <param name="aJobId"></param>
        /// <param name="aLoginUrl"></param>
        /// <param name="aUserCode"></param>
        protected virtual void BeginLimitedInputFlow(IDvInvocation aInvocation, string aServiceId, out string aJobId, out string aLoginUrl, out string aUserCode)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetToken(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            string tokenId;
            byte[] aesKeyRsaEncrypted;
            byte[] initVectorRsaEncrypted;
            byte[] tokenAesEncrypted;
            bool isLongLived;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                tokenId = invocation.ReadString("TokenId");
                aesKeyRsaEncrypted = invocation.ReadBinary("AesKeyRsaEncrypted");
                initVectorRsaEncrypted = invocation.ReadBinary("InitVectorRsaEncrypted");
                tokenAesEncrypted = invocation.ReadBinary("TokenAesEncrypted");
                isLongLived = invocation.ReadBool("IsLongLived");
                invocation.ReadEnd();
                self.SetToken(invocation, serviceId, tokenId, aesKeyRsaEncrypted, initVectorRsaEncrypted, tokenAesEncrypted, isLongLived);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetToken");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetToken" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetToken" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetToken" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPublicKey(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string publicKey;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPublicKey(invocation, out publicKey);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPublicKey");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetPublicKey" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPublicKey" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("PublicKey", publicKey);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPublicKey" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearToken(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            string tokenId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                tokenId = invocation.ReadString("TokenId");
                invocation.ReadEnd();
                self.ClearToken(invocation, serviceId, tokenId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearToken");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearToken" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearToken" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearToken" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearShortLivedToken(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            string tokenId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                tokenId = invocation.ReadString("TokenId");
                invocation.ReadEnd();
                self.ClearShortLivedToken(invocation, serviceId, tokenId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearShortLivedToken");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearShortLivedToken" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearShortLivedToken" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearShortLivedToken" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearLongLivedToken(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            string tokenId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                tokenId = invocation.ReadString("TokenId");
                invocation.ReadEnd();
                self.ClearLongLivedToken(invocation, serviceId, tokenId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearLongLivedToken");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearLongLivedToken" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearLongLivedToken" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearLongLivedToken" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearShortLivedTokens(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                invocation.ReadEnd();
                self.ClearShortLivedTokens(invocation, serviceId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearShortLivedTokens");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearShortLivedTokens" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearShortLivedTokens" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearShortLivedTokens" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearLongLivedTokens(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                invocation.ReadEnd();
                self.ClearLongLivedTokens(invocation, serviceId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearLongLivedTokens");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearLongLivedTokens" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearLongLivedTokens" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearLongLivedTokens" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearAllTokens(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                invocation.ReadEnd();
                self.ClearAllTokens(invocation, serviceId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearAllTokens");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearAllTokens" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearAllTokens" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearAllTokens" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetUpdateId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint updateId;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpdateId(invocation, out updateId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUpdateId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetUpdateId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("UpdateId", updateId);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetServiceStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceStatusJson;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetServiceStatus(invocation, out serviceStatusJson);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetServiceStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetServiceStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetServiceStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ServiceStatusJson", serviceStatusJson);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetServiceStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetJobUpdateId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint jobUpdateId;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetJobUpdateId(invocation, out jobUpdateId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetJobUpdateId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetJobUpdateId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetJobUpdateId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("JobUpdateId", jobUpdateId);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetJobUpdateId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetJobStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string jobStatusJson;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetJobStatus(invocation, out jobStatusJson);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetJobStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetJobStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetJobStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("JobStatusJson", jobStatusJson);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetJobStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSupportedServices(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string supportedServiceListJson;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSupportedServices(invocation, out supportedServiceListJson);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSupportedServices");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSupportedServices" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSupportedServices" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SupportedServiceListJson", supportedServiceListJson);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSupportedServices" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBeginLimitedInputFlow(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgOAuth1 self = (DvProviderAvOpenhomeOrgOAuth1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string serviceId;
            string jobId;
            string loginUrl;
            string userCode;
            try
            {
                invocation.ReadStart();
                serviceId = invocation.ReadString("ServiceId");
                invocation.ReadEnd();
                self.BeginLimitedInputFlow(invocation, serviceId, out jobId, out loginUrl, out userCode);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BeginLimitedInputFlow");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BeginLimitedInputFlow" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BeginLimitedInputFlow" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("JobId", jobId);
                invocation.WriteString("LoginUrl", loginUrl);
                invocation.WriteString("UserCode", userCode);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BeginLimitedInputFlow" });
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

