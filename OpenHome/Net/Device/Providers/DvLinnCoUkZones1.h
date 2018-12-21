#ifndef HEADER_DVLINNCOUKZONES1
#define HEADER_DVLINNCOUKZONES1

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
 * Provider for the linn.co.uk:Zones:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkZones1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkZones1() {}
    /**
     * Set the value of the Inputs property
     *
     * Can only be called if EnablePropertyInputs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyInputs(const Brx& aValue);
    /**
     * Get a copy of the value of the Inputs property
     *
     * Can only be called if EnablePropertyInputs has previously been called.
     */
    void GetPropertyInputs(Brhz& aValue);
    /**
     * Set the value of the Outputs property
     *
     * Can only be called if EnablePropertyOutputs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyOutputs(const Brx& aValue);
    /**
     * Get a copy of the value of the Outputs property
     *
     * Can only be called if EnablePropertyOutputs has previously been called.
     */
    void GetPropertyOutputs(Brhz& aValue);
    /**
     * Set the value of the Mappings property
     *
     * Can only be called if EnablePropertyMappings has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyMappings(const Brx& aValue);
    /**
     * Get a copy of the value of the Mappings property
     *
     * Can only be called if EnablePropertyMappings has previously been called.
     */
    void GetPropertyMappings(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkZones1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkZones1(DviDevice& aDevice);
    /**
     * Enable the Inputs property.
     */
    void EnablePropertyInputs();
    /**
     * Enable the Outputs property.
     */
    void EnablePropertyOutputs();
    /**
     * Enable the Mappings property.
     */
    void EnablePropertyMappings();
    /**
     * Signal that the action GetInputs is supported.
     * The action's availability will be published in the device's service.xml.
     * GetInputs must be overridden if this is called.
     */
    void EnableActionGetInputs();
    /**
     * Signal that the action GetOutputs is supported.
     * The action's availability will be published in the device's service.xml.
     * GetOutputs must be overridden if this is called.
     */
    void EnableActionGetOutputs();
    /**
     * Signal that the action GetMappings is supported.
     * The action's availability will be published in the device's service.xml.
     * GetMappings must be overridden if this is called.
     */
    void EnableActionGetMappings();
    /**
     * Signal that the action SetMappings is supported.
     * The action's availability will be published in the device's service.xml.
     * SetMappings must be overridden if this is called.
     */
    void EnableActionSetMappings();
    /**
     * Signal that the action SetMapping is supported.
     * The action's availability will be published in the device's service.xml.
     * SetMapping must be overridden if this is called.
     */
    void EnableActionSetMapping();
private:
    /**
     * GetInputs action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetInputs action for the owning device.
     * Must be implemented iff EnableActionGetInputs was called.
     */
    virtual void GetInputs(IDvInvocation& aInvocation, IDvInvocationResponseString& aInputs);
    /**
     * GetOutputs action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetOutputs action for the owning device.
     * Must be implemented iff EnableActionGetOutputs was called.
     */
    virtual void GetOutputs(IDvInvocation& aInvocation, IDvInvocationResponseString& aOutputs);
    /**
     * GetMappings action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetMappings action for the owning device.
     * Must be implemented iff EnableActionGetMappings was called.
     */
    virtual void GetMappings(IDvInvocation& aInvocation, IDvInvocationResponseString& aMappings);
    /**
     * SetMappings action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetMappings action for the owning device.
     * Must be implemented iff EnableActionSetMappings was called.
     */
    virtual void SetMappings(IDvInvocation& aInvocation, const Brx& aMappings);
    /**
     * SetMapping action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetMapping action for the owning device.
     * Must be implemented iff EnableActionSetMapping was called.
     */
    virtual void SetMapping(IDvInvocation& aInvocation, const Brx& aOutput, const Brx& aInput);
private:
    DvProviderLinnCoUkZones1();
    void Construct();
    void DoGetInputs(IDviInvocation& aInvocation);
    void DoGetOutputs(IDviInvocation& aInvocation);
    void DoGetMappings(IDviInvocation& aInvocation);
    void DoSetMappings(IDviInvocation& aInvocation);
    void DoSetMapping(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyInputs;
    PropertyString* iPropertyOutputs;
    PropertyString* iPropertyMappings;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKZONES1

