#ifndef HEADER_DVOPENHOMEORGOAUTH1
#define HEADER_DVOPENHOMEORGOAUTH1

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
 * Provider for the openhome.org:OAuth:1 UPnP service
 * @ingroup Providers
 */
class DvProviderOpenhomeOrgOAuth1 : public DvProvider
{
public:
    virtual ~DvProviderOpenhomeOrgOAuth1() {}
    /**
     * Set the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPublicKey(const Brx& aValue);
    /**
     * Get a copy of the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     */
    void GetPropertyPublicKey(Brhz& aValue);
    /**
     * Set the value of the UpdateId property
     *
     * Can only be called if EnablePropertyUpdateId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateId(TUint aValue);
    /**
     * Get a copy of the value of the UpdateId property
     *
     * Can only be called if EnablePropertyUpdateId has previously been called.
     */
    void GetPropertyUpdateId(TUint& aValue);
    /**
     * Set the value of the JobUpdateId property
     *
     * Can only be called if EnablePropertyJobUpdateId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyJobUpdateId(TUint aValue);
    /**
     * Get a copy of the value of the JobUpdateId property
     *
     * Can only be called if EnablePropertyJobUpdateId has previously been called.
     */
    void GetPropertyJobUpdateId(TUint& aValue);
    /**
     * Set the value of the SupportedServices property
     *
     * Can only be called if EnablePropertySupportedServices has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySupportedServices(const Brx& aValue);
    /**
     * Get a copy of the value of the SupportedServices property
     *
     * Can only be called if EnablePropertySupportedServices has previously been called.
     */
    void GetPropertySupportedServices(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderOpenhomeOrgOAuth1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderOpenhomeOrgOAuth1(DviDevice& aDevice);
    /**
     * Enable the PublicKey property.
     */
    void EnablePropertyPublicKey();
    /**
     * Enable the UpdateId property.
     */
    void EnablePropertyUpdateId();
    /**
     * Enable the JobUpdateId property.
     */
    void EnablePropertyJobUpdateId();
    /**
     * Enable the SupportedServices property.
     */
    void EnablePropertySupportedServices();
    /**
     * Signal that the action SetToken is supported.
     * The action's availability will be published in the device's service.xml.
     * SetToken must be overridden if this is called.
     */
    void EnableActionSetToken();
    /**
     * Signal that the action GetPublicKey is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPublicKey must be overridden if this is called.
     */
    void EnableActionGetPublicKey();
    /**
     * Signal that the action ClearToken is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearToken must be overridden if this is called.
     */
    void EnableActionClearToken();
    /**
     * Signal that the action ClearShortLivedToken is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearShortLivedToken must be overridden if this is called.
     */
    void EnableActionClearShortLivedToken();
    /**
     * Signal that the action ClearLongLivedToken is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearLongLivedToken must be overridden if this is called.
     */
    void EnableActionClearLongLivedToken();
    /**
     * Signal that the action ClearShortLivedTokens is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearShortLivedTokens must be overridden if this is called.
     */
    void EnableActionClearShortLivedTokens();
    /**
     * Signal that the action ClearLongLivedTokens is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearLongLivedTokens must be overridden if this is called.
     */
    void EnableActionClearLongLivedTokens();
    /**
     * Signal that the action ClearAllTokens is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearAllTokens must be overridden if this is called.
     */
    void EnableActionClearAllTokens();
    /**
     * Signal that the action GetUpdateId is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUpdateId must be overridden if this is called.
     */
    void EnableActionGetUpdateId();
    /**
     * Signal that the action GetServiceStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetServiceStatus must be overridden if this is called.
     */
    void EnableActionGetServiceStatus();
    /**
     * Signal that the action GetJobUpdateId is supported.
     * The action's availability will be published in the device's service.xml.
     * GetJobUpdateId must be overridden if this is called.
     */
    void EnableActionGetJobUpdateId();
    /**
     * Signal that the action GetJobStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetJobStatus must be overridden if this is called.
     */
    void EnableActionGetJobStatus();
    /**
     * Signal that the action GetSupportedServices is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSupportedServices must be overridden if this is called.
     */
    void EnableActionGetSupportedServices();
    /**
     * Signal that the action BeginLimitedInputFlow is supported.
     * The action's availability will be published in the device's service.xml.
     * BeginLimitedInputFlow must be overridden if this is called.
     */
    void EnableActionBeginLimitedInputFlow();
private:
    /**
     * SetToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetToken action for the owning device.
     * Must be implemented iff EnableActionSetToken was called.
     */
    virtual void SetToken(IDvInvocation& aInvocation, const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocation& aInvocation, IDvInvocationResponseString& aPublicKey);
    /**
     * ClearToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearToken action for the owning device.
     * Must be implemented iff EnableActionClearToken was called.
     */
    virtual void ClearToken(IDvInvocation& aInvocation, const Brx& aServiceId, const Brx& aTokenId);
    /**
     * ClearShortLivedToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearShortLivedToken action for the owning device.
     * Must be implemented iff EnableActionClearShortLivedToken was called.
     */
    virtual void ClearShortLivedToken(IDvInvocation& aInvocation, const Brx& aServiceId, const Brx& aTokenId);
    /**
     * ClearLongLivedToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearLongLivedToken action for the owning device.
     * Must be implemented iff EnableActionClearLongLivedToken was called.
     */
    virtual void ClearLongLivedToken(IDvInvocation& aInvocation, const Brx& aServiceId, const Brx& aTokenId);
    /**
     * ClearShortLivedTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearShortLivedTokens action for the owning device.
     * Must be implemented iff EnableActionClearShortLivedTokens was called.
     */
    virtual void ClearShortLivedTokens(IDvInvocation& aInvocation, const Brx& aServiceId);
    /**
     * ClearLongLivedTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearLongLivedTokens action for the owning device.
     * Must be implemented iff EnableActionClearLongLivedTokens was called.
     */
    virtual void ClearLongLivedTokens(IDvInvocation& aInvocation, const Brx& aServiceId);
    /**
     * ClearAllTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearAllTokens action for the owning device.
     * Must be implemented iff EnableActionClearAllTokens was called.
     */
    virtual void ClearAllTokens(IDvInvocation& aInvocation, const Brx& aServiceId);
    /**
     * GetUpdateId action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateId action for the owning device.
     * Must be implemented iff EnableActionGetUpdateId was called.
     */
    virtual void GetUpdateId(IDvInvocation& aInvocation, IDvInvocationResponseUint& aUpdateId);
    /**
     * GetServiceStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServiceStatus action for the owning device.
     * Must be implemented iff EnableActionGetServiceStatus was called.
     */
    virtual void GetServiceStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aServiceStatusJson);
    /**
     * GetJobUpdateId action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetJobUpdateId action for the owning device.
     * Must be implemented iff EnableActionGetJobUpdateId was called.
     */
    virtual void GetJobUpdateId(IDvInvocation& aInvocation, IDvInvocationResponseUint& aJobUpdateId);
    /**
     * GetJobStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetJobStatus action for the owning device.
     * Must be implemented iff EnableActionGetJobStatus was called.
     */
    virtual void GetJobStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aJobStatusJson);
    /**
     * GetSupportedServices action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSupportedServices action for the owning device.
     * Must be implemented iff EnableActionGetSupportedServices was called.
     */
    virtual void GetSupportedServices(IDvInvocation& aInvocation, IDvInvocationResponseString& aSupportedServiceListJson);
    /**
     * BeginLimitedInputFlow action.
     *
     * Will be called when the device stack receives an invocation of the
     * BeginLimitedInputFlow action for the owning device.
     * Must be implemented iff EnableActionBeginLimitedInputFlow was called.
     */
    virtual void BeginLimitedInputFlow(IDvInvocation& aInvocation, const Brx& aServiceId, IDvInvocationResponseString& aJobId, IDvInvocationResponseString& aLoginUrl, IDvInvocationResponseString& aUserCode);
private:
    DvProviderOpenhomeOrgOAuth1();
    void Construct();
    void DoSetToken(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
    void DoClearToken(IDviInvocation& aInvocation);
    void DoClearShortLivedToken(IDviInvocation& aInvocation);
    void DoClearLongLivedToken(IDviInvocation& aInvocation);
    void DoClearShortLivedTokens(IDviInvocation& aInvocation);
    void DoClearLongLivedTokens(IDviInvocation& aInvocation);
    void DoClearAllTokens(IDviInvocation& aInvocation);
    void DoGetUpdateId(IDviInvocation& aInvocation);
    void DoGetServiceStatus(IDviInvocation& aInvocation);
    void DoGetJobUpdateId(IDviInvocation& aInvocation);
    void DoGetJobStatus(IDviInvocation& aInvocation);
    void DoGetSupportedServices(IDviInvocation& aInvocation);
    void DoBeginLimitedInputFlow(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyPublicKey;
    PropertyUint* iPropertyUpdateId;
    PropertyUint* iPropertyJobUpdateId;
    PropertyString* iPropertySupportedServices;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVOPENHOMEORGOAUTH1

