package org.openhome.net.controlpoint.proxies;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.controlpoint.*;
import org.openhome.net.controlpoint.proxies.CpProxyAvOpenhomeOrgTransport1.*;
import org.openhome.net.core.*;

    
interface ICpProxyAvOpenhomeOrgTransport1 extends ICpProxy
{
    public void syncPlayAs(String aMode, String aCommand);
    public void beginPlayAs(String aMode, String aCommand, ICpProxyListener aCallback);
    public void endPlayAs(long aAsyncHandle);
    public void syncPlay();
    public void beginPlay(ICpProxyListener aCallback);
    public void endPlay(long aAsyncHandle);
    public void syncPause();
    public void beginPause(ICpProxyListener aCallback);
    public void endPause(long aAsyncHandle);
    public void syncStop();
    public void beginStop(ICpProxyListener aCallback);
    public void endStop(long aAsyncHandle);
    public void syncNext(long aStreamId);
    public void beginNext(long aStreamId, ICpProxyListener aCallback);
    public void endNext(long aAsyncHandle);
    public void syncPrev(long aStreamId);
    public void beginPrev(long aStreamId, ICpProxyListener aCallback);
    public void endPrev(long aAsyncHandle);
    public void syncSetRepeat(boolean aRepeat);
    public void beginSetRepeat(boolean aRepeat, ICpProxyListener aCallback);
    public void endSetRepeat(long aAsyncHandle);
    public void syncSetRandom(boolean aRandom);
    public void beginSetRandom(boolean aRandom, ICpProxyListener aCallback);
    public void endSetRandom(long aAsyncHandle);
    public void syncSeekSecondsAbsolute(long aStreamId, long aSecondsAbsolute);
    public void beginSeekSecondsAbsolute(long aStreamId, long aSecondsAbsolute, ICpProxyListener aCallback);
    public void endSeekSecondsAbsolute(long aAsyncHandle);
    public void syncSeekSecondsRelative(long aStreamId, int aSecondsRelative);
    public void beginSeekSecondsRelative(long aStreamId, int aSecondsRelative, ICpProxyListener aCallback);
    public void endSeekSecondsRelative(long aAsyncHandle);
    public String syncTransportState();
    public void beginTransportState(ICpProxyListener aCallback);
    public String endTransportState(long aAsyncHandle);
    public String syncModes();
    public void beginModes(ICpProxyListener aCallback);
    public String endModes(long aAsyncHandle);
    public ModeInfo syncModeInfo();
    public void beginModeInfo(ICpProxyListener aCallback);
    public ModeInfo endModeInfo(long aAsyncHandle);
    public StreamInfo syncStreamInfo();
    public void beginStreamInfo(ICpProxyListener aCallback);
    public StreamInfo endStreamInfo(long aAsyncHandle);
    public long syncStreamId();
    public void beginStreamId(ICpProxyListener aCallback);
    public long endStreamId(long aAsyncHandle);
    public boolean syncRepeat();
    public void beginRepeat(ICpProxyListener aCallback);
    public boolean endRepeat(long aAsyncHandle);
    public boolean syncRandom();
    public void beginRandom(ICpProxyListener aCallback);
    public boolean endRandom(long aAsyncHandle);
    public void setPropertyModesChanged(IPropertyChangeListener aModesChanged);
    public String getPropertyModes();
    public void setPropertyNextAvailableChanged(IPropertyChangeListener aNextAvailableChanged);
    public boolean getPropertyNextAvailable();
    public void setPropertyPrevAvailableChanged(IPropertyChangeListener aPrevAvailableChanged);
    public boolean getPropertyPrevAvailable();
    public void setPropertyRepeatAvailableChanged(IPropertyChangeListener aRepeatAvailableChanged);
    public boolean getPropertyRepeatAvailable();
    public void setPropertyRandomAvailableChanged(IPropertyChangeListener aRandomAvailableChanged);
    public boolean getPropertyRandomAvailable();
    public void setPropertyStreamIdChanged(IPropertyChangeListener aStreamIdChanged);
    public long getPropertyStreamId();
    public void setPropertySeekableChanged(IPropertyChangeListener aSeekableChanged);
    public boolean getPropertySeekable();
    public void setPropertyPausableChanged(IPropertyChangeListener aPausableChanged);
    public boolean getPropertyPausable();
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged);
    public String getPropertyTransportState();
    public void setPropertyRepeatChanged(IPropertyChangeListener aRepeatChanged);
    public boolean getPropertyRepeat();
    public void setPropertyRandomChanged(IPropertyChangeListener aRandomChanged);
    public boolean getPropertyRandom();
}

class SyncPlayAsAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncPlayAsAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlayAs(aAsyncHandle);
        
    }
}

class SyncPlayAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncPlayAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPlay(aAsyncHandle);
        
    }
}

class SyncPauseAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncPauseAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPause(aAsyncHandle);
        
    }
}

class SyncStopAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncStopAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endStop(aAsyncHandle);
        
    }
}

class SyncNextAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endNext(aAsyncHandle);
        
    }
}

class SyncPrevAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncPrevAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrev(aAsyncHandle);
        
    }
}

class SyncSetRepeatAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSetRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRepeat(aAsyncHandle);
        
    }
}

class SyncSetRandomAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSetRandomAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetRandom(aAsyncHandle);
        
    }
}

class SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondsAbsolute(aAsyncHandle);
        
    }
}

class SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondsRelative(aAsyncHandle);
        
    }
}

class SyncTransportStateAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private String iState;

    public SyncTransportStateAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public String getState()
    {
        return iState;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endTransportState(aAsyncHandle);
        
        iState = result;
    }
}

class SyncModesAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private String iModes;

    public SyncModesAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public String getModes()
    {
        return iModes;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        String result = iService.endModes(aAsyncHandle);
        
        iModes = result;
    }
}

class SyncModeInfoAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private boolean iNextAvailable;
    private boolean iPrevAvailable;
    private boolean iRepeatAvailable;
    private boolean iRandomAvailable;

    public SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getNextAvailable()
    {
        return iNextAvailable;
    }
    public boolean getPrevAvailable()
    {
        return iPrevAvailable;
    }
    public boolean getRepeatAvailable()
    {
        return iRepeatAvailable;
    }
    public boolean getRandomAvailable()
    {
        return iRandomAvailable;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        ModeInfo result = iService.endModeInfo(aAsyncHandle);
        
        iNextAvailable = result.getNextAvailable();
        iPrevAvailable = result.getPrevAvailable();
        iRepeatAvailable = result.getRepeatAvailable();
        iRandomAvailable = result.getRandomAvailable();
    }
}

class SyncStreamInfoAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private long iStreamId;
    private boolean iSeekable;
    private boolean iPausable;

    public SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public long getStreamId()
    {
        return iStreamId;
    }
    public boolean getSeekable()
    {
        return iSeekable;
    }
    public boolean getPausable()
    {
        return iPausable;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        StreamInfo result = iService.endStreamInfo(aAsyncHandle);
        
        iStreamId = result.getStreamId();
        iSeekable = result.getSeekable();
        iPausable = result.getPausable();
    }
}

class SyncStreamIdAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private long iStreamId;

    public SyncStreamIdAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public long getStreamId()
    {
        return iStreamId;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endStreamId(aAsyncHandle);
        
        iStreamId = result;
    }
}

class SyncRepeatAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private boolean iRepeat;

    public SyncRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getRepeat()
    {
        return iRepeat;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endRepeat(aAsyncHandle);
        
        iRepeat = result;
    }
}

class SyncRandomAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private boolean iRandom;

    public SyncRandomAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getRandom()
    {
        return iRandom;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        boolean result = iService.endRandom(aAsyncHandle);
        
        iRandom = result;
    }
}

