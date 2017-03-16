using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections.Generic;
using OpenHome.Net.Core;

namespace OpenHome.Net.Device.Providers
{
    public interface IDvProviderAvOpenhomeOrgVolume3 : IDisposable
    {

        /// <summary>
        /// Set the value of the Volume property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolume(uint aValue);

        /// <summary>
        /// Get a copy of the value of the Volume property
        /// </summary>
        /// <returns>Value of the Volume property.</param>
        uint PropertyVolume();

        /// <summary>
        /// Set the value of the Mute property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyMute(bool aValue);

        /// <summary>
        /// Get a copy of the value of the Mute property
        /// </summary>
        /// <returns>Value of the Mute property.</param>
        bool PropertyMute();

        /// <summary>
        /// Set the value of the Balance property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyBalance(int aValue);

        /// <summary>
        /// Get a copy of the value of the Balance property
        /// </summary>
        /// <returns>Value of the Balance property.</param>
        int PropertyBalance();

        /// <summary>
        /// Set the value of the Fade property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyFade(int aValue);

        /// <summary>
        /// Get a copy of the value of the Fade property
        /// </summary>
        /// <returns>Value of the Fade property.</param>
        int PropertyFade();

        /// <summary>
        /// Set the value of the VolumeLimit property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeLimit(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeLimit property
        /// </summary>
        /// <returns>Value of the VolumeLimit property.</param>
        uint PropertyVolumeLimit();

        /// <summary>
        /// Set the value of the VolumeMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeMax property
        /// </summary>
        /// <returns>Value of the VolumeMax property.</param>
        uint PropertyVolumeMax();

        /// <summary>
        /// Set the value of the VolumeUnity property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeUnity(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeUnity property
        /// </summary>
        /// <returns>Value of the VolumeUnity property.</param>
        uint PropertyVolumeUnity();

        /// <summary>
        /// Set the value of the VolumeSteps property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeSteps(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeSteps property
        /// </summary>
        /// <returns>Value of the VolumeSteps property.</param>
        uint PropertyVolumeSteps();

        /// <summary>
        /// Set the value of the VolumeMilliDbPerStep property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeMilliDbPerStep(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeMilliDbPerStep property
        /// </summary>
        /// <returns>Value of the VolumeMilliDbPerStep property.</param>
        uint PropertyVolumeMilliDbPerStep();

        /// <summary>
        /// Set the value of the BalanceMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyBalanceMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the BalanceMax property
        /// </summary>
        /// <returns>Value of the BalanceMax property.</param>
        uint PropertyBalanceMax();

        /// <summary>
        /// Set the value of the FadeMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyFadeMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the FadeMax property
        /// </summary>
        /// <returns>Value of the FadeMax property.</param>
        uint PropertyFadeMax();

        /// <summary>
        /// Set the value of the UnityGain property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyUnityGain(bool aValue);

        /// <summary>
        /// Get a copy of the value of the UnityGain property
        /// </summary>
        /// <returns>Value of the UnityGain property.</param>
        bool PropertyUnityGain();

        /// <summary>
        /// Set the value of the VolumeOffsets property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeOffsets(string aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeOffsets property
        /// </summary>
        /// <returns>Value of the VolumeOffsets property.</param>
        string PropertyVolumeOffsets();

        /// <summary>
        /// Set the value of the VolumeOffsetMax property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyVolumeOffsetMax(uint aValue);

        /// <summary>
        /// Get a copy of the value of the VolumeOffsetMax property
        /// </summary>
        /// <returns>Value of the VolumeOffsetMax property.</param>
        uint PropertyVolumeOffsetMax();

        /// <summary>
        /// Set the value of the Trim property
        /// </summary>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        bool SetPropertyTrim(string aValue);

