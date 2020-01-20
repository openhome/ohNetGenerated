using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgDebug2 : IDisposable
    {
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Debug:2 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgDebug2 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgDebug2
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetLog;
        private ActionDelegate iDelegateSendLog;
        private ActionDelegate iDelegateSendDeviceAnnouncements;
        private ActionDelegate iDelegateGetRecentMSearches;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgDebug2(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Debug", 2)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Signal that the action GetLog is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetLog must be overridden if this is called.</remarks>
        protected void EnableActionGetLog()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetLog");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("Log", allowedValues));
            iDelegateGetLog = new ActionDelegate(DoGetLog);
            EnableAction(action, iDelegateGetLog, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SendLog is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SendLog must be overridden if this is called.</remarks>
        protected void EnableActionSendLog()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SendLog");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Data", allowedValues));
            iDelegateSendLog = new ActionDelegate(DoSendLog);
            EnableAction(action, iDelegateSendLog, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SendDeviceAnnouncements is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SendDeviceAnnouncements must be overridden if this is called.</remarks>
        protected void EnableActionSendDeviceAnnouncements()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SendDeviceAnnouncements");
            iDelegateSendDeviceAnnouncements = new ActionDelegate(DoSendDeviceAnnouncements);
            EnableAction(action, iDelegateSendDeviceAnnouncements, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action GetRecentMSearches is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// GetRecentMSearches must be overridden if this is called.</remarks>
        protected void EnableActionGetRecentMSearches()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("GetRecentMSearches");
            List<String> allowedValues = new List<String>();
            action.AddOutputParameter(new ParameterString("JsonArray", allowedValues));
            iDelegateGetRecentMSearches = new ActionDelegate(DoGetRecentMSearches);
            EnableAction(action, iDelegateGetRecentMSearches, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// GetLog action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetLog action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetLog was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aLog"></param>
        protected virtual void GetLog(IDvInvocation aInvocation, out string aLog)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SendLog action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SendLog action for the owning device.
        ///
        /// Must be implemented iff EnableActionSendLog was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aData"></param>
        protected virtual void SendLog(IDvInvocation aInvocation, string aData)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SendDeviceAnnouncements action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SendDeviceAnnouncements action for the owning device.
        ///
        /// Must be implemented iff EnableActionSendDeviceAnnouncements was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void SendDeviceAnnouncements(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// GetRecentMSearches action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// GetRecentMSearches action for the owning device.
        ///
        /// Must be implemented iff EnableActionGetRecentMSearches was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aJsonArray"></param>
        protected virtual void GetRecentMSearches(IDvInvocation aInvocation, out string aJsonArray)
        {
            throw (new ActionDisabledError());
        }

        private static int DoGetLog(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDebug2 self = (DvProviderAvOpenhomeOrgDebug2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string log;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetLog(invocation, out log);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetLog");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetLog" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetLog" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Log", log);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetLog" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSendLog(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDebug2 self = (DvProviderAvOpenhomeOrgDebug2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string data;
            try
            {
                invocation.ReadStart();
                data = invocation.ReadString("Data");
                invocation.ReadEnd();
                self.SendLog(invocation, data);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SendLog");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SendLog" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SendLog" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SendLog" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSendDeviceAnnouncements(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDebug2 self = (DvProviderAvOpenhomeOrgDebug2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SendDeviceAnnouncements(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SendDeviceAnnouncements");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SendDeviceAnnouncements" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SendDeviceAnnouncements" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SendDeviceAnnouncements" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoGetRecentMSearches(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDebug2 self = (DvProviderAvOpenhomeOrgDebug2)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string jsonArray;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.GetRecentMSearches(invocation, out jsonArray);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "GetRecentMSearches");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "GetRecentMSearches" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetRecentMSearches" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("JsonArray", jsonArray);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "GetRecentMSearches" });
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

