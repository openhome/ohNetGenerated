using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgConfigApp1 : ICpProxy, IDisposable
    {
        void SyncGetKeys(out String aKeys);
        void BeginGetKeys(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetKeys(IntPtr aAsyncHandle, out String aKeys);
        void SyncSetValue(String aKey, String aValue);
        void BeginSetValue(String aKey, String aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetValue(IntPtr aAsyncHandle);
        void SyncGetValue(String aKey, out String aValue);
        void BeginGetValue(String aKey, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetValue(IntPtr aAsyncHandle, out String aValue);
        void SyncResetAll();
        void BeginResetAll(CpProxy.CallbackAsyncComplete aCallback);
        void EndResetAll(IntPtr aAsyncHandle);
        void SetPropertyKeysChanged(System.Action aKeysChanged);
        String PropertyKeys();
    }

    internal class SyncGetKeysAvOpenhomeOrgConfigApp1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgConfigApp1 iService;
        private String iKeys;

        public SyncGetKeysAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
        {
            iService = aProxy;
        }
        public String Keys()
        {
            return iKeys;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetKeys(aAsyncHandle, out iKeys);
        }
    };

    internal class SyncSetValueAvOpenhomeOrgConfigApp1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgConfigApp1 iService;

        public SyncSetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetValue(aAsyncHandle);
        }
    };

    internal class SyncGetValueAvOpenhomeOrgConfigApp1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgConfigApp1 iService;
        private String iValue;

        public SyncGetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
        {
            iService = aProxy;
        }
        public String Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetValue(aAsyncHandle, out iValue);
        }
    };

    internal class SyncResetAllAvOpenhomeOrgConfigApp1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgConfigApp1 iService;

        public SyncResetAllAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndResetAll(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:ConfigApp:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgConfigApp1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgConfigApp1
    {
        private OpenHome.Net.Core.Action iActionGetKeys;
        private OpenHome.Net.Core.Action iActionSetValue;
        private OpenHome.Net.Core.Action iActionGetValue;
        private OpenHome.Net.Core.Action iActionResetAll;
        private PropertyString iKeys;
        private System.Action iKeysChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgConfigApp1(ICpDevice aDevice)
            : base("av-openhome-org", "ConfigApp", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetKeys = new OpenHome.Net.Core.Action("GetKeys");
            param = new ParameterString("Keys", allowedValues);
            iActionGetKeys.AddOutputParameter(param);

            iActionSetValue = new OpenHome.Net.Core.Action("SetValue");
            param = new ParameterString("Key", allowedValues);
            iActionSetValue.AddInputParameter(param);
            param = new ParameterString("Value", allowedValues);
            iActionSetValue.AddInputParameter(param);

            iActionGetValue = new OpenHome.Net.Core.Action("GetValue");
            param = new ParameterString("Key", allowedValues);
            iActionGetValue.AddInputParameter(param);
            param = new ParameterString("Value", allowedValues);
            iActionGetValue.AddOutputParameter(param);

            iActionResetAll = new OpenHome.Net.Core.Action("ResetAll");

            iKeys = new PropertyString("Keys", KeysPropertyChanged);
            AddProperty(iKeys);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aKeys"></param>
        public void SyncGetKeys(out String aKeys)
        {
            SyncGetKeysAvOpenhomeOrgConfigApp1 sync = new SyncGetKeysAvOpenhomeOrgConfigApp1(this);
            BeginGetKeys(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aKeys = sync.Keys();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetKeys().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetKeys(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetKeys, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetKeys.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aKeys"></param>
        public void EndGetKeys(IntPtr aAsyncHandle, out String aKeys)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aKeys = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aKey"></param>
        /// <param name="aValue"></param>
        public void SyncSetValue(String aKey, String aValue)
        {
            SyncSetValueAvOpenhomeOrgConfigApp1 sync = new SyncSetValueAvOpenhomeOrgConfigApp1(this);
            BeginSetValue(aKey, aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetValue().</remarks>
        /// <param name="aKey"></param>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetValue(String aKey, String aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetValue, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetValue.InputParameter(inIndex++), aKey));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetValue.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetValue(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aKey"></param>
        /// <param name="aValue"></param>
        public void SyncGetValue(String aKey, out String aValue)
        {
            SyncGetValueAvOpenhomeOrgConfigApp1 sync = new SyncGetValueAvOpenhomeOrgConfigApp1(this);
            BeginGetValue(aKey, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetValue().</remarks>
        /// <param name="aKey"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetValue(String aKey, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetValue, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetValue.InputParameter(inIndex++), aKey));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetValue.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndGetValue(IntPtr aAsyncHandle, out String aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncResetAll()
        {
            SyncResetAllAvOpenhomeOrgConfigApp1 sync = new SyncResetAllAvOpenhomeOrgConfigApp1(this);
            BeginResetAll(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndResetAll().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginResetAll(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionResetAll, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndResetAll(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Keys state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgConfigApp1 instance will not overlap.</remarks>
        /// <param name="aKeysChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyKeysChanged(System.Action aKeysChanged)
        {
            lock (iPropertyLock)
            {
                iKeysChanged = aKeysChanged;
            }
        }

        private void KeysPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iKeysChanged);
            }
        }

        /// <summary>
        /// Query the value of the Keys property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Keys property</returns>
        public String PropertyKeys()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iKeys.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public void Dispose()
        {
            lock (this)
            {
                if (iHandle == IntPtr.Zero)
                    return;
                DisposeProxy();
                iHandle = IntPtr.Zero;
            }
            iActionGetKeys.Dispose();
            iActionSetValue.Dispose();
            iActionGetValue.Dispose();
            iActionResetAll.Dispose();
            iKeys.Dispose();
        }
    }
}