        /// <summary>
        /// Get a copy of the value of the Trim property
        /// </summary>
        /// <returns>Value of the Trim property.</param>
        string PropertyTrim();
        
    }
    /// <summary>
    /// Provider for the av.openhome.org:Volume:3 UPnP service
    /// </summary>
    public class DvProviderAvOpenhomeOrgVolume3 : DvProvider, IDisposable, IDvProviderAvOpenhomeOrgVolume3
    {
        private GCHandle iGch;
        private ActionDelegate iDelegateCharacteristics;
        private ActionDelegate iDelegateSetVolume;
        private ActionDelegate iDelegateVolumeInc;
        private ActionDelegate iDelegateVolumeDec;
        private ActionDelegate iDelegateVolume;
        private ActionDelegate iDelegateSetBalance;
        private ActionDelegate iDelegateBalanceInc;
        private ActionDelegate iDelegateBalanceDec;
        private ActionDelegate iDelegateBalance;
        private ActionDelegate iDelegateSetFade;
        private ActionDelegate iDelegateFadeInc;
        private ActionDelegate iDelegateFadeDec;
        private ActionDelegate iDelegateFade;
        private ActionDelegate iDelegateSetMute;
        private ActionDelegate iDelegateMute;
        private ActionDelegate iDelegateVolumeLimit;
        private ActionDelegate iDelegateUnityGain;
        private ActionDelegate iDelegateVolumeOffset;
        private ActionDelegate iDelegateSetVolumeOffset;
        private ActionDelegate iDelegateTrim;
        private ActionDelegate iDelegateSetTrim;
        private PropertyUint iPropertyVolume;
        private PropertyBool iPropertyMute;
        private PropertyInt iPropertyBalance;
        private PropertyInt iPropertyFade;
        private PropertyUint iPropertyVolumeLimit;
        private PropertyUint iPropertyVolumeMax;
        private PropertyUint iPropertyVolumeUnity;
        private PropertyUint iPropertyVolumeSteps;
        private PropertyUint iPropertyVolumeMilliDbPerStep;
        private PropertyUint iPropertyBalanceMax;
        private PropertyUint iPropertyFadeMax;
        private PropertyBool iPropertyUnityGain;
        private PropertyString iPropertyVolumeOffsets;
        private PropertyUint iPropertyVolumeOffsetMax;
        private PropertyString iPropertyTrim;

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="aDevice">Device which owns this provider</param>
        protected DvProviderAvOpenhomeOrgVolume3(DvDevice aDevice)
            : base(aDevice, "av.openhome.org", "Volume", 3)
        {
            iGch = GCHandle.Alloc(this);
        }

        /// <summary>
        /// Enable the Volume property.
        /// </summary>
        public void EnablePropertyVolume()
        {
            iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
            AddProperty(iPropertyVolume);
        }

        /// <summary>
        /// Enable the Mute property.
        /// </summary>
        public void EnablePropertyMute()
        {
            iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
            AddProperty(iPropertyMute);
        }

        /// <summary>
        /// Enable the Balance property.
        /// </summary>
        public void EnablePropertyBalance()
        {
            iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
            AddProperty(iPropertyBalance);
        }

        /// <summary>
        /// Enable the Fade property.
        /// </summary>
        public void EnablePropertyFade()
        {
            iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
            AddProperty(iPropertyFade);
        }

        /// <summary>
        /// Enable the VolumeLimit property.
        /// </summary>
        public void EnablePropertyVolumeLimit()
        {
            iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
            AddProperty(iPropertyVolumeLimit);
        }

        /// <summary>
        /// Enable the VolumeMax property.
        /// </summary>
        public void EnablePropertyVolumeMax()
        {
            iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
            AddProperty(iPropertyVolumeMax);
        }

        /// <summary>
        /// Enable the VolumeUnity property.
        /// </summary>
        public void EnablePropertyVolumeUnity()
        {
            iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
            AddProperty(iPropertyVolumeUnity);
        }

        /// <summary>
        /// Enable the VolumeSteps property.
        /// </summary>
        public void EnablePropertyVolumeSteps()
        {
            iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
            AddProperty(iPropertyVolumeSteps);
        }

        /// <summary>
        /// Enable the VolumeMilliDbPerStep property.
        /// </summary>
        public void EnablePropertyVolumeMilliDbPerStep()
        {
            iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
            AddProperty(iPropertyVolumeMilliDbPerStep);
        }

        /// <summary>
        /// Enable the BalanceMax property.
        /// </summary>
        public void EnablePropertyBalanceMax()
        {
            iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
            AddProperty(iPropertyBalanceMax);
        }

        /// <summary>
        /// Enable the FadeMax property.
        /// </summary>
        public void EnablePropertyFadeMax()
        {
            iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
            AddProperty(iPropertyFadeMax);
        }

        /// <summary>
        /// Enable the UnityGain property.
        /// </summary>
        public void EnablePropertyUnityGain()
        {
            iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
            AddProperty(iPropertyUnityGain);
        }

