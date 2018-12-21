#ifndef HEADER_DVLINNCOUKZONES1CPP
#define HEADER_DVLINNCOUKZONES1CPP

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
 * Provider for the linn.co.uk:Zones:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkZones1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkZones1Cpp() {}
    /**
     * Set the value of the Inputs property
     *
     * Can only be called if EnablePropertyInputs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyInputs(const std::string& aValue);
    /**
     * Get a copy of the value of the Inputs property
     *
     * Can only be called if EnablePropertyInputs has previously been called.
     */
    void GetPropertyInputs(std::string& aValue);
    /**
     * Set the value of the Outputs property
     *
     * Can only be called if EnablePropertyOutputs has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyOutputs(const std::string& aValue);
    /**
     * Get a copy of the value of the Outputs property
     *
     * Can only be called if EnablePropertyOutputs has previously been called.
     */
    void GetPropertyOutputs(std::string& aValue);
    /**
     * Set the value of the Mappings property
     *
     * Can only be called if EnablePropertyMappings has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMappings(const std::string& aValue);
    /**
     * Get a copy of the value of the Mappings property
     *
     * Can only be called if EnablePropertyMappings has previously been called.
     */
    void GetPropertyMappings(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkZones1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetInputs(IDvInvocationStd& aInvocation, std::string& aInputs);
    /**
     * GetOutputs action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetOutputs action for the owning device.
     * Must be implemented iff EnableActionGetOutputs was called.
     */
    virtual void GetOutputs(IDvInvocationStd& aInvocation, std::string& aOutputs);
    /**
     * GetMappings action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetMappings action for the owning device.
     * Must be implemented iff EnableActionGetMappings was called.
     */
    virtual void GetMappings(IDvInvocationStd& aInvocation, std::string& aMappings);
    /**
     * SetMappings action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetMappings action for the owning device.
     * Must be implemented iff EnableActionSetMappings was called.
     */
    virtual void SetMappings(IDvInvocationStd& aInvocation, const std::string& aMappings);
    /**
     * SetMapping action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetMapping action for the owning device.
     * Must be implemented iff EnableActionSetMapping was called.
     */
    virtual void SetMapping(IDvInvocationStd& aInvocation, const std::string& aOutput, const std::string& aInput);
private:
    DvProviderLinnCoUkZones1Cpp();
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

#endif // HEADER_DVLINNCOUKZONES1CPP

