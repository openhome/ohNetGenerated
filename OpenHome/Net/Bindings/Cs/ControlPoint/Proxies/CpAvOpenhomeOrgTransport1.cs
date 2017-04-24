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
        void SyncNext();
        void BeginNext(CpProxy.CallbackAsyncComplete aCallback);
        void EndNext(IntPtr aAsyncHandle);
        void SyncPrev();
        void BeginPrev(CpProxy.CallbackAsyncComplete aCallback);
        void EndPrev(IntPtr aAsyncHandle);
        void SyncSetRepeat(bool aRepeat);
        void BeginSetRepeat(bool aRepeat, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRepeat(IntPtr aAsyncHandle);
        void SyncSetRandom(bool aRandom);
        void BeginSetRandom(bool aRandom, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetRandom(IntPtr aAsyncHandle);
        void SyncSeekSecondsAbsolute(uint aStreamId, uint aSecondsAbsolute);
        void BeginSeekSecondsAbsolute(uint aStreamId, uint aSecondsAbsolute, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondsAbsolute(IntPtr aAsyncHandle);
        void SyncSeekSecondsRelative(uint aStreamId, int aSecondsRelative);
        void BeginSeekSecondsRelative(uint aStreamId, int aSecondsRelative, CpProxy.CallbackAsyncComplete aCallback);
        void EndSeekSecondsRelative(IntPtr aAsyncHandle);
        void SyncTransportState(out String aState);
        void BeginTransportState(CpProxy.CallbackAsyncComplete aCallback);
        void EndTransportState(IntPtr aAsyncHandle, out String aState);
        void SyncModes(out String aModes);
        void BeginModes(CpProxy.CallbackAsyncComplete aCallback);
        void EndModes(IntPtr aAsyncHandle, out String aModes);
        void SyncModeInfo(out bool aNextAvailable, out bool aPrevAvailable, out bool aRepeatAvailable, out bool aRandomAvailable);
        void BeginModeInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndModeInfo(IntPtr aAsyncHandle, out bool aNextAvailable, out bool aPrevAvailable, out bool aRepeatAvailable, out bool aRandomAvailable);
        void SyncStreamInfo(out uint aStreamId, out bool aSeekable, out bool aPausable);
        void BeginStreamInfo(CpProxy.CallbackAsyncComplete aCallback);
        void EndStreamInfo(IntPtr aAsyncHandle, out uint aStreamId, out bool aSeekable, out bool aPausable);
        void SyncStreamId(out uint aStreamId);
        void BeginStreamId(CpProxy.CallbackAsyncComplete aCallback);
        void EndStreamId(IntPtr aAsyncHandle, out uint aStreamId);
        void SyncRepeat(out bool aRepeat);
        void BeginRepeat(CpProxy.CallbackAsyncComplete aCallback);
        void EndRepeat(IntPtr aAsyncHandle, out bool aRepeat);
        void SyncRandom(out bool aRandom);
        void BeginRandom(CpProxy.CallbackAsyncComplete aCallback);
        void EndRandom(IntPtr aAsyncHandle, out bool aRandom);
        void SetPropertyModesChanged(System.Action aModesChanged);
        String PropertyModes();
        void SetPropertyNextAvailableChanged(System.Action aNextAvailableChanged);
        bool PropertyNextAvailable();
        void SetPropertyPrevAvailableChanged(System.Action aPrevAvailableChanged);
        bool PropertyPrevAvailable();
        void SetPropertyRepeatAvailableChanged(System.Action aRepeatAvailableChanged);
        bool PropertyRepeatAvailable();
        void SetPropertyRandomAvailableChanged(System.Action aRandomAvailableChanged);
        bool PropertyRandomAvailable();
        void SetPropertyStreamIdChanged(System.Action aStreamIdChanged);
        uint PropertyStreamId();
        void SetPropertySeekableChanged(System.Action aSeekableChanged);
        bool PropertySeekable();
        void SetPropertyPausableChanged(System.Action aPausableChanged);
        bool PropertyPausable();
        void SetPropertyTransportStateChanged(System.Action aTransportStateChanged);
        String PropertyTransportState();
        void SetPropertyRepeatChanged(System.Action aRepeatChanged);
        bool PropertyRepeat();
        void SetPropertyRandomChanged(System.Action aRandomChanged);
        bool PropertyRandom();
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

    internal class SyncNextAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndNext(aAsyncHandle);
        }
    };

    internal class SyncPrevAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncPrevAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndPrev(aAsyncHandle);
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

    internal class SyncSetRandomAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSetRandomAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetRandom(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondsAbsolute(aAsyncHandle);
        }
    };

    internal class SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;

        public SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSeekSecondsRelative(aAsyncHandle);
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
        private bool iNextAvailable;
        private bool iPrevAvailable;
        private bool iRepeatAvailable;
        private bool iRandomAvailable;

        public SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public bool NextAvailable()
        {
            return iNextAvailable;
        }
        public bool PrevAvailable()
        {
            return iPrevAvailable;
        }
        public bool RepeatAvailable()
        {
            return iRepeatAvailable;
        }
        public bool RandomAvailable()
        {
            return iRandomAvailable;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndModeInfo(aAsyncHandle, out iNextAvailable, out iPrevAvailable, out iRepeatAvailable, out iRandomAvailable);
        }
    };

    internal class SyncStreamInfoAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private uint iStreamId;
        private bool iSeekable;
        private bool iPausable;

        public SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public uint StreamId()
        {
            return iStreamId;
        }
        public bool Seekable()
        {
            return iSeekable;
        }
        public bool Pausable()
        {
            return iPausable;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndStreamInfo(aAsyncHandle, out iStreamId, out iSeekable, out iPausable);
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

    internal class SyncRandomAvOpenhomeOrgTransport1 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgTransport1 iService;
        private bool iRandom;

        public SyncRandomAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
        {
            iService = aProxy;
        }
        public bool Random()
        {
            return iRandom;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndRandom(aAsyncHandle, out iRandom);
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
        private OpenHome.Net.Core.Action iActionNext;
        private OpenHome.Net.Core.Action iActionPrev;
        private OpenHome.Net.Core.Action iActionSetRepeat;
        private OpenHome.Net.Core.Action iActionSetRandom;
        private OpenHome.Net.Core.Action iActionSeekSecondsAbsolute;
        private OpenHome.Net.Core.Action iActionSeekSecondsRelative;
        private OpenHome.Net.Core.Action iActionTransportState;
        private OpenHome.Net.Core.Action iActionModes;
        private OpenHome.Net.Core.Action iActionModeInfo;
        private OpenHome.Net.Core.Action iActionStreamInfo;
        private OpenHome.Net.Core.Action iActionStreamId;
        private OpenHome.Net.Core.Action iActionRepeat;
        private OpenHome.Net.Core.Action iActionRandom;
        private PropertyString iModes;
        private PropertyBool iNextAvailable;
        private PropertyBool iPrevAvailable;
        private PropertyBool iRepeatAvailable;
        private PropertyBool iRandomAvailable;
        private PropertyUint iStreamId;
        private PropertyBool iSeekable;
        private PropertyBool iPausable;
        private PropertyString iTransportState;
        private PropertyBool iRepeat;
        private PropertyBool iRandom;
        private System.Action iModesChanged;
        private System.Action iNextAvailableChanged;
        private System.Action iPrevAvailableChanged;
        private System.Action iRepeatAvailableChanged;
        private System.Action iRandomAvailableChanged;
        private System.Action iStreamIdChanged;
        private System.Action iSeekableChanged;
        private System.Action iPausableChanged;
        private System.Action iTransportStateChanged;
        private System.Action iRepeatChanged;
        private System.Action iRandomChanged;
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

            iActionNext = new OpenHome.Net.Core.Action("Next");

            iActionPrev = new OpenHome.Net.Core.Action("Prev");

            iActionSetRepeat = new OpenHome.Net.Core.Action("SetRepeat");
            param = new ParameterBool("Repeat");
            iActionSetRepeat.AddInputParameter(param);

            iActionSetRandom = new OpenHome.Net.Core.Action("SetRandom");
            param = new ParameterBool("Random");
            iActionSetRandom.AddInputParameter(param);

            iActionSeekSecondsAbsolute = new OpenHome.Net.Core.Action("SeekSecondsAbsolute");
            param = new ParameterUint("StreamId");
            iActionSeekSecondsAbsolute.AddInputParameter(param);
            param = new ParameterUint("SecondsAbsolute");
            iActionSeekSecondsAbsolute.AddInputParameter(param);

            iActionSeekSecondsRelative = new OpenHome.Net.Core.Action("SeekSecondsRelative");
            param = new ParameterUint("StreamId");
            iActionSeekSecondsRelative.AddInputParameter(param);
            param = new ParameterInt("SecondsRelative");
            iActionSeekSecondsRelative.AddInputParameter(param);

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
            param = new ParameterBool("NextAvailable");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("PrevAvailable");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("RepeatAvailable");
            iActionModeInfo.AddOutputParameter(param);
            param = new ParameterBool("RandomAvailable");
            iActionModeInfo.AddOutputParameter(param);

            iActionStreamInfo = new OpenHome.Net.Core.Action("StreamInfo");
            param = new ParameterUint("StreamId");
            iActionStreamInfo.AddOutputParameter(param);
            param = new ParameterBool("Seekable");
            iActionStreamInfo.AddOutputParameter(param);
            param = new ParameterBool("Pausable");
            iActionStreamInfo.AddOutputParameter(param);

            iActionStreamId = new OpenHome.Net.Core.Action("StreamId");
            param = new ParameterUint("StreamId");
            iActionStreamId.AddOutputParameter(param);

            iActionRepeat = new OpenHome.Net.Core.Action("Repeat");
            param = new ParameterBool("Repeat");
            iActionRepeat.AddOutputParameter(param);

            iActionRandom = new OpenHome.Net.Core.Action("Random");
            param = new ParameterBool("Random");
            iActionRandom.AddOutputParameter(param);

            iModes = new PropertyString("Modes", ModesPropertyChanged);
            AddProperty(iModes);
            iNextAvailable = new PropertyBool("NextAvailable", NextAvailablePropertyChanged);
            AddProperty(iNextAvailable);
            iPrevAvailable = new PropertyBool("PrevAvailable", PrevAvailablePropertyChanged);
            AddProperty(iPrevAvailable);
            iRepeatAvailable = new PropertyBool("RepeatAvailable", RepeatAvailablePropertyChanged);
            AddProperty(iRepeatAvailable);
            iRandomAvailable = new PropertyBool("RandomAvailable", RandomAvailablePropertyChanged);
            AddProperty(iRandomAvailable);
            iStreamId = new PropertyUint("StreamId", StreamIdPropertyChanged);
            AddProperty(iStreamId);
            iSeekable = new PropertyBool("Seekable", SeekablePropertyChanged);
            AddProperty(iSeekable);
            iPausable = new PropertyBool("Pausable", PausablePropertyChanged);
            AddProperty(iPausable);
            iTransportState = new PropertyString("TransportState", TransportStatePropertyChanged);
            AddProperty(iTransportState);
            iRepeat = new PropertyBool("Repeat", RepeatPropertyChanged);
            AddProperty(iRepeat);
            iRandom = new PropertyBool("Random", RandomPropertyChanged);
            AddProperty(iRandom);
            
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
        public void SyncNext()
        {
            SyncNextAvOpenhomeOrgTransport1 sync = new SyncNextAvOpenhomeOrgTransport1(this);
            BeginNext(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndNext().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginNext(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionNext, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndNext(IntPtr aAsyncHandle)
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
        public void SyncPrev()
        {
            SyncPrevAvOpenhomeOrgTransport1 sync = new SyncPrevAvOpenhomeOrgTransport1(this);
            BeginPrev(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndPrev().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginPrev(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionPrev, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndPrev(IntPtr aAsyncHandle)
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
        /// <param name="aRandom"></param>
        public void SyncSetRandom(bool aRandom)
        {
            SyncSetRandomAvOpenhomeOrgTransport1 sync = new SyncSetRandomAvOpenhomeOrgTransport1(this);
            BeginSetRandom(aRandom, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetRandom().</remarks>
        /// <param name="aRandom"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetRandom(bool aRandom, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetRandom, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetRandom.InputParameter(inIndex++), aRandom));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetRandom(IntPtr aAsyncHandle)
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
        /// <param name="aSecondsAbsolute"></param>
        public void SyncSeekSecondsAbsolute(uint aStreamId, uint aSecondsAbsolute)
        {
            SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 sync = new SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(this);
            BeginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondsAbsolute().</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsAbsolute"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondsAbsolute(uint aStreamId, uint aSecondsAbsolute, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondsAbsolute, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondsAbsolute.InputParameter(inIndex++), aStreamId));
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondsAbsolute.InputParameter(inIndex++), aSecondsAbsolute));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondsAbsolute(IntPtr aAsyncHandle)
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
        /// <param name="aSecondsRelative"></param>
        public void SyncSeekSecondsRelative(uint aStreamId, int aSecondsRelative)
        {
            SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 sync = new SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(this);
            BeginSeekSecondsRelative(aStreamId, aSecondsRelative, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSeekSecondsRelative().</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsRelative"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSeekSecondsRelative(uint aStreamId, int aSecondsRelative, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSeekSecondsRelative, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSeekSecondsRelative.InputParameter(inIndex++), aStreamId));
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSeekSecondsRelative.InputParameter(inIndex++), aSecondsRelative));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSeekSecondsRelative(IntPtr aAsyncHandle)
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
        /// <param name="aNextAvailable"></param>
        /// <param name="aPrevAvailable"></param>
        /// <param name="aRepeatAvailable"></param>
        /// <param name="aRandomAvailable"></param>
        public void SyncModeInfo(out bool aNextAvailable, out bool aPrevAvailable, out bool aRepeatAvailable, out bool aRandomAvailable)
        {
            SyncModeInfoAvOpenhomeOrgTransport1 sync = new SyncModeInfoAvOpenhomeOrgTransport1(this);
            BeginModeInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aNextAvailable = sync.NextAvailable();
            aPrevAvailable = sync.PrevAvailable();
            aRepeatAvailable = sync.RepeatAvailable();
            aRandomAvailable = sync.RandomAvailable();
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
        /// <param name="aNextAvailable"></param>
        /// <param name="aPrevAvailable"></param>
        /// <param name="aRepeatAvailable"></param>
        /// <param name="aRandomAvailable"></param>
        public void EndModeInfo(IntPtr aAsyncHandle, out bool aNextAvailable, out bool aPrevAvailable, out bool aRepeatAvailable, out bool aRandomAvailable)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aNextAvailable = Invocation.OutputBool(aAsyncHandle, index++);
            aPrevAvailable = Invocation.OutputBool(aAsyncHandle, index++);
            aRepeatAvailable = Invocation.OutputBool(aAsyncHandle, index++);
            aRandomAvailable = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aStreamId"></param>
        /// <param name="aSeekable"></param>
        /// <param name="aPausable"></param>
        public void SyncStreamInfo(out uint aStreamId, out bool aSeekable, out bool aPausable)
        {
            SyncStreamInfoAvOpenhomeOrgTransport1 sync = new SyncStreamInfoAvOpenhomeOrgTransport1(this);
            BeginStreamInfo(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aStreamId = sync.StreamId();
            aSeekable = sync.Seekable();
            aPausable = sync.Pausable();
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
        /// <param name="aSeekable"></param>
        /// <param name="aPausable"></param>
        public void EndStreamInfo(IntPtr aAsyncHandle, out uint aStreamId, out bool aSeekable, out bool aPausable)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aStreamId = Invocation.OutputUint(aAsyncHandle, index++);
            aSeekable = Invocation.OutputBool(aAsyncHandle, index++);
            aPausable = Invocation.OutputBool(aAsyncHandle, index++);
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
        /// <param name="aRandom"></param>
        public void SyncRandom(out bool aRandom)
        {
            SyncRandomAvOpenhomeOrgTransport1 sync = new SyncRandomAvOpenhomeOrgTransport1(this);
            BeginRandom(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aRandom = sync.Random();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndRandom().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginRandom(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionRandom, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionRandom.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aRandom"></param>
        public void EndRandom(IntPtr aAsyncHandle, out bool aRandom)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aRandom = Invocation.OutputBool(aAsyncHandle, index++);
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
        /// Set a delegate to be run when the NextAvailable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aNextAvailableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyNextAvailableChanged(System.Action aNextAvailableChanged)
        {
            lock (iPropertyLock)
            {
                iNextAvailableChanged = aNextAvailableChanged;
            }
        }

        private void NextAvailablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iNextAvailableChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the PrevAvailable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aPrevAvailableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPrevAvailableChanged(System.Action aPrevAvailableChanged)
        {
            lock (iPropertyLock)
            {
                iPrevAvailableChanged = aPrevAvailableChanged;
            }
        }

        private void PrevAvailablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPrevAvailableChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the RepeatAvailable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aRepeatAvailableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRepeatAvailableChanged(System.Action aRepeatAvailableChanged)
        {
            lock (iPropertyLock)
            {
                iRepeatAvailableChanged = aRepeatAvailableChanged;
            }
        }

        private void RepeatAvailablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRepeatAvailableChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the RandomAvailable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aRandomAvailableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRandomAvailableChanged(System.Action aRandomAvailableChanged)
        {
            lock (iPropertyLock)
            {
                iRandomAvailableChanged = aRandomAvailableChanged;
            }
        }

        private void RandomAvailablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRandomAvailableChanged);
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
        /// Set a delegate to be run when the Seekable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aSeekableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertySeekableChanged(System.Action aSeekableChanged)
        {
            lock (iPropertyLock)
            {
                iSeekableChanged = aSeekableChanged;
            }
        }

        private void SeekablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iSeekableChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Pausable state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aPausableChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyPausableChanged(System.Action aPausableChanged)
        {
            lock (iPropertyLock)
            {
                iPausableChanged = aPausableChanged;
            }
        }

        private void PausablePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iPausableChanged);
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
        /// Set a delegate to be run when the Random state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgTransport1 instance will not overlap.</remarks>
        /// <param name="aRandomChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyRandomChanged(System.Action aRandomChanged)
        {
            lock (iPropertyLock)
            {
                iRandomChanged = aRandomChanged;
            }
        }

        private void RandomPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iRandomChanged);
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
        /// Query the value of the NextAvailable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the NextAvailable property</returns>
        public bool PropertyNextAvailable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iNextAvailable.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the PrevAvailable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the PrevAvailable property</returns>
        public bool PropertyPrevAvailable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iPrevAvailable.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the RepeatAvailable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the RepeatAvailable property</returns>
        public bool PropertyRepeatAvailable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRepeatAvailable.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the RandomAvailable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the RandomAvailable property</returns>
        public bool PropertyRandomAvailable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRandomAvailable.Value();
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
        /// Query the value of the Seekable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Seekable property</returns>
        public bool PropertySeekable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iSeekable.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Pausable property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Pausable property</returns>
        public bool PropertyPausable()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iPausable.Value();
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
        /// Query the value of the Random property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Random property</returns>
        public bool PropertyRandom()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iRandom.Value();
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
            iActionNext.Dispose();
            iActionPrev.Dispose();
            iActionSetRepeat.Dispose();
            iActionSetRandom.Dispose();
            iActionSeekSecondsAbsolute.Dispose();
            iActionSeekSecondsRelative.Dispose();
            iActionTransportState.Dispose();
            iActionModes.Dispose();
            iActionModeInfo.Dispose();
            iActionStreamInfo.Dispose();
            iActionStreamId.Dispose();
            iActionRepeat.Dispose();
            iActionRandom.Dispose();
            iModes.Dispose();
            iNextAvailable.Dispose();
            iPrevAvailable.Dispose();
            iRepeatAvailable.Dispose();
            iRandomAvailable.Dispose();
            iStreamId.Dispose();
            iSeekable.Dispose();
            iPausable.Dispose();
            iTransportState.Dispose();
            iRepeat.Dispose();
            iRandom.Dispose();
        }
    }
}

