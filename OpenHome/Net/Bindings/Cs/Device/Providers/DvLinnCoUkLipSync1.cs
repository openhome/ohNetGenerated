using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderLinnCoUkLipSync1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Delay property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDelay(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Delay property
        /// </summary>
        /// <returns>Value of the Delay property.</param>
        uint PropertyDelay();

        /// <summary>
        /// Set the value of the DelayMinimum property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDelayMinimum(uint aValue);

        /// <summary>
        /// Get a copy of the value of the DelayMinimum property
        /// </summary>
        /// <returns>Value of the DelayMinimum property.</param>
        uint PropertyDelayMinimum();

        /// <summary>
        /// Set the value of the DelayMaximum property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyDelayMaximum(uint aValue);

        /// <summary>
        /// Get a copy of the value of the DelayMaximum property
        /// </summary>
        /// <returns>Value of the DelayMaximum property.</param>
        uint PropertyDelayMaximum();
        
    }
    /// <summary>
    /// Provider for the linn.co.uk:LipSync:1 UPnP service
    /// </summary>
    public class DvProviderLinnCoUkLipSync1 : DvProvider, IDisposable, IDvProviderLinnCoUkLipSync1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateSetDelay;
        private ActionDelegate iDelegateDelay;
        private ActionDelegate iDelegateDelayMinimum;
        private ActionDelegate iDelegateDelayMaximum;
        private PropertyUint iPropertyDelay;
        private PropertyUint iPropertyDelayMinimum;
        private PropertyUint iPropertyDelayMaximum;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderLinnCoUkLipSync1(DvDevice aDevice)
            : base(aDevice, "linn.co.uk", "LipSync", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Delay property.
        /// </summary>
        public void EnablePropertyDelay()
        {
            iPropertyDelay = new PropertyUint(new ParameterUint("Delay"));
            AddProperty(iPropertyDelay);
        }

        /// <summary>
        /// Enable the DelayMinimum property.
        /// </summary>
        public void EnablePropertyDelayMinimum()
        {
            iPropertyDelayMinimum = new PropertyUint(new ParameterUint("DelayMinimum"));
            AddProperty(iPropertyDelayMinimum);
        }

        /// <summary>
        /// Enable the DelayMaximum property.
        /// </summary>
        public void EnablePropertyDelayMaximum()
        {
            iPropertyDelayMaximum = new PropertyUint(new ParameterUint("DelayMaximum"));
            AddProperty(iPropertyDelayMaximum);
        }

        /// <summary>
        /// Set the value of the Delay property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelay has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDelay(uint aValue)
        {
            if (iPropertyDelay == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyDelay, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Delay property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelay has previously been called.</remarks>
        /// <returns>Value of the Delay property.</returns>
        public uint PropertyDelay()
        {
            if (iPropertyDelay == null)
                throw new PropertyDisabledError();
            return iPropertyDelay.Value();
        }

        /// <summary>
        /// Set the value of the DelayMinimum property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelayMinimum has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDelayMinimum(uint aValue)
        {
            if (iPropertyDelayMinimum == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyDelayMinimum, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DelayMinimum property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelayMinimum has previously been called.</remarks>
        /// <returns>Value of the DelayMinimum property.</returns>
        public uint PropertyDelayMinimum()
        {
            if (iPropertyDelayMinimum == null)
                throw new PropertyDisabledError();
            return iPropertyDelayMinimum.Value();
        }

        /// <summary>
        /// Set the value of the DelayMaximum property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelayMaximum has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyDelayMaximum(uint aValue)
        {
            if (iPropertyDelayMaximum == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyDelayMaximum, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the DelayMaximum property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyDelayMaximum has previously been called.</remarks>
        /// <returns>Value of the DelayMaximum property.</returns>
        public uint PropertyDelayMaximum()
        {
            if (iPropertyDelayMaximum == null)
                throw new PropertyDisabledError();
            return iPropertyDelayMaximum.Value();
        }

        /// <summary>
        /// Signal that the action SetDelay is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetDelay must be overridden if this is called.</remarks>
        protected void EnableActionSetDelay()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetDelay");
            action.AddInputParameter(new ParameterRelated("Delay", iPropertyDelay));
            iDelegateSetDelay = new ActionDelegate(DoSetDelay);
            EnableAction(action, iDelegateSetDelay, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Delay is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Delay must be overridden if this is called.</remarks>
        protected void EnableActionDelay()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Delay");
            action.AddOutputParameter(new ParameterRelated("Delay", iPropertyDelay));
            iDelegateDelay = new ActionDelegate(DoDelay);
            EnableAction(action, iDelegateDelay, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action DelayMinimum is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DelayMinimum must be overridden if this is called.</remarks>
        protected void EnableActionDelayMinimum()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DelayMinimum");
            action.AddOutputParameter(new ParameterRelated("Min", iPropertyDelayMinimum));
            iDelegateDelayMinimum = new ActionDelegate(DoDelayMinimum);
            EnableAction(action, iDelegateDelayMinimum, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action DelayMaximum is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// DelayMaximum must be overridden if this is called.</remarks>
        protected void EnableActionDelayMaximum()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("DelayMaximum");
            action.AddOutputParameter(new ParameterRelated("Max", iPropertyDelayMaximum));
            iDelegateDelayMaximum = new ActionDelegate(DoDelayMaximum);
            EnableAction(action, iDelegateDelayMaximum, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// SetDelay action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetDelay action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetDelay was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDelay"></param>
        protected virtual void SetDelay(IDvInvocation aInvocation, uint aDelay)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Delay action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Delay action for the owning device.
        ///
        /// Must be implemented iff EnableActionDelay was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aDelay"></param>
        protected virtual void Delay(IDvInvocation aInvocation, out uint aDelay)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// DelayMinimum action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DelayMinimum action for the owning device.
        ///
        /// Must be implemented iff EnableActionDelayMinimum was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMin"></param>
        protected virtual void DelayMinimum(IDvInvocation aInvocation, out uint aMin)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// DelayMaximum action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// DelayMaximum action for the owning device.
        ///
        /// Must be implemented iff EnableActionDelayMaximum was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMax"></param>
        protected virtual void DelayMaximum(IDvInvocation aInvocation, out uint aMax)
        {
            throw (new ActionDisabledError());
        }

        private static int DoSetDelay(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkLipSync1 self = (DvProviderLinnCoUkLipSync1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint delay;
            try
            {
                invocation.ReadStart();
                delay = invocation.ReadUint("Delay");
                invocation.ReadEnd();
                self.SetDelay(invocation, delay);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetDelay");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetDelay" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDelay" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetDelay" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDelay(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkLipSync1 self = (DvProviderLinnCoUkLipSync1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint delay;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Delay(invocation, out delay);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Delay");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Delay" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Delay" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Delay", delay);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Delay" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDelayMinimum(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkLipSync1 self = (DvProviderLinnCoUkLipSync1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint min;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.DelayMinimum(invocation, out min);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DelayMinimum");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "DelayMinimum" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DelayMinimum" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Min", min);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DelayMinimum" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoDelayMaximum(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderLinnCoUkLipSync1 self = (DvProviderLinnCoUkLipSync1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint max;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.DelayMaximum(invocation, out max);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "DelayMaximum");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "DelayMaximum" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DelayMaximum" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Max", max);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "DelayMaximum" });
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

