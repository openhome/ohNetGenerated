package org.openhome.net.device.providers;

import java.util.LinkedList;
import java.util.List;

import org.openhome.net.core.*;
import org.openhome.net.device.*;

interface IDvProviderAvOpenhomeOrgTransport1
{

    /**
     * Set the value of the Modes property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyModes(String aValue);

    /**
     * Get a copy of the value of the Modes property
     *
     * @return value of the Modes property.
     */
    public String getPropertyModes();

    /**
     * Set the value of the CanSkipNext property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanSkipNext(boolean aValue);

    /**
     * Get a copy of the value of the CanSkipNext property
     *
     * @return value of the CanSkipNext property.
     */
    public boolean getPropertyCanSkipNext();

    /**
     * Set the value of the CanSkipPrevious property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanSkipPrevious(boolean aValue);

    /**
     * Get a copy of the value of the CanSkipPrevious property
     *
     * @return value of the CanSkipPrevious property.
     */
    public boolean getPropertyCanSkipPrevious();

    /**
     * Set the value of the CanRepeat property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanRepeat(boolean aValue);

    /**
     * Get a copy of the value of the CanRepeat property
     *
     * @return value of the CanRepeat property.
     */
    public boolean getPropertyCanRepeat();

    /**
     * Set the value of the CanShuffle property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanShuffle(boolean aValue);

    /**
     * Get a copy of the value of the CanShuffle property
     *
     * @return value of the CanShuffle property.
     */
    public boolean getPropertyCanShuffle();

    /**
     * Set the value of the StreamId property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyStreamId(long aValue);

    /**
     * Get a copy of the value of the StreamId property
     *
     * @return value of the StreamId property.
     */
    public long getPropertyStreamId();

    /**
     * Set the value of the CanSeek property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanSeek(boolean aValue);

    /**
     * Get a copy of the value of the CanSeek property
     *
     * @return value of the CanSeek property.
     */
    public boolean getPropertyCanSeek();

    /**
     * Set the value of the CanPause property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyCanPause(boolean aValue);

    /**
     * Get a copy of the value of the CanPause property
     *
     * @return value of the CanPause property.
     */
    public boolean getPropertyCanPause();

    /**
     * Set the value of the TransportState property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyTransportState(String aValue);

    /**
     * Get a copy of the value of the TransportState property
     *
     * @return value of the TransportState property.
     */
    public String getPropertyTransportState();

    /**
     * Set the value of the Repeat property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRepeat(long aValue);

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return value of the Repeat property.
     */
    public long getPropertyRepeat();

    /**
     * Set the value of the Shuffle property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyShuffle(long aValue);

    /**
     * Get a copy of the value of the Shuffle property
     *
     * @return value of the Shuffle property.
     */
    public long getPropertyShuffle();
        
}

