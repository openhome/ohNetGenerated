using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyLinnCoUkCloud1 : ICpProxy, IDisposable
    {
        void SyncGetChallengeResponse(String aChallenge, out String aResponse);
        void BeginGetChallengeResponse(String aChallenge, CpProxy.CallbackAsyncComplete aCallback);
        void EndGetChallengeResponse(IntPtr aAsyncHandle, out String aResponse);
        void SyncSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aAssociated);
        void BeginSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aAssociated, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetAssociated(IntPtr aAsyncHandle);
        void SyncGetConnected(out bool aConnected);
        void BeginGetConnected(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetConnected(IntPtr aAsyncHandle, out bool aConnected);
        void SyncGetPublicKey(out String aPublicKey);
        void BeginGetPublicKey(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetPublicKey(IntPtr aAsyncHandle, out String aPublicKey);
        void SetPropertyAssociationStatusChanged(System.Action aAssociationStatusChanged);
        String PropertyAssociationStatus();
        void SetPropertyConnectedChanged(System.Action aConnectedChanged);
        bool PropertyConnected();
        void SetPropertyPublicKeyChanged(System.Action aPublicKeyChanged);
        String PropertyPublicKey();
    }

    internal class SyncGetChallengeResponseLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;
        private String iResponse;

        public SyncGetChallengeResponseLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        public String Response()
        {
            return iResponse;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetChallengeResponse(aAsyncHandle, out iResponse);
        }
    };

    internal class SyncSetAssociatedLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;

        public SyncSetAssociatedLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetAssociated(aAsyncHandle);
        }
    };

    internal class SyncGetConnectedLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;
        private bool iConnected;

        public SyncGetConnectedLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
        {
            iService = aProxy;
        }
        public bool Connected()
        {
            return iConnected;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetConnected(aAsyncHandle, out iConnected);
        }
    };

    internal class SyncGetPublicKeyLinnCoUkCloud1 : SyncProxyAction
    {
        private CpProxyLinnCoUkCloud1 iService;
        private String iPublicKey;

        public SyncGetPublicKeyLinnCoUkCloud1(CpProxyLinnCoUkCloud1 aProxy)
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

    /// <summary>
    /// Proxy for the linn.co.uk:Cloud:1 UPnP service
    /// </summary>
    public class CpProxyLinnCoUkCloud1 : CpProxy, IDisposable, ICpProxyLinnCoUkCloud1
    {
        private OpenHome.Net.Core.Action iActionGetChallengeResponse;
        private OpenHome.Net.Core.Action iActionSetAssociated;
        private OpenHome.Net.Core.Action iActionGetConnected;
        private OpenHome.Net.Core.Action iActionGetPublicKey;
        private PropertyString iAssociationStatus;
        private PropertyBool iConnected;
        private PropertyString iPublicKey;
        private System.Action iAssociationStatusChanged;
        private System.Action iConnectedChanged;
        private System.Action iPublicKeyChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyLinnCoUkCloud1(ICpDevice aDevice)
            : base("linn-co-uk", "Cloud", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetChallengeResponse = new OpenHome.Net.Core.Action("GetChallengeResponse");
            param = new ParameterString("Challenge", allowedValues);
            iActionGetChallengeResponse.AddInputParameter(param);
            param = new ParameterString("Response", allowedValues);
            iActionGetChallengeResponse.AddOutputParameter(param);

            iActionSetAssociated = new OpenHome.Net.Core.Action("SetAssociated");
            param = new ParameterBinary("AesKeyRsaEncrypted");
            iActionSetAssociated.AddInputParameter(param);
            param = new ParameterBinary("InitVectorRsaEncrypted");
            iActionSetAssociated.AddInputParameter(param);
            param = new ParameterBinary("TokenAesEncrypted");
            iActionSetAssociated.AddInputParameter(param);
            param = new ParameterBool("Associated");
            iActionSetAssociated.AddInputParameter(param);

            iActionGetConnected = new OpenHome.Net.Core.Action("GetConnected");
            param = new ParameterBool("Connected");
            iActionGetConnected.AddOutputParameter(param);

            iActionGetPublicKey = new OpenHome.Net.Core.Action("GetPublicKey");
            param = new ParameterString("PublicKey", allowedValues);
            iActionGetPublicKey.AddOutputParameter(param);

            iAssociationStatus = new PropertyString("AssociationStatus", AssociationStatusPropertyChanged);
            AddProperty(iAssociationStatus);
            iConnected = new PropertyBool("Connected", ConnectedPropertyChanged);
            AddProperty(iConnected);
            iPublicKey = new PropertyString("PublicKey", PublicKeyPropertyChanged);
            AddProperty(iPublicKey);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChallenge"></param>
        /// <param name="aResponse"></param>
        public void SyncGetChallengeResponse(String aChallenge, out String aResponse)
        {
            SyncGetChallengeResponseLinnCoUkCloud1 sync = new SyncGetChallengeResponseLinnCoUkCloud1(this);
            BeginGetChallengeResponse(aChallenge, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aResponse = sync.Response();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetChallengeResponse().</remarks>
        /// <param name="aChallenge"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetChallengeResponse(String aChallenge, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetChallengeResponse, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionGetChallengeResponse.InputParameter(inIndex++), aChallenge));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetChallengeResponse.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aResponse"></param>
        public void EndGetChallengeResponse(IntPtr aAsyncHandle, out String aResponse)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aResponse = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aAssociated"></param>
        public void SyncSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aAssociated)
        {
            SyncSetAssociatedLinnCoUkCloud1 sync = new SyncSetAssociatedLinnCoUkCloud1(this);
            BeginSetAssociated(aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aAssociated, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetAssociated().</remarks>
        /// <param name="aAesKeyRsaEncrypted"></param>
        /// <param name="aInitVectorRsaEncrypted"></param>
        /// <param name="aTokenAesEncrypted"></param>
        /// <param name="aAssociated"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetAssociated(byte[] aAesKeyRsaEncrypted, byte[] aInitVectorRsaEncrypted, byte[] aTokenAesEncrypted, bool aAssociated, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetAssociated, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.InputParameter(inIndex++), aAesKeyRsaEncrypted));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.InputParameter(inIndex++), aInitVectorRsaEncrypted));
            invocation.AddInput(new ArgumentBinary((ParameterBinary)iActionSetAssociated.InputParameter(inIndex++), aTokenAesEncrypted));
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetAssociated.InputParameter(inIndex++), aAssociated));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetAssociated(IntPtr aAsyncHandle)
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
        /// <param name="aConnected"></param>
        public void SyncGetConnected(out bool aConnected)
        {
            SyncGetConnectedLinnCoUkCloud1 sync = new SyncGetConnectedLinnCoUkCloud1(this);
            BeginGetConnected(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aConnected = sync.Connected();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetConnected().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetConnected(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetConnected, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionGetConnected.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aConnected"></param>
        public void EndGetConnected(IntPtr aAsyncHandle, out bool aConnected)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aConnected = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aPublicKey"></param>
        public void SyncGetPublicKey(out String aPublicKey)
        {
            SyncGetPublicKeyLinnCoUkCloud1 sync = new SyncGetPublicKeyLinnCoUkCloud1(this);
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
        /// Set a delegate to be run when the AssociationStatus state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkCloud1 instance will not overlap.</remarks>
        /// <param name="aAssociationStatusChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyAssociationStatusChanged(System.Action aAssociationStatusChanged)
        {
            lock (iPropertyLock)
            {
                iAssociationStatusChanged = aAssociationStatusChanged;
            }
        }

        private void AssociationStatusPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iAssociationStatusChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Connected state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkCloud1 instance will not overlap.</remarks>
        /// <param name="aConnectedChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyConnectedChanged(System.Action aConnectedChanged)
        {
            lock (iPropertyLock)
            {
                iConnectedChanged = aConnectedChanged;
            }
        }

        private void ConnectedPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iConnectedChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PublicKey state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyLinnCoUkCloud1 instance will not overlap.</remarks>
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
        /// Query the value of the AssociationStatus property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the AssociationStatus property</returns>
        public String PropertyAssociationStatus()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iAssociationStatus.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Connected property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Connected property</returns>
        public bool PropertyConnected()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iConnected.Value();
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
            iActionGetChallengeResponse.Dispose();
            iActionSetAssociated.Dispose();
            iActionGetConnected.Dispose();
            iActionGetPublicKey.Dispose();
            iAssociationStatus.Dispose();
            iConnected.Dispose();
            iPublicKey.Dispose();
        }
    }
}

