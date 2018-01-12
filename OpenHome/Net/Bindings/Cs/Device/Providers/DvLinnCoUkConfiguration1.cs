using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkConfiguration1 : IDisposable
    {

        /// <summary>
        /// Set the value of the ConfigurationXml property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyConfigurationXml(string aValue);

        /// <summary>
        /// Get a copy of the value of the ConfigurationXml property
        /// </summary>
        /// <returns>Value of the ConfigurationXml property.</param>
        string PropertyConfigurationXml();

        /// <summary>
        /// Set the value of the ParameterXml property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyParameterXml(string aValue);

        /// <summary>
        /// Get a copy of the value of the ParameterXml property
        /// </summary>
        /// <returns>Value of the ParameterXml property.</param>
        string PropertyParameterXml();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Configuration:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkConfiguration1 : DvProvider, IDisposable, IDvProviderLinnCoUkConfiguration1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateConfigurationXml;
        private ActionDelegate iDelegateParameterXml;
        private ActionDelegate iDelegateSetParameter;
        private PropertyString iPropertyConfigurationXml;
        private PropertyString iPropertyParameterXml;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkConfiguration1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Configuration", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the ConfigurationXml property.
        /// </summary>
        public void EnablePropertyConfigurationXml()
        {
            List<String> allowedValues = new List<String>();
            iPropertyConfigurationXml = new PropertyString(new ParameterString("ConfigurationXml", allowedValues));
            AddProperty(iPropertyConfigurationXml);
        }

        /// <summary>
        /// Enable the ParameterXml property.
        /// </summary>
        public void EnablePropertyParameterXml()
        {
            List<String> allowedValues = new List<String>();
            iPropertyParameterXml = new PropertyString(new ParameterString("ParameterXml", allowedValues));
            AddProperty(iPropertyParameterXml);
        }

        /// <summary>
        /// Set the value of the ConfigurationXml property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConfigurationXml has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyConfigurationXml(string aValue)
        {
            if (iPropertyConfigurationXml == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyConfigurationXml, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ConfigurationXml property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConfigurationXml has previously been called.</remarks>
        /// <returns>Value of the ConfigurationXml property.</returns>
        public string PropertyConfigurationXml()
        {
            if (iPropertyConfigurationXml == null)
                throw new PropertyDisabledError();
            return iPropertyConfigurationXml.Value();
        }

        /// <summary>
        /// Set the value of the ParameterXml property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyParameterXml has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyParameterXml(string aValue)
        {
            if (iPropertyParameterXml == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyParameterXml, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ParameterXml property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyParameterXml has previously been called.</remarks>
        /// <returns>Value of the ParameterXml property.</returns>
        public string PropertyParameterXml()
        {
            if (iPropertyParameterXml == null)
                throw new PropertyDisabledError();
            return iPropertyParameterXml.Value();
        }

        /// <summary>
        /// Signal that the action ConfigurationXml is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ConfigurationXml must be overridden if this is called.</remarks>
        protected void EnableActionConfigurationXml()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ConfigurationXml");
            action.AddOutputParameter(new ParameterRelated("aConfigurationXml", iPropertyConfigurationXml));
            iDelegateConfigurationXml = new ActionDelegate(DoConfigurationXml);
            EnableAction(action, iDelegateConfigurationXml, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ParameterXml is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ParameterXml must be overridden if this is called.</remarks>
        protected void EnableActionParameterXml()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ParameterXml");
            action.AddOutputParameter(new ParameterRelated("aParameterXml", iPropertyParameterXml));
            iDelegateParameterXml = new ActionDelegate(DoParameterXml);
            EnableAction(action, iDelegateParameterXml, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetParameter is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetParameter must be overridden if this is called.</remarks>
        protected void EnableActionSetParameter()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetParameter");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("aTarget", allowedValues));
            action.AddInputParameter(new ParameterString("aName", allowedValues));
            action.AddInputParameter(new ParameterString("aValue", allowedValues));
            iDelegateSetParameter = new ActionDelegate(DoSetParameter);
            EnableAction(action, iDelegateSetParameter, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// ConfigurationXml action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ConfigurationXml action for the owning device.
        ///
        /// Must be implemented iff EnableActionConfigurationXml was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaConfigurationXml"></param>
        protected virtual void ConfigurationXml(IDvInvocation aInvocation, out string aaConfigurationXml)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ParameterXml action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ParameterXml action for the owning device.
        ///
        /// Must be implemented iff EnableActionParameterXml was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaParameterXml"></param>
        protected virtual void ParameterXml(IDvInvocation aInvocation, out string aaParameterXml)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetParameter action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetParameter action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetParameter was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aaTarget"></param>
        /// <param name="aaName"></param>
        /// <param name="aaValue"></param>
        protected virtual void SetParameter(IDvInvocation aInvocation, string aaTarget, string aaName, string aaValue)
        {
            throw (new ActionDisabledError());
        }

        private static int DoConfigurationXml(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkConfiguration1 self = (DvProviderLinnCoUkConfiguration1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aConfigurationXml;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ConfigurationXml(invocation, out aConfigurationXml);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ConfigurationXml");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ConfigurationXml" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ConfigurationXml" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aConfigurationXml", aConfigurationXml);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ConfigurationXml" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoParameterXml(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkConfiguration1 self = (DvProviderLinnCoUkConfiguration1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aParameterXml;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ParameterXml(invocation, out aParameterXml);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ParameterXml");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ParameterXml" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ParameterXml" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("aParameterXml", aParameterXml);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ParameterXml" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetParameter(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkConfiguration1 self = (DvProviderLinnCoUkConfiguration1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string aTarget;
            string aName;
            string aValue;
            try
            {
                invocation.ReadStart();
                aTarget = invocation.ReadString("aTarget");
                aName = invocation.ReadString("aName");
                aValue = invocation.ReadString("aValue");
                invocation.ReadEnd();
                self.SetParameter(invocation, aTarget, aName, aValue);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetParameter");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetParameter" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetParameter" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetParameter" });
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

