#ifndef HEADER_DVAVOPENHOMEORGEXAKT4CPP
#define HEADER_DVAVOPENHOMEORGEXAKT4CPP

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
 * Provider for the av.openhome.org:Exakt:4 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgExakt4Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgExakt4Cpp() {}
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
     * Set the value of the ConnectionStatus property
     *
     * Can only be called if EnablePropertyConnectionStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyConnectionStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the ConnectionStatus property
     *
     * Can only be called if EnablePropertyConnectionStatus has previously been called.
     */
    void GetPropertyConnectionStatus(std::string& aValue);
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
    bool SetPropertyVersion(const std::string& aValue);
    /**
     * Get a copy of the value of the Version property
     *
     * Can only be called if EnablePropertyVersion has previously been called.
     */
    void GetPropertyVersion(std::string& aValue);
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
    DvProviderAvOpenhomeOrgExakt4Cpp(DvDeviceStd& aDevice);
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
     * ConnectionStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * ConnectionStatus action for the owning device.
     * Must be implemented iff EnableActionConnectionStatus was called.
     */
    virtual void ConnectionStatus(IDvInvocationStd& aInvocation, std::string& aConnectionStatus);
    /**
     * Set action.
     *
     * Will be called when the device stack receives an invocation of the
     * Set action for the owning device.
     * Must be implemented iff EnableActionSet was called.
     */
    virtual void Set(IDvInvocationStd& aInvocation, const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist);
    /**
     * Reprogram action.
     *
     * Will be called when the device stack receives an invocation of the
     * Reprogram action for the owning device.
     * Must be implemented iff EnableActionReprogram was called.
     */
    virtual void Reprogram(IDvInvocationStd& aInvocation, const std::string& aDeviceId, const std::string& aFileUri);
    /**
     * ReprogramFallback action.
     *
     * Will be called when the device stack receives an invocation of the
     * ReprogramFallback action for the owning device.
     * Must be implemented iff EnableActionReprogramFallback was called.
     */
    virtual void ReprogramFallback(IDvInvocationStd& aInvocation, const std::string& aDeviceId, const std::string& aFileUri);
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
    virtual void Version(IDvInvocationStd& aInvocation, std::string& aVersion);
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
    DvProviderAvOpenhomeOrgExakt4Cpp();
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

#endif // HEADER_DVAVOPENHOMEORGEXAKT4CPP

