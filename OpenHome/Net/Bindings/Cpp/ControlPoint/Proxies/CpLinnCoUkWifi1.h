#ifndef HEADER_LINNCOUKWIFI1CPP
#define HEADER_LINNCOUKWIFI1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

#include <string>

namespace OpenHome {
namespace Net {

class CpDeviceCpp;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyLinnCoUkWifi1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkWifi1Cpp() {}
    virtual void SyncClearCredentials() = 0;
    virtual void BeginClearCredentials(FunctorAsync& aFunctor) = 0;
    virtual void EndClearCredentials(IAsync& aAsync) = 0;
    virtual void SyncGetAdapterInUse(bool& aAdapterInUse) = 0;
    virtual void BeginGetAdapterInUse(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAdapterInUse(IAsync& aAsync, bool& aAdapterInUse) = 0;
    virtual void SyncGetConfiguration(std::string& aConfiguration) = 0;
    virtual void BeginGetConfiguration(FunctorAsync& aFunctor) = 0;
    virtual void EndGetConfiguration(IAsync& aAsync, std::string& aConfiguration) = 0;
    virtual void SyncGetNetworkInfo(std::string& aNetworkInfo) = 0;
    virtual void BeginGetNetworkInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetNetworkInfo(IAsync& aAsync, std::string& aNetworkInfo) = 0;
    virtual void SyncGetScanResults(std::string& aScanResults) = 0;
    virtual void BeginGetScanResults(FunctorAsync& aFunctor) = 0;
    virtual void EndGetScanResults(IAsync& aAsync, std::string& aScanResults) = 0;
    virtual void SyncGetSignalInfo(std::string& aSignalInfo) = 0;
    virtual void BeginGetSignalInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSignalInfo(IAsync& aAsync, std::string& aSignalInfo) = 0;
    virtual void SyncGetStatus(std::string& aStatus) = 0;
    virtual void BeginGetStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStatus(IAsync& aAsync, std::string& aStatus) = 0;
    virtual void SyncScan() = 0;
    virtual void BeginScan(FunctorAsync& aFunctor) = 0;
    virtual void EndScan(IAsync& aAsync) = 0;
    virtual void SyncSetCredentials(const std::string& aSsid, const std::string& aPassword) = 0;
    virtual void BeginSetCredentials(const std::string& aSsid, const std::string& aPassword, FunctorAsync& aFunctor) = 0;
    virtual void EndSetCredentials(IAsync& aAsync) = 0;
    virtual void SetPropertyAdapterInUseChanged(Functor& aAdapterInUseChanged) = 0;
    virtual void PropertyAdapterInUse(bool& aAdapterInUse) const = 0;
    virtual void SetPropertyConfigurationChanged(Functor& aConfigurationChanged) = 0;
    virtual void PropertyConfiguration(std::string& aConfiguration) const = 0;
    virtual void SetPropertyScanResultsChanged(Functor& aScanResultsChanged) = 0;
    virtual void PropertyScanResults(std::string& aScanResults) const = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(std::string& aStatus) const = 0;
};

/**
 * Proxy for linn.co.uk:Wifi:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkWifi1Cpp : public ICpProxyLinnCoUkWifi1Cpp
{
public:
    /**
     * Constructor.
     *
     * Use iCpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyLinnCoUkWifi1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkWifi1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncClearCredentials();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearCredentials().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearCredentials(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearCredentials(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAdapterInUse
     */
    void SyncGetAdapterInUse(bool& aAdapterInUse);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAdapterInUse().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAdapterInUse(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAdapterInUse
     */
    void EndGetAdapterInUse(IAsync& aAsync, bool& aAdapterInUse);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aConfiguration
     */
    void SyncGetConfiguration(std::string& aConfiguration);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetConfiguration().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetConfiguration(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aConfiguration
     */
    void EndGetConfiguration(IAsync& aAsync, std::string& aConfiguration);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aNetworkInfo
     */
    void SyncGetNetworkInfo(std::string& aNetworkInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetNetworkInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetNetworkInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNetworkInfo
     */
    void EndGetNetworkInfo(IAsync& aAsync, std::string& aNetworkInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aScanResults
     */
    void SyncGetScanResults(std::string& aScanResults);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetScanResults().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetScanResults(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aScanResults
     */
    void EndGetScanResults(IAsync& aAsync, std::string& aScanResults);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSignalInfo
     */
    void SyncGetSignalInfo(std::string& aSignalInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSignalInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSignalInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSignalInfo
     */
    void EndGetSignalInfo(IAsync& aAsync, std::string& aSignalInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStatus
     */
    void SyncGetStatus(std::string& aStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aStatus
     */
    void EndGetStatus(IAsync& aAsync, std::string& aStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncScan();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndScan().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginScan(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndScan(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aSsid
     * @param[in]  aPassword
     */
    void SyncSetCredentials(const std::string& aSsid, const std::string& aPassword);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetCredentials().
     *
     * @param[in] aSsid
     * @param[in] aPassword
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetCredentials(const std::string& aSsid, const std::string& aPassword, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetCredentials(IAsync& aAsync);

    /**
     * Set a callback to be run when the AdapterInUse state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAdapterInUseChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Configuration state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConfigurationChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ScanResults state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyScanResultsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatusChanged(Functor& aFunctor);

    /**
     * Query the value of the AdapterInUse property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAdapterInUse
     */
    void PropertyAdapterInUse(bool& aAdapterInUse) const;
    /**
     * Query the value of the Configuration property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConfiguration
     */
    void PropertyConfiguration(std::string& aConfiguration) const;
    /**
     * Query the value of the ScanResults property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aScanResults
     */
    void PropertyScanResults(std::string& aScanResults) const;
    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(std::string& aStatus) const;
    /**
    * This function exposes the Subscribe() function of the iCpProxy member variable
    */
    void Subscribe();
    /**
    * This function exposes the Unsubscribe() function of the iCpProxy member variable
    */
    void Unsubscribe();
    /**
    * This function exposes the SetPropertyChanged() function of the iCpProxy member variable
    */
    void SetPropertyChanged(Functor& aFunctor);
    /**
    * This function exposes the SetPropertyInitialEvent() function of the iCpProxy member variable
    */
    void SetPropertyInitialEvent(Functor& aFunctor);
    /**
    * This function exposes the AddProperty() function of the iCpProxy member variable
    */
    void AddProperty(Property* aProperty);
    /**
    * This function exposes DestroyService() function of the iCpProxy member variable
    */
    void DestroyService();
    /**
    * This function exposes the REportEvent() function of the iCpProxy member variable
    */
    void ReportEvent(Functor aFunctor);
    /**
    * This function exposes the Version() function of the iCpProxy member variable
    */
    TUint Version() const;
private:
    CpProxy iCpProxy;
    void AdapterInUsePropertyChanged();
    void ConfigurationPropertyChanged();
    void ScanResultsPropertyChanged();
    void StatusPropertyChanged();
private:
    Action* iActionClearCredentials;
    Action* iActionGetAdapterInUse;
    Action* iActionGetConfiguration;
    Action* iActionGetNetworkInfo;
    Action* iActionGetScanResults;
    Action* iActionGetSignalInfo;
    Action* iActionGetStatus;
    Action* iActionScan;
    Action* iActionSetCredentials;
    PropertyBool* iAdapterInUse;
    PropertyString* iConfiguration;
    PropertyString* iScanResults;
    PropertyString* iStatus;
    Functor iAdapterInUseChanged;
    Functor iConfigurationChanged;
    Functor iScanResultsChanged;
    Functor iStatusChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKWIFI1CPP

