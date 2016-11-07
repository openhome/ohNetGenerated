using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkPrivacy1 : IDisposable
    {

        /// <summary>
        /// Set the value of the PolicyVersion property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPolicyVersion(uint aValue);

        /// <summary>
        /// Get a copy of the value of the PolicyVersion property
        /// </summary>
        /// <returns>Value of the PolicyVersion property.</param>
        uint PropertyPolicyVersion();

        /// <summary>
        /// Set the value of the PolicyAgreed property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPolicyAgreed(uint aValue);

        /// <summary>
        /// Get a copy of the value of the PolicyAgreed property
        /// </summary>
        /// <returns>Value of the PolicyAgreed property.</param>
        uint PropertyPolicyAgreed();

        /// <summary>
        /// Set the value of the PolicyDetails property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPolicyDetails(string aValue);

        /// <summary>
        /// Get a copy of the value of the PolicyDetails property
        /// </summary>
        /// <returns>Value of the PolicyDetails property.</param>
        string PropertyPolicyDetails();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:Privacy:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkPrivacy1 : DvProvider, IDisposable, IDvProviderLinnCoUkPrivacy1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetPolicyVersion;
        private ActionDelegate iDelegateGetPolicyAgreed;
        private ActionDelegate iDelegateGetPolicyDetails;
        private ActionDelegate iDelegateSetPolicyDetails;
        private PropertyUint iPropertyPolicyVersion;
        private PropertyUint iPropertyPolicyAgreed;
        private PropertyString iPropertyPolicyDetails;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkPrivacy1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "Privacy", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the PolicyVersion property.
        /// </summary>
        public void EnablePropertyPolicyVersion()
        {
            iPropertyPolicyVersion = new PropertyUint(new ParameterUint("PolicyVersion"));
            AddProperty(iPropertyPolicyVersion);
        }

        /// <summary>
        /// Enable the PolicyAgreed property.
        /// </summary>
        public void EnablePropertyPolicyAgreed()
        {
            iPropertyPolicyAgreed = new PropertyUint(new ParameterUint("PolicyAgreed"));
            AddProperty(iPropertyPolicyAgreed);
        }

        /// <summary>
        /// Enable the PolicyDetails property.
        /// </summary>
        public void EnablePropertyPolicyDetails()
        {
            List<String> allowedValues = new List<String>();
            iPropertyPolicyDetails = new PropertyString(new ParameterString("PolicyDetails", allowedValues));
            AddProperty(iPropertyPolicyDetails);
        }

        /// <summary>
        /// Set the value of the PolicyVersion property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyVersion has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPolicyVersion(uint aValue)
        {
            if (iPropertyPolicyVersion == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyPolicyVersion, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PolicyVersion property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyVersion has previously been called.</remarks>
        /// <returns>Value of the PolicyVersion property.</returns>
        public uint PropertyPolicyVersion()
        {
            if (iPropertyPolicyVersion == null)
                throw new PropertyDisabledError();
            return iPropertyPolicyVersion.Value();
        }

        /// <summary>
        /// Set the value of the PolicyAgreed property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyAgreed has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPolicyAgreed(uint aValue)
        {
            if (iPropertyPolicyAgreed == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyPolicyAgreed, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PolicyAgreed property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyAgreed has previously been called.</remarks>
        /// <returns>Value of the PolicyAgreed property.</returns>
        public uint PropertyPolicyAgreed()
        {
            if (iPropertyPolicyAgreed == null)
                throw new PropertyDisabledError();
            return iPropertyPolicyAgreed.Value();
        }

        /// <summary>
        /// Set the value of the PolicyDetails property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyDetails has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPolicyDetails(string aValue)
        {
            if (iPropertyPolicyDetails == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyPolicyDetails, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PolicyDetails property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPolicyDetails has previously been called.</remarks>
        /// <returns>Value of the PolicyDetails property.</returns>
        public string PropertyPolicyDetails()
        {
            if (iPropertyPolicyDetails == null)
                throw new PropertyDisabledError();
            return iPropertyPolicyDetails.Value();
        }

        /// <summary>
        /// Signal that the action GetPolicyVersion is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPolicyVersion must be overridden if this is called.</remarks>
        protected void EnableActionGetPolicyVersion()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPolicyVersion");
            action.AddOutputParameter(new ParameterRelated("Version", iPropertyPolicyVersion));
            iDelegateGetPolicyVersion = new ActionDelegate(DoGetPolicyVersion);
            EnableAction(action, iDelegateGetPolicyVersion, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetPolicyAgreed is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPolicyAgreed must be overridden if this is called.</remarks>
        protected void EnableActionGetPolicyAgreed()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPolicyAgreed");
            action.AddOutputParameter(new ParameterRelated("Version", iPropertyPolicyAgreed));
            iDelegateGetPolicyAgreed = new ActionDelegate(DoGetPolicyAgreed);
            EnableAction(action, iDelegateGetPolicyAgreed, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetPolicyDetails is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetPolicyDetails must be overridden if this is called.</remarks>
        protected void EnableActionGetPolicyDetails()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetPolicyDetails");
            action.AddOutputParameter(new ParameterRelated("Details", iPropertyPolicyDetails));
            iDelegateGetPolicyDetails = new ActionDelegate(DoGetPolicyDetails);
            EnableAction(action, iDelegateGetPolicyDetails, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetPolicyDetails is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetPolicyDetails must be overridden if this is called.</remarks>
        protected void EnableActionSetPolicyDetails()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetPolicyDetails");
            action.AddInputParameter(new ParameterRelated("Details", iPropertyPolicyDetails));
            iDelegateSetPolicyDetails = new ActionDelegate(DoSetPolicyDetails);
            EnableAction(action, iDelegateSetPolicyDetails, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetPolicyVersion action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPolicyVersion action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPolicyVersion was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVersion"></param>
        protected virtual void GetPolicyVersion(IDvInvocation aInvocation, out uint aVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetPolicyAgreed action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPolicyAgreed action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPolicyAgreed was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVersion"></param>
        protected virtual void GetPolicyAgreed(IDvInvocation aInvocation, out uint aVersion)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetPolicyDetails action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetPolicyDetails action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetPolicyDetails was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDetails"></param>
        protected virtual void GetPolicyDetails(IDvInvocation aInvocation, out string aDetails)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetPolicyDetails action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetPolicyDetails action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetPolicyDetails was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDetails"></param>
        protected virtual void SetPolicyDetails(IDvInvocation aInvocation, string aDetails)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetPolicyVersion(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkPrivacy1 self = (DvProviderLinnCoUkPrivacy1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint version;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPolicyVersion(invocation, out version);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPolicyVersion");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetPolicyVersion" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyVersion" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Version", version);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyVersion" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPolicyAgreed(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkPrivacy1 self = (DvProviderLinnCoUkPrivacy1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint version;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPolicyAgreed(invocation, out version);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPolicyAgreed");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetPolicyAgreed" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyAgreed" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Version", version);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyAgreed" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetPolicyDetails(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkPrivacy1 self = (DvProviderLinnCoUkPrivacy1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string details;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetPolicyDetails(invocation, out details);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetPolicyDetails");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetPolicyDetails" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyDetails" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Details", details);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetPolicyDetails" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetPolicyDetails(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkPrivacy1 self = (DvProviderLinnCoUkPrivacy1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string details;
            try
            {
                invocation.ReadStart();
                details = invocation.ReadString("Details");
                invocation.ReadEnd();
                self.SetPolicyDetails(invocation, details);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetPolicyDetails");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetPolicyDetails" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetPolicyDetails" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetPolicyDetails" });
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

