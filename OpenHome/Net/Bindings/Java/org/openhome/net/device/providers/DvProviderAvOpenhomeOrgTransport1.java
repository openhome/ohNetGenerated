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
     * Set the value of the PrevAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyPrevAvailable(boolean aValue);

    /**
     * Get a copy of the value of the PrevAvailable property
     *
     * @return value of the PrevAvailable property.
     */
    public boolean getPropertyPrevAvailable();

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
     * Set the value of the RandomAvailable property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRandomAvailable(boolean aValue);

    /**
     * Get a copy of the value of the RandomAvailable property
     *
     * @return value of the RandomAvailable property.
     */
    public boolean getPropertyRandomAvailable();

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
    public boolean setPropertyRepeat(boolean aValue);

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return value of the Repeat property.
     */
    public boolean getPropertyRepeat();

    /**
     * Set the value of the Random property
     *
     * @param aValue    new value for the property.
     * @return      <tt>true</tt> if the value has been updated; <tt>false</tt> if <tt>aValue</tt> was the same as the previous value.
     *
     */
    public boolean setPropertyRandom(boolean aValue);

    /**
     * Get a copy of the value of the Random property
     *
     * @return value of the Random property.
     */
    public boolean getPropertyRandom();
        
}

/**
 * Provider for the av.openhome.org:Transport:1 UPnP service.
 */
