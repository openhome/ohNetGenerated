#ifndef HEADER_DVLINNCOUKLIPSYNC1CPP
#define HEADER_DVLINNCOUKLIPSYNC1CPP

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
 * Provider for the linn.co.uk:LipSync:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkLipSync1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkLipSync1Cpp() {}
    /**
     * Set the value of the Delay property
     *
     * Can only be called if EnablePropertyDelay has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDelay(uint32_t aValue);
    /**
     * Get a copy of the value of the Delay property
     *
     * Can only be called if EnablePropertyDelay has previously been called.
     */
    void GetPropertyDelay(uint32_t& aValue);
    /**
     * Set the value of the DelayMinimum property
     *
     * Can only be called if EnablePropertyDelayMinimum has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDelayMinimum(uint32_t aValue);
    /**
     * Get a copy of the value of the DelayMinimum property
     *
     * Can only be called if EnablePropertyDelayMinimum has previously been called.
     */
    void GetPropertyDelayMinimum(uint32_t& aValue);
    /**
     * Set the value of the DelayMaximum property
     *
     * Can only be called if EnablePropertyDelayMaximum has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDelayMaximum(uint32_t aValue);
    /**
     * Get a copy of the value of the DelayMaximum property
     *
     * Can only be called if EnablePropertyDelayMaximum has previously been called.
     */
    void GetPropertyDelayMaximum(uint32_t& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkLipSync1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Delay property.
     */
    void EnablePropertyDelay();
    /**
     * Enable the DelayMinimum property.
     */
    void EnablePropertyDelayMinimum();
    /**
     * Enable the DelayMaximum property.
     */
    void EnablePropertyDelayMaximum();
    /**
     * Signal that the action SetDelay is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDelay must be overridden if this is called.
     */
    void EnableActionSetDelay();
    /**
     * Signal that the action Delay is supported.
     * The action's availability will be published in the device's service.xml.
     * Delay must be overridden if this is called.
     */
    void EnableActionDelay();
    /**
     * Signal that the action DelayMinimum is supported.
     * The action's availability will be published in the device's service.xml.
     * DelayMinimum must be overridden if this is called.
     */
    void EnableActionDelayMinimum();
    /**
     * Signal that the action DelayMaximum is supported.
     * The action's availability will be published in the device's service.xml.
     * DelayMaximum must be overridden if this is called.
     */
    void EnableActionDelayMaximum();
private:
    /**
     * SetDelay action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDelay action for the owning device.
     * Must be implemented iff EnableActionSetDelay was called.
     */
    virtual void SetDelay(IDvInvocationStd& aInvocation, uint32_t aDelay);
    /**
     * Delay action.
     *
     * Will be called when the device stack receives an invocation of the
     * Delay action for the owning device.
     * Must be implemented iff EnableActionDelay was called.
     */
    virtual void Delay(IDvInvocationStd& aInvocation, uint32_t& aDelay);
    /**
     * DelayMinimum action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelayMinimum action for the owning device.
     * Must be implemented iff EnableActionDelayMinimum was called.
     */
    virtual void DelayMinimum(IDvInvocationStd& aInvocation, uint32_t& aMin);
    /**
     * DelayMaximum action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelayMaximum action for the owning device.
     * Must be implemented iff EnableActionDelayMaximum was called.
     */
    virtual void DelayMaximum(IDvInvocationStd& aInvocation, uint32_t& aMax);
private:
    DvProviderLinnCoUkLipSync1Cpp();
    void DoSetDelay(IDviInvocation& aInvocation);
    void DoDelay(IDviInvocation& aInvocation);
    void DoDelayMinimum(IDviInvocation& aInvocation);
    void DoDelayMaximum(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyDelay;
    PropertyUint* iPropertyDelayMinimum;
    PropertyUint* iPropertyDelayMaximum;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKLIPSYNC1CPP

