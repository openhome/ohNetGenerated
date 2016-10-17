using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgCredentials1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Ids property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyIds(string aValue);

        /// <summary>
        /// Get a copy of the value of the Ids property
        /// </summary>
        /// <returns>Value of the Ids property.</param>
        string PropertyIds();

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
        /// Set the value of the SequenceNumber property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySequenceNumber(uint aValue);

        /// <summary>
        /// Get a copy of the value of the SequenceNumber property
        /// </summary>
        /// <returns>Value of the SequenceNumber property.</param>
        uint PropertySequenceNumber();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Credentials:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgCredentials1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgCredentials1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSet;
        private ActionDelegate iDelegateClear;
        private ActionDelegate iDelegateSetEnabled;
        private ActionDelegate iDelegateGet;
        private ActionDelegate iDelegateLogin;
        private ActionDelegate iDelegateReLogin;
        private ActionDelegate iDelegateGetIds;
        private ActionDelegate iDelegateGetPublicKey;
        private ActionDelegate iDelegateGetSequenceNumber;
        private PropertyString iPropertyIds;
        private PropertyString iPropertyPublicKey;
        private PropertyUint iPropertySequenceNumber;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgCredentials1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Credentials", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Ids property.
        /// </summary>
        public void EnablePropertyIds()
        {
            List<String> allowedValues = new List<String>();
            iPropertyIds = new PropertyString(new ParameterString("Ids", allowedValues));
            AddProperty(iPropertyIds);
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
        /// Enable the SequenceNumber property.
        /// </summary>
        public void EnablePropertySequenceNumber()
        {
            iPropertySequenceNumber = new PropertyUint(new ParameterUint("SequenceNumber"));
            AddProperty(iPropertySequenceNumber);
        }

        /// <summary>
        /// Set the value of the Ids property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIds has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyIds(string aValue)
        {
            if (iPropertyIds == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyIds, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Ids property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyIds has previously been called.</remarks>
        /// <returns>Value of the Ids property.</returns>
        public string PropertyIds()
        {
            if (iPropertyIds == null)
                throw new PropertyDisabledError();
            return iPropertyIds.Value();
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
        /// Set the value of the SequenceNumber property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySequenceNumber has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySequenceNumber(uint aValue)
        {
            if (iPropertySequenceNumber == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertySequenceNumber, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SequenceNumber property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySequenceNumber has previously been called.</remarks>
        /// <returns>Value of the SequenceNumber property.</returns>
        public uint PropertySequenceNumber()
        {
            if (iPropertySequenceNumber == null)
                throw new PropertyDisabledError();
            return iPropertySequenceNumber.Value();
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
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            action.AddInputParameter(new ParameterString("UserName", allowedValues));
            action.AddInputParameter(new ParameterBinary("Password"));
            iDelegateSet = new ActionDelegate(DoSet);
            EnableAction(action, iDelegateSet, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Clear is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Clear must be overridden if this is called.</remarks>
        protected void EnableActionClear()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Clear");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            iDelegateClear = new ActionDelegate(DoClear);
            EnableAction(action, iDelegateClear, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetEnabled is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetEnabled must be overridden if this is called.</remarks>
        protected void EnableActionSetEnabled()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetEnabled");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            action.AddInputParameter(new ParameterBool("Enabled"));
            iDelegateSetEnabled = new ActionDelegate(DoSetEnabled);
            EnableAction(action, iDelegateSetEnabled, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Get is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Get must be overridden if this is called.</remarks>
        protected void EnableActionGet()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Get");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            action.AddOutputParameter(new ParameterString("UserName", allowedValues));
            action.AddOutputParameter(new ParameterBinary("Password"));
            action.AddOutputParameter(new ParameterBool("Enabled"));
            action.AddOutputParameter(new ParameterString("Status", allowedValues));
            action.AddOutputParameter(new ParameterString("Data", allowedValues));
            iDelegateGet = new ActionDelegate(DoGet);
            EnableAction(action, iDelegateGet, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Login is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Login must be overridden if this is called.</remarks>
        protected void EnableActionLogin()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Login");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            action.AddOutputParameter(new ParameterString("Token", allowedValues));
            iDelegateLogin = new ActionDelegate(DoLogin);
            EnableAction(action, iDelegateLogin, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ReLogin is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ReLogin must be overridden if this is called.</remarks>
        protected void EnableActionReLogin()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ReLogin");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Id", allowedValues));
            action.AddInputParameter(new ParameterString("CurrentToken", allowedValues));
            action.AddOutputParameter(new ParameterString("NewToken", allowedValues));
            iDelegateReLogin = new ActionDelegate(DoReLogin);
            EnableAction(action, iDelegateReLogin, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetIds is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetIds must be overridden if this is called.</remarks>
        protected void EnableActionGetIds()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetIds");
            action.AddOutputParameter(new ParameterRelated("Ids", iPropertyIds));
            iDelegateGetIds = new ActionDelegate(DoGetIds);
            EnableAction(action, iDelegateGetIds, GCHandle.ToIntPtr(iGch));
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
        /// Signal that the action GetSequenceNumber is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSequenceNumber must be overridden if this is called.</remarks>
        protected void EnableActionGetSequenceNumber()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSequenceNumber");
            action.AddOutputParameter(new ParameterRelated("SequenceNumber", iPropertySequenceNumber));
            iDelegateGetSequenceNumber = new ActionDelegate(DoGetSequenceNumber);
            EnableAction(action, iDelegateGetSequenceNumber, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Set action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Set action for the owning device.
        ///
        /// Must be implemented iff EnableActionSet was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        protected virtual void Set(IDvInvocation aInvocation, string aId, string aUserName, byte[] aPassword)
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
        protected virtual void Clear(IDvInvocation aInvocation, string aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetEnabled action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetEnabled action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetEnabled was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        /// <param name="aEnabled"></param>
        protected virtual void SetEnabled(IDvInvocation aInvocation, string aId, bool aEnabled)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Get action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Get action for the owning device.
        ///
        /// Must be implemented iff EnableActionGet was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        /// <param name="aEnabled"></param>
        /// <param name="aStatus"></param>
        /// <param name="aData"></param>
        protected virtual void Get(IDvInvocation aInvocation, string aId, out string aUserName, out byte[] aPassword, out bool aEnabled, out string aStatus, out string aData)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Login action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Login action for the owning device.
        ///
        /// Must be implemented iff EnableActionLogin was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        /// <param name="aToken"></param>
        protected virtual void Login(IDvInvocation aInvocation, string aId, out string aToken)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ReLogin action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ReLogin action for the owning device.
        ///
        /// Must be implemented iff EnableActionReLogin was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        /// <param name="aCurrentToken"></param>
        /// <param name="aNewToken"></param>
        protected virtual void ReLogin(IDvInvocation aInvocation, string aId, string aCurrentToken, out string aNewToken)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetIds action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetIds action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetIds was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aIds"></param>
        protected virtual void GetIds(IDvInvocation aInvocation, out string aIds)
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
        /// GetSequenceNumber action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSequenceNumber action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSequenceNumber was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSequenceNumber"></param>
        protected virtual void GetSequenceNumber(IDvInvocation aInvocation, out uint aSequenceNumber)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSet(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            string userName;
            byte[] password;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
                userName = invocation.ReadString("UserName");
                password = invocation.ReadBinary("Password");
                invocation.ReadEnd();
                self.Set(invocation, id, userName, password);
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

        private static int DoClear(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
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

        private static int DoSetEnabled(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            bool enabled;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
                enabled = invocation.ReadBool("Enabled");
                invocation.ReadEnd();
                self.SetEnabled(invocation, id, enabled);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetEnabled");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetEnabled" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnabled" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetEnabled" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGet(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            string userName;
            byte[] password;
            bool enabled;
            string status;
            string data;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
                invocation.ReadEnd();
                self.Get(invocation, id, out userName, out password, out enabled, out status, out data);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Get");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Get" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Get" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("UserName", userName);
                invocation.WriteBinary("Password", password);
                invocation.WriteBool("Enabled", enabled);
                invocation.WriteString("Status", status);
                invocation.WriteString("Data", data);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Get" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoLogin(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            string token;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
                invocation.ReadEnd();
                self.Login(invocation, id, out token);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Login");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Login" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Login" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Token", token);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Login" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoReLogin(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string id;
            string currentToken;
            string newToken;
            try
            {
                invocation.ReadStart();
                id = invocation.ReadString("Id");
                currentToken = invocation.ReadString("CurrentToken");
                invocation.ReadEnd();
                self.ReLogin(invocation, id, currentToken, out newToken);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ReLogin");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ReLogin" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReLogin" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NewToken", newToken);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ReLogin" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetIds(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string ids;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetIds(invocation, out ids);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetIds");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetIds" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIds" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Ids", ids);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetIds" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPublicKey(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
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

        private static int DoGetSequenceNumber(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgCredentials1 self = (DvProviderAvOpenhomeOrgCredentials1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint sequenceNumber;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSequenceNumber(invocation, out sequenceNumber);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSequenceNumber");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSequenceNumber" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSequenceNumber" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("SequenceNumber", sequenceNumber);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSequenceNumber" });
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

