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
    public void syncSkipNext();
    public void beginSkipNext(ICpProxyListener aCallback);
    public void endSkipNext(long aAsyncHandle);
    public void syncSkipPrevious();
    public void beginSkipPrevious(ICpProxyListener aCallback);
    public void endSkipPrevious(long aAsyncHandle);
    public void syncSetRepeat(long aRepeat);
    public void beginSetRepeat(long aRepeat, ICpProxyListener aCallback);
    public void endSetRepeat(long aAsyncHandle);
    public void syncSetShuffle(long aShuffle);
    public void beginSetShuffle(long aShuffle, ICpProxyListener aCallback);
    public void endSetShuffle(long aAsyncHandle);
    public void syncSeekSecondAbsolute(long aStreamId, long aSecondAbsolute);
    public void beginSeekSecondAbsolute(long aStreamId, long aSecondAbsolute, ICpProxyListener aCallback);
    public void endSeekSecondAbsolute(long aAsyncHandle);
    public void syncSeekSecondRelative(long aStreamId, int aSecondRelative);
    public void beginSeekSecondRelative(long aStreamId, int aSecondRelative, ICpProxyListener aCallback);
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
    public void setPropertyCanSkipNextChanged(IPropertyChangeListener aCanSkipNextChanged);
    public boolean getPropertyCanSkipNext();
    public void setPropertyCanSkipPreviousChanged(IPropertyChangeListener aCanSkipPreviousChanged);
    public boolean getPropertyCanSkipPrevious();
    public void setPropertyCanRepeatChanged(IPropertyChangeListener aCanRepeatChanged);
    public boolean getPropertyCanRepeat();
    public void setPropertyCanShuffleChanged(IPropertyChangeListener aCanShuffleChanged);
    public boolean getPropertyCanShuffle();
    public void setPropertyStreamIdChanged(IPropertyChangeListener aStreamIdChanged);
    public long getPropertyStreamId();
    public void setPropertyCanSeekChanged(IPropertyChangeListener aCanSeekChanged);
    public boolean getPropertyCanSeek();
    public void setPropertyCanPauseChanged(IPropertyChangeListener aCanPauseChanged);
    public boolean getPropertyCanPause();
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

class SyncSkipNextAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSkipNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSkipNext(aAsyncHandle);
        
    }
}

class SyncSkipPreviousAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;

    public SyncSkipPreviousAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        iService.endSkipPrevious(aAsyncHandle);
        
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
    private boolean iCanSkipNext;
    private boolean iCanSkipPrevious;
    private boolean iCanRepeat;
    private boolean iCanShuffle;

    public SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public boolean getCanSkipNext()
    {
        return iCanSkipNext;
    }
    public boolean getCanSkipPrevious()
    {
        return iCanSkipPrevious;
    }
    public boolean getCanRepeat()
    {
        return iCanRepeat;
    }
    public boolean getCanShuffle()
    {
        return iCanShuffle;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        ModeInfo result = iService.endModeInfo(aAsyncHandle);
        
        iCanSkipNext = result.getCanSkipNext();
        iCanSkipPrevious = result.getCanSkipPrevious();
        iCanRepeat = result.getCanRepeat();
        iCanShuffle = result.getCanShuffle();
    }
}

class SyncStreamInfoAvOpenhomeOrgTransport1 extends SyncProxyAction
{
    private CpProxyAvOpenhomeOrgTransport1 iService;
    private long iStreamId;
    private boolean iCanSeek;
    private boolean iCanPause;

