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
     * Set the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAssociationStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the AssociationStatus property
     *
     * Can only be called if EnablePropertyAssociationStatus has previously been called.
     */
    void GetPropertyAssociationStatus(std::string& aValue);
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
    /**
     * Set the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyConnected(bool aValue);
    /**
     * Get a copy of the value of the Connected property
     *
     * Can only be called if EnablePropertyConnected has previously been called.
     */
    void GetPropertyConnected(bool& aValue);
    /**
     * Set the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPublicKey(const std::string& aValue);
    /**
     * Get a copy of the value of the PublicKey property
     *
     * Can only be called if EnablePropertyPublicKey has previously been called.
     */
    void GetPropertyPublicKey(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkCloud1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the AssociationStatus property.
     */
    void EnablePropertyAssociationStatus();
    /**
     * Enable the ControlEnabled property.
     */
    void EnablePropertyControlEnabled();
    /**
     * Enable the Connected property.
     */
    void EnablePropertyConnected();
    /**
     * Enable the PublicKey property.
     */
    void EnablePropertyPublicKey();
    /**
     * Signal that the action SetAssociated is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAssociated must be overridden if this is called.
     */
    void EnableActionSetAssociated();
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
    /**
     * Signal that the action GetConnected is supported.
     * The action's availability will be published in the device's service.xml.
     * GetConnected must be overridden if this is called.
     */
    void EnableActionGetConnected();
    /**
     * Signal that the action GetPublicKey is supported.
     * The action's availability will be published in the device's service.xml.
     * GetPublicKey must be overridden if this is called.
     */
    void EnableActionGetPublicKey();
private:
    /**
     * SetAssociated action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAssociated action for the owning device.
     * Must be implemented iff EnableActionSetAssociated was called.
     */
    virtual void SetAssociated(IDvInvocationStd& aInvocation, const std::string& aTokenEncrypted, bool aAssociated);
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
    /**
     * GetConnected action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetConnected action for the owning device.
     * Must be implemented iff EnableActionGetConnected was called.
     */
    virtual void GetConnected(IDvInvocationStd& aInvocation, bool& aConnected);
    /**
     * GetPublicKey action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetPublicKey action for the owning device.
     * Must be implemented iff EnableActionGetPublicKey was called.
     */
    virtual void GetPublicKey(IDvInvocationStd& aInvocation, std::string& aPublicKey);
private:
    DvProviderLinnCoUkCloud1Cpp();
    void DoSetAssociated(IDviInvocation& aInvocation);
    void DoSetControlEnabled(IDviInvocation& aInvocation);
    void DoGetControlEnabled(IDviInvocation& aInvocation);
    void DoGetConnected(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyAssociationStatus;
    PropertyBool* iPropertyControlEnabled;
    PropertyBool* iPropertyConnected;
    PropertyString* iPropertyPublicKey;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKCLOUD1CPP

