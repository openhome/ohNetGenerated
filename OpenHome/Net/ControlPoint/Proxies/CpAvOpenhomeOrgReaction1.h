#ifndef HEADER_AVOPENHOMEORGREACTION1
#define HEADER_AVOPENHOMEORGREACTION1

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
class ICpProxyAvOpenhomeOrgReaction1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgReaction1() {}
    virtual void SyncGetCanReact(TBool& aCanReact) = 0;
    virtual void BeginGetCanReact(FunctorAsync& aFunctor) = 0;
    virtual void EndGetCanReact(IAsync& aAsync, TBool& aCanReact) = 0;
    virtual void SyncGetCurrentReaction(Brh& aReaction) = 0;
    virtual void BeginGetCurrentReaction(FunctorAsync& aFunctor) = 0;
    virtual void EndGetCurrentReaction(IAsync& aAsync, Brh& aReaction) = 0;
    virtual void SyncGetAvailableReactions(Brh& aAvailableReactions) = 0;
    virtual void BeginGetAvailableReactions(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAvailableReactions(IAsync& aAsync, Brh& aAvailableReactions) = 0;
    virtual void SyncSetReaction(const Brx& aReaction) = 0;
    virtual void BeginSetReaction(const Brx& aReaction, FunctorAsync& aFunctor) = 0;
    virtual void EndSetReaction(IAsync& aAsync) = 0;
    virtual void SyncClearReaction() = 0;
    virtual void BeginClearReaction(FunctorAsync& aFunctor) = 0;
    virtual void EndClearReaction(IAsync& aAsync) = 0;
    virtual void SetPropertyCanReactChanged(Functor& aCanReactChanged) = 0;
    virtual void PropertyCanReact(TBool& aCanReact) const = 0;
    virtual void SetPropertyCurrentReactionChanged(Functor& aCurrentReactionChanged) = 0;
    virtual void PropertyCurrentReaction(Brhz& aCurrentReaction) const = 0;
    virtual void SetPropertyAvailableReactionsChanged(Functor& aAvailableReactionsChanged) = 0;
    virtual void PropertyAvailableReactions(Brhz& aAvailableReactions) const = 0;
};

/**
 * Proxy for av.openhome.org:Reaction:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgReaction1 : public ICpProxyAvOpenhomeOrgReaction1
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
    CpProxyAvOpenhomeOrgReaction1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgReaction1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aCanReact
     */
    void SyncGetCanReact(TBool& aCanReact);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetCanReact().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetCanReact(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCanReact
     */
    void EndGetCanReact(IAsync& aAsync, TBool& aCanReact);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aReaction
     */
    void SyncGetCurrentReaction(Brh& aReaction);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetCurrentReaction().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetCurrentReaction(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aReaction
     */
    void EndGetCurrentReaction(IAsync& aAsync, Brh& aReaction);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAvailableReactions
     */
    void SyncGetAvailableReactions(Brh& aAvailableReactions);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAvailableReactions().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAvailableReactions(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAvailableReactions
     */
    void EndGetAvailableReactions(IAsync& aAsync, Brh& aAvailableReactions);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aReaction
     */
    void SyncSetReaction(const Brx& aReaction);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetReaction().
     *
     * @param[in] aReaction
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetReaction(const Brx& aReaction, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetReaction(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncClearReaction();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearReaction().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearReaction(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearReaction(IAsync& aAsync);

    /**
     * Set a callback to be run when the CanReact state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanReactChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CurrentReaction state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCurrentReactionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AvailableReactions state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgReaction1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAvailableReactionsChanged(Functor& aFunctor);

    /**
     * Query the value of the CanReact property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanReact
     */
    void PropertyCanReact(TBool& aCanReact) const;
    /**
     * Query the value of the CurrentReaction property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCurrentReaction
     */
    void PropertyCurrentReaction(Brhz& aCurrentReaction) const;
    /**
     * Query the value of the AvailableReactions property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAvailableReactions
     */
    void PropertyAvailableReactions(Brhz& aAvailableReactions) const;
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
    void CanReactPropertyChanged();
    void CurrentReactionPropertyChanged();
    void AvailableReactionsPropertyChanged();
private:
    Action* iActionGetCanReact;
    Action* iActionGetCurrentReaction;
    Action* iActionGetAvailableReactions;
    Action* iActionSetReaction;
    Action* iActionClearReaction;
    PropertyBool* iCanReact;
    PropertyString* iCurrentReaction;
    PropertyString* iAvailableReactions;
    Functor iCanReactChanged;
    Functor iCurrentReactionChanged;
    Functor iAvailableReactionsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGREACTION1

