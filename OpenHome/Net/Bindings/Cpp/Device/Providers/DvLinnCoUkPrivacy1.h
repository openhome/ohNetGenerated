#ifndef HEADER_DVLINNCOUKPRIVACY1CPP
#define HEADER_DVLINNCOUKPRIVACY1CPP

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
 * Provider for the linn.co.uk:Privacy:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkPrivacy1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkPrivacy1Cpp() {}
    /**
     * Set the value of the PolicyVersion property
     *
     * Can only be called if EnablePropertyPolicyVersion has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPolicyVersion(uint32_t aValue);
    /**
     * Get a copy of the value of the PolicyVersion property
     *
     * Can only be called if EnablePropertyPolicyVersion has previously been called.
     */
    void GetPropertyPolicyVersion(uint32_t& aValue);
    /**
     * Set the value of the PolicyAgreed property
     *
     * Can only be called if EnablePropertyPolicyAgreed has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPolicyAgreed(uint32_t aValue);
    /**
     * Get a copy of the value of the PolicyAgreed property
     *
     * Can only be called if EnablePropertyPolicyAgreed has previously been called.
     */
    void GetPropertyPolicyAgreed(uint32_t& aValue);
    /**
     * Set the value of the PolicyDetails property
     *
     * Can only be called if EnablePropertyPolicyDetails has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPolicyDetails(const std::string& aValue);
    /**
     * Get a copy of the value of the PolicyDetails property
     *
     * Can only be called if EnablePropertyPolicyDetails has previously been called.
     */
    void GetPropertyPolicyDetails(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkPrivacy1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the PolicyVersion property.
     */
    void EnablePropertyPolicyVersion();
    /**
     * Enable the PolicyAgreed property.
     */
    void EnablePropertyPolicyAgreed();
    /**
     * Enable the PolicyDetails property.
     */
    void EnablePropertyPolicyDetails();
    /**
     * Signal that the action GetPolicyVersion is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPolicyVersion must be overridden if this is called.
     */
    void EnableActionGetPolicyVersion();
    /**
     * Signal that the action GetPolicyAgreed is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPolicyAgreed must be overridden if this is called.
     */
    void EnableActionGetPolicyAgreed();
    /**
     * Signal that the action GetPolicyDetails is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPolicyDetails must be overridden if this is called.
     */
    void EnableActionGetPolicyDetails();
    /**
     * Signal that the action SetPolicyDetails is supported.
     * The action's availability will be published in the device's service.xml.
     * SetPolicyDetails must be overridden if this is called.
     */
    void EnableActionSetPolicyDetails();
private:
    /**
     * GetPolicyVersion action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPolicyVersion action for the owning device.
     * Must be implemented iff EnableActionGetPolicyVersion was called.
     */
    virtual void GetPolicyVersion(IDvInvocationStd& aInvocation, uint32_t& aVersion);
    /**
     * GetPolicyAgreed action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPolicyAgreed action for the owning device.
     * Must be implemented iff EnableActionGetPolicyAgreed was called.
     */
    virtual void GetPolicyAgreed(IDvInvocationStd& aInvocation, uint32_t& aVersion);
    /**
     * GetPolicyDetails action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPolicyDetails action for the owning device.
     * Must be implemented iff EnableActionGetPolicyDetails was called.
     */
    virtual void GetPolicyDetails(IDvInvocationStd& aInvocation, std::string& aDetails);
    /**
     * SetPolicyDetails action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPolicyDetails action for the owning device.
     * Must be implemented iff EnableActionSetPolicyDetails was called.
     */
    virtual void SetPolicyDetails(IDvInvocationStd& aInvocation, const std::string& aDetails);
private:
    DvProviderLinnCoUkPrivacy1Cpp();
    void DoGetPolicyVersion(IDviInvocation& aInvocation);
    void DoGetPolicyAgreed(IDviInvocation& aInvocation);
    void DoGetPolicyDetails(IDviInvocation& aInvocation);
    void DoSetPolicyDetails(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyPolicyVersion;
    PropertyUint* iPropertyPolicyAgreed;
    PropertyString* iPropertyPolicyDetails;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKPRIVACY1CPP

