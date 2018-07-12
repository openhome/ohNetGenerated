#ifndef HEADER_LINNCOUKUPDATE1
#define HEADER_LINNCOUKUPDATE1

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
class ICpProxyLinnCoUkUpdate1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkUpdate1() {}
    virtual void SyncPushManifest(const Brx& aUri) = 0;
    virtual void BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor) = 0;
    virtual void EndPushManifest(IAsync& aAsync) = 0;
    virtual void SyncSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel) = 0;
    virtual void BeginSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetUpdateFeedParams(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateFeedParams(Brh& aTopic, Brh& aChannel) = 0;
    virtual void BeginGetUpdateFeedParams(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateFeedParams(IAsync& aAsync, Brh& aTopic, Brh& aChannel) = 0;
    virtual void SyncGetUpdateStatus(Brh& aUpdateStatus) = 0;
    virtual void BeginGetUpdateStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus) = 0;
    virtual void SyncApply() = 0;
    virtual void BeginApply(FunctorAsync& aFunctor) = 0;
    virtual void EndApply(IAsync& aAsync) = 0;
    virtual void SyncRestore() = 0;
    virtual void BeginRestore(FunctorAsync& aFunctor) = 0;
    virtual void EndRestore(IAsync& aAsync) = 0;
    virtual void SetPropertyUpdateStatusChanged(Functor& aUpdateStatusChanged) = 0;
    virtual void PropertyUpdateStatus(Brhz& aUpdateStatus) const = 0;
    virtual void SetPropertyUpdateTopicChanged(Functor& aUpdateTopicChanged) = 0;
    virtual void PropertyUpdateTopic(Brhz& aUpdateTopic) const = 0;
    virtual void SetPropertyUpdateChannelChanged(Functor& aUpdateChannelChanged) = 0;
    virtual void PropertyUpdateChannel(Brhz& aUpdateChannel) const = 0;
};

/**
 * Proxy for linn.co.uk:Update:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkUpdate1 : public ICpProxyLinnCoUkUpdate1
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
    CpProxyLinnCoUkUpdate1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkUpdate1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aUri
     */
    void SyncPushManifest(const Brx& aUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPushManifest().
     *
     * @param[in] aUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPushManifest(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aTopic
     * @param[in]  aChannel
     */
    void SyncSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetUpdateFeedParams().
     *
     * @param[in] aTopic
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetUpdateFeedParams(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aTopic
     * @param[out] aChannel
     */
    void SyncGetUpdateFeedParams(Brh& aTopic, Brh& aChannel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpdateFeedParams().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpdateFeedParams(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTopic
     * @param[out] aChannel
     */
    void EndGetUpdateFeedParams(IAsync& aAsync, Brh& aTopic, Brh& aChannel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUpdateStatus
     */
    void SyncGetUpdateStatus(Brh& aUpdateStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpdateStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpdateStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUpdateStatus
     */
    void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncApply();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndApply().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginApply(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndApply(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncRestore();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRestore().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRestore(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndRestore(IAsync& aAsync);

    /**
     * Set a callback to be run when the UpdateStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateTopic state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateTopicChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateChannel state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateChannelChanged(Functor& aFunctor);

    /**
     * Query the value of the UpdateStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateStatus
     */
    void PropertyUpdateStatus(Brhz& aUpdateStatus) const;
    /**
     * Query the value of the UpdateTopic property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateTopic
     */
    void PropertyUpdateTopic(Brhz& aUpdateTopic) const;
    /**
     * Query the value of the UpdateChannel property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateChannel
     */
    void PropertyUpdateChannel(Brhz& aUpdateChannel) const;
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
    void UpdateStatusPropertyChanged();
    void UpdateTopicPropertyChanged();
    void UpdateChannelPropertyChanged();
private:
    Action* iActionPushManifest;
    Action* iActionSetUpdateFeedParams;
    Action* iActionGetUpdateFeedParams;
    Action* iActionGetUpdateStatus;
    Action* iActionApply;
    Action* iActionRestore;
    PropertyString* iUpdateStatus;
    PropertyString* iUpdateTopic;
    PropertyString* iUpdateChannel;
    Functor iUpdateStatusChanged;
    Functor iUpdateTopicChanged;
    Functor iUpdateChannelChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKUPDATE1