/**
 * Proxy for the av.openhome.org:Transport:1 UPnP service
 */
public class CpProxyAvOpenhomeOrgTransport1 extends CpProxy implements ICpProxyAvOpenhomeOrgTransport1
{

    public class ModeInfo
    {
        private boolean iNextAvailable;
        private boolean iPrevAvailable;
        private boolean iRepeatAvailable;
        private boolean iRandomAvailable;

        public ModeInfo(
            boolean aNextAvailable,
            boolean aPrevAvailable,
            boolean aRepeatAvailable,
            boolean aRandomAvailable
        )
        {
            iNextAvailable = aNextAvailable;
            iPrevAvailable = aPrevAvailable;
            iRepeatAvailable = aRepeatAvailable;
            iRandomAvailable = aRandomAvailable;
        }
        public boolean getNextAvailable()
        {
            return iNextAvailable;
        }
        public boolean getPrevAvailable()
        {
            return iPrevAvailable;
        }
        public boolean getRepeatAvailable()
        {
            return iRepeatAvailable;
        }
        public boolean getRandomAvailable()
        {
            return iRandomAvailable;
        }
    }

    public class StreamInfo
    {
        private long iStreamId;
        private boolean iSeekable;
        private boolean iPausable;

        public StreamInfo(
            long aStreamId,
            boolean aSeekable,
            boolean aPausable
        )
        {
            iStreamId = aStreamId;
            iSeekable = aSeekable;
            iPausable = aPausable;
        }
        public long getStreamId()
        {
            return iStreamId;
        }
        public boolean getSeekable()
        {
            return iSeekable;
        }
        public boolean getPausable()
        {
            return iPausable;
        }
    }

    private Action iActionPlayAs;
    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionStop;
    private Action iActionNext;
    private Action iActionPrev;
    private Action iActionSetRepeat;
    private Action iActionSetRandom;
    private Action iActionSeekSecondsAbsolute;
    private Action iActionSeekSecondsRelative;
    private Action iActionTransportState;
    private Action iActionModes;
    private Action iActionModeInfo;
    private Action iActionStreamInfo;
    private Action iActionStreamId;
    private Action iActionRepeat;
    private Action iActionRandom;
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
    private IPropertyChangeListener iModesChanged;
    private IPropertyChangeListener iNextAvailableChanged;
    private IPropertyChangeListener iPrevAvailableChanged;
    private IPropertyChangeListener iRepeatAvailableChanged;
    private IPropertyChangeListener iRandomAvailableChanged;
    private IPropertyChangeListener iStreamIdChanged;
    private IPropertyChangeListener iSeekableChanged;
    private IPropertyChangeListener iPausableChanged;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iRepeatChanged;
    private IPropertyChangeListener iRandomChanged;
    private Object iPropertyLock;

    /**
     * Constructor.
     * Use {@link #subscribe}/{@link #unsubscribe} to enable/disable querying of state variable and reporting of their changes.
     *
     * @param aDevice   the device to use.
     */

