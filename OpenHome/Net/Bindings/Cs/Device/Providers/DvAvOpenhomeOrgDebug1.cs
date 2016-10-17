using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgDebug1 : IDisposable
    {
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Debug:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgDebug1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgDebug1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateGetLog;
        private ActionDelegate iDelegateSendLog;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgDebug1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Debug", 1)
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

        private static int DoGetLog(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgDebug1 self = (DvProviderAvOpenhomeOrgDebug1)gch.Target;
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
            DvProviderAvOpenhomeOrgDebug1 self = (DvProviderAvOpenhomeOrgDebug1)gch.Target;
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

