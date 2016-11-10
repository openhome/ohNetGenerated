#ifndef HEADER_DVLINNCOUKPRIVACY1
#define HEADER_DVLINNCOUKPRIVACY1

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
 * Provider for the linn.co.uk:Privacy:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkPrivacy1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkPrivacy1() {}
    /**
     * Set the value of the PolicyVersion property
     *
     * Can only be called if EnablePropertyPolicyVersion has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPolicyVersion(TUint aValue);
    /**
     * Get a copy of the value of the PolicyVersion property
     *
     * Can only be called if EnablePropertyPolicyVersion has previously been called.
     */
    void GetPropertyPolicyVersion(TUint& aValue);
    /**
     * Set the value of the PolicyAgreed property
     *
     * Can only be called if EnablePropertyPolicyAgreed has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPolicyAgreed(TUint aValue);
    /**
     * Get a copy of the value of the PolicyAgreed property
     *
     * Can only be called if EnablePropertyPolicyAgreed has previously been called.
     */
    void GetPropertyPolicyAgreed(TUint& aValue);
    /**
     * Set the value of the PolicyDetails property
     *
     * Can only be called if EnablePropertyPolicyDetails has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPolicyDetails(const Brx& aValue);
    /**
     * Get a copy of the value of the PolicyDetails property
     *
     * Can only be called if EnablePropertyPolicyDetails has previously been called.
     */
    void GetPropertyPolicyDetails(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkPrivacy1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkPrivacy1(DviDevice& aDevice);
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
    virtual void GetPolicyVersion(IDvInvocation& aInvocation, IDvInvocationResponseUint& aVersion);
    /**
     * GetPolicyAgreed action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPolicyAgreed action for the owning device.
     * Must be implemented iff EnableActionGetPolicyAgreed was called.
     */
    virtual void GetPolicyAgreed(IDvInvocation& aInvocation, IDvInvocationResponseUint& aVersion);
    /**
     * GetPolicyDetails action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPolicyDetails action for the owning device.
     * Must be implemented iff EnableActionGetPolicyDetails was called.
     */
    virtual void GetPolicyDetails(IDvInvocation& aInvocation, IDvInvocationResponseString& aDetails);
    /**
     * SetPolicyDetails action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetPolicyDetails action for the owning device.
     * Must be implemented iff EnableActionSetPolicyDetails was called.
     */
    virtual void SetPolicyDetails(IDvInvocation& aInvocation, const Brx& aDetails);
private:
    DvProviderLinnCoUkPrivacy1();
    void Construct();
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

#endif // HEADER_DVLINNCOUKPRIVACY1

