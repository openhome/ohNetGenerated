#ifndef HEADER_AVOPENHOMEORGVOLUME4CPP
#define HEADER_AVOPENHOMEORGVOLUME4CPP

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
class ICpProxyAvOpenhomeOrgVolume4Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgVolume4Cpp() {}
    virtual void SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax) = 0;
    virtual void BeginCharacteristics(FunctorAsync& aFunctor) = 0;
    virtual void EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax) = 0;
    virtual void SyncSetVolume(uint32_t aValue) = 0;
    virtual void BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolume(IAsync& aAsync) = 0;
    virtual void SyncVolumeInc() = 0;
    virtual void BeginVolumeInc(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeInc(IAsync& aAsync) = 0;
    virtual void SyncVolumeDec() = 0;
    virtual void BeginVolumeDec(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeDec(IAsync& aAsync) = 0;
    virtual void SyncSetVolumeNoUnmute(uint32_t aValue) = 0;
    virtual void BeginSetVolumeNoUnmute(uint32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolumeNoUnmute(IAsync& aAsync) = 0;
    virtual void SyncVolumeIncNoUnmute() = 0;
    virtual void BeginVolumeIncNoUnmute(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeIncNoUnmute(IAsync& aAsync) = 0;
    virtual void SyncVolumeDecNoUnmute() = 0;
    virtual void BeginVolumeDecNoUnmute(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeDecNoUnmute(IAsync& aAsync) = 0;
    virtual void SyncVolume(uint32_t& aValue) = 0;
    virtual void BeginVolume(FunctorAsync& aFunctor) = 0;
    virtual void EndVolume(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncSetBalance(int32_t aValue) = 0;
    virtual void BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBalance(IAsync& aAsync) = 0;
    virtual void SyncBalanceInc() = 0;
    virtual void BeginBalanceInc(FunctorAsync& aFunctor) = 0;
    virtual void EndBalanceInc(IAsync& aAsync) = 0;
    virtual void SyncBalanceDec() = 0;
    virtual void BeginBalanceDec(FunctorAsync& aFunctor) = 0;
    virtual void EndBalanceDec(IAsync& aAsync) = 0;
    virtual void SyncBalance(int32_t& aValue) = 0;
    virtual void BeginBalance(FunctorAsync& aFunctor) = 0;
    virtual void EndBalance(IAsync& aAsync, int32_t& aValue) = 0;
    virtual void SyncSetFade(int32_t aValue) = 0;
    virtual void BeginSetFade(int32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetFade(IAsync& aAsync) = 0;
    virtual void SyncFadeInc() = 0;
    virtual void BeginFadeInc(FunctorAsync& aFunctor) = 0;
    virtual void EndFadeInc(IAsync& aAsync) = 0;
    virtual void SyncFadeDec() = 0;
    virtual void BeginFadeDec(FunctorAsync& aFunctor) = 0;
    virtual void EndFadeDec(IAsync& aAsync) = 0;
    virtual void SyncFade(int32_t& aValue) = 0;
    virtual void BeginFade(FunctorAsync& aFunctor) = 0;
    virtual void EndFade(IAsync& aAsync, int32_t& aValue) = 0;
    virtual void SyncSetMute(bool aValue) = 0;
    virtual void BeginSetMute(bool aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMute(IAsync& aAsync) = 0;
    virtual void SyncMute(bool& aValue) = 0;
    virtual void BeginMute(FunctorAsync& aFunctor) = 0;
    virtual void EndMute(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncVolumeLimit(uint32_t& aValue) = 0;
    virtual void BeginVolumeLimit(FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeLimit(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncUnityGain(bool& aValue) = 0;
    virtual void BeginUnityGain(FunctorAsync& aFunctor) = 0;
    virtual void EndUnityGain(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncVolumeOffset(const std::string& aChannel, int32_t& aVolumeOffsetBinaryMilliDb) = 0;
    virtual void BeginVolumeOffset(const std::string& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndVolumeOffset(IAsync& aAsync, int32_t& aVolumeOffsetBinaryMilliDb) = 0;
    virtual void SyncSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb) = 0;
    virtual void BeginSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor) = 0;
    virtual void EndSetVolumeOffset(IAsync& aAsync) = 0;
    virtual void SyncTrim(const std::string& aChannel, int32_t& aTrimBinaryMilliDb) = 0;
    virtual void BeginTrim(const std::string& aChannel, FunctorAsync& aFunctor) = 0;
    virtual void EndTrim(IAsync& aAsync, int32_t& aTrimBinaryMilliDb) = 0;
    virtual void SyncSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb) = 0;
    virtual void BeginSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb, FunctorAsync& aFunctor) = 0;
    virtual void EndSetTrim(IAsync& aAsync) = 0;
    virtual void SetPropertyVolumeChanged(Functor& aVolumeChanged) = 0;
    virtual void PropertyVolume(uint32_t& aVolume) const = 0;
    virtual void SetPropertyMuteChanged(Functor& aMuteChanged) = 0;
    virtual void PropertyMute(bool& aMute) const = 0;
    virtual void SetPropertyBalanceChanged(Functor& aBalanceChanged) = 0;
    virtual void PropertyBalance(int32_t& aBalance) const = 0;
    virtual void SetPropertyFadeChanged(Functor& aFadeChanged) = 0;
    virtual void PropertyFade(int32_t& aFade) const = 0;
    virtual void SetPropertyVolumeLimitChanged(Functor& aVolumeLimitChanged) = 0;
    virtual void PropertyVolumeLimit(uint32_t& aVolumeLimit) const = 0;
    virtual void SetPropertyVolumeMaxChanged(Functor& aVolumeMaxChanged) = 0;
    virtual void PropertyVolumeMax(uint32_t& aVolumeMax) const = 0;
    virtual void SetPropertyVolumeUnityChanged(Functor& aVolumeUnityChanged) = 0;
    virtual void PropertyVolumeUnity(uint32_t& aVolumeUnity) const = 0;
    virtual void SetPropertyVolumeStepsChanged(Functor& aVolumeStepsChanged) = 0;
    virtual void PropertyVolumeSteps(uint32_t& aVolumeSteps) const = 0;
    virtual void SetPropertyVolumeMilliDbPerStepChanged(Functor& aVolumeMilliDbPerStepChanged) = 0;
    virtual void PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const = 0;
    virtual void SetPropertyBalanceMaxChanged(Functor& aBalanceMaxChanged) = 0;
    virtual void PropertyBalanceMax(uint32_t& aBalanceMax) const = 0;
    virtual void SetPropertyFadeMaxChanged(Functor& aFadeMaxChanged) = 0;
    virtual void PropertyFadeMax(uint32_t& aFadeMax) const = 0;
    virtual void SetPropertyUnityGainChanged(Functor& aUnityGainChanged) = 0;
    virtual void PropertyUnityGain(bool& aUnityGain) const = 0;
    virtual void SetPropertyVolumeOffsetsChanged(Functor& aVolumeOffsetsChanged) = 0;
    virtual void PropertyVolumeOffsets(std::string& aVolumeOffsets) const = 0;
    virtual void SetPropertyVolumeOffsetMaxChanged(Functor& aVolumeOffsetMaxChanged) = 0;
    virtual void PropertyVolumeOffsetMax(uint32_t& aVolumeOffsetMax) const = 0;
    virtual void SetPropertyTrimChanged(Functor& aTrimChanged) = 0;
    virtual void PropertyTrim(std::string& aTrim) const = 0;
};

/**
 * Proxy for av.openhome.org:Volume:4
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgVolume4Cpp : public ICpProxyAvOpenhomeOrgVolume4Cpp
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
    CpProxyAvOpenhomeOrgVolume4Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgVolume4Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVolumeMax
     * @param[out] aVolumeUnity
     * @param[out] aVolumeSteps
     * @param[out] aVolumeMilliDbPerStep
     * @param[out] aBalanceMax
     * @param[out] aFadeMax
     */
    void SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCharacteristics().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCharacteristics(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVolumeMax
     * @param[out] aVolumeUnity
     * @param[out] aVolumeSteps
     * @param[out] aVolumeMilliDbPerStep
     * @param[out] aBalanceMax
     * @param[out] aFadeMax
     */
    void EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetVolume(uint32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolume().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolume(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetVolumeNoUnmute(uint32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolumeNoUnmute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolumeNoUnmute(uint32_t aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolumeNoUnmute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeIncNoUnmute();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeIncNoUnmute().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeIncNoUnmute(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeIncNoUnmute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncVolumeDecNoUnmute();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeDecNoUnmute().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeDecNoUnmute(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndVolumeDecNoUnmute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncVolume(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolume().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolume(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndVolume(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetBalance(int32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBalance().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBalance(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncBalanceInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalanceInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalanceInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndBalanceInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncBalanceDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalanceDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalanceDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndBalanceDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncBalance(int32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBalance().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBalance(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndBalance(IAsync& aAsync, int32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetFade(int32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetFade().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetFade(int32_t aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetFade(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncFadeInc();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFadeInc().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFadeInc(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndFadeInc(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncFadeDec();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFadeDec().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFadeDec(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndFadeDec(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncFade(int32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndFade().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginFade(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndFade(IAsync& aAsync, int32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncSetMute(bool aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetMute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetMute(bool aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncMute(bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMute().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMute(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndMute(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncVolumeLimit(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeLimit().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeLimit(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndVolumeLimit(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncUnityGain(bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUnityGain().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUnityGain(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndUnityGain(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     * @param[out] aVolumeOffsetBinaryMilliDb
     */
    void SyncVolumeOffset(const std::string& aChannel, int32_t& aVolumeOffsetBinaryMilliDb);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVolumeOffset().
     *
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVolumeOffset(const std::string& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVolumeOffsetBinaryMilliDb
     */
    void EndVolumeOffset(IAsync& aAsync, int32_t& aVolumeOffsetBinaryMilliDb);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     * @param[in]  aVolumeOffsetBinaryMilliDb
     */
    void SyncSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetVolumeOffset().
     *
     * @param[in] aChannel
     * @param[in] aVolumeOffsetBinaryMilliDb
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetVolumeOffset(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     * @param[out] aTrimBinaryMilliDb
     */
    void SyncTrim(const std::string& aChannel, int32_t& aTrimBinaryMilliDb);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndTrim().
     *
     * @param[in] aChannel
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginTrim(const std::string& aChannel, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTrimBinaryMilliDb
     */
    void EndTrim(IAsync& aAsync, int32_t& aTrimBinaryMilliDb);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannel
     * @param[in]  aTrimBinaryMilliDb
     */
    void SyncSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetTrim().
     *
     * @param[in] aChannel
     * @param[in] aTrimBinaryMilliDb
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetTrim(IAsync& aAsync);

    /**
     * Set a callback to be run when the Volume state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Mute state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMuteChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Balance state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBalanceChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Fade state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyFadeChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeLimit state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeLimitChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeUnity state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeUnityChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeSteps state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeStepsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeMilliDbPerStep state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the BalanceMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBalanceMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the FadeMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyFadeMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UnityGain state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUnityGainChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeOffsets state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeOffsetsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the VolumeOffsetMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Trim state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgVolume4Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTrimChanged(Functor& aFunctor);

    /**
     * Query the value of the Volume property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolume
     */
    void PropertyVolume(uint32_t& aVolume) const;
    /**
     * Query the value of the Mute property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMute
     */
    void PropertyMute(bool& aMute) const;
    /**
     * Query the value of the Balance property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBalance
     */
    void PropertyBalance(int32_t& aBalance) const;
    /**
     * Query the value of the Fade property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aFade
     */
    void PropertyFade(int32_t& aFade) const;
    /**
     * Query the value of the VolumeLimit property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeLimit
     */
    void PropertyVolumeLimit(uint32_t& aVolumeLimit) const;
    /**
     * Query the value of the VolumeMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeMax
     */
    void PropertyVolumeMax(uint32_t& aVolumeMax) const;
    /**
     * Query the value of the VolumeUnity property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeUnity
     */
    void PropertyVolumeUnity(uint32_t& aVolumeUnity) const;
    /**
     * Query the value of the VolumeSteps property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeSteps
     */
    void PropertyVolumeSteps(uint32_t& aVolumeSteps) const;
    /**
     * Query the value of the VolumeMilliDbPerStep property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeMilliDbPerStep
     */
    void PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const;
    /**
     * Query the value of the BalanceMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBalanceMax
     */
    void PropertyBalanceMax(uint32_t& aBalanceMax) const;
    /**
     * Query the value of the FadeMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aFadeMax
     */
    void PropertyFadeMax(uint32_t& aFadeMax) const;
    /**
     * Query the value of the UnityGain property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUnityGain
     */
    void PropertyUnityGain(bool& aUnityGain) const;
    /**
     * Query the value of the VolumeOffsets property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeOffsets
     */
    void PropertyVolumeOffsets(std::string& aVolumeOffsets) const;
    /**
     * Query the value of the VolumeOffsetMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVolumeOffsetMax
     */
    void PropertyVolumeOffsetMax(uint32_t& aVolumeOffsetMax) const;
    /**
     * Query the value of the Trim property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTrim
     */
    void PropertyTrim(std::string& aTrim) const;
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
    void VolumePropertyChanged();
    void MutePropertyChanged();
    void BalancePropertyChanged();
    void FadePropertyChanged();
    void VolumeLimitPropertyChanged();
    void VolumeMaxPropertyChanged();
    void VolumeUnityPropertyChanged();
    void VolumeStepsPropertyChanged();
    void VolumeMilliDbPerStepPropertyChanged();
    void BalanceMaxPropertyChanged();
    void FadeMaxPropertyChanged();
    void UnityGainPropertyChanged();
    void VolumeOffsetsPropertyChanged();
    void VolumeOffsetMaxPropertyChanged();
    void TrimPropertyChanged();
private:
    Action* iActionCharacteristics;
    Action* iActionSetVolume;
    Action* iActionVolumeInc;
    Action* iActionVolumeDec;
    Action* iActionSetVolumeNoUnmute;
    Action* iActionVolumeIncNoUnmute;
    Action* iActionVolumeDecNoUnmute;
    Action* iActionVolume;
    Action* iActionSetBalance;
    Action* iActionBalanceInc;
    Action* iActionBalanceDec;
    Action* iActionBalance;
    Action* iActionSetFade;
    Action* iActionFadeInc;
    Action* iActionFadeDec;
    Action* iActionFade;
    Action* iActionSetMute;
    Action* iActionMute;
    Action* iActionVolumeLimit;
    Action* iActionUnityGain;
    Action* iActionVolumeOffset;
    Action* iActionSetVolumeOffset;
    Action* iActionTrim;
    Action* iActionSetTrim;
    PropertyUint* iVolume;
    PropertyBool* iMute;
    PropertyInt* iBalance;
    PropertyInt* iFade;
    PropertyUint* iVolumeLimit;
    PropertyUint* iVolumeMax;
    PropertyUint* iVolumeUnity;
    PropertyUint* iVolumeSteps;
    PropertyUint* iVolumeMilliDbPerStep;
    PropertyUint* iBalanceMax;
    PropertyUint* iFadeMax;
    PropertyBool* iUnityGain;
    PropertyString* iVolumeOffsets;
    PropertyUint* iVolumeOffsetMax;
    PropertyString* iTrim;
    Functor iVolumeChanged;
    Functor iMuteChanged;
    Functor iBalanceChanged;
    Functor iFadeChanged;
    Functor iVolumeLimitChanged;
    Functor iVolumeMaxChanged;
    Functor iVolumeUnityChanged;
    Functor iVolumeStepsChanged;
    Functor iVolumeMilliDbPerStepChanged;
    Functor iBalanceMaxChanged;
    Functor iFadeMaxChanged;
    Functor iUnityGainChanged;
    Functor iVolumeOffsetsChanged;
    Functor iVolumeOffsetMaxChanged;
    Functor iTrimChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGVOLUME4CPP

