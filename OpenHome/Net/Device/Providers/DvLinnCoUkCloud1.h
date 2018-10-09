#ifndef HEADER_DVLINNCOUKCLOUD1
#define HEADER_DVLINNCOUKCLOUD1

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
 * Provider for the linn.co.uk:Cloud:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkCloud1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkCloud1() {}
    /**
     * Set the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAssociationStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     */
    void GetPropertyAssociationStatus(Brhz& aValue);
    /**
     * Set the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyConnected(TBool aValue);
    /**
     * Get a copy of the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     */
    void GetPropertyConnected(TBool& aValue);
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
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkCloud1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkCloud1(DviDevice& aDevice);
    /**
     * Enable the AssociationStatus property.
     */
    void EnablePropertyAssociationStatus();
    /**
     * Enable the Connected property.
     */
    void EnablePropertyConnected();
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
    virtual void GetChallengeResponse(IDvInvocation& aInvocation, const Brx& aChallenge, IDvInvocationResponseString& aResponse);
    /**
     * SetAssociated action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociated action for the owning device.
     * Must be implemented iff EnableActionSetAssociated was called.
     */
    virtual void SetAssociated(IDvInvocation& aInvocation, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated);
    /**
     * GetConnected action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetConnected action for the owning device.
     * Must be implemented iff EnableActionGetConnected was called.
     */
    virtual void GetConnected(IDvInvocation& aInvocation, IDvInvocationResponseBool& aConnected);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocation& aInvocation, IDvInvocationResponseString& aPublicKey);
private:
    DvProviderLinnCoUkCloud1();
    void Construct();
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociated(IDviInvocation& aInvocation);
    void DoGetConnected(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyConnected;
    PropertyString* iPropertyPublicKey;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCLOUD1

