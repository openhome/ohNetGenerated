#ifndef HEADER_DVAVOPENHOMEORGREACTION1CPP
#define HEADER_DVAVOPENHOMEORGREACTION1CPP

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
 * Provider for the av.openhome.org:Reaction:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgReaction1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgReaction1Cpp() {}
    /**
     * Set the value of the CanReact property
     *
     * Can only be called if EnablePropertyCanReact has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanReact(bool aValue);
    /**
     * Get a copy of the value of the CanReact property
     *
     * Can only be called if EnablePropertyCanReact has previously been called.
     */
    void GetPropertyCanReact(bool& aValue);
    /**
     * Set the value of the CurrentReaction property
     *
     * Can only be called if EnablePropertyCurrentReaction has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCurrentReaction(const std::string& aValue);
    /**
     * Get a copy of the value of the CurrentReaction property
     *
     * Can only be called if EnablePropertyCurrentReaction has previously been called.
     */
    void GetPropertyCurrentReaction(std::string& aValue);
    /**
     * Set the value of the AvailableReactions property
     *
     * Can only be called if EnablePropertyAvailableReactions has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAvailableReactions(const std::string& aValue);
    /**
     * Get a copy of the value of the AvailableReactions property
     *
     * Can only be called if EnablePropertyAvailableReactions has previously been called.
     */
    void GetPropertyAvailableReactions(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgReaction1Cpp(DvDeviceStd& aDevice);
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
    virtual void GetCanReact(IDvInvocationStd& aInvocation, bool& aCanReact);
    /**
     * GetCurrentReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetCurrentReaction action for the owning device.
     * Must be implemented iff EnableActionGetCurrentReaction was called.
     */
    virtual void GetCurrentReaction(IDvInvocationStd& aInvocation, std::string& aReaction);
    /**
     * GetAvailableReactions action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAvailableReactions action for the owning device.
     * Must be implemented iff EnableActionGetAvailableReactions was called.
     */
    virtual void GetAvailableReactions(IDvInvocationStd& aInvocation, std::string& aAvailableReactions);
    /**
     * SetReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetReaction action for the owning device.
     * Must be implemented iff EnableActionSetReaction was called.
     */
    virtual void SetReaction(IDvInvocationStd& aInvocation, const std::string& aReaction);
    /**
     * ClearReaction action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearReaction action for the owning device.
     * Must be implemented iff EnableActionClearReaction was called.
     */
    virtual void ClearReaction(IDvInvocationStd& aInvocation);
private:
    DvProviderAvOpenhomeOrgReaction1Cpp();
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

#endif // HEADER_DVAVOPENHOMEORGREACTION1CPP

