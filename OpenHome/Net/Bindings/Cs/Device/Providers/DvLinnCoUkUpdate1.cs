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
        private ActionDelegate iDelegateGetUpdateStatus;
        private ActionDelegate iDelegateApply;
        private ActionDelegate iDelegateRestore;
        private PropertyString iPropertyUpdateStatus;
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
        /// Enable the UpdateStatus property.
        /// </summary>
        public void EnablePropertyUpdateStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus", allowedValues));
            AddProperty(iPropertyUpdateStatus);
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

        private static int DoGetUpdateStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkUpdate1 self = (DvProviderLinnCoUkUpdate1)gch.Target;
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

