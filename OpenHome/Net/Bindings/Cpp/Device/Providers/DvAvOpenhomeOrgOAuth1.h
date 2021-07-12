#ifndef HEADER_DVAVOPENHOMEORGOAUTH1CPP
#define HEADER_DVAVOPENHOMEORGOAUTH1CPP

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
 * Provider for the av.openhome.org:OAuth:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgOAuth1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgOAuth1Cpp() {}
    /**
     * Set the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPublicKey(const std::string& aValue);
    /**
     * Get a copy of the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     */
    void GetPropertyPublicKey(std::string& aValue);
    /**
     * Set the value of the UpdateId property
     *
     * Can only be called if EnablePropertyUpdateId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateId(uint32_t aValue);
    /**
     * Get a copy of the value of the UpdateId property
     *
     * Can only be called if EnablePropertyUpdateId has previously been called.
     */
    void GetPropertyUpdateId(uint32_t& aValue);
    /**
     * Set the value of the JobUpdateId property
     *
     * Can only be called if EnablePropertyJobUpdateId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyJobUpdateId(uint32_t aValue);
    /**
     * Get a copy of the value of the JobUpdateId property
     *
     * Can only be called if EnablePropertyJobUpdateId has previously been called.
     */
    void GetPropertyJobUpdateId(uint32_t& aValue);
    /**
     * Set the value of the SupportedServices property
     *
     * Can only be called if EnablePropertySupportedServices has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySupportedServices(const std::string& aValue);
    /**
     * Get a copy of the value of the SupportedServices property
     *
     * Can only be called if EnablePropertySupportedServices has previously been called.
     */
    void GetPropertySupportedServices(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgOAuth1Cpp(DvDeviceStd& aDevice);
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
    virtual void SetToken(IDvInvocationStd& aInvocation, const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocationStd& aInvocation, std::string& aPublicKey);
    /**
     * ClearToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearToken action for the owning device.
     * Must be implemented iff EnableActionClearToken was called.
     */
    virtual void ClearToken(IDvInvocationStd& aInvocation, const std::string& aServiceId, const std::string& aTokenId);
    /**
     * ClearShortLivedToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearShortLivedToken action for the owning device.
     * Must be implemented iff EnableActionClearShortLivedToken was called.
     */
    virtual void ClearShortLivedToken(IDvInvocationStd& aInvocation, const std::string& aServiceId, const std::string& aTokenId);
    /**
     * ClearLongLivedToken action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearLongLivedToken action for the owning device.
     * Must be implemented iff EnableActionClearLongLivedToken was called.
     */
    virtual void ClearLongLivedToken(IDvInvocationStd& aInvocation, const std::string& aServiceId, const std::string& aTokenId);
    /**
     * ClearShortLivedTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearShortLivedTokens action for the owning device.
     * Must be implemented iff EnableActionClearShortLivedTokens was called.
     */
    virtual void ClearShortLivedTokens(IDvInvocationStd& aInvocation, const std::string& aServiceId);
    /**
     * ClearLongLivedTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearLongLivedTokens action for the owning device.
     * Must be implemented iff EnableActionClearLongLivedTokens was called.
     */
    virtual void ClearLongLivedTokens(IDvInvocationStd& aInvocation, const std::string& aServiceId);
    /**
     * ClearAllTokens action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearAllTokens action for the owning device.
     * Must be implemented iff EnableActionClearAllTokens was called.
     */
    virtual void ClearAllTokens(IDvInvocationStd& aInvocation, const std::string& aServiceId);
    /**
     * GetUpdateId action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateId action for the owning device.
     * Must be implemented iff EnableActionGetUpdateId was called.
     */
    virtual void GetUpdateId(IDvInvocationStd& aInvocation, uint32_t& aUpdateId);
    /**
     * GetServiceStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetServiceStatus action for the owning device.
     * Must be implemented iff EnableActionGetServiceStatus was called.
     */
    virtual void GetServiceStatus(IDvInvocationStd& aInvocation, std::string& aServiceStatusJson);
    /**
     * GetJobUpdateId action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetJobUpdateId action for the owning device.
     * Must be implemented iff EnableActionGetJobUpdateId was called.
     */
    virtual void GetJobUpdateId(IDvInvocationStd& aInvocation, uint32_t& aJobUpdateId);
    /**
     * GetJobStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetJobStatus action for the owning device.
     * Must be implemented iff EnableActionGetJobStatus was called.
     */
    virtual void GetJobStatus(IDvInvocationStd& aInvocation, std::string& aJobStatusJson);
    /**
     * GetSupportedServices action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSupportedServices action for the owning device.
     * Must be implemented iff EnableActionGetSupportedServices was called.
     */
    virtual void GetSupportedServices(IDvInvocationStd& aInvocation, std::string& aSupportedServiceListJson);
    /**
     * BeginLimitedInputFlow action.
     *
     * Will be called when the device stack receives an invocation of the
     * BeginLimitedInputFlow action for the owning device.
     * Must be implemented iff EnableActionBeginLimitedInputFlow was called.
     */
    virtual void BeginLimitedInputFlow(IDvInvocationStd& aInvocation, const std::string& aServiceId, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode);
private:
    DvProviderAvOpenhomeOrgOAuth1Cpp();
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

#endif // HEADER_DVAVOPENHOMEORGOAUTH1CPP

