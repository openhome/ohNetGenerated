#ifndef HEADER_DVLINNCOUKLIPSYNC1
#define HEADER_DVLINNCOUKLIPSYNC1

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
 * Provider for the linn.co.uk:LipSync:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkLipSync1 : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkLipSync1() {}
    /**
     * Set the value of the Delay property
     *
     * Can only be called if EnablePropertyDelay has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDelay(TUint aValue);
    /**
     * Get a copy of the value of the Delay property
     *
     * Can only be called if EnablePropertyDelay has previously been called.
     */
    void GetPropertyDelay(TUint& aValue);
    /**
     * Set the value of the DelayMinimum property
     *
     * Can only be called if EnablePropertyDelayMinimum has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDelayMinimum(TUint aValue);
    /**
     * Get a copy of the value of the DelayMinimum property
     *
     * Can only be called if EnablePropertyDelayMinimum has previously been called.
     */
    void GetPropertyDelayMinimum(TUint& aValue);
    /**
     * Set the value of the DelayMaximum property
     *
     * Can only be called if EnablePropertyDelayMaximum has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyDelayMaximum(TUint aValue);
    /**
     * Get a copy of the value of the DelayMaximum property
     *
     * Can only be called if EnablePropertyDelayMaximum has previously been called.
     */
    void GetPropertyDelayMaximum(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkLipSync1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkLipSync1(DviDevice& aDevice);
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
    virtual void SetDelay(IDvInvocation& aInvocation, TUint aDelay);
    /**
     * Delay action.
     *
     * Will be called when the device stack receives an invocation of the
     * Delay action for the owning device.
     * Must be implemented iff EnableActionDelay was called.
     */
    virtual void Delay(IDvInvocation& aInvocation, IDvInvocationResponseUint& aDelay);
    /**
     * DelayMinimum action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelayMinimum action for the owning device.
     * Must be implemented iff EnableActionDelayMinimum was called.
     */
    virtual void DelayMinimum(IDvInvocation& aInvocation, IDvInvocationResponseUint& aMin);
    /**
     * DelayMaximum action.
     *
     * Will be called when the device stack receives an invocation of the
     * DelayMaximum action for the owning device.
     * Must be implemented iff EnableActionDelayMaximum was called.
     */
    virtual void DelayMaximum(IDvInvocation& aInvocation, IDvInvocationResponseUint& aMax);
private:
    DvProviderLinnCoUkLipSync1();
    void Construct();
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

#endif // HEADER_DVLINNCOUKLIPSYNC1

