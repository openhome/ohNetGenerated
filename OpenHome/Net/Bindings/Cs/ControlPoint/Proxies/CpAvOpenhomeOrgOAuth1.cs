using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgOAuth1 : ICpProxy, IDisposable
    {
        void SyncSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aIsLongLived);
        void BeginSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aIsLongLived, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetToken(IntPtr aAsyncHandle);
        void SyncGetPublicKey(out String aPublicKey);
        void BeginGetPublicKey(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPublicKey(IntPtr aAsyncHandle, out String aPublicKey);
        void SyncClearToken(String aServiceId, String aTokenId);
        void BeginClearToken(String aServiceId, String aTokenId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearToken(IntPtr aAsyncHandle);
        void SyncClearShortLivedToken(String aServiceId, String aTokenId);
        void BeginClearShortLivedToken(String aServiceId, String aTokenId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearShortLivedToken(IntPtr aAsyncHandle);
        void SyncClearLongLivedToken(String aServiceId, String aTokenId);
        void BeginClearLongLivedToken(String aServiceId, String aTokenId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearLongLivedToken(IntPtr aAsyncHandle);
        void SyncClearShortLivedTokens(String aServiceId);
        void BeginClearShortLivedTokens(String aServiceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearShortLivedTokens(IntPtr aAsyncHandle);
        void SyncClearLongLivedTokens(String aServiceId);
        void BeginClearLongLivedTokens(String aServiceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearLongLivedTokens(IntPtr aAsyncHandle);
        void SyncClearAllTokens(String aServiceId);
        void BeginClearAllTokens(String aServiceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndClearAllTokens(IntPtr aAsyncHandle);
        void SyncGetUpdateId(out uint aUpdateId);
        void BeginGetUpdateId(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetUpdateId(IntPtr aAsyncHandle, out uint aUpdateId);
        void SyncGetServiceStatus(out String aServiceStatusJson);
        void BeginGetServiceStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetServiceStatus(IntPtr aAsyncHandle, out String aServiceStatusJson);
        void SyncGetJobUpdateId(out uint aJobUpdateId);
        void BeginGetJobUpdateId(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetJobUpdateId(IntPtr aAsyncHandle, out uint aJobUpdateId);
        void SyncGetJobStatus(out String aJobStatusJson);
        void BeginGetJobStatus(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetJobStatus(IntPtr aAsyncHandle, out String aJobStatusJson);
        void SyncGetSupportedServices(out String aSupportedServiceListJson);
        void BeginGetSupportedServices(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetSupportedServices(IntPtr aAsyncHandle, out String aSupportedServiceListJson);
        void SyncBeginLimitedInputFlow(String aServiceId, out String aJobId, out String aLoginUrl, out String aUserCode);
        void BeginBeginLimitedInputFlow(String aServiceId, CpProxy.CallbackAsyncComplete aCallback);
        void EndBeginLimitedInputFlow(IntPtr aAsyncHandle, out String aJobId, out String aLoginUrl, out String aUserCode);
        void SetPropertyPublicKeyChanged(System.Action aPublicKeyChanged);
        String PropertyPublicKey();
        void SetPropertyUpdateIdChanged(System.Action aUpdateIdChanged);
        uint PropertyUpdateId();
        void SetPropertyJobUpdateIdChanged(System.Action aJobUpdateIdChanged);
        uint PropertyJobUpdateId();
        void SetPropertySupportedServicesChanged(System.Action aSupportedServicesChanged);
        String PropertySupportedServices();
    }

    internal class SyncSetTokenAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncSetTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetToken(aAsyncHandle);
        }
    };

    internal class SyncGetPublicKeyAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private String iPublicKey;

        public SyncGetPublicKeyAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
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

    internal class SyncClearTokenAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearToken(aAsyncHandle);
        }
    };

    internal class SyncClearShortLivedTokenAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearShortLivedTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearShortLivedToken(aAsyncHandle);
        }
    };

    internal class SyncClearLongLivedTokenAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearLongLivedTokenAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearLongLivedToken(aAsyncHandle);
        }
    };

    internal class SyncClearShortLivedTokensAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearShortLivedTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearShortLivedTokens(aAsyncHandle);
        }
    };

    internal class SyncClearLongLivedTokensAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearLongLivedTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearLongLivedTokens(aAsyncHandle);
        }
    };

    internal class SyncClearAllTokensAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;

        public SyncClearAllTokensAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndClearAllTokens(aAsyncHandle);
        }
    };

    internal class SyncGetUpdateIdAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private uint iUpdateId;

        public SyncGetUpdateIdAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public uint UpdateId()
        {
            return iUpdateId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetUpdateId(aAsyncHandle, out iUpdateId);
        }
    };

    internal class SyncGetServiceStatusAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private String iServiceStatusJson;

        public SyncGetServiceStatusAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public String ServiceStatusJson()
        {
            return iServiceStatusJson;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetServiceStatus(aAsyncHandle, out iServiceStatusJson);
        }
    };

    internal class SyncGetJobUpdateIdAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private uint iJobUpdateId;

        public SyncGetJobUpdateIdAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public uint JobUpdateId()
        {
            return iJobUpdateId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetJobUpdateId(aAsyncHandle, out iJobUpdateId);
        }
    };

    internal class SyncGetJobStatusAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private String iJobStatusJson;

        public SyncGetJobStatusAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public String JobStatusJson()
        {
            return iJobStatusJson;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetJobStatus(aAsyncHandle, out iJobStatusJson);
        }
    };

    internal class SyncGetSupportedServicesAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private String iSupportedServiceListJson;

        public SyncGetSupportedServicesAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public String SupportedServiceListJson()
        {
            return iSupportedServiceListJson;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetSupportedServices(aAsyncHandle, out iSupportedServiceListJson);
        }
    };

    internal class SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgOAuth1 iService;
        private String iJobId;
        private String iLoginUrl;
        private String iUserCode;

        public SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1(CpProxyAvOpenhomeOrgOAuth1 aProxy)
        {
            iService = aProxy;
        }
        public String JobId()
        {
            return iJobId;
        }
        public String LoginUrl()
        {
            return iLoginUrl;
        }
        public String UserCode()
        {
            return iUserCode;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBeginLimitedInputFlow(aAsyncHandle, out iJobId, out iLoginUrl, out iUserCode);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:OAuth:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgOAuth1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgOAuth1
    {
        private OpenHome.Net.Core.Action iActionSetToken;
        private OpenHome.Net.Core.Action iActionGetPublicKey;
        private OpenHome.Net.Core.Action iActionClearToken;
        private OpenHome.Net.Core.Action iActionClearShortLivedToken;
        private OpenHome.Net.Core.Action iActionClearLongLivedToken;
        private OpenHome.Net.Core.Action iActionClearShortLivedTokens;
        private OpenHome.Net.Core.Action iActionClearLongLivedTokens;
        private OpenHome.Net.Core.Action iActionClearAllTokens;
        private OpenHome.Net.Core.Action iActionGetUpdateId;
        private OpenHome.Net.Core.Action iActionGetServiceStatus;
        private OpenHome.Net.Core.Action iActionGetJobUpdateId;
        private OpenHome.Net.Core.Action iActionGetJobStatus;
        private OpenHome.Net.Core.Action iActionGetSupportedServices;
        private OpenHome.Net.Core.Action iActionBeginLimitedInputFlow;
        private PropertyString iPublicKey;
        private PropertyUint iUpdateId;
        private PropertyUint iJobUpdateId;
        private PropertyString iSupportedServices;
        private System.Action iPublicKeyChanged;
        private System.Action iUpdateIdChanged;
        private System.Action iJobUpdateIdChanged;
        private System.Action iSupportedServicesChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgOAuth1(ICpDevice aDevice)
            : base("av-openhome-org", "OAuth", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionSetToken = new OpenHome.Net.Core.Action("SetToken");
            param = new ParameterString("ServiceId", allowedValues);
            iActionSetToken.AddInputParameter(param);
            param = new ParameterString("TokenId", allowedValues);
            iActionSetToken.AddInputParameter(param);
            param = new ParameterBinary("AesKeyRsaEncrypted");
            iActionSetToken.AddInputParameter(param);
            param = new ParameterBinary("InitVectorRsaEncrypted");
            iActionSetToken.AddInputParameter(param);
            param = new ParameterBinary("TokenAesEncrypted");
            iActionSetToken.AddInputParameter(param);
            param = new ParameterBool("IsLongLived");
            iActionSetToken.AddInputParameter(param);

            iActionGetPublicKey = new OpenHome.Net.Core.Action("GetPublicKey");
            param = new ParameterString("PublicKey", allowedValues);
            iActionGetPublicKey.AddOutputParameter(param);

            iActionClearToken = new OpenHome.Net.Core.Action("ClearToken");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearToken.AddInputParameter(param);
            param = new ParameterString("TokenId", allowedValues);
            iActionClearToken.AddInputParameter(param);

            iActionClearShortLivedToken = new OpenHome.Net.Core.Action("ClearShortLivedToken");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearShortLivedToken.AddInputParameter(param);
            param = new ParameterString("TokenId", allowedValues);
            iActionClearShortLivedToken.AddInputParameter(param);

            iActionClearLongLivedToken = new OpenHome.Net.Core.Action("ClearLongLivedToken");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearLongLivedToken.AddInputParameter(param);
            param = new ParameterString("TokenId", allowedValues);
            iActionClearLongLivedToken.AddInputParameter(param);

            iActionClearShortLivedTokens = new OpenHome.Net.Core.Action("ClearShortLivedTokens");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearShortLivedTokens.AddInputParameter(param);

            iActionClearLongLivedTokens = new OpenHome.Net.Core.Action("ClearLongLivedTokens");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearLongLivedTokens.AddInputParameter(param);

            iActionClearAllTokens = new OpenHome.Net.Core.Action("ClearAllTokens");
            param = new ParameterString("ServiceId", allowedValues);
            iActionClearAllTokens.AddInputParameter(param);

            iActionGetUpdateId = new OpenHome.Net.Core.Action("GetUpdateId");
            param = new ParameterUint("UpdateId");
            iActionGetUpdateId.AddOutputParameter(param);

            iActionGetServiceStatus = new OpenHome.Net.Core.Action("GetServiceStatus");
            param = new ParameterString("ServiceStatusJson", allowedValues);
            iActionGetServiceStatus.AddOutputParameter(param);

            iActionGetJobUpdateId = new OpenHome.Net.Core.Action("GetJobUpdateId");
            param = new ParameterUint("JobUpdateId");
            iActionGetJobUpdateId.AddOutputParameter(param);

            iActionGetJobStatus = new OpenHome.Net.Core.Action("GetJobStatus");
            param = new ParameterString("JobStatusJson", allowedValues);
            iActionGetJobStatus.AddOutputParameter(param);

            iActionGetSupportedServices = new OpenHome.Net.Core.Action("GetSupportedServices");
            param = new ParameterString("SupportedServiceListJson", allowedValues);
            iActionGetSupportedServices.AddOutputParameter(param);

            iActionBeginLimitedInputFlow = new OpenHome.Net.Core.Action("BeginLimitedInputFlow");
            param = new ParameterString("ServiceId", allowedValues);
            iActionBeginLimitedInputFlow.AddInputParameter(param);
            param = new ParameterString("JobId", allowedValues);
            iActionBeginLimitedInputFlow.AddOutputParameter(param);
            param = new ParameterString("LoginUrl", allowedValues);
            iActionBeginLimitedInputFlow.AddOutputParameter(param);
            param = new ParameterString("UserCode", allowedValues);
            iActionBeginLimitedInputFlow.AddOutputParameter(param);

            iPublicKey = new PropertyString("PublicKey", PublicKeyPropertyChanged);
            AddProperty(iPublicKey);
            iUpdateId = new PropertyUint("UpdateId", UpdateIdPropertyChanged);
            AddProperty(iUpdateId);
            iJobUpdateId = new PropertyUint("JobUpdateId", JobUpdateIdPropertyChanged);
            AddProperty(iJobUpdateId);
            iSupportedServices = new PropertyString("SupportedServices", SupportedServicesPropertyChanged);
            AddProperty(iSupportedServices);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aIsLongLived"></param>
        public void SyncSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aIsLongLived)
        {
            SyncSetTokenAvOpenhomeOrgOAuth1 sync = new SyncSetTokenAvOpenhomeOrgOAuth1(this);
            BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetToken().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aIsLongLived"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetToken(String aServiceId, String aTokenId, byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aIsLongLived, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetToken, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetToken.InputParameter(inIndex++), aServiceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetToken.InputParameter(inIndex++), aTokenId));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetToken.InputParameter(inIndex++), aAesKeyRsaEncrypted));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetToken.InputParameter(inIndex++), aInitVectorRsaEncrypted));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetToken.InputParameter(inIndex++), aTokenAesEncrypted));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetToken.InputParameter(inIndex++), aIsLongLived));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetToken(IntPtr aAsyncHandle)
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
        /// <param name="aPublicKey"></param>
        public void SyncGetPublicKey(out String aPublicKey)
        {
            SyncGetPublicKeyAvOpenhomeOrgOAuth1 sync = new SyncGetPublicKeyAvOpenhomeOrgOAuth1(this);
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
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        public void SyncClearToken(String aServiceId, String aTokenId)
        {
            SyncClearTokenAvOpenhomeOrgOAuth1 sync = new SyncClearTokenAvOpenhomeOrgOAuth1(this);
            BeginClearToken(aServiceId, aTokenId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearToken().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearToken(String aServiceId, String aTokenId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearToken, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearToken.InputParameter(inIndex++), aServiceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearToken.InputParameter(inIndex++), aTokenId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearToken(IntPtr aAsyncHandle)
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
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        public void SyncClearShortLivedToken(String aServiceId, String aTokenId)
        {
            SyncClearShortLivedTokenAvOpenhomeOrgOAuth1 sync = new SyncClearShortLivedTokenAvOpenhomeOrgOAuth1(this);
            BeginClearShortLivedToken(aServiceId, aTokenId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearShortLivedToken().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearShortLivedToken(String aServiceId, String aTokenId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearShortLivedToken, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearShortLivedToken.InputParameter(inIndex++), aServiceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearShortLivedToken.InputParameter(inIndex++), aTokenId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearShortLivedToken(IntPtr aAsyncHandle)
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
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        public void SyncClearLongLivedToken(String aServiceId, String aTokenId)
        {
            SyncClearLongLivedTokenAvOpenhomeOrgOAuth1 sync = new SyncClearLongLivedTokenAvOpenhomeOrgOAuth1(this);
            BeginClearLongLivedToken(aServiceId, aTokenId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearLongLivedToken().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aTokenId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearLongLivedToken(String aServiceId, String aTokenId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearLongLivedToken, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearLongLivedToken.InputParameter(inIndex++), aServiceId));
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearLongLivedToken.InputParameter(inIndex++), aTokenId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearLongLivedToken(IntPtr aAsyncHandle)
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
        /// <param name="aServiceId"></param>
        public void SyncClearShortLivedTokens(String aServiceId)
        {
            SyncClearShortLivedTokensAvOpenhomeOrgOAuth1 sync = new SyncClearShortLivedTokensAvOpenhomeOrgOAuth1(this);
            BeginClearShortLivedTokens(aServiceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearShortLivedTokens().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearShortLivedTokens(String aServiceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearShortLivedTokens, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearShortLivedTokens.InputParameter(inIndex++), aServiceId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearShortLivedTokens(IntPtr aAsyncHandle)
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
        /// <param name="aServiceId"></param>
        public void SyncClearLongLivedTokens(String aServiceId)
        {
            SyncClearLongLivedTokensAvOpenhomeOrgOAuth1 sync = new SyncClearLongLivedTokensAvOpenhomeOrgOAuth1(this);
            BeginClearLongLivedTokens(aServiceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearLongLivedTokens().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearLongLivedTokens(String aServiceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearLongLivedTokens, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearLongLivedTokens.InputParameter(inIndex++), aServiceId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearLongLivedTokens(IntPtr aAsyncHandle)
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
        /// <param name="aServiceId"></param>
        public void SyncClearAllTokens(String aServiceId)
        {
            SyncClearAllTokensAvOpenhomeOrgOAuth1 sync = new SyncClearAllTokensAvOpenhomeOrgOAuth1(this);
            BeginClearAllTokens(aServiceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndClearAllTokens().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginClearAllTokens(String aServiceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionClearAllTokens, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionClearAllTokens.InputParameter(inIndex++), aServiceId));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndClearAllTokens(IntPtr aAsyncHandle)
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
        /// <param name="aUpdateId"></param>
        public void SyncGetUpdateId(out uint aUpdateId)
        {
            SyncGetUpdateIdAvOpenhomeOrgOAuth1 sync = new SyncGetUpdateIdAvOpenhomeOrgOAuth1(this);
            BeginGetUpdateId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aUpdateId = sync.UpdateId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetUpdateId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetUpdateId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetUpdateId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetUpdateId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aUpdateId"></param>
        public void EndGetUpdateId(IntPtr aAsyncHandle, out uint aUpdateId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aUpdateId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceStatusJson"></param>
        public void SyncGetServiceStatus(out String aServiceStatusJson)
        {
            SyncGetServiceStatusAvOpenhomeOrgOAuth1 sync = new SyncGetServiceStatusAvOpenhomeOrgOAuth1(this);
            BeginGetServiceStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aServiceStatusJson = sync.ServiceStatusJson();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetServiceStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetServiceStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetServiceStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetServiceStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aServiceStatusJson"></param>
        public void EndGetServiceStatus(IntPtr aAsyncHandle, out String aServiceStatusJson)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aServiceStatusJson = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aJobUpdateId"></param>
        public void SyncGetJobUpdateId(out uint aJobUpdateId)
        {
            SyncGetJobUpdateIdAvOpenhomeOrgOAuth1 sync = new SyncGetJobUpdateIdAvOpenhomeOrgOAuth1(this);
            BeginGetJobUpdateId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aJobUpdateId = sync.JobUpdateId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetJobUpdateId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetJobUpdateId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetJobUpdateId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionGetJobUpdateId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aJobUpdateId"></param>
        public void EndGetJobUpdateId(IntPtr aAsyncHandle, out uint aJobUpdateId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aJobUpdateId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aJobStatusJson"></param>
        public void SyncGetJobStatus(out String aJobStatusJson)
        {
            SyncGetJobStatusAvOpenhomeOrgOAuth1 sync = new SyncGetJobStatusAvOpenhomeOrgOAuth1(this);
            BeginGetJobStatus(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aJobStatusJson = sync.JobStatusJson();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetJobStatus().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetJobStatus(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetJobStatus, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetJobStatus.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aJobStatusJson"></param>
        public void EndGetJobStatus(IntPtr aAsyncHandle, out String aJobStatusJson)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aJobStatusJson = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aSupportedServiceListJson"></param>
        public void SyncGetSupportedServices(out String aSupportedServiceListJson)
        {
            SyncGetSupportedServicesAvOpenhomeOrgOAuth1 sync = new SyncGetSupportedServicesAvOpenhomeOrgOAuth1(this);
            BeginGetSupportedServices(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aSupportedServiceListJson = sync.SupportedServiceListJson();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetSupportedServices().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetSupportedServices(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetSupportedServices, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetSupportedServices.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aSupportedServiceListJson"></param>
        public void EndGetSupportedServices(IntPtr aAsyncHandle, out String aSupportedServiceListJson)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aSupportedServiceListJson = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aJobId"></param>
        /// <param name="aLoginUrl"></param>
        /// <param name="aUserCode"></param>
        public void SyncBeginLimitedInputFlow(String aServiceId, out String aJobId, out String aLoginUrl, out String aUserCode)
        {
            SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1 sync = new SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1(this);
            BeginBeginLimitedInputFlow(aServiceId, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aJobId = sync.JobId();
            aLoginUrl = sync.LoginUrl();
            aUserCode = sync.UserCode();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBeginLimitedInputFlow().</remarks>
        /// <param name="aServiceId"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBeginLimitedInputFlow(String aServiceId, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBeginLimitedInputFlow, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.InputParameter(inIndex++), aServiceId));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentString((ParameterString)iActionBeginLimitedInputFlow.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aJobId"></param>
        /// <param name="aLoginUrl"></param>
        /// <param name="aUserCode"></param>
        public void EndBeginLimitedInputFlow(IntPtr aAsyncHandle, out String aJobId, out String aLoginUrl, out String aUserCode)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aJobId = Invocation.OutputString(aAsyncHandle, index++);
            aLoginUrl = Invocation.OutputString(aAsyncHandle, index++);
            aUserCode = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the PublicKey state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.</remarks>
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
        /// Set a delegate to be run when the UpdateId state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.</remarks>
        /// <param name="aUpdateIdChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUpdateIdChanged(System.Action aUpdateIdChanged)
        {
            lock (iPropertyLock)
            {
                iUpdateIdChanged = aUpdateIdChanged;
            }
        }

        private void UpdateIdPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUpdateIdChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the JobUpdateId state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.</remarks>
        /// <param name="aJobUpdateIdChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyJobUpdateIdChanged(System.Action aJobUpdateIdChanged)
        {
            lock (iPropertyLock)
            {
                iJobUpdateIdChanged = aJobUpdateIdChanged;
            }
        }

        private void JobUpdateIdPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iJobUpdateIdChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the SupportedServices state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgOAuth1 instance will not overlap.</remarks>
        /// <param name="aSupportedServicesChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySupportedServicesChanged(System.Action aSupportedServicesChanged)
        {
            lock (iPropertyLock)
            {
                iSupportedServicesChanged = aSupportedServicesChanged;
            }
        }

        private void SupportedServicesPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSupportedServicesChanged);
            }
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
        /// Query the value of the UpdateId property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UpdateId property</returns>
        public uint PropertyUpdateId()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iUpdateId.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the JobUpdateId property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the JobUpdateId property</returns>
        public uint PropertyJobUpdateId()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iJobUpdateId.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the SupportedServices property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the SupportedServices property</returns>
        public String PropertySupportedServices()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iSupportedServices.Value();
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
            iActionSetToken.Dispose();
            iActionGetPublicKey.Dispose();
            iActionClearToken.Dispose();
            iActionClearShortLivedToken.Dispose();
            iActionClearLongLivedToken.Dispose();
            iActionClearShortLivedTokens.Dispose();
            iActionClearLongLivedTokens.Dispose();
            iActionClearAllTokens.Dispose();
            iActionGetUpdateId.Dispose();
            iActionGetServiceStatus.Dispose();
            iActionGetJobUpdateId.Dispose();
            iActionGetJobStatus.Dispose();
            iActionGetSupportedServices.Dispose();
            iActionBeginLimitedInputFlow.Dispose();
            iPublicKey.Dispose();
            iUpdateId.Dispose();
            iJobUpdateId.Dispose();
            iSupportedServices.Dispose();
        }
    }
}

