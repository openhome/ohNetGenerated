package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgVolume4.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgVolume4 extends ICpProxy
{
    public Characteristics syncCharacteristics();
    public void beginCharacteristics(ICpProxyListener aCallback);
    public Characteristics endCharacteristics(long aAsyncHandle);
    public void syncSetVolume(long aValue);
    public void beginSetVolume(long aValue, ICpProxyListener aCallback);
    public void endSetVolume(long aAsyncHandle);
    public void syncVolumeInc();
    public void beginVolumeInc(ICpProxyListener aCallback);
    public void endVolumeInc(long aAsyncHandle);
    public void syncVolumeDec();
    public void beginVolumeDec(ICpProxyListener aCallback);
    public void endVolumeDec(long aAsyncHandle);
    public void syncSetVolumeNoUnmute(long aValue);
    public void beginSetVolumeNoUnmute(long aValue, ICpProxyListener aCallback);
    public void endSetVolumeNoUnmute(long aAsyncHandle);
    public void syncVolumeIncNoUnmute();
    public void beginVolumeIncNoUnmute(ICpProxyListener aCallback);
    public void endVolumeIncNoUnmute(long aAsyncHandle);
    public void syncVolumeDecNoUnmute();
    public void beginVolumeDecNoUnmute(ICpProxyListener aCallback);
    public void endVolumeDecNoUnmute(long aAsyncHandle);
    public long syncVolume();
    public void beginVolume(ICpProxyListener aCallback);
    public long endVolume(long aAsyncHandle);
    public void syncSetBalance(int aValue);
    public void beginSetBalance(int aValue, ICpProxyListener aCallback);
    public void endSetBalance(long aAsyncHandle);
    public void syncBalanceInc();
    public void beginBalanceInc(ICpProxyListener aCallback);
    public void endBalanceInc(long aAsyncHandle);
    public void syncBalanceDec();
    public void beginBalanceDec(ICpProxyListener aCallback);
    public void endBalanceDec(long aAsyncHandle);
    public int syncBalance();
    public void beginBalance(ICpProxyListener aCallback);
    public int endBalance(long aAsyncHandle);
    public void syncSetFade(int aValue);
    public void beginSetFade(int aValue, ICpProxyListener aCallback);
    public void endSetFade(long aAsyncHandle);
    public void syncFadeInc();
    public void beginFadeInc(ICpProxyListener aCallback);
    public void endFadeInc(long aAsyncHandle);
    public void syncFadeDec();
    public void beginFadeDec(ICpProxyListener aCallback);
    public void endFadeDec(long aAsyncHandle);
    public int syncFade();
    public void beginFade(ICpProxyListener aCallback);
    public int endFade(long aAsyncHandle);
    public void syncSetMute(boolean aValue);
    public void beginSetMute(boolean aValue, ICpProxyListener aCallback);
    public void endSetMute(long aAsyncHandle);
    public boolean syncMute();
    public void beginMute(ICpProxyListener aCallback);
    public boolean endMute(long aAsyncHandle);
    public long syncVolumeLimit();
    public void beginVolumeLimit(ICpProxyListener aCallback);
    public long endVolumeLimit(long aAsyncHandle);
    public boolean syncUnityGain();
    public void beginUnityGain(ICpProxyListener aCallback);
    public boolean endUnityGain(long aAsyncHandle);
    public int syncVolumeOffset(String aChannel);
    public void beginVolumeOffset(String aChannel, ICpProxyListener aCallback);
    public int endVolumeOffset(long aAsyncHandle);
    public void syncSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb);
    public void beginSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb, ICpProxyListener aCallback);
    public void endSetVolumeOffset(long aAsyncHandle);
    public int syncTrim(String aChannel);
    public void beginTrim(String aChannel, ICpProxyListener aCallback);
    public int endTrim(long aAsyncHandle);
    public void syncSetTrim(String aChannel, int aTrimBinaryMilliDb);
    public void beginSetTrim(String aChannel, int aTrimBinaryMilliDb, ICpProxyListener aCallback);
    public void endSetTrim(long aAsyncHandle);
    public void setPropertyVolumeChanged(IPropertyChangeListener aVolumeChanged);
    public long getPropertyVolume();
    public void setPropertyMuteChanged(IPropertyChangeListener aMuteChanged);
    public boolean getPropertyMute();
    public void setPropertyBalanceChanged(IPropertyChangeListener aBalanceChanged);
    public int getPropertyBalance();
    public void setPropertyFadeChanged(IPropertyChangeListener aFadeChanged);
    public int getPropertyFade();
    public void setPropertyVolumeLimitChanged(IPropertyChangeListener aVolumeLimitChanged);
    public long getPropertyVolumeLimit();
    public void setPropertyVolumeMaxChanged(IPropertyChangeListener aVolumeMaxChanged);
    public long getPropertyVolumeMax();
    public void setPropertyVolumeUnityChanged(IPropertyChangeListener aVolumeUnityChanged);
    public long getPropertyVolumeUnity();
    public void setPropertyVolumeStepsChanged(IPropertyChangeListener aVolumeStepsChanged);
    public long getPropertyVolumeSteps();
    public void setPropertyVolumeMilliDbPerStepChanged(IPropertyChangeListener aVolumeMilliDbPerStepChanged);
    public long getPropertyVolumeMilliDbPerStep();
    public void setPropertyBalanceMaxChanged(IPropertyChangeListener aBalanceMaxChanged);
    public long getPropertyBalanceMax();
    public void setPropertyFadeMaxChanged(IPropertyChangeListener aFadeMaxChanged);
    public long getPropertyFadeMax();
    public void setPropertyUnityGainChanged(IPropertyChangeListener aUnityGainChanged);
    public boolean getPropertyUnityGain();
    public void setPropertyVolumeOffsetsChanged(IPropertyChangeListener aVolumeOffsetsChanged);
    public String getPropertyVolumeOffsets();
    public void setPropertyVolumeOffsetMaxChanged(IPropertyChangeListener aVolumeOffsetMaxChanged);
    public long getPropertyVolumeOffsetMax();
    public void setPropertyTrimChanged(IPropertyChangeListener aTrimChanged);
    public String getPropertyTrim();
}

class SyncCharacteristicsAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private long iVolumeMax;
    private long iVolumeUnity;
    private long iVolumeSteps;
    private long iVolumeMilliDbPerStep;
    private long iBalanceMax;
    private long iFadeMax;

    public SyncCharacteristicsAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public long getVolumeMax()
    {
        return iVolumeMax;
    }
    public long getVolumeUnity()
    {
        return iVolumeUnity;
    }
    public long getVolumeSteps()
    {
        return iVolumeSteps;
    }
    public long getVolumeMilliDbPerStep()
    {
        return iVolumeMilliDbPerStep;
    }
    public long getBalanceMax()
    {
        return iBalanceMax;
    }
    public long getFadeMax()
    {
        return iFadeMax;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        Characteristics result = iService.endCharacteristics(aAsyncHandle);
        
        iVolumeMax = result.getVolumeMax();
        iVolumeUnity = result.getVolumeUnity();
        iVolumeSteps = result.getVolumeSteps();
        iVolumeMilliDbPerStep = result.getVolumeMilliDbPerStep();
        iBalanceMax = result.getBalanceMax();
        iFadeMax = result.getFadeMax();
    }
}

class SyncSetVolumeAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetVolume(aAsyncHandle);
        
    }
}

class SyncVolumeIncAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncVolumeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endVolumeInc(aAsyncHandle);
        
    }
}

class SyncVolumeDecAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncVolumeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endVolumeDec(aAsyncHandle);
        
    }
}

class SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetVolumeNoUnmute(aAsyncHandle);
        
    }
}

class SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endVolumeIncNoUnmute(aAsyncHandle);
        
    }
}

class SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endVolumeDecNoUnmute(aAsyncHandle);
        
    }
}

class SyncVolumeAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private long iValue;

    public SyncVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public long getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endVolume(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncSetBalanceAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetBalance(aAsyncHandle);
        
    }
}

class SyncBalanceIncAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncBalanceIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endBalanceInc(aAsyncHandle);
        
    }
}

class SyncBalanceDecAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncBalanceDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endBalanceDec(aAsyncHandle);
        
    }
}

class SyncBalanceAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private int iValue;

    public SyncBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public int getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        int result = iService.endBalance(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncSetFadeAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetFade(aAsyncHandle);
        
    }
}

class SyncFadeIncAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncFadeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endFadeInc(aAsyncHandle);
        
    }
}

class SyncFadeDecAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncFadeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endFadeDec(aAsyncHandle);
        
    }
}

class SyncFadeAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private int iValue;

    public SyncFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public int getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        int result = iService.endFade(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncSetMuteAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetMute(aAsyncHandle);
        
    }
}

class SyncMuteAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private boolean iValue;

    public SyncMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public boolean getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endMute(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncVolumeLimitAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private long iValue;

    public SyncVolumeLimitAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public long getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endVolumeLimit(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncUnityGainAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private boolean iValue;

    public SyncUnityGainAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public boolean getValue()
    {
        return iValue;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endUnityGain(aAsyncHandle);
        
        iValue = result;
    }
}

class SyncVolumeOffsetAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private int iVolumeOffsetBinaryMilliDb;

    public SyncVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public int getVolumeOffsetBinaryMilliDb()
    {
        return iVolumeOffsetBinaryMilliDb;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        int result = iService.endVolumeOffset(aAsyncHandle);
        
        iVolumeOffsetBinaryMilliDb = result;
    }
}

class SyncSetVolumeOffsetAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetVolumeOffset(aAsyncHandle);
        
    }
}

class SyncTrimAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;
    private int iTrimBinaryMilliDb;

    public SyncTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    public int getTrimBinaryMilliDb()
    {
        return iTrimBinaryMilliDb;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        int result = iService.endTrim(aAsyncHandle);
        
        iTrimBinaryMilliDb = result;
    }
}

class SyncSetTrimAvOpenhomeOrgVolume4 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgVolume4 iService;

    public SyncSetTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetTrim(aAsyncHandle);
        
    }
}