        /// <summary>
        /// Enable the VolumeOffsets property.
        /// </summary>
        public void EnablePropertyVolumeOffsets()
        {
            List<String> allowedValues = new List<String>();
            iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets", allowedValues));
            AddProperty(iPropertyVolumeOffsets);
        }

        /// <summary>
        /// Enable the VolumeOffsetMax property.
        /// </summary>
        public void EnablePropertyVolumeOffsetMax()
        {
            iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
            AddProperty(iPropertyVolumeOffsetMax);
        }

        /// <summary>
        /// Enable the Trim property.
        /// </summary>
        public void EnablePropertyTrim()
        {
            List<String> allowedValues = new List<String>();
            iPropertyTrim = new PropertyString(new ParameterString("Trim", allowedValues));
            AddProperty(iPropertyTrim);
        }

        /// <summary>
        /// Set the value of the Volume property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolume has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolume(uint aValue)
        {
            if (iPropertyVolume == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolume, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Volume property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolume has previously been called.</remarks>
        /// <returns>Value of the Volume property.</returns>
        public uint PropertyVolume()
        {
            if (iPropertyVolume == null)
                throw new PropertyDisabledError();
            return iPropertyVolume.Value();
        }

        /// <summary>
        /// Set the value of the Mute property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMute has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyMute(bool aValue)
        {
            if (iPropertyMute == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyMute, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Mute property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyMute has previously been called.</remarks>
        /// <returns>Value of the Mute property.</returns>
        public bool PropertyMute()
        {
            if (iPropertyMute == null)
                throw new PropertyDisabledError();
            return iPropertyMute.Value();
        }

        /// <summary>
        /// Set the value of the Balance property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyBalance has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyBalance(int aValue)
        {
            if (iPropertyBalance == null)
                throw new PropertyDisabledError();
            return SetPropertyInt(iPropertyBalance, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Balance property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyBalance has previously been called.</remarks>
        /// <returns>Value of the Balance property.</returns>
        public int PropertyBalance()
        {
            if (iPropertyBalance == null)
                throw new PropertyDisabledError();
            return iPropertyBalance.Value();
        }

        /// <summary>
        /// Set the value of the Fade property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyFade has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyFade(int aValue)
        {
            if (iPropertyFade == null)
                throw new PropertyDisabledError();
            return SetPropertyInt(iPropertyFade, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Fade property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyFade has previously been called.</remarks>
        /// <returns>Value of the Fade property.</returns>
        public int PropertyFade()
        {
            if (iPropertyFade == null)
                throw new PropertyDisabledError();
            return iPropertyFade.Value();
        }

        /// <summary>
        /// Set the value of the VolumeLimit property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeLimit has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeLimit(uint aValue)
        {
            if (iPropertyVolumeLimit == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeLimit, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeLimit property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeLimit has previously been called.</remarks>
        /// <returns>Value of the VolumeLimit property.</returns>
        public uint PropertyVolumeLimit()
        {
            if (iPropertyVolumeLimit == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeLimit.Value();
        }

        /// <summary>
        /// Set the value of the VolumeMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeMax(uint aValue)
        {
            if (iPropertyVolumeMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeMax has previously been called.</remarks>
        /// <returns>Value of the VolumeMax property.</returns>
        public uint PropertyVolumeMax()
        {
            if (iPropertyVolumeMax == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeMax.Value();
        }

        /// <summary>
        /// Set the value of the VolumeUnity property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeUnity has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeUnity(uint aValue)
        {
            if (iPropertyVolumeUnity == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeUnity, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeUnity property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeUnity has previously been called.</remarks>
        /// <returns>Value of the VolumeUnity property.</returns>
        public uint PropertyVolumeUnity()
        {
            if (iPropertyVolumeUnity == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeUnity.Value();
        }

        /// <summary>
        /// Set the value of the VolumeSteps property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeSteps has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeSteps(uint aValue)
        {
            if (iPropertyVolumeSteps == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeSteps, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeSteps property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeSteps has previously been called.</remarks>
        /// <returns>Value of the VolumeSteps property.</returns>
        public uint PropertyVolumeSteps()
        {
            if (iPropertyVolumeSteps == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeSteps.Value();
        }

        /// <summary>
        /// Set the value of the VolumeMilliDbPerStep property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeMilliDbPerStep has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeMilliDbPerStep(uint aValue)
        {
            if (iPropertyVolumeMilliDbPerStep == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeMilliDbPerStep, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeMilliDbPerStep property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeMilliDbPerStep has previously been called.</remarks>
        /// <returns>Value of the VolumeMilliDbPerStep property.</returns>
        public uint PropertyVolumeMilliDbPerStep()
        {
            if (iPropertyVolumeMilliDbPerStep == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeMilliDbPerStep.Value();
        }

        /// <summary>
        /// Set the value of the BalanceMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyBalanceMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyBalanceMax(uint aValue)
        {
            if (iPropertyBalanceMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyBalanceMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the BalanceMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyBalanceMax has previously been called.</remarks>
        /// <returns>Value of the BalanceMax property.</returns>
        public uint PropertyBalanceMax()
        {
            if (iPropertyBalanceMax == null)
                throw new PropertyDisabledError();
            return iPropertyBalanceMax.Value();
        }

        /// <summary>
        /// Set the value of the FadeMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyFadeMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyFadeMax(uint aValue)
        {
            if (iPropertyFadeMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyFadeMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the FadeMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyFadeMax has previously been called.</remarks>
        /// <returns>Value of the FadeMax property.</returns>
        public uint PropertyFadeMax()
        {
            if (iPropertyFadeMax == null)
                throw new PropertyDisabledError();
            return iPropertyFadeMax.Value();
        }

        /// <summary>
        /// Set the value of the UnityGain property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUnityGain has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyUnityGain(bool aValue)
        {
            if (iPropertyUnityGain == null)
                throw new PropertyDisabledError();
            return SetPropertyBool(iPropertyUnityGain, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the UnityGain property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyUnityGain has previously been called.</remarks>
        /// <returns>Value of the UnityGain property.</returns>
        public bool PropertyUnityGain()
        {
            if (iPropertyUnityGain == null)
                throw new PropertyDisabledError();
            return iPropertyUnityGain.Value();
        }

        /// <summary>
        /// Set the value of the VolumeOffsets property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeOffsets has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeOffsets(string aValue)
        {
            if (iPropertyVolumeOffsets == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyVolumeOffsets, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeOffsets property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeOffsets has previously been called.</remarks>
        /// <returns>Value of the VolumeOffsets property.</returns>
        public string PropertyVolumeOffsets()
        {
            if (iPropertyVolumeOffsets == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeOffsets.Value();
        }

        /// <summary>
        /// Set the value of the VolumeOffsetMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeOffsetMax has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyVolumeOffsetMax(uint aValue)
        {
            if (iPropertyVolumeOffsetMax == null)
                throw new PropertyDisabledError();
            return SetPropertyUint(iPropertyVolumeOffsetMax, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the VolumeOffsetMax property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyVolumeOffsetMax has previously been called.</remarks>
        /// <returns>Value of the VolumeOffsetMax property.</returns>
        public uint PropertyVolumeOffsetMax()
        {
            if (iPropertyVolumeOffsetMax == null)
                throw new PropertyDisabledError();
            return iPropertyVolumeOffsetMax.Value();
        }

        /// <summary>
        /// Set the value of the Trim property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTrim has previously been called.</remarks>
        /// <param name="aValue">New value for the property</param>
        /// <returns>true if the value has been updated; false if aValue was the same as the previous value</returns>
        public bool SetPropertyTrim(string aValue)
        {
            if (iPropertyTrim == null)
                throw new PropertyDisabledError();
            return SetPropertyString(iPropertyTrim, aValue);
        }

        /// <summary>
        /// Get a copy of the value of the Trim property
        /// </summary>
        /// <remarks>Can only be called if EnablePropertyTrim has previously been called.</remarks>
        /// <returns>Value of the Trim property.</returns>
        public string PropertyTrim()
        {
            if (iPropertyTrim == null)
                throw new PropertyDisabledError();
            return iPropertyTrim.Value();
        }

        /// <summary>
        /// Signal that the action Characteristics is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Characteristics must be overridden if this is called.</remarks>
        protected void EnableActionCharacteristics()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Characteristics");
            action.AddOutputParameter(new ParameterRelated("VolumeMax", iPropertyVolumeMax));
            action.AddOutputParameter(new ParameterRelated("VolumeUnity", iPropertyVolumeUnity));
            action.AddOutputParameter(new ParameterRelated("VolumeSteps", iPropertyVolumeSteps));
            action.AddOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", iPropertyVolumeMilliDbPerStep));
            action.AddOutputParameter(new ParameterRelated("BalanceMax", iPropertyBalanceMax));
            action.AddOutputParameter(new ParameterRelated("FadeMax", iPropertyFadeMax));
            iDelegateCharacteristics = new ActionDelegate(DoCharacteristics);
            EnableAction(action, iDelegateCharacteristics, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetVolume is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetVolume must be overridden if this is called.</remarks>
        protected void EnableActionSetVolume()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetVolume");
            action.AddInputParameter(new ParameterRelated("Value", iPropertyVolume));
            iDelegateSetVolume = new ActionDelegate(DoSetVolume);
            EnableAction(action, iDelegateSetVolume, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action VolumeInc is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// VolumeInc must be overridden if this is called.</remarks>
        protected void EnableActionVolumeInc()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("VolumeInc");
            iDelegateVolumeInc = new ActionDelegate(DoVolumeInc);
            EnableAction(action, iDelegateVolumeInc, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action VolumeDec is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// VolumeDec must be overridden if this is called.</remarks>
        protected void EnableActionVolumeDec()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("VolumeDec");
            iDelegateVolumeDec = new ActionDelegate(DoVolumeDec);
            EnableAction(action, iDelegateVolumeDec, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Volume is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Volume must be overridden if this is called.</remarks>
        protected void EnableActionVolume()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Volume");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyVolume));
            iDelegateVolume = new ActionDelegate(DoVolume);
            EnableAction(action, iDelegateVolume, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetBalance is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetBalance must be overridden if this is called.</remarks>
        protected void EnableActionSetBalance()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetBalance");
            action.AddInputParameter(new ParameterRelated("Value", iPropertyBalance));
            iDelegateSetBalance = new ActionDelegate(DoSetBalance);
            EnableAction(action, iDelegateSetBalance, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BalanceInc is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BalanceInc must be overridden if this is called.</remarks>
        protected void EnableActionBalanceInc()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BalanceInc");
            iDelegateBalanceInc = new ActionDelegate(DoBalanceInc);
            EnableAction(action, iDelegateBalanceInc, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action BalanceDec is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// BalanceDec must be overridden if this is called.</remarks>
        protected void EnableActionBalanceDec()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("BalanceDec");
            iDelegateBalanceDec = new ActionDelegate(DoBalanceDec);
            EnableAction(action, iDelegateBalanceDec, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Balance is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Balance must be overridden if this is called.</remarks>
        protected void EnableActionBalance()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Balance");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyBalance));
            iDelegateBalance = new ActionDelegate(DoBalance);
            EnableAction(action, iDelegateBalance, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetFade is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetFade must be overridden if this is called.</remarks>
        protected void EnableActionSetFade()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetFade");
            action.AddInputParameter(new ParameterRelated("Value", iPropertyFade));
            iDelegateSetFade = new ActionDelegate(DoSetFade);
            EnableAction(action, iDelegateSetFade, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action FadeInc is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// FadeInc must be overridden if this is called.</remarks>
        protected void EnableActionFadeInc()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("FadeInc");
            iDelegateFadeInc = new ActionDelegate(DoFadeInc);
            EnableAction(action, iDelegateFadeInc, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action FadeDec is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// FadeDec must be overridden if this is called.</remarks>
        protected void EnableActionFadeDec()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("FadeDec");
            iDelegateFadeDec = new ActionDelegate(DoFadeDec);
            EnableAction(action, iDelegateFadeDec, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Fade is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Fade must be overridden if this is called.</remarks>
        protected void EnableActionFade()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Fade");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyFade));
            iDelegateFade = new ActionDelegate(DoFade);
            EnableAction(action, iDelegateFade, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetMute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetMute must be overridden if this is called.</remarks>
        protected void EnableActionSetMute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetMute");
            action.AddInputParameter(new ParameterRelated("Value", iPropertyMute));
            iDelegateSetMute = new ActionDelegate(DoSetMute);
            EnableAction(action, iDelegateSetMute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Mute is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Mute must be overridden if this is called.</remarks>
        protected void EnableActionMute()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Mute");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyMute));
            iDelegateMute = new ActionDelegate(DoMute);
            EnableAction(action, iDelegateMute, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action VolumeLimit is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// VolumeLimit must be overridden if this is called.</remarks>
        protected void EnableActionVolumeLimit()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("VolumeLimit");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyVolumeLimit));
            iDelegateVolumeLimit = new ActionDelegate(DoVolumeLimit);
            EnableAction(action, iDelegateVolumeLimit, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action UnityGain is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// UnityGain must be overridden if this is called.</remarks>
        protected void EnableActionUnityGain()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("UnityGain");
            action.AddOutputParameter(new ParameterRelated("Value", iPropertyUnityGain));
            iDelegateUnityGain = new ActionDelegate(DoUnityGain);
            EnableAction(action, iDelegateUnityGain, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action VolumeOffset is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// VolumeOffset must be overridden if this is called.</remarks>
        protected void EnableActionVolumeOffset()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("VolumeOffset");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Channel", allowedValues));
            action.AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
            iDelegateVolumeOffset = new ActionDelegate(DoVolumeOffset);
            EnableAction(action, iDelegateVolumeOffset, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetVolumeOffset is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetVolumeOffset must be overridden if this is called.</remarks>
        protected void EnableActionSetVolumeOffset()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetVolumeOffset");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Channel", allowedValues));
            action.AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
            iDelegateSetVolumeOffset = new ActionDelegate(DoSetVolumeOffset);
            EnableAction(action, iDelegateSetVolumeOffset, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action Trim is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// Trim must be overridden if this is called.</remarks>
        protected void EnableActionTrim()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("Trim");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Channel", allowedValues));
            action.AddOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
            iDelegateTrim = new ActionDelegate(DoTrim);
            EnableAction(action, iDelegateTrim, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Signal that the action SetTrim is supported.
        /// </summary>
        /// <remarks>The action's availability will be published in the device's service.xml.
        /// SetTrim must be overridden if this is called.</remarks>
        protected void EnableActionSetTrim()
        {
            OpenHome.Net.Core.Action action = new OpenHome.Net.Core.Action("SetTrim");
            List<String> allowedValues = new List<String>();
            action.AddInputParameter(new ParameterString("Channel", allowedValues));
            action.AddInputParameter(new ParameterInt("TrimBinaryMilliDb"));
            iDelegateSetTrim = new ActionDelegate(DoSetTrim);
            EnableAction(action, iDelegateSetTrim, GCHandle.ToIntPtr(iGch));
        }

        /// <summary>
        /// Characteristics action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Characteristics action for the owning device.
        ///
        /// Must be implemented iff EnableActionCharacteristics was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aVolumeMax"></param>
        /// <param name="aVolumeUnity"></param>
        /// <param name="aVolumeSteps"></param>
        /// <param name="aVolumeMilliDbPerStep"></param>
        /// <param name="aBalanceMax"></param>
        /// <param name="aFadeMax"></param>
        protected virtual void Characteristics(IDvInvocation aInvocation, out uint aVolumeMax, out uint aVolumeUnity, out uint aVolumeSteps, out uint aVolumeMilliDbPerStep, out uint aBalanceMax, out uint aFadeMax)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetVolume action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetVolume action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetVolume was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SetVolume(IDvInvocation aInvocation, uint aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// VolumeInc action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// VolumeInc action for the owning device.
        ///
        /// Must be implemented iff EnableActionVolumeInc was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void VolumeInc(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// VolumeDec action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// VolumeDec action for the owning device.
        ///
        /// Must be implemented iff EnableActionVolumeDec was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void VolumeDec(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Volume action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Volume action for the owning device.
        ///
        /// Must be implemented iff EnableActionVolume was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Volume(IDvInvocation aInvocation, out uint aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetBalance action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetBalance action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetBalance was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SetBalance(IDvInvocation aInvocation, int aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BalanceInc action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BalanceInc action for the owning device.
        ///
        /// Must be implemented iff EnableActionBalanceInc was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void BalanceInc(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// BalanceDec action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// BalanceDec action for the owning device.
        ///
        /// Must be implemented iff EnableActionBalanceDec was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void BalanceDec(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Balance action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Balance action for the owning device.
        ///
        /// Must be implemented iff EnableActionBalance was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Balance(IDvInvocation aInvocation, out int aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetFade action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetFade action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetFade was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SetFade(IDvInvocation aInvocation, int aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// FadeInc action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// FadeInc action for the owning device.
        ///
        /// Must be implemented iff EnableActionFadeInc was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void FadeInc(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// FadeDec action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// FadeDec action for the owning device.
        ///
        /// Must be implemented iff EnableActionFadeDec was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        protected virtual void FadeDec(IDvInvocation aInvocation)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Fade action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Fade action for the owning device.
        ///
        /// Must be implemented iff EnableActionFade was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Fade(IDvInvocation aInvocation, out int aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetMute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetMute action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetMute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void SetMute(IDvInvocation aInvocation, bool aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Mute action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Mute action for the owning device.
        ///
        /// Must be implemented iff EnableActionMute was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void Mute(IDvInvocation aInvocation, out bool aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// VolumeLimit action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// VolumeLimit action for the owning device.
        ///
        /// Must be implemented iff EnableActionVolumeLimit was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void VolumeLimit(IDvInvocation aInvocation, out uint aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// UnityGain action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// UnityGain action for the owning device.
        ///
        /// Must be implemented iff EnableActionUnityGain was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aValue"></param>
        protected virtual void UnityGain(IDvInvocation aInvocation, out bool aValue)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// VolumeOffset action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// VolumeOffset action for the owning device.
        ///
        /// Must be implemented iff EnableActionVolumeOffset was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannel"></param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        protected virtual void VolumeOffset(IDvInvocation aInvocation, string aChannel, out int aVolumeOffsetBinaryMilliDb)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetVolumeOffset action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetVolumeOffset action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetVolumeOffset was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannel"></param>
        /// <param name="aVolumeOffsetBinaryMilliDb"></param>
        protected virtual void SetVolumeOffset(IDvInvocation aInvocation, string aChannel, int aVolumeOffsetBinaryMilliDb)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// Trim action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// Trim action for the owning device.
        ///
        /// Must be implemented iff EnableActionTrim was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannel"></param>
        /// <param name="aTrimBinaryMilliDb"></param>
        protected virtual void Trim(IDvInvocation aInvocation, string aChannel, out int aTrimBinaryMilliDb)
        {
            throw (new ActionDisabledError());
        }

        /// <summary>
        /// SetTrim action.
        /// </summary>
        /// <remarks>Will be called when the device stack receives an invocation of the
        /// SetTrim action for the owning device.
        ///
        /// Must be implemented iff EnableActionSetTrim was called.</remarks>
        /// <param name="aInvocation">Interface allowing querying of aspects of this particular action invocation.</param>
        /// <param name="aChannel"></param>
        /// <param name="aTrimBinaryMilliDb"></param>
        protected virtual void SetTrim(IDvInvocation aInvocation, string aChannel, int aTrimBinaryMilliDb)
        {
            throw (new ActionDisabledError());
        }

        private static int DoCharacteristics(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint volumeMax;
            uint volumeUnity;
            uint volumeSteps;
            uint volumeMilliDbPerStep;
            uint balanceMax;
            uint fadeMax;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Characteristics(invocation, out volumeMax, out volumeUnity, out volumeSteps, out volumeMilliDbPerStep, out balanceMax, out fadeMax);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Characteristics");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Characteristics" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Characteristics" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("VolumeMax", volumeMax);
                invocation.WriteUint("VolumeUnity", volumeUnity);
                invocation.WriteUint("VolumeSteps", volumeSteps);
                invocation.WriteUint("VolumeMilliDbPerStep", volumeMilliDbPerStep);
                invocation.WriteUint("BalanceMax", balanceMax);
                invocation.WriteUint("FadeMax", fadeMax);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Characteristics" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetVolume(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadUint("Value");
                invocation.ReadEnd();
                self.SetVolume(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetVolume");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetVolume" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolume" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolume" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVolumeInc(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.VolumeInc(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "VolumeInc");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "VolumeInc" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeInc" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeInc" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVolumeDec(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.VolumeDec(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "VolumeDec");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "VolumeDec" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeDec" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeDec" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVolume(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Volume(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Volume");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Volume" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Volume" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Volume" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadInt("Value");
                invocation.ReadEnd();
                self.SetBalance(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetBalance");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetBalance" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBalance" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetBalance" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBalanceInc(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.BalanceInc(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BalanceInc");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BalanceInc" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BalanceInc" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BalanceInc" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBalanceDec(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.BalanceDec(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "BalanceDec");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "BalanceDec" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BalanceDec" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "BalanceDec" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoBalance(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Balance(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Balance");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Balance" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Balance" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteInt("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Balance" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetFade(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadInt("Value");
                invocation.ReadEnd();
                self.SetFade(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetFade");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetFade" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetFade" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetFade" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoFadeInc(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.FadeInc(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "FadeInc");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "FadeInc" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "FadeInc" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "FadeInc" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoFadeDec(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.FadeDec(invocation);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "FadeDec");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "FadeDec" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "FadeDec" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "FadeDec" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoFade(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            int value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Fade(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Fade");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Fade" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Fade" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteInt("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Fade" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetMute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool value;
            try
            {
                invocation.ReadStart();
                value = invocation.ReadBool("Value");
                invocation.ReadEnd();
                self.SetMute(invocation, value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetMute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetMute" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMute" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetMute" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoMute(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.Mute(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Mute");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Mute" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Mute" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Mute" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVolumeLimit(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            uint value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.VolumeLimit(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "VolumeLimit");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "VolumeLimit" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeLimit" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteUint("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeLimit" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoUnityGain(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            bool value;
            try
            {
                invocation.ReadStart();
                invocation.ReadEnd();
                self.UnityGain(invocation, out value);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "UnityGain");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "UnityGain" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UnityGain" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteBool("Value", value);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "UnityGain" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoVolumeOffset(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channel;
            int volumeOffsetBinaryMilliDb;
            try
            {
                invocation.ReadStart();
                channel = invocation.ReadString("Channel");
                invocation.ReadEnd();
                self.VolumeOffset(invocation, channel, out volumeOffsetBinaryMilliDb);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "VolumeOffset");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "VolumeOffset" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeOffset" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteInt("VolumeOffsetBinaryMilliDb", volumeOffsetBinaryMilliDb);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "VolumeOffset" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetVolumeOffset(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channel;
            int volumeOffsetBinaryMilliDb;
            try
            {
                invocation.ReadStart();
                channel = invocation.ReadString("Channel");
                volumeOffsetBinaryMilliDb = invocation.ReadInt("VolumeOffsetBinaryMilliDb");
                invocation.ReadEnd();
                self.SetVolumeOffset(invocation, channel, volumeOffsetBinaryMilliDb);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetVolumeOffset");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetVolumeOffset" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolumeOffset" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetVolumeOffset" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoTrim(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channel;
            int trimBinaryMilliDb;
            try
            {
                invocation.ReadStart();
                channel = invocation.ReadString("Channel");
                invocation.ReadEnd();
                self.Trim(invocation, channel, out trimBinaryMilliDb);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "Trim");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "Trim" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Trim" });
                System.Diagnostics.Debug.WriteLine("         Only ActionError or PropertyUpdateError should be thrown by actions");
                return -1;
            }
            try
            {
                invocation.WriteStart();
                invocation.WriteInt("TrimBinaryMilliDb", trimBinaryMilliDb);
                invocation.WriteEnd();
            }
            catch (ActionError)
            {
                return -1;
            }
            catch (System.Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "Trim" });
                System.Diagnostics.Debug.WriteLine("       Only ActionError can be thrown by action response writer");
            }
            return 0;
        }

        private static int DoSetTrim(IntPtr aPtr, IntPtr aInvocation)
        {
            GCHandle gch = GCHandle.FromIntPtr(aPtr);
            DvProviderAvOpenhomeOrgVolume3 self = (DvProviderAvOpenhomeOrgVolume3)gch.Target;
            DvInvocation invocation = new DvInvocation(aInvocation);
            string channel;
            int trimBinaryMilliDb;
            try
            {
                invocation.ReadStart();
                channel = invocation.ReadString("Channel");
                trimBinaryMilliDb = invocation.ReadInt("TrimBinaryMilliDb");
                invocation.ReadEnd();
                self.SetTrim(invocation, channel, trimBinaryMilliDb);
            }
            catch (ActionError e)
            {
                invocation.ReportActionError(e, "SetTrim");
                return -1;
            }
            catch (PropertyUpdateError)
            {
                invocation.ReportError(501, String.Format("Invalid value for property {0}", new object[] { "SetTrim" }));
                return -1;
            }
            catch (Exception e)
            {
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTrim" });
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
                System.Diagnostics.Debug.WriteLine("WARNING: unexpected exception {0} thrown by {1}", new object[] { e, "SetTrim" });
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

