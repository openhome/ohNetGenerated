#ifndef HEADER_DVLINNCOUKEXAKT21CPP
#define HEADER_DVLINNCOUKEXAKT21CPP

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
 * Provider for the linn.co.uk:Exakt2:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkExakt21Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExakt21Cpp() {}
    /**
     * Set the value of the DeviceList property
     *
     * Can only be called if EnablePropertyDeviceList has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDeviceList(const std::string& aValue);
    /**
     * Get a copy of the value of the DeviceList property
     *
     * Can only be called if EnablePropertyDeviceList has previously been called.
     */
    void GetPropertyDeviceList(std::string& aValue);
    /**
     * Set the value of the SettingsAvailable property
     *
     * Can only be called if EnablePropertySettingsAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySettingsAvailable(bool aValue);
    /**
     * Get a copy of the value of the SettingsAvailable property
     *
     * Can only be called if EnablePropertySettingsAvailable has previously been called.
     */
    void GetPropertySettingsAvailable(bool& aValue);
    /**
     * Set the value of the SettingsChangedSeq property
     *
     * Can only be called if EnablePropertySettingsChangedSeq has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySettingsChangedSeq(const std::string& aValue);
    /**
     * Get a copy of the value of the SettingsChangedSeq property
     *
     * Can only be called if EnablePropertySettingsChangedSeq has previously been called.
     */
    void GetPropertySettingsChangedSeq(std::string& aValue);
    /**
     * Set the value of the UpdateStatus property
     *
     * Can only be called if EnablePropertyUpdateStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the UpdateStatus property
     *
     * Can only be called if EnablePropertyUpdateStatus has previously been called.
     */
    void GetPropertyUpdateStatus(std::string& aValue);
    /**
     * Set the value of the ChannelMap property
     *
     * Can only be called if EnablePropertyChannelMap has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyChannelMap(const std::string& aValue);
    /**
     * Get a copy of the value of the ChannelMap property
     *
     * Can only be called if EnablePropertyChannelMap has previously been called.
     */
    void GetPropertyChannelMap(std::string& aValue);
    /**
     * Set the value of the AudioChannels property
     *
     * Can only be called if EnablePropertyAudioChannels has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAudioChannels(const std::string& aValue);
    /**
     * Get a copy of the value of the AudioChannels property
     *
     * Can only be called if EnablePropertyAudioChannels has previously been called.
     */
    void GetPropertyAudioChannels(std::string& aValue);
    /**
     * Set the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyVersion(uint32_t aValue);
    /**
     * Get a copy of the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     */
    void GetPropertyVersion(uint32_t& aValue);
    /**
     * Set the value of the IntegratedDevicesPresent property
     *
     * Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyIntegratedDevicesPresent(bool aValue);
    /**
     * Get a copy of the value of the IntegratedDevicesPresent property
     *
     * Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.
     */
    void GetPropertyIntegratedDevicesPresent(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt21Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the DeviceList property.
     */
    void EnablePropertyDeviceList();
    /**
     * Enable the SettingsAvailable property.
     */
    void EnablePropertySettingsAvailable();
    /**
     * Enable the SettingsChangedSeq property.
     */
    void EnablePropertySettingsChangedSeq();
    /**
     * Enable the UpdateStatus property.
     */
    void EnablePropertyUpdateStatus();
    /**
     * Enable the ChannelMap property.
     */
    void EnablePropertyChannelMap();
    /**
     * Enable the AudioChannels property.
     */
    void EnablePropertyAudioChannels();
    /**
     * Enable the Version property.
     */
    void EnablePropertyVersion();
    /**
     * Enable the IntegratedDevicesPresent property.
     */
    void EnablePropertyIntegratedDevicesPresent();
    /**
     * Signal that the action GetDeviceList is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDeviceList must be overridden if this is called.
     */
    void EnableActionGetDeviceList();
    /**
     * Signal that the action GetDeviceSettings is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDeviceSettings must be overridden if this is called.
     */
    void EnableActionGetDeviceSettings();
    /**
     * Signal that the action GetSettingsAvailable is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSettingsAvailable must be overridden if this is called.
     */
    void EnableActionGetSettingsAvailable();
    /**
     * Signal that the action GetSettingsChangedSeq is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSettingsChangedSeq must be overridden if this is called.
     */
    void EnableActionGetSettingsChangedSeq();
    /**
     * Signal that the action Update is supported.
     * The action's availability will be published in the device's service.xml.
     * Update must be overridden if this is called.
     */
    void EnableActionUpdate();
    /**
     * Signal that the action UpdateBlocking is supported.
     * The action's availability will be published in the device's service.xml.
     * UpdateBlocking must be overridden if this is called.
     */
    void EnableActionUpdateBlocking();
    /**
     * Signal that the action GetUpdateStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUpdateStatus must be overridden if this is called.
     */
    void EnableActionGetUpdateStatus();
    /**
     * Signal that the action GetChannelMap is supported.
     * The action's availability will be published in the device's service.xml.
     * GetChannelMap must be overridden if this is called.
     */
    void EnableActionGetChannelMap();
    /**
     * Signal that the action GetAudioChannels is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAudioChannels must be overridden if this is called.
     */
    void EnableActionGetAudioChannels();
    /**
     * Signal that the action GetVersion is supported.
     * The action's availability will be published in the device's service.xml.
     * GetVersion must be overridden if this is called.
     */
    void EnableActionGetVersion();
    /**
     * Signal that the action ApplyUpdate is supported.
     * The action's availability will be published in the device's service.xml.
     * ApplyUpdate must be overridden if this is called.
     */
    void EnableActionApplyUpdate();
    /**
     * Signal that the action PlayTestTrack is supported.
     * The action's availability will be published in the device's service.xml.
     * PlayTestTrack must be overridden if this is called.
     */
    void EnableActionPlayTestTrack();
    /**
     * Signal that the action ClearTestTrack is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearTestTrack must be overridden if this is called.
     */
    void EnableActionClearTestTrack();
    /**
     * Signal that the action GetIntegratedDevicesPresent is supported.
     * The action's availability will be published in the device's service.xml.
     * GetIntegratedDevicesPresent must be overridden if this is called.
     */
    void EnableActionGetIntegratedDevicesPresent();
    /**
     * Signal that the action BootIntegratedDevicesToFallback is supported.
     * The action's availability will be published in the device's service.xml.
     * BootIntegratedDevicesToFallback must be overridden if this is called.
     */
    void EnableActionBootIntegratedDevicesToFallback();
private:
    /**
     * GetDeviceList action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDeviceList action for the owning device.
     * Must be implemented iff EnableActionGetDeviceList was called.
     */
    virtual void GetDeviceList(IDvInvocationStd& aInvocation, std::string& aList);
    /**
     * GetDeviceSettings action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDeviceSettings action for the owning device.
     * Must be implemented iff EnableActionGetDeviceSettings was called.
     */
    virtual void GetDeviceSettings(IDvInvocationStd& aInvocation, const std::string& aDeviceId, std::string& aSettings);
    /**
     * GetSettingsAvailable action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSettingsAvailable action for the owning device.
     * Must be implemented iff EnableActionGetSettingsAvailable was called.
     */
    virtual void GetSettingsAvailable(IDvInvocationStd& aInvocation, bool& aSettingsAvailable);
    /**
     * GetSettingsChangedSeq action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSettingsChangedSeq action for the owning device.
     * Must be implemented iff EnableActionGetSettingsChangedSeq was called.
     */
    virtual void GetSettingsChangedSeq(IDvInvocationStd& aInvocation, std::string& aSettingsChangedSeq);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocationStd& aInvocation, const std::string& aManifest);
    /**
     * UpdateBlocking action.
     *
     * Will be called when the device stack receives an invocation of the
     * UpdateBlocking action for the owning device.
     * Must be implemented iff EnableActionUpdateBlocking was called.
     */
    virtual void UpdateBlocking(IDvInvocationStd& aInvocation, const std::string& aManifest);
    /**
     * GetUpdateStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateStatus action for the owning device.
     * Must be implemented iff EnableActionGetUpdateStatus was called.
     */
    virtual void GetUpdateStatus(IDvInvocationStd& aInvocation, std::string& aUpdateStatus);
    /**
     * GetChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetChannelMap action for the owning device.
     * Must be implemented iff EnableActionGetChannelMap was called.
     */
    virtual void GetChannelMap(IDvInvocationStd& aInvocation, std::string& aChannelMap);
    /**
     * GetAudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAudioChannels action for the owning device.
     * Must be implemented iff EnableActionGetAudioChannels was called.
     */
    virtual void GetAudioChannels(IDvInvocationStd& aInvocation, std::string& aAudioChannels);
    /**
     * GetVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetVersion action for the owning device.
     * Must be implemented iff EnableActionGetVersion was called.
     */
    virtual void GetVersion(IDvInvocationStd& aInvocation, uint32_t& aVersion);
    /**
     * ApplyUpdate action.
     *
     * Will be called when the device stack receives an invocation of the
     * ApplyUpdate action for the owning device.
     * Must be implemented iff EnableActionApplyUpdate was called.
     */
    virtual void ApplyUpdate(IDvInvocationStd& aInvocation);
    /**
     * PlayTestTrack action.
     *
     * Will be called when the device stack receives an invocation of the
     * PlayTestTrack action for the owning device.
     * Must be implemented iff EnableActionPlayTestTrack was called.
     */
    virtual void PlayTestTrack(IDvInvocationStd& aInvocation, const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata);
    /**
     * ClearTestTrack action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearTestTrack action for the owning device.
     * Must be implemented iff EnableActionClearTestTrack was called.
     */
    virtual void ClearTestTrack(IDvInvocationStd& aInvocation);
    /**
     * GetIntegratedDevicesPresent action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIntegratedDevicesPresent action for the owning device.
     * Must be implemented iff EnableActionGetIntegratedDevicesPresent was called.
     */
    virtual void GetIntegratedDevicesPresent(IDvInvocationStd& aInvocation, bool& aIntegratedDevicesPresent);
    /**
     * BootIntegratedDevicesToFallback action.
     *
     * Will be called when the device stack receives an invocation of the
     * BootIntegratedDevicesToFallback action for the owning device.
     * Must be implemented iff EnableActionBootIntegratedDevicesToFallback was called.
     */
    virtual void BootIntegratedDevicesToFallback(IDvInvocationStd& aInvocation);
private:
    DvProviderLinnCoUkExakt21Cpp();
    void DoGetDeviceList(IDviInvocation& aInvocation);
    void DoGetDeviceSettings(IDviInvocation& aInvocation);
    void DoGetSettingsAvailable(IDviInvocation& aInvocation);
    void DoGetSettingsChangedSeq(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoUpdateBlocking(IDviInvocation& aInvocation);
    void DoGetUpdateStatus(IDviInvocation& aInvocation);
    void DoGetChannelMap(IDviInvocation& aInvocation);
    void DoGetAudioChannels(IDviInvocation& aInvocation);
    void DoGetVersion(IDviInvocation& aInvocation);
    void DoApplyUpdate(IDviInvocation& aInvocation);
    void DoPlayTestTrack(IDviInvocation& aInvocation);
    void DoClearTestTrack(IDviInvocation& aInvocation);
    void DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation);
    void DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyDeviceList;
    PropertyBool* iPropertySettingsAvailable;
    PropertyString* iPropertySettingsChangedSeq;
    PropertyString* iPropertyUpdateStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyUint* iPropertyVersion;
    PropertyBool* iPropertyIntegratedDevicesPresent;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKEXAKT21CPP

