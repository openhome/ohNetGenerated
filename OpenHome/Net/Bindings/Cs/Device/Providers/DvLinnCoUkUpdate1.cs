using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkUpdate1 : IDisposable
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
        /// Set the value of the UpdateTopic property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateTopic(string aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateTopic property
        /// </summary>
        /// <returns>Value of the UpdateTopic property.</param>
        string PropertyUpdateTopic();

        /// <summary>
        /// Set the value of the UpdateChannel property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUpdateChannel(string aValue);

        /// <summary>
        /// Get a copy of the value of the UpdateChannel property
        /// </summary>
        /// <returns>Value of the UpdateChannel property.</param>
        string PropertyUpdateChannel();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Update:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkUpdate1 : DvProvider, IDisposable, IDvProviderLinnCoUkUpdate1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegatePushManifest;
        private ActionDelegate iDelegateSetUpdateFeedParams;
        private ActionDelegate iDelegateGetUpdateFeedParams;
        private ActionDelegate iDelegateGetSoftwareStatus;
        private ActionDelegate iDelegateGetExecutorStatus;
        private ActionDelegate iDelegateApply;
        private ActionDelegate iDelegateRestore;
        private PropertyString iPropertySoftwareStatus;
        private PropertyString iPropertyExecutorStatus;
        private PropertyString iPropertyUpdateTopic;
        private PropertyString iPropertyUpdateChannel;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkUpdate1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Update", 1)
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
        /// Enable the UpdateTopic property.
        /// </summary>
        public void EnablePropertyUpdateTopic()
        {
            List<String> allowedValues = new List<String>();
            iPropertyUpdateTopic = new PropertyString(new ParameterString("UpdateTopic", allowedValues));
            AddProperty(iPropertyUpdateTopic);
        }

        /// <summary>
        /// Enable the UpdateChannel property.
        /// </summary>
        public void EnablePropertyUpdateChannel()
        {
            List<String> allowedValues = new List<String>();
            allowedValues.Add("release");
            allowedValues.Add("beta");
            allowedValues.Add("development");
            allowedValues.Add("nightly");
            iPropertyUpdateChannel = new PropertyString(new ParameterString("UpdateChannel", allowedValues));
            AddProperty(iPropertyUpdateChannel);
            allowedValues.Clear();
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
        /// Set the value of the UpdateTopic property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTopic has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateTopic(string aValue)
        {
            if (iPropertyUpdateTopic == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyUpdateTopic, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateTopic property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateTopic has previously been called.</remarks>
        /// <returns>Value of the UpdateTopic property.</returns>
        public string PropertyUpdateTopic()
        {
            if (iPropertyUpdateTopic == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateTopic.Value();
        }

        /// <summary>
        /// Set the value of the UpdateChannel property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateChannel has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUpdateChannel(string aValue)
        {
            if (iPropertyUpdateChannel == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyUpdateChannel, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UpdateChannel property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUpdateChannel has previously been called.</remarks>
        /// <returns>Value of the UpdateChannel property.</returns>
        public string PropertyUpdateChannel()
        {
            if (iPropertyUpdateChannel == null)
                throw new PropertyDisabledError();
            return iPropertyUpdateChannel.Value();
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
        /// Signal that the action SetUpdateFeedParams is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetUpdateFeedParams must be overridden if this is called.</remarks>
        protected void EnableActionSetUpdateFeedParams()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetUpdateFeedParams");
            action.AddInputParameter(new ParameterRelated("Topic", iPropertyUpdateTopic));
            action.AddInputParameter(new ParameterRelated("Channel", iPropertyUpdateChannel));
            iDelegateSetUpdateFeedParams = new ActionDelegate(DoSetUpdateFeedParams);
            EnableAction(action, iDelegateSetUpdateFeedParams, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetUpdateFeedParams is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetUpdateFeedParams must be overridden if this is called.</remarks>
        protected void EnableActionGetUpdateFeedParams()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetUpdateFeedParams");
            action.AddOutputParameter(new ParameterRelated("Topic", iPropertyUpdateTopic));
            action.AddOutputParameter(new ParameterRelated("Channel", iPropertyUpdateChannel));
            iDelegateGetUpdateFeedParams = new ActionDelegate(DoGetUpdateFeedParams);
            EnableAction(action, iDelegateGetUpdateFeedParams, GCHandle.ToIntPtr(iGch));
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
        /// Signal that the action Restore is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Restore must be overridden if this is called.</remarks>
        protected void EnableActionRestore()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Restore");
            iDelegateRestore = new ActionDelegate(DoRestore);
            EnableAction(action, iDelegateRestore, GCHandle.ToIntPtr(iGch));
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
        /// SetUpdateFeedParams action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetUpdateFeedParams action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetUpdateFeedParams was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        protected virtual void SetUpdateFeedParams(IDvInvocation aInvocation, string aTopic, string aChannel)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetUpdateFeedParams action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetUpdateFeedParams action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetUpdateFeedParams was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aTopic"></param>
        /// <param name="aChannel"></param>
        protected virtual void GetUpdateFeedParams(IDvInvocation aInvocation, out string aTopic, out string aChannel)
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
        /// Restore action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Restore action for the owning device.
        ///
        /// Must be implemented iff EnableActionRestore was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Restore(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        private static int DoPushManifest(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
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

        private static int DoSetUpdateFeedParams(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string topic;
            string channel;
            try
            {
                invocation.ReadStart();
                topic = invocation.ReadString("Topic");
                channel = invocation.ReadString("Channel");
                invocation.ReadEnd();
                self.SetUpdateFeedParams(invocation, topic, channel);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetUpdateFeedParams");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetUpdateFeedParams" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetUpdateFeedParams" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetUpdateFeedParams" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetUpdateFeedParams(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string topic;
            string channel;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetUpdateFeedParams(invocation, out topic, out channel);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetUpdateFeedParams");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetUpdateFeedParams" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateFeedParams" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Topic", topic);
                invocation.WriteString("Channel", channel);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetUpdateFeedParams" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSoftwareStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
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
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
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

        private static int DoApply(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
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

        private static int DoRestore(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Restore(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Restore");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Restore" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Restore" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Restore" });
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

