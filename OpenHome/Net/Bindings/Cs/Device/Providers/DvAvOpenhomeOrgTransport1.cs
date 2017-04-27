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
        /// Set the value of the CanSkipNext property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanSkipNext(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanSkipNext property
        /// </summary>
        /// <returns>Value of the CanSkipNext property.</param>
        bool PropertyCanSkipNext();

        /// <summary>
        /// Set the value of the CanSkipPrevious property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanSkipPrevious(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanSkipPrevious property
        /// </summary>
        /// <returns>Value of the CanSkipPrevious property.</param>
        bool PropertyCanSkipPrevious();

        /// <summary>
        /// Set the value of the CanRepeat property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanRepeat(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanRepeat property
        /// </summary>
        /// <returns>Value of the CanRepeat property.</param>
        bool PropertyCanRepeat();

        /// <summary>
        /// Set the value of the CanShuffle property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanShuffle(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanShuffle property
        /// </summary>
        /// <returns>Value of the CanShuffle property.</param>
        bool PropertyCanShuffle();

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
        /// Set the value of the CanSeek property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanSeek(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanSeek property
        /// </summary>
        /// <returns>Value of the CanSeek property.</param>
        bool PropertyCanSeek();

        /// <summary>
        /// Set the value of the CanPause property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyCanPause(bool aValue);

        /// <summary>
        /// Get a copy of the value of the CanPause property
        /// </summary>
        /// <returns>Value of the CanPause property.</param>
        bool PropertyCanPause();

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
        private ActionDelegate iDelegateSkipNext;
        private ActionDelegate iDelegateSkipPrevious;
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
        /// Enable the CanSkipNext property.
        /// </summary>
        public void EnablePropertyCanSkipNext()
        {
            iPropertyCanSkipNext = new PropertyBool(new ParameterBool("CanSkipNext"));
            AddProperty(iPropertyCanSkipNext);
        }

        /// <summary>
        /// Enable the CanSkipPrevious property.
        /// </summary>
        public void EnablePropertyCanSkipPrevious()
        {
            iPropertyCanSkipPrevious = new PropertyBool(new ParameterBool("CanSkipPrevious"));
            AddProperty(iPropertyCanSkipPrevious);
        }

        /// <summary>
        /// Enable the CanRepeat property.
        /// </summary>
        public void EnablePropertyCanRepeat()
        {
            iPropertyCanRepeat = new PropertyBool(new ParameterBool("CanRepeat"));
            AddProperty(iPropertyCanRepeat);
        }

        /// <summary>
        /// Enable the CanShuffle property.
        /// </summary>
        public void EnablePropertyCanShuffle()
        {
            iPropertyCanShuffle = new PropertyBool(new ParameterBool("CanShuffle"));
            AddProperty(iPropertyCanShuffle);
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
        /// Enable the CanSeek property.
        /// </summary>
        public void EnablePropertyCanSeek()
        {
            iPropertyCanSeek = new PropertyBool(new ParameterBool("CanSeek"));
            AddProperty(iPropertyCanSeek);
        }

        /// <summary>
        /// Enable the CanPause property.
        /// </summary>
        public void EnablePropertyCanPause()
        {
            iPropertyCanPause = new PropertyBool(new ParameterBool("CanPause"));
            AddProperty(iPropertyCanPause);
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
        /// Set the value of the CanSkipNext property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSkipNext has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanSkipNext(bool aValue)
        {
            if (iPropertyCanSkipNext == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanSkipNext, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanSkipNext property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSkipNext has previously been called.</remarks>
        /// <returns>Value of the CanSkipNext property.</returns>
        public bool PropertyCanSkipNext()
        {
            if (iPropertyCanSkipNext == null)
                throw new PropertyDisabledError();
            return iPropertyCanSkipNext.Value();
        }

        /// <summary>
        /// Set the value of the CanSkipPrevious property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSkipPrevious has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanSkipPrevious(bool aValue)
        {
            if (iPropertyCanSkipPrevious == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanSkipPrevious, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanSkipPrevious property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSkipPrevious has previously been called.</remarks>
        /// <returns>Value of the CanSkipPrevious property.</returns>
        public bool PropertyCanSkipPrevious()
        {
            if (iPropertyCanSkipPrevious == null)
                throw new PropertyDisabledError();
            return iPropertyCanSkipPrevious.Value();
        }

        /// <summary>
        /// Set the value of the CanRepeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanRepeat has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanRepeat(bool aValue)
        {
            if (iPropertyCanRepeat == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanRepeat, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanRepeat property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanRepeat has previously been called.</remarks>
        /// <returns>Value of the CanRepeat property.</returns>
        public bool PropertyCanRepeat()
        {
            if (iPropertyCanRepeat == null)
                throw new PropertyDisabledError();
            return iPropertyCanRepeat.Value();
        }

        /// <summary>
        /// Set the value of the CanShuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanShuffle has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanShuffle(bool aValue)
        {
            if (iPropertyCanShuffle == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanShuffle, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanShuffle property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanShuffle has previously been called.</remarks>
        /// <returns>Value of the CanShuffle property.</returns>
        public bool PropertyCanShuffle()
        {
            if (iPropertyCanShuffle == null)
                throw new PropertyDisabledError();
            return iPropertyCanShuffle.Value();
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
        /// Set the value of the CanSeek property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSeek has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanSeek(bool aValue)
        {
            if (iPropertyCanSeek == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanSeek, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanSeek property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanSeek has previously been called.</remarks>
        /// <returns>Value of the CanSeek property.</returns>
        public bool PropertyCanSeek()
        {
            if (iPropertyCanSeek == null)
                throw new PropertyDisabledError();
            return iPropertyCanSeek.Value();
        }

        /// <summary>
        /// Set the value of the CanPause property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanPause has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyCanPause(bool aValue)
        {
            if (iPropertyCanPause == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyCanPause, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the CanPause property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyCanPause has previously been called.</remarks>
        /// <returns>Value of the CanPause property.</returns>
        public bool PropertyCanPause()
        {
            if (iPropertyCanPause == null)
                throw new PropertyDisabledError();
            return iPropertyCanPause.Value();
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
        /// Signal that the action SkipNext is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SkipNext must be overridden if this is called.</remarks>
        protected void EnableActionSkipNext()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SkipNext");
            iDelegateSkipNext = new ActionDelegate(DoSkipNext);
            EnableAction(action, iDelegateSkipNext, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SkipPrevious is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SkipPrevious must be overridden if this is called.</remarks>
        protected void EnableActionSkipPrevious()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SkipPrevious");
            iDelegateSkipPrevious = new ActionDelegate(DoSkipPrevious);
            EnableAction(action, iDelegateSkipPrevious, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetRepeat is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetRepeat must be overridden if this is called.</remarks>
        protected void EnableActionSetRepeat()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetRepeat");
            action.AddInputParameter(new ParameterRelated("Repeat", iPropertyRepeat));
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
            action.AddInputParameter(new ParameterRelated("Shuffle", iPropertyShuffle));
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
            action.AddInputParameter(new ParameterUint("SecondAbsolute"));
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
            action.AddInputParameter(new ParameterInt("SecondRelative"));
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
            action.AddOutputParameter(new ParameterRelated("CanSkipNext", iPropertyCanSkipNext));
            action.AddOutputParameter(new ParameterRelated("CanSkipPrevious", iPropertyCanSkipPrevious));
            action.AddOutputParameter(new ParameterRelated("CanRepeat", iPropertyCanRepeat));
            action.AddOutputParameter(new ParameterRelated("CanShuffle", iPropertyCanShuffle));
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
            action.AddOutputParameter(new ParameterRelated("CanSeek", iPropertyCanSeek));
            action.AddOutputParameter(new ParameterRelated("CanPause", iPropertyCanPause));
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
        /// SkipNext action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SkipNext action for the owning device.
        ///
        /// Must be implemented iff EnableActionSkipNext was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void SkipNext(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SkipPrevious action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SkipPrevious action for the owning device.
        ///
        /// Must be implemented iff EnableActionSkipPrevious was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void SkipPrevious(IDvInvocation aInvocation)
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
        /// <param name="aSecondAbsolute"></param>
        protected virtual void SeekSecondAbsolute(IDvInvocation aInvocation, uint aStreamId, uint aSecondAbsolute)
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
        /// <param name="aSecondRelative"></param>
        protected virtual void SeekSecondRelative(IDvInvocation aInvocation, uint aStreamId, int aSecondRelative)
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
        /// <param name="aCanSkipNext"></param>
        /// <param name="aCanSkipPrevious"></param>
        /// <param name="aCanRepeat"></param>
        /// <param name="aCanShuffle"></param>
        protected virtual void ModeInfo(IDvInvocation aInvocation, out bool aCanSkipNext, out bool aCanSkipPrevious, out bool aCanRepeat, out bool aCanShuffle)
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
        /// <param name="aCanSeek"></param>
        /// <param name="aCanPause"></param>
        protected virtual void StreamInfo(IDvInvocation aInvocation, out uint aStreamId, out bool aCanSeek, out bool aCanPause)
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

        private static int DoSkipNext(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SkipNext(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SkipNext");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SkipNext" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SkipNext" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SkipNext" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSkipPrevious(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgTransport1 self = (DvProviderAvOpenhomeOrgTransport1)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.SkipPrevious(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SkipPrevious");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SkipPrevious" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SkipPrevious" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SkipPrevious" });
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
            uint secondAbsolute;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                secondAbsolute = invocation.ReadUint("SecondAbsolute");
                invocation.ReadEnd();
                self.SeekSecondAbsolute(invocation, streamId, secondAbsolute);
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
            int secondRelative;
            try
            {
                invocation.ReadStart();
                streamId = invocation.ReadUint("StreamId");
                secondRelative = invocation.ReadInt("SecondRelative");
                invocation.ReadEnd();
                self.SeekSecondRelative(invocation, streamId, secondRelative);
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
            bool canSkipNext;
            bool canSkipPrevious;
            bool canRepeat;
            bool canShuffle;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.ModeInfo(invocation, out canSkipNext, out canSkipPrevious, out canRepeat, out canShuffle);
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
                invocation.WriteBool("CanSkipNext", canSkipNext);
                invocation.WriteBool("CanSkipPrevious", canSkipPrevious);
                invocation.WriteBool("CanRepeat", canRepeat);
                invocation.WriteBool("CanShuffle", canShuffle);
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
            bool canSeek;
            bool canPause;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.StreamInfo(invocation, out streamId, out canSeek, out canPause);
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
                invocation.WriteBool("CanSeek", canSeek);
                invocation.WriteBool("CanPause", canPause);
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

