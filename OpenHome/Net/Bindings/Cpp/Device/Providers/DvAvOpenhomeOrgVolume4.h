#ifndef HEADER_DVAVOPENHOMEORGVOLUME4CPP
#define HEADER_DVAVOPENHOMEORGVOLUME4CPP

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>

#include <string>

namespace OpenHome {
namespace Net {

class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Provider for the av.openhome.org:Volume:4 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgVolume4Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgVolume4Cpp() {}
    /**
     * Set the value of the Volume property
     *
     * Can only be called if EnablePropertyVolume has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolume(uint32_t aValue);
    /**
     * Get a copy of the value of the Volume property
     *
     * Can only be called if EnablePropertyVolume has previously been called.
     */
    void GetPropertyVolume(uint32_t& aValue);
    /**
     * Set the value of the Mute property
     *
     * Can only be called if EnablePropertyMute has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMute(bool aValue);
    /**
     * Get a copy of the value of the Mute property
     *
     * Can only be called if EnablePropertyMute has previously been called.
     */
    void GetPropertyMute(bool& aValue);
    /**
     * Set the value of the Balance property
     *
     * Can only be called if EnablePropertyBalance has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyBalance(int32_t aValue);
    /**
     * Get a copy of the value of the Balance property
     *
     * Can only be called if EnablePropertyBalance has previously been called.
     */
    void GetPropertyBalance(int32_t& aValue);
    /**
     * Set the value of the Fade property
     *
     * Can only be called if EnablePropertyFade has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyFade(int32_t aValue);
    /**
     * Get a copy of the value of the Fade property
     *
     * Can only be called if EnablePropertyFade has previously been called.
     */
    void GetPropertyFade(int32_t& aValue);
    /**
     * Set the value of the VolumeLimit property
     *
     * Can only be called if EnablePropertyVolumeLimit has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeLimit(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeLimit property
     *
     * Can only be called if EnablePropertyVolumeLimit has previously been called.
     */
    void GetPropertyVolumeLimit(uint32_t& aValue);
    /**
     * Set the value of the VolumeMax property
     *
     * Can only be called if EnablePropertyVolumeMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeMax(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeMax property
     *
     * Can only be called if EnablePropertyVolumeMax has previously been called.
     */
    void GetPropertyVolumeMax(uint32_t& aValue);
    /**
     * Set the value of the VolumeUnity property
     *
     * Can only be called if EnablePropertyVolumeUnity has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeUnity(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeUnity property
     *
     * Can only be called if EnablePropertyVolumeUnity has previously been called.
     */
    void GetPropertyVolumeUnity(uint32_t& aValue);
    /**
     * Set the value of the VolumeSteps property
     *
     * Can only be called if EnablePropertyVolumeSteps has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeSteps(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeSteps property
     *
     * Can only be called if EnablePropertyVolumeSteps has previously been called.
     */
    void GetPropertyVolumeSteps(uint32_t& aValue);
    /**
     * Set the value of the VolumeMilliDbPerStep property
     *
     * Can only be called if EnablePropertyVolumeMilliDbPerStep has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeMilliDbPerStep(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeMilliDbPerStep property
     *
     * Can only be called if EnablePropertyVolumeMilliDbPerStep has previously been called.
     */
    void GetPropertyVolumeMilliDbPerStep(uint32_t& aValue);
    /**
     * Set the value of the BalanceMax property
     *
     * Can only be called if EnablePropertyBalanceMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyBalanceMax(uint32_t aValue);
    /**
     * Get a copy of the value of the BalanceMax property
     *
     * Can only be called if EnablePropertyBalanceMax has previously been called.
     */
    void GetPropertyBalanceMax(uint32_t& aValue);
    /**
     * Set the value of the FadeMax property
     *
     * Can only be called if EnablePropertyFadeMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyFadeMax(uint32_t aValue);
    /**
     * Get a copy of the value of the FadeMax property
     *
     * Can only be called if EnablePropertyFadeMax has previously been called.
     */
    void GetPropertyFadeMax(uint32_t& aValue);
    /**
     * Set the value of the UnityGain property
     *
     * Can only be called if EnablePropertyUnityGain has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUnityGain(bool aValue);
    /**
     * Get a copy of the value of the UnityGain property
     *
     * Can only be called if EnablePropertyUnityGain has previously been called.
     */
    void GetPropertyUnityGain(bool& aValue);
    /**
     * Set the value of the VolumeOffsets property
     *
     * Can only be called if EnablePropertyVolumeOffsets has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeOffsets(const std::string& aValue);
    /**
     * Get a copy of the value of the VolumeOffsets property
     *
     * Can only be called if EnablePropertyVolumeOffsets has previously been called.
     */
    void GetPropertyVolumeOffsets(std::string& aValue);
    /**
     * Set the value of the VolumeOffsetMax property
     *
     * Can only be called if EnablePropertyVolumeOffsetMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVolumeOffsetMax(uint32_t aValue);
    /**
     * Get a copy of the value of the VolumeOffsetMax property
     *
     * Can only be called if EnablePropertyVolumeOffsetMax has previously been called.
     */
    void GetPropertyVolumeOffsetMax(uint32_t& aValue);
    /**
     * Set the value of the Trim property
     *
     * Can only be called if EnablePropertyTrim has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyTrim(const std::string& aValue);
    /**
     * Get a copy of the value of the Trim property
     *
     * Can only be called if EnablePropertyTrim has previously been called.
     */
    void GetPropertyTrim(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgVolume4Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Volume property.
     */
    void EnablePropertyVolume();
    /**
     * Enable the Mute property.
     */
    void EnablePropertyMute();
    /**
     * Enable the Balance property.
     */
    void EnablePropertyBalance();
    /**
     * Enable the Fade property.
     */
    void EnablePropertyFade();
    /**
     * Enable the VolumeLimit property.
     */
    void EnablePropertyVolumeLimit();
    /**
     * Enable the VolumeMax property.
     */
    void EnablePropertyVolumeMax();
    /**
     * Enable the VolumeUnity property.
     */
    void EnablePropertyVolumeUnity();
    /**
     * Enable the VolumeSteps property.
     */
    void EnablePropertyVolumeSteps();
    /**
     * Enable the VolumeMilliDbPerStep property.
     */
    void EnablePropertyVolumeMilliDbPerStep();
    /**
     * Enable the BalanceMax property.
     */
    void EnablePropertyBalanceMax();
    /**
     * Enable the FadeMax property.
     */
    void EnablePropertyFadeMax();
    /**
     * Enable the UnityGain property.
     */
    void EnablePropertyUnityGain();
    /**
     * Enable the VolumeOffsets property.
     */
    void EnablePropertyVolumeOffsets();
    /**
     * Enable the VolumeOffsetMax property.
     */
    void EnablePropertyVolumeOffsetMax();
    /**
     * Enable the Trim property.
     */
    void EnablePropertyTrim();
    /**
     * Signal that the action Characteristics is supported.
     * The action's availability will be published in the device's service.xml.
     * Characteristics must be overridden if this is called.
     */
    void EnableActionCharacteristics();
    /**
     * Signal that the action SetVolume is supported.
     * The action's availability will be published in the device's service.xml.
     * SetVolume must be overridden if this is called.
     */
    void EnableActionSetVolume();
    /**
     * Signal that the action VolumeInc is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeInc must be overridden if this is called.
     */
    void EnableActionVolumeInc();
    /**
     * Signal that the action VolumeDec is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeDec must be overridden if this is called.
     */
    void EnableActionVolumeDec();
    /**
     * Signal that the action SetVolumeNoUnmute is supported.
     * The action's availability will be published in the device's service.xml.
     * SetVolumeNoUnmute must be overridden if this is called.
     */
    void EnableActionSetVolumeNoUnmute();
    /**
     * Signal that the action VolumeIncNoUnmute is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeIncNoUnmute must be overridden if this is called.
     */
    void EnableActionVolumeIncNoUnmute();
    /**
     * Signal that the action VolumeDecNoUnmute is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeDecNoUnmute must be overridden if this is called.
     */
    void EnableActionVolumeDecNoUnmute();
    /**
     * Signal that the action Volume is supported.
     * The action's availability will be published in the device's service.xml.
     * Volume must be overridden if this is called.
     */
    void EnableActionVolume();
    /**
     * Signal that the action SetBalance is supported.
     * The action's availability will be published in the device's service.xml.
     * SetBalance must be overridden if this is called.
     */
    void EnableActionSetBalance();
    /**
     * Signal that the action BalanceInc is supported.
     * The action's availability will be published in the device's service.xml.
     * BalanceInc must be overridden if this is called.
     */
    void EnableActionBalanceInc();
    /**
     * Signal that the action BalanceDec is supported.
     * The action's availability will be published in the device's service.xml.
     * BalanceDec must be overridden if this is called.
     */
    void EnableActionBalanceDec();
    /**
     * Signal that the action Balance is supported.
     * The action's availability will be published in the device's service.xml.
     * Balance must be overridden if this is called.
     */
    void EnableActionBalance();
    /**
     * Signal that the action SetFade is supported.
     * The action's availability will be published in the device's service.xml.
     * SetFade must be overridden if this is called.
     */
    void EnableActionSetFade();
    /**
     * Signal that the action FadeInc is supported.
     * The action's availability will be published in the device's service.xml.
     * FadeInc must be overridden if this is called.
     */
    void EnableActionFadeInc();
    /**
     * Signal that the action FadeDec is supported.
     * The action's availability will be published in the device's service.xml.
     * FadeDec must be overridden if this is called.
     */
    void EnableActionFadeDec();
    /**
     * Signal that the action Fade is supported.
     * The action's availability will be published in the device's service.xml.
     * Fade must be overridden if this is called.
     */
    void EnableActionFade();
    /**
     * Signal that the action SetMute is supported.
     * The action's availability will be published in the device's service.xml.
     * SetMute must be overridden if this is called.
     */
    void EnableActionSetMute();
    /**
     * Signal that the action Mute is supported.
     * The action's availability will be published in the device's service.xml.
     * Mute must be overridden if this is called.
     */
    void EnableActionMute();
    /**
     * Signal that the action VolumeLimit is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeLimit must be overridden if this is called.
     */
    void EnableActionVolumeLimit();
    /**
     * Signal that the action UnityGain is supported.
     * The action's availability will be published in the device's service.xml.
     * UnityGain must be overridden if this is called.
     */
    void EnableActionUnityGain();
    /**
     * Signal that the action VolumeOffset is supported.
     * The action's availability will be published in the device's service.xml.
     * VolumeOffset must be overridden if this is called.
     */
    void EnableActionVolumeOffset();
    /**
     * Signal that the action SetVolumeOffset is supported.
     * The action's availability will be published in the device's service.xml.
     * SetVolumeOffset must be overridden if this is called.
     */
    void EnableActionSetVolumeOffset();
    /**
     * Signal that the action Trim is supported.
     * The action's availability will be published in the device's service.xml.
     * Trim must be overridden if this is called.
     */
    void EnableActionTrim();
    /**
     * Signal that the action SetTrim is supported.
     * The action's availability will be published in the device's service.xml.
     * SetTrim must be overridden if this is called.
     */
    void EnableActionSetTrim();
private:
    /**
     * Characteristics action.
     *
     * Will be called when the device stack receives an invocation of the
     * Characteristics action for the owning device.
     * Must be implemented iff EnableActionCharacteristics was called.
     */
    virtual void Characteristics(IDvInvocationStd& aInvocation, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    /**
     * SetVolume action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetVolume action for the owning device.
     * Must be implemented iff EnableActionSetVolume was called.
     */
    virtual void SetVolume(IDvInvocationStd& aInvocation, uint32_t aValue);
    /**
     * VolumeInc action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeInc action for the owning device.
     * Must be implemented iff EnableActionVolumeInc was called.
     */
    virtual void VolumeInc(IDvInvocationStd& aInvocation);
    /**
     * VolumeDec action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeDec action for the owning device.
     * Must be implemented iff EnableActionVolumeDec was called.
     */
    virtual void VolumeDec(IDvInvocationStd& aInvocation);
    /**
     * SetVolumeNoUnmute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetVolumeNoUnmute action for the owning device.
     * Must be implemented iff EnableActionSetVolumeNoUnmute was called.
     */
    virtual void SetVolumeNoUnmute(IDvInvocationStd& aInvocation, uint32_t aValue);
    /**
     * VolumeIncNoUnmute action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeIncNoUnmute action for the owning device.
     * Must be implemented iff EnableActionVolumeIncNoUnmute was called.
     */
    virtual void VolumeIncNoUnmute(IDvInvocationStd& aInvocation);
    /**
     * VolumeDecNoUnmute action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeDecNoUnmute action for the owning device.
     * Must be implemented iff EnableActionVolumeDecNoUnmute was called.
     */
    virtual void VolumeDecNoUnmute(IDvInvocationStd& aInvocation);
    /**
     * Volume action.
     *
     * Will be called when the device stack receives an invocation of the
     * Volume action for the owning device.
     * Must be implemented iff EnableActionVolume was called.
     */
    virtual void Volume(IDvInvocationStd& aInvocation, uint32_t& aValue);
    /**
     * SetBalance action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetBalance action for the owning device.
     * Must be implemented iff EnableActionSetBalance was called.
     */
    virtual void SetBalance(IDvInvocationStd& aInvocation, int32_t aValue);
    /**
     * BalanceInc action.
     *
     * Will be called when the device stack receives an invocation of the
     * BalanceInc action for the owning device.
     * Must be implemented iff EnableActionBalanceInc was called.
     */
    virtual void BalanceInc(IDvInvocationStd& aInvocation);
    /**
     * BalanceDec action.
     *
     * Will be called when the device stack receives an invocation of the
     * BalanceDec action for the owning device.
     * Must be implemented iff EnableActionBalanceDec was called.
     */
    virtual void BalanceDec(IDvInvocationStd& aInvocation);
    /**
     * Balance action.
     *
     * Will be called when the device stack receives an invocation of the
     * Balance action for the owning device.
     * Must be implemented iff EnableActionBalance was called.
     */
    virtual void Balance(IDvInvocationStd& aInvocation, int32_t& aValue);
    /**
     * SetFade action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetFade action for the owning device.
     * Must be implemented iff EnableActionSetFade was called.
     */
    virtual void SetFade(IDvInvocationStd& aInvocation, int32_t aValue);
    /**
     * FadeInc action.
     *
     * Will be called when the device stack receives an invocation of the
     * FadeInc action for the owning device.
     * Must be implemented iff EnableActionFadeInc was called.
     */
    virtual void FadeInc(IDvInvocationStd& aInvocation);
    /**
     * FadeDec action.
     *
     * Will be called when the device stack receives an invocation of the
     * FadeDec action for the owning device.
     * Must be implemented iff EnableActionFadeDec was called.
     */
    virtual void FadeDec(IDvInvocationStd& aInvocation);
    /**
     * Fade action.
     *
     * Will be called when the device stack receives an invocation of the
     * Fade action for the owning device.
     * Must be implemented iff EnableActionFade was called.
     */
    virtual void Fade(IDvInvocationStd& aInvocation, int32_t& aValue);
    /**
     * SetMute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetMute action for the owning device.
     * Must be implemented iff EnableActionSetMute was called.
     */
    virtual void SetMute(IDvInvocationStd& aInvocation, bool aValue);
    /**
     * Mute action.
     *
     * Will be called when the device stack receives an invocation of the
     * Mute action for the owning device.
     * Must be implemented iff EnableActionMute was called.
     */
    virtual void Mute(IDvInvocationStd& aInvocation, bool& aValue);
    /**
     * VolumeLimit action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeLimit action for the owning device.
     * Must be implemented iff EnableActionVolumeLimit was called.
     */
    virtual void VolumeLimit(IDvInvocationStd& aInvocation, uint32_t& aValue);
    /**
     * UnityGain action.
     *
     * Will be called when the device stack receives an invocation of the
     * UnityGain action for the owning device.
     * Must be implemented iff EnableActionUnityGain was called.
     */
    virtual void UnityGain(IDvInvocationStd& aInvocation, bool& aValue);
    /**
     * VolumeOffset action.
     *
     * Will be called when the device stack receives an invocation of the
     * VolumeOffset action for the owning device.
     * Must be implemented iff EnableActionVolumeOffset was called.
     */
    virtual void VolumeOffset(IDvInvocationStd& aInvocation, const std::string& aChannel, int32_t& aVolumeOffsetBinaryMilliDb);
    /**
     * SetVolumeOffset action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetVolumeOffset action for the owning device.
     * Must be implemented iff EnableActionSetVolumeOffset was called.
     */
    virtual void SetVolumeOffset(IDvInvocationStd& aInvocation, const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb);
    /**
     * Trim action.
     *
     * Will be called when the device stack receives an invocation of the
     * Trim action for the owning device.
     * Must be implemented iff EnableActionTrim was called.
     */
    virtual void Trim(IDvInvocationStd& aInvocation, const std::string& aChannel, int32_t& aTrimBinaryMilliDb);
    /**
     * SetTrim action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetTrim action for the owning device.
     * Must be implemented iff EnableActionSetTrim was called.
     */
    virtual void SetTrim(IDvInvocationStd& aInvocation, const std::string& aChannel, int32_t aTrimBinaryMilliDb);
private:
    DvProviderAvOpenhomeOrgVolume4Cpp();
    void DoCharacteristics(IDviInvocation& aInvocation);
    void DoSetVolume(IDviInvocation& aInvocation);
    void DoVolumeInc(IDviInvocation& aInvocation);
    void DoVolumeDec(IDviInvocation& aInvocation);
    void DoSetVolumeNoUnmute(IDviInvocation& aInvocation);
    void DoVolumeIncNoUnmute(IDviInvocation& aInvocation);
    void DoVolumeDecNoUnmute(IDviInvocation& aInvocation);
    void DoVolume(IDviInvocation& aInvocation);
    void DoSetBalance(IDviInvocation& aInvocation);
    void DoBalanceInc(IDviInvocation& aInvocation);
    void DoBalanceDec(IDviInvocation& aInvocation);
    void DoBalance(IDviInvocation& aInvocation);
    void DoSetFade(IDviInvocation& aInvocation);
    void DoFadeInc(IDviInvocation& aInvocation);
    void DoFadeDec(IDviInvocation& aInvocation);
    void DoFade(IDviInvocation& aInvocation);
    void DoSetMute(IDviInvocation& aInvocation);
    void DoMute(IDviInvocation& aInvocation);
    void DoVolumeLimit(IDviInvocation& aInvocation);
    void DoUnityGain(IDviInvocation& aInvocation);
    void DoVolumeOffset(IDviInvocation& aInvocation);
    void DoSetVolumeOffset(IDviInvocation& aInvocation);
    void DoTrim(IDviInvocation& aInvocation);
    void DoSetTrim(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyVolume;
    PropertyBool* iPropertyMute;
    PropertyInt* iPropertyBalance;
    PropertyInt* iPropertyFade;
    PropertyUint* iPropertyVolumeLimit;
    PropertyUint* iPropertyVolumeMax;
    PropertyUint* iPropertyVolumeUnity;
    PropertyUint* iPropertyVolumeSteps;
    PropertyUint* iPropertyVolumeMilliDbPerStep;
    PropertyUint* iPropertyBalanceMax;
    PropertyUint* iPropertyFadeMax;
    PropertyBool* iPropertyUnityGain;
    PropertyString* iPropertyVolumeOffsets;
    PropertyUint* iPropertyVolumeOffsetMax;
    PropertyString* iPropertyTrim;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGVOLUME4CPP

