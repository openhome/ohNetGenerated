#ifndef HEADER_DVLINNCOUKEXAKT1
#define HEADER_DVLINNCOUKEXAKT1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Core/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>

namespace OpenHome {
namespace Net {

class DviDevice;
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
class DvProviderLinnCoUkExakt1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExakt1() {}
    /**
     * Set the value of the DeviceList property
     *
     * Can only be called if EnablePropertyDeviceList has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDeviceList(const Brx& aValue);
    /**
     * Get a copy of the value of the DeviceList property
     *
     * Can only be called if EnablePropertyDeviceList has previously been called.
     */
    void GetPropertyDeviceList(Brhz& aValue);
    /**
     * Set the value of the SettingsAvailable property
     *
     * Can only be called if EnablePropertySettingsAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySettingsAvailable(TBool aValue);
    /**
     * Get a copy of the value of the SettingsAvailable property
     *
     * Can only be called if EnablePropertySettingsAvailable has previously been called.
     */
    void GetPropertySettingsAvailable(TBool& aValue);
    /**
     * Set the value of the SettingsChangedCount property
     *
     * Can only be called if EnablePropertySettingsChangedCount has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySettingsChangedCount(TUint aValue);
    /**
     * Get a copy of the value of the SettingsChangedCount property
     *
     * Can only be called if EnablePropertySettingsChangedCount has previously been called.
     */
    void GetPropertySettingsChangedCount(TUint& aValue);
    /**
     * Set the value of the UpdateStatus property
     *
     * Can only be called if EnablePropertyUpdateStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the UpdateStatus property
     *
     * Can only be called if EnablePropertyUpdateStatus has previously been called.
     */
    void GetPropertyUpdateStatus(Brhz& aValue);
    /**
     * Set the value of the UpdateTotalPercentage property
     *
     * Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateTotalPercentage(TUint aValue);
    /**
     * Get a copy of the value of the UpdateTotalPercentage property
     *
     * Can only be called if EnablePropertyUpdateTotalPercentage has previously been called.
     */
    void GetPropertyUpdateTotalPercentage(TUint& aValue);
    /**
     * Set the value of the UpdateTotalJobs property
     *
     * Can only be called if EnablePropertyUpdateTotalJobs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateTotalJobs(TUint aValue);
    /**
     * Get a copy of the value of the UpdateTotalJobs property
     *
     * Can only be called if EnablePropertyUpdateTotalJobs has previously been called.
     */
    void GetPropertyUpdateTotalJobs(TUint& aValue);
    /**
     * Set the value of the UpdateJob property
     *
     * Can only be called if EnablePropertyUpdateJob has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateJob(TUint aValue);
    /**
     * Get a copy of the value of the UpdateJob property
     *
     * Can only be called if EnablePropertyUpdateJob has previously been called.
     */
    void GetPropertyUpdateJob(TUint& aValue);
    /**
     * Set the value of the UpdateJobPercentage property
     *
     * Can only be called if EnablePropertyUpdateJobPercentage has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateJobPercentage(TUint aValue);
    /**
     * Get a copy of the value of the UpdateJobPercentage property
     *
     * Can only be called if EnablePropertyUpdateJobPercentage has previously been called.
     */
    void GetPropertyUpdateJobPercentage(TUint& aValue);
    /**
     * Set the value of the UpdateJobDescription property
     *
     * Can only be called if EnablePropertyUpdateJobDescription has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateJobDescription(const Brx& aValue);
    /**
     * Get a copy of the value of the UpdateJobDescription property
     *
     * Can only be called if EnablePropertyUpdateJobDescription has previously been called.
     */
    void GetPropertyUpdateJobDescription(Brhz& aValue);
    /**
     * Set the value of the ChannelMap property
     *
     * Can only be called if EnablePropertyChannelMap has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyChannelMap(const Brx& aValue);
    /**
     * Get a copy of the value of the ChannelMap property
     *
     * Can only be called if EnablePropertyChannelMap has previously been called.
     */
    void GetPropertyChannelMap(Brhz& aValue);
    /**
     * Set the value of the AudioChannels property
     *
     * Can only be called if EnablePropertyAudioChannels has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAudioChannels(const Brx& aValue);
    /**
     * Get a copy of the value of the AudioChannels property
     *
     * Can only be called if EnablePropertyAudioChannels has previously been called.
     */
    void GetPropertyAudioChannels(Brhz& aValue);
    /**
     * Set the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyVersion(TUint aValue);
    /**
     * Get a copy of the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     */
    void GetPropertyVersion(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt1(DviDevice& aDevice);
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
    virtual void DeviceList(IDvInvocation& aInvocation, IDvInvocationResponseString& aList);
    /**
     * DeviceSettings action.
     *
     * Will be called when the device stack receives an invocation of the
     * DeviceSettings action for the owning device.
     * Must be implemented iff EnableActionDeviceSettings was called.
     */
    virtual void DeviceSettings(IDvInvocation& aInvocation, const Brx& aDeviceId, IDvInvocationResponseString& aSettings);
    /**
     * SettingsAvailable action.
     *
     * Will be called when the device stack receives an invocation of the
     * SettingsAvailable action for the owning device.
     * Must be implemented iff EnableActionSettingsAvailable was called.
     */
    virtual void SettingsAvailable(IDvInvocation& aInvocation, IDvInvocationResponseBool& aSettingsAvailable);
    /**
     * SettingsChangedCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * SettingsChangedCount action for the owning device.
     * Must be implemented iff EnableActionSettingsChangedCount was called.
     */
    virtual void SettingsChangedCount(IDvInvocation& aInvocation, IDvInvocationResponseUint& aSettingsChangedCount);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocation& aInvocation, const Brx& aManifestUri);
    /**
     * UpdateBlocking action.
     *
     * Will be called when the device stack receives an invocation of the
     * UpdateBlocking action for the owning device.
     * Must be implemented iff EnableActionUpdateBlocking was called.
     */
    virtual void UpdateBlocking(IDvInvocation& aInvocation, const Brx& aManifestUri);
    /**
     * GetUpdateStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateStatus action for the owning device.
     * Must be implemented iff EnableActionGetUpdateStatus was called.
     */
    virtual void GetUpdateStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aUpdateStatus, IDvInvocationResponseUint& aUpdateTotalPercentage, IDvInvocationResponseUint& aUpdateTotalJobs, IDvInvocationResponseUint& aUpdateJob, IDvInvocationResponseUint& aUpdateJobPercentage, IDvInvocationResponseString& aUpdateJobDescription);
    /**
     * ChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * ChannelMap action for the owning device.
     * Must be implemented iff EnableActionChannelMap was called.
     */
    virtual void ChannelMap(IDvInvocation& aInvocation, IDvInvocationResponseString& aChannelMap);
    /**
     * SetChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetChannelMap action for the owning device.
     * Must be implemented iff EnableActionSetChannelMap was called.
     */
    virtual void SetChannelMap(IDvInvocation& aInvocation, const Brx& aChannelMap);
    /**
     * AudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * AudioChannels action for the owning device.
     * Must be implemented iff EnableActionAudioChannels was called.
     */
    virtual void AudioChannels(IDvInvocation& aInvocation, IDvInvocationResponseString& aAudioChannels);
    /**
     * SetAudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAudioChannels action for the owning device.
     * Must be implemented iff EnableActionSetAudioChannels was called.
     */
    virtual void SetAudioChannels(IDvInvocation& aInvocation, const Brx& aAudioChannels);
    /**
     * Version action.
     *
     * Will be called when the device stack receives an invocation of the
     * Version action for the owning device.
     * Must be implemented iff EnableActionVersion was called.
     */
    virtual void Version(IDvInvocation& aInvocation, IDvInvocationResponseUint& aVersion);
private:
    DvProviderLinnCoUkExakt1();
    void Construct();
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

#endif // HEADER_DVLINNCOUKEXAKT1