/**
 * Proxy for the av.openhome.org:Volume:4 UPnP service
 */
public class CpProxyAvOpenhomeOrgVolume4 extends CpProxy implements ICpProxyAvOpenhomeOrgVolume4
{

    public class Characteristics
    {
        private long iVolumeMax;
        private long iVolumeUnity;
        private long iVolumeSteps;
        private long iVolumeMilliDbPerStep;
        private long iBalanceMax;
        private long iFadeMax;

        public Characteristics(
            long aVolumeMax,
            long aVolumeUnity,
            long aVolumeSteps,
            long aVolumeMilliDbPerStep,
            long aBalanceMax,
            long aFadeMax
        )
        {
            iVolumeMax = aVolumeMax;
            iVolumeUnity = aVolumeUnity;
            iVolumeSteps = aVolumeSteps;
            iVolumeMilliDbPerStep = aVolumeMilliDbPerStep;
            iBalanceMax = aBalanceMax;
            iFadeMax = aFadeMax;
        }
        public long getVolumeMax()
        {
            return iVolumeMax;
        }
        public long getVolumeUnity()
        {
            return iVolumeUnity;
        }
        public long getVolumeSteps()
        {
            return iVolumeSteps;
        }
        public long getVolumeMilliDbPerStep()
        {
            return iVolumeMilliDbPerStep;
        }
        public long getBalanceMax()
        {
            return iBalanceMax;
        }
        public long getFadeMax()
        {
            return iFadeMax;
        }
    }

