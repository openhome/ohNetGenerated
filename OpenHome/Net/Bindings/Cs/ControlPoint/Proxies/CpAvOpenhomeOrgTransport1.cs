using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgTransport1 : ICpProxy, IDisposable
    {
        void SyncPlayAs(String aMode, String aCommand);
        void BeginPlayAs(String aMode, String aCommand, CpProxy.CallbackAsyncComplete aCallback);
        void EndPlayAs(IntPtr aAsyncHandle);
        void SyncPlay();
        void BeginPlay(CpProxy.CallbackAsyncComplete aCallback);
        void EndPlay(IntPtr aAsyncHandle);
        void SyncPause();
        void BeginPause(CpProxy.CallbackAsyncComplete aCallback);
        void EndPause(IntPtr aAsyncHandle);
        void SyncStop();
        void BeginStop(CpProxy.CallbackAsyncComplete aCallback);
        void EndStop(IntPtr aAsyncHandle);
        void SyncSkipNext();
        void BeginSkipNext(CpProxy.CallbackAsyncComplete aCallback);
        void EndSkipNext(IntPtr aAsyncHandle);
        void SyncSkipPrevious();
        void BeginSkipPrevious(CpProxy.CallbackAsyncComplete aCallback);
        void EndSkipPrevious(IntPtr aAsyncHandle);
        void SyncSetRepeat(bool aRepeat);
        void BeginSetRepeat(bool aRepeat, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRepeat(IntPtr aAsyncHandle);
        void SyncSetShuffle(bool aShuffle);
        void BeginSetShuffle(bool aShuffle, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetShuffle(IntPtr aAsyncHandle);
        void SyncSeekSecondAbsolute(uint aStreamId, uint aSecondAbsolute);
        void BeginSeekSecondAbsolute(uint aStreamId, uint aSecondAbsolute, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondAbsolute(IntPtr aAsyncHandle);
        void SyncSeekSecondRelative(uint aStreamId, int aSecondRelative);
        void BeginSeekSecondRelative(uint aStreamId, int aSecondRelative, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondRelative(IntPtr aAsyncHandle);
        void SyncTransportState(out String aState);
        void BeginTransportState(CpProxy.CallbackAsyncComplete aCallback);
        void EndTransportState(IntPtr aAsyncHandle, out String aState);
        void SyncModes(out String aModes);
        void BeginModes(CpProxy.CallbackAsyncComplete aCallback);
        void EndModes(IntPtr aAsyncHandle, out String aModes);
        void SyncModeInfo(out bool aCanSkipNext, out bool aCanSkipPrevious, out bool aCanRepeat, out bool aCanShuffle);
        void BeginModeInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndModeInfo(IntPtr aAsyncHandle, out bool aCanSkipNext, out bool aCanSkipPrevious, out bool aCanRepeat, out bool aCanShuffle);
        void SyncStreamInfo(out uint aStreamId, out bool aCanSeek, out bool aCanPause);
        void BeginStreamInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndStreamInfo(IntPtr aAsyncHandle, out uint aStreamId, out bool aCanSeek, out bool aCanPause);
        void SyncStreamId(out uint aStreamId);
        void BeginStreamId(CpProxy.CallbackAsyncComplete aCallback);
        void EndStreamId(IntPtr aAsyncHandle, out uint aStreamId);
        void SyncRepeat(out bool aRepeat);
        void BeginRepeat(CpProxy.CallbackAsyncComplete aCallback);
        void EndRepeat(IntPtr aAsyncHandle, out bool aRepeat);
        void SyncShuffle(out bool aShuffle);
        void BeginShuffle(CpProxy.CallbackAsyncComplete aCallback);
        void EndShuffle(IntPtr aAsyncHandle, out bool aShuffle);
        void SetPropertyModesChanged(System.Action aModesChanged);
        String PropertyModes();
        void SetPropertyCanSkipNextChanged(System.Action aCanSkipNextChanged);
        bool PropertyCanSkipNext();
        void SetPropertyCanSkipPreviousChanged(System.Action aCanSkipPreviousChanged);
        bool PropertyCanSkipPrevious();
        void SetPropertyCanRepeatChanged(System.Action aCanRepeatChanged);
        bool PropertyCanRepeat();
        void SetPropertyCanShuffleChanged(System.Action aCanShuffleChanged);
        bool PropertyCanShuffle();
        void SetPropertyStreamIdChanged(System.Action aStreamIdChanged);
        uint PropertyStreamId();
        void SetPropertyCanSeekChanged(System.Action aCanSeekChanged);
        bool PropertyCanSeek();
        void SetPropertyCanPauseChanged(System.Action aCanPauseChanged);
        bool PropertyCanPause();
        void SetPropertyTransportStateChanged(System.Action aTransportStateChanged);
        String PropertyTransportState();
        void SetPropertyRepeatChanged(System.Action aRepeatChanged);
        bool PropertyRepeat();
        void SetPropertyShuffleChanged(System.Action aShuffleChanged);
        bool PropertyShuffle();
    }

    internal class SyncPlayAsAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncPlayAsAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlayAs(aAsyncHandle);
        }
    };

    internal class SyncPlayAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncPlayAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPlay(aAsyncHandle);
        }
    };

    internal class SyncPauseAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncPauseAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPause(aAsyncHandle);
        }
    };

    internal class SyncStopAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncStopAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStop(aAsyncHandle);
        }
    };

    internal class SyncSkipNextAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSkipNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSkipNext(aAsyncHandle);
        }
    };

    internal class SyncSkipPreviousAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSkipPreviousAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSkipPrevious(aAsyncHandle);
        }
    };

    internal class SyncSetRepeatAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSetRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRepeat(aAsyncHandle);
        }
    };

    internal class SyncSetShuffleAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSetShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetShuffle(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondAbsolute(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondRelativeAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSeekSecondRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondRelative(aAsyncHandle);
        }
    };

    internal class SyncTransportStateAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private String iState;

        public SyncTransportStateAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public String State()
        {
            return iState;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndTransportState(aAsyncHandle, out iState);
        }
    };

    internal class SyncModesAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private String iModes;

        public SyncModesAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public String Modes()
        {
            return iModes;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndModes(aAsyncHandle, out iModes);
        }
    };

    internal class SyncModeInfoAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private bool iCanSkipNext;
        private bool iCanSkipPrevious;
        private bool iCanRepeat;
        private bool iCanShuffle;

        public SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public bool CanSkipNext()
        {
            return iCanSkipNext;
        }
        public bool CanSkipPrevious()
        {
            return iCanSkipPrevious;
        }
        public bool CanRepeat()
        {
            return iCanRepeat;
        }
        public bool CanShuffle()
        {
            return iCanShuffle;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndModeInfo(aAsyncHandle, out iCanSkipNext, out iCanSkipPrevious, out iCanRepeat, out iCanShuffle);
        }
    };

    internal class SyncStreamInfoAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private uint iStreamId;
        private bool iCanSeek;
        private bool iCanPause;

        public SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public uint StreamId()
        {
            return iStreamId;
        }
        public bool CanSeek()
        {
            return iCanSeek;
        }
        public bool CanPause()
        {
            return iCanPause;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStreamInfo(aAsyncHandle, out iStreamId, out iCanSeek, out iCanPause);
        }
    };

    internal class SyncStreamIdAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private uint iStreamId;

        public SyncStreamIdAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public uint StreamId()
        {
            return iStreamId;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStreamId(aAsyncHandle, out iStreamId);
        }
    };

    internal class SyncRepeatAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private bool iRepeat;

        public SyncRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public bool Repeat()
        {
            return iRepeat;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRepeat(aAsyncHandle, out iRepeat);
        }
    };

    internal class SyncShuffleAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private bool iShuffle;

        public SyncShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public bool Shuffle()
        {
            return iShuffle;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndShuffle(aAsyncHandle, out iShuffle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Transport:1 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgTransport1 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgTransport1
    {
        private OpenHome.Net.Core.Action iActionPlayAs;
        private OpenHome.Net.Core.Action iActionPlay;
        private OpenHome.Net.Core.Action iActionPause;
        private OpenHome.Net.Core.Action iActionStop;
        private OpenHome.Net.Core.Action iActionSkipNext;
        private OpenHome.Net.Core.Action iActionSkipPrevious;
        private OpenHome.Net.Core.Action iActionSetRepeat;
        private OpenHome.Net.Core.Action iActionSetShuffle;
        private OpenHome.Net.Core.Action iActionSeekSecondAbsolute;
        private OpenHome.Net.Core.Action iActionSeekSecondRelative;
        private OpenHome.Net.Core.Action iActionTransportState;
        private OpenHome.Net.Core.Action iActionModes;
        private OpenHome.Net.Core.Action iActionModeInfo;
        private OpenHome.Net.Core.Action iActionStreamInfo;
        private OpenHome.Net.Core.Action iActionStreamId;
        private OpenHome.Net.Core.Action iActionRepeat;
        private OpenHome.Net.Core.Action iActionShuffle;
        private PropertyString iModes;
        private PropertyBool iCanSkipNext;
        private PropertyBool iCanSkipPrevious;
        private PropertyBool iCanRepeat;
        private PropertyBool iCanShuffle;
        private PropertyUint iStreamId;
        private PropertyBool iCanSeek;
        private PropertyBool iCanPause;
        private PropertyString iTransportState;
        private PropertyBool iRepeat;
        private PropertyBool iShuffle;
        private System.Action iModesChanged;
        private System.Action iCanSkipNextChanged;
        private System.Action iCanSkipPreviousChanged;
        private System.Action iCanRepeatChanged;
        private System.Action iCanShuffleChanged;
        private System.Action iStreamIdChanged;
        private System.Action iCanSeekChanged;
        private System.Action iCanPauseChanged;
        private System.Action iTransportStateChanged;
        private System.Action iRepeatChanged;
        private System.Action iShuffleChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgTransport1(ICpDevice aDevice)
            : base("av-openhome-org", "Transport", 1, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionPlayAs = new OpenHome.Net.Core.Action("PlayAs");
            param = new ParameterString("Mode", allowedValues);
            iActionPlayAs.AddInputParameter(param);
            param = new ParameterString("Command", allowedValues);
            iActionPlayAs.AddInputParameter(param);

            iActionPlay = new OpenHome.Net.Core.Action("Play");

            iActionPause = new OpenHome.Net.Core.Action("Pause");

            iActionStop = new OpenHome.Net.Core.Action("Stop");

            iActionSkipNext = new OpenHome.Net.Core.Action("SkipNext");

            iActionSkipPrevious = new OpenHome.Net.Core.Action("SkipPrevious");

            iActionSetRepeat = new OpenHome.Net.Core.Action("SetRepeat");
            param = new ParameterBool("Repeat");
            iActionSetRepeat.AddInputParameter(param);

            iActionSetShuffle = new OpenHome.Net.Core.Action("SetShuffle");
            param = new ParameterBool("Shuffle");
            iActionSetShuffle.AddInputParameter(param);

            iActionSeekSecondAbsolute = new OpenHome.Net.Core.Action("SeekSecondAbsolute");
            param = new ParameterUint("StreamId");
            iActionSeekSecondAbsolute.AddInputParameter(param);
            param = new ParameterUint("SecondAbsolute");
            iActionSeekSecondAbsolute.AddInputParameter(param);

            iActionSeekSecondRelative = new OpenHome.Net.Core.Action("SeekSecondRelative");
            param = new ParameterUint("StreamId");
            iActionSeekSecondRelative.AddInputParameter(param);
            param = new ParameterInt("SecondRelative");
            iActionSeekSecondRelative.AddInputParameter(param);

            iActionTransportState = new OpenHome.Net.Core.Action("TransportState");
            allowedValues.Add("Playing");
            allowedValues.Add("Paused");
            allowedValues.Add("Stopped");
            allowedValues.Add("Buffering");
            allowedValues.Add("Waiting");
            param = new ParameterString("State", allowedValues);
            iActionTransportState.AddOutputParameter(param);
            allowedValues.Clear();

            iActionModes = new OpenHome.Net.Core.Action("Modes");
            param = new ParameterString("Modes", allowedValues);
            iActionModes.AddOutputParameter(param);

            iActionModeInfo = new OpenHome.Net.Core.Action("ModeInfo");
            param = new ParameterBool("CanSkipNext");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("CanSkipPrevious");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("CanRepeat");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("CanShuffle");
            iActionModeInfo.AddOutputParameter(param);

            iActionStreamInfo = new OpenHome.Net.Core.Action("StreamInfo");
            param = new ParameterUint("StreamId");
            iActionStreamInfo.AddOutputParameter(param);
            param = new ParameterBool("CanSeek");
            iActionStreamInfo.AddOutputParameter(param);
            param = new ParameterBool("CanPause");
            iActionStreamInfo.AddOutputParameter(param);

            iActionStreamId = new OpenHome.Net.Core.Action("StreamId");
            param = new ParameterUint("StreamId");
            iActionStreamId.AddOutputParameter(param);

            iActionRepeat = new OpenHome.Net.Core.Action("Repeat");
            param = new ParameterBool("Repeat");
            iActionRepeat.AddOutputParameter(param);

            iActionShuffle = new OpenHome.Net.Core.Action("Shuffle");
            param = new ParameterBool("Shuffle");
            iActionShuffle.AddOutputParameter(param);

            iModes = new PropertyString("Modes", ModesPropertyChanged);
            AddProperty(iModes);
            iCanSkipNext = new PropertyBool("CanSkipNext", CanSkipNextPropertyChanged);
            AddProperty(iCanSkipNext);
            iCanSkipPrevious = new PropertyBool("CanSkipPrevious", CanSkipPreviousPropertyChanged);
            AddProperty(iCanSkipPrevious);
            iCanRepeat = new PropertyBool("CanRepeat", CanRepeatPropertyChanged);
            AddProperty(iCanRepeat);
            iCanShuffle = new PropertyBool("CanShuffle", CanShufflePropertyChanged);
            AddProperty(iCanShuffle);
            iStreamId = new PropertyUint("StreamId", StreamIdPropertyChanged);
            AddProperty(iStreamId);
            iCanSeek = new PropertyBool("CanSeek", CanSeekPropertyChanged);
            AddProperty(iCanSeek);
            iCanPause = new PropertyBool("CanPause", CanPausePropertyChanged);
            AddProperty(iCanPause);
            iTransportState = new PropertyString("TransportState", TransportStatePropertyChanged);
            AddProperty(iTransportState);
            iRepeat = new PropertyBool("Repeat", RepeatPropertyChanged);
            AddProperty(iRepeat);
            iShuffle = new PropertyBool("Shuffle", ShufflePropertyChanged);
            AddProperty(iShuffle);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aMode"></param>
        /// <param name="aCommand"></param>
        public void SyncPlayAs(String aMode, String aCommand)
        {
            SyncPlayAsAvOpenhomeOrgTransport1 sync = new SyncPlayAsAvOpenhomeOrgTransport1(this);
            BeginPlayAs(aMode, aCommand, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPlayAs().</remarks>
        /// <param name="aMode"></param>
        /// <param name="aCommand"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPlayAs(String aMode, String aCommand, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPlayAs, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionPlayAs.InputParameter(inIndex++), aMode));
            invocation.AddInput(new ArgumentString((ParameterString)iActionPlayAs.InputParameter(inIndex++), aCommand));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPlayAs(IntPtr aAsyncHandle)
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
        public void SyncPlay()
        {
            SyncPlayAvOpenhomeOrgTransport1 sync = new SyncPlayAvOpenhomeOrgTransport1(this);
            BeginPlay(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPlay().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPlay(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPlay, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPlay(IntPtr aAsyncHandle)
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
        public void SyncPause()
        {
            SyncPauseAvOpenhomeOrgTransport1 sync = new SyncPauseAvOpenhomeOrgTransport1(this);
            BeginPause(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPause().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPause(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPause, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPause(IntPtr aAsyncHandle)
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
        public void SyncStop()
        {
            SyncStopAvOpenhomeOrgTransport1 sync = new SyncStopAvOpenhomeOrgTransport1(this);
            BeginStop(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndStop().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginStop(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionStop, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndStop(IntPtr aAsyncHandle)
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
        public void SyncSkipNext()
        {
            SyncSkipNextAvOpenhomeOrgTransport1 sync = new SyncSkipNextAvOpenhomeOrgTransport1(this);
            BeginSkipNext(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSkipNext().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSkipNext(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSkipNext, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSkipNext(IntPtr aAsyncHandle)
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
        public void SyncSkipPrevious()
        {
            SyncSkipPreviousAvOpenhomeOrgTransport1 sync = new SyncSkipPreviousAvOpenhomeOrgTransport1(this);
            BeginSkipPrevious(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSkipPrevious().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSkipPrevious(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSkipPrevious, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSkipPrevious(IntPtr aAsyncHandle)
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
        /// <param name="aRepeat"></param>
        public void SyncSetRepeat(bool aRepeat)
        {
            SyncSetRepeatAvOpenhomeOrgTransport1 sync = new SyncSetRepeatAvOpenhomeOrgTransport1(this);
            BeginSetRepeat(aRepeat, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetRepeat().</remarks>
        /// <param name="aRepeat"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetRepeat(bool aRepeat, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetRepeat, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetRepeat.InputParameter(inIndex++), aRepeat));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetRepeat(IntPtr aAsyncHandle)
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
        /// <param name="aShuffle"></param>
        public void SyncSetShuffle(bool aShuffle)
        {
            SyncSetShuffleAvOpenhomeOrgTransport1 sync = new SyncSetShuffleAvOpenhomeOrgTransport1(this);
            BeginSetShuffle(aShuffle, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetShuffle().</remarks>
        /// <param name="aShuffle"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetShuffle(bool aShuffle, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetShuffle, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetShuffle.InputParameter(inIndex++), aShuffle));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetShuffle(IntPtr aAsyncHandle)
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
        /// <param name="aStreamId"></param>
        /// <param name="aSecondAbsolute"></param>
        public void SyncSeekSecondAbsolute(uint aStreamId, uint aSecondAbsolute)
        {
            SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(this);
            BeginSeekSecondAbsolute(aStreamId, aSecondAbsolute, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondAbsolute().</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondAbsolute"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondAbsolute(uint aStreamId, uint aSecondAbsolute, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondAbsolute, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.InputParameter(inIndex++), aStreamId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.InputParameter(inIndex++), aSecondAbsolute));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondAbsolute(IntPtr aAsyncHandle)
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
        /// <param name="aStreamId"></param>
        /// <param name="aSecondRelative"></param>
        public void SyncSeekSecondRelative(uint aStreamId, int aSecondRelative)
        {
            SyncSeekSecondRelativeAvOpenhomeOrgTransport1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgTransport1(this);
            BeginSeekSecondRelative(aStreamId, aSecondRelative, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondRelative().</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondRelative"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondRelative(uint aStreamId, int aSecondRelative, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondRelative, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondRelative.InputParameter(inIndex++), aStreamId));
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSeekSecondRelative.InputParameter(inIndex++), aSecondRelative));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondRelative(IntPtr aAsyncHandle)
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
        /// <param name="aState"></param>
        public void SyncTransportState(out String aState)
        {
            SyncTransportStateAvOpenhomeOrgTransport1 sync = new SyncTransportStateAvOpenhomeOrgTransport1(this);
            BeginTransportState(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aState = sync.State();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndTransportState().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginTransportState(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionTransportState, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionTransportState.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aState"></param>
        public void EndTransportState(IntPtr aAsyncHandle, out String aState)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aState = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aModes"></param>
        public void SyncModes(out String aModes)
        {
            SyncModesAvOpenhomeOrgTransport1 sync = new SyncModesAvOpenhomeOrgTransport1(this);
            BeginModes(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aModes = sync.Modes();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndModes().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginModes(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionModes, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentString((ParameterString)iActionModes.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aModes"></param>
        public void EndModes(IntPtr aAsyncHandle, out String aModes)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aModes = Invocation.OutputString(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aCanSkipNext"></param>
        /// <param name="aCanSkipPrevious"></param>
        /// <param name="aCanRepeat"></param>
        /// <param name="aCanShuffle"></param>
        public void SyncModeInfo(out bool aCanSkipNext, out bool aCanSkipPrevious, out bool aCanRepeat, out bool aCanShuffle)
        {
            SyncModeInfoAvOpenhomeOrgTransport1 sync = new SyncModeInfoAvOpenhomeOrgTransport1(this);
            BeginModeInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aCanSkipNext = sync.CanSkipNext();
            aCanSkipPrevious = sync.CanSkipPrevious();
            aCanRepeat = sync.CanRepeat();
            aCanShuffle = sync.CanShuffle();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndModeInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginModeInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionModeInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionModeInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionModeInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionModeInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionModeInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aCanSkipNext"></param>
        /// <param name="aCanSkipPrevious"></param>
        /// <param name="aCanRepeat"></param>
        /// <param name="aCanShuffle"></param>
        public void EndModeInfo(IntPtr aAsyncHandle, out bool aCanSkipNext, out bool aCanSkipPrevious, out bool aCanRepeat, out bool aCanShuffle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aCanSkipNext = Invocation.OutputBool(aAsyncHandle, index++);
            aCanSkipPrevious = Invocation.OutputBool(aAsyncHandle, index++);
            aCanRepeat = Invocation.OutputBool(aAsyncHandle, index++);
            aCanShuffle = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aCanSeek"></param>
        /// <param name="aCanPause"></param>
        public void SyncStreamInfo(out uint aStreamId, out bool aCanSeek, out bool aCanPause)
        {
            SyncStreamInfoAvOpenhomeOrgTransport1 sync = new SyncStreamInfoAvOpenhomeOrgTransport1(this);
            BeginStreamInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aStreamId = sync.StreamId();
            aCanSeek = sync.CanSeek();
            aCanPause = sync.CanPause();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndStreamInfo().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginStreamInfo(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionStreamInfo, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionStreamInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionStreamInfo.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionStreamInfo.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aStreamId"></param>
        /// <param name="aCanSeek"></param>
        /// <param name="aCanPause"></param>
        public void EndStreamInfo(IntPtr aAsyncHandle, out uint aStreamId, out bool aCanSeek, out bool aCanPause)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aStreamId = Invocation.OutputUint(aAsyncHandle, index++);
            aCanSeek = Invocation.OutputBool(aAsyncHandle, index++);
            aCanPause = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStreamId"></param>
        public void SyncStreamId(out uint aStreamId)
        {
            SyncStreamIdAvOpenhomeOrgTransport1 sync = new SyncStreamIdAvOpenhomeOrgTransport1(this);
            BeginStreamId(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aStreamId = sync.StreamId();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndStreamId().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginStreamId(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionStreamId, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionStreamId.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aStreamId"></param>
        public void EndStreamId(IntPtr aAsyncHandle, out uint aStreamId)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aStreamId = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aRepeat"></param>
        public void SyncRepeat(out bool aRepeat)
        {
            SyncRepeatAvOpenhomeOrgTransport1 sync = new SyncRepeatAvOpenhomeOrgTransport1(this);
            BeginRepeat(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aRepeat = sync.Repeat();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRepeat().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRepeat(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRepeat, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionRepeat.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aRepeat"></param>
        public void EndRepeat(IntPtr aAsyncHandle, out bool aRepeat)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aRepeat = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aShuffle"></param>
        public void SyncShuffle(out bool aShuffle)
        {
            SyncShuffleAvOpenhomeOrgTransport1 sync = new SyncShuffleAvOpenhomeOrgTransport1(this);
            BeginShuffle(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aShuffle = sync.Shuffle();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndShuffle().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginShuffle(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionShuffle, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionShuffle.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aShuffle"></param>
        public void EndShuffle(IntPtr aAsyncHandle, out bool aShuffle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aShuffle = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Set a delegate to be run when the Modes state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aModesChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyModesChanged(System.Action aModesChanged)
        {
            lock (iPropertyLock)
            {
                iModesChanged = aModesChanged;
            }
        }

        private void ModesPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iModesChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanSkipNext state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanSkipNextChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanSkipNextChanged(System.Action aCanSkipNextChanged)
        {
            lock (iPropertyLock)
            {
                iCanSkipNextChanged = aCanSkipNextChanged;
            }
        }

        private void CanSkipNextPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanSkipNextChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanSkipPrevious state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanSkipPreviousChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanSkipPreviousChanged(System.Action aCanSkipPreviousChanged)
        {
            lock (iPropertyLock)
            {
                iCanSkipPreviousChanged = aCanSkipPreviousChanged;
            }
        }

        private void CanSkipPreviousPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanSkipPreviousChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanRepeat state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanRepeatChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanRepeatChanged(System.Action aCanRepeatChanged)
        {
            lock (iPropertyLock)
            {
                iCanRepeatChanged = aCanRepeatChanged;
            }
        }

        private void CanRepeatPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanRepeatChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanShuffle state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanShuffleChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanShuffleChanged(System.Action aCanShuffleChanged)
        {
            lock (iPropertyLock)
            {
                iCanShuffleChanged = aCanShuffleChanged;
            }
        }

        private void CanShufflePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanShuffleChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the StreamId state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aStreamIdChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyStreamIdChanged(System.Action aStreamIdChanged)
        {
            lock (iPropertyLock)
            {
                iStreamIdChanged = aStreamIdChanged;
            }
        }

        private void StreamIdPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iStreamIdChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanSeek state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanSeekChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanSeekChanged(System.Action aCanSeekChanged)
        {
            lock (iPropertyLock)
            {
                iCanSeekChanged = aCanSeekChanged;
            }
        }

        private void CanSeekPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanSeekChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the CanPause state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aCanPauseChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyCanPauseChanged(System.Action aCanPauseChanged)
        {
            lock (iPropertyLock)
            {
                iCanPauseChanged = aCanPauseChanged;
            }
        }

        private void CanPausePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iCanPauseChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the TransportState state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aTransportStateChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyTransportStateChanged(System.Action aTransportStateChanged)
        {
            lock (iPropertyLock)
            {
                iTransportStateChanged = aTransportStateChanged;
            }
        }

        private void TransportStatePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iTransportStateChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Repeat state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aRepeatChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRepeatChanged(System.Action aRepeatChanged)
        {
            lock (iPropertyLock)
            {
                iRepeatChanged = aRepeatChanged;
            }
        }

        private void RepeatPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRepeatChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Shuffle state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aShuffleChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyShuffleChanged(System.Action aShuffleChanged)
        {
            lock (iPropertyLock)
            {
                iShuffleChanged = aShuffleChanged;
            }
        }

        private void ShufflePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iShuffleChanged);
            }
        }

        /// <summary>
        /// Query the value of the Modes property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Modes property</returns>
        public String PropertyModes()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iModes.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanSkipNext property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanSkipNext property</returns>
        public bool PropertyCanSkipNext()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanSkipNext.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanSkipPrevious property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanSkipPrevious property</returns>
        public bool PropertyCanSkipPrevious()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanSkipPrevious.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanRepeat property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanRepeat property</returns>
        public bool PropertyCanRepeat()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanRepeat.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanShuffle property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanShuffle property</returns>
        public bool PropertyCanShuffle()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanShuffle.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the StreamId property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the StreamId property</returns>
        public uint PropertyStreamId()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iStreamId.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanSeek property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanSeek property</returns>
        public bool PropertyCanSeek()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanSeek.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the CanPause property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the CanPause property</returns>
        public bool PropertyCanPause()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iCanPause.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the TransportState property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the TransportState property</returns>
        public String PropertyTransportState()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iTransportState.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Repeat property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Repeat property</returns>
        public bool PropertyRepeat()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRepeat.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Shuffle property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Shuffle property</returns>
        public bool PropertyShuffle()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iShuffle.Value();
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
            iActionPlayAs.Dispose();
            iActionPlay.Dispose();
            iActionPause.Dispose();
            iActionStop.Dispose();
            iActionSkipNext.Dispose();
            iActionSkipPrevious.Dispose();
            iActionSetRepeat.Dispose();
            iActionSetShuffle.Dispose();
            iActionSeekSecondAbsolute.Dispose();
            iActionSeekSecondRelative.Dispose();
            iActionTransportState.Dispose();
            iActionModes.Dispose();
            iActionModeInfo.Dispose();
            iActionStreamInfo.Dispose();
            iActionStreamId.Dispose();
            iActionRepeat.Dispose();
            iActionShuffle.Dispose();
            iModes.Dispose();
            iCanSkipNext.Dispose();
            iCanSkipPrevious.Dispose();
            iCanRepeat.Dispose();
            iCanShuffle.Dispose();
            iStreamId.Dispose();
            iCanSeek.Dispose();
            iCanPause.Dispose();
            iTransportState.Dispose();
            iRepeat.Dispose();
            iShuffle.Dispose();
        }
    }
}