public class DvProviderAvOpenhomeOrgTransport1 extends DvProvider implements IDvProviderAvOpenhomeOrgTransport1
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

    private IDvInvocationListener iDelegatePlayAs;
    private IDvInvocationListener iDelegatePlay;
    private IDvInvocationListener iDelegatePause;
    private IDvInvocationListener iDelegateStop;
    private IDvInvocationListener iDelegateNext;
    private IDvInvocationListener iDelegatePrev;
    private IDvInvocationListener iDelegateSetRepeat;
    private IDvInvocationListener iDelegateSetRandom;
    private IDvInvocationListener iDelegateSeekSecondsAbsolute;
    private IDvInvocationListener iDelegateSeekSecondsRelative;
    private IDvInvocationListener iDelegateTransportState;
    private IDvInvocationListener iDelegateModes;
    private IDvInvocationListener iDelegateModeInfo;
    private IDvInvocationListener iDelegateStreamInfo;
    private IDvInvocationListener iDelegateStreamId;
    private IDvInvocationListener iDelegateRepeat;
    private IDvInvocationListener iDelegateRandom;
    private PropertyString iPropertyModes;
    private PropertyBool iPropertyNextAvailable;
    private PropertyBool iPropertyPrevAvailable;
    private PropertyBool iPropertyRepeatAvailable;
    private PropertyBool iPropertyRandomAvailable;
    private PropertyUint iPropertyStreamId;
    private PropertyBool iPropertySeekable;
    private PropertyBool iPropertyPausable;
    private PropertyString iPropertyTransportState;
    private PropertyBool iPropertyRepeat;
    private PropertyBool iPropertyRandom;

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
     * Enable the PrevAvailable property.
     */
    public void enablePropertyPrevAvailable()
    {
        iPropertyPrevAvailable = new PropertyBool(new ParameterBool("PrevAvailable"));
        addProperty(iPropertyPrevAvailable);
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
     * Enable the RandomAvailable property.
     */
    public void enablePropertyRandomAvailable()
    {
        iPropertyRandomAvailable = new PropertyBool(new ParameterBool("RandomAvailable"));
        addProperty(iPropertyRandomAvailable);
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
        iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
        addProperty(iPropertyRepeat);
    }

    /**
     * Enable the Random property.
     */
    public void enablePropertyRandom()
    {
        iPropertyRandom = new PropertyBool(new ParameterBool("Random"));
        addProperty(iPropertyRandom);
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
     * Set the value of the PrevAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyPrevAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyPrevAvailable, aValue);
    }

    /**
     * Get a copy of the value of the PrevAvailable property
     *
     * @return  value of the PrevAvailable property.
     */
    public boolean getPropertyPrevAvailable()
    {
        return iPropertyPrevAvailable.getValue();
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
     * Set the value of the RandomAvailable property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRandomAvailable(boolean aValue)
    {
        return setPropertyBool(iPropertyRandomAvailable, aValue);
    }

    /**
     * Get a copy of the value of the RandomAvailable property
     *
     * @return  value of the RandomAvailable property.
     */
    public boolean getPropertyRandomAvailable()
    {
        return iPropertyRandomAvailable.getValue();
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
    public boolean setPropertyRepeat(boolean aValue)
    {
        return setPropertyBool(iPropertyRepeat, aValue);
    }

    /**
     * Get a copy of the value of the Repeat property
     *
     * @return  value of the Repeat property.
     */
    public boolean getPropertyRepeat()
    {
        return iPropertyRepeat.getValue();
    }

    /**
     * Set the value of the Random property
     *
     * @param aValue    new value for the property.
     * @return <tt>true</tt> if the value has been updated; <tt>false</tt>
     * if <tt>aValue</tt> was the same as the previous value.
     */
    public boolean setPropertyRandom(boolean aValue)
    {
        return setPropertyBool(iPropertyRandom, aValue);
    }

    /**
     * Get a copy of the value of the Random property
     *
     * @return  value of the Random property.
     */
    public boolean getPropertyRandom()
    {
        return iPropertyRandom.getValue();
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
     * Signal that the action Prev is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Prev must be overridden if this is called.
     */      
    protected void enableActionPrev()
    {
        Action action = new Action("Prev");
        iDelegatePrev = new DoPrev();
        enableAction(action, iDelegatePrev);
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
        action.addInputParameter(new ParameterBool("Repeat"));
        iDelegateSetRepeat = new DoSetRepeat();
        enableAction(action, iDelegateSetRepeat);
    }

    /**
     * Signal that the action SetRandom is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SetRandom must be overridden if this is called.
     */      
    protected void enableActionSetRandom()
    {
        Action action = new Action("SetRandom");
        action.addInputParameter(new ParameterBool("Random"));
        iDelegateSetRandom = new DoSetRandom();
        enableAction(action, iDelegateSetRandom);
    }

    /**
     * Signal that the action SeekSecondsAbsolute is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondsAbsolute must be overridden if this is called.
     */      
    protected void enableActionSeekSecondsAbsolute()
    {
        Action action = new Action("SeekSecondsAbsolute");
        action.addInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        action.addInputParameter(new ParameterUint("SecondsAbsolute"));
        iDelegateSeekSecondsAbsolute = new DoSeekSecondsAbsolute();
        enableAction(action, iDelegateSeekSecondsAbsolute);
    }

    /**
     * Signal that the action SeekSecondsRelative is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * SeekSecondsRelative must be overridden if this is called.
     */      
    protected void enableActionSeekSecondsRelative()
    {
        Action action = new Action("SeekSecondsRelative");
        action.addInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
        action.addInputParameter(new ParameterInt("SecondsRelative"));
        iDelegateSeekSecondsRelative = new DoSeekSecondsRelative();
        enableAction(action, iDelegateSeekSecondsRelative);
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
        action.addOutputParameter(new ParameterRelated("PrevAvailable", iPropertyPrevAvailable));
        action.addOutputParameter(new ParameterRelated("RepeatAvailable", iPropertyRepeatAvailable));
        action.addOutputParameter(new ParameterRelated("RandomAvailable", iPropertyRandomAvailable));
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
     * Signal that the action Random is supported.
     *
     * <p>The action's availability will be published in the device's service.xml.
     * Random must be overridden if this is called.
     */      
    protected void enableActionRandom()
    {
        Action action = new Action("Random");
        action.addOutputParameter(new ParameterRelated("Random", iPropertyRandom));
        iDelegateRandom = new DoRandom();
        enableAction(action, iDelegateRandom);
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
     * Prev action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Prev action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionPrev} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected void prev(IDvInvocation aInvocation)
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
    protected void setRepeat(IDvInvocation aInvocation, boolean aRepeat)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SetRandom action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SetRandom action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSetRandom} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aRandom
     */
    protected void setRandom(IDvInvocation aInvocation, boolean aRandom)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondsAbsolute action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondsAbsolute action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondsAbsolute} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStreamId
     * @param aSecondsAbsolute
     */
    protected void seekSecondsAbsolute(IDvInvocation aInvocation, long aStreamId, long aSecondsAbsolute)
    {
        throw (new ActionDisabledError());
    }

    /**
     * SeekSecondsRelative action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * SeekSecondsRelative action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionSeekSecondsRelative} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     * @param aStreamId
     * @param aSecondsRelative
     */
    protected void seekSecondsRelative(IDvInvocation aInvocation, long aStreamId, int aSecondsRelative)
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
    protected boolean repeat(IDvInvocation aInvocation)
    {
        throw (new ActionDisabledError());
    }

    /**
     * Random action.
     *
     * <p>Will be called when the device stack receives an invocation of the
     * Random action for the owning device.
     *
     * <p>Must be implemented iff {@link #enableActionRandom} was called.</remarks>
     *
     * @param aInvocation   Interface allowing querying of aspects of this particular action invocation.</param>
     */
    protected boolean random(IDvInvocation aInvocation)
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

    private class DoPrev implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.readStart();
                invocation.readEnd();
                prev(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Prev");
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
            boolean repeat;
            try
            {
                invocation.readStart();
                repeat = invocation.readBool("Repeat");
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

    private class DoSetRandom implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean random;
            try
            {
                invocation.readStart();
                random = invocation.readBool("Random");
                invocation.readEnd();
                setRandom(invocation, random);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SetRandom");
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

    private class DoSeekSecondsAbsolute implements IDvInvocationListener
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
                seekSecondsAbsolute(invocation, streamId, secondsAbsolute);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondsAbsolute");
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

    private class DoSeekSecondsRelative implements IDvInvocationListener
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
                seekSecondsRelative(invocation, streamId, secondsRelative);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "SeekSecondsRelative");
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
            boolean prevAvailable;
            boolean repeatAvailable;
            boolean randomAvailable;
            try
            {
                invocation.readStart();
                invocation.readEnd();

            ModeInfo outArgs = modeInfo(invocation);
            nextAvailable = outArgs.getNextAvailable();
            prevAvailable = outArgs.getPrevAvailable();
            repeatAvailable = outArgs.getRepeatAvailable();
            randomAvailable = outArgs.getRandomAvailable();
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
                invocation.writeBool("PrevAvailable", prevAvailable);
                invocation.writeBool("RepeatAvailable", repeatAvailable);
                invocation.writeBool("RandomAvailable", randomAvailable);
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
            boolean repeat;
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
                invocation.writeBool("Repeat", repeat);
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

    private class DoRandom implements IDvInvocationListener
    {
        public void actionInvoked(long aInvocation)
        {
            DvInvocation invocation = new DvInvocation(aInvocation);
            boolean random;
            try
            {
                invocation.readStart();
                invocation.readEnd();
                 random = random(invocation);
            }
            catch (ActionError ae)
            {
                invocation.reportActionError(ae, "Random");
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
                invocation.writeBool("Random", random);
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

