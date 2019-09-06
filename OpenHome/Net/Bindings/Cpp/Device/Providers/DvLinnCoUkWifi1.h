#ifndef HEADER_DVLINNCOUKWIFI1CPP
#define HEADER_DVLINNCOUKWIFI1CPP

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
 * Provider for the linn.co.uk:Wifi:1 UPnP service
 * @ingroup Providers
 */
class DvProviderLinnCoUkWifi1Cpp : public DvProvider
{
public:
    virtual ~DvProviderLinnCoUkWifi1Cpp() {}
    /**
     * Set the value of the AdapterInUse property
     *
     * Can only be called if EnablePropertyAdapterInUse has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyAdapterInUse(bool aValue);
    /**
     * Get a copy of the value of the AdapterInUse property
     *
     * Can only be called if EnablePropertyAdapterInUse has previously been called.
     */
    void GetPropertyAdapterInUse(bool& aValue);
    /**
     * Set the value of the Configuration property
     *
     * Can only be called if EnablePropertyConfiguration has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyConfiguration(const std::string& aValue);
    /**
     * Get a copy of the value of the Configuration property
     *
     * Can only be called if EnablePropertyConfiguration has previously been called.
     */
    void GetPropertyConfiguration(std::string& aValue);
    /**
     * Set the value of the ScanResults property
     *
     * Can only be called if EnablePropertyScanResults has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyScanResults(const std::string& aValue);
    /**
     * Get a copy of the value of the ScanResults property
     *
     * Can only be called if EnablePropertyScanResults has previously been called.
     */
    void GetPropertyScanResults(std::string& aValue);
    /**
     * Set the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyStatus(const std::string& aValue);
    /**
     * Get a copy of the value of the Status property
     *
     * Can only be called if EnablePropertyStatus has previously been called.
     */
    void GetPropertyStatus(std::string& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderLinnCoUkWifi1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the AdapterInUse property.
     */
    void EnablePropertyAdapterInUse();
    /**
     * Enable the Configuration property.
     */
    void EnablePropertyConfiguration();
    /**
     * Enable the ScanResults property.
     */
    void EnablePropertyScanResults();
    /**
     * Enable the Status property.
     */
    void EnablePropertyStatus();
    /**
     * Signal that the action ClearCredentials is supported.
     * The action's availability will be published in the device's service.xml.
     * ClearCredentials must be overridden if this is called.
     */
    void EnableActionClearCredentials();
    /**
     * Signal that the action GetAdapterInUse is supported.
     * The action's availability will be published in the device's service.xml.
     * GetAdapterInUse must be overridden if this is called.
     */
    void EnableActionGetAdapterInUse();
    /**
     * Signal that the action GetConfiguration is supported.
     * The action's availability will be published in the device's service.xml.
     * GetConfiguration must be overridden if this is called.
     */
    void EnableActionGetConfiguration();
    /**
     * Signal that the action GetNetworkInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetNetworkInfo must be overridden if this is called.
     */
    void EnableActionGetNetworkInfo();
    /**
     * Signal that the action GetScanResults is supported.
     * The action's availability will be published in the device's service.xml.
     * GetScanResults must be overridden if this is called.
     */
    void EnableActionGetScanResults();
    /**
     * Signal that the action GetSignalInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * GetSignalInfo must be overridden if this is called.
     */
    void EnableActionGetSignalInfo();
    /**
     * Signal that the action GetStatus is supported.
     * The action's availability will be published in the device's service.xml.
     * GetStatus must be overridden if this is called.
     */
    void EnableActionGetStatus();
    /**
     * Signal that the action Scan is supported.
     * The action's availability will be published in the device's service.xml.
     * Scan must be overridden if this is called.
     */
    void EnableActionScan();
    /**
     * Signal that the action SetCredentials is supported.
     * The action's availability will be published in the device's service.xml.
     * SetCredentials must be overridden if this is called.
     */
    void EnableActionSetCredentials();
private:
    /**
     * ClearCredentials action.
     *
     * Will be called when the device stack receives an invocation of the
     * ClearCredentials action for the owning device.
     * Must be implemented iff EnableActionClearCredentials was called.
     */
    virtual void ClearCredentials(IDvInvocationStd& aInvocation);
    /**
     * GetAdapterInUse action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetAdapterInUse action for the owning device.
     * Must be implemented iff EnableActionGetAdapterInUse was called.
     */
    virtual void GetAdapterInUse(IDvInvocationStd& aInvocation, bool& aAdapterInUse);
    /**
     * GetConfiguration action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetConfiguration action for the owning device.
     * Must be implemented iff EnableActionGetConfiguration was called.
     */
    virtual void GetConfiguration(IDvInvocationStd& aInvocation, std::string& aConfiguration);
    /**
     * GetNetworkInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetNetworkInfo action for the owning device.
     * Must be implemented iff EnableActionGetNetworkInfo was called.
     */
    virtual void GetNetworkInfo(IDvInvocationStd& aInvocation, std::string& aNetworkInfo);
    /**
     * GetScanResults action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetScanResults action for the owning device.
     * Must be implemented iff EnableActionGetScanResults was called.
     */
    virtual void GetScanResults(IDvInvocationStd& aInvocation, std::string& aScanResults);
    /**
     * GetSignalInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetSignalInfo action for the owning device.
     * Must be implemented iff EnableActionGetSignalInfo was called.
     */
    virtual void GetSignalInfo(IDvInvocationStd& aInvocation, std::string& aSignalInfo);
    /**
     * GetStatus action.
     *
     * Will be called when the device stack receives an invocation of the
     * GetStatus action for the owning device.
     * Must be implemented iff EnableActionGetStatus was called.
     */
    virtual void GetStatus(IDvInvocationStd& aInvocation, std::string& aStatus);
    /**
     * Scan action.
     *
     * Will be called when the device stack receives an invocation of the
     * Scan action for the owning device.
     * Must be implemented iff EnableActionScan was called.
     */
    virtual void Scan(IDvInvocationStd& aInvocation);
    /**
     * SetCredentials action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetCredentials action for the owning device.
     * Must be implemented iff EnableActionSetCredentials was called.
     */
    virtual void SetCredentials(IDvInvocationStd& aInvocation, const std::string& aSsid, const std::string& aPassword);
private:
    DvProviderLinnCoUkWifi1Cpp();
    void DoClearCredentials(IDviInvocation& aInvocation);
    void DoGetAdapterInUse(IDviInvocation& aInvocation);
    void DoGetConfiguration(IDviInvocation& aInvocation);
    void DoGetNetworkInfo(IDviInvocation& aInvocation);
    void DoGetScanResults(IDviInvocation& aInvocation);
    void DoGetSignalInfo(IDviInvocation& aInvocation);
    void DoGetStatus(IDviInvocation& aInvocation);
    void DoScan(IDviInvocation& aInvocation);
    void DoSetCredentials(IDviInvocation& aInvocation);
private:
    PropertyBool* iPropertyAdapterInUse;
    PropertyString* iPropertyConfiguration;
    PropertyString* iPropertyScanResults;
    PropertyString* iPropertyStatus;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVLINNCOUKWIFI1CPP

