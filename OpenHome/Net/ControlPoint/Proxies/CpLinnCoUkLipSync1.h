#ifndef HEADER_LINNCOUKLIPSYNC1
#define HEADER_LINNCOUKLIPSYNC1

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
class ICpProxyLinnCoUkLipSync1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkLipSync1() {}
    virtual void SyncSetDelay(TUint aDelay) = 0;
    virtual void BeginSetDelay(TUint aDelay, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDelay(IAsync& aAsync) = 0;
    virtual void SyncDelay(TUint& aDelay) = 0;
    virtual void BeginDelay(FunctorAsync& aFunctor) = 0;
    virtual void EndDelay(IAsync& aAsync, TUint& aDelay) = 0;
    virtual void SyncDelayMinimum(TUint& aMin) = 0;
    virtual void BeginDelayMinimum(FunctorAsync& aFunctor) = 0;
    virtual void EndDelayMinimum(IAsync& aAsync, TUint& aMin) = 0;
    virtual void SyncDelayMaximum(TUint& aMax) = 0;
    virtual void BeginDelayMaximum(FunctorAsync& aFunctor) = 0;
    virtual void EndDelayMaximum(IAsync& aAsync, TUint& aMax) = 0;
    virtual void SetPropertyDelayChanged(Functor& aDelayChanged) = 0;
    virtual void PropertyDelay(TUint& aDelay) const = 0;
    virtual void SetPropertyDelayMinimumChanged(Functor& aDelayMinimumChanged) = 0;
    virtual void PropertyDelayMinimum(TUint& aDelayMinimum) const = 0;
    virtual void SetPropertyDelayMaximumChanged(Functor& aDelayMaximumChanged) = 0;
    virtual void PropertyDelayMaximum(TUint& aDelayMaximum) const = 0;
};

/**
 * Proxy for linn.co.uk:LipSync:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkLipSync1 : public ICpProxyLinnCoUkLipSync1
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
    CpProxyLinnCoUkLipSync1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkLipSync1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDelay
     */
    void SyncSetDelay(TUint aDelay);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDelay().
     *
     * @param[in] aDelay
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDelay(TUint aDelay, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDelay(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDelay
     */
    void SyncDelay(TUint& aDelay);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDelay().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDelay(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDelay
     */
    void EndDelay(IAsync& aAsync, TUint& aDelay);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMin
     */
    void SyncDelayMinimum(TUint& aMin);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDelayMinimum().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDelayMinimum(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMin
     */
    void EndDelayMinimum(IAsync& aAsync, TUint& aMin);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMax
     */
    void SyncDelayMaximum(TUint& aMax);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDelayMaximum().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDelayMaximum(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMax
     */
    void EndDelayMaximum(IAsync& aAsync, TUint& aMax);

    /**
     * Set a callback to be run when the Delay state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDelayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DelayMinimum state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDelayMinimumChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DelayMaximum state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkLipSync1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDelayMaximumChanged(Functor& aFunctor);

    /**
     * Query the value of the Delay property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDelay
     */
    void PropertyDelay(TUint& aDelay) const;
    /**
     * Query the value of the DelayMinimum property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDelayMinimum
     */
    void PropertyDelayMinimum(TUint& aDelayMinimum) const;
    /**
     * Query the value of the DelayMaximum property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDelayMaximum
     */
    void PropertyDelayMaximum(TUint& aDelayMaximum) const;
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
    void DelayPropertyChanged();
    void DelayMinimumPropertyChanged();
    void DelayMaximumPropertyChanged();
private:
    Action* iActionSetDelay;
    Action* iActionDelay;
    Action* iActionDelayMinimum;
    Action* iActionDelayMaximum;
    PropertyUint* iDelay;
    PropertyUint* iDelayMinimum;
    PropertyUint* iDelayMaximum;
    Functor iDelayChanged;
    Functor iDelayMinimumChanged;
    Functor iDelayMaximumChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKLIPSYNC1

