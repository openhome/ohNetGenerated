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
                invocation.ReportError(501, String.Format("Invalid value for property {0}", "GetLog"));
                return -1;
            }
            catch (Exception e)
            {
                Console.WriteLine("WARNING: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetLog", e.TargetSite.Name);
                Console.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
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
                Console.WriteLine("ERROR: unexpected exception {0}(\"{1}\") thrown by {2} in {3}", e.GetType(), e.Message, "GetLog", e.TargetSite.Name);
                Console.WriteLine("       Only ActionError can be thrown by action response writer");
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

