#ifndef HEADER_DVLINNCOUKEXAKT1CPP
#define HEADER_DVLINNCOUKEXAKT1CPP

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
 * Provider for the linn.co.uk:Exakt:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkExakt1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExakt1Cpp() {}
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
     * Set the value of the SettingsChangedCount property
     *
     * Can only be called if EnablePropertySettingsChangedCount has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySettingsChangedCount(uint32_t aValue);
    /**
     * Get a copy of the value of the SettingsChangedCount property
     *
     * Can only be called if EnablePropertySettingsChangedCount has previously been called.
     */
    void GetPropertySettingsChangedCount(uint32_t& aValue);
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
     * Set the value of the UpdateTotalPercentage property
     *
     * Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateTotalPercentage(uint32_t aValue);
    /**
     * Get a copy of the value of the UpdateTotalPercentage property
     *
     * Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.
     */
    void GetPropertyUpdateTotalPercentage(uint32_t& aValue);
    /**
     * Set the value of the UpdateTotalJobs property
     *
     * Can only be called if EnablePropertyUpdateTotalJobs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateTotalJobs(uint32_t aValue);
    /**
     * Get a copy of the value of the UpdateTotalJobs property
     *
     * Can only be called if EnablePropertyUpdateTotalJobs has previously been called.
     */
    void GetPropertyUpdateTotalJobs(uint32_t& aValue);
    /**
     * Set the value of the UpdateJob property
     *
     * Can only be called if EnablePropertyUpdateJob has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateJob(uint32_t aValue);
    /**
     * Get a copy of the value of the UpdateJob property
     *
     * Can only be called if EnablePropertyUpdateJob has previously been called.
     */
    void GetPropertyUpdateJob(uint32_t& aValue);
    /**
     * Set the value of the UpdateJobPercentage property
     *
     * Can only be called if EnablePropertyUpdateJobPercentage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateJobPercentage(uint32_t aValue);
    /**
     * Get a copy of the value of the UpdateJobPercentage property
     *
     * Can only be called if EnablePropertyUpdateJobPercentage has previously been called.
     */
    void GetPropertyUpdateJobPercentage(uint32_t& aValue);
    /**
     * Set the value of the UpdateJobDescription property
     *
     * Can only be called if EnablePropertyUpdateJobDescription has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateJobDescription(const std::string& aValue);
    /**
     * Get a copy of the value of the UpdateJobDescription property
     *
     * Can only be called if EnablePropertyUpdateJobDescription has previously been called.
     */
    void GetPropertyUpdateJobDescription(std::string& aValue);
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the DeviceList property.
     */
    void EnablePropertyDeviceList();
    /**
     * Enable the SettingsAvailable property.
     */
    void EnablePropertySettingsAvailable();
    /**
     * Enable the SettingsChangedCount property.
     */
    void EnablePropertySettingsChangedCount();
    /**
     * Enable the UpdateStatus property.
     */
    void EnablePropertyUpdateStatus();
    /**
     * Enable the UpdateTotalPercentage property.
     */
    void EnablePropertyUpdateTotalPercentage();
    /**
     * Enable the UpdateTotalJobs property.
     */
    void EnablePropertyUpdateTotalJobs();
    /**
     * Enable the UpdateJob property.
     */
    void EnablePropertyUpdateJob();
    /**
     * Enable the UpdateJobPercentage property.
     */
    void EnablePropertyUpdateJobPercentage();
    /**
     * Enable the UpdateJobDescription property.
     */
    void EnablePropertyUpdateJobDescription();
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
     * Signal that the action DeviceList is supported.
     * The action's availability will be published in the device's service.xml.
     * DeviceList must be overridden if this is called.
     */
    void EnableActionDeviceList();
    /**
     * Signal that the action DeviceSettings is supported.
     * The action's availability will be published in the device's service.xml.
     * DeviceSettings must be overridden if this is called.
     */
    void EnableActionDeviceSettings();
    /**
     * Signal that the action SettingsAvailable is supported.
     * The action's availability will be published in the device's service.xml.
     * SettingsAvailable must be overridden if this is called.
     */
    void EnableActionSettingsAvailable();
    /**
     * Signal that the action SettingsChangedCount is supported.
     * The action's availability will be published in the device's service.xml.
     * SettingsChangedCount must be overridden if this is called.
     */
    void EnableActionSettingsChangedCount();
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
     * Signal that the action ChannelMap is supported.
     * The action's availability will be published in the device's service.xml.
     * ChannelMap must be overridden if this is called.
     */
    void EnableActionChannelMap();
    /**
     * Signal that the action SetChannelMap is supported.
     * The action's availability will be published in the device's service.xml.
     * SetChannelMap must be overridden if this is called.
     */
    void EnableActionSetChannelMap();
    /**
     * Signal that the action AudioChannels is supported.
     * The action's availability will be published in the device's service.xml.
     * AudioChannels must be overridden if this is called.
     */
    void EnableActionAudioChannels();
    /**
     * Signal that the action SetAudioChannels is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAudioChannels must be overridden if this is called.
     */
    void EnableActionSetAudioChannels();
    /**
     * Signal that the action Version is supported.
     * The action's availability will be published in the device's service.xml.
     * Version must be overridden if this is called.
     */
    void EnableActionVersion();
