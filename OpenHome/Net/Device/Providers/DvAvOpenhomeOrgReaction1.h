#ifndef HEADER_DVAVOPENHOMEORGREACTION1
#define HEADER_DVAVOPENHOMEORGREACTION1

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
 * Provider for the av.openhome.org:Reaction:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgReaction1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgReaction1() {}
    /**
     * Set the value of the CanReact property
     *
     * Can only be called if EnablePropertyCanReact has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyCanReact(TBool aValue);
    /**
     * Get a copy of the value of the CanReact property
     *
     * Can only be called if EnablePropertyCanReact has previously been called.
     */
    void GetPropertyCanReact(TBool& aValue);
    /**
     * Set the value of the CurrentReaction property
     *
     * Can only be called if EnablePropertyCurrentReaction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyCurrentReaction(const Brx& aValue);
    /**
     * Get a copy of the value of the CurrentReaction property
     *
     * Can only be called if EnablePropertyCurrentReaction has previously been called.
     */
    void GetPropertyCurrentReaction(Brhz& aValue);
    /**
     * Set the value of the AvailableReactions property
     *
     * Can only be called if EnablePropertyAvailableReactions has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyAvailableReactions(const Brx& aValue);
    /**
     * Get a copy of the value of the AvailableReactions property
     *
     * Can only be called if EnablePropertyAvailableReactions has previously been called.
     */
    void GetPropertyAvailableReactions(Brhz& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgReaction1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgReaction1(DviDevice& aDevice);
    /**
     * Enable the CanReact property.
     */
    void EnablePropertyCanReact();
    /**
     * Enable the CurrentReaction property.
     */
    void EnablePropertyCurrentReaction();
    /**
     * Enable the AvailableReactions property.
     */
    void EnablePropertyAvailableReactions();
    /**
     * Signal that the action GetCanReact is supported.
     * The action's availability will be published in the device's service.xml.
     * GetCanReact must be overridden if this is called.
     */
    void EnableActionGetCanReact();
    /**
     * Signal that the action GetCurrentReaction is supported.
     * The action's availability will be published in the device's service.xml.
     * GetCurrentReaction must be overridden if this is called.
     */
    void EnableActionGetCurrentReaction();
    /**
     * Signal that the action GetAvailableReactions is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAvailableReactions must be overridden if this is called.
     */
    void EnableActionGetAvailableReactions();
    /**
     * Signal that the action SetReaction is supported.
     * The action's availability will be published in the device's service.xml.
     * SetReaction must be overridden if this is called.
     */
    void EnableActionSetReaction();
    /**
     * Signal that the action ClearReaction is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearReaction must be overridden if this is called.
     */
    void EnableActionClearReaction();
private:
    /**
     * GetCanReact action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetCanReact action for the owning device.
     * Must be implemented iff EnableActionGetCanReact was called.
     */
    virtual void GetCanReact(IDvInvocation& aInvocation, IDvInvocationResponseBool& aCanReact);
    /**
     * GetCurrentReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetCurrentReaction action for the owning device.
     * Must be implemented iff EnableActionGetCurrentReaction was called.
     */
    virtual void GetCurrentReaction(IDvInvocation& aInvocation, IDvInvocationResponseString& aReaction);
    /**
     * GetAvailableReactions action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAvailableReactions action for the owning device.
     * Must be implemented iff EnableActionGetAvailableReactions was called.
     */
    virtual void GetAvailableReactions(IDvInvocation& aInvocation, IDvInvocationResponseString& aAvailableReactions);
    /**
     * SetReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetReaction action for the owning device.
     * Must be implemented iff EnableActionSetReaction was called.
     */
    virtual void SetReaction(IDvInvocation& aInvocation, const Brx& aReaction);
    /**
     * ClearReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearReaction action for the owning device.
     * Must be implemented iff EnableActionClearReaction was called.
     */
    virtual void ClearReaction(IDvInvocation& aInvocation);
private:
    DvProviderAvOpenhomeOrgReaction1();
    void Construct();
    void DoGetCanReact(IDviInvocation& aInvocation);
    void DoGetCurrentReaction(IDviInvocation& aInvocation);
    void DoGetAvailableReactions(IDviInvocation& aInvocation);
    void DoSetReaction(IDviInvocation& aInvocation);
    void DoClearReaction(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyCanReact;
    PropertyString* iPropertyCurrentReaction;
    PropertyString* iPropertyAvailableReactions;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGREACTION1

