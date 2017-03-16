#ifndef HEADER_DVLINNCOUKEXAKTINPUTS1CPP
#define HEADER_DVLINNCOUKEXAKTINPUTS1CPP

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
 * Provider for the linn.co.uk:ExaktInputs:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkExaktInputs1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkExaktInputs1Cpp() {}
    /**
     * Set the value of the Associations property
     *
     * Can only be called if EnablePropertyAssociations has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAssociations(const std::string& aValue);
    /**
     * Get a copy of the value of the Associations property
     *
     * Can only be called if EnablePropertyAssociations has previously been called.
     */
    void GetPropertyAssociations(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkExaktInputs1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetAssociation(IDvInvocationStd& aInvocation, uint32_t aInputIndex, std::string& aDeviceId);
    /**
     * SetAssociation action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociation action for the owning device.
     * Must be implemented iff EnableActionSetAssociation was called.
     */
    virtual void SetAssociation(IDvInvocationStd& aInvocation, uint32_t aInputIndex, const std::string& aDeviceId);
    /**
     * ClearAssociation action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearAssociation action for the owning device.
     * Must be implemented iff EnableActionClearAssociation was called.
     */
    virtual void ClearAssociation(IDvInvocationStd& aInvocation, uint32_t aInputIndex);
    /**
     * InputCount action.
     *
     * Will be called when the device stack receives an invocation of the
     * InputCount action for the owning device.
     * Must be implemented iff EnableActionInputCount was called.
     */
    virtual void InputCount(IDvInvocationStd& aInvocation, uint32_t& aInputCount);
private:
    DvProviderLinnCoUkExaktInputs1Cpp();
    void DoGetAssociation(IDviInvocation& aInvocation);
    void DoSetAssociation(IDviInvocation& aInvocation);
    void DoClearAssociation(IDviInvocation& aInvocation);
    void DoInputCount(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociations;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKEXAKTINPUTS1CPP

