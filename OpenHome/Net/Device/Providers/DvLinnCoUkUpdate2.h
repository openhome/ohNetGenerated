#ifndef HEADER_DVLINNCOUKUPDATE2
#define HEADER_DVLINNCOUKUPDATE2

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
 * Provider for the linn.co.uk:Update:2 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkUpdate2 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkUpdate2() {}
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
     * Set the value of the JobStatus property
     *
     * Can only be called if EnablePropertyJobStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyJobStatus(const Brx& aValue);
    /**
     * Get a copy of the value of the JobStatus property
     *
     * Can only be called if EnablePropertyJobStatus has previously been called.
     */
    void GetPropertyJobStatus(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkUpdate2(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkUpdate2(DviDevice& aDevice);
    /**
     * Enable the SoftwareStatus property.
     */
    void EnablePropertySoftwareStatus();
    /**
     * Enable the ExecutorStatus property.
     */
    void EnablePropertyExecutorStatus();
    /**
     * Enable the JobStatus property.
     */
    void EnablePropertyJobStatus();
    /**
     * Signal that the action PushManifest is supported.
     * The action's availability will be published in the device's service.xml.
     * PushManifest must be overridden if this is called.
     */
    void EnableActionPushManifest();
    /**
     * Signal that the action PushManifest2 is supported.
     * The action's availability will be published in the device's service.xml.
     * PushManifest2 must be overridden if this is called.
     */
    void EnableActionPushManifest2();
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
     * Signal that the action GetJobStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetJobStatus must be overridden if this is called.
     */
    void EnableActionGetJobStatus();
    /**
     * Signal that the action Apply is supported.
     * The action's availability will be published in the device's service.xml.
     * Apply must be overridden if this is called.
     */
    void EnableActionApply();
    /**
     * Signal that the action Apply2 is supported.
     * The action's availability will be published in the device's service.xml.
     * Apply2 must be overridden if this is called.
     */
    void EnableActionApply2();
    /**
     * Signal that the action Recover is supported.
     * The action's availability will be published in the device's service.xml.
     * Recover must be overridden if this is called.
     */
    void EnableActionRecover();
    /**
     * Signal that the action Recover2 is supported.
     * The action's availability will be published in the device's service.xml.
     * Recover2 must be overridden if this is called.
     */
    void EnableActionRecover2();
    /**
     * Signal that the action CheckNow is supported.
     * The action's availability will be published in the device's service.xml.
     * CheckNow must be overridden if this is called.
     */
    void EnableActionCheckNow();
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
     * PushManifest2 action.
     *
     * Will be called when the device stack receives an invocation of the
     * PushManifest2 action for the owning device.
     * Must be implemented iff EnableActionPushManifest2 was called.
     */
    virtual void PushManifest2(IDvInvocation& aInvocation, const Brx& aUri, IDvInvocationResponseUint& aId);
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
     * GetJobStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetJobStatus action for the owning device.
     * Must be implemented iff EnableActionGetJobStatus was called.
     */
    virtual void GetJobStatus(IDvInvocation& aInvocation, IDvInvocationResponseString& aJobStatus);
    /**
     * Apply action.
     *
     * Will be called when the device stack receives an invocation of the
     * Apply action for the owning device.
     * Must be implemented iff EnableActionApply was called.
     */
    virtual void Apply(IDvInvocation& aInvocation);
    /**
     * Apply2 action.
     *
     * Will be called when the device stack receives an invocation of the
     * Apply2 action for the owning device.
     * Must be implemented iff EnableActionApply2 was called.
     */
    virtual void Apply2(IDvInvocation& aInvocation, IDvInvocationResponseUint& aId);
    /**
     * Recover action.
     *
     * Will be called when the device stack receives an invocation of the
     * Recover action for the owning device.
     * Must be implemented iff EnableActionRecover was called.
     */
    virtual void Recover(IDvInvocation& aInvocation);
    /**
     * Recover2 action.
     *
     * Will be called when the device stack receives an invocation of the
     * Recover2 action for the owning device.
     * Must be implemented iff EnableActionRecover2 was called.
     */
    virtual void Recover2(IDvInvocation& aInvocation, IDvInvocationResponseUint& aId);
    /**
     * CheckNow action.
     *
     * Will be called when the device stack receives an invocation of the
     * CheckNow action for the owning device.
     * Must be implemented iff EnableActionCheckNow was called.
     */
    virtual void CheckNow(IDvInvocation& aInvocation);
private:
    DvProviderLinnCoUkUpdate2();
    void Construct();
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoPushManifest2(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoGetJobStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoApply2(IDviInvocation& aInvocation);
    void DoRecover(IDviInvocation& aInvocation);
    void DoRecover2(IDviInvocation& aInvocation);
    void DoCheckNow(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyJobStatus;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKUPDATE2

