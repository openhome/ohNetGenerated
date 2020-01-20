using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgDebug2 : ICpProxy, IDisposable
    {
        void SyncGetLog(out String aLog);
        void BeginGetLog(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetLog(IntPtr aAsyncHandle, out String aLog);
        void SyncSendLog(String aData);
        void BeginSendLog(String aData, CpProxy.CallbackAsyncComplete aCallback);
        void EndSendLog(IntPtr aAsyncHandle);
        void SyncSendDeviceAnnouncements();
        void BeginSendDeviceAnnouncements(CpProxy.CallbackAsyncComplete aCallback);
        void EndSendDeviceAnnouncements(IntPtr aAsyncHandle);
        void SyncGetRecentMSearches(out String aJsonArray);
        void BeginGetRecentMSearches(CpProxy.CallbackAsyncComplete aCallback);
        void EndGetRecentMSearches(IntPtr aAsyncHandle, out String aJsonArray);
    }

    internal class SyncGetLogAvOpenhomeOrgDebug2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug2 iService;
        private String iLog;

        public SyncGetLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
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

    internal class SyncSendLogAvOpenhomeOrgDebug2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug2 iService;

        public SyncSendLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSendLog(aAsyncHandle);
        }
    };

    internal class SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug2 iService;

        public SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSendDeviceAnnouncements(aAsyncHandle);
        }
    };

    internal class SyncGetRecentMSearchesAvOpenhomeOrgDebug2 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgDebug2 iService;
        private String iJsonArray;

        public SyncGetRecentMSearchesAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2 aProxy)
        {
            iService = aProxy;
        }
        public String JsonArray()
        {
            return iJsonArray;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndGetRecentMSearches(aAsyncHandle, out iJsonArray);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Debug:2 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgDebug2 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgDebug2
    {
        private OpenHome.Net.Core.Action iActionGetLog;
        private OpenHome.Net.Core.Action iActionSendLog;
        private OpenHome.Net.Core.Action iActionSendDeviceAnnouncements;
        private OpenHome.Net.Core.Action iActionGetRecentMSearches;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgDebug2(ICpDevice aDevice)
            : base("av-openhome-org", "Debug", 2, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionGetLog = new OpenHome.Net.Core.Action("GetLog");
            param = new ParameterString("Log", allowedValues);
            iActionGetLog.AddOutputParameter(param);

            iActionSendLog = new OpenHome.Net.Core.Action("SendLog");
            param = new ParameterString("Data", allowedValues);
            iActionSendLog.AddInputParameter(param);

            iActionSendDeviceAnnouncements = new OpenHome.Net.Core.Action("SendDeviceAnnouncements");

            iActionGetRecentMSearches = new OpenHome.Net.Core.Action("GetRecentMSearches");
            param = new ParameterString("JsonArray", allowedValues);
            iActionGetRecentMSearches.AddOutputParameter(param);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aLog"></param>
        public void SyncGetLog(out String aLog)
        {
            SyncGetLogAvOpenhomeOrgDebug2 sync = new SyncGetLogAvOpenhomeOrgDebug2(this);
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
            SyncSendLogAvOpenhomeOrgDebug2 sync = new SyncSendLogAvOpenhomeOrgDebug2(this);
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
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        public void SyncSendDeviceAnnouncements()
        {
            SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 sync = new SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(this);
            BeginSendDeviceAnnouncements(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSendDeviceAnnouncements().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSendDeviceAnnouncements(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSendDeviceAnnouncements, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSendDeviceAnnouncements(IntPtr aAsyncHandle)
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
        /// <param name="aJsonArray"></param>
        public void SyncGetRecentMSearches(out String aJsonArray)
        {
            SyncGetRecentMSearchesAvOpenhomeOrgDebug2 sync = new SyncGetRecentMSearchesAvOpenhomeOrgDebug2(this);
            BeginGetRecentMSearches(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aJsonArray = sync.JsonArray();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndGetRecentMSearches().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginGetRecentMSearches(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionGetRecentMSearches, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionGetRecentMSearches.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aJsonArray"></param>
        public void EndGetRecentMSearches(IntPtr aAsyncHandle, out String aJsonArray)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aJsonArray = Invocation.OutputString(aAsyncHandle, index++);
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
            iActionSendDeviceAnnouncements.Dispose();
            iActionGetRecentMSearches.Dispose();
        }
    }
}