    public CpProxyAvOpenhomeOrgTransport1(CpDevice aDevice)
    {
        super("av-openhome-org", "Transport", 1, aDevice);
        Parameter param;
        List<String> allowedValues = new LinkedList<String>();

        iActionPlayAs = new Action("PlayAs");
        param = new ParameterString("Mode", allowedValues);
        iActionPlayAs.addInputParameter(param);
        param = new ParameterString("Command", allowedValues);
        iActionPlayAs.addInputParameter(param);

        iActionPlay = new Action("Play");

        iActionPause = new Action("Pause");

        iActionStop = new Action("Stop");

        iActionNext = new Action("Next");
        param = new ParameterUint("StreamId");
        iActionNext.addInputParameter(param);

        iActionPrev = new Action("Prev");
        param = new ParameterUint("StreamId");
        iActionPrev.addInputParameter(param);

        iActionSetRepeat = new Action("SetRepeat");
        param = new ParameterBool("Repeat");
        iActionSetRepeat.addInputParameter(param);

        iActionSetRandom = new Action("SetRandom");
        param = new ParameterBool("Random");
        iActionSetRandom.addInputParameter(param);

        iActionSeekSecondsAbsolute = new Action("SeekSecondsAbsolute");
        param = new ParameterUint("StreamId");
        iActionSeekSecondsAbsolute.addInputParameter(param);
        param = new ParameterUint("SecondsAbsolute");
        iActionSeekSecondsAbsolute.addInputParameter(param);

        iActionSeekSecondsRelative = new Action("SeekSecondsRelative");
        param = new ParameterUint("StreamId");
        iActionSeekSecondsRelative.addInputParameter(param);
        param = new ParameterInt("SecondsRelative");
        iActionSeekSecondsRelative.addInputParameter(param);

        iActionTransportState = new Action("TransportState");
        allowedValues.add("Playing");
        allowedValues.add("Paused");
        allowedValues.add("Stopped");
        allowedValues.add("Buffering");
        allowedValues.add("Waiting");
        param = new ParameterString("State", allowedValues);
        iActionTransportState.addOutputParameter(param);
        allowedValues.clear();

        iActionModes = new Action("Modes");
        param = new ParameterString("Modes", allowedValues);
        iActionModes.addOutputParameter(param);

        iActionModeInfo = new Action("ModeInfo");
        param = new ParameterBool("NextAvailable");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("PrevAvailable");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("RepeatAvailable");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("RandomAvailable");
        iActionModeInfo.addOutputParameter(param);

        iActionStreamInfo = new Action("StreamInfo");
        param = new ParameterUint("StreamId");
        iActionStreamInfo.addOutputParameter(param);
        param = new ParameterBool("Seekable");
        iActionStreamInfo.addOutputParameter(param);
        param = new ParameterBool("Pausable");
        iActionStreamInfo.addOutputParameter(param);

        iActionStreamId = new Action("StreamId");
        param = new ParameterUint("StreamId");
        iActionStreamId.addOutputParameter(param);

        iActionRepeat = new Action("Repeat");
        param = new ParameterBool("Repeat");
        iActionRepeat.addOutputParameter(param);

        iActionRandom = new Action("Random");
        param = new ParameterBool("Random");
        iActionRandom.addOutputParameter(param);

        iModesChanged = new PropertyChangeListener();
        iModes = new PropertyString("Modes",
            new PropertyChangeListener() {
                public void notifyChange() {
                    modesPropertyChanged();
                }
            }
        );
        addProperty(iModes);
        iNextAvailableChanged = new PropertyChangeListener();
        iNextAvailable = new PropertyBool("NextAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    nextAvailablePropertyChanged();
                }
            }
        );
        addProperty(iNextAvailable);
        iPrevAvailableChanged = new PropertyChangeListener();
        iPrevAvailable = new PropertyBool("PrevAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    prevAvailablePropertyChanged();
                }
            }
        );
        addProperty(iPrevAvailable);
        iRepeatAvailableChanged = new PropertyChangeListener();
        iRepeatAvailable = new PropertyBool("RepeatAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatAvailablePropertyChanged();
                }
            }
        );
        addProperty(iRepeatAvailable);
        iRandomAvailableChanged = new PropertyChangeListener();
        iRandomAvailable = new PropertyBool("RandomAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    randomAvailablePropertyChanged();
                }
            }
        );
        addProperty(iRandomAvailable);
        iStreamIdChanged = new PropertyChangeListener();
        iStreamId = new PropertyUint("StreamId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    streamIdPropertyChanged();
                }
            }
        );
        addProperty(iStreamId);
        iSeekableChanged = new PropertyChangeListener();
        iSeekable = new PropertyBool("Seekable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    seekablePropertyChanged();
                }
            }
        );
        addProperty(iSeekable);
        iPausableChanged = new PropertyChangeListener();
        iPausable = new PropertyBool("Pausable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    pausablePropertyChanged();
                }
            }
        );
        addProperty(iPausable);
        iTransportStateChanged = new PropertyChangeListener();
        iTransportState = new PropertyString("TransportState",
            new PropertyChangeListener() {
                public void notifyChange() {
                    transportStatePropertyChanged();
                }
            }
        );
        addProperty(iTransportState);
        iRepeatChanged = new PropertyChangeListener();
        iRepeat = new PropertyBool("Repeat",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatPropertyChanged();
                }
            }
        );
        addProperty(iRepeat);
        iRandomChanged = new PropertyChangeListener();
        iRandom = new PropertyBool("Random",
            new PropertyChangeListener() {
                public void notifyChange() {
                    randomPropertyChanged();
                }
            }
        );
        addProperty(iRandom);
        iPropertyLock = new Object();
    }
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     */
    public void syncPlayAs(String aMode, String aCommand)
    {
        SyncPlayAsAvOpenhomeOrgTransport1 sync = new SyncPlayAsAvOpenhomeOrgTransport1(this);
        beginPlayAs(aMode, aCommand, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPlayAs}.
     * 
     * @param aMode
     * @param aCommand
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPlayAs(String aMode, String aCommand, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPlayAs, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentString((ParameterString)iActionPlayAs.getInputParameter(inIndex++), aMode));
        invocation.addInput(new ArgumentString((ParameterString)iActionPlayAs.getInputParameter(inIndex++), aCommand));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPlayAs} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPlayAs} method.
     */
    public void endPlayAs(long aAsyncHandle)
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
    public void syncPlay()
    {
        SyncPlayAvOpenhomeOrgTransport1 sync = new SyncPlayAvOpenhomeOrgTransport1(this);
        beginPlay(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPlay}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPlay(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPlay, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPlay} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPlay} method.
     */
    public void endPlay(long aAsyncHandle)
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
    public void syncPause()
    {
        SyncPauseAvOpenhomeOrgTransport1 sync = new SyncPauseAvOpenhomeOrgTransport1(this);
        beginPause(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPause}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPause(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPause, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPause} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPause} method.
     */
    public void endPause(long aAsyncHandle)
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
    public void syncStop()
    {
        SyncStopAvOpenhomeOrgTransport1 sync = new SyncStopAvOpenhomeOrgTransport1(this);
        beginStop(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endStop}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginStop(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionStop, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginStop} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginStop} method.
     */
    public void endStop(long aAsyncHandle)
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
    public void syncNext(long aStreamId)
    {
        SyncNextAvOpenhomeOrgTransport1 sync = new SyncNextAvOpenhomeOrgTransport1(this);
        beginNext(aStreamId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endNext}.
     * 
     * @param aStreamId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginNext(long aStreamId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionNext, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionNext.getInputParameter(inIndex++), aStreamId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginNext} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginNext} method.
     */
    public void endNext(long aAsyncHandle)
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
    public void syncPrev(long aStreamId)
    {
        SyncPrevAvOpenhomeOrgTransport1 sync = new SyncPrevAvOpenhomeOrgTransport1(this);
        beginPrev(aStreamId, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPrev}.
     * 
     * @param aStreamId
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPrev(long aStreamId, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPrev, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionPrev.getInputParameter(inIndex++), aStreamId));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPrev} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPrev} method.
     */
    public void endPrev(long aAsyncHandle)
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
    public void syncSetRepeat(boolean aRepeat)
    {
        SyncSetRepeatAvOpenhomeOrgTransport1 sync = new SyncSetRepeatAvOpenhomeOrgTransport1(this);
        beginSetRepeat(aRepeat, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRepeat}.
     * 
     * @param aRepeat
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRepeat(boolean aRepeat, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRepeat, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetRepeat.getInputParameter(inIndex++), aRepeat));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRepeat} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRepeat} method.
     */
    public void endSetRepeat(long aAsyncHandle)
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
    public void syncSetRandom(boolean aRandom)
    {
        SyncSetRandomAvOpenhomeOrgTransport1 sync = new SyncSetRandomAvOpenhomeOrgTransport1(this);
        beginSetRandom(aRandom, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetRandom}.
     * 
     * @param aRandom
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetRandom(boolean aRandom, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRandom, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetRandom.getInputParameter(inIndex++), aRandom));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetRandom} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetRandom} method.
     */
    public void endSetRandom(long aAsyncHandle)
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
    public void syncSeekSecondsAbsolute(long aStreamId, long aSecondsAbsolute)
    {
        SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 sync = new SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(this);
        beginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondsAbsolute}.
     * 
     * @param aStreamId
     * @param aSecondsAbsolute
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondsAbsolute(long aStreamId, long aSecondsAbsolute, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondsAbsolute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondsAbsolute.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondsAbsolute.getInputParameter(inIndex++), aSecondsAbsolute));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondsAbsolute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondsAbsolute} method.
     */
    public void endSeekSecondsAbsolute(long aAsyncHandle)
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
    public void syncSeekSecondsRelative(long aStreamId, int aSecondsRelative)
    {
        SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 sync = new SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(this);
        beginSeekSecondsRelative(aStreamId, aSecondsRelative, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondsRelative}.
     * 
     * @param aStreamId
     * @param aSecondsRelative
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondsRelative(long aStreamId, int aSecondsRelative, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondsRelative, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondsRelative.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSeekSecondsRelative.getInputParameter(inIndex++), aSecondsRelative));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondsRelative} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondsRelative} method.
     */
    public void endSeekSecondsRelative(long aAsyncHandle)
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
    public String syncTransportState()
    {
        SyncTransportStateAvOpenhomeOrgTransport1 sync = new SyncTransportStateAvOpenhomeOrgTransport1(this);
        beginTransportState(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getState();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endTransportState}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginTransportState(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionTransportState, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionTransportState.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginTransportState} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginTransportState} method.
     * @return the result of the previously invoked action.
     */
    public String endTransportState(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String state = Invocation.getOutputString(aAsyncHandle, index++);
        return state;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public String syncModes()
    {
        SyncModesAvOpenhomeOrgTransport1 sync = new SyncModesAvOpenhomeOrgTransport1(this);
        beginModes(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getModes();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endModes}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginModes(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionModes, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentString((ParameterString)iActionModes.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginModes} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginModes} method.
     * @return the result of the previously invoked action.
     */
    public String endModes(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        String modes = Invocation.getOutputString(aAsyncHandle, index++);
        return modes;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public ModeInfo syncModeInfo()
    {
        SyncModeInfoAvOpenhomeOrgTransport1 sync = new SyncModeInfoAvOpenhomeOrgTransport1(this);
        beginModeInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new ModeInfo(
            sync.getNextAvailable(),
            sync.getPrevAvailable(),
            sync.getRepeatAvailable(),
            sync.getRandomAvailable()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endModeInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginModeInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionModeInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionModeInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionModeInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionModeInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionModeInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginModeInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginModeInfo} method.
     * @return the result of the previously invoked action.
     */
    public ModeInfo endModeInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean nextAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean prevAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean repeatAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean randomAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        return new ModeInfo(
            nextAvailable,
            prevAvailable,
            repeatAvailable,
            randomAvailable
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public StreamInfo syncStreamInfo()
    {
        SyncStreamInfoAvOpenhomeOrgTransport1 sync = new SyncStreamInfoAvOpenhomeOrgTransport1(this);
        beginStreamInfo(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return new StreamInfo(
            sync.getStreamId(),
            sync.getSeekable(),
            sync.getPausable()
        );
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endStreamInfo}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginStreamInfo(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionStreamInfo, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionStreamInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionStreamInfo.getOutputParameter(outIndex++)));
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionStreamInfo.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginStreamInfo} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginStreamInfo} method.
     * @return the result of the previously invoked action.
     */
    public StreamInfo endStreamInfo(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long streamId = Invocation.getOutputUint(aAsyncHandle, index++);
        boolean seekable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean pausable = Invocation.getOutputBool(aAsyncHandle, index++);
        return new StreamInfo(
            streamId,
            seekable,
            pausable
        );
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncStreamId()
    {
        SyncStreamIdAvOpenhomeOrgTransport1 sync = new SyncStreamIdAvOpenhomeOrgTransport1(this);
        beginStreamId(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getStreamId();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endStreamId}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginStreamId(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionStreamId, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionStreamId.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginStreamId} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginStreamId} method.
     * @return the result of the previously invoked action.
     */
    public long endStreamId(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long streamId = Invocation.getOutputUint(aAsyncHandle, index++);
        return streamId;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncRepeat()
    {
        SyncRepeatAvOpenhomeOrgTransport1 sync = new SyncRepeatAvOpenhomeOrgTransport1(this);
        beginRepeat(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getRepeat();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRepeat}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRepeat(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRepeat, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionRepeat.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRepeat} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRepeat} method.
     * @return the result of the previously invoked action.
     */
    public boolean endRepeat(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean repeat = Invocation.getOutputBool(aAsyncHandle, index++);
        return repeat;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public boolean syncRandom()
    {
        SyncRandomAvOpenhomeOrgTransport1 sync = new SyncRandomAvOpenhomeOrgTransport1(this);
        beginRandom(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getRandom();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endRandom}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginRandom(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionRandom, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentBool((ParameterBool)iActionRandom.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginRandom} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginRandom} method.
     * @return the result of the previously invoked action.
     */
    public boolean endRandom(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        boolean random = Invocation.getOutputBool(aAsyncHandle, index++);
        return random;
    }
        
    /**
     * Set a delegate to be run when the Modes state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aModesChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyModesChanged(IPropertyChangeListener aModesChanged)
    {
        synchronized (iPropertyLock)
        {
            iModesChanged = aModesChanged;
        }
    }

    private void modesPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iModesChanged);
        }
    }
    /**
     * Set a delegate to be run when the NextAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aNextAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyNextAvailableChanged(IPropertyChangeListener aNextAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iNextAvailableChanged = aNextAvailableChanged;
        }
    }

    private void nextAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iNextAvailableChanged);
        }
    }
    /**
     * Set a delegate to be run when the PrevAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aPrevAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPrevAvailableChanged(IPropertyChangeListener aPrevAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iPrevAvailableChanged = aPrevAvailableChanged;
        }
    }

    private void prevAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPrevAvailableChanged);
        }
    }
    /**
     * Set a delegate to be run when the RepeatAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aRepeatAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRepeatAvailableChanged(IPropertyChangeListener aRepeatAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iRepeatAvailableChanged = aRepeatAvailableChanged;
        }
    }

    private void repeatAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRepeatAvailableChanged);
        }
    }
    /**
     * Set a delegate to be run when the RandomAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aRandomAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRandomAvailableChanged(IPropertyChangeListener aRandomAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iRandomAvailableChanged = aRandomAvailableChanged;
        }
    }

    private void randomAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRandomAvailableChanged);
        }
    }
    /**
     * Set a delegate to be run when the StreamId state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aStreamIdChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyStreamIdChanged(IPropertyChangeListener aStreamIdChanged)
    {
        synchronized (iPropertyLock)
        {
            iStreamIdChanged = aStreamIdChanged;
        }
    }

    private void streamIdPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iStreamIdChanged);
        }
    }
    /**
     * Set a delegate to be run when the Seekable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aSeekableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertySeekableChanged(IPropertyChangeListener aSeekableChanged)
    {
        synchronized (iPropertyLock)
        {
            iSeekableChanged = aSeekableChanged;
        }
    }

    private void seekablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iSeekableChanged);
        }
    }
    /**
     * Set a delegate to be run when the Pausable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aPausableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPausableChanged(IPropertyChangeListener aPausableChanged)
    {
        synchronized (iPropertyLock)
        {
            iPausableChanged = aPausableChanged;
        }
    }

    private void pausablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPausableChanged);
        }
    }
    /**
     * Set a delegate to be run when the TransportState state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aTransportStateChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged)
    {
        synchronized (iPropertyLock)
        {
            iTransportStateChanged = aTransportStateChanged;
        }
    }

    private void transportStatePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iTransportStateChanged);
        }
    }
    /**
     * Set a delegate to be run when the Repeat state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aRepeatChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRepeatChanged(IPropertyChangeListener aRepeatChanged)
    {
        synchronized (iPropertyLock)
        {
            iRepeatChanged = aRepeatChanged;
        }
    }

    private void repeatPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRepeatChanged);
        }
    }
    /**
     * Set a delegate to be run when the Random state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aRandomChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyRandomChanged(IPropertyChangeListener aRandomChanged)
    {
        synchronized (iPropertyLock)
        {
            iRandomChanged = aRandomChanged;
        }
    }

    private void randomPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iRandomChanged);
        }
    }

    /**
     * Query the value of the Modes property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Modes property.
     */
    public String getPropertyModes()
    {
        propertyReadLock();
        String val = iModes.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the NextAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the NextAvailable property.
     */
    public boolean getPropertyNextAvailable()
    {
        propertyReadLock();
        boolean val = iNextAvailable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the PrevAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PrevAvailable property.
     */
    public boolean getPropertyPrevAvailable()
    {
        propertyReadLock();
        boolean val = iPrevAvailable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the RepeatAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RepeatAvailable property.
     */
    public boolean getPropertyRepeatAvailable()
    {
        propertyReadLock();
        boolean val = iRepeatAvailable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the RandomAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the RandomAvailable property.
     */
    public boolean getPropertyRandomAvailable()
    {
        propertyReadLock();
        boolean val = iRandomAvailable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the StreamId property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the StreamId property.
     */
    public long getPropertyStreamId()
    {
        propertyReadLock();
        long val = iStreamId.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Seekable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Seekable property.
     */
    public boolean getPropertySeekable()
    {
        propertyReadLock();
        boolean val = iSeekable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Pausable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Pausable property.
     */
    public boolean getPropertyPausable()
    {
        propertyReadLock();
        boolean val = iPausable.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the TransportState property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the TransportState property.
     */
    public String getPropertyTransportState()
    {
        propertyReadLock();
        String val = iTransportState.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Repeat property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Repeat property.
     */
    public boolean getPropertyRepeat()
    {
        propertyReadLock();
        boolean val = iRepeat.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Random property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Random property.
     */
    public boolean getPropertyRandom()
    {
        propertyReadLock();
        boolean val = iRandom.getValue();
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
            iActionPlayAs.destroy();
            iActionPlay.destroy();
            iActionPause.destroy();
            iActionStop.destroy();
            iActionNext.destroy();
            iActionPrev.destroy();
            iActionSetRepeat.destroy();
            iActionSetRandom.destroy();
            iActionSeekSecondsAbsolute.destroy();
            iActionSeekSecondsRelative.destroy();
            iActionTransportState.destroy();
            iActionModes.destroy();
            iActionModeInfo.destroy();
            iActionStreamInfo.destroy();
            iActionStreamId.destroy();
            iActionRepeat.destroy();
            iActionRandom.destroy();
            iModes.destroy();
            iNextAvailable.destroy();
            iPrevAvailable.destroy();
            iRepeatAvailable.destroy();
            iRandomAvailable.destroy();
            iStreamId.destroy();
            iSeekable.destroy();
            iPausable.destroy();
            iTransportState.destroy();
            iRepeat.destroy();
            iRandom.destroy();
        }
    }
}

