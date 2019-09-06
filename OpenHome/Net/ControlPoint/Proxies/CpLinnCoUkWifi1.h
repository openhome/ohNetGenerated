#ifndef HEADER_LINNCOUKWIFI1
#define HEADER_LINNCOUKWIFI1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

namespace OpenHome {
namespace Net {

class CpDevice;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyLinnCoUkWifi1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkWifi1() {}
    virtual void SyncClearCredentials() = 0;
    virtual void BeginClearCredentials(FunctorAsync& aFunctor) = 0;
    virtual void EndClearCredentials(IAsync& aAsync) = 0;
    virtual void SyncGetAdapterInUse(TBool& aAdapterInUse) = 0;
    virtual void BeginGetAdapterInUse(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAdapterInUse(IAsync& aAsync, TBool& aAdapterInUse) = 0;
    virtual void SyncGetConfiguration(Brh& aConfiguration) = 0;
    virtual void BeginGetConfiguration(FunctorAsync& aFunctor) = 0;
    virtual void EndGetConfiguration(IAsync& aAsync, Brh& aConfiguration) = 0;
    virtual void SyncGetNetworkInfo(Brh& aNetworkInfo) = 0;
    virtual void BeginGetNetworkInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetNetworkInfo(IAsync& aAsync, Brh& aNetworkInfo) = 0;
    virtual void SyncGetScanResults(Brh& aScanResults) = 0;
    virtual void BeginGetScanResults(FunctorAsync& aFunctor) = 0;
    virtual void EndGetScanResults(IAsync& aAsync, Brh& aScanResults) = 0;
    virtual void SyncGetSignalInfo(Brh& aSignalInfo) = 0;
    virtual void BeginGetSignalInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSignalInfo(IAsync& aAsync, Brh& aSignalInfo) = 0;
    virtual void SyncGetStatus(Brh& aStatus) = 0;
    virtual void BeginGetStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStatus(IAsync& aAsync, Brh& aStatus) = 0;
    virtual void SyncScan() = 0;
    virtual void BeginScan(FunctorAsync& aFunctor) = 0;
    virtual void EndScan(IAsync& aAsync) = 0;
    virtual void SyncSetCredentials(const Brx& aSsid, const Brx& aPassword) = 0;
    virtual void BeginSetCredentials(const Brx& aSsid, const Brx& aPassword, FunctorAsync& aFunctor) = 0;
    virtual void EndSetCredentials(IAsync& aAsync) = 0;
    virtual void SetPropertyAdapterInUseChanged(Functor& aAdapterInUseChanged) = 0;
    virtual void PropertyAdapterInUse(TBool& aAdapterInUse) const = 0;
    virtual void SetPropertyConfigurationChanged(Functor& aConfigurationChanged) = 0;
    virtual void PropertyConfiguration(Brhz& aConfiguration) const = 0;
    virtual void SetPropertyScanResultsChanged(Functor& aScanResultsChanged) = 0;
    virtual void PropertyScanResults(Brhz& aScanResults) const = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(Brhz& aStatus) const = 0;
};

/**
 * Proxy for linn.co.uk:Wifi:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkWifi1 : public ICpProxyLinnCoUkWifi1
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
    CpProxyLinnCoUkWifi1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkWifi1();

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
    void SyncGetAdapterInUse(TBool& aAdapterInUse);
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
    void EndGetAdapterInUse(IAsync& aAsync, TBool& aAdapterInUse);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aConfiguration
     */
    void SyncGetConfiguration(Brh& aConfiguration);
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
    void EndGetConfiguration(IAsync& aAsync, Brh& aConfiguration);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aNetworkInfo
     */
    void SyncGetNetworkInfo(Brh& aNetworkInfo);
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
    void EndGetNetworkInfo(IAsync& aAsync, Brh& aNetworkInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aScanResults
     */
    void SyncGetScanResults(Brh& aScanResults);
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
    void EndGetScanResults(IAsync& aAsync, Brh& aScanResults);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSignalInfo
     */
    void SyncGetSignalInfo(Brh& aSignalInfo);
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
    void EndGetSignalInfo(IAsync& aAsync, Brh& aSignalInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStatus
     */
    void SyncGetStatus(Brh& aStatus);
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
    void EndGetStatus(IAsync& aAsync, Brh& aStatus);

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
    void SyncSetCredentials(const Brx& aSsid, const Brx& aPassword);
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
    void BeginSetCredentials(const Brx& aSsid, const Brx& aPassword, FunctorAsync& aFunctor);
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
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAdapterInUseChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Configuration state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConfigurationChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ScanResults state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyScanResultsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkWifi1 instance will not overlap.
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
    void PropertyAdapterInUse(TBool& aAdapterInUse) const;
    /**
     * Query the value of the Configuration property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConfiguration
     */
    void PropertyConfiguration(Brhz& aConfiguration) const;
    /**
     * Query the value of the ScanResults property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aScanResults
     */
    void PropertyScanResults(Brhz& aScanResults) const;
    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(Brhz& aStatus) const;
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

#endif // HEADER_LINNCOUKWIFI1

