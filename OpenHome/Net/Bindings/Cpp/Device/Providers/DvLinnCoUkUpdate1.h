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
     * Signal that the action PushManifest is supported.
     * The action's availability will be published in the device's service.xml.
     * PushManifest must be overridden if this is called.
     */
    void EnableActionPushManifest();
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
     * Signal that the action Recover is supported.
     * The action's availability will be published in the device's service.xml.
     * Recover must be overridden if this is called.
     */
    void EnableActionRecover();
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
    virtual void PushManifest(IDvInvocationStd& aInvocation, const std::string& aUri);
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
     * Recover action.
     *
     * Will be called when the device stack receives an invocation of the
     * Recover action for the owning device.
     * Must be implemented iff EnableActionRecover was called.
     */
    virtual void Recover(IDvInvocationStd& aInvocation);
    /**
     * CheckNow action.
     *
     * Will be called when the device stack receives an invocation of the
     * CheckNow action for the owning device.
     * Must be implemented iff EnableActionCheckNow was called.
     */
    virtual void CheckNow(IDvInvocationStd& aInvocation);
private:
    DvProviderLinnCoUkUpdate1Cpp();
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoRecover(IDviInvocation& aInvocation);
    void DoCheckNow(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKUPDATE1CPP

