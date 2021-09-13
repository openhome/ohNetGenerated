#ifndef HEADER_DVLINNCOUKCLOUD2CPP
#define HEADER_DVLINNCOUKCLOUD2CPP

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
 * Provider for the linn.co.uk:Cloud:2 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkCloud2Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkCloud2Cpp() {}
    /**
     * Set the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAssociationStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     */
    void GetPropertyAssociationStatus(std::string& aValue);
    /**
     * Set the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyConnected(bool aValue);
    /**
     * Get a copy of the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     */
    void GetPropertyConnected(bool& aValue);
    /**
     * Set the value of the AccountId property
     *
     * Can only be called if EnablePropertyAccountId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAccountId(const std::string& aValue);
    /**
     * Get a copy of the value of the AccountId property
     *
     * Can only be called if EnablePropertyAccountId has previously been called.
     */
    void GetPropertyAccountId(std::string& aValue);
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkCloud2Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the AssociationStatus property.
     */
    void EnablePropertyAssociationStatus();
    /**
     * Enable the Connected property.
     */
    void EnablePropertyConnected();
    /**
     * Enable the AccountId property.
     */
    void EnablePropertyAccountId();
    /**
     * Enable the PublicKey property.
     */
    void EnablePropertyPublicKey();
    /**
     * Signal that the action GetChallengeResponse is supported.
     * The action's availability will be published in the device's service.xml.
     * GetChallengeResponse must be overridden if this is called.
     */
    void EnableActionGetChallengeResponse();
    /**
     * Signal that the action SetAssociated is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAssociated must be overridden if this is called.
     */
    void EnableActionSetAssociated();
    /**
     * Signal that the action GetConnected is supported.
     * The action's availability will be published in the device's service.xml.
     * GetConnected must be overridden if this is called.
     */
    void EnableActionGetConnected();
    /**
     * Signal that the action GetAccountId is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAccountId must be overridden if this is called.
     */
    void EnableActionGetAccountId();
    /**
     * Signal that the action GetPublicKey is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPublicKey must be overridden if this is called.
     */
    void EnableActionGetPublicKey();
private:
    /**
     * GetChallengeResponse action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetChallengeResponse action for the owning device.
     * Must be implemented iff EnableActionGetChallengeResponse was called.
     */
    virtual void GetChallengeResponse(IDvInvocationStd& aInvocation, const std::string& aChallenge, std::string& aResponse);
    /**
     * SetAssociated action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociated action for the owning device.
     * Must be implemented iff EnableActionSetAssociated was called.
     */
    virtual void SetAssociated(IDvInvocationStd& aInvocation, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aAssociated);
    /**
     * GetConnected action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetConnected action for the owning device.
     * Must be implemented iff EnableActionGetConnected was called.
     */
    virtual void GetConnected(IDvInvocationStd& aInvocation, bool& aConnected);
    /**
     * GetAccountId action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAccountId action for the owning device.
     * Must be implemented iff EnableActionGetAccountId was called.
     */
    virtual void GetAccountId(IDvInvocationStd& aInvocation, std::string& aAccountId);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocationStd& aInvocation, std::string& aPublicKey);
private:
    DvProviderLinnCoUkCloud2Cpp();
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociated(IDviInvocation& aInvocation);
    void DoGetConnected(IDviInvocation& aInvocation);
    void DoGetAccountId(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyConnected;
    PropertyString* iPropertyAccountId;
    PropertyString* iPropertyPublicKey;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCLOUD2CPP

