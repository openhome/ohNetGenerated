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
        /// Set the value of the PrevAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyPrevAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the PrevAvailable property
        /// </summary>
        /// <returns>Value of the PrevAvailable property.</param>
        bool PropertyPrevAvailable();

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
        /// Set the value of the RandomAvailable property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRandomAvailable(bool aValue);

        /// <summary>
        /// Get a copy of the value of the RandomAvailable property
        /// </summary>
        /// <returns>Value of the RandomAvailable property.</param>
        bool PropertyRandomAvailable();

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
        bool SetPropertyRepeat(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <returns>Value of the Repeat property.</param>
        bool PropertyRepeat();

        /// <summary>
        /// Set the value of the Random property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyRandom(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Random property
        /// </summary>
        /// <returns>Value of the Random property.</param>
        bool PropertyRandom();
        
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
        private ActionDelegate iDelegatePrev;
        private ActionDelegate iDelegateSetRepeat;
        private ActionDelegate iDelegateSetRandom;
        private ActionDelegate iDelegateSeekSecondsAbsolute;
        private ActionDelegate iDelegateSeekSecondsRelative;
        private ActionDelegate iDelegateTransportState;
        private ActionDelegate iDelegateModes;
        private ActionDelegate iDelegateModeInfo;
        private ActionDelegate iDelegateStreamInfo;
        private ActionDelegate iDelegateStreamId;
        private ActionDelegate iDelegateRepeat;
        private ActionDelegate iDelegateRandom;
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
        /// Enable the PrevAvailable property.
        /// </summary>
        public void EnablePropertyPrevAvailable()
        {
            iPropertyPrevAvailable = new PropertyBool(new ParameterBool("PrevAvailable"));
            AddProperty(iPropertyPrevAvailable);
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
        /// Enable the RandomAvailable property.
        /// </summary>
        public void EnablePropertyRandomAvailable()
        {
            iPropertyRandomAvailable = new PropertyBool(new ParameterBool("RandomAvailable"));
            AddProperty(iPropertyRandomAvailable);
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
            iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
            AddProperty(iPropertyRepeat);
        }

        /// <summary>
        /// Enable the Random property.
        /// </summary>
        public void EnablePropertyRandom()
        {
            iPropertyRandom = new PropertyBool(new ParameterBool("Random"));
            AddProperty(iPropertyRandom);
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
        /// Set the value of the PrevAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPrevAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyPrevAvailable(bool aValue)
        {
            if (iPropertyPrevAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyPrevAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the PrevAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyPrevAvailable has previously been called.</remarks>
        /// <returns>Value of the PrevAvailable property.</returns>
        public bool PropertyPrevAvailable()
        {
            if (iPropertyPrevAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyPrevAvailable.Value();
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
        /// Set the value of the RandomAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRandomAvailable has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRandomAvailable(bool aValue)
        {
            if (iPropertyRandomAvailable == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRandomAvailable, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the RandomAvailable property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRandomAvailable has previously been called.</remarks>
        /// <returns>Value of the RandomAvailable property.</returns>
        public bool PropertyRandomAvailable()
        {
            if (iPropertyRandomAvailable == null)
                throw new PropertyDisabledError();
            return iPropertyRandomAvailable.Value();
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
        public bool SetPropertyRepeat(bool aValue)
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRepeat, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Repeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRepeat has previously been called.</remarks>
        /// <returns>Value of the Repeat property.</returns>
        public bool PropertyRepeat()
        {
            if (iPropertyRepeat == null)
                throw new PropertyDisabledError();
            return iPropertyRepeat.Value();
        }

        /// <summary>
        /// Set the value of the Random property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRandom has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyRandom(bool aValue)
        {
            if (iPropertyRandom == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyRandom, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Random property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyRandom has previously been called.</remarks>
        /// <returns>Value of the Random property.</returns>
        public bool PropertyRandom()
        {
            if (iPropertyRandom == null)
                throw new PropertyDisabledError();
            return iPropertyRandom.Value();
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
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            iDelegateNext = new ActionDelegate(DoNext);
            EnableAction(action, iDelegateNext, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Prev is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Prev must be overridden if this is called.</remarks>
        protected void EnableActionPrev()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Prev");
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            iDelegatePrev = new ActionDelegate(DoPrev);
            EnableAction(action, iDelegatePrev, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRepeat is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRepeat must be overridden if this is called.</remarks>
        protected void EnableActionSetRepeat()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRepeat");
            action.AddInputParameter(new ParameterBool("Repeat"));
            iDelegateSetRepeat = new ActionDelegate(DoSetRepeat);
            EnableAction(action, iDelegateSetRepeat, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRandom is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRandom must be overridden if this is called.</remarks>
        protected void EnableActionSetRandom()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRandom");
            action.AddInputParameter(new ParameterBool("Random"));
            iDelegateSetRandom = new ActionDelegate(DoSetRandom);
            EnableAction(action, iDelegateSetRandom, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondsAbsolute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondsAbsolute must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondsAbsolute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondsAbsolute");
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            action.AddInputParameter(new ParameterUint("SecondsAbsolute"));
            iDelegateSeekSecondsAbsolute = new ActionDelegate(DoSeekSecondsAbsolute);
            EnableAction(action, iDelegateSeekSecondsAbsolute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SeekSecondsRelative is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SeekSecondsRelative must be overridden if this is called.</remarks>
        protected void EnableActionSeekSecondsRelative()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SeekSecondsRelative");
            action.AddInputParameter(new ParameterRelated("StreamId", iPropertyStreamId));
            action.AddInputParameter(new ParameterInt("SecondsRelative"));
            iDelegateSeekSecondsRelative = new ActionDelegate(DoSeekSecondsRelative);
            EnableAction(action, iDelegateSeekSecondsRelative, GCHandle.ToIntPtr(iGch));
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
            action.AddOutputParameter(new ParameterRelated("PrevAvailable", iPropertyPrevAvailable));
            action.AddOutputParameter(new ParameterRelated("RepeatAvailable", iPropertyRepeatAvailable));
            action.AddOutputParameter(new ParameterRelated("RandomAvailable", iPropertyRandomAvailable));
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
        /// Signal that the action Random is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Random must be overridden if this is called.</remarks>
        protected void EnableActionRandom()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Random");
            action.AddOutputParameter(new ParameterRelated("Random", iPropertyRandom));
            iDelegateRandom = new ActionDelegate(DoRandom);
            EnableAction(action, iDelegateRandom, GCHandle.ToIntPtr(iGch));
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
        /// <param name="aStreamId"></param>
        protected virtual void Next(IDvInvocation aInvocation, uint aStreamId)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Prev action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Prev action for the owning device.
        ///
        /// Must be implemented iff EnableActionPrev was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        protected virtual void Prev(IDvInvocation aInvocation, uint aStreamId)
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
        protected virtual void SetRepeat(IDvInvocation aInvocation, bool aRepeat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetRandom action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetRandom action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetRandom was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRandom"></param>
        protected virtual void SetRandom(IDvInvocation aInvocation, bool aRandom)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondsAbsolute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondsAbsolute action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondsAbsolute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsAbsolute"></param>
        protected virtual void SeekSecondsAbsolute(IDvInvocation aInvocation, uint aStreamId, uint aSecondsAbsolute)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SeekSecondsRelative action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SeekSecondsRelative action for the owning device.
        ///
        /// Must be implemented iff EnableActionSeekSecondsRelative was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aStreamId"></param>
        /// <param name="aSecondsRelative"></param>
        protected virtual void SeekSecondsRelative(IDvInvocation aInvocation, uint aStreamId, int aSecondsRelative)
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
        /// <param name="aPrevAvailable"></param>
        /// <param name="aRepeatAvailable"></param>
        /// <param name="aRandomAvailable"></param>
        protected virtual void ModeInfo(IDvInvocation aInvocation, out bool aNextAvailable, out bool aPrevAvailable, out bool aRepeatAvailable, out bool aRandomAvailable)
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
        protected virtual void Repeat(IDvInvocation aInvocation, out bool aRepeat)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Random action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Random action for the owning device.
        ///
        /// Must be implemented iff EnableActionRandom was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aRandom"></param>
        protected virtual void Random(IDvInvocation aInvocation, out bool aRandom)
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
            uint streamId;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                invocation.ReadEnd();
                self.Next(invocation, streamId);
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

        private static int DoPrev(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint streamId;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                invocation.ReadEnd();
                self.Prev(invocation, streamId);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Prev");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Prev" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Prev" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Prev" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetRepeat(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool repeat;
            try
            {
                invocation.ReadStart();
                repeat = invocation.ReadBool("Repeat");
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

        private static int DoSetRandom(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool random;
            try
            {
                invocation.ReadStart();
                random = invocation.ReadBool("Random");
                invocation.ReadEnd();
                self.SetRandom(invocation, random);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetRandom");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetRandom" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRandom" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetRandom" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondsAbsolute(IntPtr aPtr, IntPtr aInvocation)
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
                self.SeekSecondsAbsolute(invocation, streamId, secondsAbsolute);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondsAbsolute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SeekSecondsAbsolute" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondsAbsolute" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondsAbsolute" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSeekSecondsRelative(IntPtr aPtr, IntPtr aInvocation)
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
                self.SeekSecondsRelative(invocation, streamId, secondsRelative);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SeekSecondsRelative");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SeekSecondsRelative" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondsRelative" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SeekSecondsRelative" });
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
            bool prevAvailable;
            bool repeatAvailable;
            bool randomAvailable;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ModeInfo(invocation, out nextAvailable, out prevAvailable, out repeatAvailable, out randomAvailable);
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
                invocation.WriteBool("PrevAvailable", prevAvailable);
                invocation.WriteBool("RepeatAvailable", repeatAvailable);
                invocation.WriteBool("RandomAvailable", randomAvailable);
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
            bool repeat;
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
                invocation.WriteBool("Repeat", repeat);
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

        private static int DoRandom(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool random;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Random(invocation, out random);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Random");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Random" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Random" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Random", random);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Random" });
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

