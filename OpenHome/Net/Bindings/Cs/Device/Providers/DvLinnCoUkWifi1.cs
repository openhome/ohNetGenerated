using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkWifi1 : IDisposable
    {

        /// <summary>
        /// Set the value of the AdapterInUse property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAdapterInUse(bool aValue);

        /// <summary>
        /// Get a copy of the value of the AdapterInUse property
        /// </summary>
        /// <returns>Value of the AdapterInUse property.</param>
        bool PropertyAdapterInUse();

        /// <summary>
        /// Set the value of the Configuration property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyConfiguration(string aValue);

        /// <summary>
        /// Get a copy of the value of the Configuration property
        /// </summary>
        /// <returns>Value of the Configuration property.</param>
        string PropertyConfiguration();

        /// <summary>
        /// Set the value of the ScanResults property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyScanResults(string aValue);

        /// <summary>
        /// Get a copy of the value of the ScanResults property
        /// </summary>
        /// <returns>Value of the ScanResults property.</param>
        string PropertyScanResults();

        /// <summary>
        /// Set the value of the Status property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyStatus(string aValue);

        /// <summary>
        /// Get a copy of the value of the Status property
        /// </summary>
        /// <returns>Value of the Status property.</param>
        string PropertyStatus();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Wifi:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkWifi1 : DvProvider, IDisposable, IDvProviderLinnCoUkWifi1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateClearCredentials;
        private ActionDelegate iDelegateGetAdapterInUse;
        private ActionDelegate iDelegateGetConfiguration;
        private ActionDelegate iDelegateGetNetworkInfo;
        private ActionDelegate iDelegateGetScanResults;
        private ActionDelegate iDelegateGetSignalInfo;
        private ActionDelegate iDelegateGetStatus;
        private ActionDelegate iDelegateScan;
        private ActionDelegate iDelegateSetCredentials;
        private PropertyBool iPropertyAdapterInUse;
        private PropertyString iPropertyConfiguration;
        private PropertyString iPropertyScanResults;
        private PropertyString iPropertyStatus;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkWifi1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Wifi", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the AdapterInUse property.
        /// </summary>
        public void EnablePropertyAdapterInUse()
        {
            iPropertyAdapterInUse = new PropertyBool(new ParameterBool("AdapterInUse"));
            AddProperty(iPropertyAdapterInUse);
        }

        /// <summary>
        /// Enable the Configuration property.
        /// </summary>
        public void EnablePropertyConfiguration()
        {
            List<String> allowedValues = new List<String>();
            iPropertyConfiguration = new PropertyString(new ParameterString("Configuration", allowedValues));
            AddProperty(iPropertyConfiguration);
        }

        /// <summary>
        /// Enable the ScanResults property.
        /// </summary>
        public void EnablePropertyScanResults()
        {
            List<String> allowedValues = new List<String>();
            iPropertyScanResults = new PropertyString(new ParameterString("ScanResults", allowedValues));
            AddProperty(iPropertyScanResults);
        }

        /// <summary>
        /// Enable the Status property.
        /// </summary>
        public void EnablePropertyStatus()
        {
            List<String> allowedValues = new List<String>();
            iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues));
            AddProperty(iPropertyStatus);
        }

        /// <summary>
        /// Set the value of the AdapterInUse property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAdapterInUse has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAdapterInUse(bool aValue)
        {
            if (iPropertyAdapterInUse == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyAdapterInUse, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the AdapterInUse property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAdapterInUse has previously been called.</remarks>
        /// <returns>Value of the AdapterInUse property.</returns>
        public bool PropertyAdapterInUse()
        {
            if (iPropertyAdapterInUse == null)
                throw new PropertyDisabledError();
            return iPropertyAdapterInUse.Value();
        }

        /// <summary>
        /// Set the value of the Configuration property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConfiguration has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyConfiguration(string aValue)
        {
            if (iPropertyConfiguration == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyConfiguration, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Configuration property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyConfiguration has previously been called.</remarks>
        /// <returns>Value of the Configuration property.</returns>
        public string PropertyConfiguration()
        {
            if (iPropertyConfiguration == null)
                throw new PropertyDisabledError();
            return iPropertyConfiguration.Value();
        }

        /// <summary>
        /// Set the value of the ScanResults property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyScanResults has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyScanResults(string aValue)
        {
            if (iPropertyScanResults == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyScanResults, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ScanResults property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyScanResults has previously been called.</remarks>
        /// <returns>Value of the ScanResults property.</returns>
        public string PropertyScanResults()
        {
            if (iPropertyScanResults == null)
                throw new PropertyDisabledError();
            return iPropertyScanResults.Value();
        }

        /// <summary>
        /// Set the value of the Status property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStatus has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyStatus(string aValue)
        {
            if (iPropertyStatus == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyStatus, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Status property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStatus has previously been called.</remarks>
        /// <returns>Value of the Status property.</returns>
        public string PropertyStatus()
        {
            if (iPropertyStatus == null)
                throw new PropertyDisabledError();
            return iPropertyStatus.Value();
        }

        /// <summary>
        /// Signal that the action ClearCredentials is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearCredentials must be overridden if this is called.</remarks>
        protected void EnableActionClearCredentials()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearCredentials");
            iDelegateClearCredentials = new ActionDelegate(DoClearCredentials);
            EnableAction(action, iDelegateClearCredentials, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetAdapterInUse is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetAdapterInUse must be overridden if this is called.</remarks>
        protected void EnableActionGetAdapterInUse()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetAdapterInUse");
            action.AddOutputParameter(new ParameterRelated("AdapterInUse", iPropertyAdapterInUse));
            iDelegateGetAdapterInUse = new ActionDelegate(DoGetAdapterInUse);
            EnableAction(action, iDelegateGetAdapterInUse, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetConfiguration is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetConfiguration must be overridden if this is called.</remarks>
        protected void EnableActionGetConfiguration()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetConfiguration");
            action.AddOutputParameter(new ParameterRelated("Configuration", iPropertyConfiguration));
            iDelegateGetConfiguration = new ActionDelegate(DoGetConfiguration);
            EnableAction(action, iDelegateGetConfiguration, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetNetworkInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetNetworkInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetNetworkInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetNetworkInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("NetworkInfo", allowedValues));
            iDelegateGetNetworkInfo = new ActionDelegate(DoGetNetworkInfo);
            EnableAction(action, iDelegateGetNetworkInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetScanResults is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetScanResults must be overridden if this is called.</remarks>
        protected void EnableActionGetScanResults()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetScanResults");
            action.AddOutputParameter(new ParameterRelated("ScanResults", iPropertyScanResults));
            iDelegateGetScanResults = new ActionDelegate(DoGetScanResults);
            EnableAction(action, iDelegateGetScanResults, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetSignalInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSignalInfo must be overridden if this is called.</remarks>
        protected void EnableActionGetSignalInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSignalInfo");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("SignalInfo", allowedValues));
            iDelegateGetSignalInfo = new ActionDelegate(DoGetSignalInfo);
            EnableAction(action, iDelegateGetSignalInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetStatus is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetStatus must be overridden if this is called.</remarks>
        protected void EnableActionGetStatus()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetStatus");
            action.AddOutputParameter(new ParameterRelated("Status", iPropertyStatus));
            iDelegateGetStatus = new ActionDelegate(DoGetStatus);
            EnableAction(action, iDelegateGetStatus, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Scan is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Scan must be overridden if this is called.</remarks>
        protected void EnableActionScan()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Scan");
            iDelegateScan = new ActionDelegate(DoScan);
            EnableAction(action, iDelegateScan, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetCredentials is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetCredentials must be overridden if this is called.</remarks>
        protected void EnableActionSetCredentials()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetCredentials");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Ssid", allowedValues));
            action.AddInputParameter(new ParameterString("Password", allowedValues));
            iDelegateSetCredentials = new ActionDelegate(DoSetCredentials);
            EnableAction(action, iDelegateSetCredentials, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// ClearCredentials action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearCredentials action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearCredentials was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void ClearCredentials(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetAdapterInUse action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetAdapterInUse action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetAdapterInUse was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aAdapterInUse"></param>
        protected virtual void GetAdapterInUse(IDvInvocation aInvocation, out bool aAdapterInUse)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetConfiguration action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetConfiguration action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetConfiguration was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aConfiguration"></param>
        protected virtual void GetConfiguration(IDvInvocation aInvocation, out string aConfiguration)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetNetworkInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetNetworkInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetNetworkInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aNetworkInfo"></param>
        protected virtual void GetNetworkInfo(IDvInvocation aInvocation, out string aNetworkInfo)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetScanResults action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetScanResults action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetScanResults was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aScanResults"></param>
        protected virtual void GetScanResults(IDvInvocation aInvocation, out string aScanResults)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetSignalInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSignalInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSignalInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSignalInfo"></param>
        protected virtual void GetSignalInfo(IDvInvocation aInvocation, out string aSignalInfo)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetStatus action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetStatus action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetStatus was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStatus"></param>
        protected virtual void GetStatus(IDvInvocation aInvocation, out string aStatus)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Scan action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Scan action for the owning device.
        ///
        /// Must be implemented iff EnableActionScan was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Scan(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetCredentials action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetCredentials action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetCredentials was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSsid"></param>
        /// <param name="aPassword"></param>
        protected virtual void SetCredentials(IDvInvocation aInvocation, string aSsid, string aPassword)
        {
            throw (new ActionDisabledError());
        }

        private static int DoClearCredentials(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ClearCredentials(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearCredentials");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearCredentials" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearCredentials" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearCredentials" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetAdapterInUse(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool adapterInUse;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetAdapterInUse(invocation, out adapterInUse);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetAdapterInUse");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetAdapterInUse" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAdapterInUse" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("AdapterInUse", adapterInUse);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAdapterInUse" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetConfiguration(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string configuration;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetConfiguration(invocation, out configuration);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetConfiguration");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetConfiguration" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetConfiguration" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Configuration", configuration);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetConfiguration" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetNetworkInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string networkInfo;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetNetworkInfo(invocation, out networkInfo);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetNetworkInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetNetworkInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetNetworkInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("NetworkInfo", networkInfo);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetNetworkInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetScanResults(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string scanResults;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetScanResults(invocation, out scanResults);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetScanResults");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetScanResults" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetScanResults" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("ScanResults", scanResults);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetScanResults" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetSignalInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string signalInfo;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSignalInfo(invocation, out signalInfo);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSignalInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSignalInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSignalInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("SignalInfo", signalInfo);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSignalInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetStatus(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string status;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetStatus(invocation, out status);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetStatus");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetStatus" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetStatus" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Status", status);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetStatus" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoScan(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Scan(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Scan");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Scan" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Scan" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Scan" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetCredentials(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkWifi1 self = (DvProviderLinnCoUkWifi1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string ssid;
            string password;
            try
            {
                invocation.ReadStart();
                ssid = invocation.ReadString("Ssid");
                password = invocation.ReadString("Password");
                invocation.ReadEnd();
                self.SetCredentials(invocation, ssid, password);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetCredentials");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetCredentials" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetCredentials" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetCredentials" });
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

