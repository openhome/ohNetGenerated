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
     * Set the value of the NextAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyNextAvailable(boolean aValue);

    /**
     * Get a copy of the value of the NextAvailable property
     *
     * @return value of the NextAvailable property.
     */
    public boolean getPropertyNextAvailable();

    /**
     * Set the value of the PreviousAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPreviousAvailable(boolean aValue);

    /**
     * Get a copy of the value of the PreviousAvailable property
     *
     * @return value of the PreviousAvailable property.
     */
    public boolean getPropertyPreviousAvailable();

    /**
     * Set the value of the RepeatAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRepeatAvailable(boolean aValue);

    /**
     * Get a copy of the value of the RepeatAvailable property
     *
     * @return value of the RepeatAvailable property.
     */
    public boolean getPropertyRepeatAvailable();

    /**
     * Set the value of the ShuffleAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyShuffleAvailable(boolean aValue);

    /**
     * Get a copy of the value of the ShuffleAvailable property
     *
     * @return value of the ShuffleAvailable property.
     */
    public boolean getPropertyShuffleAvailable();

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
     * Set the value of the Seekable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertySeekable(boolean aValue);

    /**
     * Get a copy of the value of the Seekable property
     *
     * @return value of the Seekable property.
     */
    public boolean getPropertySeekable();

    /**
     * Set the value of the Pausable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPausable(boolean aValue);

    /**
     * Get a copy of the value of the Pausable property
     *
     * @return value of the Pausable property.
     */
    public boolean getPropertyPausable();

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

    private IDvInvocationListener iDelegatePlayAs;
    private IDvInvocationListener iDelegatePlay;
    private IDvInvocationListener iDelegatePause;
    private IDvInvocationListener iDelegateStop;
    private IDvInvocationListener iDelegateNext;
    private IDvInvocationListener iDelegatePrevious;
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
    private PropertyBool iPropertyNextAvailable;
    private PropertyBool iPropertyPreviousAvailable;
    private PropertyBool iPropertyRepeatAvailable;
    private PropertyBool iPropertyShuffleAvailable;
    private PropertyUint iPropertyStreamId;
    private PropertyBool iPropertySeekable;
    private PropertyBool iPropertyPausable;
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
     * Enable the NextAvailable property.
     */
    public void enablePropertyNextAvailable()
    {
        iPropertyNextAvailable = new PropertyBool(new ParameterBool("NextAvailable"));
        addProperty(iPropertyNextAvailable);
    }

    /**
     * Enable the PreviousAvailable property.
     */
    public void enablePropertyPreviousAvailable()
    {
        iPropertyPreviousAvailable = new PropertyBool(new ParameterBool("PreviousAvailable"));
        addProperty(iPropertyPreviousAvailable);
    }

    /**
     * Enable the RepeatAvailable property.
     */
    public void enablePropertyRepeatAvailable()
    {
        iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
        addProperty(iPropertyRepeatAvailable);
    }

    /**
     * Enable the ShuffleAvailable property.
     */
    public void enablePropertyShuffleAvailable()
    {
        iPropertyShuffleAvailable = new PropertyBool(new ParameterBool("ShuffleAvailable"));
        addProperty(iPropertyShuffleAvailable);
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
     * Enable the Seekable property.
     */
    public void enablePropertySeekable()
    {
        iPropertySeekable = new PropertyBool(new ParameterBool("Seekable"));
        addProperty(iPropertySeekable);
    }

    /**
     * Enable the Pausable property.
     */
    public void enablePropertyPausable()
    {
        iPropertyPausable = new PropertyBool(new ParameterBool("Pausable"));
        addProperty(iPropertyPausable);
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
     * Set the value of the NextAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyNextAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyNextAvailable, aValue);
    }

    /**
     * Get a copy of the value of the NextAvailable property
     *
     * @return  value of the NextAvailable property.
     */
    public boolean getPropertyNextAvailable()
    {
        return iPropertyNextAvailable.getValue();
    }

    /**
     * Set the value of the PreviousAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPreviousAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyPreviousAvailable, aValue);
    }

    /**
     * Get a copy of the value of the PreviousAvailable property
     *
     * @return  value of the PreviousAvailable property.
     */
    public boolean getPropertyPreviousAvailable()
    {
        return iPropertyPreviousAvailable.getValue();
    }

    /**
     * Set the value of the RepeatAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRepeatAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyRepeatAvailable, aValue);
    }

    /**
     * Get a copy of the value of the RepeatAvailable property
     *
     * @return  value of the RepeatAvailable property.
     */
    public boolean getPropertyRepeatAvailable()
    {
        return iPropertyRepeatAvailable.getValue();
    }

    /**
     * Set the value of the ShuffleAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyShuffleAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyShuffleAvailable, aValue);
    }

    /**
     * Get a copy of the value of the ShuffleAvailable property
     *
     * @return  value of the ShuffleAvailable property.
     */
    public boolean getPropertyShuffleAvailable()
    {
        return iPropertyShuffleAvailable.getValue();
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
     * Set the value of the Seekable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertySeekable(boolean aValue)
    {
        return setPropertyBool(iPropertySeekable, aValue);
    }

    /**
     * Get a copy of the value of the Seekable property
     *
     * @return  value of the Seekable property.
     */
    public boolean getPropertySeekable()
    {
        return iPropertySeekable.getValue();
    }

    /**
     * Set the value of the Pausable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPausable(boolean aValue)
    {
        return setPropertyBool(iPropertyPausable, aValue);
    }

    /**
     * Get a copy of the value of the Pausable property
     *
     * @return  value of the Pausable property.
     */
    public boolean getPropertyPausable()
    {
        return iPropertyPausable.getValue();
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
     * Signal that the action Next is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Next must be overridden if this is called.
     */      
    protected void enableActionNext()
    {
        Action action = new Action("Next");
        iDelegateNext = new DoNext();
        enableAction(action, iDelegateNext);
    }

    /**
     * Signal that the action Previous is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Previous must be overridden if this is called.
     */      
    protected void enableActionPrevious()
    {
        Action action = new Action("Previous");
        iDelegatePrevious = new DoPrevious();
        enableAction(action, iDelegatePrevious);
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
        action.addInputParameter(new ParameterUint("Repeat"));
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
        action.addInputParameter(new ParameterUint("Shuffle"));
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
        action.addInputParameter(new ParameterUint("SecondsAbsolute"));
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
        action.addInputParameter(new ParameterInt("SecondsRelative"));
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
        action.addOutputParameter(new ParameterRelated("NextAvailable", iPropertyNextAvailable));
        action.addOutputParameter(new ParameterRelated("PreviousAvailable", iPropertyPreviousAvailable));
        action.addOutputParameter(new ParameterRelated("RepeatAvailable", iPropertyRepeatAvailable));
        action.addOutputParameter(new ParameterRelated("ShuffleAvailable", iPropertyShuffleAvailable));
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
        action.addOutputParameter(new ParameterRelated("Seekable", iPropertySeekable));
        action.addOutputParameter(new ParameterRelated("Pausable", iPropertyPausable));
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
     * Next action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionNext} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void next(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Previous action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Previous action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPrevious} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void previous(IDvInvocation aInvocation)
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
     * @param aSecondsAbsolute
     */
    protected void seekSecondAbsolute(IDvInvocation aInvocation, long aStreamId, long aSecondsAbsolute)
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
     * @param aSecondsRelative
     */
    protected void seekSecondRelative(IDvInvocation aInvocation, long aStreamId, int aSecondsRelative)
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

    private class DoNext implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                next(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Next");
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

    private class DoPrevious implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                previous(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Previous");
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
            long secondsAbsolute;
            try
            {
                invocation.readStart();
                streamId = invocation.readUint("StreamId");
                secondsAbsolute = invocation.readUint("SecondsAbsolute");
                invocation.readEnd();
                seekSecondAbsolute(invocation, streamId, secondsAbsolute);
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
            int secondsRelative;
            try
            {
                invocation.readStart();
                streamId = invocation.readUint("StreamId");
                secondsRelative = invocation.readInt("SecondsRelative");
                invocation.readEnd();
                seekSecondRelative(invocation, streamId, secondsRelative);
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
            boolean nextAvailable;
            boolean previousAvailable;
            boolean repeatAvailable;
            boolean shuffleAvailable;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            ModeInfo outArgs = modeInfo(invocation);
            nextAvailable = outArgs.getNextAvailable();
            previousAvailable = outArgs.getPreviousAvailable();
            repeatAvailable = outArgs.getRepeatAvailable();
            shuffleAvailable = outArgs.getShuffleAvailable();
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
                invocation.writeBool("NextAvailable", nextAvailable);
                invocation.writeBool("PreviousAvailable", previousAvailable);
                invocation.writeBool("RepeatAvailable", repeatAvailable);
                invocation.writeBool("ShuffleAvailable", shuffleAvailable);
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
            boolean seekable;
            boolean pausable;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            StreamInfo outArgs = streamInfo(invocation);
            streamId = outArgs.getStreamId();
            seekable = outArgs.getSeekable();
            pausable = outArgs.getPausable();
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
                invocation.writeBool("Seekable", seekable);
                invocation.writeBool("Pausable", pausable);
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

