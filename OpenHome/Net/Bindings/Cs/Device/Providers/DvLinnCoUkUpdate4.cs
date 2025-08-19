using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkUpdate4 : IDisposable
    {

        /// <summary>
        /// Set the value of the SoftwareStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySoftwareStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the SoftwareStatus property
        /// </summary>
        /// <returns>Value of the SoftwareStatus property.</param>
        string PropertySoftwareStatus();

        /// <summary>
        /// Set the value of the ExecutorStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyExecutorStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the ExecutorStatus property
        /// </summary>
        /// <returns>Value of the ExecutorStatus property.</param>
        string PropertyExecutorStatus();

        /// <summary>
        /// Set the value of the JobStatus property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyJobStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the JobStatus property
        /// </summary>
        /// <returns>Value of the JobStatus property.</param>
        string PropertyJobStatus();

        /// <summary>
        /// Set the value of the RecoverSupported property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRecoverSupported(bool aValue);

        /// <summary>
        /// Get a copy of the value of the RecoverSupported property
        /// </summary>
        /// <returns>Value of the RecoverSupported property.</param>
        bool PropertyRecoverSupported();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Update:4 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkUpdate4 : DvProvider, IDisposable, IDvProviderLinnCoUkUpdate4
    {
        private GCHandle iGch;
        private ActionDelegate iDelegatePushManifest;
        private ActionDelegate iDelegatePushManifest2;
        private ActionDelegate iDelegateGetSoftwareStatus;
        private ActionDelegate iDelegateGetExecutorStatus;
        private ActionDelegate iDelegateGetJobStatus;
        private ActionDelegate iDelegateApply;
        private ActionDelegate iDelegateApply2;
        private ActionDelegate iDelegateRecover;
        private ActionDelegate iDelegateRecover2;
        private ActionDelegate iDelegateRecoverKeepStore;
        private ActionDelegate iDelegateRecoverKeepStore2;
        private ActionDelegate iDelegateCheckNow;
        private ActionDelegate iDelegateGetRecoverSupported;
        private PropertyString iPropertySoftwareStatus;
        private PropertyString iPropertyExecutorStatus;
        private PropertyString iPropertyJobStatus;
        private PropertyBool iPropertyRecoverSupported;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkUpdate4(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Update", 4)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the SoftwareStatus property.
        /// </summary>
        public void EnablePropertySoftwareStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus", allowedValues));
            AddProperty(iPropertySoftwareStatus);
        }

        /// <summary>
        /// Enable the ExecutorStatus property.
        /// </summary>
        public void EnablePropertyExecutorStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus", allowedValues));
            AddProperty(iPropertyExecutorStatus);
        }

        /// <summary>
        /// Enable the JobStatus property.
        /// </summary>
        public void EnablePropertyJobStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus", allowedValues));
            AddProperty(iPropertyJobStatus);
        }

        /// <summary>
        /// Enable the RecoverSupported property.
        /// </summary>
        public void EnablePropertyRecoverSupported()
        {
            iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
            AddProperty(iPropertyRecoverSupported);
        }

        /// <summary>
        /// Set the value of the SoftwareStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySoftwareStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySoftwareStatus(string aValue)
        {
            if (iPropertySoftwareStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySoftwareStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the SoftwareStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySoftwareStatus has previously been called.</remarks>
        /// <returns>Value of the SoftwareStatus property.</returns>
        public string PropertySoftwareStatus()
        {
            if (iPropertySoftwareStatus == null)
                throw new PropertyDisabledError();
            return iPropertySoftwareStatus.Value();
        }

        /// <summary>
        /// Set the value of the ExecutorStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyExecutorStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyExecutorStatus(string aValue)
        {
            if (iPropertyExecutorStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyExecutorStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ExecutorStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyExecutorStatus has previously been called.</remarks>
        /// <returns>Value of the ExecutorStatus property.</returns>
        public string PropertyExecutorStatus()
        {
            if (iPropertyExecutorStatus == null)
                throw new PropertyDisabledError();
            return iPropertyExecutorStatus.Value();
        }

        /// <summary>
        /// Set the value of the JobStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyJobStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyJobStatus(string aValue)
        {
            if (iPropertyJobStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyJobStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the JobStatus property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyJobStatus has previously been called.</remarks>
        /// <returns>Value of the JobStatus property.</returns>
        public string PropertyJobStatus()
        {
            if (iPropertyJobStatus == null)
                throw new PropertyDisabledError();
            return iPropertyJobStatus.Value();
        }

        /// <summary>
        /// Set the value of the RecoverSupported property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRecoverSupported has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRecoverSupported(bool aValue)
        {
            if (iPropertyRecoverSupported == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRecoverSupported, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RecoverSupported property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRecoverSupported has previously been called.</remarks>
        /// <returns>Value of the RecoverSupported property.</returns>
        public bool PropertyRecoverSupported()
        {
            if (iPropertyRecoverSupported == null)
                throw new PropertyDisabledError();
            return iPropertyRecoverSupported.Value();
        }

        /// <summary>
        /// Signal that the action PushManifest is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// PushManifest must be overridden if this is called.</remarks>
        protected void EnableActionPushManifest()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("PushManifest");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            iDelegatePushManifest = new ActionDelegate(DoPushManifest);
            EnableAction(action, iDelegatePushManifest, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action PushManifest2 is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// PushManifest2 must be overridden if this is called.</remarks>
        protected void EnableActionPushManifest2()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("PushManifest2");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Uri", allowedValues));
            action.AddOutputParameter(new ParameterUint("Id"));
            iDelegatePushManifest2 = new ActionDelegate(DoPushManifest2);
            EnableAction(action, iDelegatePushManifest2, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSoftwareStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSoftwareStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetSoftwareStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSoftwareStatus");
            action.AddOutputParameter(new ParameterRelated("SoftwareStatus", iPropertySoftwareStatus));
            iDelegateGetSoftwareStatus = new ActionDelegate(DoGetSoftwareStatus);
            EnableAction(action, iDelegateGetSoftwareStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetExecutorStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetExecutorStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetExecutorStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetExecutorStatus");
            action.AddOutputParameter(new ParameterRelated("ExecutorStatus", iPropertyExecutorStatus));
            iDelegateGetExecutorStatus = new ActionDelegate(DoGetExecutorStatus);
            EnableAction(action, iDelegateGetExecutorStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetJobStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetJobStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetJobStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetJobStatus");
            action.AddOutputParameter(new ParameterRelated("JobStatus", iPropertyJobStatus));
            iDelegateGetJobStatus = new ActionDelegate(DoGetJobStatus);
            EnableAction(action, iDelegateGetJobStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Apply is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Apply must be overridden if this is called.</remarks>
        protected void EnableActionApply()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Apply");
            iDelegateApply = new ActionDelegate(DoApply);
            EnableAction(action, iDelegateApply, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Apply2 is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Apply2 must be overridden if this is called.</remarks>
        protected void EnableActionApply2()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Apply2");
            action.AddOutputParameter(new ParameterUint("Id"));
            iDelegateApply2 = new ActionDelegate(DoApply2);
            EnableAction(action, iDelegateApply2, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Recover is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Recover must be overridden if this is called.</remarks>
        protected void EnableActionRecover()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Recover");
            iDelegateRecover = new ActionDelegate(DoRecover);
            EnableAction(action, iDelegateRecover, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Recover2 is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Recover2 must be overridden if this is called.</remarks>
        protected void EnableActionRecover2()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Recover2");
            action.AddOutputParameter(new ParameterUint("Id"));
            iDelegateRecover2 = new ActionDelegate(DoRecover2);
            EnableAction(action, iDelegateRecover2, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action RecoverKeepStore is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// RecoverKeepStore must be overridden if this is called.</remarks>
        protected void EnableActionRecoverKeepStore()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("RecoverKeepStore");
            iDelegateRecoverKeepStore = new ActionDelegate(DoRecoverKeepStore);
            EnableAction(action, iDelegateRecoverKeepStore, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action RecoverKeepStore2 is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// RecoverKeepStore2 must be overridden if this is called.</remarks>
        protected void EnableActionRecoverKeepStore2()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("RecoverKeepStore2");
            action.AddOutputParameter(new ParameterUint("Id"));
            iDelegateRecoverKeepStore2 = new ActionDelegate(DoRecoverKeepStore2);
            EnableAction(action, iDelegateRecoverKeepStore2, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action CheckNow is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// CheckNow must be overridden if this is called.</remarks>
        protected void EnableActionCheckNow()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("CheckNow");
            iDelegateCheckNow = new ActionDelegate(DoCheckNow);
            EnableAction(action, iDelegateCheckNow, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetRecoverSupported is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetRecoverSupported must be overridden if this is called.</remarks>
        protected void EnableActionGetRecoverSupported()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetRecoverSupported");
            action.AddOutputParameter(new ParameterRelated("RecoverSupported", iPropertyRecoverSupported));
            iDelegateGetRecoverSupported = new ActionDelegate(DoGetRecoverSupported);
            EnableAction(action, iDelegateGetRecoverSupported, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// PushManifest action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// PushManifest action for the owning device.
        ///
        /// Must be implemented iff EnableActionPushManifest was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUri"></param>
        protected virtual void PushManifest(IDvInvocation aInvocation, string aUri)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// PushManifest2 action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// PushManifest2 action for the owning device.
        ///
        /// Must be implemented iff EnableActionPushManifest2 was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aUri"></param>
        /// <param name="aId"></param>
        protected virtual void PushManifest2(IDvInvocation aInvocation, string aUri, out uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSoftwareStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSoftwareStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSoftwareStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSoftwareStatus"></param>
        protected virtual void GetSoftwareStatus(IDvInvocation aInvocation, out string aSoftwareStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetExecutorStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetExecutorStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetExecutorStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aExecutorStatus"></param>
        protected virtual void GetExecutorStatus(IDvInvocation aInvocation, out string aExecutorStatus)
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
        /// <param name="aJobStatus"></param>
        protected virtual void GetJobStatus(IDvInvocation aInvocation, out string aJobStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Apply action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Apply action for the owning device.
        ///
        /// Must be implemented iff EnableActionApply was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Apply(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Apply2 action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Apply2 action for the owning device.
        ///
        /// Must be implemented iff EnableActionApply2 was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        protected virtual void Apply2(IDvInvocation aInvocation, out uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Recover action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Recover action for the owning device.
        ///
        /// Must be implemented iff EnableActionRecover was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Recover(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Recover2 action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Recover2 action for the owning device.
        ///
        /// Must be implemented iff EnableActionRecover2 was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        protected virtual void Recover2(IDvInvocation aInvocation, out uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// RecoverKeepStore action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// RecoverKeepStore action for the owning device.
        ///
        /// Must be implemented iff EnableActionRecoverKeepStore was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void RecoverKeepStore(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// RecoverKeepStore2 action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// RecoverKeepStore2 action for the owning device.
        ///
        /// Must be implemented iff EnableActionRecoverKeepStore2 was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aId"></param>
        protected virtual void RecoverKeepStore2(IDvInvocation aInvocation, out uint aId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// CheckNow action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// CheckNow action for the owning device.
        ///
        /// Must be implemented iff EnableActionCheckNow was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void CheckNow(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetRecoverSupported action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetRecoverSupported action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetRecoverSupported was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRecoverSupported"></param>
        protected virtual void GetRecoverSupported(IDvInvocation aInvocation, out bool aRecoverSupported)
        {
            throw (new ActionDisabledError());
        }

        private static int DoPushManifest(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string uri;
            try
            {
                invocation.ReadStart();
                uri = invocation.ReadString("Uri");
                invocation.ReadEnd();
                self.PushManifest(invocation, uri);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "PushManifest");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "PushManifest" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PushManifest" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PushManifest" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPushManifest2(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string uri;
            uint id;
            try
            {
                invocation.ReadStart();
                uri = invocation.ReadString("Uri");
                invocation.ReadEnd();
                self.PushManifest2(invocation, uri, out id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "PushManifest2");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "PushManifest2" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PushManifest2" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Id", id);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PushManifest2" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSoftwareStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string softwareStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSoftwareStatus(invocation, out softwareStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSoftwareStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSoftwareStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSoftwareStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SoftwareStatus", softwareStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSoftwareStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetExecutorStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string executorStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetExecutorStatus(invocation, out executorStatus);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetExecutorStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetExecutorStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetExecutorStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ExecutorStatus", executorStatus);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetExecutorStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetJobStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string jobStatus;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetJobStatus(invocation, out jobStatus);
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
                invocation.WriteString("JobStatus", jobStatus);
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

        private static int DoApply(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Apply(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Apply");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Apply" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Apply" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Apply" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoApply2(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint id;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Apply2(invocation, out id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Apply2");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Apply2" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Apply2" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Id", id);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Apply2" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRecover(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Recover(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Recover");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Recover" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Recover" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Recover" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRecover2(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint id;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Recover2(invocation, out id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Recover2");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Recover2" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Recover2" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Id", id);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Recover2" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRecoverKeepStore(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.RecoverKeepStore(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "RecoverKeepStore");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "RecoverKeepStore" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RecoverKeepStore" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RecoverKeepStore" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRecoverKeepStore2(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint id;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.RecoverKeepStore2(invocation, out id);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "RecoverKeepStore2");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "RecoverKeepStore2" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RecoverKeepStore2" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Id", id);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "RecoverKeepStore2" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoCheckNow(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.CheckNow(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "CheckNow");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "CheckNow" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CheckNow" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "CheckNow" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetRecoverSupported(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate4 self = (DvProviderLinnCoUkUpdate4)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool recoverSupported;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetRecoverSupported(invocation, out recoverSupported);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetRecoverSupported");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetRecoverSupported" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetRecoverSupported" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("RecoverSupported", recoverSupported);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetRecoverSupported" });
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

