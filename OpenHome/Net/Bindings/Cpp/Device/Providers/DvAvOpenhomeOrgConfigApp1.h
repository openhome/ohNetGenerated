#ifndef HEADER_DVAVOPENHOMEORGCONFIGAPP1CPP
#define HEADER_DVAVOPENHOMEORGCONFIGAPP1CPP

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
 * Provider for the av.openhome.org:ConfigApp:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgConfigApp1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgConfigApp1Cpp() {}
    /**
     * Set the value of the Keys property
     *
     * Can only be called if EnablePropertyKeys has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyKeys(const std::string& aValue);
    /**
     * Get a copy of the value of the Keys property
     *
     * Can only be called if EnablePropertyKeys has previously been called.
     */
    void GetPropertyKeys(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgConfigApp1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetKeys(IDvInvocationStd& aInvocation, std::string& aKeys);
    /**
     * SetValue action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetValue action for the owning device.
     * Must be implemented iff EnableActionSetValue was called.
     */
    virtual void SetValue(IDvInvocationStd& aInvocation, const std::string& aKey, const std::string& aValue);
    /**
     * GetValue action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetValue action for the owning device.
     * Must be implemented iff EnableActionGetValue was called.
     */
    virtual void GetValue(IDvInvocationStd& aInvocation, const std::string& aKey, std::string& aValue);
    /**
     * ResetAll action.
     *
     * Will be called when the device stack receives an invocation of the
     * ResetAll action for the owning device.
     * Must be implemented iff EnableActionResetAll was called.
     */
    virtual void ResetAll(IDvInvocationStd& aInvocation);
private:
    DvProviderAvOpenhomeOrgConfigApp1Cpp();
    void DoGetKeys(IDviInvocation& aInvocation);
    void DoSetValue(IDviInvocation& aInvocation);
    void DoGetValue(IDviInvocation& aInvocation);
    void DoResetAll(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyKeys;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGCONFIGAPP1CPP

