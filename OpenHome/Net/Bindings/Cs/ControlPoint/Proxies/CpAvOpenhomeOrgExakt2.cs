using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgExakt2 : ICpProxy, IDisposable
    {
        void SyncDeviceList(out String aList);
        void BeginDeviceList(CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceList(IntPtr aAsyncHandle, out String aList);
        void SyncDeviceSettings(String aDeviceId, out String aSettings);
        void BeginDeviceSettings(String aDeviceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndDeviceSettings(IntPtr aAsyncHandle, out String aSettings);
        void SyncConnectionStatus(out String aConnectionStatus);
        void BeginConnectionStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndConnectionStatus(IntPtr aAsyncHandle, out String aConnectionStatus);
        void SyncSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist);
        void BeginSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist, CpProxy.CallbackAsyncComplete aCallback);
        void EndSet(IntPtr aAsyncHandle);
        void SyncReprogram(String aDeviceId, String aFileUri);
        void BeginReprogram(String aDeviceId, String aFileUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndReprogram(IntPtr aAsyncHandle);
        void SyncReprogramFallback(String aDeviceId, String aFileUri);
        void BeginReprogramFallback(String aDeviceId, String aFileUri, CpProxy.CallbackAsyncComplete aCallback);
        void EndReprogramFallback(IntPtr aAsyncHandle);
        void SyncVersion(out String aVersion);
        void BeginVersion(CpProxy.CallbackAsyncComplete aCallback);
        void EndVersion(IntPtr aAsyncHandle, out String aVersion);
        void SetPropertyDeviceListChanged(System.Action aDeviceListChanged);
        String PropertyDeviceList();
        void SetPropertyConnectionStatusChanged(System.Action aConnectionStatusChanged);
        String PropertyConnectionStatus();
        void SetPropertyVersionChanged(System.Action aVersionChanged);
        String PropertyVersion();
    }

    internal class SyncDeviceListAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;
        private String iList;

        public SyncDeviceListAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        public String List()
        {
            return iList;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeviceList(aAsyncHandle, out iList);
        }
    };

    internal class SyncDeviceSettingsAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;
        private String iSettings;

        public SyncDeviceSettingsAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        public String Settings()
        {
            return iSettings;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndDeviceSettings(aAsyncHandle, out iSettings);
        }
    };

    internal class SyncConnectionStatusAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;
        private String iConnectionStatus;

        public SyncConnectionStatusAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        public String ConnectionStatus()
        {
            return iConnectionStatus;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndConnectionStatus(aAsyncHandle, out iConnectionStatus);
        }
    };

    internal class SyncSetAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;

        public SyncSetAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSet(aAsyncHandle);
        }
    };

    internal class SyncReprogramAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;

        public SyncReprogramAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReprogram(aAsyncHandle);
        }
    };

    internal class SyncReprogramFallbackAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;

        public SyncReprogramFallbackAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReprogramFallback(aAsyncHandle);
        }
    };

    internal class SyncVersionAvOpenhomeOrgExakt2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgExakt2 iService;
        private String iVersion;

        public SyncVersionAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2 aProxy)
        {
            iService = aProxy;
        }
        public String Version()
        {
            return iVersion;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVersion(aAsyncHandle, out iVersion);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Exakt:2 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgExakt2 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgExakt2
    {
        private OpenHome.Net.Core.Action iActionDeviceList;
        private OpenHome.Net.Core.Action iActionDeviceSettings;
        private OpenHome.Net.Core.Action iActionConnectionStatus;
        private OpenHome.Net.Core.Action iActionSet;
        private OpenHome.Net.Core.Action iActionReprogram;
        private OpenHome.Net.Core.Action iActionReprogramFallback;
        private OpenHome.Net.Core.Action iActionVersion;
        private PropertyString iDeviceList;
        private PropertyString iConnectionStatus;
        private PropertyString iVersion;
        private System.Action iDeviceListChanged;
        private System.Action iConnectionStatusChanged;
        private System.Action iVersionChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgExakt2(ICpDevice aDevice)
            : base("av-openhome-org", "Exakt", 2, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionDeviceList = new OpenHome.Net.Core.Action("DeviceList");
            param = new ParameterString("List", allowedValues);
            iActionDeviceList.AddOutputParameter(param);

            iActionDeviceSettings = new OpenHome.Net.Core.Action("DeviceSettings");
            param = new ParameterString("DeviceId", allowedValues);
            iActionDeviceSettings.AddInputParameter(param);
            param = new ParameterString("Settings", allowedValues);
            iActionDeviceSettings.AddOutputParameter(param);

            iActionConnectionStatus = new OpenHome.Net.Core.Action("ConnectionStatus");
            param = new ParameterString("ConnectionStatus", allowedValues);
            iActionConnectionStatus.AddOutputParameter(param);

            iActionSet = new OpenHome.Net.Core.Action("Set");
            param = new ParameterString("DeviceId", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterUint("BankId");
            iActionSet.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterBool("Mute");
            iActionSet.AddInputParameter(param);
            param = new ParameterBool("Persist");
            iActionSet.AddInputParameter(param);

            iActionReprogram = new OpenHome.Net.Core.Action("Reprogram");
            param = new ParameterString("DeviceId", allowedValues);
            iActionReprogram.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionReprogram.AddInputParameter(param);

            iActionReprogramFallback = new OpenHome.Net.Core.Action("ReprogramFallback");
            param = new ParameterString("DeviceId", allowedValues);
            iActionReprogramFallback.AddInputParameter(param);
            param = new ParameterString("FileUri", allowedValues);
            iActionReprogramFallback.AddInputParameter(param);

            iActionVersion = new OpenHome.Net.Core.Action("Version");
            param = new ParameterString("Version", allowedValues);
            iActionVersion.AddOutputParameter(param);

            iDeviceList = new PropertyString("DeviceList", DeviceListPropertyChanged);
            AddProperty(iDeviceList);
            iConnectionStatus = new PropertyString("ConnectionStatus", ConnectionStatusPropertyChanged);
            AddProperty(iConnectionStatus);
            iVersion = new PropertyString("Version", VersionPropertyChanged);
            AddProperty(iVersion);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aList"></param>
        public void SyncDeviceList(out String aList)
        {
            SyncDeviceListAvOpenhomeOrgExakt2 sync = new SyncDeviceListAvOpenhomeOrgExakt2(this);
            BeginDeviceList(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aList = sync.List();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeviceList().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeviceList(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeviceList, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionDeviceList.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aList"></param>
        public void EndDeviceList(IntPtr aAsyncHandle, out String aList)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aList = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aSettings"></param>
        public void SyncDeviceSettings(String aDeviceId, out String aSettings)
        {
            SyncDeviceSettingsAvOpenhomeOrgExakt2 sync = new SyncDeviceSettingsAvOpenhomeOrgExakt2(this);
            BeginDeviceSettings(aDeviceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSettings = sync.Settings();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndDeviceSettings().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginDeviceSettings(String aDeviceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionDeviceSettings, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionDeviceSettings.InputParameter(inIndex++), aDeviceId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionDeviceSettings.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSettings"></param>
        public void EndDeviceSettings(IntPtr aAsyncHandle, out String aSettings)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSettings = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aConnectionStatus"></param>
        public void SyncConnectionStatus(out String aConnectionStatus)
        {
            SyncConnectionStatusAvOpenhomeOrgExakt2 sync = new SyncConnectionStatusAvOpenhomeOrgExakt2(this);
            BeginConnectionStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aConnectionStatus = sync.ConnectionStatus();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndConnectionStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginConnectionStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionConnectionStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionConnectionStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aConnectionStatus"></param>
        public void EndConnectionStatus(IntPtr aAsyncHandle, out String aConnectionStatus)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aConnectionStatus = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aBankId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aMute"></param>
        /// <param name="aPersist"></param>
        public void SyncSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist)
        {
            SyncSetAvOpenhomeOrgExakt2 sync = new SyncSetAvOpenhomeOrgExakt2(this);
            BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSet().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aBankId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aMute"></param>
        /// <param name="aPersist"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSet(String aDeviceId, uint aBankId, String aFileUri, bool aMute, bool aPersist, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSet, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSet.InputParameter(inIndex++), aBankId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aFileUri));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSet.InputParameter(inIndex++), aMute));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSet.InputParameter(inIndex++), aPersist));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSet(IntPtr aAsyncHandle)
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
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        public void SyncReprogram(String aDeviceId, String aFileUri)
        {
            SyncReprogramAvOpenhomeOrgExakt2 sync = new SyncReprogramAvOpenhomeOrgExakt2(this);
            BeginReprogram(aDeviceId, aFileUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReprogram().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReprogram(String aDeviceId, String aFileUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReprogram, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogram.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogram.InputParameter(inIndex++), aFileUri));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndReprogram(IntPtr aAsyncHandle)
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
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        public void SyncReprogramFallback(String aDeviceId, String aFileUri)
        {
            SyncReprogramFallbackAvOpenhomeOrgExakt2 sync = new SyncReprogramFallbackAvOpenhomeOrgExakt2(this);
            BeginReprogramFallback(aDeviceId, aFileUri, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReprogramFallback().</remarks>
        /// <param name="aDeviceId"></param>
        /// <param name="aFileUri"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReprogramFallback(String aDeviceId, String aFileUri, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReprogramFallback, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogramFallback.InputParameter(inIndex++), aDeviceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionReprogramFallback.InputParameter(inIndex++), aFileUri));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndReprogramFallback(IntPtr aAsyncHandle)
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
        /// <param name="aVersion"></param>
        public void SyncVersion(out String aVersion)
        {
            SyncVersionAvOpenhomeOrgExakt2 sync = new SyncVersionAvOpenhomeOrgExakt2(this);
            BeginVersion(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVersion = sync.Version();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVersion().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVersion(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVersion, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionVersion.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVersion"></param>
        public void EndVersion(IntPtr aAsyncHandle, out String aVersion)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVersion = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the DeviceList state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt2 instance will not overlap.</remarks>
        /// <param name="aDeviceListChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyDeviceListChanged(System.Action aDeviceListChanged)
        {
            lock (iPropertyLock)
            {
                iDeviceListChanged = aDeviceListChanged;
            }
        }

        private void DeviceListPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iDeviceListChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the ConnectionStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt2 instance will not overlap.</remarks>
        /// <param name="aConnectionStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyConnectionStatusChanged(System.Action aConnectionStatusChanged)
        {
            lock (iPropertyLock)
            {
                iConnectionStatusChanged = aConnectionStatusChanged;
            }
        }

        private void ConnectionStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iConnectionStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Version state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgExakt2 instance will not overlap.</remarks>
        /// <param name="aVersionChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVersionChanged(System.Action aVersionChanged)
        {
            lock (iPropertyLock)
            {
                iVersionChanged = aVersionChanged;
            }
        }

        private void VersionPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVersionChanged);
            }
        }

        /// <summary>
        /// Query the value of the DeviceList property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the DeviceList property</returns>
        public String PropertyDeviceList()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iDeviceList.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the ConnectionStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the ConnectionStatus property</returns>
        public String PropertyConnectionStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iConnectionStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Version property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Version property</returns>
        public String PropertyVersion()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iVersion.Value();
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
            iActionDeviceList.Dispose();
            iActionDeviceSettings.Dispose();
            iActionConnectionStatus.Dispose();
            iActionSet.Dispose();
            iActionReprogram.Dispose();
            iActionReprogramFallback.Dispose();
            iActionVersion.Dispose();
            iDeviceList.Dispose();
            iConnectionStatus.Dispose();
            iVersion.Dispose();
        }
    }
}

