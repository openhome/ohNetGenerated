#ifndef HEADER_DVLINNCOUKZONERECEIVER1CPP
#define HEADER_DVLINNCOUKZONERECEIVER1CPP

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
 * Provider for the linn.co.uk:ZoneReceiver:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkZoneReceiver1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkZoneReceiver1Cpp() {}
    /**
     * Set the value of the Sender property
     *
     * Can only be called if EnablePropertySender has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySender(const std::string& aValue);
    /**
     * Get a copy of the value of the Sender property
     *
     * Can only be called if EnablePropertySender has previously been called.
     */
    void GetPropertySender(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkZoneReceiver1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Sender property.
     */
    void EnablePropertySender();
    /**
     * Signal that the action GetSender is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSender must be overridden if this is called.
     */
    void EnableActionGetSender();
private:
    /**
     * GetSender action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSender action for the owning device.
     * Must be implemented iff EnableActionGetSender was called.
     */
    virtual void GetSender(IDvInvocationStd& aInvocation, std::string& aSender);
private:
    DvProviderLinnCoUkZoneReceiver1Cpp();
    void DoGetSender(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertySender;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKZONERECEIVER1CPP

