using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using OpenHome.Net.Core;
using OpenHome.Net.ControlPoint;

namespace OpenHome.Net.ControlPoint.Proxies
{
    public interface ICpProxyAvOpenhomeOrgVolume3 : ICpProxy, IDisposable
    {
        void SyncCharacteristics(out uint aVolumeMax, out uint aVolumeUnity, out uint aVolumeSteps, out uint aVolumeMilliDbPerStep, out uint aBalanceMax, out uint aFadeMax);
        void BeginCharacteristics(CpProxy.CallbackAsyncComplete aCallback);
        void EndCharacteristics(IntPtr aAsyncHandle, out uint aVolumeMax, out uint aVolumeUnity, out uint aVolumeSteps, out uint aVolumeMilliDbPerStep, out uint aBalanceMax, out uint aFadeMax);
        void SyncSetVolume(uint aValue);
        void BeginSetVolume(uint aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetVolume(IntPtr aAsyncHandle);
        void SyncVolumeInc();
        void BeginVolumeInc(CpProxy.CallbackAsyncComplete aCallback);
        void EndVolumeInc(IntPtr aAsyncHandle);
        void SyncVolumeDec();
        void BeginVolumeDec(CpProxy.CallbackAsyncComplete aCallback);
        void EndVolumeDec(IntPtr aAsyncHandle);
        void SyncVolume(out uint aValue);
        void BeginVolume(CpProxy.CallbackAsyncComplete aCallback);
        void EndVolume(IntPtr aAsyncHandle, out uint aValue);
        void SyncSetBalance(int aValue);
        void BeginSetBalance(int aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetBalance(IntPtr aAsyncHandle);
        void SyncBalanceInc();
        void BeginBalanceInc(CpProxy.CallbackAsyncComplete aCallback);
        void EndBalanceInc(IntPtr aAsyncHandle);
        void SyncBalanceDec();
        void BeginBalanceDec(CpProxy.CallbackAsyncComplete aCallback);
        void EndBalanceDec(IntPtr aAsyncHandle);
        void SyncBalance(out int aValue);
        void BeginBalance(CpProxy.CallbackAsyncComplete aCallback);
        void EndBalance(IntPtr aAsyncHandle, out int aValue);
        void SyncSetFade(int aValue);
        void BeginSetFade(int aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetFade(IntPtr aAsyncHandle);
        void SyncFadeInc();
        void BeginFadeInc(CpProxy.CallbackAsyncComplete aCallback);
        void EndFadeInc(IntPtr aAsyncHandle);
        void SyncFadeDec();
        void BeginFadeDec(CpProxy.CallbackAsyncComplete aCallback);
        void EndFadeDec(IntPtr aAsyncHandle);
        void SyncFade(out int aValue);
        void BeginFade(CpProxy.CallbackAsyncComplete aCallback);
        void EndFade(IntPtr aAsyncHandle, out int aValue);
        void SyncSetMute(bool aValue);
        void BeginSetMute(bool aValue, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetMute(IntPtr aAsyncHandle);
        void SyncMute(out bool aValue);
        void BeginMute(CpProxy.CallbackAsyncComplete aCallback);
        void EndMute(IntPtr aAsyncHandle, out bool aValue);
        void SyncVolumeLimit(out uint aValue);
        void BeginVolumeLimit(CpProxy.CallbackAsyncComplete aCallback);
        void EndVolumeLimit(IntPtr aAsyncHandle, out uint aValue);
        void SyncUnityGain(out bool aValue);
        void BeginUnityGain(CpProxy.CallbackAsyncComplete aCallback);
        void EndUnityGain(IntPtr aAsyncHandle, out bool aValue);
        void SyncVolumeOffset(String aChannel, out int aVolumeOffsetBinaryMilliDb);
        void BeginVolumeOffset(String aChannel, CpProxy.CallbackAsyncComplete aCallback);
        void EndVolumeOffset(IntPtr aAsyncHandle, out int aVolumeOffsetBinaryMilliDb);
        void SyncSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb);
        void BeginSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetVolumeOffset(IntPtr aAsyncHandle);
        void SyncTrim(String aChannel, out int aTrimBinaryMilliDb);
        void BeginTrim(String aChannel, CpProxy.CallbackAsyncComplete aCallback);
        void EndTrim(IntPtr aAsyncHandle, out int aTrimBinaryMilliDb);
        void SyncSetTrim(String aChannel, int aTrimBinaryMilliDb);
        void BeginSetTrim(String aChannel, int aTrimBinaryMilliDb, CpProxy.CallbackAsyncComplete aCallback);
        void EndSetTrim(IntPtr aAsyncHandle);
        void SetPropertyVolumeChanged(System.Action aVolumeChanged);
        uint PropertyVolume();
        void SetPropertyMuteChanged(System.Action aMuteChanged);
        bool PropertyMute();
        void SetPropertyBalanceChanged(System.Action aBalanceChanged);
        int PropertyBalance();
        void SetPropertyFadeChanged(System.Action aFadeChanged);
        int PropertyFade();
        void SetPropertyVolumeLimitChanged(System.Action aVolumeLimitChanged);
        uint PropertyVolumeLimit();
        void SetPropertyVolumeMaxChanged(System.Action aVolumeMaxChanged);
        uint PropertyVolumeMax();
        void SetPropertyVolumeUnityChanged(System.Action aVolumeUnityChanged);
        uint PropertyVolumeUnity();
        void SetPropertyVolumeStepsChanged(System.Action aVolumeStepsChanged);
        uint PropertyVolumeSteps();
        void SetPropertyVolumeMilliDbPerStepChanged(System.Action aVolumeMilliDbPerStepChanged);
        uint PropertyVolumeMilliDbPerStep();
        void SetPropertyBalanceMaxChanged(System.Action aBalanceMaxChanged);
        uint PropertyBalanceMax();
        void SetPropertyFadeMaxChanged(System.Action aFadeMaxChanged);
        uint PropertyFadeMax();
        void SetPropertyUnityGainChanged(System.Action aUnityGainChanged);
        bool PropertyUnityGain();
        void SetPropertyVolumeOffsetsChanged(System.Action aVolumeOffsetsChanged);
        String PropertyVolumeOffsets();
        void SetPropertyVolumeOffsetMaxChanged(System.Action aVolumeOffsetMaxChanged);
        uint PropertyVolumeOffsetMax();
        void SetPropertyTrimChanged(System.Action aTrimChanged);
        String PropertyTrim();
    }

    internal class SyncCharacteristicsAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private uint iVolumeMax;
        private uint iVolumeUnity;
        private uint iVolumeSteps;
        private uint iVolumeMilliDbPerStep;
        private uint iBalanceMax;
        private uint iFadeMax;

        public SyncCharacteristicsAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public uint VolumeMax()
        {
            return iVolumeMax;
        }
        public uint VolumeUnity()
        {
            return iVolumeUnity;
        }
        public uint VolumeSteps()
        {
            return iVolumeSteps;
        }
        public uint VolumeMilliDbPerStep()
        {
            return iVolumeMilliDbPerStep;
        }
        public uint BalanceMax()
        {
            return iBalanceMax;
        }
        public uint FadeMax()
        {
            return iFadeMax;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndCharacteristics(aAsyncHandle, out iVolumeMax, out iVolumeUnity, out iVolumeSteps, out iVolumeMilliDbPerStep, out iBalanceMax, out iFadeMax);
        }
    };

    internal class SyncSetVolumeAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetVolume(aAsyncHandle);
        }
    };

