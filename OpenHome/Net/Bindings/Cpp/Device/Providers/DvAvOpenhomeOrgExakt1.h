#ifndef HEADER_DVAVOPENHOMEORGEXAKT1CPP
#define HEADER_DVAVOPENHOMEORGEXAKT1CPP

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
 * Provider for the av.openhome.org:Exakt:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgExakt1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgExakt1Cpp() {}
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgExakt1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the DeviceList property.
     */
    void EnablePropertyDeviceList();
    /**
     * Enable the ConnectionStatus property.
     */
    void EnablePropertyConnectionStatus();
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
private:
    DvProviderAvOpenhomeOrgExakt1Cpp();
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGEXAKT1CPP