    private Action iActionCharacteristics;
    private Action iActionSetVolume;
    private Action iActionVolumeInc;
    private Action iActionVolumeDec;
    private Action iActionSetVolumeNoUnmute;
    private Action iActionVolumeIncNoUnmute;
    private Action iActionVolumeDecNoUnmute;
    private Action iActionVolume;
    private Action iActionSetBalance;
    private Action iActionBalanceInc;
    private Action iActionBalanceDec;
    private Action iActionBalance;
    private Action iActionSetFade;
    private Action iActionFadeInc;
    private Action iActionFadeDec;
    private Action iActionFade;
    private Action iActionSetMute;
    private Action iActionMute;
    private Action iActionVolumeLimit;
    private Action iActionUnityGain;
    private Action iActionVolumeOffset;
    private Action iActionSetVolumeOffset;
    private Action iActionTrim;
    private Action iActionSetTrim;
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
    private IPropertyChangeListener iVolumeChanged;
    private IPropertyChangeListener iMuteChanged;
    private IPropertyChangeListener iBalanceChanged;
    private IPropertyChangeListener iFadeChanged;
    private IPropertyChangeListener iVolumeLimitChanged;
    private IPropertyChangeListener iVolumeMaxChanged;
    private IPropertyChangeListener iVolumeUnityChanged;
    private IPropertyChangeListener iVolumeStepsChanged;
    private IPropertyChangeListener iVolumeMilliDbPerStepChanged;
    private IPropertyChangeListener iBalanceMaxChanged;
    private IPropertyChangeListener iFadeMaxChanged;
    private IPropertyChangeListener iUnityGainChanged;
    private IPropertyChangeListener iVolumeOffsetsChanged;
    private IPropertyChangeListener iVolumeOffsetMaxChanged;
    private IPropertyChangeListener iTrimChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgVolume4(CpDevice aDevice)
    {
        super("av-openhome-org", "Volume", 4, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionCharacteristics = new Action("Characteristics");
        param = new ParameterUint("VolumeMax");
        iActionCharacteristics.addOutputParameter(param);
        param = new ParameterUint("VolumeUnity");
        iActionCharacteristics.addOutputParameter(param);
        param = new ParameterUint("VolumeSteps");
        iActionCharacteristics.addOutputParameter(param);
        param = new ParameterUint("VolumeMilliDbPerStep");
        iActionCharacteristics.addOutputParameter(param);
        param = new ParameterUint("BalanceMax");
        iActionCharacteristics.addOutputParameter(param);
        param = new ParameterUint("FadeMax");
        iActionCharacteristics.addOutputParameter(param);

        iActionSetVolume = new Action("SetVolume");
        param = new ParameterUint("Value");
        iActionSetVolume.addInputParameter(param);

        iActionVolumeInc = new Action("VolumeInc");

        iActionVolumeDec = new Action("VolumeDec");

        iActionSetVolumeNoUnmute = new Action("SetVolumeNoUnmute");
        param = new ParameterUint("Value");
        iActionSetVolumeNoUnmute.addInputParameter(param);

        iActionVolumeIncNoUnmute = new Action("VolumeIncNoUnmute");

        iActionVolumeDecNoUnmute = new Action("VolumeDecNoUnmute");

        iActionVolume = new Action("Volume");
        param = new ParameterUint("Value");
        iActionVolume.addOutputParameter(param);

        iActionSetBalance = new Action("SetBalance");
        param = new ParameterInt("Value");
        iActionSetBalance.addInputParameter(param);

        iActionBalanceInc = new Action("BalanceInc");

        iActionBalanceDec = new Action("BalanceDec");

        iActionBalance = new Action("Balance");
        param = new ParameterInt("Value");
        iActionBalance.addOutputParameter(param);

        iActionSetFade = new Action("SetFade");
        param = new ParameterInt("Value");
        iActionSetFade.addInputParameter(param);

        iActionFadeInc = new Action("FadeInc");

        iActionFadeDec = new Action("FadeDec");

        iActionFade = new Action("Fade");
        param = new ParameterInt("Value");
        iActionFade.addOutputParameter(param);

        iActionSetMute = new Action("SetMute");
        param = new ParameterBool("Value");
        iActionSetMute.addInputParameter(param);

        iActionMute = new Action("Mute");
        param = new ParameterBool("Value");
        iActionMute.addOutputParameter(param);

        iActionVolumeLimit = new Action("VolumeLimit");
        param = new ParameterUint("Value");
        iActionVolumeLimit.addOutputParameter(param);

        iActionUnityGain = new Action("UnityGain");
        param = new ParameterBool("Value");
        iActionUnityGain.addOutputParameter(param);

        iActionVolumeOffset = new Action("VolumeOffset");
        param = new ParameterString("Channel", allowedValues);
        iActionVolumeOffset.addInputParameter(param);
        param = new ParameterInt("VolumeOffsetBinaryMilliDb");
        iActionVolumeOffset.addOutputParameter(param);

        iActionSetVolumeOffset = new Action("SetVolumeOffset");
        param = new ParameterString("Channel", allowedValues);
        iActionSetVolumeOffset.addInputParameter(param);
        param = new ParameterInt("VolumeOffsetBinaryMilliDb");
        iActionSetVolumeOffset.addInputParameter(param);

        iActionTrim = new Action("Trim");
        param = new ParameterString("Channel", allowedValues);
        iActionTrim.addInputParameter(param);
        param = new ParameterInt("TrimBinaryMilliDb");
        iActionTrim.addOutputParameter(param);

        iActionSetTrim = new Action("SetTrim");
        param = new ParameterString("Channel", allowedValues);
        iActionSetTrim.addInputParameter(param);
        param = new ParameterInt("TrimBinaryMilliDb");
        iActionSetTrim.addInputParameter(param);

        iVolumeChanged = new PropertyChangeListener();
        iVolume = new PropertyUint("Volume",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumePropertyChanged();
                }
            }
        );
        addProperty(iVolume);
        iMuteChanged = new PropertyChangeListener();
        iMute = new PropertyBool("Mute",
            new PropertyChangeListener() {
                public void notifyChange() {
                    mutePropertyChanged();
                }
            }
        );
        addProperty(iMute);
        iBalanceChanged = new PropertyChangeListener();
        iBalance = new PropertyInt("Balance",
            new PropertyChangeListener() {
                public void notifyChange() {
                    balancePropertyChanged();
                }
            }
        );
        addProperty(iBalance);
        iFadeChanged = new PropertyChangeListener();
        iFade = new PropertyInt("Fade",
            new PropertyChangeListener() {
                public void notifyChange() {
                    fadePropertyChanged();
                }
            }
        );
        addProperty(iFade);
        iVolumeLimitChanged = new PropertyChangeListener();
        iVolumeLimit = new PropertyUint("VolumeLimit",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeLimitPropertyChanged();
                }
            }
        );
        addProperty(iVolumeLimit);
        iVolumeMaxChanged = new PropertyChangeListener();
        iVolumeMax = new PropertyUint("VolumeMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeMaxPropertyChanged();
                }
            }
        );
        addProperty(iVolumeMax);
        iVolumeUnityChanged = new PropertyChangeListener();
        iVolumeUnity = new PropertyUint("VolumeUnity",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeUnityPropertyChanged();
                }
            }
        );
        addProperty(iVolumeUnity);
        iVolumeStepsChanged = new PropertyChangeListener();
        iVolumeSteps = new PropertyUint("VolumeSteps",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeStepsPropertyChanged();
                }
            }
        );
        addProperty(iVolumeSteps);
        iVolumeMilliDbPerStepChanged = new PropertyChangeListener();
        iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeMilliDbPerStepPropertyChanged();
                }
            }
        );
        addProperty(iVolumeMilliDbPerStep);
        iBalanceMaxChanged = new PropertyChangeListener();
        iBalanceMax = new PropertyUint("BalanceMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    balanceMaxPropertyChanged();
                }
            }
        );
        addProperty(iBalanceMax);
        iFadeMaxChanged = new PropertyChangeListener();
        iFadeMax = new PropertyUint("FadeMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    fadeMaxPropertyChanged();
                }
            }
        );
        addProperty(iFadeMax);
        iUnityGainChanged = new PropertyChangeListener();
        iUnityGain = new PropertyBool("UnityGain",
            new PropertyChangeListener() {
                public void notifyChange() {
                    unityGainPropertyChanged();
                }
            }
        );
        addProperty(iUnityGain);
        iVolumeOffsetsChanged = new PropertyChangeListener();
        iVolumeOffsets = new PropertyString("VolumeOffsets",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeOffsetsPropertyChanged();
                }
            }
        );
        addProperty(iVolumeOffsets);
        iVolumeOffsetMaxChanged = new PropertyChangeListener();
        iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax",
            new PropertyChangeListener() {
                public void notifyChange() {
                    volumeOffsetMaxPropertyChanged();
                }
            }
        );
        addProperty(iVolumeOffsetMax);
        iTrimChanged = new PropertyChangeListener();
        iTrim = new PropertyString("Trim",
            new PropertyChangeListener() {
                public void notifyChange() {
                    trimPropertyChanged();
                }
            }
        );
        addProperty(iTrim);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public Characteristics syncCharacteristics()
    {
        SyncCharacteristicsAvOpenhomeOrgVolume4 sync = new SyncCharacteristicsAvOpenhomeOrgVolume4(this);
        beginCharacteristics(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new Characteristics(
            sync.getVolumeMax(),
            sync.getVolumeUnity(),
            sync.getVolumeSteps(),
            sync.getVolumeMilliDbPerStep(),
            sync.getBalanceMax(),
            sync.getFadeMax()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endCharacteristics}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginCharacteristics(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionCharacteristics, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionCharacteristics.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginCharacteristics} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginCharacteristics} method.
     * @return the result of the previously invoked action.
     */
    public Characteristics endCharacteristics(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long volumeMax = Invocation.getOutputUint(aAsyncHandle, index++);
        long volumeUnity = Invocation.getOutputUint(aAsyncHandle, index++);
        long volumeSteps = Invocation.getOutputUint(aAsyncHandle, index++);
        long volumeMilliDbPerStep = Invocation.getOutputUint(aAsyncHandle, index++);
        long balanceMax = Invocation.getOutputUint(aAsyncHandle, index++);
        long fadeMax = Invocation.getOutputUint(aAsyncHandle, index++);
        return new Characteristics(
            volumeMax,
            volumeUnity,
            volumeSteps,
            volumeMilliDbPerStep,
            balanceMax,
            fadeMax
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetVolume(long aValue)
    {
        SyncSetVolumeAvOpenhomeOrgVolume4 sync = new SyncSetVolumeAvOpenhomeOrgVolume4(this);
        beginSetVolume(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetVolume}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetVolume(long aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetVolume, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetVolume.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetVolume} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetVolume} method.
     */
    public void endSetVolume(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncVolumeInc()
    {
        SyncVolumeIncAvOpenhomeOrgVolume4 sync = new SyncVolumeIncAvOpenhomeOrgVolume4(this);
        beginVolumeInc(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeInc}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeInc(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeInc, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeInc} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeInc} method.
     */
    public void endVolumeInc(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncVolumeDec()
    {
        SyncVolumeDecAvOpenhomeOrgVolume4 sync = new SyncVolumeDecAvOpenhomeOrgVolume4(this);
        beginVolumeDec(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeDec}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeDec(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeDec, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeDec} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeDec} method.
     */
    public void endVolumeDec(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetVolumeNoUnmute(long aValue)
    {
        SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4 sync = new SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4(this);
        beginSetVolumeNoUnmute(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetVolumeNoUnmute}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetVolumeNoUnmute(long aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetVolumeNoUnmute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetVolumeNoUnmute.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetVolumeNoUnmute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetVolumeNoUnmute} method.
     */
    public void endSetVolumeNoUnmute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncVolumeIncNoUnmute()
    {
        SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4 sync = new SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4(this);
        beginVolumeIncNoUnmute(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeIncNoUnmute}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeIncNoUnmute(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeIncNoUnmute, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeIncNoUnmute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeIncNoUnmute} method.
     */
    public void endVolumeIncNoUnmute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncVolumeDecNoUnmute()
    {
        SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4 sync = new SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4(this);
        beginVolumeDecNoUnmute(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeDecNoUnmute}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeDecNoUnmute(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeDecNoUnmute, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeDecNoUnmute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeDecNoUnmute} method.
     */
    public void endVolumeDecNoUnmute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncVolume()
    {
        SyncVolumeAvOpenhomeOrgVolume4 sync = new SyncVolumeAvOpenhomeOrgVolume4(this);
        beginVolume(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolume}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolume(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolume, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionVolume.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolume} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolume} method.
     * @return the result of the previously invoked action.
     */
    public long endVolume(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long value = Invocation.getOutputUint(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetBalance(int aValue)
    {
        SyncSetBalanceAvOpenhomeOrgVolume4 sync = new SyncSetBalanceAvOpenhomeOrgVolume4(this);
        beginSetBalance(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetBalance}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetBalance(int aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetBalance, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSetBalance.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetBalance} method.
     */
    public void endSetBalance(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncBalanceInc()
    {
        SyncBalanceIncAvOpenhomeOrgVolume4 sync = new SyncBalanceIncAvOpenhomeOrgVolume4(this);
        beginBalanceInc(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBalanceInc}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBalanceInc(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBalanceInc, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBalanceInc} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBalanceInc} method.
     */
    public void endBalanceInc(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncBalanceDec()
    {
        SyncBalanceDecAvOpenhomeOrgVolume4 sync = new SyncBalanceDecAvOpenhomeOrgVolume4(this);
        beginBalanceDec(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBalanceDec}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBalanceDec(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBalanceDec, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBalanceDec} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBalanceDec} method.
     */
    public void endBalanceDec(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public int syncBalance()
    {
        SyncBalanceAvOpenhomeOrgVolume4 sync = new SyncBalanceAvOpenhomeOrgVolume4(this);
        beginBalance(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endBalance}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginBalance(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionBalance, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentInt((ParameterInt)iActionBalance.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginBalance} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginBalance} method.
     * @return the result of the previously invoked action.
     */
    public int endBalance(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        int value = Invocation.getOutputInt(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetFade(int aValue)
    {
        SyncSetFadeAvOpenhomeOrgVolume4 sync = new SyncSetFadeAvOpenhomeOrgVolume4(this);
        beginSetFade(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetFade}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetFade(int aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetFade, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSetFade.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetFade} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetFade} method.
     */
    public void endSetFade(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncFadeInc()
    {
        SyncFadeIncAvOpenhomeOrgVolume4 sync = new SyncFadeIncAvOpenhomeOrgVolume4(this);
        beginFadeInc(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endFadeInc}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginFadeInc(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionFadeInc, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginFadeInc} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginFadeInc} method.
     */
    public void endFadeInc(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncFadeDec()
    {
        SyncFadeDecAvOpenhomeOrgVolume4 sync = new SyncFadeDecAvOpenhomeOrgVolume4(this);
        beginFadeDec(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endFadeDec}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginFadeDec(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionFadeDec, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginFadeDec} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginFadeDec} method.
     */
    public void endFadeDec(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public int syncFade()
    {
        SyncFadeAvOpenhomeOrgVolume4 sync = new SyncFadeAvOpenhomeOrgVolume4(this);
        beginFade(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endFade}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginFade(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionFade, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentInt((ParameterInt)iActionFade.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginFade} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginFade} method.
     * @return the result of the previously invoked action.
     */
    public int endFade(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        int value = Invocation.getOutputInt(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetMute(boolean aValue)
    {
        SyncSetMuteAvOpenhomeOrgVolume4 sync = new SyncSetMuteAvOpenhomeOrgVolume4(this);
        beginSetMute(aValue, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetMute}.
     * 
     * @param aValue
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetMute(boolean aValue, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetMute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetMute.getInputParameter(inIndex++), aValue));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetMute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetMute} method.
     */
    public void endSetMute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncMute()
    {
        SyncMuteAvOpenhomeOrgVolume4 sync = new SyncMuteAvOpenhomeOrgVolume4(this);
        beginMute(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endMute}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginMute(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionMute, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionMute.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginMute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginMute} method.
     * @return the result of the previously invoked action.
     */
    public boolean endMute(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean value = Invocation.getOutputBool(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncVolumeLimit()
    {
        SyncVolumeLimitAvOpenhomeOrgVolume4 sync = new SyncVolumeLimitAvOpenhomeOrgVolume4(this);
        beginVolumeLimit(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeLimit}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeLimit(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeLimit, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionVolumeLimit.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeLimit} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeLimit} method.
     * @return the result of the previously invoked action.
     */
    public long endVolumeLimit(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long value = Invocation.getOutputUint(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncUnityGain()
    {
        SyncUnityGainAvOpenhomeOrgVolume4 sync = new SyncUnityGainAvOpenhomeOrgVolume4(this);
        beginUnityGain(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getValue();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endUnityGain}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginUnityGain(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionUnityGain, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionUnityGain.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginUnityGain} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginUnityGain} method.
     * @return the result of the previously invoked action.
     */
    public boolean endUnityGain(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean value = Invocation.getOutputBool(aAsyncHandle, index++);
        return value;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public int syncVolumeOffset(String aChannel)
    {
        SyncVolumeOffsetAvOpenhomeOrgVolume4 sync = new SyncVolumeOffsetAvOpenhomeOrgVolume4(this);
        beginVolumeOffset(aChannel, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getVolumeOffsetBinaryMilliDb();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endVolumeOffset}.
     * 
     * @param aChannel
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginVolumeOffset(String aChannel, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionVolumeOffset, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionVolumeOffset.getInputParameter(inIndex++), aChannel));
        int outIndex = 0;
        invocation.addOutput(new ArgumentInt((ParameterInt)iActionVolumeOffset.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginVolumeOffset} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginVolumeOffset} method.
     * @return the result of the previously invoked action.
     */
    public int endVolumeOffset(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        int volumeOffsetBinaryMilliDb = Invocation.getOutputInt(aAsyncHandle, index++);
        return volumeOffsetBinaryMilliDb;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb)
    {
        SyncSetVolumeOffsetAvOpenhomeOrgVolume4 sync = new SyncSetVolumeOffsetAvOpenhomeOrgVolume4(this);
        beginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetVolumeOffset}.
     * 
     * @param aChannel
     * @param aVolumeOffsetBinaryMilliDb
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetVolumeOffset(String aChannel, int aVolumeOffsetBinaryMilliDb, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetVolumeOffset, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetVolumeOffset.getInputParameter(inIndex++), aChannel));
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSetVolumeOffset.getInputParameter(inIndex++), aVolumeOffsetBinaryMilliDb));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetVolumeOffset} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetVolumeOffset} method.
     */
    public void endSetVolumeOffset(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public int syncTrim(String aChannel)
    {
        SyncTrimAvOpenhomeOrgVolume4 sync = new SyncTrimAvOpenhomeOrgVolume4(this);
        beginTrim(aChannel, sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getTrimBinaryMilliDb();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endTrim}.
     * 
     * @param aChannel
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginTrim(String aChannel, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionTrim, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionTrim.getInputParameter(inIndex++), aChannel));
        int outIndex = 0;
        invocation.addOutput(new ArgumentInt((ParameterInt)iActionTrim.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginTrim} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginTrim} method.
     * @return the result of the previously invoked action.
     */
    public int endTrim(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        int trimBinaryMilliDb = Invocation.getOutputInt(aAsyncHandle, index++);
        return trimBinaryMilliDb;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncSetTrim(String aChannel, int aTrimBinaryMilliDb)
    {
        SyncSetTrimAvOpenhomeOrgVolume4 sync = new SyncSetTrimAvOpenhomeOrgVolume4(this);
        beginSetTrim(aChannel, aTrimBinaryMilliDb, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetTrim}.
     * 
     * @param aChannel
     * @param aTrimBinaryMilliDb
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetTrim(String aChannel, int aTrimBinaryMilliDb, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetTrim, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionSetTrim.getInputParameter(inIndex++), aChannel));
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSetTrim.getInputParameter(inIndex++), aTrimBinaryMilliDb));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetTrim} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetTrim} method.
     */
    public void endSetTrim(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
    }
        
    /**
     * Set a delegate to be run when the Volume state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeChanged(IPropertyChangeListener aVolumeChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeChanged = aVolumeChanged;
        }
    }

    private void volumePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeChanged);
        }
    }
    /**
     * Set a delegate to be run when the Mute state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aMuteChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyMuteChanged(IPropertyChangeListener aMuteChanged)
    {
        synchronized (iPropertyLock)
        {
            iMuteChanged = aMuteChanged;
        }
    }

    private void mutePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iMuteChanged);
        }
    }
    /**
     * Set a delegate to be run when the Balance state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aBalanceChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyBalanceChanged(IPropertyChangeListener aBalanceChanged)
    {
        synchronized (iPropertyLock)
        {
            iBalanceChanged = aBalanceChanged;
        }
    }

    private void balancePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iBalanceChanged);
        }
    }
    /**
     * Set a delegate to be run when the Fade state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aFadeChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyFadeChanged(IPropertyChangeListener aFadeChanged)
    {
        synchronized (iPropertyLock)
        {
            iFadeChanged = aFadeChanged;
        }
    }

    private void fadePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iFadeChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeLimit state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeLimitChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeLimitChanged(IPropertyChangeListener aVolumeLimitChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeLimitChanged = aVolumeLimitChanged;
        }
    }

    private void volumeLimitPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeLimitChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeMaxChanged(IPropertyChangeListener aVolumeMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeMaxChanged = aVolumeMaxChanged;
        }
    }

    private void volumeMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeUnity state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeUnityChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeUnityChanged(IPropertyChangeListener aVolumeUnityChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeUnityChanged = aVolumeUnityChanged;
        }
    }

    private void volumeUnityPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeUnityChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeSteps state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeStepsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeStepsChanged(IPropertyChangeListener aVolumeStepsChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeStepsChanged = aVolumeStepsChanged;
        }
    }

    private void volumeStepsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeStepsChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeMilliDbPerStep state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeMilliDbPerStepChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeMilliDbPerStepChanged(IPropertyChangeListener aVolumeMilliDbPerStepChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeMilliDbPerStepChanged = aVolumeMilliDbPerStepChanged;
        }
    }

    private void volumeMilliDbPerStepPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeMilliDbPerStepChanged);
        }
    }
    /**
     * Set a delegate to be run when the BalanceMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aBalanceMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyBalanceMaxChanged(IPropertyChangeListener aBalanceMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iBalanceMaxChanged = aBalanceMaxChanged;
        }
    }

    private void balanceMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iBalanceMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the FadeMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aFadeMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyFadeMaxChanged(IPropertyChangeListener aFadeMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iFadeMaxChanged = aFadeMaxChanged;
        }
    }

    private void fadeMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iFadeMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the UnityGain state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aUnityGainChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyUnityGainChanged(IPropertyChangeListener aUnityGainChanged)
    {
        synchronized (iPropertyLock)
        {
            iUnityGainChanged = aUnityGainChanged;
        }
    }

    private void unityGainPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iUnityGainChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeOffsets state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeOffsetsChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeOffsetsChanged(IPropertyChangeListener aVolumeOffsetsChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeOffsetsChanged = aVolumeOffsetsChanged;
        }
    }

    private void volumeOffsetsPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeOffsetsChanged);
        }
    }
    /**
     * Set a delegate to be run when the VolumeOffsetMax state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aVolumeOffsetMaxChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyVolumeOffsetMaxChanged(IPropertyChangeListener aVolumeOffsetMaxChanged)
    {
        synchronized (iPropertyLock)
        {
            iVolumeOffsetMaxChanged = aVolumeOffsetMaxChanged;
        }
    }

    private void volumeOffsetMaxPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iVolumeOffsetMaxChanged);
        }
    }
    /**
     * Set a delegate to be run when the Trim state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4 instance will not overlap.
     *
     * @param aTrimChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyTrimChanged(IPropertyChangeListener aTrimChanged)
    {
        synchronized (iPropertyLock)
        {
            iTrimChanged = aTrimChanged;
        }
    }

    private void trimPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iTrimChanged);
        }
    }

    /**
     * Query the value of the Volume property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Volume property.
     */
    public long getPropertyVolume()
    {
        propertyReadLock();
        long val = iVolume.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Mute property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Mute property.
     */
    public boolean getPropertyMute()
    {
        propertyReadLock();
        boolean val = iMute.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Balance property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Balance property.
     */
    public int getPropertyBalance()
    {
        propertyReadLock();
        int val = iBalance.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Fade property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Fade property.
     */
    public int getPropertyFade()
    {
        propertyReadLock();
        int val = iFade.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeLimit property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeLimit property.
     */
    public long getPropertyVolumeLimit()
    {
        propertyReadLock();
        long val = iVolumeLimit.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeMax property.
     */
    public long getPropertyVolumeMax()
    {
        propertyReadLock();
        long val = iVolumeMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeUnity property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeUnity property.
     */
    public long getPropertyVolumeUnity()
    {
        propertyReadLock();
        long val = iVolumeUnity.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeSteps property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeSteps property.
     */
    public long getPropertyVolumeSteps()
    {
        propertyReadLock();
        long val = iVolumeSteps.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeMilliDbPerStep property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeMilliDbPerStep property.
     */
    public long getPropertyVolumeMilliDbPerStep()
    {
        propertyReadLock();
        long val = iVolumeMilliDbPerStep.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the BalanceMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the BalanceMax property.
     */
    public long getPropertyBalanceMax()
    {
        propertyReadLock();
        long val = iBalanceMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the FadeMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the FadeMax property.
     */
    public long getPropertyFadeMax()
    {
        propertyReadLock();
        long val = iFadeMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the UnityGain property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the UnityGain property.
     */
    public boolean getPropertyUnityGain()
    {
        propertyReadLock();
        boolean val = iUnityGain.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeOffsets property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeOffsets property.
     */
    public String getPropertyVolumeOffsets()
    {
        propertyReadLock();
        String val = iVolumeOffsets.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the VolumeOffsetMax property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the VolumeOffsetMax property.
     */
    public long getPropertyVolumeOffsetMax()
    {
        propertyReadLock();
        long val = iVolumeOffsetMax.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Trim property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Trim property.
     */
    public String getPropertyTrim()
    {
        propertyReadLock();
        String val = iTrim.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Dispose of this control point proxy.
     * Must be called for each class instance.
     * Must be called before <tt>Library.close()</tt>.
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            disposeProxy();
            iHandle = 0;
            iActionCharacteristics.destroy();
            iActionSetVolume.destroy();
            iActionVolumeInc.destroy();
            iActionVolumeDec.destroy();
            iActionSetVolumeNoUnmute.destroy();
            iActionVolumeIncNoUnmute.destroy();
            iActionVolumeDecNoUnmute.destroy();
            iActionVolume.destroy();
            iActionSetBalance.destroy();
            iActionBalanceInc.destroy();
            iActionBalanceDec.destroy();
            iActionBalance.destroy();
            iActionSetFade.destroy();
            iActionFadeInc.destroy();
            iActionFadeDec.destroy();
            iActionFade.destroy();
            iActionSetMute.destroy();
            iActionMute.destroy();
            iActionVolumeLimit.destroy();
            iActionUnityGain.destroy();
            iActionVolumeOffset.destroy();
            iActionSetVolumeOffset.destroy();
            iActionTrim.destroy();
            iActionSetTrim.destroy();
            iVolume.destroy();
            iMute.destroy();
            iBalance.destroy();
            iFade.destroy();
            iVolumeLimit.destroy();
            iVolumeMax.destroy();
            iVolumeUnity.destroy();
            iVolumeSteps.destroy();
            iVolumeMilliDbPerStep.destroy();
            iBalanceMax.destroy();
            iFadeMax.destroy();
            iUnityGain.destroy();
            iVolumeOffsets.destroy();
            iVolumeOffsetMax.destroy();
            iTrim.destroy();
        }
    }
}

