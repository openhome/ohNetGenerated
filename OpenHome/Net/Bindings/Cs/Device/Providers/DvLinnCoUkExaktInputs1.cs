using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkExaktInputs1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Associations property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyAssociations(string aValue);

        /// <summary>
        /// Get a copy of the value of the Associations property
        /// </summary>
        /// <returns>Value of the Associations property.</param>
        string PropertyAssociations();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:ExaktInputs:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkExaktInputs1 : DvProvider, IDisposable, IDvProviderLinnCoUkExaktInputs1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetAssociation;
        private ActionDelegate iDelegateSetAssociation;
        private ActionDelegate iDelegateClearAssociation;
        private ActionDelegate iDelegateInputCount;
        private PropertyString iPropertyAssociations;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkExaktInputs1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "ExaktInputs", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Associations property.
        /// </summary>
        public void EnablePropertyAssociations()
        {
            List<String> allowedValues = new List<String>();
            iPropertyAssociations = new PropertyString(new ParameterString("Associations", allowedValues));
            AddProperty(iPropertyAssociations);
        }

        /// <summary>
        /// Set the value of the Associations property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAssociations has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyAssociations(string aValue)
        {
            if (iPropertyAssociations == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyAssociations, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Associations property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyAssociations has previously been called.</remarks>
        /// <returns>Value of the Associations property.</returns>
        public string PropertyAssociations()
        {
            if (iPropertyAssociations == null)
                throw new PropertyDisabledError();
            return iPropertyAssociations.Value();
        }

        /// <summary>
        /// Signal that the action GetAssociation is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetAssociation must be overridden if this is called.</remarks>
        protected void EnableActionGetAssociation()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetAssociation");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("InputIndex"));
            action.AddOutputParameter(new ParameterString("DeviceId", allowedValues));
            iDelegateGetAssociation = new ActionDelegate(DoGetAssociation);
            EnableAction(action, iDelegateGetAssociation, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetAssociation is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetAssociation must be overridden if this is called.</remarks>
        protected void EnableActionSetAssociation()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetAssociation");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterUint("InputIndex"));
            action.AddInputParameter(new ParameterString("DeviceId", allowedValues));
            iDelegateSetAssociation = new ActionDelegate(DoSetAssociation);
            EnableAction(action, iDelegateSetAssociation, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ClearAssociation is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ClearAssociation must be overridden if this is called.</remarks>
        protected void EnableActionClearAssociation()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ClearAssociation");
            action.AddInputParameter(new ParameterUint("InputIndex"));
            iDelegateClearAssociation = new ActionDelegate(DoClearAssociation);
            EnableAction(action, iDelegateClearAssociation, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action InputCount is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// InputCount must be overridden if this is called.</remarks>
        protected void EnableActionInputCount()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("InputCount");
            action.AddOutputParameter(new ParameterUint("InputCount"));
            iDelegateInputCount = new ActionDelegate(DoInputCount);
            EnableAction(action, iDelegateInputCount, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetAssociation action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetAssociation action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetAssociation was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInputIndex"></param>
        /// <param name="aDeviceId"></param>
        protected virtual void GetAssociation(IDvInvocation aInvocation, uint aInputIndex, out string aDeviceId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetAssociation action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetAssociation action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetAssociation was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInputIndex"></param>
        /// <param name="aDeviceId"></param>
        protected virtual void SetAssociation(IDvInvocation aInvocation, uint aInputIndex, string aDeviceId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ClearAssociation action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ClearAssociation action for the owning device.
        ///
        /// Must be implemented iff EnableActionClearAssociation was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInputIndex"></param>
        protected virtual void ClearAssociation(IDvInvocation aInvocation, uint aInputIndex)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// InputCount action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// InputCount action for the owning device.
        ///
        /// Must be implemented iff EnableActionInputCount was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aInputCount"></param>
        protected virtual void InputCount(IDvInvocation aInvocation, out uint aInputCount)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetAssociation(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExaktInputs1 self = (DvProviderLinnCoUkExaktInputs1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint inputIndex;
            string deviceId;
            try
            {
                invocation.ReadStart();
                inputIndex = invocation.ReadUint("InputIndex");
                invocation.ReadEnd();
                self.GetAssociation(invocation, inputIndex, out deviceId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetAssociation");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetAssociation" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAssociation" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("DeviceId", deviceId);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetAssociation" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetAssociation(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExaktInputs1 self = (DvProviderLinnCoUkExaktInputs1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint inputIndex;
            string deviceId;
            try
            {
                invocation.ReadStart();
                inputIndex = invocation.ReadUint("InputIndex");
                deviceId = invocation.ReadString("DeviceId");
                invocation.ReadEnd();
                self.SetAssociation(invocation, inputIndex, deviceId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetAssociation");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetAssociation" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAssociation" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetAssociation" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoClearAssociation(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExaktInputs1 self = (DvProviderLinnCoUkExaktInputs1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint inputIndex;
            try
            {
                invocation.ReadStart();
                inputIndex = invocation.ReadUint("InputIndex");
                invocation.ReadEnd();
                self.ClearAssociation(invocation, inputIndex);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ClearAssociation");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ClearAssociation" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearAssociation" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ClearAssociation" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoInputCount(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkExaktInputs1 self = (DvProviderLinnCoUkExaktInputs1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint inputCount;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.InputCount(invocation, out inputCount);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "InputCount");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "InputCount" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InputCount" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("InputCount", inputCount);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "InputCount" });
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

