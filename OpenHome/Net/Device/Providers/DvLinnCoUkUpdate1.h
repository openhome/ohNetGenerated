#ifndef HEADER_DVLINNCOUKUPDATE1
#define HEADER_DVLINNCOUKUPDATE1

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
 * Provider for the linn.co.uk:Update:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkUpdate1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkUpdate1() {}
    /**
     * Set the value of the SoftwareStatus property
     *
     * Can only be called if EnablePropertySoftwareStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySoftwareStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the SoftwareStatus property
     *
     * Can only be called if EnablePropertySoftwareStatus has previously been called.
     */
    void GetPropertySoftwareStatus(Brhz& aValue);
    /**
     * Set the value of the ExecutorStatus property
     *
     * Can only be called if EnablePropertyExecutorStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyExecutorStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the ExecutorStatus property
     *
     * Can only be called if EnablePropertyExecutorStatus has previously been called.
     */
    void GetPropertyExecutorStatus(Brhz& aValue);
    /**
     * Set the value of the UpdateTopic property
     *
     * Can only be called if EnablePropertyUpdateTopic has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateTopic(const Brx& aValue);
    /**
     * Get a copy of the value of the UpdateTopic property
     *
     * Can only be called if EnablePropertyUpdateTopic has previously been called.
     */
    void GetPropertyUpdateTopic(Brhz& aValue);
    /**
     * Set the value of the UpdateChannel property
     *
     * Can only be called if EnablePropertyUpdateChannel has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyUpdateChannel(const Brx& aValue);
    /**
     * Get a copy of the value of the UpdateChannel property
     *
     * Can only be called if EnablePropertyUpdateChannel has previously been called.
     */
    void GetPropertyUpdateChannel(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkUpdate1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkUpdate1(DviDevice& aDevice);
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
    virtual void PushManifest(IDvInvocation& aInvocation, const Brx& aUri);
    /**
     * SetUpdateFeedParams action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetUpdateFeedParams action for the owning device.
     * Must be implemented iff EnableActionSetUpdateFeedParams was called.
     */
    virtual void SetUpdateFeedParams(IDvInvocation& aInvocation, const Brx& aTopic, const Brx& aChannel);
    /**
     * GetUpdateFeedParams action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetUpdateFeedParams action for the owning device.
     * Must be implemented iff EnableActionGetUpdateFeedParams was called.
     */
    virtual void GetUpdateFeedParams(IDvInvocation& aInvocation, IDvInvocationResponseString& aTopic, IDvInvocationResponseString& aChannel);
    /**
     * GetSoftwareStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSoftwareStatus action for the owning device.
     * Must be implemented iff EnableActionGetSoftwareStatus was called.
     */
    virtual void GetSoftwareStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aSoftwareStatus);
    /**
     * GetExecutorStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetExecutorStatus action for the owning device.
     * Must be implemented iff EnableActionGetExecutorStatus was called.
     */
    virtual void GetExecutorStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aExecutorStatus);
    /**
     * Apply action.
     *
     * Will be called when the device stack receives an invocation of the
     * Apply action for the owning device.
     * Must be implemented iff EnableActionApply was called.
     */
    virtual void Apply(IDvInvocation& aInvocation);
    /**
     * Restore action.
     *
     * Will be called when the device stack receives an invocation of the
     * Restore action for the owning device.
     * Must be implemented iff EnableActionRestore was called.
     */
    virtual void Restore(IDvInvocation& aInvocation);
private:
    DvProviderLinnCoUkUpdate1();
    void Construct();
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

#endif // HEADER_DVLINNCOUKUPDATE1

