#ifndef HEADER_DVLINNCOUKEXAKT21
#define HEADER_DVLINNCOUKEXAKT21

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
 * Provider for the linn.co.uk:Exakt2:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkExakt21 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExakt21() {}
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
     * Set the value of the SettingsChangedSeq property
     *
     * Can only be called if EnablePropertySettingsChangedSeq has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySettingsChangedSeq(const Brx& aValue);
    /**
     * Get a copy of the value of the SettingsChangedSeq property
     *
     * Can only be called if EnablePropertySettingsChangedSeq has previously been called.
     */
    void GetPropertySettingsChangedSeq(Brhz& aValue);
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
    /**
     * Set the value of the IntegratedDevicesPresent property
     *
     * Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyIntegratedDevicesPresent(TBool aValue);
    /**
     * Get a copy of the value of the IntegratedDevicesPresent property
     *
     * Can only be called if EnablePropertyIntegratedDevicesPresent has previously been called.
     */
    void GetPropertyIntegratedDevicesPresent(TBool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt21(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExakt21(DviDevice& aDevice);
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
    virtual void GetDeviceList(IDvInvocation& aInvocation, IDvInvocationResponseString& aList);
    /**
     * GetDeviceSettings action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDeviceSettings action for the owning device.
     * Must be implemented iff EnableActionGetDeviceSettings was called.
     */
    virtual void GetDeviceSettings(IDvInvocation& aInvocation, const Brx& aDeviceId, IDvInvocationResponseString& aSettings);
    /**
     * GetSettingsAvailable action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSettingsAvailable action for the owning device.
     * Must be implemented iff EnableActionGetSettingsAvailable was called.
     */
    virtual void GetSettingsAvailable(IDvInvocation& aInvocation, IDvInvocationResponseBool& aSettingsAvailable);
    /**
     * GetSettingsChangedSeq action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSettingsChangedSeq action for the owning device.
     * Must be implemented iff EnableActionGetSettingsChangedSeq was called.
     */
    virtual void GetSettingsChangedSeq(IDvInvocation& aInvocation, IDvInvocationResponseString& aSettingsChangedSeq);
    /**
     * Update action.
     *
     * Will be called when the device stack receives an invocation of the
     * Update action for the owning device.
     * Must be implemented iff EnableActionUpdate was called.
     */
    virtual void Update(IDvInvocation& aInvocation, const Brx& aManifest);
    /**
     * UpdateBlocking action.
     *
     * Will be called when the device stack receives an invocation of the
     * UpdateBlocking action for the owning device.
     * Must be implemented iff EnableActionUpdateBlocking was called.
     */
    virtual void UpdateBlocking(IDvInvocation& aInvocation, const Brx& aManifest);
    /**
     * GetUpdateStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateStatus action for the owning device.
     * Must be implemented iff EnableActionGetUpdateStatus was called.
     */
    virtual void GetUpdateStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aUpdateStatus);
    /**
     * GetChannelMap action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetChannelMap action for the owning device.
     * Must be implemented iff EnableActionGetChannelMap was called.
     */
    virtual void GetChannelMap(IDvInvocation& aInvocation, IDvInvocationResponseString& aChannelMap);
    /**
     * GetAudioChannels action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAudioChannels action for the owning device.
     * Must be implemented iff EnableActionGetAudioChannels was called.
     */
    virtual void GetAudioChannels(IDvInvocation& aInvocation, IDvInvocationResponseString& aAudioChannels);
    /**
     * GetVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetVersion action for the owning device.
     * Must be implemented iff EnableActionGetVersion was called.
     */
    virtual void GetVersion(IDvInvocation& aInvocation, IDvInvocationResponseUint& aVersion);
    /**
     * ApplyUpdate action.
     *
     * Will be called when the device stack receives an invocation of the
     * ApplyUpdate action for the owning device.
     * Must be implemented iff EnableActionApplyUpdate was called.
     */
    virtual void ApplyUpdate(IDvInvocation& aInvocation);
    /**
     * PlayTestTrack action.
     *
     * Will be called when the device stack receives an invocation of the
     * PlayTestTrack action for the owning device.
     * Must be implemented iff EnableActionPlayTestTrack was called.
     */
    virtual void PlayTestTrack(IDvInvocation& aInvocation, const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata);
    /**
     * ClearTestTrack action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearTestTrack action for the owning device.
     * Must be implemented iff EnableActionClearTestTrack was called.
     */
    virtual void ClearTestTrack(IDvInvocation& aInvocation);
    /**
     * GetIntegratedDevicesPresent action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIntegratedDevicesPresent action for the owning device.
     * Must be implemented iff EnableActionGetIntegratedDevicesPresent was called.
     */
    virtual void GetIntegratedDevicesPresent(IDvInvocation& aInvocation, IDvInvocationResponseBool& aIntegratedDevicesPresent);
    /**
     * BootIntegratedDevicesToFallback action.
     *
     * Will be called when the device stack receives an invocation of the
     * BootIntegratedDevicesToFallback action for the owning device.
     * Must be implemented iff EnableActionBootIntegratedDevicesToFallback was called.
     */
    virtual void BootIntegratedDevicesToFallback(IDvInvocation& aInvocation);
private:
    DvProviderLinnCoUkExakt21();
    void Construct();
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

#endif // HEADER_DVLINNCOUKEXAKT21

