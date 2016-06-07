#ifndef HEADER_DVAVOPENHOMEORGDEBUG1
#define HEADER_DVAVOPENHOMEORGDEBUG1

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
 * Provider for the av.openhome.org:Debug:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgDebug1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgDebug1() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDebug1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDebug1(DviDevice& aDevice);
    /**
     * Signal that the action GetLog is supported.
     * The action's availability will be published in the device's service.xml.
     * GetLog must be overridden if this is called.
     */
    void EnableActionGetLog();
    /**
     * Signal that the action SendLog is supported.
     * The action's availability will be published in the device's service.xml.
     * SendLog must be overridden if this is called.
     */
    void EnableActionSendLog();
private:
    /**
     * GetLog action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetLog action for the owning device.
     * Must be implemented iff EnableActionGetLog was called.
     */
    virtual void GetLog(IDvInvocation& aInvocation, IDvInvocationResponseString& aLog);
    /**
     * SendLog action.
     *
     * Will be called when the device stack receives an invocation of the
     * SendLog action for the owning device.
     * Must be implemented iff EnableActionSendLog was called.
     */
    virtual void SendLog(IDvInvocation& aInvocation, const Brx& aData);
private:
    DvProviderAvOpenhomeOrgDebug1();
    void Construct();
    void DoGetLog(IDviInvocation& aInvocation);
    void DoSendLog(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGDEBUG1

