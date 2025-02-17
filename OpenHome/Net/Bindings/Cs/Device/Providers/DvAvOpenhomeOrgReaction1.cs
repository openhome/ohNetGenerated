using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgReaction1 : IDisposable
    {

        /// <summary>
        /// Set the value of the CanReact property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanReact(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanReact property
        /// </summary>
        /// <returns>Value of the CanReact property.</param>
        bool PropertyCanReact();

        /// <summary>
        /// Set the value of the CurrentReaction property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCurrentReaction(string aValue);

        /// <summary>
        /// Get a copy of the value of the CurrentReaction property
        /// </summary>
        /// <returns>Value of the CurrentReaction property.</param>
        string PropertyCurrentReaction();

        /// <summary>
        /// Set the value of the AvailableReactions property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAvailableReactions(string aValue);

        /// <summary>
        /// Get a copy of the value of the AvailableReactions property
        /// </summary>
        /// <returns>Value of the AvailableReactions property.</param>
        string PropertyAvailableReactions();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Reaction:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgReaction1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgReaction1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetCanReact;
        private ActionDelegate iDelegateGetCurrentReaction;
        private ActionDelegate iDelegateGetAvailableReactions;
        private ActionDelegate iDelegateSetReaction;
        private ActionDelegate iDelegateClearReaction;
        private PropertyBool iPropertyCanReact;
        private PropertyString iPropertyCurrentReaction;
        private PropertyString iPropertyAvailableReactions;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgReaction1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Reaction", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the CanReact property.
        /// </summary>
        public void EnablePropertyCanReact()
        {
            iPropertyCanReact = new PropertyBool(new ParameterBool("CanReact"));
            AddProperty(iPropertyCanReact);
        }

        /// <summary>
        /// Enable the CurrentReaction property.
        /// </summary>
        public void EnablePropertyCurrentReaction()
        {
            List<String> allowedValues = new List<String>();
            iPropertyCurrentReaction = new PropertyString(new ParameterString("CurrentReaction", allowedValues));
            AddProperty(iPropertyCurrentReaction);
        }

        /// <summary>
        /// Enable the AvailableReactions property.
        /// </summary>
        public void EnablePropertyAvailableReactions()
        {
            List<String> allowedValues = new List<String>();
            iPropertyAvailableReactions = new PropertyString(new ParameterString("AvailableReactions", allowedValues));
            AddProperty(iPropertyAvailableReactions);
        }

        /// <summary>
        /// Set the value of the CanReact property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanReact has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanReact(bool aValue)
        {
            if (iPropertyCanReact == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanReact, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanReact property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanReact has previously been called.</remarks>
        /// <returns>Value of the CanReact property.</returns>
        public bool PropertyCanReact()
        {
            if (iPropertyCanReact == null)
                throw new PropertyDisabledError();
            return iPropertyCanReact.Value();
        }

        /// <summary>
        /// Set the value of the CurrentReaction property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCurrentReaction has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCurrentReaction(string aValue)
        {
            if (iPropertyCurrentReaction == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyCurrentReaction, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CurrentReaction property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCurrentReaction has previously been called.</remarks>
        /// <returns>Value of the CurrentReaction property.</returns>
        public string PropertyCurrentReaction()
        {
            if (iPropertyCurrentReaction == null)
                throw new PropertyDisabledError();
            return iPropertyCurrentReaction.Value();
        }

        /// <summary>
        /// Set the value of the AvailableReactions property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAvailableReactions has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAvailableReactions(string aValue)
        {
            if (iPropertyAvailableReactions == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyAvailableReactions, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the AvailableReactions property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAvailableReactions has previously been called.</remarks>
        /// <returns>Value of the AvailableReactions property.</returns>
        public string PropertyAvailableReactions()
        {
            if (iPropertyAvailableReactions == null)
                throw new PropertyDisabledError();
            return iPropertyAvailableReactions.Value();
        }

        /// <summary>
        /// Signal that the action GetCanReact is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetCanReact must be overridden if this is called.</remarks>
        protected void EnableActionGetCanReact()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetCanReact");
            action.AddOutputParameter(new ParameterBool("CanReact"));
            iDelegateGetCanReact = new ActionDelegate(DoGetCanReact);
            EnableAction(action, iDelegateGetCanReact, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetCurrentReaction is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetCurrentReaction must be overridden if this is called.</remarks>
        protected void EnableActionGetCurrentReaction()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetCurrentReaction");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("Reaction", allowedValues));
            iDelegateGetCurrentReaction = new ActionDelegate(DoGetCurrentReaction);
            EnableAction(action, iDelegateGetCurrentReaction, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetAvailableReactions is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetAvailableReactions must be overridden if this is called.</remarks>
        protected void EnableActionGetAvailableReactions()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetAvailableReactions");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("AvailableReactions", allowedValues));
            iDelegateGetAvailableReactions = new ActionDelegate(DoGetAvailableReactions);
            EnableAction(action, iDelegateGetAvailableReactions, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetReaction is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetReaction must be overridden if this is called.</remarks>
        protected void EnableActionSetReaction()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetReaction");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Reaction", allowedValues));
            iDelegateSetReaction = new ActionDelegate(DoSetReaction);
            EnableAction(action, iDelegateSetReaction, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearReaction is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearReaction must be overridden if this is called.</remarks>
        protected void EnableActionClearReaction()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearReaction");
            iDelegateClearReaction = new ActionDelegate(DoClearReaction);
            EnableAction(action, iDelegateClearReaction, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetCanReact action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetCanReact action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetCanReact was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aCanReact"></param>
        protected virtual void GetCanReact(IDvInvocation aInvocation, out bool aCanReact)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetCurrentReaction action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetCurrentReaction action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetCurrentReaction was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aReaction"></param>
        protected virtual void GetCurrentReaction(IDvInvocation aInvocation, out string aReaction)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetAvailableReactions action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetAvailableReactions action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetAvailableReactions was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAvailableReactions"></param>
        protected virtual void GetAvailableReactions(IDvInvocation aInvocation, out string aAvailableReactions)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetReaction action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetReaction action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetReaction was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aReaction"></param>
        protected virtual void SetReaction(IDvInvocation aInvocation, string aReaction)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearReaction action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearReaction action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearReaction was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ClearReaction(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetCanReact(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgReaction1 self = (DvProviderAvOpenhomeOrgReaction1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool canReact;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetCanReact(invocation, out canReact);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetCanReact");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetCanReact" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCanReact" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("CanReact", canReact);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCanReact" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetCurrentReaction(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgReaction1 self = (DvProviderAvOpenhomeOrgReaction1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string reaction;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetCurrentReaction(invocation, out reaction);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetCurrentReaction");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetCurrentReaction" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCurrentReaction" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Reaction", reaction);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetCurrentReaction" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetAvailableReactions(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgReaction1 self = (DvProviderAvOpenhomeOrgReaction1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string availableReactions;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetAvailableReactions(invocation, out availableReactions);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetAvailableReactions");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetAvailableReactions" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAvailableReactions" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("AvailableReactions", availableReactions);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAvailableReactions" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetReaction(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgReaction1 self = (DvProviderAvOpenhomeOrgReaction1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string reaction;
            try
            {
                invocation.ReadStart();
                reaction = invocation.ReadString("Reaction");
                invocation.ReadEnd();
                self.SetReaction(invocation, reaction);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetReaction");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetReaction" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetReaction" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetReaction" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearReaction(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgReaction1 self = (DvProviderAvOpenhomeOrgReaction1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ClearReaction(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearReaction");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearReaction" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearReaction" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearReaction" });
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

