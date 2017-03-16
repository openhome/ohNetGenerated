#ifndef HEADER_DVLINNCOUKEXAKTINPUTS1
#define HEADER_DVLINNCOUKEXAKTINPUTS1

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
 * Provider for the linn.co.uk:ExaktInputs:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkExaktInputs1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExaktInputs1() {}
    /**
     * Set the value of the Associations property
     *
     * Can only be called if EnablePropertyAssociations has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAssociations(const Brx& aValue);
    /**
     * Get a copy of the value of the Associations property
     *
     * Can only be called if EnablePropertyAssociations has previously been called.
     */
    void GetPropertyAssociations(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExaktInputs1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExaktInputs1(DviDevice& aDevice);
    /**
     * Enable the Associations property.
     */
    void EnablePropertyAssociations();
    /**
     * Signal that the action GetAssociation is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAssociation must be overridden if this is called.
     */
    void EnableActionGetAssociation();
    /**
     * Signal that the action SetAssociation is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAssociation must be overridden if this is called.
     */
    void EnableActionSetAssociation();
    /**
     * Signal that the action ClearAssociation is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearAssociation must be overridden if this is called.
     */
    void EnableActionClearAssociation();
    /**
     * Signal that the action InputCount is supported.
     * The action's availability will be published in the device's service.xml.
     * InputCount must be overridden if this is called.
     */
    void EnableActionInputCount();
private:
    /**
     * GetAssociation action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAssociation action for the owning device.
     * Must be implemented iff EnableActionGetAssociation was called.
     */
    virtual void GetAssociation(IDvInvocation& aInvocation, TUint aInputIndex, IDvInvocationResponseString& aDeviceId);
    /**
     * SetAssociation action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociation action for the owning device.
     * Must be implemented iff EnableActionSetAssociation was called.
     */
    virtual void SetAssociation(IDvInvocation& aInvocation, TUint aInputIndex, const Brx& aDeviceId);
    /**
     * ClearAssociation action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearAssociation action for the owning device.
     * Must be implemented iff EnableActionClearAssociation was called.
     */
    virtual void ClearAssociation(IDvInvocation& aInvocation, TUint aInputIndex);
    /**
     * InputCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * InputCount action for the owning device.
     * Must be implemented iff EnableActionInputCount was called.
     */
    virtual void InputCount(IDvInvocation& aInvocation, IDvInvocationResponseUint& aInputCount);
private:
    DvProviderLinnCoUkExaktInputs1();
    void Construct();
    void DoGetAssociation(IDviInvocation& aInvocation);
    void DoSetAssociation(IDviInvocation& aInvocation);
    void DoClearAssociation(IDviInvocation& aInvocation);
    void DoInputCount(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociations;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKEXAKTINPUTS1