    internal class SyncVolumeIncAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncVolumeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVolumeInc(aAsyncHandle);
        }
    };

    internal class SyncVolumeDecAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncVolumeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVolumeDec(aAsyncHandle);
        }
    };

    internal class SyncVolumeAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private uint iValue;

        public SyncVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public uint Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVolume(aAsyncHandle, out iValue);
        }
    };

    internal class SyncSetBalanceAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetBalance(aAsyncHandle);
        }
    };

    internal class SyncBalanceIncAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncBalanceIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBalanceInc(aAsyncHandle);
        }
    };

    internal class SyncBalanceDecAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncBalanceDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBalanceDec(aAsyncHandle);
        }
    };

    internal class SyncBalanceAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private int iValue;

        public SyncBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public int Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndBalance(aAsyncHandle, out iValue);
        }
    };

    internal class SyncSetFadeAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetFade(aAsyncHandle);
        }
    };

    internal class SyncFadeIncAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncFadeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndFadeInc(aAsyncHandle);
        }
    };

    internal class SyncFadeDecAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncFadeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndFadeDec(aAsyncHandle);
        }
    };

    internal class SyncFadeAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private int iValue;

        public SyncFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public int Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndFade(aAsyncHandle, out iValue);
        }
    };

    internal class SyncSetMuteAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetMute(aAsyncHandle);
        }
    };

    internal class SyncMuteAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private bool iValue;

        public SyncMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public bool Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndMute(aAsyncHandle, out iValue);
        }
    };

    internal class SyncVolumeLimitAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private uint iValue;

        public SyncVolumeLimitAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public uint Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVolumeLimit(aAsyncHandle, out iValue);
        }
    };

    internal class SyncUnityGainAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private bool iValue;

        public SyncUnityGainAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public bool Value()
        {
            return iValue;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndUnityGain(aAsyncHandle, out iValue);
        }
    };

    internal class SyncVolumeOffsetAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private int iVolumeOffsetBinaryMilliDb;

        public SyncVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public int VolumeOffsetBinaryMilliDb()
        {
            return iVolumeOffsetBinaryMilliDb;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndVolumeOffset(aAsyncHandle, out iVolumeOffsetBinaryMilliDb);
        }
    };

    internal class SyncSetVolumeOffsetAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetVolumeOffset(aAsyncHandle);
        }
    };

    internal class SyncTrimAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;
        private int iTrimBinaryMilliDb;

        public SyncTrimAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        public int TrimBinaryMilliDb()
        {
            return iTrimBinaryMilliDb;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndTrim(aAsyncHandle, out iTrimBinaryMilliDb);
        }
    };

    internal class SyncSetTrimAvOpenhomeOrgVolume3 : SyncProxyAction
    {
        private CpProxyAvOpenhomeOrgVolume3 iService;

        public SyncSetTrimAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3 aProxy)
        {
            iService = aProxy;
        }
        protected override void CompleteRequest(IntPtr aAsyncHandle)
        {
            iService.EndSetTrim(aAsyncHandle);
        }
    };

    /// <summary>
    /// Proxy for the av.openhome.org:Volume:3 UPnP service
    /// </summary>
    public class CpProxyAvOpenhomeOrgVolume3 : CpProxy, IDisposable, ICpProxyAvOpenhomeOrgVolume3
    {
        private OpenHome.Net.Core.Action iActionCharacteristics;
        private OpenHome.Net.Core.Action iActionSetVolume;
        private OpenHome.Net.Core.Action iActionVolumeInc;
        private OpenHome.Net.Core.Action iActionVolumeDec;
        private OpenHome.Net.Core.Action iActionVolume;
        private OpenHome.Net.Core.Action iActionSetBalance;
        private OpenHome.Net.Core.Action iActionBalanceInc;
        private OpenHome.Net.Core.Action iActionBalanceDec;
        private OpenHome.Net.Core.Action iActionBalance;
        private OpenHome.Net.Core.Action iActionSetFade;
        private OpenHome.Net.Core.Action iActionFadeInc;
        private OpenHome.Net.Core.Action iActionFadeDec;
        private OpenHome.Net.Core.Action iActionFade;
        private OpenHome.Net.Core.Action iActionSetMute;
        private OpenHome.Net.Core.Action iActionMute;
        private OpenHome.Net.Core.Action iActionVolumeLimit;
        private OpenHome.Net.Core.Action iActionUnityGain;
        private OpenHome.Net.Core.Action iActionVolumeOffset;
        private OpenHome.Net.Core.Action iActionSetVolumeOffset;
        private OpenHome.Net.Core.Action iActionTrim;
        private OpenHome.Net.Core.Action iActionSetTrim;
        private PropertyUint iVolume;
        private PropertyBool iMute;
        private PropertyInt iBalance;
        private PropertyInt iFade;
        private PropertyUint iVolumeLimit;
        private PropertyUint iVolumeMax;
        private PropertyUint iVolumeUnity;
        private PropertyUint iVolumeSteps;
        private PropertyUint iVolumeMilliDbPerStep;
        private PropertyUint iBalanceMax;
        private PropertyUint iFadeMax;
        private PropertyBool iUnityGain;
        private PropertyString iVolumeOffsets;
        private PropertyUint iVolumeOffsetMax;
        private PropertyString iTrim;
        private System.Action iVolumeChanged;
        private System.Action iMuteChanged;
        private System.Action iBalanceChanged;
        private System.Action iFadeChanged;
        private System.Action iVolumeLimitChanged;
        private System.Action iVolumeMaxChanged;
        private System.Action iVolumeUnityChanged;
        private System.Action iVolumeStepsChanged;
        private System.Action iVolumeMilliDbPerStepChanged;
        private System.Action iBalanceMaxChanged;
        private System.Action iFadeMaxChanged;
        private System.Action iUnityGainChanged;
        private System.Action iVolumeOffsetsChanged;
        private System.Action iVolumeOffsetMaxChanged;
        private System.Action iTrimChanged;
        private Mutex iPropertyLock;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <remarks>Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable and reporting of their changes.</remarks>
        /// <param name="aDevice">The device to use</param>
        public CpProxyAvOpenhomeOrgVolume3(ICpDevice aDevice)
            : base("av-openhome-org", "Volume", 3, aDevice)
        {
            OpenHome.Net.Core.Parameter param;
            List<String> allowedValues = new List<String>();

            iActionCharacteristics = new OpenHome.Net.Core.Action("Characteristics");
            param = new ParameterUint("VolumeMax");
            iActionCharacteristics.AddOutputParameter(param);
            param = new ParameterUint("VolumeUnity");
            iActionCharacteristics.AddOutputParameter(param);
            param = new ParameterUint("VolumeSteps");
            iActionCharacteristics.AddOutputParameter(param);
            param = new ParameterUint("VolumeMilliDbPerStep");
            iActionCharacteristics.AddOutputParameter(param);
            param = new ParameterUint("BalanceMax");
            iActionCharacteristics.AddOutputParameter(param);
            param = new ParameterUint("FadeMax");
            iActionCharacteristics.AddOutputParameter(param);

            iActionSetVolume = new OpenHome.Net.Core.Action("SetVolume");
            param = new ParameterUint("Value");
            iActionSetVolume.AddInputParameter(param);

            iActionVolumeInc = new OpenHome.Net.Core.Action("VolumeInc");

            iActionVolumeDec = new OpenHome.Net.Core.Action("VolumeDec");

            iActionVolume = new OpenHome.Net.Core.Action("Volume");
            param = new ParameterUint("Value");
            iActionVolume.AddOutputParameter(param);

            iActionSetBalance = new OpenHome.Net.Core.Action("SetBalance");
            param = new ParameterInt("Value");
            iActionSetBalance.AddInputParameter(param);

            iActionBalanceInc = new OpenHome.Net.Core.Action("BalanceInc");

            iActionBalanceDec = new OpenHome.Net.Core.Action("BalanceDec");

            iActionBalance = new OpenHome.Net.Core.Action("Balance");
            param = new ParameterInt("Value");
            iActionBalance.AddOutputParameter(param);

            iActionSetFade = new OpenHome.Net.Core.Action("SetFade");
            param = new ParameterInt("Value");
            iActionSetFade.AddInputParameter(param);

            iActionFadeInc = new OpenHome.Net.Core.Action("FadeInc");

            iActionFadeDec = new OpenHome.Net.Core.Action("FadeDec");

            iActionFade = new OpenHome.Net.Core.Action("Fade");
            param = new ParameterInt("Value");
            iActionFade.AddOutputParameter(param);

            iActionSetMute = new OpenHome.Net.Core.Action("SetMute");
            param = new ParameterBool("Value");
            iActionSetMute.AddInputParameter(param);

            iActionMute = new OpenHome.Net.Core.Action("Mute");
            param = new ParameterBool("Value");
            iActionMute.AddOutputParameter(param);

            iActionVolumeLimit = new OpenHome.Net.Core.Action("VolumeLimit");
            param = new ParameterUint("Value");
            iActionVolumeLimit.AddOutputParameter(param);

            iActionUnityGain = new OpenHome.Net.Core.Action("UnityGain");
            param = new ParameterBool("Value");
            iActionUnityGain.AddOutputParameter(param);

            iActionVolumeOffset = new OpenHome.Net.Core.Action("VolumeOffset");
            param = new ParameterString("Channel", allowedValues);
            iActionVolumeOffset.AddInputParameter(param);
            param = new ParameterInt("VolumeOffsetBinaryMilliDb");
            iActionVolumeOffset.AddOutputParameter(param);

            iActionSetVolumeOffset = new OpenHome.Net.Core.Action("SetVolumeOffset");
            param = new ParameterString("Channel", allowedValues);
            iActionSetVolumeOffset.AddInputParameter(param);
            param = new ParameterInt("VolumeOffsetBinaryMilliDb");
            iActionSetVolumeOffset.AddInputParameter(param);

            iActionTrim = new OpenHome.Net.Core.Action("Trim");
            param = new ParameterString("Channel", allowedValues);
            iActionTrim.AddInputParameter(param);
            param = new ParameterInt("TrimBinaryMilliDb");
            iActionTrim.AddOutputParameter(param);

            iActionSetTrim = new OpenHome.Net.Core.Action("SetTrim");
            param = new ParameterString("Channel", allowedValues);
            iActionSetTrim.AddInputParameter(param);
            param = new ParameterInt("TrimBinaryMilliDb");
            iActionSetTrim.AddInputParameter(param);

            iVolume = new PropertyUint("Volume", VolumePropertyChanged);
            AddProperty(iVolume);
            iMute = new PropertyBool("Mute", MutePropertyChanged);
            AddProperty(iMute);
            iBalance = new PropertyInt("Balance", BalancePropertyChanged);
            AddProperty(iBalance);
            iFade = new PropertyInt("Fade", FadePropertyChanged);
            AddProperty(iFade);
            iVolumeLimit = new PropertyUint("VolumeLimit", VolumeLimitPropertyChanged);
            AddProperty(iVolumeLimit);
            iVolumeMax = new PropertyUint("VolumeMax", VolumeMaxPropertyChanged);
            AddProperty(iVolumeMax);
            iVolumeUnity = new PropertyUint("VolumeUnity", VolumeUnityPropertyChanged);
            AddProperty(iVolumeUnity);
            iVolumeSteps = new PropertyUint("VolumeSteps", VolumeStepsPropertyChanged);
            AddProperty(iVolumeSteps);
            iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", VolumeMilliDbPerStepPropertyChanged);
            AddProperty(iVolumeMilliDbPerStep);
            iBalanceMax = new PropertyUint("BalanceMax", BalanceMaxPropertyChanged);
            AddProperty(iBalanceMax);
            iFadeMax = new PropertyUint("FadeMax", FadeMaxPropertyChanged);
            AddProperty(iFadeMax);
            iUnityGain = new PropertyBool("UnityGain", UnityGainPropertyChanged);
            AddProperty(iUnityGain);
            iVolumeOffsets = new PropertyString("VolumeOffsets", VolumeOffsetsPropertyChanged);
            AddProperty(iVolumeOffsets);
            iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", VolumeOffsetMaxPropertyChanged);
            AddProperty(iVolumeOffsetMax);
            iTrim = new PropertyString("Trim", TrimPropertyChanged);
            AddProperty(iTrim);
            
            iPropertyLock = new Mutex();
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aVolumeMax"></param>
        /// <param name="aVolumeUnity"></param>
        /// <param name="aVolumeSteps"></param>
        /// <param name="aVolumeMilliDbPerStep"></param>
        /// <param name="aBalanceMax"></param>
        /// <param name="aFadeMax"></param>
        public void SyncCharacteristics(out uint aVolumeMax, out uint aVolumeUnity, out uint aVolumeSteps, out uint aVolumeMilliDbPerStep, out uint aBalanceMax, out uint aFadeMax)
        {
            SyncCharacteristicsAvOpenhomeOrgVolume3 sync = new SyncCharacteristicsAvOpenhomeOrgVolume3(this);
            BeginCharacteristics(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVolumeMax = sync.VolumeMax();
            aVolumeUnity = sync.VolumeUnity();
            aVolumeSteps = sync.VolumeSteps();
            aVolumeMilliDbPerStep = sync.VolumeMilliDbPerStep();
            aBalanceMax = sync.BalanceMax();
            aFadeMax = sync.FadeMax();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndCharacteristics().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginCharacteristics(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionCharacteristics, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVolumeMax"></param>
        /// <param name="aVolumeUnity"></param>
        /// <param name="aVolumeSteps"></param>
        /// <param name="aVolumeMilliDbPerStep"></param>
        /// <param name="aBalanceMax"></param>
        /// <param name="aFadeMax"></param>
        public void EndCharacteristics(IntPtr aAsyncHandle, out uint aVolumeMax, out uint aVolumeUnity, out uint aVolumeSteps, out uint aVolumeMilliDbPerStep, out uint aBalanceMax, out uint aFadeMax)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVolumeMax = Invocation.OutputUint(aAsyncHandle, index++);
            aVolumeUnity = Invocation.OutputUint(aAsyncHandle, index++);
            aVolumeSteps = Invocation.OutputUint(aAsyncHandle, index++);
            aVolumeMilliDbPerStep = Invocation.OutputUint(aAsyncHandle, index++);
            aBalanceMax = Invocation.OutputUint(aAsyncHandle, index++);
            aFadeMax = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSetVolume(uint aValue)
        {
            SyncSetVolumeAvOpenhomeOrgVolume3 sync = new SyncSetVolumeAvOpenhomeOrgVolume3(this);
            BeginSetVolume(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetVolume().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetVolume(uint aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetVolume, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentUint((ParameterUint)iActionSetVolume.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetVolume(IntPtr aAsyncHandle)
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
        public void SyncVolumeInc()
        {
            SyncVolumeIncAvOpenhomeOrgVolume3 sync = new SyncVolumeIncAvOpenhomeOrgVolume3(this);
            BeginVolumeInc(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVolumeInc().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVolumeInc(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVolumeInc, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndVolumeInc(IntPtr aAsyncHandle)
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
        public void SyncVolumeDec()
        {
            SyncVolumeDecAvOpenhomeOrgVolume3 sync = new SyncVolumeDecAvOpenhomeOrgVolume3(this);
            BeginVolumeDec(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVolumeDec().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVolumeDec(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVolumeDec, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndVolumeDec(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncVolume(out uint aValue)
        {
            SyncVolumeAvOpenhomeOrgVolume3 sync = new SyncVolumeAvOpenhomeOrgVolume3(this);
            BeginVolume(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVolume().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVolume(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVolume, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionVolume.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndVolume(IntPtr aAsyncHandle, out uint aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSetBalance(int aValue)
        {
            SyncSetBalanceAvOpenhomeOrgVolume3 sync = new SyncSetBalanceAvOpenhomeOrgVolume3(this);
            BeginSetBalance(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetBalance().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetBalance(int aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetBalance, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSetBalance.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetBalance(IntPtr aAsyncHandle)
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
        public void SyncBalanceInc()
        {
            SyncBalanceIncAvOpenhomeOrgVolume3 sync = new SyncBalanceIncAvOpenhomeOrgVolume3(this);
            BeginBalanceInc(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBalanceInc().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBalanceInc(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBalanceInc, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndBalanceInc(IntPtr aAsyncHandle)
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
        public void SyncBalanceDec()
        {
            SyncBalanceDecAvOpenhomeOrgVolume3 sync = new SyncBalanceDecAvOpenhomeOrgVolume3(this);
            BeginBalanceDec(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBalanceDec().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBalanceDec(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBalanceDec, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndBalanceDec(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncBalance(out int aValue)
        {
            SyncBalanceAvOpenhomeOrgVolume3 sync = new SyncBalanceAvOpenhomeOrgVolume3(this);
            BeginBalance(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndBalance().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginBalance(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionBalance, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentInt((ParameterInt)iActionBalance.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndBalance(IntPtr aAsyncHandle, out int aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputInt(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSetFade(int aValue)
        {
            SyncSetFadeAvOpenhomeOrgVolume3 sync = new SyncSetFadeAvOpenhomeOrgVolume3(this);
            BeginSetFade(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetFade().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetFade(int aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetFade, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSetFade.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetFade(IntPtr aAsyncHandle)
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
        public void SyncFadeInc()
        {
            SyncFadeIncAvOpenhomeOrgVolume3 sync = new SyncFadeIncAvOpenhomeOrgVolume3(this);
            BeginFadeInc(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndFadeInc().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginFadeInc(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionFadeInc, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndFadeInc(IntPtr aAsyncHandle)
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
        public void SyncFadeDec()
        {
            SyncFadeDecAvOpenhomeOrgVolume3 sync = new SyncFadeDecAvOpenhomeOrgVolume3(this);
            BeginFadeDec(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndFadeDec().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginFadeDec(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionFadeDec, aCallback);
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndFadeDec(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncFade(out int aValue)
        {
            SyncFadeAvOpenhomeOrgVolume3 sync = new SyncFadeAvOpenhomeOrgVolume3(this);
            BeginFade(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndFade().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginFade(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionFade, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentInt((ParameterInt)iActionFade.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndFade(IntPtr aAsyncHandle, out int aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputInt(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncSetMute(bool aValue)
        {
            SyncSetMuteAvOpenhomeOrgVolume3 sync = new SyncSetMuteAvOpenhomeOrgVolume3(this);
            BeginSetMute(aValue, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetMute().</remarks>
        /// <param name="aValue"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetMute(bool aValue, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetMute, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentBool((ParameterBool)iActionSetMute.InputParameter(inIndex++), aValue));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetMute(IntPtr aAsyncHandle)
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
        /// <param name="aValue"></param>
        public void SyncMute(out bool aValue)
        {
            SyncMuteAvOpenhomeOrgVolume3 sync = new SyncMuteAvOpenhomeOrgVolume3(this);
            BeginMute(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndMute().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginMute(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionMute, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionMute.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndMute(IntPtr aAsyncHandle, out bool aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncVolumeLimit(out uint aValue)
        {
            SyncVolumeLimitAvOpenhomeOrgVolume3 sync = new SyncVolumeLimitAvOpenhomeOrgVolume3(this);
            BeginVolumeLimit(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVolumeLimit().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVolumeLimit(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVolumeLimit, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentUint((ParameterUint)iActionVolumeLimit.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndVolumeLimit(IntPtr aAsyncHandle, out uint aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputUint(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aValue"></param>
        public void SyncUnityGain(out bool aValue)
        {
            SyncUnityGainAvOpenhomeOrgVolume3 sync = new SyncUnityGainAvOpenhomeOrgVolume3(this);
            BeginUnityGain(sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aValue = sync.Value();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndUnityGain().</remarks>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginUnityGain(CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionUnityGain, aCallback);
            int outIndex = 0;
            invocation.AddOutput(new ArgumentBool((ParameterBool)iActionUnityGain.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aValue"></param>
        public void EndUnityGain(IntPtr aAsyncHandle, out bool aValue)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aValue = Invocation.OutputBool(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        public void SyncVolumeOffset(String aChannel, out int aVolumeOffsetBinaryMilliDb)
        {
            SyncVolumeOffsetAvOpenhomeOrgVolume3 sync = new SyncVolumeOffsetAvOpenhomeOrgVolume3(this);
            BeginVolumeOffset(aChannel, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aVolumeOffsetBinaryMilliDb = sync.VolumeOffsetBinaryMilliDb();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndVolumeOffset().</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginVolumeOffset(String aChannel, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionVolumeOffset, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionVolumeOffset.InputParameter(inIndex++), aChannel));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentInt((ParameterInt)iActionVolumeOffset.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        public void EndVolumeOffset(IntPtr aAsyncHandle, out int aVolumeOffsetBinaryMilliDb)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aVolumeOffsetBinaryMilliDb = Invocation.OutputInt(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        public void SyncSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb)
        {
            SyncSetVolumeOffsetAvOpenhomeOrgVolume3 sync = new SyncSetVolumeOffsetAvOpenhomeOrgVolume3(this);
            BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetVolumeOffset().</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetVolumeOffset, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetVolumeOffset.InputParameter(inIndex++), aChannel));
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSetVolumeOffset.InputParameter(inIndex++), aVolumeOffsetBinaryMilliDb));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetVolumeOffset(IntPtr aAsyncHandle)
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
        /// <param name="aChannel"></param>
        /// <param name="aTrimBinaryMilliDb"></param>
        public void SyncTrim(String aChannel, out int aTrimBinaryMilliDb)
        {
            SyncTrimAvOpenhomeOrgVolume3 sync = new SyncTrimAvOpenhomeOrgVolume3(this);
            BeginTrim(aChannel, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
            aTrimBinaryMilliDb = sync.TrimBinaryMilliDb();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndTrim().</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginTrim(String aChannel, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionTrim, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionTrim.InputParameter(inIndex++), aChannel));
            int outIndex = 0;
            invocation.AddOutput(new ArgumentInt((ParameterInt)iActionTrim.OutputParameter(outIndex++)));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        /// <param name="aTrimBinaryMilliDb"></param>
        public void EndTrim(IntPtr aAsyncHandle, out int aTrimBinaryMilliDb)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
            uint index = 0;
            aTrimBinaryMilliDb = Invocation.OutputInt(aAsyncHandle, index++);
        }

        /// <summary>
        /// Invoke the action synchronously
        /// </summary>
        /// <remarks>Blocks until the action has been processed
        /// on the device and sets any output arguments</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aTrimBinaryMilliDb"></param>
        public void SyncSetTrim(String aChannel, int aTrimBinaryMilliDb)
        {
            SyncSetTrimAvOpenhomeOrgVolume3 sync = new SyncSetTrimAvOpenhomeOrgVolume3(this);
            BeginSetTrim(aChannel, aTrimBinaryMilliDb, sync.AsyncComplete());
            sync.Wait();
            sync.ReportError();
        }

        /// <summary>
        /// Invoke the action asynchronously
        /// </summary>
        /// <remarks>Returns immediately and will run the client-specified callback when the action
        /// later completes.  Any output arguments can then be retrieved by calling
        /// EndSetTrim().</remarks>
        /// <param name="aChannel"></param>
        /// <param name="aTrimBinaryMilliDb"></param>
        /// <param name="aCallback">Delegate to run when the action completes.
        /// This is guaranteed to be run but may indicate an error</param>
        public void BeginSetTrim(String aChannel, int aTrimBinaryMilliDb, CallbackAsyncComplete aCallback)
        {
            Invocation invocation = iService.Invocation(iActionSetTrim, aCallback);
            int inIndex = 0;
            invocation.AddInput(new ArgumentString((ParameterString)iActionSetTrim.InputParameter(inIndex++), aChannel));
            invocation.AddInput(new ArgumentInt((ParameterInt)iActionSetTrim.InputParameter(inIndex++), aTrimBinaryMilliDb));
            iService.InvokeAction(invocation);
        }

        /// <summary>
        /// Retrieve the output arguments from an asynchronously invoked action.
        /// </summary>
        /// <remarks>This may only be called from the callback set in the above Begin function.</remarks>
        /// <param name="aAsyncHandle">Argument passed to the delegate set in the above Begin function</param>
        public void EndSetTrim(IntPtr aAsyncHandle)
        {
            uint code;
            string desc;
            if (Invocation.Error(aAsyncHandle, out code, out desc))
            {
                throw new ProxyError(code, desc);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Volume state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeChanged(System.Action aVolumeChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeChanged = aVolumeChanged;
            }
        }

        private void VolumePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Mute state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aMuteChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyMuteChanged(System.Action aMuteChanged)
        {
            lock (iPropertyLock)
            {
                iMuteChanged = aMuteChanged;
            }
        }

        private void MutePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iMuteChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Balance state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aBalanceChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyBalanceChanged(System.Action aBalanceChanged)
        {
            lock (iPropertyLock)
            {
                iBalanceChanged = aBalanceChanged;
            }
        }

        private void BalancePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iBalanceChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Fade state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aFadeChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyFadeChanged(System.Action aFadeChanged)
        {
            lock (iPropertyLock)
            {
                iFadeChanged = aFadeChanged;
            }
        }

        private void FadePropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iFadeChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeLimit state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeLimitChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeLimitChanged(System.Action aVolumeLimitChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeLimitChanged = aVolumeLimitChanged;
            }
        }

        private void VolumeLimitPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeLimitChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeMaxChanged(System.Action aVolumeMaxChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeMaxChanged = aVolumeMaxChanged;
            }
        }

        private void VolumeMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeUnity state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeUnityChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeUnityChanged(System.Action aVolumeUnityChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeUnityChanged = aVolumeUnityChanged;
            }
        }

        private void VolumeUnityPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeUnityChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeSteps state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeStepsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeStepsChanged(System.Action aVolumeStepsChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeStepsChanged = aVolumeStepsChanged;
            }
        }

        private void VolumeStepsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeStepsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeMilliDbPerStep state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeMilliDbPerStepChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeMilliDbPerStepChanged(System.Action aVolumeMilliDbPerStepChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeMilliDbPerStepChanged = aVolumeMilliDbPerStepChanged;
            }
        }

        private void VolumeMilliDbPerStepPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeMilliDbPerStepChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the BalanceMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aBalanceMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyBalanceMaxChanged(System.Action aBalanceMaxChanged)
        {
            lock (iPropertyLock)
            {
                iBalanceMaxChanged = aBalanceMaxChanged;
            }
        }

        private void BalanceMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iBalanceMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the FadeMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aFadeMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyFadeMaxChanged(System.Action aFadeMaxChanged)
        {
            lock (iPropertyLock)
            {
                iFadeMaxChanged = aFadeMaxChanged;
            }
        }

        private void FadeMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iFadeMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the UnityGain state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aUnityGainChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyUnityGainChanged(System.Action aUnityGainChanged)
        {
            lock (iPropertyLock)
            {
                iUnityGainChanged = aUnityGainChanged;
            }
        }

        private void UnityGainPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iUnityGainChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeOffsets state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeOffsetsChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeOffsetsChanged(System.Action aVolumeOffsetsChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeOffsetsChanged = aVolumeOffsetsChanged;
            }
        }

        private void VolumeOffsetsPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeOffsetsChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the VolumeOffsetMax state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aVolumeOffsetMaxChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyVolumeOffsetMaxChanged(System.Action aVolumeOffsetMaxChanged)
        {
            lock (iPropertyLock)
            {
                iVolumeOffsetMaxChanged = aVolumeOffsetMaxChanged;
            }
        }

        private void VolumeOffsetMaxPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iVolumeOffsetMaxChanged);
            }
        }

        /// <summary>
        /// Set a delegate to be run when the Trim state variable changes.
        /// </summary>
        /// <remarks>Callbacks may be run in different threads but callbacks for a
        /// CpProxyAvOpenhomeOrgVolume3 instance will not overlap.</remarks>
        /// <param name="aTrimChanged">The delegate to run when the state variable changes</param>
        public void SetPropertyTrimChanged(System.Action aTrimChanged)
        {
            lock (iPropertyLock)
            {
                iTrimChanged = aTrimChanged;
            }
        }

        private void TrimPropertyChanged()
        {
            lock (iPropertyLock)
            {
                ReportEvent(iTrimChanged);
            }
        }

        /// <summary>
        /// Query the value of the Volume property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Volume property</returns>
        public uint PropertyVolume()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolume.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Mute property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Mute property</returns>
        public bool PropertyMute()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iMute.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Balance property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Balance property</returns>
        public int PropertyBalance()
        {
            PropertyReadLock();
            int val;
            try
            {
                val = iBalance.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Fade property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Fade property</returns>
        public int PropertyFade()
        {
            PropertyReadLock();
            int val;
            try
            {
                val = iFade.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeLimit property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeLimit property</returns>
        public uint PropertyVolumeLimit()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeLimit.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeMax property</returns>
        public uint PropertyVolumeMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeUnity property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeUnity property</returns>
        public uint PropertyVolumeUnity()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeUnity.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeSteps property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeSteps property</returns>
        public uint PropertyVolumeSteps()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeSteps.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeMilliDbPerStep property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeMilliDbPerStep property</returns>
        public uint PropertyVolumeMilliDbPerStep()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeMilliDbPerStep.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the BalanceMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the BalanceMax property</returns>
        public uint PropertyBalanceMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iBalanceMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the FadeMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the FadeMax property</returns>
        public uint PropertyFadeMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iFadeMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the UnityGain property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the UnityGain property</returns>
        public bool PropertyUnityGain()
        {
            PropertyReadLock();
            bool val;
            try
            {
                val = iUnityGain.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeOffsets property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeOffsets property</returns>
        public String PropertyVolumeOffsets()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iVolumeOffsets.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the VolumeOffsetMax property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the VolumeOffsetMax property</returns>
        public uint PropertyVolumeOffsetMax()
        {
            PropertyReadLock();
            uint val;
            try
            {
                val = iVolumeOffsetMax.Value();
            }
            finally
            {
                PropertyReadUnlock();
            }
            return val;
        }

        /// <summary>
        /// Query the value of the Trim property.
        /// </summary>
        /// <remarks>This function is threadsafe and can only be called if Subscribe() has been
        /// called and a first eventing callback received more recently than any call
        /// to Unsubscribe().</remarks>
        /// <returns>Value of the Trim property</returns>
        public String PropertyTrim()
        {
            PropertyReadLock();
            String val;
            try
            {
                val = iTrim.Value();
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
            iActionCharacteristics.Dispose();
            iActionSetVolume.Dispose();
            iActionVolumeInc.Dispose();
            iActionVolumeDec.Dispose();
            iActionVolume.Dispose();
            iActionSetBalance.Dispose();
            iActionBalanceInc.Dispose();
            iActionBalanceDec.Dispose();
            iActionBalance.Dispose();
            iActionSetFade.Dispose();
            iActionFadeInc.Dispose();
            iActionFadeDec.Dispose();
            iActionFade.Dispose();
            iActionSetMute.Dispose();
            iActionMute.Dispose();
            iActionVolumeLimit.Dispose();
            iActionUnityGain.Dispose();
            iActionVolumeOffset.Dispose();
            iActionSetVolumeOffset.Dispose();
            iActionTrim.Dispose();
            iActionSetTrim.Dispose();
            iVolume.Dispose();
            iMute.Dispose();
            iBalance.Dispose();
            iFade.Dispose();
            iVolumeLimit.Dispose();
            iVolumeMax.Dispose();
            iVolumeUnity.Dispose();
            iVolumeSteps.Dispose();
            iVolumeMilliDbPerStep.Dispose();
            iBalanceMax.Dispose();
            iFadeMax.Dispose();
            iUnityGain.Dispose();
            iVolumeOffsets.Dispose();
            iVolumeOffsetMax.Dispose();
            iTrim.Dispose();
        }
    }
}

