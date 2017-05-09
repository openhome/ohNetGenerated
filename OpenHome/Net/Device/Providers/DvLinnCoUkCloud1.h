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
     * Set the value of the ControlEnabled property
     *
     * Can only be called if EnablePropertyControlEnabled has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyControlEnabled(TBool aValue);
    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * Can only be called if EnablePropertyControlEnabled has previously been called.
     */
    void GetPropertyControlEnabled(TBool& aValue);
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
     * Enable the ControlEnabled property.
     */
    void EnablePropertyControlEnabled();
    /**
     * Signal that the action GetChallengeResponse is supported.
     * The action's availability will be published in the device's service.xml.
     * GetChallengeResponse must be overridden if this is called.
     */
    void EnableActionGetChallengeResponse();
    /**
     * Signal that the action SetAssociationStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAssociationStatus must be overridden if this is called.
     */
    void EnableActionSetAssociationStatus();
    /**
     * Signal that the action GetAssociationStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAssociationStatus must be overridden if this is called.
     */
    void EnableActionGetAssociationStatus();
    /**
     * Signal that the action SetControlEnabled is supported.
     * The action's availability will be published in the device's service.xml.
     * SetControlEnabled must be overridden if this is called.
     */
    void EnableActionSetControlEnabled();
    /**
     * Signal that the action GetControlEnabled is supported.
     * The action's availability will be published in the device's service.xml.
     * GetControlEnabled must be overridden if this is called.
     */
    void EnableActionGetControlEnabled();
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
     * SetAssociationStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociationStatus action for the owning device.
     * Must be implemented iff EnableActionSetAssociationStatus was called.
     */
    virtual void SetAssociationStatus(IDvInvocation& aInvocation, const Brx& aStatus);
    /**
     * GetAssociationStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAssociationStatus action for the owning device.
     * Must be implemented iff EnableActionGetAssociationStatus was called.
     */
    virtual void GetAssociationStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aStatus);
    /**
     * SetControlEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetControlEnabled action for the owning device.
     * Must be implemented iff EnableActionSetControlEnabled was called.
     */
    virtual void SetControlEnabled(IDvInvocation& aInvocation, TBool aEnabled);
    /**
     * GetControlEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetControlEnabled action for the owning device.
     * Must be implemented iff EnableActionGetControlEnabled was called.
     */
    virtual void GetControlEnabled(IDvInvocation& aInvocation, IDvInvocationResponseBool& aEnabled);
private:
    DvProviderLinnCoUkCloud1();
    void Construct();
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetAssociationStatus(IDviInvocation& aInvocation);
    void DoGetAssociationStatus(IDviInvocation& aInvocation);
    void DoSetControlEnabled(IDviInvocation& aInvocation);
    void DoGetControlEnabled(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyControlEnabled;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCLOUD1

