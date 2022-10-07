#ifndef HEADER_DVAVOPENHOMEORGEXAKT5
#define HEADER_DVAVOPENHOMEORGEXAKT5

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
 * Provider for the av.openhome.org:Exakt:5 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgExakt5 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgExakt5() {}
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
     * Set the value of the ConnectionStatus property
     *
     * Can only be called if EnablePropertyConnectionStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyConnectionStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the ConnectionStatus property
     *
     * Can only be called if EnablePropertyConnectionStatus has previously been called.
     */
    void GetPropertyConnectionStatus(Brhz& aValue);
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
    TBool SetPropertyVersion(const Brx& aValue);
    /**
     * Get a copy of the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     */
    void GetPropertyVersion(Brhz& aValue);
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
    DvProviderAvOpenhomeOrgExakt5(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgExakt5(DviDevice& aDevice);
    /**
     * Enable the DeviceList property.
     */
    void EnablePropertyDeviceList();
    /**
     * Enable the ConnectionStatus property.
     */
    void EnablePropertyConnectionStatus();
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
     * Signal that the action ConnectionStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * ConnectionStatus must be overridden if this is called.
     */
    void EnableActionConnectionStatus();
    /**
     * Signal that the action Set is supported.
     * The action's availability will be published in the device's service.xml.
     * Set must be overridden if this is called.
     */
    void EnableActionSet();
    /**
     * Signal that the action Reprogram is supported.
     * The action's availability will be published in the device's service.xml.
     * Reprogram must be overridden if this is called.
     */
    void EnableActionReprogram();
    /**
     * Signal that the action ReprogramFallback is supported.
     * The action's availability will be published in the device's service.xml.
     * ReprogramFallback must be overridden if this is called.
     */
    void EnableActionReprogramFallback();
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
    /**
     * Signal that the action Reboot is supported.
     * The action's availability will be published in the device's service.xml.
     * Reboot must be overridden if this is called.
     */
    void EnableActionReboot();
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
     * ConnectionStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * ConnectionStatus action for the owning device.
     * Must be implemented iff EnableActionConnectionStatus was called.
     */
    virtual void ConnectionStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aConnectionStatus);
    /**
     * Set action.
     *
     * Will be called when the device stack receives an invocation of the
     * Set action for the owning device.
     * Must be implemented iff EnableActionSet was called.
     */
    virtual void Set(IDvInvocation& aInvocation, const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist);
    /**
     * Reprogram action.
     *
     * Will be called when the device stack receives an invocation of the
     * Reprogram action for the owning device.
     * Must be implemented iff EnableActionReprogram was called.
     */
    virtual void Reprogram(IDvInvocation& aInvocation, const Brx& aDeviceId, const Brx& aFileUri);
    /**
     * ReprogramFallback action.
     *
     * Will be called when the device stack receives an invocation of the
     * ReprogramFallback action for the owning device.
     * Must be implemented iff EnableActionReprogramFallback was called.
     */
    virtual void ReprogramFallback(IDvInvocation& aInvocation, const Brx& aDeviceId, const Brx& aFileUri);
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
    virtual void Version(IDvInvocation& aInvocation, IDvInvocationResponseString& aVersion);
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
    /**
     * Reboot action.
     *
     * Will be called when the device stack receives an invocation of the
     * Reboot action for the owning device.
     * Must be implemented iff EnableActionReboot was called.
     */
    virtual void Reboot(IDvInvocation& aInvocation);
private:
    DvProviderAvOpenhomeOrgExakt5();
    void Construct();
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
    void DoChannelMap(IDviInvocation& aInvocation);
    void DoSetChannelMap(IDviInvocation& aInvocation);
    void DoAudioChannels(IDviInvocation& aInvocation);
    void DoSetAudioChannels(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
    void DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation);
    void DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation);
    void DoReboot(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyString* iPropertyVersion;
    PropertyBool* iPropertyIntegratedDevicesPresent;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGEXAKT5