private:
    /**
     * DeviceList action.
     *
     * Will be called when the device stack receives an invocation of the
     * DeviceList action for the owning device.
     * Must be implemented iff EnableActionDeviceList was called.
     */
    virtual void DeviceList(IDvInvocationStd& aInvocation, std::string& aList);
    /**
     * DeviceSettings action.
     *
     * Will be called when the device stack receives an invocation of the
     * DeviceSettings action for the owning device.
     * Must be implemented iff EnableActionDeviceSettings was called.
     */
    virtual void DeviceSettings(IDvInvocationStd& aInvocation, const std::string& aDeviceId, std::string& aSettings);
    /**
     * SettingsAvailable action.
     *
     * Will be called when the device stack receives an invocation of the
     * SettingsAvailable action for the owning device.
     * Must be implemented iff EnableActionSettingsAvailable was called.
     */
    virtual void SettingsAvailable(IDvInvocationStd& aInvocation, bool& aSettingsAvailable);
    /**
     * SettingsChangedCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * SettingsChangedCount action for the owning device.
     * Must be implemented iff EnableActionSettingsChangedCount was called.
     */
    virtual void SettingsChangedCount(IDvInvocationStd& aInvocation, uint32_t& aSettingsChangedCount);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocationStd& aInvocation, const std::string& aManifestUri);
    /**
     * UpdateBlocking action.
     *
     * Will be called when the device stack receives an invocation of the
     * UpdateBlocking action for the owning device.
     * Must be implemented iff EnableActionUpdateBlocking was called.
     */
    virtual void UpdateBlocking(IDvInvocationStd& aInvocation, const std::string& aManifestUri);
    /**
     * GetUpdateStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateStatus action for the owning device.
     * Must be implemented iff EnableActionGetUpdateStatus was called.
     */
    virtual void GetUpdateStatus(IDvInvocationStd& aInvocation, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription);
    /**
     * ChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * ChannelMap action for the owning device.
     * Must be implemented iff EnableActionChannelMap was called.
     */
    virtual void ChannelMap(IDvInvocationStd& aInvocation, std::string& aChannelMap);
    /**
     * SetChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetChannelMap action for the owning device.
     * Must be implemented iff EnableActionSetChannelMap was called.
     */
    virtual void SetChannelMap(IDvInvocationStd& aInvocation, const std::string& aChannelMap);
    /**
     * AudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * AudioChannels action for the owning device.
     * Must be implemented iff EnableActionAudioChannels was called.
     */
    virtual void AudioChannels(IDvInvocationStd& aInvocation, std::string& aAudioChannels);
    /**
     * SetAudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAudioChannels action for the owning device.
     * Must be implemented iff EnableActionSetAudioChannels was called.
     */
    virtual void SetAudioChannels(IDvInvocationStd& aInvocation, const std::string& aAudioChannels);
    /**
     * Version action.
     *
     * Will be called when the device stack receives an invocation of the
     * Version action for the owning device.
     * Must be implemented iff EnableActionVersion was called.
     */
    virtual void Version(IDvInvocationStd& aInvocation, uint32_t& aVersion);
private:
    DvProviderLinnCoUkExakt1Cpp();
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoSettingsAvailable(IDviInvocation& aInvocation);
    void DoSettingsChangedCount(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoUpdateBlocking(IDviInvocation& aInvocation);
    void DoGetUpdateStatus(IDviInvocation& aInvocation);
    void DoChannelMap(IDviInvocation& aInvocation);
    void DoSetChannelMap(IDviInvocation& aInvocation);
    void DoAudioChannels(IDviInvocation& aInvocation);
    void DoSetAudioChannels(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyDeviceList;
    PropertyBool* iPropertySettingsAvailable;
    PropertyUint* iPropertySettingsChangedCount;
    PropertyString* iPropertyUpdateStatus;
    PropertyUint* iPropertyUpdateTotalPercentage;
    PropertyUint* iPropertyUpdateTotalJobs;
    PropertyUint* iPropertyUpdateJob;
    PropertyUint* iPropertyUpdateJobPercentage;
    PropertyString* iPropertyUpdateJobDescription;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyUint* iPropertyVersion;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKEXAKT1CPP

