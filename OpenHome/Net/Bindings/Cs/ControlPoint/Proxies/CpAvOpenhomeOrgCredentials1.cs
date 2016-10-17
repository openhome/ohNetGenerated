using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgCredentials1 : ICpProxy, IDisposable
    {
        void SyncSet(String aId, String aUserName, byte[] aPassword);
        void BeginSet(String aId, String aUserName, byte[] aPassword, CpProxy.CallbackAsyncComplete aCallback);
        void EndSet(IntPtr aAsyncHandle);
        void SyncClear(String aId);
        void BeginClear(String aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClear(IntPtr aAsyncHandle);
        void SyncSetEnabled(String aId, bool aEnabled);
        void BeginSetEnabled(String aId, bool aEnabled, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetEnabled(IntPtr aAsyncHandle);
        void SyncGet(String aId, out String aUserName, out byte[] aPassword, out bool aEnabled, out String aStatus, out String aData);
        void BeginGet(String aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndGet(IntPtr aAsyncHandle, out String aUserName, out byte[] aPassword, out bool aEnabled, out String aStatus, out String aData);
        void SyncLogin(String aId, out String aToken);
        void BeginLogin(String aId, CpProxy.CallbackAsyncComplete aCallback);
        void EndLogin(IntPtr aAsyncHandle, out String aToken);
        void SyncReLogin(String aId, String aCurrentToken, out String aNewToken);
        void BeginReLogin(String aId, String aCurrentToken, CpProxy.CallbackAsyncComplete aCallback);
        void EndReLogin(IntPtr aAsyncHandle, out String aNewToken);
        void SyncGetIds(out String aIds);
        void BeginGetIds(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetIds(IntPtr aAsyncHandle, out String aIds);
        void SyncGetPublicKey(out String aPublicKey);
        void BeginGetPublicKey(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPublicKey(IntPtr aAsyncHandle, out String aPublicKey);
        void SyncGetSequenceNumber(out uint aSequenceNumber);
        void BeginGetSequenceNumber(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSequenceNumber(IntPtr aAsyncHandle, out uint aSequenceNumber);
        void SetPropertyIdsChanged(System.Action aIdsChanged);
        String PropertyIds();
        void SetPropertyPublicKeyChanged(System.Action aPublicKeyChanged);
        String PropertyPublicKey();
        void SetPropertySequenceNumberChanged(System.Action aSequenceNumberChanged);
        uint PropertySequenceNumber();
    }

    internal class SyncSetAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;

        public SyncSetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSet(aAsyncHandle);
        }
    };

    internal class SyncClearAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;

        public SyncClearAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClear(aAsyncHandle);
        }
    };

    internal class SyncSetEnabledAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;

        public SyncSetEnabledAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetEnabled(aAsyncHandle);
        }
    };

    internal class SyncGetAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private String iUserName;
        private byte[] iPassword;
        private bool iEnabled;
        private String iStatus;
        private String iData;

        public SyncGetAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public String UserName()
        {
            return iUserName;
        }
        public byte[] Password()
        {
            return iPassword;
        }
        public bool Enabled()
        {
            return iEnabled;
        }
        public String Status()
        {
            return iStatus;
        }
        public String Data()
        {
            return iData;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGet(aAsyncHandle, out iUserName, out iPassword, out iEnabled, out iStatus, out iData);
        }
    };

    internal class SyncLoginAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private String iToken;

        public SyncLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public String Token()
        {
            return iToken;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndLogin(aAsyncHandle, out iToken);
        }
    };

    internal class SyncReLoginAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private String iNewToken;

        public SyncReLoginAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public String NewToken()
        {
            return iNewToken;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndReLogin(aAsyncHandle, out iNewToken);
        }
    };

    internal class SyncGetIdsAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private String iIds;

        public SyncGetIdsAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public String Ids()
        {
            return iIds;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetIds(aAsyncHandle, out iIds);
        }
    };

    internal class SyncGetPublicKeyAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private String iPublicKey;

        public SyncGetPublicKeyAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public String PublicKey()
        {
            return iPublicKey;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetPublicKey(aAsyncHandle, out iPublicKey);
        }
    };

    internal class SyncGetSequenceNumberAvOpenhomeOrgCredentials1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgCredentials1 iService;
        private uint iSequenceNumber;

        public SyncGetSequenceNumberAvOpenhomeOrgCredentials1(CpProxyAvOpenhomeOrgCredentials1 aProxy)
        {
            iService = aProxy;
        }
        public uint SequenceNumber()
        {
            return iSequenceNumber;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSequenceNumber(aAsyncHandle, out iSequenceNumber);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Credentials:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgCredentials1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgCredentials1
    {
        private OpenHome.Net.Core.Action iActionSet;
        private OpenHome.Net.Core.Action iActionClear;
        private OpenHome.Net.Core.Action iActionSetEnabled;
        private OpenHome.Net.Core.Action iActionGet;
        private OpenHome.Net.Core.Action iActionLogin;
        private OpenHome.Net.Core.Action iActionReLogin;
        private OpenHome.Net.Core.Action iActionGetIds;
        private OpenHome.Net.Core.Action iActionGetPublicKey;
        private OpenHome.Net.Core.Action iActionGetSequenceNumber;
        private PropertyString iIds;
        private PropertyString iPublicKey;
        private PropertyUint iSequenceNumber;
        private System.Action iIdsChanged;
        private System.Action iPublicKeyChanged;
        private System.Action iSequenceNumberChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgCredentials1(ICpDevice aDevice)
            : base("av-openhome-org", "Credentials", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSet = new OpenHome.Net.Core.Action("Set");
            param = new ParameterString("Id", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterString("UserName", allowedValues);
            iActionSet.AddInputParameter(param);
            param = new ParameterBinary("Password");
            iActionSet.AddInputParameter(param);

            iActionClear = new OpenHome.Net.Core.Action("Clear");
            param = new ParameterString("Id", allowedValues);
            iActionClear.AddInputParameter(param);

            iActionSetEnabled = new OpenHome.Net.Core.Action("SetEnabled");
            param = new ParameterString("Id", allowedValues);
            iActionSetEnabled.AddInputParameter(param);
            param = new ParameterBool("Enabled");
            iActionSetEnabled.AddInputParameter(param);

            iActionGet = new OpenHome.Net.Core.Action("Get");
            param = new ParameterString("Id", allowedValues);
            iActionGet.AddInputParameter(param);
            param = new ParameterString("UserName", allowedValues);
            iActionGet.AddOutputParameter(param);
            param = new ParameterBinary("Password");
            iActionGet.AddOutputParameter(param);
            param = new ParameterBool("Enabled");
            iActionGet.AddOutputParameter(param);
            param = new ParameterString("Status", allowedValues);
            iActionGet.AddOutputParameter(param);
            param = new ParameterString("Data", allowedValues);
            iActionGet.AddOutputParameter(param);

            iActionLogin = new OpenHome.Net.Core.Action("Login");
            param = new ParameterString("Id", allowedValues);
            iActionLogin.AddInputParameter(param);
            param = new ParameterString("Token", allowedValues);
            iActionLogin.AddOutputParameter(param);

            iActionReLogin = new OpenHome.Net.Core.Action("ReLogin");
            param = new ParameterString("Id", allowedValues);
            iActionReLogin.AddInputParameter(param);
            param = new ParameterString("CurrentToken", allowedValues);
            iActionReLogin.AddInputParameter(param);
            param = new ParameterString("NewToken", allowedValues);
            iActionReLogin.AddOutputParameter(param);

            iActionGetIds = new OpenHome.Net.Core.Action("GetIds");
            param = new ParameterString("Ids", allowedValues);
            iActionGetIds.AddOutputParameter(param);

            iActionGetPublicKey = new OpenHome.Net.Core.Action("GetPublicKey");
            param = new ParameterString("PublicKey", allowedValues);
            iActionGetPublicKey.AddOutputParameter(param);

            iActionGetSequenceNumber = new OpenHome.Net.Core.Action("GetSequenceNumber");
            param = new ParameterUint("SequenceNumber");
            iActionGetSequenceNumber.AddOutputParameter(param);

            iIds = new PropertyString("Ids", IdsPropertyChanged);
            AddProperty(iIds);
            iPublicKey = new PropertyString("PublicKey", PublicKeyPropertyChanged);
            AddProperty(iPublicKey);
            iSequenceNumber = new PropertyUint("SequenceNumber", SequenceNumberPropertyChanged);
            AddProperty(iSequenceNumber);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        public void SyncSet(String aId, String aUserName, byte[] aPassword)
        {
            SyncSetAvOpenhomeOrgCredentials1 sync = new SyncSetAvOpenhomeOrgCredentials1(this);
            BeginSet(aId, aUserName, aPassword, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSet().</remarks>
        /// <param name="aId"></param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSet(String aId, String aUserName, byte[] aPassword, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSet, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSet.InputParameter(inIndex++), aUserName));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSet.InputParameter(inIndex++), aPassword));
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
        /// <param name="aId"></param>
        public void SyncClear(String aId)
        {
            SyncClearAvOpenhomeOrgCredentials1 sync = new SyncClearAvOpenhomeOrgCredentials1(this);
            BeginClear(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClear().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClear(String aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClear, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClear.InputParameter(inIndex++), aId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClear(IntPtr aAsyncHandle)
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
        /// <param name="aId"></param>
        /// <param name="aEnabled"></param>
        public void SyncSetEnabled(String aId, bool aEnabled)
        {
            SyncSetEnabledAvOpenhomeOrgCredentials1 sync = new SyncSetEnabledAvOpenhomeOrgCredentials1(this);
            BeginSetEnabled(aId, aEnabled, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetEnabled().</remarks>
        /// <param name="aId"></param>
        /// <param name="aEnabled"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetEnabled(String aId, bool aEnabled, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetEnabled, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetEnabled.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetEnabled.InputParameter(inIndex++), aEnabled));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetEnabled(IntPtr aAsyncHandle)
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
        /// <param name="aId"></param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        /// <param name="aEnabled"></param>
        /// <param name="aStatus"></param>
        /// <param name="aData"></param>
        public void SyncGet(String aId, out String aUserName, out byte[] aPassword, out bool aEnabled, out String aStatus, out String aData)
        {
            SyncGetAvOpenhomeOrgCredentials1 sync = new SyncGetAvOpenhomeOrgCredentials1(this);
            BeginGet(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUserName = sync.UserName();
            aPassword = sync.Password();
            aEnabled = sync.Enabled();
            aStatus = sync.Status();
            aData = sync.Data();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGet().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGet(String aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGet, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGet.InputParameter(inIndex++), aId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGet.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBinary((ParameterBinary)iActionGet.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGet.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGet.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGet.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUserName"></param>
        /// <param name="aPassword"></param>
        /// <param name="aEnabled"></param>
        /// <param name="aStatus"></param>
        /// <param name="aData"></param>
        public void EndGet(IntPtr aAsyncHandle, out String aUserName, out byte[] aPassword, out bool aEnabled, out String aStatus, out String aData)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUserName = Invocation.OutputString(aAsyncHandle, index++);
            aPassword = Invocation.OutputBinary(aAsyncHandle, index++);
            aEnabled = Invocation.OutputBool(aAsyncHandle, index++);
            aStatus = Invocation.OutputString(aAsyncHandle, index++);
            aData = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aToken"></param>
        public void SyncLogin(String aId, out String aToken)
        {
            SyncLoginAvOpenhomeOrgCredentials1 sync = new SyncLoginAvOpenhomeOrgCredentials1(this);
            BeginLogin(aId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aToken = sync.Token();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndLogin().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginLogin(String aId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionLogin, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionLogin.InputParameter(inIndex++), aId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionLogin.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aToken"></param>
        public void EndLogin(IntPtr aAsyncHandle, out String aToken)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aToken = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aId"></param>
        /// <param name="aCurrentToken"></param>
        /// <param name="aNewToken"></param>
        public void SyncReLogin(String aId, String aCurrentToken, out String aNewToken)
        {
            SyncReLoginAvOpenhomeOrgCredentials1 sync = new SyncReLoginAvOpenhomeOrgCredentials1(this);
            BeginReLogin(aId, aCurrentToken, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNewToken = sync.NewToken();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndReLogin().</remarks>
        /// <param name="aId"></param>
        /// <param name="aCurrentToken"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginReLogin(String aId, String aCurrentToken, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionReLogin, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionReLogin.InputParameter(inIndex++), aId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionReLogin.InputParameter(inIndex++), aCurrentToken));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionReLogin.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aNewToken"></param>
        public void EndReLogin(IntPtr aAsyncHandle, out String aNewToken)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNewToken = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aIds"></param>
        public void SyncGetIds(out String aIds)
        {
            SyncGetIdsAvOpenhomeOrgCredentials1 sync = new SyncGetIdsAvOpenhomeOrgCredentials1(this);
            BeginGetIds(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aIds = sync.Ids();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetIds().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetIds(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetIds, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetIds.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aIds"></param>
        public void EndGetIds(IntPtr aAsyncHandle, out String aIds)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aIds = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPublicKey"></param>
        public void SyncGetPublicKey(out String aPublicKey)
        {
            SyncGetPublicKeyAvOpenhomeOrgCredentials1 sync = new SyncGetPublicKeyAvOpenhomeOrgCredentials1(this);
            BeginGetPublicKey(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aPublicKey = sync.PublicKey();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetPublicKey().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetPublicKey(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetPublicKey, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetPublicKey.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aPublicKey"></param>
        public void EndGetPublicKey(IntPtr aAsyncHandle, out String aPublicKey)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aPublicKey = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSequenceNumber"></param>
        public void SyncGetSequenceNumber(out uint aSequenceNumber)
        {
            SyncGetSequenceNumberAvOpenhomeOrgCredentials1 sync = new SyncGetSequenceNumberAvOpenhomeOrgCredentials1(this);
            BeginGetSequenceNumber(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSequenceNumber = sync.SequenceNumber();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSequenceNumber().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSequenceNumber(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSequenceNumber, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetSequenceNumber.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSequenceNumber"></param>
        public void EndGetSequenceNumber(IntPtr aAsyncHandle, out uint aSequenceNumber)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSequenceNumber = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Ids state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.</remarks>
        /// <param name="aIdsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyIdsChanged(System.Action aIdsChanged)
        {
            lock (iPropertyLock)
            {
                iIdsChanged = aIdsChanged;
            }
        }

        private void IdsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iIdsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PublicKey state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.</remarks>
        /// <param name="aPublicKeyChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPublicKeyChanged(System.Action aPublicKeyChanged)
        {
            lock (iPropertyLock)
            {
                iPublicKeyChanged = aPublicKeyChanged;
            }
        }

        private void PublicKeyPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPublicKeyChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the SequenceNumber state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.</remarks>
        /// <param name="aSequenceNumberChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySequenceNumberChanged(System.Action aSequenceNumberChanged)
        {
            lock (iPropertyLock)
            {
                iSequenceNumberChanged = aSequenceNumberChanged;
            }
        }

        private void SequenceNumberPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSequenceNumberChanged);
            }
        }

        /// <summary>
        /// Query the value of the Ids property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Ids property</returns>
        public String PropertyIds()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iIds.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the PublicKey property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PublicKey property</returns>
        public String PropertyPublicKey()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iPublicKey.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the SequenceNumber property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SequenceNumber property</returns>
        public uint PropertySequenceNumber()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iSequenceNumber.Value();
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
            iActionSet.Dispose();
            iActionClear.Dispose();
            iActionSetEnabled.Dispose();
            iActionGet.Dispose();
            iActionLogin.Dispose();
            iActionReLogin.Dispose();
            iActionGetIds.Dispose();
            iActionGetPublicKey.Dispose();
            iActionGetSequenceNumber.Dispose();
            iIds.Dispose();
            iPublicKey.Dispose();
            iSequenceNumber.Dispose();
        }
    }
}

