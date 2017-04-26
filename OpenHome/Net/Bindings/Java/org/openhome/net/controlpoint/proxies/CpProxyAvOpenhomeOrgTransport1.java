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
    public void syncNext();
    public void beginNext(ICpProxyListener aCallback);
    public void endNext(long aAsyncHandle);
    public void syncPrevious();
    public void beginPrevious(ICpProxyListener aCallback);
    public void endPrevious(long aAsyncHandle);
    public void syncSetRepeat(boolean aRepeat);
    public void beginSetRepeat(boolean aRepeat, ICpProxyListener aCallback);
    public void endSetRepeat(long aAsyncHandle);
    public void syncSetShuffle(boolean aShuffle);
    public void beginSetShuffle(boolean aShuffle, ICpProxyListener aCallback);
    public void endSetShuffle(long aAsyncHandle);
    public void syncSeekSecondAbsolute(long aStreamId, long aSecondsAbsolute);
    public void beginSeekSecondAbsolute(long aStreamId, long aSecondsAbsolute, ICpProxyListener aCallback);
    public void endSeekSecondAbsolute(long aAsyncHandle);
    public void syncSeekSecondRelative(long aStreamId, int aSecondsRelative);
    public void beginSeekSecondRelative(long aStreamId, int aSecondsRelative, ICpProxyListener aCallback);
    public void endSeekSecondRelative(long aAsyncHandle);
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
    public long syncRepeat();
    public void beginRepeat(ICpProxyListener aCallback);
    public long endRepeat(long aAsyncHandle);
    public long syncShuffle();
    public void beginShuffle(ICpProxyListener aCallback);
    public long endShuffle(long aAsyncHandle);
    public void setPropertyModesChanged(IPropertyChangeListener aModesChanged);
    public String getPropertyModes();
    public void setPropertyNextAvailableChanged(IPropertyChangeListener aNextAvailableChanged);
    public boolean getPropertyNextAvailable();
    public void setPropertyPreviousAvailableChanged(IPropertyChangeListener aPreviousAvailableChanged);
    public boolean getPropertyPreviousAvailable();
    public void setPropertyRepeatAvailableChanged(IPropertyChangeListener aRepeatAvailableChanged);
    public boolean getPropertyRepeatAvailable();
    public void setPropertyShuffleAvailableChanged(IPropertyChangeListener aShuffleAvailableChanged);
    public boolean getPropertyShuffleAvailable();
    public void setPropertyStreamIdChanged(IPropertyChangeListener aStreamIdChanged);
    public long getPropertyStreamId();
    public void setPropertySeekableChanged(IPropertyChangeListener aSeekableChanged);
    public boolean getPropertySeekable();
    public void setPropertyPausableChanged(IPropertyChangeListener aPausableChanged);
    public boolean getPropertyPausable();
    public void setPropertyTransportStateChanged(IPropertyChangeListener aTransportStateChanged);
    public String getPropertyTransportState();
    public void setPropertyRepeatChanged(IPropertyChangeListener aRepeatChanged);
    public long getPropertyRepeat();
    public void setPropertyShuffleChanged(IPropertyChangeListener aShuffleChanged);
    public long getPropertyShuffle();
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

class SyncPreviousAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncPreviousAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endPrevious(aAsyncHandle);
        
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

class SyncSetShuffleAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSetShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSetShuffle(aAsyncHandle);
        
    }
}

class SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondAbsolute(aAsyncHandle);
        
    }
}

class SyncSeekSecondRelativeAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSeekSecondRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSeekSecondRelative(aAsyncHandle);
        
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
    private boolean iPreviousAvailable;
    private boolean iRepeatAvailable;
    private boolean iShuffleAvailable;

    public SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getNextAvailable()
    {
        return iNextAvailable;
    }
    public boolean getPreviousAvailable()
    {
        return iPreviousAvailable;
    }
    public boolean getRepeatAvailable()
    {
        return iRepeatAvailable;
    }
    public boolean getShuffleAvailable()
    {
        return iShuffleAvailable;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        ModeInfo result = iService.endModeInfo(aAsyncHandle);
        
        iNextAvailable = result.getNextAvailable();
        iPreviousAvailable = result.getPreviousAvailable();
        iRepeatAvailable = result.getRepeatAvailable();
        iShuffleAvailable = result.getShuffleAvailable();
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
    private long iRepeat;

    public SyncRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public long getRepeat()
    {
        return iRepeat;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endRepeat(aAsyncHandle);
        
        iRepeat = result;
    }
}

class SyncShuffleAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private long iShuffle;

    public SyncShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public long getShuffle()
    {
        return iShuffle;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        long result = iService.endShuffle(aAsyncHandle);
        
        iShuffle = result;
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
        private boolean iPreviousAvailable;
        private boolean iRepeatAvailable;
        private boolean iShuffleAvailable;

        public ModeInfo(
            boolean aNextAvailable,
            boolean aPreviousAvailable,
            boolean aRepeatAvailable,
            boolean aShuffleAvailable
        )
        {
            iNextAvailable = aNextAvailable;
            iPreviousAvailable = aPreviousAvailable;
            iRepeatAvailable = aRepeatAvailable;
            iShuffleAvailable = aShuffleAvailable;
        }
        public boolean getNextAvailable()
        {
            return iNextAvailable;
        }
        public boolean getPreviousAvailable()
        {
            return iPreviousAvailable;
        }
        public boolean getRepeatAvailable()
        {
            return iRepeatAvailable;
        }
        public boolean getShuffleAvailable()
        {
            return iShuffleAvailable;
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
    private Action iActionPrevious;
    private Action iActionSetRepeat;
    private Action iActionSetShuffle;
    private Action iActionSeekSecondAbsolute;
    private Action iActionSeekSecondRelative;
    private Action iActionTransportState;
    private Action iActionModes;
    private Action iActionModeInfo;
    private Action iActionStreamInfo;
    private Action iActionStreamId;
    private Action iActionRepeat;
    private Action iActionShuffle;
    private PropertyString iModes;
    private PropertyBool iNextAvailable;
    private PropertyBool iPreviousAvailable;
    private PropertyBool iRepeatAvailable;
    private PropertyBool iShuffleAvailable;
    private PropertyUint iStreamId;
    private PropertyBool iSeekable;
    private PropertyBool iPausable;
    private PropertyString iTransportState;
    private PropertyUint iRepeat;
    private PropertyUint iShuffle;
    private IPropertyChangeListener iModesChanged;
    private IPropertyChangeListener iNextAvailableChanged;
    private IPropertyChangeListener iPreviousAvailableChanged;
    private IPropertyChangeListener iRepeatAvailableChanged;
    private IPropertyChangeListener iShuffleAvailableChanged;
    private IPropertyChangeListener iStreamIdChanged;
    private IPropertyChangeListener iSeekableChanged;
    private IPropertyChangeListener iPausableChanged;
    private IPropertyChangeListener iTransportStateChanged;
    private IPropertyChangeListener iRepeatChanged;
    private IPropertyChangeListener iShuffleChanged;
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

        iActionPrevious = new Action("Previous");

        iActionSetRepeat = new Action("SetRepeat");
        param = new ParameterBool("Repeat");
        iActionSetRepeat.addInputParameter(param);

        iActionSetShuffle = new Action("SetShuffle");
        param = new ParameterBool("Shuffle");
        iActionSetShuffle.addInputParameter(param);

        iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
        param = new ParameterUint("StreamId");
        iActionSeekSecondAbsolute.addInputParameter(param);
        param = new ParameterUint("SecondsAbsolute");
        iActionSeekSecondAbsolute.addInputParameter(param);

        iActionSeekSecondRelative = new Action("SeekSecondRelative");
        param = new ParameterUint("StreamId");
        iActionSeekSecondRelative.addInputParameter(param);
        param = new ParameterInt("SecondsRelative");
        iActionSeekSecondRelative.addInputParameter(param);

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
        param = new ParameterBool("PreviousAvailable");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("RepeatAvailable");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("ShuffleAvailable");
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
        param = new ParameterUint("Repeat");
        iActionRepeat.addOutputParameter(param);

        iActionShuffle = new Action("Shuffle");
        param = new ParameterUint("Shuffle");
        iActionShuffle.addOutputParameter(param);

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
        iPreviousAvailableChanged = new PropertyChangeListener();
        iPreviousAvailable = new PropertyBool("PreviousAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    previousAvailablePropertyChanged();
                }
            }
        );
        addProperty(iPreviousAvailable);
        iRepeatAvailableChanged = new PropertyChangeListener();
        iRepeatAvailable = new PropertyBool("RepeatAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatAvailablePropertyChanged();
                }
            }
        );
        addProperty(iRepeatAvailable);
        iShuffleAvailableChanged = new PropertyChangeListener();
        iShuffleAvailable = new PropertyBool("ShuffleAvailable",
            new PropertyChangeListener() {
                public void notifyChange() {
                    shuffleAvailablePropertyChanged();
                }
            }
        );
        addProperty(iShuffleAvailable);
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
        iRepeat = new PropertyUint("Repeat",
            new PropertyChangeListener() {
                public void notifyChange() {
                    repeatPropertyChanged();
                }
            }
        );
        addProperty(iRepeat);
        iShuffleChanged = new PropertyChangeListener();
        iShuffle = new PropertyUint("Shuffle",
            new PropertyChangeListener() {
                public void notifyChange() {
                    shufflePropertyChanged();
                }
            }
        );
        addProperty(iShuffle);
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
    public void syncNext()
    {
        SyncNextAvOpenhomeOrgTransport1 sync = new SyncNextAvOpenhomeOrgTransport1(this);
        beginNext(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endNext}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginNext(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionNext, aCallback);
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
    public void syncPrevious()
    {
        SyncPreviousAvOpenhomeOrgTransport1 sync = new SyncPreviousAvOpenhomeOrgTransport1(this);
        beginPrevious(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endPrevious}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginPrevious(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionPrevious, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginPrevious} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginPrevious} method.
     */
    public void endPrevious(long aAsyncHandle)
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
    public void syncSetShuffle(boolean aShuffle)
    {
        SyncSetShuffleAvOpenhomeOrgTransport1 sync = new SyncSetShuffleAvOpenhomeOrgTransport1(this);
        beginSetShuffle(aShuffle, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSetShuffle}.
     * 
     * @param aShuffle
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSetShuffle(boolean aShuffle, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetShuffle, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentBool((ParameterBool)iActionSetShuffle.getInputParameter(inIndex++), aShuffle));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSetShuffle} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSetShuffle} method.
     */
    public void endSetShuffle(long aAsyncHandle)
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
    public void syncSeekSecondAbsolute(long aStreamId, long aSecondsAbsolute)
    {
        SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(this);
        beginSeekSecondAbsolute(aStreamId, aSecondsAbsolute, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondAbsolute}.
     * 
     * @param aStreamId
     * @param aSecondsAbsolute
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondAbsolute(long aStreamId, long aSecondsAbsolute, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondAbsolute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.getInputParameter(inIndex++), aSecondsAbsolute));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondAbsolute} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondAbsolute} method.
     */
    public void endSeekSecondAbsolute(long aAsyncHandle)
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
    public void syncSeekSecondRelative(long aStreamId, int aSecondsRelative)
    {
        SyncSeekSecondRelativeAvOpenhomeOrgTransport1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgTransport1(this);
        beginSeekSecondRelative(aStreamId, aSecondsRelative, sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSeekSecondRelative}.
     * 
     * @param aStreamId
     * @param aSecondsRelative
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondRelative(long aStreamId, int aSecondsRelative, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondRelative, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondRelative.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSeekSecondRelative.getInputParameter(inIndex++), aSecondsRelative));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSeekSecondRelative} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSeekSecondRelative} method.
     */
    public void endSeekSecondRelative(long aAsyncHandle)
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
            sync.getPreviousAvailable(),
            sync.getRepeatAvailable(),
            sync.getShuffleAvailable()
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
        boolean previousAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean repeatAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean shuffleAvailable = Invocation.getOutputBool(aAsyncHandle, index++);
        return new ModeInfo(
            nextAvailable,
            previousAvailable,
            repeatAvailable,
            shuffleAvailable
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
    public long syncRepeat()
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
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionRepeat.getOutputParameter(outIndex++)));
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
    public long endRepeat(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long repeat = Invocation.getOutputUint(aAsyncHandle, index++);
        return repeat;
    }
        
    /**
     * Invoke the action synchronously.
     * Blocks until the action has been processed on the device and sets any
     * output arguments.
     *
     * @return the result of the invoked action.
     */
    public long syncShuffle()
    {
        SyncShuffleAvOpenhomeOrgTransport1 sync = new SyncShuffleAvOpenhomeOrgTransport1(this);
        beginShuffle(sync.getListener());
        sync.waitToComplete();
        sync.reportError();

        return sync.getShuffle();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endShuffle}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginShuffle(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionShuffle, aCallback);
        int outIndex = 0;
        invocation.addOutput(new ArgumentUint((ParameterUint)iActionShuffle.getOutputParameter(outIndex++)));
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginShuffle} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginShuffle} method.
     * @return the result of the previously invoked action.
     */
    public long endShuffle(long aAsyncHandle)
    {
        ProxyError errObj = Invocation.error(aAsyncHandle);
        if (errObj != null)
        {
            throw errObj;
        }
        int index = 0;
        long shuffle = Invocation.getOutputUint(aAsyncHandle, index++);
        return shuffle;
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
     * Set a delegate to be run when the PreviousAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aPreviousAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyPreviousAvailableChanged(IPropertyChangeListener aPreviousAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iPreviousAvailableChanged = aPreviousAvailableChanged;
        }
    }

    private void previousAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iPreviousAvailableChanged);
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
     * Set a delegate to be run when the ShuffleAvailable state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aShuffleAvailableChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyShuffleAvailableChanged(IPropertyChangeListener aShuffleAvailableChanged)
    {
        synchronized (iPropertyLock)
        {
            iShuffleAvailableChanged = aShuffleAvailableChanged;
        }
    }

    private void shuffleAvailablePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iShuffleAvailableChanged);
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
     * Set a delegate to be run when the Shuffle state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aShuffleChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyShuffleChanged(IPropertyChangeListener aShuffleChanged)
    {
        synchronized (iPropertyLock)
        {
            iShuffleChanged = aShuffleChanged;
        }
    }

    private void shufflePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iShuffleChanged);
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
     * Query the value of the PreviousAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the PreviousAvailable property.
     */
    public boolean getPropertyPreviousAvailable()
    {
        propertyReadLock();
        boolean val = iPreviousAvailable.getValue();
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
     * Query the value of the ShuffleAvailable property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the ShuffleAvailable property.
     */
    public boolean getPropertyShuffleAvailable()
    {
        propertyReadLock();
        boolean val = iShuffleAvailable.getValue();
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
    public long getPropertyRepeat()
    {
        propertyReadLock();
        long val = iRepeat.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the Shuffle property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the Shuffle property.
     */
    public long getPropertyShuffle()
    {
        propertyReadLock();
        long val = iShuffle.getValue();
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
            iActionPrevious.destroy();
            iActionSetRepeat.destroy();
            iActionSetShuffle.destroy();
            iActionSeekSecondAbsolute.destroy();
            iActionSeekSecondRelative.destroy();
            iActionTransportState.destroy();
            iActionModes.destroy();
            iActionModeInfo.destroy();
            iActionStreamInfo.destroy();
            iActionStreamId.destroy();
            iActionRepeat.destroy();
            iActionShuffle.destroy();
            iModes.destroy();
            iNextAvailable.destroy();
            iPreviousAvailable.destroy();
            iRepeatAvailable.destroy();
            iShuffleAvailable.destroy();
            iStreamId.destroy();
            iSeekable.destroy();
            iPausable.destroy();
            iTransportState.destroy();
            iRepeat.destroy();
            iShuffle.destroy();
        }
    }
}

