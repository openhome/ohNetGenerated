#ifndef HEADER_DVLINNCOUKUPDATE1CPP
#define HEADER_DVLINNCOUKUPDATE1CPP

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
 * Provider for the linn.co.uk:Update:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkUpdate1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkUpdate1Cpp() {}
    /**
     * Set the value of the SoftwareStatus property
     *
     * Can only be called if EnablePropertySoftwareStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySoftwareStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the SoftwareStatus property
     *
     * Can only be called if EnablePropertySoftwareStatus has previously been called.
     */
    void GetPropertySoftwareStatus(std::string& aValue);
    /**
     * Set the value of the ExecutorStatus property
     *
     * Can only be called if EnablePropertyExecutorStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyExecutorStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the ExecutorStatus property
     *
     * Can only be called if EnablePropertyExecutorStatus has previously been called.
     */
    void GetPropertyExecutorStatus(std::string& aValue);
    /**
     * Set the value of the UpdateTopic property
     *
     * Can only be called if EnablePropertyUpdateTopic has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateTopic(const std::string& aValue);
    /**
     * Get a copy of the value of the UpdateTopic property
     *
     * Can only be called if EnablePropertyUpdateTopic has previously been called.
     */
    void GetPropertyUpdateTopic(std::string& aValue);
    /**
     * Set the value of the UpdateChannel property
     *
     * Can only be called if EnablePropertyUpdateChannel has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyUpdateChannel(const std::string& aValue);
    /**
     * Get a copy of the value of the UpdateChannel property
     *
     * Can only be called if EnablePropertyUpdateChannel has previously been called.
     */
    void GetPropertyUpdateChannel(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkUpdate1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the SoftwareStatus property.
     */
    void EnablePropertySoftwareStatus();
    /**
     * Enable the ExecutorStatus property.
     */
    void EnablePropertyExecutorStatus();
    /**
     * Enable the UpdateTopic property.
     */
    void EnablePropertyUpdateTopic();
    /**
     * Enable the UpdateChannel property.
     */
    void EnablePropertyUpdateChannel();
    /**
     * Signal that the action PushManifest is supported.
     * The action's availability will be published in the device's service.xml.
     * PushManifest must be overridden if this is called.
     */
    void EnableActionPushManifest();
    /**
     * Signal that the action SetUpdateFeedParams is supported.
     * The action's availability will be published in the device's service.xml.
     * SetUpdateFeedParams must be overridden if this is called.
     */
    void EnableActionSetUpdateFeedParams();
    /**
     * Signal that the action GetUpdateFeedParams is supported.
     * The action's availability will be published in the device's service.xml.
     * GetUpdateFeedParams must be overridden if this is called.
     */
    void EnableActionGetUpdateFeedParams();
    /**
     * Signal that the action GetSoftwareStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSoftwareStatus must be overridden if this is called.
     */
    void EnableActionGetSoftwareStatus();
    /**
     * Signal that the action GetExecutorStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetExecutorStatus must be overridden if this is called.
     */
    void EnableActionGetExecutorStatus();
    /**
     * Signal that the action Apply is supported.
     * The action's availability will be published in the device's service.xml.
     * Apply must be overridden if this is called.
     */
    void EnableActionApply();
    /**
     * Signal that the action Restore is supported.
     * The action's availability will be published in the device's service.xml.
     * Restore must be overridden if this is called.
     */
    void EnableActionRestore();
private:
    /**
     * PushManifest action.
     *
     * Will be called when the device stack receives an invocation of the
     * PushManifest action for the owning device.
     * Must be implemented iff EnableActionPushManifest was called.
     */
    virtual void PushManifest(IDvInvocationStd& aInvocation, const std::string& aUri);
    /**
     * SetUpdateFeedParams action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetUpdateFeedParams action for the owning device.
     * Must be implemented iff EnableActionSetUpdateFeedParams was called.
     */
    virtual void SetUpdateFeedParams(IDvInvocationStd& aInvocation, const std::string& aTopic, const std::string& aChannel);
    /**
     * GetUpdateFeedParams action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateFeedParams action for the owning device.
     * Must be implemented iff EnableActionGetUpdateFeedParams was called.
     */
    virtual void GetUpdateFeedParams(IDvInvocationStd& aInvocation, std::string& aTopic, std::string& aChannel);
    /**
     * GetSoftwareStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSoftwareStatus action for the owning device.
     * Must be implemented iff EnableActionGetSoftwareStatus was called.
     */
    virtual void GetSoftwareStatus(IDvInvocationStd& aInvocation, std::string& aSoftwareStatus);
    /**
     * GetExecutorStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetExecutorStatus action for the owning device.
     * Must be implemented iff EnableActionGetExecutorStatus was called.
     */
    virtual void GetExecutorStatus(IDvInvocationStd& aInvocation, std::string& aExecutorStatus);
    /**
     * Apply action.
     *
     * Will be called when the device stack receives an invocation of the
     * Apply action for the owning device.
     * Must be implemented iff EnableActionApply was called.
     */
    virtual void Apply(IDvInvocationStd& aInvocation);
    /**
     * Restore action.
     *
     * Will be called when the device stack receives an invocation of the
     * Restore action for the owning device.
     * Must be implemented iff EnableActionRestore was called.
     */
    virtual void Restore(IDvInvocationStd& aInvocation);
private:
    DvProviderLinnCoUkUpdate1Cpp();
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoSetUpdateFeedParams(IDviInvocation& aInvocation);
    void DoGetUpdateFeedParams(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoRestore(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyUpdateTopic;
    PropertyString* iPropertyUpdateChannel;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKUPDATE1CPP

