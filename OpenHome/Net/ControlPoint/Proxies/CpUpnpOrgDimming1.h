#ifndef HEADER_UPNPORGDIMMING1
#define HEADER_UPNPORGDIMMING1

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
class ICpProxyUpnpOrgDimming1 : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgDimming1() {}
    virtual void SyncSetLoadLevelTarget(TUint anewLoadlevelTarget) = 0;
    virtual void BeginSetLoadLevelTarget(TUint anewLoadlevelTarget, FunctorAsync& aFunctor) = 0;
    virtual void EndSetLoadLevelTarget(IAsync& aAsync) = 0;
    virtual void SyncGetLoadLevelTarget(TUint& aGetLoadlevelTarget) = 0;
    virtual void BeginGetLoadLevelTarget(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLoadLevelTarget(IAsync& aAsync, TUint& aGetLoadlevelTarget) = 0;
    virtual void SyncGetLoadLevelStatus(TUint& aretLoadlevelStatus) = 0;
    virtual void BeginGetLoadLevelStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLoadLevelStatus(IAsync& aAsync, TUint& aretLoadlevelStatus) = 0;
    virtual void SyncSetOnEffectLevel(TUint anewOnEffectLevel) = 0;
    virtual void BeginSetOnEffectLevel(TUint anewOnEffectLevel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOnEffectLevel(IAsync& aAsync) = 0;
    virtual void SyncSetOnEffect(const Brx& anewOnEffect) = 0;
    virtual void BeginSetOnEffect(const Brx& anewOnEffect, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOnEffect(IAsync& aAsync) = 0;
    virtual void SyncGetOnEffectParameters(Brh& aretOnEffect, TUint& aretOnEffectLevel) = 0;
    virtual void BeginGetOnEffectParameters(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOnEffectParameters(IAsync& aAsync, Brh& aretOnEffect, TUint& aretOnEffectLevel) = 0;
    virtual void SyncStepUp() = 0;
    virtual void BeginStepUp(FunctorAsync& aFunctor) = 0;
    virtual void EndStepUp(IAsync& aAsync) = 0;
    virtual void SyncStepDown() = 0;
    virtual void BeginStepDown(FunctorAsync& aFunctor) = 0;
    virtual void EndStepDown(IAsync& aAsync) = 0;
    virtual void SyncStartRampUp() = 0;
    virtual void BeginStartRampUp(FunctorAsync& aFunctor) = 0;
    virtual void EndStartRampUp(IAsync& aAsync) = 0;
    virtual void SyncStartRampDown() = 0;
    virtual void BeginStartRampDown(FunctorAsync& aFunctor) = 0;
    virtual void EndStartRampDown(IAsync& aAsync) = 0;
    virtual void SyncStopRamp() = 0;
    virtual void BeginStopRamp(FunctorAsync& aFunctor) = 0;
    virtual void EndStopRamp(IAsync& aAsync) = 0;
    virtual void SyncStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime) = 0;
    virtual void BeginStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime, FunctorAsync& aFunctor) = 0;
    virtual void EndStartRampToLevel(IAsync& aAsync) = 0;
    virtual void SyncSetStepDelta(TUint anewStepDelta) = 0;
    virtual void BeginSetStepDelta(TUint anewStepDelta, FunctorAsync& aFunctor) = 0;
    virtual void EndSetStepDelta(IAsync& aAsync) = 0;
    virtual void SyncGetStepDelta(TUint& aretStepDelta) = 0;
    virtual void BeginGetStepDelta(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStepDelta(IAsync& aAsync, TUint& aretStepDelta) = 0;
    virtual void SyncSetRampRate(TUint anewRampRate) = 0;
    virtual void BeginSetRampRate(TUint anewRampRate, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRampRate(IAsync& aAsync) = 0;
    virtual void SyncGetRampRate(TUint& aretRampRate) = 0;
    virtual void BeginGetRampRate(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampRate(IAsync& aAsync, TUint& aretRampRate) = 0;
    virtual void SyncPauseRamp() = 0;
    virtual void BeginPauseRamp(FunctorAsync& aFunctor) = 0;
    virtual void EndPauseRamp(IAsync& aAsync) = 0;
    virtual void SyncResumeRamp() = 0;
    virtual void BeginResumeRamp(FunctorAsync& aFunctor) = 0;
    virtual void EndResumeRamp(IAsync& aAsync) = 0;
    virtual void SyncGetIsRamping(TBool& aretIsRamping) = 0;
    virtual void BeginGetIsRamping(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIsRamping(IAsync& aAsync, TBool& aretIsRamping) = 0;
    virtual void SyncGetRampPaused(TBool& aretRampPaused) = 0;
    virtual void BeginGetRampPaused(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampPaused(IAsync& aAsync, TBool& aretRampPaused) = 0;
    virtual void SyncGetRampTime(TUint& aretRampTime) = 0;
    virtual void BeginGetRampTime(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampTime(IAsync& aAsync, TUint& aretRampTime) = 0;
    virtual void SetPropertyLoadLevelStatusChanged(Functor& aLoadLevelStatusChanged) = 0;
    virtual void PropertyLoadLevelStatus(TUint& aLoadLevelStatus) const = 0;
    virtual void SetPropertyStepDeltaChanged(Functor& aStepDeltaChanged) = 0;
    virtual void PropertyStepDelta(TUint& aStepDelta) const = 0;
    virtual void SetPropertyRampRateChanged(Functor& aRampRateChanged) = 0;
    virtual void PropertyRampRate(TUint& aRampRate) const = 0;
    virtual void SetPropertyIsRampingChanged(Functor& aIsRampingChanged) = 0;
    virtual void PropertyIsRamping(TBool& aIsRamping) const = 0;
    virtual void SetPropertyRampPausedChanged(Functor& aRampPausedChanged) = 0;
    virtual void PropertyRampPaused(TBool& aRampPaused) const = 0;
};

/**
 * Proxy for upnp.org:Dimming:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgDimming1 : public ICpProxyUpnpOrgDimming1
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
    CpProxyUpnpOrgDimming1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgDimming1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewLoadlevelTarget
     */
    void SyncSetLoadLevelTarget(TUint anewLoadlevelTarget);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetLoadLevelTarget().
     *
     * @param[in] anewLoadlevelTarget
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetLoadLevelTarget(TUint anewLoadlevelTarget, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetLoadLevelTarget(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aGetLoadlevelTarget
     */
    void SyncGetLoadLevelTarget(TUint& aGetLoadlevelTarget);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetLoadLevelTarget().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetLoadLevelTarget(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aGetLoadlevelTarget
     */
    void EndGetLoadLevelTarget(IAsync& aAsync, TUint& aGetLoadlevelTarget);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretLoadlevelStatus
     */
    void SyncGetLoadLevelStatus(TUint& aretLoadlevelStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetLoadLevelStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetLoadLevelStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretLoadlevelStatus
     */
    void EndGetLoadLevelStatus(IAsync& aAsync, TUint& aretLoadlevelStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewOnEffectLevel
     */
    void SyncSetOnEffectLevel(TUint anewOnEffectLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetOnEffectLevel().
     *
     * @param[in] anewOnEffectLevel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetOnEffectLevel(TUint anewOnEffectLevel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetOnEffectLevel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewOnEffect
     */
    void SyncSetOnEffect(const Brx& anewOnEffect);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetOnEffect().
     *
     * @param[in] anewOnEffect
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetOnEffect(const Brx& anewOnEffect, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetOnEffect(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretOnEffect
     * @param[out] aretOnEffectLevel
     */
    void SyncGetOnEffectParameters(Brh& aretOnEffect, TUint& aretOnEffectLevel);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetOnEffectParameters().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetOnEffectParameters(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretOnEffect
     * @param[out] aretOnEffectLevel
     */
    void EndGetOnEffectParameters(IAsync& aAsync, Brh& aretOnEffect, TUint& aretOnEffectLevel);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStepUp();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStepUp().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStepUp(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStepUp(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStepDown();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStepDown().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStepDown(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStepDown(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStartRampUp();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStartRampUp().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStartRampUp(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStartRampUp(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStartRampDown();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStartRampDown().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStartRampDown(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStartRampDown(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStopRamp();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStopRamp().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStopRamp(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStopRamp(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewLoadLevelTarget
     * @param[in]  anewRampTime
     */
    void SyncStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStartRampToLevel().
     *
     * @param[in] anewLoadLevelTarget
     * @param[in] anewRampTime
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStartRampToLevel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewStepDelta
     */
    void SyncSetStepDelta(TUint anewStepDelta);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetStepDelta().
     *
     * @param[in] anewStepDelta
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetStepDelta(TUint anewStepDelta, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetStepDelta(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretStepDelta
     */
    void SyncGetStepDelta(TUint& aretStepDelta);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetStepDelta().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetStepDelta(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretStepDelta
     */
    void EndGetStepDelta(IAsync& aAsync, TUint& aretStepDelta);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewRampRate
     */
    void SyncSetRampRate(TUint anewRampRate);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRampRate().
     *
     * @param[in] anewRampRate
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRampRate(TUint anewRampRate, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRampRate(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretRampRate
     */
    void SyncGetRampRate(TUint& aretRampRate);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRampRate().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRampRate(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretRampRate
     */
    void EndGetRampRate(IAsync& aAsync, TUint& aretRampRate);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPauseRamp();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPauseRamp().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPauseRamp(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPauseRamp(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncResumeRamp();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndResumeRamp().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginResumeRamp(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndResumeRamp(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretIsRamping
     */
    void SyncGetIsRamping(TBool& aretIsRamping);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetIsRamping().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetIsRamping(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretIsRamping
     */
    void EndGetIsRamping(IAsync& aAsync, TBool& aretIsRamping);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretRampPaused
     */
    void SyncGetRampPaused(TBool& aretRampPaused);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRampPaused().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRampPaused(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretRampPaused
     */
    void EndGetRampPaused(IAsync& aAsync, TBool& aretRampPaused);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretRampTime
     */
    void SyncGetRampTime(TUint& aretRampTime);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRampTime().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRampTime(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aretRampTime
     */
    void EndGetRampTime(IAsync& aAsync, TUint& aretRampTime);

    /**
     * Set a callback to be run when the LoadLevelStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyLoadLevelStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the StepDelta state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStepDeltaChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RampRate state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRampRateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IsRamping state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIsRampingChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RampPaused state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRampPausedChanged(Functor& aFunctor);

    /**
     * Query the value of the LoadLevelStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aLoadLevelStatus
     */
    void PropertyLoadLevelStatus(TUint& aLoadLevelStatus) const;
    /**
     * Query the value of the StepDelta property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStepDelta
     */
    void PropertyStepDelta(TUint& aStepDelta) const;
    /**
     * Query the value of the RampRate property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRampRate
     */
    void PropertyRampRate(TUint& aRampRate) const;
    /**
     * Query the value of the IsRamping property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIsRamping
     */
    void PropertyIsRamping(TBool& aIsRamping) const;
    /**
     * Query the value of the RampPaused property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRampPaused
     */
    void PropertyRampPaused(TBool& aRampPaused) const;
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
    void LoadLevelStatusPropertyChanged();
    void StepDeltaPropertyChanged();
    void RampRatePropertyChanged();
    void IsRampingPropertyChanged();
    void RampPausedPropertyChanged();
private:
    Action* iActionSetLoadLevelTarget;
    Action* iActionGetLoadLevelTarget;
    Action* iActionGetLoadLevelStatus;
    Action* iActionSetOnEffectLevel;
    Action* iActionSetOnEffect;
    Action* iActionGetOnEffectParameters;
    Action* iActionStepUp;
    Action* iActionStepDown;
    Action* iActionStartRampUp;
    Action* iActionStartRampDown;
    Action* iActionStopRamp;
    Action* iActionStartRampToLevel;
    Action* iActionSetStepDelta;
    Action* iActionGetStepDelta;
    Action* iActionSetRampRate;
    Action* iActionGetRampRate;
    Action* iActionPauseRamp;
    Action* iActionResumeRamp;
    Action* iActionGetIsRamping;
    Action* iActionGetRampPaused;
    Action* iActionGetRampTime;
    PropertyUint* iLoadLevelStatus;
    PropertyUint* iStepDelta;
    PropertyUint* iRampRate;
    PropertyBool* iIsRamping;
    PropertyBool* iRampPaused;
    Functor iLoadLevelStatusChanged;
    Functor iStepDeltaChanged;
    Functor iRampRateChanged;
    Functor iIsRampingChanged;
    Functor iRampPausedChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_UPNPORGDIMMING1

