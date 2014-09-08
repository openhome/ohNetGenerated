#ifndef HEADER_DVAVOPENHOMEORGEXAKT1
#define HEADER_DVAVOPENHOMEORGEXAKT1

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
 * Provider for the av.openhome.org:Exakt:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgExakt1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgExakt1() {}
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgExakt1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgExakt1(DviDevice& aDevice);
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
private:
    DvProviderAvOpenhomeOrgExakt1();
    void Construct();
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

#endif // HEADER_DVAVOPENHOMEORGEXAKT1