    public SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1 aProxy)
    {
        iService = aProxy;
    }
    public long getStreamId()
    {
        return iStreamId;
    }
    public boolean getCanSeek()
    {
        return iCanSeek;
    }
    public boolean getCanPause()
    {
        return iCanPause;
    }
    protected void completeRequest(long aAsyncHandle)
    {
        StreamInfo result = iService.endStreamInfo(aAsyncHandle);
        
        iStreamId = result.getStreamId();
        iCanSeek = result.getCanSeek();
        iCanPause = result.getCanPause();
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
        private boolean iCanSkipNext;
        private boolean iCanSkipPrevious;
        private boolean iCanRepeat;
        private boolean iCanShuffle;

        public ModeInfo(
            boolean aCanSkipNext,
            boolean aCanSkipPrevious,
            boolean aCanRepeat,
            boolean aCanShuffle
        )
        {
            iCanSkipNext = aCanSkipNext;
            iCanSkipPrevious = aCanSkipPrevious;
            iCanRepeat = aCanRepeat;
            iCanShuffle = aCanShuffle;
        }
        public boolean getCanSkipNext()
        {
            return iCanSkipNext;
        }
        public boolean getCanSkipPrevious()
        {
            return iCanSkipPrevious;
        }
        public boolean getCanRepeat()
        {
            return iCanRepeat;
        }
        public boolean getCanShuffle()
        {
            return iCanShuffle;
        }
    }

    public class StreamInfo
    {
        private long iStreamId;
        private boolean iCanSeek;
        private boolean iCanPause;

        public StreamInfo(
            long aStreamId,
            boolean aCanSeek,
            boolean aCanPause
        )
        {
            iStreamId = aStreamId;
            iCanSeek = aCanSeek;
            iCanPause = aCanPause;
        }
        public long getStreamId()
        {
            return iStreamId;
        }
        public boolean getCanSeek()
        {
            return iCanSeek;
        }
        public boolean getCanPause()
        {
            return iCanPause;
        }
    }

    private Action iActionPlayAs;
    private Action iActionPlay;
    private Action iActionPause;
    private Action iActionStop;
    private Action iActionSkipNext;
    private Action iActionSkipPrevious;
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
    private PropertyBool iCanSkipNext;
    private PropertyBool iCanSkipPrevious;
    private PropertyBool iCanRepeat;
    private PropertyBool iCanShuffle;
    private PropertyUint iStreamId;
    private PropertyBool iCanSeek;
    private PropertyBool iCanPause;
    private PropertyString iTransportState;
    private PropertyUint iRepeat;
    private PropertyUint iShuffle;
    private IPropertyChangeListener iModesChanged;
    private IPropertyChangeListener iCanSkipNextChanged;
    private IPropertyChangeListener iCanSkipPreviousChanged;
    private IPropertyChangeListener iCanRepeatChanged;
    private IPropertyChangeListener iCanShuffleChanged;
    private IPropertyChangeListener iStreamIdChanged;
    private IPropertyChangeListener iCanSeekChanged;
    private IPropertyChangeListener iCanPauseChanged;
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

        iActionSkipNext = new Action("SkipNext");

        iActionSkipPrevious = new Action("SkipPrevious");

        iActionSetRepeat = new Action("SetRepeat");
        param = new ParameterUint("Repeat");
        iActionSetRepeat.addInputParameter(param);

        iActionSetShuffle = new Action("SetShuffle");
        param = new ParameterUint("Shuffle");
        iActionSetShuffle.addInputParameter(param);

        iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
        param = new ParameterUint("StreamId");
        iActionSeekSecondAbsolute.addInputParameter(param);
        param = new ParameterUint("SecondAbsolute");
        iActionSeekSecondAbsolute.addInputParameter(param);

        iActionSeekSecondRelative = new Action("SeekSecondRelative");
        param = new ParameterUint("StreamId");
        iActionSeekSecondRelative.addInputParameter(param);
        param = new ParameterInt("SecondRelative");
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
        param = new ParameterBool("CanSkipNext");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("CanSkipPrevious");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("CanRepeat");
        iActionModeInfo.addOutputParameter(param);
        param = new ParameterBool("CanShuffle");
        iActionModeInfo.addOutputParameter(param);

        iActionStreamInfo = new Action("StreamInfo");
        param = new ParameterUint("StreamId");
        iActionStreamInfo.addOutputParameter(param);
        param = new ParameterBool("CanSeek");
        iActionStreamInfo.addOutputParameter(param);
        param = new ParameterBool("CanPause");
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
        iCanSkipNextChanged = new PropertyChangeListener();
        iCanSkipNext = new PropertyBool("CanSkipNext",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canSkipNextPropertyChanged();
                }
            }
        );
        addProperty(iCanSkipNext);
        iCanSkipPreviousChanged = new PropertyChangeListener();
        iCanSkipPrevious = new PropertyBool("CanSkipPrevious",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canSkipPreviousPropertyChanged();
                }
            }
        );
        addProperty(iCanSkipPrevious);
        iCanRepeatChanged = new PropertyChangeListener();
        iCanRepeat = new PropertyBool("CanRepeat",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canRepeatPropertyChanged();
                }
            }
        );
        addProperty(iCanRepeat);
        iCanShuffleChanged = new PropertyChangeListener();
        iCanShuffle = new PropertyBool("CanShuffle",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canShufflePropertyChanged();
                }
            }
        );
        addProperty(iCanShuffle);
        iStreamIdChanged = new PropertyChangeListener();
        iStreamId = new PropertyUint("StreamId",
            new PropertyChangeListener() {
                public void notifyChange() {
                    streamIdPropertyChanged();
                }
            }
        );
        addProperty(iStreamId);
        iCanSeekChanged = new PropertyChangeListener();
        iCanSeek = new PropertyBool("CanSeek",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canSeekPropertyChanged();
                }
            }
        );
        addProperty(iCanSeek);
        iCanPauseChanged = new PropertyChangeListener();
        iCanPause = new PropertyBool("CanPause",
            new PropertyChangeListener() {
                public void notifyChange() {
                    canPausePropertyChanged();
                }
            }
        );
        addProperty(iCanPause);
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
    public void syncSkipNext()
    {
        SyncSkipNextAvOpenhomeOrgTransport1 sync = new SyncSkipNextAvOpenhomeOrgTransport1(this);
        beginSkipNext(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSkipNext}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSkipNext(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSkipNext, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSkipNext} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSkipNext} method.
     */
    public void endSkipNext(long aAsyncHandle)
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
    public void syncSkipPrevious()
    {
        SyncSkipPreviousAvOpenhomeOrgTransport1 sync = new SyncSkipPreviousAvOpenhomeOrgTransport1(this);
        beginSkipPrevious(sync.getListener());
        sync.waitToComplete();
        sync.reportError();
    }
    
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the
     * action later completes.  Any output arguments can then be retrieved by
     * calling {@link #endSkipPrevious}.
     * 
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSkipPrevious(ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSkipPrevious, aCallback);
        iService.invokeAction(invocation);
    }

    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the
     * {@link #beginSkipPrevious} method.
     *
     * @param aAsyncHandle  argument passed to the delegate set in the
     *          {@link #beginSkipPrevious} method.
     */
    public void endSkipPrevious(long aAsyncHandle)
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
    public void syncSetRepeat(long aRepeat)
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
    public void beginSetRepeat(long aRepeat, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetRepeat, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetRepeat.getInputParameter(inIndex++), aRepeat));
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
    public void syncSetShuffle(long aShuffle)
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
    public void beginSetShuffle(long aShuffle, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSetShuffle, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSetShuffle.getInputParameter(inIndex++), aShuffle));
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
    public void syncSeekSecondAbsolute(long aStreamId, long aSecondAbsolute)
    {
        SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 sync = new SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(this);
        beginSeekSecondAbsolute(aStreamId, aSecondAbsolute, sync.getListener());
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
     * @param aSecondAbsolute
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondAbsolute(long aStreamId, long aSecondAbsolute, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondAbsolute, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondAbsolute.getInputParameter(inIndex++), aSecondAbsolute));
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
    public void syncSeekSecondRelative(long aStreamId, int aSecondRelative)
    {
        SyncSeekSecondRelativeAvOpenhomeOrgTransport1 sync = new SyncSeekSecondRelativeAvOpenhomeOrgTransport1(this);
        beginSeekSecondRelative(aStreamId, aSecondRelative, sync.getListener());
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
     * @param aSecondRelative
     * @param aCallback listener to call back when action completes.
     *                  This is guaranteed to be run but may indicate an error.
     */
    public void beginSeekSecondRelative(long aStreamId, int aSecondRelative, ICpProxyListener aCallback)
    {
        Invocation invocation = iService.getInvocation(iActionSeekSecondRelative, aCallback);
        int inIndex = 0;
        invocation.addInput(new ArgumentUint((ParameterUint)iActionSeekSecondRelative.getInputParameter(inIndex++), aStreamId));
        invocation.addInput(new ArgumentInt((ParameterInt)iActionSeekSecondRelative.getInputParameter(inIndex++), aSecondRelative));
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
            sync.getCanSkipNext(),
            sync.getCanSkipPrevious(),
            sync.getCanRepeat(),
            sync.getCanShuffle()
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
        boolean canSkipNext = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean canSkipPrevious = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean canRepeat = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean canShuffle = Invocation.getOutputBool(aAsyncHandle, index++);
        return new ModeInfo(
            canSkipNext,
            canSkipPrevious,
            canRepeat,
            canShuffle
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
            sync.getCanSeek(),
            sync.getCanPause()
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
        boolean canSeek = Invocation.getOutputBool(aAsyncHandle, index++);
        boolean canPause = Invocation.getOutputBool(aAsyncHandle, index++);
        return new StreamInfo(
            streamId,
            canSeek,
            canPause
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
     * Set a delegate to be run when the CanSkipNext state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanSkipNextChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanSkipNextChanged(IPropertyChangeListener aCanSkipNextChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanSkipNextChanged = aCanSkipNextChanged;
        }
    }

    private void canSkipNextPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanSkipNextChanged);
        }
    }
    /**
     * Set a delegate to be run when the CanSkipPrevious state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanSkipPreviousChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanSkipPreviousChanged(IPropertyChangeListener aCanSkipPreviousChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanSkipPreviousChanged = aCanSkipPreviousChanged;
        }
    }

    private void canSkipPreviousPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanSkipPreviousChanged);
        }
    }
    /**
     * Set a delegate to be run when the CanRepeat state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanRepeatChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanRepeatChanged(IPropertyChangeListener aCanRepeatChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanRepeatChanged = aCanRepeatChanged;
        }
    }

    private void canRepeatPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanRepeatChanged);
        }
    }
    /**
     * Set a delegate to be run when the CanShuffle state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanShuffleChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanShuffleChanged(IPropertyChangeListener aCanShuffleChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanShuffleChanged = aCanShuffleChanged;
        }
    }

    private void canShufflePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanShuffleChanged);
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
     * Set a delegate to be run when the CanSeek state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanSeekChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanSeekChanged(IPropertyChangeListener aCanSeekChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanSeekChanged = aCanSeekChanged;
        }
    }

    private void canSeekPropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanSeekChanged);
        }
    }
    /**
     * Set a delegate to be run when the CanPause state variable changes.
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param aCanPauseChanged   the listener to call back when the state
     *          variable changes.
     */
    public void setPropertyCanPauseChanged(IPropertyChangeListener aCanPauseChanged)
    {
        synchronized (iPropertyLock)
        {
            iCanPauseChanged = aCanPauseChanged;
        }
    }

    private void canPausePropertyChanged()
    {
        synchronized (iPropertyLock)
        {
            reportEvent(iCanPauseChanged);
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
     * Query the value of the CanSkipNext property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanSkipNext property.
     */
    public boolean getPropertyCanSkipNext()
    {
        propertyReadLock();
        boolean val = iCanSkipNext.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CanSkipPrevious property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanSkipPrevious property.
     */
    public boolean getPropertyCanSkipPrevious()
    {
        propertyReadLock();
        boolean val = iCanSkipPrevious.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CanRepeat property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanRepeat property.
     */
    public boolean getPropertyCanRepeat()
    {
        propertyReadLock();
        boolean val = iCanRepeat.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CanShuffle property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanShuffle property.
     */
    public boolean getPropertyCanShuffle()
    {
        propertyReadLock();
        boolean val = iCanShuffle.getValue();
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
     * Query the value of the CanSeek property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanSeek property.
     */
    public boolean getPropertyCanSeek()
    {
        propertyReadLock();
        boolean val = iCanSeek.getValue();
        propertyReadUnlock();
        return val;
    }
    
    /**
     * Query the value of the CanPause property.
     * This function is thread-safe and can only be called if {@link 
     * #subscribe} has been called and a first eventing callback received
     * more recently than any call to {@link #unsubscribe}.
     *
     * @return  value of the CanPause property.
     */
    public boolean getPropertyCanPause()
    {
        propertyReadLock();
        boolean val = iCanPause.getValue();
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
            iActionSkipNext.destroy();
            iActionSkipPrevious.destroy();
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
            iCanSkipNext.destroy();
            iCanSkipPrevious.destroy();
            iCanRepeat.destroy();
            iCanShuffle.destroy();
            iStreamId.destroy();
            iCanSeek.destroy();
            iCanPause.destroy();
            iTransportState.destroy();
            iRepeat.destroy();
            iShuffle.destroy();
        }
    }
}

