using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgConfigApp1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Keys property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyKeys(string aValue);

        /// <summary>
        /// Get a copy of the value of the Keys property
        /// </summary>
        /// <returns>Value of the Keys property.</param>
        string PropertyKeys();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:ConfigApp:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgConfigApp1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgConfigApp1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetKeys;
        private ActionDelegate iDelegateSetValue;
        private ActionDelegate iDelegateGetValue;
        private ActionDelegate iDelegateResetAll;
        private PropertyString iPropertyKeys;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgConfigApp1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "ConfigApp", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Keys property.
        /// </summary>
        public void EnablePropertyKeys()
        {
            List<String> allowedValues = new List<String>();
            iPropertyKeys = new PropertyString(new ParameterString("Keys", allowedValues));
            AddProperty(iPropertyKeys);
        }

        /// <summary>
        /// Set the value of the Keys property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyKeys has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyKeys(string aValue)
        {
            if (iPropertyKeys == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyKeys, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Keys property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyKeys has previously been called.</remarks>
        /// <returns>Value of the Keys property.</returns>
        public string PropertyKeys()
        {
            if (iPropertyKeys == null)
                throw new PropertyDisabledError();
            return iPropertyKeys.Value();
        }

        /// <summary>
        /// Signal that the action GetKeys is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetKeys must be overridden if this is called.</remarks>
        protected void EnableActionGetKeys()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetKeys");
            action.AddOutputParameter(new ParameterRelated("Keys", iPropertyKeys));
            iDelegateGetKeys = new ActionDelegate(DoGetKeys);
            EnableAction(action, iDelegateGetKeys, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetValue is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetValue must be overridden if this is called.</remarks>
        protected void EnableActionSetValue()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetValue");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Key", allowedValues));
            action.AddInputParameter(new ParameterString("Value", allowedValues));
            iDelegateSetValue = new ActionDelegate(DoSetValue);
            EnableAction(action, iDelegateSetValue, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetValue is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetValue must be overridden if this is called.</remarks>
        protected void EnableActionGetValue()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetValue");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Key", allowedValues));
            action.AddOutputParameter(new ParameterString("Value", allowedValues));
            iDelegateGetValue = new ActionDelegate(DoGetValue);
            EnableAction(action, iDelegateGetValue, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ResetAll is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ResetAll must be overridden if this is called.</remarks>
        protected void EnableActionResetAll()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ResetAll");
            iDelegateResetAll = new ActionDelegate(DoResetAll);
            EnableAction(action, iDelegateResetAll, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetKeys action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetKeys action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetKeys was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aKeys"></param>
        protected virtual void GetKeys(IDvInvocation aInvocation, out string aKeys)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetValue action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetValue action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetValue was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aKey"></param>
        /// <param name="aValue"></param>
        protected virtual void SetValue(IDvInvocation aInvocation, string aKey, string aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetValue action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetValue action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetValue was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aKey"></param>
        /// <param name="aValue"></param>
        protected virtual void GetValue(IDvInvocation aInvocation, string aKey, out string aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ResetAll action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ResetAll action for the owning device.
        ///
        /// Must be implemented iff EnableActionResetAll was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ResetAll(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetKeys(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgConfigApp1 self = (DvProviderAvOpenhomeOrgConfigApp1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string keys;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetKeys(invocation, out keys);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetKeys");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetKeys" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetKeys" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Keys", keys);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetKeys" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetValue(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgConfigApp1 self = (DvProviderAvOpenhomeOrgConfigApp1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string key;
            string value;
            try
            {
                invocation.ReadStart();
                key = invocation.ReadString("Key");
                value = invocation.ReadString("Value");
                invocation.ReadEnd();
                self.SetValue(invocation, key, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetValue");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetValue" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetValue" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetValue" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetValue(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgConfigApp1 self = (DvProviderAvOpenhomeOrgConfigApp1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string key;
            string value;
            try
            {
                invocation.ReadStart();
                key = invocation.ReadString("Key");
                invocation.ReadEnd();
                self.GetValue(invocation, key, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetValue");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetValue" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetValue" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetValue" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoResetAll(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgConfigApp1 self = (DvProviderAvOpenhomeOrgConfigApp1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ResetAll(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ResetAll");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ResetAll" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ResetAll" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ResetAll" });
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

