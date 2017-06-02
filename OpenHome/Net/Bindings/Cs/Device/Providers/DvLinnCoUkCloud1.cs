using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkCloud1 : IDisposable
    {

        /// <summary>
        /// Set the value of the AssociationStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAssociationStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the AssociationStatus property
        /// </summary>
        /// <returns>Value of the AssociationStatus property.</param>
        string PropertyAssociationStatus();

        /// <summary>
        /// Set the value of the ControlEnabled property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyControlEnabled(bool aValue);

        /// <summary>
        /// Get a copy of the value of the ControlEnabled property
        /// </summary>
        /// <returns>Value of the ControlEnabled property.</param>
        bool PropertyControlEnabled();

        /// <summary>
        /// Set the value of the Connected property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyConnected(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Connected property
        /// </summary>
        /// <returns>Value of the Connected property.</param>
        bool PropertyConnected();

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
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Cloud:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkCloud1 : DvProvider, IDisposable, IDvProviderLinnCoUkCloud1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetChallengeResponse;
        private ActionDelegate iDelegateSetAssociated;
        private ActionDelegate iDelegateSetControlEnabled;
        private ActionDelegate iDelegateGetControlEnabled;
        private ActionDelegate iDelegateGetConnected;
        private ActionDelegate iDelegateGetPublicKey;
        private PropertyString iPropertyAssociationStatus;
        private PropertyBool iPropertyControlEnabled;
        private PropertyBool iPropertyConnected;
        private PropertyString iPropertyPublicKey;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkCloud1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Cloud", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the AssociationStatus property.
        /// </summary>
        public void EnablePropertyAssociationStatus()
        {
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Associated");
            allowedValues.Add("NotAssociated");
            allowedValues.Add("Unconfigured");
            iPropertyAssociationStatus = new PropertyString(new ParameterString("AssociationStatus", allowedValues));
            AddProperty(iPropertyAssociationStatus);
            allowedValues.Clear();
        }

        /// <summary>
        /// Enable the ControlEnabled property.
        /// </summary>
        public void EnablePropertyControlEnabled()
        {
            iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
            AddProperty(iPropertyControlEnabled);
        }

        /// <summary>
        /// Enable the Connected property.
        /// </summary>
        public void EnablePropertyConnected()
        {
            iPropertyConnected = new PropertyBool(new ParameterBool("Connected"));
            AddProperty(iPropertyConnected);
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
        /// Set the value of the AssociationStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAssociationStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAssociationStatus(string aValue)
        {
            if (iPropertyAssociationStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyAssociationStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the AssociationStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAssociationStatus has previously been called.</remarks>
        /// <returns>Value of the AssociationStatus property.</returns>
        public string PropertyAssociationStatus()
        {
            if (iPropertyAssociationStatus == null)
                throw new PropertyDisabledError();
            return iPropertyAssociationStatus.Value();
        }

        /// <summary>
        /// Set the value of the ControlEnabled property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyControlEnabled has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyControlEnabled(bool aValue)
        {
            if (iPropertyControlEnabled == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyControlEnabled, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ControlEnabled property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyControlEnabled has previously been called.</remarks>
        /// <returns>Value of the ControlEnabled property.</returns>
        public bool PropertyControlEnabled()
        {
            if (iPropertyControlEnabled == null)
                throw new PropertyDisabledError();
            return iPropertyControlEnabled.Value();
        }

        /// <summary>
        /// Set the value of the Connected property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConnected has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyConnected(bool aValue)
        {
            if (iPropertyConnected == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyConnected, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Connected property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConnected has previously been called.</remarks>
        /// <returns>Value of the Connected property.</returns>
        public bool PropertyConnected()
        {
            if (iPropertyConnected == null)
                throw new PropertyDisabledError();
            return iPropertyConnected.Value();
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
        /// Signal that the action GetChallengeResponse is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetChallengeResponse must be overridden if this is called.</remarks>
        protected void EnableActionGetChallengeResponse()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetChallengeResponse");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Challenge", allowedValues));
            action.AddOutputParameter(new ParameterString("Response", allowedValues));
            iDelegateGetChallengeResponse = new ActionDelegate(DoGetChallengeResponse);
            EnableAction(action, iDelegateGetChallengeResponse, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetAssociated is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetAssociated must be overridden if this is called.</remarks>
        protected void EnableActionSetAssociated()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetAssociated");
            action.AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
            action.AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
            action.AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
            action.AddInputParameter(new ParameterBool("Associated"));
            iDelegateSetAssociated = new ActionDelegate(DoSetAssociated);
            EnableAction(action, iDelegateSetAssociated, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetControlEnabled is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetControlEnabled must be overridden if this is called.</remarks>
        protected void EnableActionSetControlEnabled()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetControlEnabled");
            action.AddInputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
            iDelegateSetControlEnabled = new ActionDelegate(DoSetControlEnabled);
            EnableAction(action, iDelegateSetControlEnabled, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetControlEnabled is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetControlEnabled must be overridden if this is called.</remarks>
        protected void EnableActionGetControlEnabled()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetControlEnabled");
            action.AddOutputParameter(new ParameterRelated("Enabled", iPropertyControlEnabled));
            iDelegateGetControlEnabled = new ActionDelegate(DoGetControlEnabled);
            EnableAction(action, iDelegateGetControlEnabled, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetConnected is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetConnected must be overridden if this is called.</remarks>
        protected void EnableActionGetConnected()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetConnected");
            action.AddOutputParameter(new ParameterRelated("Connected", iPropertyConnected));
            iDelegateGetConnected = new ActionDelegate(DoGetConnected);
            EnableAction(action, iDelegateGetConnected, GCHandle.ToIntPtr(iGch));
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
        /// GetChallengeResponse action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetChallengeResponse action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetChallengeResponse was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChallenge"></param>
        /// <param name="aResponse"></param>
        protected virtual void GetChallengeResponse(IDvInvocation aInvocation, string aChallenge, out string aResponse)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetAssociated action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetAssociated action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetAssociated was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aAssociated"></param>
        protected virtual void SetAssociated(IDvInvocation aInvocation, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aAssociated)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetControlEnabled action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetControlEnabled action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetControlEnabled was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnabled"></param>
        protected virtual void SetControlEnabled(IDvInvocation aInvocation, bool aEnabled)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetControlEnabled action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetControlEnabled action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetControlEnabled was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aEnabled"></param>
        protected virtual void GetControlEnabled(IDvInvocation aInvocation, out bool aEnabled)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetConnected action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetConnected action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetConnected was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aConnected"></param>
        protected virtual void GetConnected(IDvInvocation aInvocation, out bool aConnected)
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

        private static int DoGetChallengeResponse(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string challenge;
            string response;
            try
            {
                invocation.ReadStart();
                challenge = invocation.ReadString("Challenge");
                invocation.ReadEnd();
                self.GetChallengeResponse(invocation, challenge, out response);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetChallengeResponse");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetChallengeResponse" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetChallengeResponse" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Response", response);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetChallengeResponse" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetAssociated(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            byte[] aesKeyRsaEncrypted;
            byte[] initVectorRsaEncrypted;
            byte[] tokenAesEncrypted;
            bool associated;
            try
            {
                invocation.ReadStart();
                aesKeyRsaEncrypted = invocation.ReadBinary("AesKeyRsaEncrypted");
                initVectorRsaEncrypted = invocation.ReadBinary("InitVectorRsaEncrypted");
                tokenAesEncrypted = invocation.ReadBinary("TokenAesEncrypted");
                associated = invocation.ReadBool("Associated");
                invocation.ReadEnd();
                self.SetAssociated(invocation, aesKeyRsaEncrypted, initVectorRsaEncrypted, tokenAesEncrypted, associated);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetAssociated");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetAssociated" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAssociated" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAssociated" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetControlEnabled(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enabled;
            try
            {
                invocation.ReadStart();
                enabled = invocation.ReadBool("Enabled");
                invocation.ReadEnd();
                self.SetControlEnabled(invocation, enabled);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetControlEnabled");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetControlEnabled" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetControlEnabled" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetControlEnabled" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetControlEnabled(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool enabled;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetControlEnabled(invocation, out enabled);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetControlEnabled");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetControlEnabled" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetControlEnabled" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Enabled", enabled);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetControlEnabled" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetConnected(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool connected;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetConnected(invocation, out connected);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetConnected");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetConnected" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetConnected" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Connected", connected);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetConnected" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPublicKey(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkCloud1 self = (DvProviderLinnCoUkCloud1)gch.Target;
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

