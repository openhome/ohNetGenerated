#ifndef HEADER_DVAVOPENHOMEORGCONFIGAPP1
#define HEADER_DVAVOPENHOMEORGCONFIGAPP1

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
 * Provider for the av.openhome.org:ConfigApp:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgConfigApp1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgConfigApp1() {}
    /**
     * Set the value of the Keys property
     *
     * Can only be called if EnablePropertyKeys has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyKeys(const Brx& aValue);
    /**
     * Get a copy of the value of the Keys property
     *
     * Can only be called if EnablePropertyKeys has previously been called.
     */
    void GetPropertyKeys(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgConfigApp1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgConfigApp1(DviDevice& aDevice);
    /**
     * Enable the Keys property.
     */
    void EnablePropertyKeys();
    /**
     * Signal that the action GetKeys is supported.
     * The action's availability will be published in the device's service.xml.
     * GetKeys must be overridden if this is called.
     */
    void EnableActionGetKeys();
    /**
     * Signal that the action SetValue is supported.
     * The action's availability will be published in the device's service.xml.
     * SetValue must be overridden if this is called.
     */
    void EnableActionSetValue();
    /**
     * Signal that the action GetValue is supported.
     * The action's availability will be published in the device's service.xml.
     * GetValue must be overridden if this is called.
     */
    void EnableActionGetValue();
    /**
     * Signal that the action ResetAll is supported.
     * The action's availability will be published in the device's service.xml.
     * ResetAll must be overridden if this is called.
     */
    void EnableActionResetAll();
private:
    /**
     * GetKeys action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetKeys action for the owning device.
     * Must be implemented iff EnableActionGetKeys was called.
     */
    virtual void GetKeys(IDvInvocation& aInvocation, IDvInvocationResponseString& aKeys);
    /**
     * SetValue action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetValue action for the owning device.
     * Must be implemented iff EnableActionSetValue was called.
     */
    virtual void SetValue(IDvInvocation& aInvocation, const Brx& aKey, const Brx& aValue);
    /**
     * GetValue action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetValue action for the owning device.
     * Must be implemented iff EnableActionGetValue was called.
     */
    virtual void GetValue(IDvInvocation& aInvocation, const Brx& aKey, IDvInvocationResponseString& aValue);
    /**
     * ResetAll action.
     *
     * Will be called when the device stack receives an invocation of the
     * ResetAll action for the owning device.
     * Must be implemented iff EnableActionResetAll was called.
     */
    virtual void ResetAll(IDvInvocation& aInvocation);
private:
    DvProviderAvOpenhomeOrgConfigApp1();
    void Construct();
    void DoGetKeys(IDviInvocation& aInvocation);
    void DoSetValue(IDviInvocation& aInvocation);
    void DoGetValue(IDviInvocation& aInvocation);
    void DoResetAll(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyKeys;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGCONFIGAPP1

