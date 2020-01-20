#ifndef HEADER_DVAVOPENHOMEORGDEBUG2
#define HEADER_DVAVOPENHOMEORGDEBUG2

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
 * Provider for the av.openhome.org:Debug:2 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgDebug2 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgDebug2() {}
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDebug2(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgDebug2(DviDevice& aDevice);
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
    /**
     * Signal that the action SendDeviceAnnouncements is supported.
     * The action's availability will be published in the device's service.xml.
     * SendDeviceAnnouncements must be overridden if this is called.
     */
    void EnableActionSendDeviceAnnouncements();
    /**
     * Signal that the action GetRecentMSearches is supported.
     * The action's availability will be published in the device's service.xml.
     * GetRecentMSearches must be overridden if this is called.
     */
    void EnableActionGetRecentMSearches();
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
    /**
     * SendDeviceAnnouncements action.
     *
     * Will be called when the device stack receives an invocation of the
     * SendDeviceAnnouncements action for the owning device.
     * Must be implemented iff EnableActionSendDeviceAnnouncements was called.
     */
    virtual void SendDeviceAnnouncements(IDvInvocation& aInvocation);
    /**
     * GetRecentMSearches action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetRecentMSearches action for the owning device.
     * Must be implemented iff EnableActionGetRecentMSearches was called.
     */
    virtual void GetRecentMSearches(IDvInvocation& aInvocation, IDvInvocationResponseString& aJsonArray);
private:
    DvProviderAvOpenhomeOrgDebug2();
    void Construct();
    void DoGetLog(IDviInvocation& aInvocation);
    void DoSendLog(IDviInvocation& aInvocation);
    void DoSendDeviceAnnouncements(IDviInvocation& aInvocation);
    void DoGetRecentMSearches(IDviInvocation& aInvocation);
private:
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGDEBUG2

