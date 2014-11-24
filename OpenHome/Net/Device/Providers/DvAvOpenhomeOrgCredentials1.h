#ifndef HEADER_DVAVOPENHOMEORGCREDENTIALS1
#define HEADER_DVAVOPENHOMEORGCREDENTIALS1

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
 * Provider for the av.openhome.org:Credentials:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgCredentials1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgCredentials1() {}
    /**
     * Set the value of the Ids property
     *
     * Can only be called if EnablePropertyIds has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyIds(const Brx& aValue);
    /**
     * Get a copy of the value of the Ids property
     *
     * Can only be called if EnablePropertyIds has previously been called.
     */
    void GetPropertyIds(Brhz& aValue);
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
     * Set the value of the SequenceNumber property
     *
     * Can only be called if EnablePropertySequenceNumber has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySequenceNumber(TUint aValue);
    /**
     * Get a copy of the value of the SequenceNumber property
     *
     * Can only be called if EnablePropertySequenceNumber has previously been called.
     */
    void GetPropertySequenceNumber(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgCredentials1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgCredentials1(DviDevice& aDevice);
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
    virtual void Set(IDvInvocation& aInvocation, const Brx& aId, const Brx& aUserName, const Brx& aPassword);
    /**
     * Clear action.
     *
     * Will be called when the device stack receives an invocation of the
     * Clear action for the owning device.
     * Must be implemented iff EnableActionClear was called.
     */
    virtual void Clear(IDvInvocation& aInvocation, const Brx& aId);
    /**
     * SetEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetEnabled action for the owning device.
     * Must be implemented iff EnableActionSetEnabled was called.
     */
    virtual void SetEnabled(IDvInvocation& aInvocation, const Brx& aId, TBool aEnabled);
    /**
     * Get action.
     *
     * Will be called when the device stack receives an invocation of the
     * Get action for the owning device.
     * Must be implemented iff EnableActionGet was called.
     */
    virtual void Get(IDvInvocation& aInvocation, const Brx& aId, IDvInvocationResponseString& aUserName, IDvInvocationResponseString& aPassword, IDvInvocationResponseBool& aEnabled, IDvInvocationResponseString& aStatus, IDvInvocationResponseString& aData);
    /**
     * Login action.
     *
     * Will be called when the device stack receives an invocation of the
     * Login action for the owning device.
     * Must be implemented iff EnableActionLogin was called.
     */
    virtual void Login(IDvInvocation& aInvocation, const Brx& aId, IDvInvocationResponseString& aToken);
    /**
     * ReLogin action.
     *
     * Will be called when the device stack receives an invocation of the
     * ReLogin action for the owning device.
     * Must be implemented iff EnableActionReLogin was called.
     */
    virtual void ReLogin(IDvInvocation& aInvocation, const Brx& aId, const Brx& aCurrentToken, IDvInvocationResponseString& aNewToken);
    /**
     * GetIds action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIds action for the owning device.
     * Must be implemented iff EnableActionGetIds was called.
     */
    virtual void GetIds(IDvInvocation& aInvocation, IDvInvocationResponseString& aIds);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocation& aInvocation, IDvInvocationResponseString& aPublicKey);
    /**
     * GetSequenceNumber action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSequenceNumber action for the owning device.
     * Must be implemented iff EnableActionGetSequenceNumber was called.
     */
    virtual void GetSequenceNumber(IDvInvocation& aInvocation, IDvInvocationResponseUint& aSequenceNumber);
private:
    DvProviderAvOpenhomeOrgCredentials1();
    void Construct();
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

#endif // HEADER_DVAVOPENHOMEORGCREDENTIALS1

