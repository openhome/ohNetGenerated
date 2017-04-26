using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgTransport1 : IDisposable
    {

        /// <summary>
        /// Set the value of the Modes property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyModes(string aValue);

        /// <summary>
        /// Get a copy of the value of the Modes property
        /// </summary>
        /// <returns>Value of the Modes property.</param>
        string PropertyModes();

        /// <summary>
        /// Set the value of the NextAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyNextAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the NextAvailable property
        /// </summary>
        /// <returns>Value of the NextAvailable property.</param>
        bool PropertyNextAvailable();

        /// <summary>
        /// Set the value of the PreviousAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPreviousAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the PreviousAvailable property
        /// </summary>
        /// <returns>Value of the PreviousAvailable property.</param>
        bool PropertyPreviousAvailable();

        /// <summary>
        /// Set the value of the RepeatAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRepeatAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the RepeatAvailable property
        /// </summary>
        /// <returns>Value of the RepeatAvailable property.</param>
        bool PropertyRepeatAvailable();

        /// <summary>
        /// Set the value of the ShuffleAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyShuffleAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the ShuffleAvailable property
        /// </summary>
        /// <returns>Value of the ShuffleAvailable property.</param>
        bool PropertyShuffleAvailable();

        /// <summary>
        /// Set the value of the StreamId property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyStreamId(uint aValue);

        /// <summary>
        /// Get a copy of the value of the StreamId property
        /// </summary>
        /// <returns>Value of the StreamId property.</param>
        uint PropertyStreamId();

        /// <summary>
        /// Set the value of the Seekable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertySeekable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Seekable property
        /// </summary>
        /// <returns>Value of the Seekable property.</param>
        bool PropertySeekable();

        /// <summary>
        /// Set the value of the Pausable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPausable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Pausable property
        /// </summary>
        /// <returns>Value of the Pausable property.</param>
        bool PropertyPausable();

        /// <summary>
        /// Set the value of the TransportState property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyTransportState(string aValue);

        /// <summary>
        /// Get a copy of the value of the TransportState property
        /// </summary>
        /// <returns>Value of the TransportState property.</param>
        string PropertyTransportState();

        /// <summary>
        /// Set the value of the Repeat property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRepeat(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <returns>Value of the Repeat property.</param>
        uint PropertyRepeat();

        /// <summary>
        /// Set the value of the Shuffle property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyShuffle(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Shuffle property
        /// </summary>
        /// <returns>Value of the Shuffle property.</param>
        uint PropertyShuffle();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Transport:1 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgTransport1 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgTransport1
    {
        private GCHandle iGch;
        private ActionDelegate iDelegatePlayAs;
        private ActionDelegate iDelegatePlay;
        private ActionDelegate iDelegatePause;
        private ActionDelegate iDelegateStop;
        private ActionDelegate iDelegateNext;
        private ActionDelegate iDelegatePrevious;
        private ActionDelegate iDelegateSetRepeat;
        private ActionDelegate iDelegateSetShuffle;
        private ActionDelegate iDelegateSeekSecondAbsolute;
        private ActionDelegate iDelegateSeekSecondRelative;
        private ActionDelegate iDelegateTransportState;
        private ActionDelegate iDelegateModes;
        private ActionDelegate iDelegateModeInfo;
        private ActionDelegate iDelegateStreamInfo;
        private ActionDelegate iDelegateStreamId;
        private ActionDelegate iDelegateRepeat;
        private ActionDelegate iDelegateShuffle;
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

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgTransport1(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Transport", 1)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Modes property.
        /// </summary>
        public void EnablePropertyModes()
        {
            List<String> allowedValues = new List<String>();
            iPropertyModes = new PropertyString(new ParameterString("Modes", allowedValues));
            AddProperty(iPropertyModes);
        }

        /// <summary>
        /// Enable the NextAvailable property.
        /// </summary>
        public void EnablePropertyNextAvailable()
        {
            iPropertyNextAvailable = new PropertyBool(new ParameterBool("NextAvailable"));
            AddProperty(iPropertyNextAvailable);
        }

        /// <summary>
        /// Enable the PreviousAvailable property.
        /// </summary>
        public void EnablePropertyPreviousAvailable()
        {
            iPropertyPreviousAvailable = new PropertyBool(new ParameterBool("PreviousAvailable"));
            AddProperty(iPropertyPreviousAvailable);
        }

        /// <summary>
        /// Enable the RepeatAvailable property.
        /// </summary>
        public void EnablePropertyRepeatAvailable()
        {
            iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
            AddProperty(iPropertyRepeatAvailable);
        }

        /// <summary>
        /// Enable the ShuffleAvailable property.
        /// </summary>
        public void EnablePropertyShuffleAvailable()
        {
            iPropertyShuffleAvailable = new PropertyBool(new ParameterBool("ShuffleAvailable"));
            AddProperty(iPropertyShuffleAvailable);
        }

        /// <summary>
        /// Enable the StreamId property.
        /// </summary>
        public void EnablePropertyStreamId()
        {
            iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
            AddProperty(iPropertyStreamId);
        }

        /// <summary>
        /// Enable the Seekable property.
        /// </summary>
        public void EnablePropertySeekable()
        {
            iPropertySeekable = new PropertyBool(new ParameterBool("Seekable"));
            AddProperty(iPropertySeekable);
        }

        /// <summary>
        /// Enable the Pausable property.
        /// </summary>
        public void EnablePropertyPausable()
        {
            iPropertyPausable = new PropertyBool(new ParameterBool("Pausable"));
            AddProperty(iPropertyPausable);
        }

        /// <summary>
        /// Enable the TransportState property.
        /// </summary>
        public void EnablePropertyTransportState()
        {
            List<String> allowedValues = new List<String>();
            allowedValues.Add("Playing");
            allowedValues.Add("Paused");
            allowedValues.Add("Stopped");
            allowedValues.Add("Buffering");
            allowedValues.Add("Waiting");
            iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues));
            AddProperty(iPropertyTransportState);
            allowedValues.Clear();
        }

        /// <summary>
        /// Enable the Repeat property.
        /// </summary>
        public void EnablePropertyRepeat()
        {
            iPropertyRepeat = new PropertyUint(new ParameterUint("Repeat"));
            AddProperty(iPropertyRepeat);
        }

        /// <summary>
        /// Enable the Shuffle property.
        /// </summary>
        public void EnablePropertyShuffle()
        {
            iPropertyShuffle = new PropertyUint(new ParameterUint("Shuffle"));
            AddProperty(iPropertyShuffle);
        }

        /// <summary>
        /// Set the value of the Modes property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyModes has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyModes(string aValue)
        {
            if (iPropertyModes == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyModes, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Modes property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyModes has previously been called.</remarks>
        /// <returns>Value of the Modes property.</returns>
        public string PropertyModes()
        {
            if (iPropertyModes == null)
                throw new PropertyDisabledError();
            return iPropertyModes.Value();
        }

        /// <summary>
        /// Set the value of the NextAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNextAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyNextAvailable(bool aValue)
        {
            if (iPropertyNextAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyNextAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the NextAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyNextAvailable has previously been called.</remarks>
        /// <returns>Value of the NextAvailable property.</returns>
        public bool PropertyNextAvailable()
        {
            if (iPropertyNextAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyNextAvailable.Value();
        }

        /// <summary>
        /// Set the value of the PreviousAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPreviousAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPreviousAvailable(bool aValue)
        {
            if (iPropertyPreviousAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyPreviousAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PreviousAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPreviousAvailable has previously been called.</remarks>
        /// <returns>Value of the PreviousAvailable property.</returns>
        public bool PropertyPreviousAvailable()
        {
            if (iPropertyPreviousAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyPreviousAvailable.Value();
        }

        /// <summary>
        /// Set the value of the RepeatAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeatAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRepeatAvailable(bool aValue)
        {
            if (iPropertyRepeatAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRepeatAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RepeatAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeatAvailable has previously been called.</remarks>
        /// <returns>Value of the RepeatAvailable property.</returns>
        public bool PropertyRepeatAvailable()
        {
            if (iPropertyRepeatAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyRepeatAvailable.Value();
        }

        /// <summary>
        /// Set the value of the ShuffleAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffleAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyShuffleAvailable(bool aValue)
        {
            if (iPropertyShuffleAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyShuffleAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the ShuffleAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffleAvailable has previously been called.</remarks>
        /// <returns>Value of the ShuffleAvailable property.</returns>
        public bool PropertyShuffleAvailable()
        {
            if (iPropertyShuffleAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyShuffleAvailable.Value();
        }

        /// <summary>
        /// Set the value of the StreamId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStreamId has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyStreamId(uint aValue)
        {
            if (iPropertyStreamId == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyStreamId, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the StreamId property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyStreamId has previously been called.</remarks>
        /// <returns>Value of the StreamId property.</returns>
        public uint PropertyStreamId()
        {
            if (iPropertyStreamId == null)
                throw new PropertyDisabledError();
            return iPropertyStreamId.Value();
        }

        /// <summary>
        /// Set the value of the Seekable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySeekable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertySeekable(bool aValue)
        {
            if (iPropertySeekable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertySeekable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Seekable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertySeekable has previously been called.</remarks>
        /// <returns>Value of the Seekable property.</returns>
        public bool PropertySeekable()
        {
            if (iPropertySeekable == null)
                throw new PropertyDisabledError();
            return iPropertySeekable.Value();
        }

        /// <summary>
        /// Set the value of the Pausable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPausable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPausable(bool aValue)
        {
            if (iPropertyPausable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyPausable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Pausable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPausable has previously been called.</remarks>
        /// <returns>Value of the Pausable property.</returns>
        public bool PropertyPausable()
        {
            if (iPropertyPausable == null)
                throw new PropertyDisabledError();
            return iPropertyPausable.Value();
        }

        /// <summary>
        /// Set the value of the TransportState property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTransportState has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyTransportState(string aValue)
        {
            if (iPropertyTransportState == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyTransportState, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the TransportState property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTransportState has previously been called.</remarks>
        /// <returns>Value of the TransportState property.</returns>
        public string PropertyTransportState()
        {
            if (iPropertyTransportState == null)
                throw new PropertyDisabledError();
            return iPropertyTransportState.Value();
        }

        /// <summary>
        /// Set the value of the Repeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeat has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRepeat(uint aValue)
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyRepeat, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeat has previously been called.</remarks>
        /// <returns>Value of the Repeat property.</returns>
        public uint PropertyRepeat()
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return iPropertyRepeat.Value();
        }

        /// <summary>
        /// Set the value of the Shuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffle has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyShuffle(uint aValue)
        {
            if (iPropertyShuffle == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyShuffle, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Shuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyShuffle has previously been called.</remarks>
        /// <returns>Value of the Shuffle property.</returns>
        public uint PropertyShuffle()
        {
            if (iPropertyShuffle == null)
                throw new PropertyDisabledError();
            return iPropertyShuffle.Value();
        }

        /// <summary>
        /// Signal that the action PlayAs is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// PlayAs must be overridden if this is called.</remarks>
        protected void EnableActionPlayAs()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("PlayAs");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Mode", allowedValues));
            action.AddInputParameter(new ParameterString("Command", allowedValues));
            iDelegatePlayAs = new ActionDelegate(DoPlayAs);
            EnableAction(action, iDelegatePlayAs, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Play is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Play must be overridden if this is called.</remarks>
        protected void EnableActionPlay()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Play");
            iDelegatePlay = new ActionDelegate(DoPlay);
            EnableAction(action, iDelegatePlay, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Pause is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Pause must be overridden if this is called.</remarks>
        protected void EnableActionPause()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Pause");
            iDelegatePause = new ActionDelegate(DoPause);
            EnableAction(action, iDelegatePause, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Stop is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Stop must be overridden if this is called.</remarks>
        protected void EnableActionStop()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Stop");
            iDelegateStop = new ActionDelegate(DoStop);
            EnableAction(action, iDelegateStop, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Next is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Next must be overridden if this is called.</remarks>
        protected void EnableActionNext()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Next");
            iDelegateNext = new ActionDelegate(DoNext);
            EnableAction(action, iDelegateNext, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Previous is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Previous must be overridden if this is called.</remarks>
        protected void EnableActionPrevious()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Previous");
            iDelegatePrevious = new ActionDelegate(DoPrevious);
            EnableAction(action, iDelegatePrevious, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRepeat is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRepeat must be overridden if this is called.</remarks>
        protected void EnableActionSetRepeat()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRepeat");
            action.AddInputParameter(new ParameterUint("Repeat"));
            iDelegateSetRepeat = new ActionDelegate(DoSetRepeat);
            EnableAction(action, iDelegateSetRepeat, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetShuffle is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetShuffle must be overridden if this is called.</remarks>
        protected void EnableActionSetShuffle()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetShuffle");
            action.AddInputParameter(new ParameterUint("Shuffle"));
            iDelegateSetShuffle = new ActionDelegate(DoSetShuffle);
            EnableAction(action, iDelegateSetShuffle, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondAbsolute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondAbsolute must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondAbsolute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondAbsolute");
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            action.AddInputParameter(new ParameterUint("SecondsAbsolute"));
            iDelegateSeekSecondAbsolute = new ActionDelegate(DoSeekSecondAbsolute);
            EnableAction(action, iDelegateSeekSecondAbsolute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondRelative is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondRelative must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondRelative()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondRelative");
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            action.AddInputParameter(new ParameterInt("SecondsRelative"));
            iDelegateSeekSecondRelative = new ActionDelegate(DoSeekSecondRelative);
            EnableAction(action, iDelegateSeekSecondRelative, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action TransportState is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// TransportState must be overridden if this is called.</remarks>
        protected void EnableActionTransportState()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("TransportState");
            action.AddOutputParameter(new ParameterRelated("State", iPropertyTransportState));
            iDelegateTransportState = new ActionDelegate(DoTransportState);
            EnableAction(action, iDelegateTransportState, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Modes is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Modes must be overridden if this is called.</remarks>
        protected void EnableActionModes()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Modes");
            action.AddOutputParameter(new ParameterRelated("Modes", iPropertyModes));
            iDelegateModes = new ActionDelegate(DoModes);
            EnableAction(action, iDelegateModes, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action ModeInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// ModeInfo must be overridden if this is called.</remarks>
        protected void EnableActionModeInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("ModeInfo");
            action.AddOutputParameter(new ParameterRelated("NextAvailable", iPropertyNextAvailable));
            action.AddOutputParameter(new ParameterRelated("PreviousAvailable", iPropertyPreviousAvailable));
            action.AddOutputParameter(new ParameterRelated("RepeatAvailable", iPropertyRepeatAvailable));
            action.AddOutputParameter(new ParameterRelated("ShuffleAvailable", iPropertyShuffleAvailable));
            iDelegateModeInfo = new ActionDelegate(DoModeInfo);
            EnableAction(action, iDelegateModeInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action StreamInfo is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// StreamInfo must be overridden if this is called.</remarks>
        protected void EnableActionStreamInfo()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("StreamInfo");
            action.AddOutputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            action.AddOutputParameter(new ParameterRelated("Seekable", iPropertySeekable));
            action.AddOutputParameter(new ParameterRelated("Pausable", iPropertyPausable));
            iDelegateStreamInfo = new ActionDelegate(DoStreamInfo);
            EnableAction(action, iDelegateStreamInfo, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action StreamId is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// StreamId must be overridden if this is called.</remarks>
        protected void EnableActionStreamId()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("StreamId");
            action.AddOutputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            iDelegateStreamId = new ActionDelegate(DoStreamId);
            EnableAction(action, iDelegateStreamId, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Repeat is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Repeat must be overridden if this is called.</remarks>
        protected void EnableActionRepeat()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Repeat");
            action.AddOutputParameter(new ParameterRelated("Repeat", iPropertyRepeat));
            iDelegateRepeat = new ActionDelegate(DoRepeat);
            EnableAction(action, iDelegateRepeat, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Shuffle is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Shuffle must be overridden if this is called.</remarks>
        protected void EnableActionShuffle()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Shuffle");
            action.AddOutputParameter(new ParameterRelated("Shuffle", iPropertyShuffle));
            iDelegateShuffle = new ActionDelegate(DoShuffle);
            EnableAction(action, iDelegateShuffle, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// PlayAs action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// PlayAs action for the owning device.
        ///
        /// Must be implemented iff EnableActionPlayAs was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aMode"></param>
        /// <param name="aCommand"></param>
        protected virtual void PlayAs(IDvInvocation aInvocation, string aMode, string aCommand)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Play action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Play action for the owning device.
        ///
        /// Must be implemented iff EnableActionPlay was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Play(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Pause action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Pause action for the owning device.
        ///
        /// Must be implemented iff EnableActionPause was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Pause(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Stop action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Stop action for the owning device.
        ///
        /// Must be implemented iff EnableActionStop was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Stop(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Next action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Next action for the owning device.
        ///
        /// Must be implemented iff EnableActionNext was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Next(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Previous action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Previous action for the owning device.
        ///
        /// Must be implemented iff EnableActionPrevious was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void Previous(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetRepeat action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetRepeat action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetRepeat was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRepeat"></param>
        protected virtual void SetRepeat(IDvInvocation aInvocation, uint aRepeat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetShuffle action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetShuffle action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetShuffle was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aShuffle"></param>
        protected virtual void SetShuffle(IDvInvocation aInvocation, uint aShuffle)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondAbsolute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondAbsolute action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondAbsolute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsAbsolute"></param>
        protected virtual void SeekSecondAbsolute(IDvInvocation aInvocation, uint aStreamId, uint aSecondsAbsolute)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondRelative action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondRelative action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondRelative was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsRelative"></param>
        protected virtual void SeekSecondRelative(IDvInvocation aInvocation, uint aStreamId, int aSecondsRelative)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// TransportState action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// TransportState action for the owning device.
        ///
        /// Must be implemented iff EnableActionTransportState was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aState"></param>
        protected virtual void TransportState(IDvInvocation aInvocation, out string aState)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Modes action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Modes action for the owning device.
        ///
        /// Must be implemented iff EnableActionModes was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aModes"></param>
        protected virtual void Modes(IDvInvocation aInvocation, out string aModes)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// ModeInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// ModeInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionModeInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aNextAvailable"></param>
        /// <param name="aPreviousAvailable"></param>
        /// <param name="aRepeatAvailable"></param>
        /// <param name="aShuffleAvailable"></param>
        protected virtual void ModeInfo(IDvInvocation aInvocation, out bool aNextAvailable, out bool aPreviousAvailable, out bool aRepeatAvailable, out bool aShuffleAvailable)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// StreamInfo action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// StreamInfo action for the owning device.
        ///
        /// Must be implemented iff EnableActionStreamInfo was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        /// <param name="aSeekable"></param>
        /// <param name="aPausable"></param>
        protected virtual void StreamInfo(IDvInvocation aInvocation, out uint aStreamId, out bool aSeekable, out bool aPausable)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// StreamId action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// StreamId action for the owning device.
        ///
        /// Must be implemented iff EnableActionStreamId was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        protected virtual void StreamId(IDvInvocation aInvocation, out uint aStreamId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Repeat action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Repeat action for the owning device.
        ///
        /// Must be implemented iff EnableActionRepeat was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRepeat"></param>
        protected virtual void Repeat(IDvInvocation aInvocation, out uint aRepeat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Shuffle action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Shuffle action for the owning device.
        ///
        /// Must be implemented iff EnableActionShuffle was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aShuffle"></param>
        protected virtual void Shuffle(IDvInvocation aInvocation, out uint aShuffle)
        {
            throw (new ActionDisabledError());
        }

        private static int DoPlayAs(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string mode;
            string command;
            try
            {
                invocation.ReadStart();
                mode = invocation.ReadString("Mode");
                command = invocation.ReadString("Command");
                invocation.ReadEnd();
                self.PlayAs(invocation, mode, command);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "PlayAs");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "PlayAs" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PlayAs" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "PlayAs" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPlay(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Play(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Play");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Play" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Play" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Play" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPause(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Pause(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Pause");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Pause" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Pause" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Pause" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoStop(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Stop(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Stop");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Stop" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Stop" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Stop" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoNext(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Next(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Next");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Next" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Next" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Next" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoPrevious(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Previous(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Previous");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Previous" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Previous" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Previous" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetRepeat(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint repeat;
            try
            {
                invocation.ReadStart();
                repeat = invocation.ReadUint("Repeat");
                invocation.ReadEnd();
                self.SetRepeat(invocation, repeat);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetRepeat");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetRepeat" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRepeat" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRepeat" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetShuffle(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint shuffle;
            try
            {
                invocation.ReadStart();
                shuffle = invocation.ReadUint("Shuffle");
                invocation.ReadEnd();
                self.SetShuffle(invocation, shuffle);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetShuffle");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetShuffle" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetShuffle" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetShuffle" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondAbsolute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint streamId;
            uint secondsAbsolute;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                secondsAbsolute = invocation.ReadUint("SecondsAbsolute");
                invocation.ReadEnd();
                self.SeekSecondAbsolute(invocation, streamId, secondsAbsolute);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondAbsolute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SeekSecondAbsolute" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondAbsolute" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondAbsolute" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondRelative(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint streamId;
            int secondsRelative;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                secondsRelative = invocation.ReadInt("SecondsRelative");
                invocation.ReadEnd();
                self.SeekSecondRelative(invocation, streamId, secondsRelative);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondRelative");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SeekSecondRelative" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondRelative" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondRelative" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoTransportState(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string state;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.TransportState(invocation, out state);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "TransportState");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "TransportState" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "TransportState" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("State", state);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "TransportState" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoModes(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string modes;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Modes(invocation, out modes);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Modes");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Modes" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Modes" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteString("Modes", modes);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Modes" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoModeInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool nextAvailable;
            bool previousAvailable;
            bool repeatAvailable;
            bool shuffleAvailable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ModeInfo(invocation, out nextAvailable, out previousAvailable, out repeatAvailable, out shuffleAvailable);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "ModeInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "ModeInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ModeInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("NextAvailable", nextAvailable);
                invocation.WriteBool("PreviousAvailable", previousAvailable);
                invocation.WriteBool("RepeatAvailable", repeatAvailable);
                invocation.WriteBool("ShuffleAvailable", shuffleAvailable);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "ModeInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoStreamInfo(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint streamId;
            bool seekable;
            bool pausable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.StreamInfo(invocation, out streamId, out seekable, out pausable);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "StreamInfo");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "StreamInfo" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "StreamInfo" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("StreamId", streamId);
                invocation.WriteBool("Seekable", seekable);
                invocation.WriteBool("Pausable", pausable);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "StreamInfo" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoStreamId(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint streamId;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.StreamId(invocation, out streamId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "StreamId");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "StreamId" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "StreamId" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("StreamId", streamId);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "StreamId" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoRepeat(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint repeat;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Repeat(invocation, out repeat);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Repeat");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Repeat" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Repeat" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Repeat", repeat);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Repeat" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoShuffle(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint shuffle;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Shuffle(invocation, out shuffle);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Shuffle");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Shuffle" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Shuffle" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Shuffle", shuffle);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Shuffle" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        /// <summary>
        /// Must be called for each class instance.  Must be called before Core.Library.Close().
        /// </summary>
        public virtual void Dispose()
        {
            if (DisposeProvider())
                iGch.Free();
        }
    }
}

