#ifndef HEADER_DVAVOPENHOMEORGPINS1CPP
#define HEADER_DVAVOPENHOMEORGPINS1CPP

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
 * Provider for the av.openhome.org:Pins:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgPins1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgPins1Cpp() {}
    /**
     * Set the value of the DeviceMax property
     *
     * Can only be called if EnablePropertyDeviceMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyDeviceMax(uint32_t aValue);
    /**
     * Get a copy of the value of the DeviceMax property
     *
     * Can only be called if EnablePropertyDeviceMax has previously been called.
     */
    void GetPropertyDeviceMax(uint32_t& aValue);
    /**
     * Set the value of the AccountMax property
     *
     * Can only be called if EnablePropertyAccountMax has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAccountMax(uint32_t aValue);
    /**
     * Get a copy of the value of the AccountMax property
     *
     * Can only be called if EnablePropertyAccountMax has previously been called.
     */
    void GetPropertyAccountMax(uint32_t& aValue);
    /**
     * Set the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyModes(const std::string& aValue);
    /**
     * Get a copy of the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     */
    void GetPropertyModes(std::string& aValue);
    /**
     * Set the value of the IdArray property
     *
     * Can only be called if EnablePropertyIdArray has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyIdArray(const std::string& aValue);
    /**
     * Get a copy of the value of the IdArray property
     *
     * Can only be called if EnablePropertyIdArray has previously been called.
     */
    void GetPropertyIdArray(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgPins1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the DeviceMax property.
     */
    void EnablePropertyDeviceMax();
    /**
     * Enable the AccountMax property.
     */
    void EnablePropertyAccountMax();
    /**
     * Enable the Modes property.
     */
    void EnablePropertyModes();
    /**
     * Enable the IdArray property.
     */
    void EnablePropertyIdArray();
    /**
     * Signal that the action GetDeviceAccountMax is supported.
     * The action's availability will be published in the device's service.xml.
     * GetDeviceAccountMax must be overridden if this is called.
     */
    void EnableActionGetDeviceAccountMax();
    /**
     * Signal that the action GetModes is supported.
     * The action's availability will be published in the device's service.xml.
     * GetModes must be overridden if this is called.
     */
    void EnableActionGetModes();
    /**
     * Signal that the action GetIdArray is supported.
     * The action's availability will be published in the device's service.xml.
     * GetIdArray must be overridden if this is called.
     */
    void EnableActionGetIdArray();
    /**
     * Signal that the action ReadList is supported.
     * The action's availability will be published in the device's service.xml.
     * ReadList must be overridden if this is called.
     */
    void EnableActionReadList();
    /**
     * Signal that the action InvokeId is supported.
     * The action's availability will be published in the device's service.xml.
     * InvokeId must be overridden if this is called.
     */
    void EnableActionInvokeId();
    /**
     * Signal that the action InvokeIndex is supported.
     * The action's availability will be published in the device's service.xml.
     * InvokeIndex must be overridden if this is called.
     */
    void EnableActionInvokeIndex();
    /**
     * Signal that the action SetDevice is supported.
     * The action's availability will be published in the device's service.xml.
     * SetDevice must be overridden if this is called.
     */
    void EnableActionSetDevice();
    /**
     * Signal that the action SetAccount is supported.
     * The action's availability will be published in the device's service.xml.
     * SetAccount must be overridden if this is called.
     */
    void EnableActionSetAccount();
    /**
     * Signal that the action Clear is supported.
     * The action's availability will be published in the device's service.xml.
     * Clear must be overridden if this is called.
     */
    void EnableActionClear();
    /**
     * Signal that the action Swap is supported.
     * The action's availability will be published in the device's service.xml.
     * Swap must be overridden if this is called.
     */
    void EnableActionSwap();
private:
    /**
     * GetDeviceAccountMax action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetDeviceAccountMax action for the owning device.
     * Must be implemented iff EnableActionGetDeviceAccountMax was called.
     */
    virtual void GetDeviceAccountMax(IDvInvocationStd& aInvocation, uint32_t& aDeviceMax, uint32_t& aAccountMax);
    /**
     * GetModes action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetModes action for the owning device.
     * Must be implemented iff EnableActionGetModes was called.
     */
    virtual void GetModes(IDvInvocationStd& aInvocation, std::string& aModes);
    /**
     * GetIdArray action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetIdArray action for the owning device.
     * Must be implemented iff EnableActionGetIdArray was called.
     */
    virtual void GetIdArray(IDvInvocationStd& aInvocation, std::string& aIdArray);
    /**
     * ReadList action.
     *
     * Will be called when the device stack receives an invocation of the
     * ReadList action for the owning device.
     * Must be implemented iff EnableActionReadList was called.
     */
    virtual void ReadList(IDvInvocationStd& aInvocation, const std::string& aIds, std::string& aList);
    /**
     * InvokeId action.
     *
     * Will be called when the device stack receives an invocation of the
     * InvokeId action for the owning device.
     * Must be implemented iff EnableActionInvokeId was called.
     */
    virtual void InvokeId(IDvInvocationStd& aInvocation, uint32_t aId);
    /**
     * InvokeIndex action.
     *
     * Will be called when the device stack receives an invocation of the
     * InvokeIndex action for the owning device.
     * Must be implemented iff EnableActionInvokeIndex was called.
     */
    virtual void InvokeIndex(IDvInvocationStd& aInvocation, uint32_t aIndex);
    /**
     * SetDevice action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetDevice action for the owning device.
     * Must be implemented iff EnableActionSetDevice was called.
     */
    virtual void SetDevice(IDvInvocationStd& aInvocation, uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle);
    /**
     * SetAccount action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetAccount action for the owning device.
     * Must be implemented iff EnableActionSetAccount was called.
     */
    virtual void SetAccount(IDvInvocationStd& aInvocation, uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle);
    /**
     * Clear action.
     *
     * Will be called when the device stack receives an invocation of the
     * Clear action for the owning device.
     * Must be implemented iff EnableActionClear was called.
     */
    virtual void Clear(IDvInvocationStd& aInvocation, uint32_t aId);
    /**
     * Swap action.
     *
     * Will be called when the device stack receives an invocation of the
     * Swap action for the owning device.
     * Must be implemented iff EnableActionSwap was called.
     */
    virtual void Swap(IDvInvocationStd& aInvocation, uint32_t aIndex1, uint32_t aIndex2);
private:
    DvProviderAvOpenhomeOrgPins1Cpp();
    void DoGetDeviceAccountMax(IDviInvocation& aInvocation);
    void DoGetModes(IDviInvocation& aInvocation);
    void DoGetIdArray(IDviInvocation& aInvocation);
    void DoReadList(IDviInvocation& aInvocation);
    void DoInvokeId(IDviInvocation& aInvocation);
    void DoInvokeIndex(IDviInvocation& aInvocation);
    void DoSetDevice(IDviInvocation& aInvocation);
    void DoSetAccount(IDviInvocation& aInvocation);
    void DoClear(IDviInvocation& aInvocation);
    void DoSwap(IDviInvocation& aInvocation);
private:
    PropertyUint* iPropertyDeviceMax;
    PropertyUint* iPropertyAccountMax;
    PropertyString* iPropertyModes;
    PropertyString* iPropertyIdArray;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGPINS1CPP

