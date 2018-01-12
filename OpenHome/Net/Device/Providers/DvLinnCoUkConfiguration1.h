#ifndef HEADER_DVLINNCOUKCONFIGURATION1
#define HEADER_DVLINNCOUKCONFIGURATION1

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
 * Provider for the linn.co.uk:Configuration:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkConfiguration1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkConfiguration1() {}
    /**
     * Set the value of the ConfigurationXml property
     *
     * Can only be called if EnablePropertyConfigurationXml has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyConfigurationXml(const Brx& aValue);
    /**
     * Get a copy of the value of the ConfigurationXml property
     *
     * Can only be called if EnablePropertyConfigurationXml has previously been called.
     */
    void GetPropertyConfigurationXml(Brhz& aValue);
    /**
     * Set the value of the ParameterXml property
     *
     * Can only be called if EnablePropertyParameterXml has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyParameterXml(const Brx& aValue);
    /**
     * Get a copy of the value of the ParameterXml property
     *
     * Can only be called if EnablePropertyParameterXml has previously been called.
     */
    void GetPropertyParameterXml(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkConfiguration1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkConfiguration1(DviDevice& aDevice);
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
    virtual void ConfigurationXml(IDvInvocation& aInvocation, IDvInvocationResponseString& aaConfigurationXml);
    /**
     * ParameterXml action.
     *
     * Will be called when the device stack receives an invocation of the
     * ParameterXml action for the owning device.
     * Must be implemented iff EnableActionParameterXml was called.
     */
    virtual void ParameterXml(IDvInvocation& aInvocation, IDvInvocationResponseString& aaParameterXml);
    /**
     * SetParameter action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetParameter action for the owning device.
     * Must be implemented iff EnableActionSetParameter was called.
     */
    virtual void SetParameter(IDvInvocation& aInvocation, const Brx& aaTarget, const Brx& aaName, const Brx& aaValue);
private:
    DvProviderLinnCoUkConfiguration1();
    void Construct();
    void DoConfigurationXml(IDviInvocation& aInvocation);
    void DoParameterXml(IDviInvocation& aInvocation);
    void DoSetParameter(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyConfigurationXml;
    PropertyString* iPropertyParameterXml;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCONFIGURATION1

