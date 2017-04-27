#ifndef HEADER_DVAVOPENHOMEORGSENDER2CPP
#define HEADER_DVAVOPENHOMEORGSENDER2CPP

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
 * Provider for the av.openhome.org:Sender:2 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgSender2Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgSender2Cpp() {}
    /**
     * Set the value of the PresentationUrl property
     *
     * Can only be called if EnablePropertyPresentationUrl has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPresentationUrl(const std::string& aValue);
    /**
     * Get a copy of the value of the PresentationUrl property
     *
     * Can only be called if EnablePropertyPresentationUrl has previously been called.
     */
    void GetPropertyPresentationUrl(std::string& aValue);
    /**
     * Set the value of the Metadata property
     *
     * Can only be called if EnablePropertyMetadata has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyMetadata(const std::string& aValue);
    /**
     * Get a copy of the value of the Metadata property
     *
     * Can only be called if EnablePropertyMetadata has previously been called.
     */
    void GetPropertyMetadata(std::string& aValue);
    /**
     * Set the value of the Audio property
     *
     * Can only be called if EnablePropertyAudio has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAudio(bool aValue);
    /**
     * Get a copy of the value of the Audio property
     *
     * Can only be called if EnablePropertyAudio has previously been called.
     */
    void GetPropertyAudio(bool& aValue);
    /**
     * Set the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     */
    void GetPropertyStatus(std::string& aValue);
    /**
     * Set the value of the Status2 property
     *
     * Can only be called if EnablePropertyStatus2 has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyStatus2(const std::string& aValue);
    /**
     * Get a copy of the value of the Status2 property
     *
     * Can only be called if EnablePropertyStatus2 has previously been called.
     */
    void GetPropertyStatus2(std::string& aValue);
    /**
     * Set the value of the Enabled property
     *
     * Can only be called if EnablePropertyEnabled has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyEnabled(bool aValue);
    /**
     * Get a copy of the value of the Enabled property
     *
     * Can only be called if EnablePropertyEnabled has previously been called.
     */
    void GetPropertyEnabled(bool& aValue);
    /**
     * Set the value of the Attributes property
     *
     * Can only be called if EnablePropertyAttributes has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAttributes(const std::string& aValue);
    /**
     * Get a copy of the value of the Attributes property
     *
     * Can only be called if EnablePropertyAttributes has previously been called.
     */
    void GetPropertyAttributes(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgSender2Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the PresentationUrl property.
     */
    void EnablePropertyPresentationUrl();
    /**
     * Enable the Metadata property.
     */
    void EnablePropertyMetadata();
    /**
     * Enable the Audio property.
     */
    void EnablePropertyAudio();
    /**
     * Enable the Status property.
     */
    void EnablePropertyStatus();
    /**
     * Enable the Status2 property.
     */
    void EnablePropertyStatus2();
    /**
     * Enable the Enabled property.
     */
    void EnablePropertyEnabled();
    /**
     * Enable the Attributes property.
     */
    void EnablePropertyAttributes();
    /**
     * Signal that the action PresentationUrl is supported.
     * The action's availability will be published in the device's service.xml.
     * PresentationUrl must be overridden if this is called.
     */
    void EnableActionPresentationUrl();
    /**
     * Signal that the action Metadata is supported.
     * The action's availability will be published in the device's service.xml.
     * Metadata must be overridden if this is called.
     */
    void EnableActionMetadata();
    /**
     * Signal that the action Audio is supported.
     * The action's availability will be published in the device's service.xml.
     * Audio must be overridden if this is called.
     */
    void EnableActionAudio();
    /**
     * Signal that the action Status is supported.
     * The action's availability will be published in the device's service.xml.
     * Status must be overridden if this is called.
     */
    void EnableActionStatus();
    /**
     * Signal that the action Status2 is supported.
     * The action's availability will be published in the device's service.xml.
     * Status2 must be overridden if this is called.
     */
    void EnableActionStatus2();
    /**
     * Signal that the action Enabled is supported.
     * The action's availability will be published in the device's service.xml.
     * Enabled must be overridden if this is called.
     */
    void EnableActionEnabled();
    /**
     * Signal that the action Attributes is supported.
     * The action's availability will be published in the device's service.xml.
     * Attributes must be overridden if this is called.
     */
    void EnableActionAttributes();
private:
    /**
     * PresentationUrl action.
     *
     * Will be called when the device stack receives an invocation of the
     * PresentationUrl action for the owning device.
     * Must be implemented iff EnableActionPresentationUrl was called.
     */
    virtual void PresentationUrl(IDvInvocationStd& aInvocation, std::string& aValue);
    /**
     * Metadata action.
     *
     * Will be called when the device stack receives an invocation of the
     * Metadata action for the owning device.
     * Must be implemented iff EnableActionMetadata was called.
     */
    virtual void Metadata(IDvInvocationStd& aInvocation, std::string& aValue);
    /**
     * Audio action.
     *
     * Will be called when the device stack receives an invocation of the
     * Audio action for the owning device.
     * Must be implemented iff EnableActionAudio was called.
     */
    virtual void Audio(IDvInvocationStd& aInvocation, bool& aValue);
    /**
     * Status action.
     *
     * Will be called when the device stack receives an invocation of the
     * Status action for the owning device.
     * Must be implemented iff EnableActionStatus was called.
     */
    virtual void Status(IDvInvocationStd& aInvocation, std::string& aValue);
    /**
     * Status2 action.
     *
     * Will be called when the device stack receives an invocation of the
     * Status2 action for the owning device.
     * Must be implemented iff EnableActionStatus2 was called.
     */
    virtual void Status2(IDvInvocationStd& aInvocation, std::string& aValue);
    /**
     * Enabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * Enabled action for the owning device.
     * Must be implemented iff EnableActionEnabled was called.
     */
    virtual void Enabled(IDvInvocationStd& aInvocation, bool& aValue);
    /**
     * Attributes action.
     *
     * Will be called when the device stack receives an invocation of the
     * Attributes action for the owning device.
     * Must be implemented iff EnableActionAttributes was called.
     */
    virtual void Attributes(IDvInvocationStd& aInvocation, std::string& aValue);
private:
    DvProviderAvOpenhomeOrgSender2Cpp();
    void DoPresentationUrl(IDviInvocation& aInvocation);
    void DoMetadata(IDviInvocation& aInvocation);
    void DoAudio(IDviInvocation& aInvocation);
    void DoStatus(IDviInvocation& aInvocation);
    void DoStatus2(IDviInvocation& aInvocation);
    void DoEnabled(IDviInvocation& aInvocation);
    void DoAttributes(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyPresentationUrl;
    PropertyString* iPropertyMetadata;
    PropertyBool* iPropertyAudio;
    PropertyString* iPropertyStatus;
    PropertyString* iPropertyStatus2;
    PropertyBool* iPropertyEnabled;
    PropertyString* iPropertyAttributes;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGSENDER2CPP

