#ifndef HEADER_LINNCOUKUPDATE1CPP
#define HEADER_LINNCOUKUPDATE1CPP

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
class ICpProxyLinnCoUkUpdate1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkUpdate1Cpp() {}
    virtual void SyncPushManifest(const std::string& aUri) = 0;
    virtual void BeginPushManifest(const std::string& aUri, FunctorAsync& aFunctor) = 0;
    virtual void EndPushManifest(IAsync& aAsync) = 0;
    virtual void SyncSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel) = 0;
    virtual void BeginSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetUpdateFeedParams(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateFeedParams(std::string& aTopic, std::string& aChannel) = 0;
    virtual void BeginGetUpdateFeedParams(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateFeedParams(IAsync& aAsync, std::string& aTopic, std::string& aChannel) = 0;
    virtual void SyncGetSoftwareStatus(std::string& aSoftwareStatus) = 0;
    virtual void BeginGetSoftwareStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSoftwareStatus(IAsync& aAsync, std::string& aSoftwareStatus) = 0;
    virtual void SyncGetExecutorStatus(std::string& aExecutorStatus) = 0;
    virtual void BeginGetExecutorStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetExecutorStatus(IAsync& aAsync, std::string& aExecutorStatus) = 0;
    virtual void SyncApply() = 0;
    virtual void BeginApply(FunctorAsync& aFunctor) = 0;
    virtual void EndApply(IAsync& aAsync) = 0;
    virtual void SyncRestore() = 0;
    virtual void BeginRestore(FunctorAsync& aFunctor) = 0;
    virtual void EndRestore(IAsync& aAsync) = 0;
    virtual void SetPropertySoftwareStatusChanged(Functor& aSoftwareStatusChanged) = 0;
    virtual void PropertySoftwareStatus(std::string& aSoftwareStatus) const = 0;
    virtual void SetPropertyExecutorStatusChanged(Functor& aExecutorStatusChanged) = 0;
    virtual void PropertyExecutorStatus(std::string& aExecutorStatus) const = 0;
    virtual void SetPropertyUpdateTopicChanged(Functor& aUpdateTopicChanged) = 0;
    virtual void PropertyUpdateTopic(std::string& aUpdateTopic) const = 0;
    virtual void SetPropertyUpdateChannelChanged(Functor& aUpdateChannelChanged) = 0;
    virtual void PropertyUpdateChannel(std::string& aUpdateChannel) const = 0;
};

/**
 * Proxy for linn.co.uk:Update:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkUpdate1Cpp : public ICpProxyLinnCoUkUpdate1Cpp
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
    CpProxyLinnCoUkUpdate1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkUpdate1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aUri
     */
    void SyncPushManifest(const std::string& aUri);
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
    void BeginPushManifest(const std::string& aUri, FunctorAsync& aFunctor);
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
    void SyncSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel);
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
    void BeginSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel, FunctorAsync& aFunctor);
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
    void SyncGetUpdateFeedParams(std::string& aTopic, std::string& aChannel);
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
    void EndGetUpdateFeedParams(IAsync& aAsync, std::string& aTopic, std::string& aChannel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSoftwareStatus
     */
    void SyncGetSoftwareStatus(std::string& aSoftwareStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSoftwareStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSoftwareStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSoftwareStatus
     */
    void EndGetSoftwareStatus(IAsync& aAsync, std::string& aSoftwareStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aExecutorStatus
     */
    void SyncGetExecutorStatus(std::string& aExecutorStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetExecutorStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetExecutorStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aExecutorStatus
     */
    void EndGetExecutorStatus(IAsync& aAsync, std::string& aExecutorStatus);

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
     * Set a callback to be run when the SoftwareStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySoftwareStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ExecutorStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyExecutorStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateTopic state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateTopicChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateChannel state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkUpdate1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateChannelChanged(Functor& aFunctor);

    /**
     * Query the value of the SoftwareStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSoftwareStatus
     */
    void PropertySoftwareStatus(std::string& aSoftwareStatus) const;
    /**
     * Query the value of the ExecutorStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aExecutorStatus
     */
    void PropertyExecutorStatus(std::string& aExecutorStatus) const;
    /**
     * Query the value of the UpdateTopic property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateTopic
     */
    void PropertyUpdateTopic(std::string& aUpdateTopic) const;
    /**
     * Query the value of the UpdateChannel property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateChannel
     */
    void PropertyUpdateChannel(std::string& aUpdateChannel) const;
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
    void SoftwareStatusPropertyChanged();
    void ExecutorStatusPropertyChanged();
    void UpdateTopicPropertyChanged();
    void UpdateChannelPropertyChanged();
private:
    Action* iActionPushManifest;
    Action* iActionSetUpdateFeedParams;
    Action* iActionGetUpdateFeedParams;
    Action* iActionGetSoftwareStatus;
    Action* iActionGetExecutorStatus;
    Action* iActionApply;
    Action* iActionRestore;
    PropertyString* iSoftwareStatus;
    PropertyString* iExecutorStatus;
    PropertyString* iUpdateTopic;
    PropertyString* iUpdateChannel;
    Functor iSoftwareStatusChanged;
    Functor iExecutorStatusChanged;
    Functor iUpdateTopicChanged;
    Functor iUpdateChannelChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKUPDATE1CPP

