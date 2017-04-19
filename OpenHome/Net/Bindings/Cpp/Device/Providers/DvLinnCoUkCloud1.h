#ifndef HEADER_DVLINNCOUKCLOUD1CPP
#define HEADER_DVLINNCOUKCLOUD1CPP

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
 * Provider for the linn.co.uk:Cloud:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkCloud1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkCloud1Cpp() {}
    /**
     * Set the value of the ControlEnabled property
     *
     * Can only be called if EnablePropertyControlEnabled has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyControlEnabled(bool aValue);
    /**
     * Get a copy of the value of the ControlEnabled property
     *
     * Can only be called if EnablePropertyControlEnabled has previously been called.
     */
    void GetPropertyControlEnabled(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkCloud1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the ControlEnabled property.
     */
    void EnablePropertyControlEnabled();
    /**
     * Signal that the action GetChallengeResponse is supported.
     * The action's availability will be published in the device's service.xml.
     * GetChallengeResponse must be overridden if this is called.
     */
    void EnableActionGetChallengeResponse();
    /**
     * Signal that the action SetControlEnabled is supported.
     * The action's availability will be published in the device's service.xml.
     * SetControlEnabled must be overridden if this is called.
     */
    void EnableActionSetControlEnabled();
    /**
     * Signal that the action GetControlEnabled is supported.
     * The action's availability will be published in the device's service.xml.
     * GetControlEnabled must be overridden if this is called.
     */
    void EnableActionGetControlEnabled();
private:
    /**
     * GetChallengeResponse action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetChallengeResponse action for the owning device.
     * Must be implemented iff EnableActionGetChallengeResponse was called.
     */
    virtual void GetChallengeResponse(IDvInvocationStd& aInvocation, const std::string& aChallenge, std::string& aResponse);
    /**
     * SetControlEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetControlEnabled action for the owning device.
     * Must be implemented iff EnableActionSetControlEnabled was called.
     */
    virtual void SetControlEnabled(IDvInvocationStd& aInvocation, bool aEnabled);
    /**
     * GetControlEnabled action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetControlEnabled action for the owning device.
     * Must be implemented iff EnableActionGetControlEnabled was called.
     */
    virtual void GetControlEnabled(IDvInvocationStd& aInvocation, bool& aEnabled);
private:
    DvProviderLinnCoUkCloud1Cpp();
    void DoGetChallengeResponse(IDviInvocation& aInvocation);
    void DoSetControlEnabled(IDviInvocation& aInvocation);
    void DoGetControlEnabled(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyControlEnabled;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCLOUD1CPP

