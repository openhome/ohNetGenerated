#ifndef HEADER_DVAVOPENHOMEORGDEBUG1CPP
#define HEADER_DVAVOPENHOMEORGDEBUG1CPP

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
 * Provider for the av.openhome.org:Debug:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgDebug1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgDebug1Cpp() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDebug1Cpp(DvDeviceStd& aDevice);
    /**
     * Signal that the action GetLog is supported.
     * The action's availability will be published in the device's service.xml.
     * GetLog must be overridden if this is called.
     */
    void EnableActionGetLog();
private:
    /**
     * GetLog action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetLog action for the owning device.
     * Must be implemented iff EnableActionGetLog was called.
     */
    virtual void GetLog(IDvInvocationStd& aInvocation, std::string& aLog);
private:
    DvProviderAvOpenhomeOrgDebug1Cpp();
    void DoGetLog(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGDEBUG1CPP

