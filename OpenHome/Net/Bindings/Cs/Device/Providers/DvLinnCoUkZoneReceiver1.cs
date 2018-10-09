using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkZoneReceiver1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Sender property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySender(string aValue);

        /// <summary>
        /// Get a copy of the value of the Sender property
        /// </summary>
        /// <returns>Value of the Sender property.</param>
        string PropertySender();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:ZoneReceiver:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkZoneReceiver1 : DvProvider, IDisposable, IDvProviderLinnCoUkZoneReceiver1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetSender;
        private PropertyString iPropertySender;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkZoneReceiver1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "ZoneReceiver", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Sender property.
        /// </summary>
        public void EnablePropertySender()
        {
            List<String> allowedValues = new List<String>();
            iPropertySender = new PropertyString(new ParameterString("Sender", allowedValues));
            AddProperty(iPropertySender);
        }

        /// <summary>
        /// Set the value of the Sender property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySender has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySender(string aValue)
        {
            if (iPropertySender == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertySender, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Sender property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySender has previously been called.</remarks>
        /// <returns>Value of the Sender property.</returns>
        public string PropertySender()
        {
            if (iPropertySender == null)
                throw new PropertyDisabledError();
            return iPropertySender.Value();
        }

        /// <summary>
        /// Signal that the action GetSender is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetSender must be overridden if this is called.</remarks>
        protected void EnableActionGetSender()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetSender");
            action.AddOutputParameter(new ParameterRelated("Sender", iPropertySender));
            iDelegateGetSender = new ActionDelegate(DoGetSender);
            EnableAction(action, iDelegateGetSender, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetSender action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetSender action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetSender was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aSender"></param>
        protected virtual void GetSender(IDvInvocation aInvocation, out string aSender)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetSender(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkZoneReceiver1 self = (DvProviderLinnCoUkZoneReceiver1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string sender;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetSender(invocation, out sender);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetSender");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetSender" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSender" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Sender", sender);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetSender" });
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

