using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgDebug1 : ICpProxy, IDisposable
    {
        void SyncGetLog(out String aLog);
        void BeginGetLog(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetLog(IntPtr aAsyncHandle, out String aLog);
        void SyncSendLog(String aData);
        void BeginSendLog(String aData, CpProxy.CallbackAsyncComplete aCallback);
        void EndSendLog(IntPtr aAsyncHandle);
    }

    internal class SyncGetLogAvOpenhomeOrgDebug1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug1 iService;
        private String iLog;

        public SyncGetLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1 aProxy)
        {
            iService = aProxy;
        }
        public String Log()
        {
            return iLog;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetLog(aAsyncHandle, out iLog);
        }
    };

    internal class SyncSendLogAvOpenhomeOrgDebug1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug1 iService;

        public SyncSendLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSendLog(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Debug:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgDebug1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgDebug1
    {
        private OpenHome.Net.Core.Action iActionGetLog;
        private OpenHome.Net.Core.Action iActionSendLog;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgDebug1(ICpDevice aDevice)
            : base("av-openhome-org", "Debug", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetLog = new OpenHome.Net.Core.Action("GetLog");
            param = new ParameterString("Log", allowedValues);
            iActionGetLog.AddOutputParameter(param);

            iActionSendLog = new OpenHome.Net.Core.Action("SendLog");
            param = new ParameterString("Data", allowedValues);
            iActionSendLog.AddInputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aLog"></param>
        public void SyncGetLog(out String aLog)
        {
            SyncGetLogAvOpenhomeOrgDebug1 sync = new SyncGetLogAvOpenhomeOrgDebug1(this);
            BeginGetLog(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aLog = sync.Log();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetLog().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetLog(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetLog, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetLog.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aLog"></param>
        public void EndGetLog(IntPtr aAsyncHandle, out String aLog)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aLog = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aData"></param>
        public void SyncSendLog(String aData)
        {
            SyncSendLogAvOpenhomeOrgDebug1 sync = new SyncSendLogAvOpenhomeOrgDebug1(this);
            BeginSendLog(aData, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSendLog().</remarks>
        /// <param name="aData"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSendLog(String aData, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSendLog, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSendLog.InputParameter(inIndex++), aData));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSendLog(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
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
            iActionGetLog.Dispose();
            iActionSendLog.Dispose();
        }
    }
}

