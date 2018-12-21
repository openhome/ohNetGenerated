using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkZones1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Inputs property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyInputs(string aValue);

        /// <summary>
        /// Get a copy of the value of the Inputs property
        /// </summary>
        /// <returns>Value of the Inputs property.</param>
        string PropertyInputs();

        /// <summary>
        /// Set the value of the Outputs property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyOutputs(string aValue);

        /// <summary>
        /// Get a copy of the value of the Outputs property
        /// </summary>
        /// <returns>Value of the Outputs property.</param>
        string PropertyOutputs();

        /// <summary>
        /// Set the value of the Mappings property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMappings(string aValue);

        /// <summary>
        /// Get a copy of the value of the Mappings property
        /// </summary>
        /// <returns>Value of the Mappings property.</param>
        string PropertyMappings();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Zones:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkZones1 : DvProvider, IDisposable, IDvProviderLinnCoUkZones1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetInputs;
        private ActionDelegate iDelegateGetOutputs;
        private ActionDelegate iDelegateGetMappings;
        private ActionDelegate iDelegateSetMappings;
        private ActionDelegate iDelegateSetMapping;
        private PropertyString iPropertyInputs;
        private PropertyString iPropertyOutputs;
        private PropertyString iPropertyMappings;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkZones1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Zones", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Inputs property.
        /// </summary>
        public void EnablePropertyInputs()
        {
            List<String> allowedValues = new List<String>();
            iPropertyInputs = new PropertyString(new ParameterString("Inputs", allowedValues));
            AddProperty(iPropertyInputs);
        }

        /// <summary>
        /// Enable the Outputs property.
        /// </summary>
        public void EnablePropertyOutputs()
        {
            List<String> allowedValues = new List<String>();
            iPropertyOutputs = new PropertyString(new ParameterString("Outputs", allowedValues));
            AddProperty(iPropertyOutputs);
        }

        /// <summary>
        /// Enable the Mappings property.
        /// </summary>
        public void EnablePropertyMappings()
        {
            List<String> allowedValues = new List<String>();
            iPropertyMappings = new PropertyString(new ParameterString("Mappings", allowedValues));
            AddProperty(iPropertyMappings);
        }

        /// <summary>
        /// Set the value of the Inputs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInputs has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyInputs(string aValue)
        {
            if (iPropertyInputs == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyInputs, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Inputs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyInputs has previously been called.</remarks>
        /// <returns>Value of the Inputs property.</returns>
        public string PropertyInputs()
        {
            if (iPropertyInputs == null)
                throw new PropertyDisabledError();
            return iPropertyInputs.Value();
        }

        /// <summary>
        /// Set the value of the Outputs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyOutputs has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyOutputs(string aValue)
        {
            if (iPropertyOutputs == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyOutputs, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Outputs property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyOutputs has previously been called.</remarks>
        /// <returns>Value of the Outputs property.</returns>
        public string PropertyOutputs()
        {
            if (iPropertyOutputs == null)
                throw new PropertyDisabledError();
            return iPropertyOutputs.Value();
        }

        /// <summary>
        /// Set the value of the Mappings property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMappings has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMappings(string aValue)
        {
            if (iPropertyMappings == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyMappings, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Mappings property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMappings has previously been called.</remarks>
        /// <returns>Value of the Mappings property.</returns>
        public string PropertyMappings()
        {
            if (iPropertyMappings == null)
                throw new PropertyDisabledError();
            return iPropertyMappings.Value();
        }

        /// <summary>
        /// Signal that the action GetInputs is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetInputs must be overridden if this is called.</remarks>
        protected void EnableActionGetInputs()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetInputs");
            action.AddOutputParameter(new ParameterRelated("Inputs", iPropertyInputs));
            iDelegateGetInputs = new ActionDelegate(DoGetInputs);
            EnableAction(action, iDelegateGetInputs, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetOutputs is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetOutputs must be overridden if this is called.</remarks>
        protected void EnableActionGetOutputs()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetOutputs");
            action.AddOutputParameter(new ParameterRelated("Outputs", iPropertyOutputs));
            iDelegateGetOutputs = new ActionDelegate(DoGetOutputs);
            EnableAction(action, iDelegateGetOutputs, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetMappings is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetMappings must be overridden if this is called.</remarks>
        protected void EnableActionGetMappings()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetMappings");
            action.AddOutputParameter(new ParameterRelated("Mappings", iPropertyMappings));
            iDelegateGetMappings = new ActionDelegate(DoGetMappings);
            EnableAction(action, iDelegateGetMappings, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetMappings is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetMappings must be overridden if this is called.</remarks>
        protected void EnableActionSetMappings()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetMappings");
            action.AddInputParameter(new ParameterRelated("Mappings", iPropertyMappings));
            iDelegateSetMappings = new ActionDelegate(DoSetMappings);
            EnableAction(action, iDelegateSetMappings, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetMapping is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetMapping must be overridden if this is called.</remarks>
        protected void EnableActionSetMapping()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetMapping");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Output", allowedValues));
            action.AddInputParameter(new ParameterString("Input", allowedValues));
            iDelegateSetMapping = new ActionDelegate(DoSetMapping);
            EnableAction(action, iDelegateSetMapping, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetInputs action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetInputs action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetInputs was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInputs"></param>
        protected virtual void GetInputs(IDvInvocation aInvocation, out string aInputs)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetOutputs action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetOutputs action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetOutputs was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aOutputs"></param>
        protected virtual void GetOutputs(IDvInvocation aInvocation, out string aOutputs)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetMappings action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetMappings action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetMappings was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMappings"></param>
        protected virtual void GetMappings(IDvInvocation aInvocation, out string aMappings)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetMappings action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetMappings action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetMappings was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMappings"></param>
        protected virtual void SetMappings(IDvInvocation aInvocation, string aMappings)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetMapping action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetMapping action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetMapping was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aOutput"></param>
        /// <param name="aInput"></param>
        protected virtual void SetMapping(IDvInvocation aInvocation, string aOutput, string aInput)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetInputs(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZones1 self = (DvProviderLinnCoUkZones1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string inputs;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetInputs(invocation, out inputs);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetInputs");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetInputs" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetInputs" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Inputs", inputs);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetInputs" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetOutputs(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZones1 self = (DvProviderLinnCoUkZones1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string outputs;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetOutputs(invocation, out outputs);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetOutputs");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetOutputs" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetOutputs" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Outputs", outputs);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetOutputs" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetMappings(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZones1 self = (DvProviderLinnCoUkZones1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string mappings;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetMappings(invocation, out mappings);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetMappings");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetMappings" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMappings" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Mappings", mappings);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetMappings" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetMappings(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZones1 self = (DvProviderLinnCoUkZones1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string mappings;
            try
            {
                invocation.ReadStart();
                mappings = invocation.ReadString("Mappings");
                invocation.ReadEnd();
                self.SetMappings(invocation, mappings);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetMappings");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetMappings" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMappings" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMappings" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetMapping(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZones1 self = (DvProviderLinnCoUkZones1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string output;
            string input;
            try
            {
                invocation.ReadStart();
                output = invocation.ReadString("Output");
                input = invocation.ReadString("Input");
                invocation.ReadEnd();
                self.SetMapping(invocation, output, input);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetMapping");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetMapping" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMapping" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMapping" });
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