/**
 * Provider for the av.openhome.org:Transport:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgTransport1 extends DvProvider implements IDvProviderAvOpenhomeOrgTransport1
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

    private IDvInvocationListener iDelegatePlayAs;
    private IDvInvocationListener iDelegatePlay;
    private IDvInvocationListener iDelegatePause;
    private IDvInvocationListener iDelegateStop;
    private IDvInvocationListener iDelegateSkipNext;
    private IDvInvocationListener iDelegateSkipPrevious;
    private IDvInvocationListener iDelegateSetRepeat;
    private IDvInvocationListener iDelegateSetShuffle;
    private IDvInvocationListener iDelegateSeekSecondAbsolute;
    private IDvInvocationListener iDelegateSeekSecondRelative;
    private IDvInvocationListener iDelegateTransportState;
    private IDvInvocationListener iDelegateModes;
    private IDvInvocationListener iDelegateModeInfo;
    private IDvInvocationListener iDelegateStreamInfo;
    private IDvInvocationListener iDelegateStreamId;
    private IDvInvocationListener iDelegateRepeat;
    private IDvInvocationListener iDelegateShuffle;
    private PropertyString iPropertyModes;
    private PropertyBool iPropertyCanSkipNext;
    private PropertyBool iPropertyCanSkipPrevious;
    private PropertyBool iPropertyCanRepeat;
    private PropertyBool iPropertyCanShuffle;
    private PropertyUint iPropertyStreamId;
    private PropertyBool iPropertyCanSeek;
    private PropertyBool iPropertyCanPause;
    private PropertyString iPropertyTransportState;
    private PropertyUint iPropertyRepeat;
    private PropertyUint iPropertyShuffle;

    /**
     * Constructor
     *
     * @param aDevice   device which owns this provider.
     */
    protected DvProviderAvOpenhomeOrgTransport1(DvDevice aDevice)
    {
        super(aDevice, "av.openhome.org", "Transport", 1);
    }

    /**
     * Enable the Modes property.
     */
    public void enablePropertyModes()
    {
        List<String> allowedValues = new LinkedList<String>();
        iPropertyModes = new PropertyString(new ParameterString("Modes", allowedValues));
        addProperty(iPropertyModes);
    }

    /**
     * Enable the CanSkipNext property.
     */
    public void enablePropertyCanSkipNext()
    {
        iPropertyCanSkipNext = new PropertyBool(new ParameterBool("CanSkipNext"));
        addProperty(iPropertyCanSkipNext);
    }

    /**
     * Enable the CanSkipPrevious property.
     */
    public void enablePropertyCanSkipPrevious()
    {
        iPropertyCanSkipPrevious = new PropertyBool(new ParameterBool("CanSkipPrevious"));
        addProperty(iPropertyCanSkipPrevious);
    }

    /**
     * Enable the CanRepeat property.
     */
    public void enablePropertyCanRepeat()
    {
        iPropertyCanRepeat = new PropertyBool(new ParameterBool("CanRepeat"));
        addProperty(iPropertyCanRepeat);
    }

    /**
     * Enable the CanShuffle property.
     */
    public void enablePropertyCanShuffle()
    {
        iPropertyCanShuffle = new PropertyBool(new ParameterBool("CanShuffle"));
        addProperty(iPropertyCanShuffle);
    }

    /**
     * Enable the StreamId property.
     */
    public void enablePropertyStreamId()
    {
        iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
        addProperty(iPropertyStreamId);
    }

    /**
     * Enable the CanSeek property.
     */
    public void enablePropertyCanSeek()
    {
        iPropertyCanSeek = new PropertyBool(new ParameterBool("CanSeek"));
        addProperty(iPropertyCanSeek);
    }

    /**
     * Enable the CanPause property.
     */
    public void enablePropertyCanPause()
    {
        iPropertyCanPause = new PropertyBool(new ParameterBool("CanPause"));
        addProperty(iPropertyCanPause);
    }

    /**
     * Enable the TransportState property.
     */
    public void enablePropertyTransportState()
    {
        List<String> allowedValues = new LinkedList<String>();
        allowedValues.add("Playing");
        allowedValues.add("Paused");
        allowedValues.add("Stopped");
        allowedValues.add("Buffering");
        allowedValues.add("Waiting");
        iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues));
        addProperty(iPropertyTransportState);
            allowedValues.clear();
    }

    /**
     * Enable the Repeat property.
     */
    public void enablePropertyRepeat()
    {
        iPropertyRepeat = new PropertyUint(new ParameterUint("Repeat"));
        addProperty(iPropertyRepeat);
    }

    /**
     * Enable the Shuffle property.
     */
    public void enablePropertyShuffle()
    {
        iPropertyShuffle = new PropertyUint(new ParameterUint("Shuffle"));
        addProperty(iPropertyShuffle);
    }

    /**
     * Set the value of the Modes property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyModes(String aValue)
    {
        return setPropertyString(iPropertyModes, aValue);
    }

    /**
     * Get a copy of the value of the Modes property
     *
     * @return  value of the Modes property.
     */
    public String getPropertyModes()
    {
        return iPropertyModes.getValue();
    }

    /**
     * Set the value of the CanSkipNext property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanSkipNext(boolean aValue)
    {
        return setPropertyBool(iPropertyCanSkipNext, aValue);
    }

    /**
     * Get a copy of the value of the CanSkipNext property
     *
     * @return  value of the CanSkipNext property.
     */
    public boolean getPropertyCanSkipNext()
    {
        return iPropertyCanSkipNext.getValue();
    }

    /**
     * Set the value of the CanSkipPrevious property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanSkipPrevious(boolean aValue)
    {
        return setPropertyBool(iPropertyCanSkipPrevious, aValue);
    }

    /**
     * Get a copy of the value of the CanSkipPrevious property
     *
     * @return  value of the CanSkipPrevious property.
     */
    public boolean getPropertyCanSkipPrevious()
    {
        return iPropertyCanSkipPrevious.getValue();
    }

    /**
     * Set the value of the CanRepeat property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanRepeat(boolean aValue)
    {
        return setPropertyBool(iPropertyCanRepeat, aValue);
    }

    /**
     * Get a copy of the value of the CanRepeat property
     *
     * @return  value of the CanRepeat property.
     */
    public boolean getPropertyCanRepeat()
    {
        return iPropertyCanRepeat.getValue();
    }

    /**
     * Set the value of the CanShuffle property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanShuffle(boolean aValue)
    {
        return setPropertyBool(iPropertyCanShuffle, aValue);
    }

    /**
     * Get a copy of the value of the CanShuffle property
     *
     * @return  value of the CanShuffle property.
     */
    public boolean getPropertyCanShuffle()
    {
        return iPropertyCanShuffle.getValue();
    }

    /**
     * Set the value of the StreamId property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyStreamId(long aValue)
    {
        return setPropertyUint(iPropertyStreamId, aValue);
    }

    /**
     * Get a copy of the value of the StreamId property
     *
     * @return  value of the StreamId property.
     */
    public long getPropertyStreamId()
    {
        return iPropertyStreamId.getValue();
    }

    /**
     * Set the value of the CanSeek property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanSeek(boolean aValue)
    {
        return setPropertyBool(iPropertyCanSeek, aValue);
    }

    /**
     * Get a copy of the value of the CanSeek property
     *
     * @return  value of the CanSeek property.
     */
    public boolean getPropertyCanSeek()
    {
        return iPropertyCanSeek.getValue();
    }

    /**
     * Set the value of the CanPause property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyCanPause(boolean aValue)
    {
        return setPropertyBool(iPropertyCanPause, aValue);
    }

    /**
     * Get a copy of the value of the CanPause property
     *
     * @return  value of the CanPause property.
     */
    public boolean getPropertyCanPause()
    {
        return iPropertyCanPause.getValue();
    }

    /**
     * Set the value of the TransportState property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyTransportState(String aValue)
    {
        return setPropertyString(iPropertyTransportState, aValue);
    }

    /**
     * Get a copy of the value of the TransportState property
     *
     * @return  value of the TransportState property.
     */
    public String getPropertyTransportState()
    {
        return iPropertyTransportState.getValue();
    }

    /**
     * Set the value of the Repeat property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRepeat(long aValue)
    {
        return setPropertyUint(iPropertyRepeat, aValue);
    }

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return  value of the Repeat property.
     */
    public long getPropertyRepeat()
    {
        return iPropertyRepeat.getValue();
    }

    /**
     * Set the value of the Shuffle property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyShuffle(long aValue)
    {
        return setPropertyUint(iPropertyShuffle, aValue);
    }

    /**
     * Get a copy of the value of the Shuffle property
     *
     * @return  value of the Shuffle property.
     */
    public long getPropertyShuffle()
    {
        return iPropertyShuffle.getValue();
    }

    /**
     * Signal that the action PlayAs is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * PlayAs must be overridden if this is called.
     */      
    protected void enableActionPlayAs()
    {
        Action action = new Action("PlayAs");        List<String> allowedValues = new LinkedList<String>();
        action.addInputParameter(new ParameterString("Mode", allowedValues));
        action.addInputParameter(new ParameterString("Command", allowedValues));
        iDelegatePlayAs = new DoPlayAs();
        enableAction(action, iDelegatePlayAs);
    }

    /**
     * Signal that the action Play is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Play must be overridden if this is called.
     */      
    protected void enableActionPlay()
    {
        Action action = new Action("Play");
        iDelegatePlay = new DoPlay();
        enableAction(action, iDelegatePlay);
    }

    /**
     * Signal that the action Pause is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Pause must be overridden if this is called.
     */      
    protected void enableActionPause()
    {
        Action action = new Action("Pause");
        iDelegatePause = new DoPause();
        enableAction(action, iDelegatePause);
    }

    /**
     * Signal that the action Stop is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Stop must be overridden if this is called.
     */      
    protected void enableActionStop()
    {
        Action action = new Action("Stop");
        iDelegateStop = new DoStop();
        enableAction(action, iDelegateStop);
    }

    /**
     * Signal that the action SkipNext is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SkipNext must be overridden if this is called.
     */      
    protected void enableActionSkipNext()
    {
        Action action = new Action("SkipNext");
        iDelegateSkipNext = new DoSkipNext();
        enableAction(action, iDelegateSkipNext);
    }

    /**
     * Signal that the action SkipPrevious is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SkipPrevious must be overridden if this is called.
     */      
    protected void enableActionSkipPrevious()
    {
        Action action = new Action("SkipPrevious");
        iDelegateSkipPrevious = new DoSkipPrevious();
        enableAction(action, iDelegateSkipPrevious);
    }

    /**
     * Signal that the action SetRepeat is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetRepeat must be overridden if this is called.
     */      
    protected void enableActionSetRepeat()
    {
        Action action = new Action("SetRepeat");
        action.addInputParameter(new ParameterRelated("Repeat", iPropertyRepeat));
        iDelegateSetRepeat = new DoSetRepeat();
        enableAction(action, iDelegateSetRepeat);
    }

    /**
     * Signal that the action SetShuffle is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetShuffle must be overridden if this is called.
     */      
    protected void enableActionSetShuffle()
    {
        Action action = new Action("SetShuffle");
        action.addInputParameter(new ParameterRelated("Shuffle", iPropertyShuffle));
        iDelegateSetShuffle = new DoSetShuffle();
        enableAction(action, iDelegateSetShuffle);
    }

    /**
     * Signal that the action SeekSecondAbsolute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondAbsolute must be overridden if this is called.
     */      
    protected void enableActionSeekSecondAbsolute()
    {
        Action action = new Action("SeekSecondAbsolute");
        action.addInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        action.addInputParameter(new ParameterUint("SecondAbsolute"));
        iDelegateSeekSecondAbsolute = new DoSeekSecondAbsolute();
        enableAction(action, iDelegateSeekSecondAbsolute);
    }

    /**
     * Signal that the action SeekSecondRelative is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondRelative must be overridden if this is called.
     */      
    protected void enableActionSeekSecondRelative()
    {
        Action action = new Action("SeekSecondRelative");
        action.addInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        action.addInputParameter(new ParameterInt("SecondRelative"));
        iDelegateSeekSecondRelative = new DoSeekSecondRelative();
        enableAction(action, iDelegateSeekSecondRelative);
    }

    /**
     * Signal that the action TransportState is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * TransportState must be overridden if this is called.
     */      
    protected void enableActionTransportState()
    {
        Action action = new Action("TransportState");
        action.addOutputParameter(new ParameterRelated("State", iPropertyTransportState));
        iDelegateTransportState = new DoTransportState();
        enableAction(action, iDelegateTransportState);
    }

    /**
     * Signal that the action Modes is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Modes must be overridden if this is called.
     */      
    protected void enableActionModes()
    {
        Action action = new Action("Modes");
        action.addOutputParameter(new ParameterRelated("Modes", iPropertyModes));
        iDelegateModes = new DoModes();
        enableAction(action, iDelegateModes);
    }

    /**
     * Signal that the action ModeInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * ModeInfo must be overridden if this is called.
     */      
    protected void enableActionModeInfo()
    {
        Action action = new Action("ModeInfo");
        action.addOutputParameter(new ParameterRelated("CanSkipNext", iPropertyCanSkipNext));
        action.addOutputParameter(new ParameterRelated("CanSkipPrevious", iPropertyCanSkipPrevious));
        action.addOutputParameter(new ParameterRelated("CanRepeat", iPropertyCanRepeat));
        action.addOutputParameter(new ParameterRelated("CanShuffle", iPropertyCanShuffle));
        iDelegateModeInfo = new DoModeInfo();
        enableAction(action, iDelegateModeInfo);
    }

    /**
     * Signal that the action StreamInfo is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * StreamInfo must be overridden if this is called.
     */      
    protected void enableActionStreamInfo()
    {
        Action action = new Action("StreamInfo");
        action.addOutputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        action.addOutputParameter(new ParameterRelated("CanSeek", iPropertyCanSeek));
        action.addOutputParameter(new ParameterRelated("CanPause", iPropertyCanPause));
        iDelegateStreamInfo = new DoStreamInfo();
        enableAction(action, iDelegateStreamInfo);
    }

    /**
     * Signal that the action StreamId is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * StreamId must be overridden if this is called.
     */      
    protected void enableActionStreamId()
    {
        Action action = new Action("StreamId");
        action.addOutputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        iDelegateStreamId = new DoStreamId();
        enableAction(action, iDelegateStreamId);
    }

    /**
     * Signal that the action Repeat is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Repeat must be overridden if this is called.
     */      
    protected void enableActionRepeat()
    {
        Action action = new Action("Repeat");
        action.addOutputParameter(new ParameterRelated("Repeat", iPropertyRepeat));
        iDelegateRepeat = new DoRepeat();
        enableAction(action, iDelegateRepeat);
    }

    /**
     * Signal that the action Shuffle is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Shuffle must be overridden if this is called.
     */      
    protected void enableActionShuffle()
    {
        Action action = new Action("Shuffle");
        action.addOutputParameter(new ParameterRelated("Shuffle", iPropertyShuffle));
        iDelegateShuffle = new DoShuffle();
        enableAction(action, iDelegateShuffle);
    }

    /**
     * PlayAs action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * PlayAs action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPlayAs} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aMode
     * @param aCommand
     */
    protected void playAs(IDvInvocation aInvocation, String aMode, String aCommand)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Play action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Play action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPlay} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void play(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Pause action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPause} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void pause(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Stop action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionStop} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void stop(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SkipNext action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SkipNext action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSkipNext} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void skipNext(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SkipPrevious action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SkipPrevious action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSkipPrevious} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void skipPrevious(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetRepeat action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetRepeat action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetRepeat} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aRepeat
     */
    protected void setRepeat(IDvInvocation aInvocation, long aRepeat)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetShuffle action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetShuffle action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetShuffle} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aShuffle
     */
    protected void setShuffle(IDvInvocation aInvocation, long aShuffle)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondAbsolute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondAbsolute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStreamId
     * @param aSecondAbsolute
     */
    protected void seekSecondAbsolute(IDvInvocation aInvocation, long aStreamId, long aSecondAbsolute)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondRelative action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondRelative action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondRelative} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStreamId
     * @param aSecondRelative
     */
    protected void seekSecondRelative(IDvInvocation aInvocation, long aStreamId, int aSecondRelative)
    {
        throw (new ActionDisabledError());
    }

    /**
     * TransportState action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionTransportState} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String transportState(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Modes action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Modes action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionModes} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected String modes(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * ModeInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * ModeInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionModeInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected ModeInfo modeInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * StreamInfo action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * StreamInfo action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionStreamInfo} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected StreamInfo streamInfo(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * StreamId action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * StreamId action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionStreamId} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long streamId(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Repeat action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Repeat action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRepeat} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long repeat(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Shuffle action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Shuffle action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionShuffle} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected long shuffle(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Must be called for each class instance.  Must be called before Core.Library.Close().
     */
    public void dispose()
    {
        synchronized (this)
        {
            if (iHandle == 0)
            {
                return;
            }
            super.dispose();
            iHandle = 0;
        }
    }


    private class DoPlayAs implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String mode;
            String command;
            try
            {
                invocation.readStart();
                mode = invocation.readString("Mode");
                command = invocation.readString("Command");
                invocation.readEnd();
                playAs(invocation, mode, command);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "PlayAs");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoPlay implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                play(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Play");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoPause implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                pause(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Pause");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoStop implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                stop(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Stop");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSkipNext implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                skipNext(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SkipNext");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSkipPrevious implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                skipPrevious(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SkipPrevious");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetRepeat implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long repeat;
            try
            {
                invocation.readStart();
                repeat = invocation.readUint("Repeat");
                invocation.readEnd();
                setRepeat(invocation, repeat);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetRepeat");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSetShuffle implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long shuffle;
            try
            {
                invocation.readStart();
                shuffle = invocation.readUint("Shuffle");
                invocation.readEnd();
                setShuffle(invocation, shuffle);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetShuffle");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSeekSecondAbsolute implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long streamId;
            long secondAbsolute;
            try
            {
                invocation.readStart();
                streamId = invocation.readUint("StreamId");
                secondAbsolute = invocation.readUint("SecondAbsolute");
                invocation.readEnd();
                seekSecondAbsolute(invocation, streamId, secondAbsolute);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondAbsolute");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoSeekSecondRelative implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long streamId;
            int secondRelative;
            try
            {
                invocation.readStart();
                streamId = invocation.readUint("StreamId");
                secondRelative = invocation.readInt("SecondRelative");
                invocation.readEnd();
                seekSecondRelative(invocation, streamId, secondRelative);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondRelative");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoTransportState implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String state;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 state = transportState(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "TransportState");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("State", state);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoModes implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            String modes;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 modes = modes(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Modes");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeString("Modes", modes);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoModeInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean canSkipNext;
            boolean canSkipPrevious;
            boolean canRepeat;
            boolean canShuffle;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            ModeInfo outArgs = modeInfo(invocation);
            canSkipNext = outArgs.getCanSkipNext();
            canSkipPrevious = outArgs.getCanSkipPrevious();
            canRepeat = outArgs.getCanRepeat();
            canShuffle = outArgs.getCanShuffle();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "ModeInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeBool("CanSkipNext", canSkipNext);
                invocation.writeBool("CanSkipPrevious", canSkipPrevious);
                invocation.writeBool("CanRepeat", canRepeat);
                invocation.writeBool("CanShuffle", canShuffle);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoStreamInfo implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long streamId;
            boolean canSeek;
            boolean canPause;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            StreamInfo outArgs = streamInfo(invocation);
            streamId = outArgs.getStreamId();
            canSeek = outArgs.getCanSeek();
            canPause = outArgs.getCanPause();
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "StreamInfo");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("StreamId", streamId);
                invocation.writeBool("CanSeek", canSeek);
                invocation.writeBool("CanPause", canPause);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoStreamId implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long streamId;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 streamId = streamId(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "StreamId");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("StreamId", streamId);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoRepeat implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long repeat;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 repeat = repeat(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Repeat");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Repeat", repeat);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }

    private class DoShuffle implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            long shuffle;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 shuffle = shuffle(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Shuffle");
                return;
            }
            catch (PropertyUpdateError pue)
            {
                invocation.reportError(501, "Invalid XML");
                return;
            }
            catch (Exception e)
            {
                System.out.println("WARNING: unexpected exception: " + e.getMessage());
                System.out.println("         Only ActionError or PropertyUpdateError can be thrown by actions");
                e.printStackTrace();
                return;
            }
            try
            {
                invocation.writeStart();
                invocation.writeUint("Shuffle", shuffle);
                invocation.writeEnd();
            }
            catch (ActionError ae)
            {
                return;
            }
            catch (Exception e)
            {
                System.out.println("ERROR: unexpected exception: " + e.getMessage());
                System.out.println("       Only ActionError can be thrown by action response writer");
                e.printStackTrace();
            }
        }
    }
}

