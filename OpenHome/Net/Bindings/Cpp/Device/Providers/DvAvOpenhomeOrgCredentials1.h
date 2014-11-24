#ifndef HEADER_DVAVOPENHOMEORGCREDENTIALS1CPP
#define HEADER_DVAVOPENHOMEORGCREDENTIALS1CPP

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
 * Provider for the av.openhome.org:Credentials:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgCredentials1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgCredentials1Cpp() {}
    /**
     * Set the value of the Ids property
     *
     * Can only be called if EnablePropertyIds has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyIds(const std::string& aValue);
    /**
     * Get a copy of the value of the Ids property
     *
     * Can only be called if EnablePropertyIds has previously been called.
     */
    void GetPropertyIds(std::string& aValue);
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
     * Set the value of the SequenceNumber property
     *
     * Can only be called if EnablePropertySequenceNumber has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySequenceNumber(uint32_t aValue);
    /**
     * Get a copy of the value of the SequenceNumber property
     *
     * Can only be called if EnablePropertySequenceNumber has previously been called.
     */
    void GetPropertySequenceNumber(uint32_t& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgCredentials1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Ids property.
     */
    void EnablePropertyIds();
    /**
     * Enable the PublicKey property.
     */
    void EnablePropertyPublicKey();
    /**
     * Enable the SequenceNumber property.
     */
    void EnablePropertySequenceNumber();
    /**
     * Signal that the action Set is supported.
     * The action's availability will be published in the device's service.xml.
     * Set must be overridden if this is called.
     */
    void EnableActionSet();
    /**
     * Signal that the action Clear is supported.
     * The action's availability will be published in the device's service.xml.
     * Clear must be overridden if this is called.
     */
    void EnableActionClear();
    /**
     * Signal that the action SetEnabled is supported.
     * The action's availability will be published in the device's service.xml.
     * SetEnabled must be overridden if this is called.
     */
    void EnableActionSetEnabled();
    /**
     * Signal that the action Get is supported.
     * The action's availability will be published in the device's service.xml.
     * Get must be overridden if this is called.
     */
    void EnableActionGet();
    /**
     * Signal that the action Login is supported.
     * The action's availability will be published in the device's service.xml.
     * Login must be overridden if this is called.
     */
    void EnableActionLogin();
    /**
     * Signal that the action ReLogin is supported.
     * The action's availability will be published in the device's service.xml.
     * ReLogin must be overridden if this is called.
     */
    void EnableActionReLogin();
    /**
     * Signal that the action GetIds is supported.
     * The action's availability will be published in the device's service.xml.
     * GetIds must be overridden if this is called.
     */
    void EnableActionGetIds();
    /**
     * Signal that the action GetPublicKey is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPublicKey must be overridden if this is called.
     */
    void EnableActionGetPublicKey();
    /**
     * Signal that the action GetSequenceNumber is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSequenceNumber must be overridden if this is called.
     */
    void EnableActionGetSequenceNumber();
private:
    /**
     * Set action.
     *
     * Will be called when the device stack receives an invocation of the
     * Set action for the owning device.
     * Must be implemented iff EnableActionSet was called.
     */
    virtual void Set(IDvInvocationStd& aInvocation, const std::string& aId, const std::string& aUserName, const std::string& aPassword);
    /**
     * Clear action.
     *
     * Will be called when the device stack receives an invocation of the
     * Clear action for the owning device.
     * Must be implemented iff EnableActionClear was called.
     */
    virtual void Clear(IDvInvocationStd& aInvocation, const std::string& aId);
    /**
     * SetEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnabled action for the owning device.
     * Must be implemented iff EnableActionSetEnabled was called.
     */
    virtual void SetEnabled(IDvInvocationStd& aInvocation, const std::string& aId, bool aEnabled);
    /**
     * Get action.
     *
     * Will be called when the device stack receives an invocation of the
     * Get action for the owning device.
     * Must be implemented iff EnableActionGet was called.
     */
    virtual void Get(IDvInvocationStd& aInvocation, const std::string& aId, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData);
    /**
     * Login action.
     *
     * Will be called when the device stack receives an invocation of the
     * Login action for the owning device.
     * Must be implemented iff EnableActionLogin was called.
     */
    virtual void Login(IDvInvocationStd& aInvocation, const std::string& aId, std::string& aToken);
    /**
     * ReLogin action.
     *
     * Will be called when the device stack receives an invocation of the
     * ReLogin action for the owning device.
     * Must be implemented iff EnableActionReLogin was called.
     */
    virtual void ReLogin(IDvInvocationStd& aInvocation, const std::string& aId, const std::string& aCurrentToken, std::string& aNewToken);
    /**
     * GetIds action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIds action for the owning device.
     * Must be implemented iff EnableActionGetIds was called.
     */
    virtual void GetIds(IDvInvocationStd& aInvocation, std::string& aIds);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocationStd& aInvocation, std::string& aPublicKey);
    /**
     * GetSequenceNumber action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSequenceNumber action for the owning device.
     * Must be implemented iff EnableActionGetSequenceNumber was called.
     */
    virtual void GetSequenceNumber(IDvInvocationStd& aInvocation, uint32_t& aSequenceNumber);
private:
    DvProviderAvOpenhomeOrgCredentials1Cpp();
    void DoSet(IDviInvocation& aInvocation);
    void DoClear(IDviInvocation& aInvocation);
    void DoSetEnabled(IDviInvocation& aInvocation);
    void DoGet(IDviInvocation& aInvocation);
    void DoLogin(IDviInvocation& aInvocation);
    void DoReLogin(IDviInvocation& aInvocation);
    void DoGetIds(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
    void DoGetSequenceNumber(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyIds;
    PropertyString* iPropertyPublicKey;
    PropertyUint* iPropertySequenceNumber;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGCREDENTIALS1CPP

