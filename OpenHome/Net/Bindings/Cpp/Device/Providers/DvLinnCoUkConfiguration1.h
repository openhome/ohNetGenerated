#ifndef HEADER_DVLINNCOUKCONFIGURATION1CPP
#define HEADER_DVLINNCOUKCONFIGURATION1CPP

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
 * Provider for the linn.co.uk:Configuration:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkConfiguration1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkConfiguration1Cpp() {}
    /**
     * Set the value of the ConfigurationXml property
     *
     * Can only be called if EnablePropertyConfigurationXml has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyConfigurationXml(const std::string& aValue);
    /**
     * Get a copy of the value of the ConfigurationXml property
     *
     * Can only be called if EnablePropertyConfigurationXml has previously been called.
     */
    void GetPropertyConfigurationXml(std::string& aValue);
    /**
     * Set the value of the ParameterXml property
     *
     * Can only be called if EnablePropertyParameterXml has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyParameterXml(const std::string& aValue);
    /**
     * Get a copy of the value of the ParameterXml property
     *
     * Can only be called if EnablePropertyParameterXml has previously been called.
     */
    void GetPropertyParameterXml(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkConfiguration1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the ConfigurationXml property.
     */
    void EnablePropertyConfigurationXml();
    /**
     * Enable the ParameterXml property.
     */
    void EnablePropertyParameterXml();
    /**
     * Signal that the action ConfigurationXml is supported.
     * The action's availability will be published in the device's service.xml.
     * ConfigurationXml must be overridden if this is called.
     */
    void EnableActionConfigurationXml();
    /**
     * Signal that the action ParameterXml is supported.
     * The action's availability will be published in the device's service.xml.
     * ParameterXml must be overridden if this is called.
     */
    void EnableActionParameterXml();
    /**
     * Signal that the action SetParameter is supported.
     * The action's availability will be published in the device's service.xml.
     * SetParameter must be overridden if this is called.
     */
    void EnableActionSetParameter();
private:
    /**
     * ConfigurationXml action.
     *
     * Will be called when the device stack receives an invocation of the
     * ConfigurationXml action for the owning device.
     * Must be implemented iff EnableActionConfigurationXml was called.
     */
    virtual void ConfigurationXml(IDvInvocationStd& aInvocation, std::string& aaConfigurationXml);
    /**
     * ParameterXml action.
     *
     * Will be called when the device stack receives an invocation of the
     * ParameterXml action for the owning device.
     * Must be implemented iff EnableActionParameterXml was called.
     */
    virtual void ParameterXml(IDvInvocationStd& aInvocation, std::string& aaParameterXml);
    /**
     * SetParameter action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetParameter action for the owning device.
     * Must be implemented iff EnableActionSetParameter was called.
     */
    virtual void SetParameter(IDvInvocationStd& aInvocation, const std::string& aaTarget, const std::string& aaName, const std::string& aaValue);
private:
    DvProviderLinnCoUkConfiguration1Cpp();
    void DoConfigurationXml(IDviInvocation& aInvocation);
    void DoParameterXml(IDviInvocation& aInvocation);
    void DoSetParameter(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyConfigurationXml;
    PropertyString* iPropertyParameterXml;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCONFIGURATION1CPP

