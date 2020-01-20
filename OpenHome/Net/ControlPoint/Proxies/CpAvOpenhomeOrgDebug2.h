#ifndef HEADER_AVOPENHOMEORGDEBUG2
#define HEADER_AVOPENHOMEORGDEBUG2

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
class ICpProxyAvOpenhomeOrgDebug2 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgDebug2() {}
    virtual void SyncGetLog(Brh& aLog) = 0;
    virtual void BeginGetLog(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLog(IAsync& aAsync, Brh& aLog) = 0;
    virtual void SyncSendLog(const Brx& aData) = 0;
    virtual void BeginSendLog(const Brx& aData, FunctorAsync& aFunctor) = 0;
    virtual void EndSendLog(IAsync& aAsync) = 0;
    virtual void SyncSendDeviceAnnouncements() = 0;
    virtual void BeginSendDeviceAnnouncements(FunctorAsync& aFunctor) = 0;
    virtual void EndSendDeviceAnnouncements(IAsync& aAsync) = 0;
    virtual void SyncGetRecentMSearches(Brh& aJsonArray) = 0;
    virtual void BeginGetRecentMSearches(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRecentMSearches(IAsync& aAsync, Brh& aJsonArray) = 0;
};

/**
 * Proxy for av.openhome.org:Debug:2
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgDebug2 : public ICpProxyAvOpenhomeOrgDebug2
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
    CpProxyAvOpenhomeOrgDebug2(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgDebug2();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aLog
     */
    void SyncGetLog(Brh& aLog);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetLog().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetLog(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aLog
     */
    void EndGetLog(IAsync& aAsync, Brh& aLog);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aData
     */
    void SyncSendLog(const Brx& aData);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSendLog().
     *
     * @param[in] aData
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSendLog(const Brx& aData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSendLog(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncSendDeviceAnnouncements();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSendDeviceAnnouncements().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSendDeviceAnnouncements(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSendDeviceAnnouncements(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aJsonArray
     */
    void SyncGetRecentMSearches(Brh& aJsonArray);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRecentMSearches().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRecentMSearches(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aJsonArray
     */
    void EndGetRecentMSearches(IAsync& aAsync, Brh& aJsonArray);


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
private:
    Action* iActionGetLog;
    Action* iActionSendLog;
    Action* iActionSendDeviceAnnouncements;
    Action* iActionGetRecentMSearches;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGDEBUG2

