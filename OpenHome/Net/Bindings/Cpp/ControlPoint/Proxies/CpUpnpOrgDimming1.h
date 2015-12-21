#ifndef HEADER_UPNPORGDIMMING1CPP
#define HEADER_UPNPORGDIMMING1CPP

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
class ICpProxyUpnpOrgDimming1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgDimming1Cpp() {}
    virtual void SyncSetLoadLevelTarget(uint32_t anewLoadlevelTarget) = 0;
    virtual void BeginSetLoadLevelTarget(uint32_t anewLoadlevelTarget, FunctorAsync& aFunctor) = 0;
    virtual void EndSetLoadLevelTarget(IAsync& aAsync) = 0;
    virtual void SyncGetLoadLevelTarget(uint32_t& aGetLoadlevelTarget) = 0;
    virtual void BeginGetLoadLevelTarget(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLoadLevelTarget(IAsync& aAsync, uint32_t& aGetLoadlevelTarget) = 0;
    virtual void SyncGetLoadLevelStatus(uint32_t& aretLoadlevelStatus) = 0;
    virtual void BeginGetLoadLevelStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetLoadLevelStatus(IAsync& aAsync, uint32_t& aretLoadlevelStatus) = 0;
    virtual void SyncSetOnEffectLevel(uint32_t anewOnEffectLevel) = 0;
    virtual void BeginSetOnEffectLevel(uint32_t anewOnEffectLevel, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOnEffectLevel(IAsync& aAsync) = 0;
    virtual void SyncSetOnEffect(const std::string& anewOnEffect) = 0;
    virtual void BeginSetOnEffect(const std::string& anewOnEffect, FunctorAsync& aFunctor) = 0;
    virtual void EndSetOnEffect(IAsync& aAsync) = 0;
    virtual void SyncGetOnEffectParameters(std::string& aretOnEffect, uint32_t& aretOnEffectLevel) = 0;
    virtual void BeginGetOnEffectParameters(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOnEffectParameters(IAsync& aAsync, std::string& aretOnEffect, uint32_t& aretOnEffectLevel) = 0;
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
    virtual void SyncStartRampToLevel(uint32_t anewLoadLevelTarget, uint32_t anewRampTime) = 0;
    virtual void BeginStartRampToLevel(uint32_t anewLoadLevelTarget, uint32_t anewRampTime, FunctorAsync& aFunctor) = 0;
    virtual void EndStartRampToLevel(IAsync& aAsync) = 0;
    virtual void SyncSetStepDelta(uint32_t anewStepDelta) = 0;
    virtual void BeginSetStepDelta(uint32_t anewStepDelta, FunctorAsync& aFunctor) = 0;
    virtual void EndSetStepDelta(IAsync& aAsync) = 0;
    virtual void SyncGetStepDelta(uint32_t& aretStepDelta) = 0;
    virtual void BeginGetStepDelta(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStepDelta(IAsync& aAsync, uint32_t& aretStepDelta) = 0;
    virtual void SyncSetRampRate(uint32_t anewRampRate) = 0;
    virtual void BeginSetRampRate(uint32_t anewRampRate, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRampRate(IAsync& aAsync) = 0;
    virtual void SyncGetRampRate(uint32_t& aretRampRate) = 0;
    virtual void BeginGetRampRate(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampRate(IAsync& aAsync, uint32_t& aretRampRate) = 0;
    virtual void SyncPauseRamp() = 0;
    virtual void BeginPauseRamp(FunctorAsync& aFunctor) = 0;
    virtual void EndPauseRamp(IAsync& aAsync) = 0;
    virtual void SyncResumeRamp() = 0;
    virtual void BeginResumeRamp(FunctorAsync& aFunctor) = 0;
    virtual void EndResumeRamp(IAsync& aAsync) = 0;
    virtual void SyncGetIsRamping(bool& aretIsRamping) = 0;
    virtual void BeginGetIsRamping(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIsRamping(IAsync& aAsync, bool& aretIsRamping) = 0;
    virtual void SyncGetRampPaused(bool& aretRampPaused) = 0;
    virtual void BeginGetRampPaused(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampPaused(IAsync& aAsync, bool& aretRampPaused) = 0;
    virtual void SyncGetRampTime(uint32_t& aretRampTime) = 0;
    virtual void BeginGetRampTime(FunctorAsync& aFunctor) = 0;
    virtual void EndGetRampTime(IAsync& aAsync, uint32_t& aretRampTime) = 0;
    virtual void SetPropertyLoadLevelStatusChanged(Functor& aLoadLevelStatusChanged) = 0;
    virtual void PropertyLoadLevelStatus(uint32_t& aLoadLevelStatus) const = 0;
    virtual void SetPropertyStepDeltaChanged(Functor& aStepDeltaChanged) = 0;
    virtual void PropertyStepDelta(uint32_t& aStepDelta) const = 0;
    virtual void SetPropertyRampRateChanged(Functor& aRampRateChanged) = 0;
    virtual void PropertyRampRate(uint32_t& aRampRate) const = 0;
    virtual void SetPropertyIsRampingChanged(Functor& aIsRampingChanged) = 0;
    virtual void PropertyIsRamping(bool& aIsRamping) const = 0;
    virtual void SetPropertyRampPausedChanged(Functor& aRampPausedChanged) = 0;
    virtual void PropertyRampPaused(bool& aRampPaused) const = 0;
};

/**
 * Proxy for upnp.org:Dimming:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgDimming1Cpp : public ICpProxyUpnpOrgDimming1Cpp
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
    CpProxyUpnpOrgDimming1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgDimming1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewLoadlevelTarget
     */
    void SyncSetLoadLevelTarget(uint32_t anewLoadlevelTarget);
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
    void BeginSetLoadLevelTarget(uint32_t anewLoadlevelTarget, FunctorAsync& aFunctor);
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
    void SyncGetLoadLevelTarget(uint32_t& aGetLoadlevelTarget);
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
    void EndGetLoadLevelTarget(IAsync& aAsync, uint32_t& aGetLoadlevelTarget);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretLoadlevelStatus
     */
    void SyncGetLoadLevelStatus(uint32_t& aretLoadlevelStatus);
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
    void EndGetLoadLevelStatus(IAsync& aAsync, uint32_t& aretLoadlevelStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewOnEffectLevel
     */
    void SyncSetOnEffectLevel(uint32_t anewOnEffectLevel);
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
    void BeginSetOnEffectLevel(uint32_t anewOnEffectLevel, FunctorAsync& aFunctor);
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
    void SyncSetOnEffect(const std::string& anewOnEffect);
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
    void BeginSetOnEffect(const std::string& anewOnEffect, FunctorAsync& aFunctor);
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
    void SyncGetOnEffectParameters(std::string& aretOnEffect, uint32_t& aretOnEffectLevel);
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
    void EndGetOnEffectParameters(IAsync& aAsync, std::string& aretOnEffect, uint32_t& aretOnEffectLevel);

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
    void SyncStartRampToLevel(uint32_t anewLoadLevelTarget, uint32_t anewRampTime);
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
    void BeginStartRampToLevel(uint32_t anewLoadLevelTarget, uint32_t anewRampTime, FunctorAsync& aFunctor);
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
    void SyncSetStepDelta(uint32_t anewStepDelta);
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
    void BeginSetStepDelta(uint32_t anewStepDelta, FunctorAsync& aFunctor);
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
    void SyncGetStepDelta(uint32_t& aretStepDelta);
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
    void EndGetStepDelta(IAsync& aAsync, uint32_t& aretStepDelta);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewRampRate
     */
    void SyncSetRampRate(uint32_t anewRampRate);
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
    void BeginSetRampRate(uint32_t anewRampRate, FunctorAsync& aFunctor);
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
    void SyncGetRampRate(uint32_t& aretRampRate);
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
    void EndGetRampRate(IAsync& aAsync, uint32_t& aretRampRate);

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
    void SyncGetIsRamping(bool& aretIsRamping);
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
    void EndGetIsRamping(IAsync& aAsync, bool& aretIsRamping);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretRampPaused
     */
    void SyncGetRampPaused(bool& aretRampPaused);
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
    void EndGetRampPaused(IAsync& aAsync, bool& aretRampPaused);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aretRampTime
     */
    void SyncGetRampTime(uint32_t& aretRampTime);
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
    void EndGetRampTime(IAsync& aAsync, uint32_t& aretRampTime);

    /**
     * Set a callback to be run when the LoadLevelStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyLoadLevelStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the StepDelta state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStepDeltaChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RampRate state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRampRateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IsRamping state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIsRampingChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RampPaused state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgDimming1Cpp instance will not overlap.
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
    void PropertyLoadLevelStatus(uint32_t& aLoadLevelStatus) const;
    /**
     * Query the value of the StepDelta property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStepDelta
     */
    void PropertyStepDelta(uint32_t& aStepDelta) const;
    /**
     * Query the value of the RampRate property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRampRate
     */
    void PropertyRampRate(uint32_t& aRampRate) const;
    /**
     * Query the value of the IsRamping property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIsRamping
     */
    void PropertyIsRamping(bool& aIsRamping) const;
    /**
     * Query the value of the RampPaused property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRampPaused
     */
    void PropertyRampPaused(bool& aRampPaused) const;
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

#endif // HEADER_UPNPORGDIMMING1CPP

