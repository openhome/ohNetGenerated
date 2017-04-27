#ifndef HEADER_AVOPENHOMEORGTRANSPORT1CPP
#define HEADER_AVOPENHOMEORGTRANSPORT1CPP

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
class ICpProxyAvOpenhomeOrgTransport1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgTransport1Cpp() {}
    virtual void SyncPlayAs(const std::string& aMode, const std::string& aCommand) = 0;
    virtual void BeginPlayAs(const std::string& aMode, const std::string& aCommand, FunctorAsync& aFunctor) = 0;
    virtual void EndPlayAs(IAsync& aAsync) = 0;
    virtual void SyncPlay() = 0;
    virtual void BeginPlay(FunctorAsync& aFunctor) = 0;
    virtual void EndPlay(IAsync& aAsync) = 0;
    virtual void SyncPause() = 0;
    virtual void BeginPause(FunctorAsync& aFunctor) = 0;
    virtual void EndPause(IAsync& aAsync) = 0;
    virtual void SyncStop() = 0;
    virtual void BeginStop(FunctorAsync& aFunctor) = 0;
    virtual void EndStop(IAsync& aAsync) = 0;
    virtual void SyncSkipNext() = 0;
    virtual void BeginSkipNext(FunctorAsync& aFunctor) = 0;
    virtual void EndSkipNext(IAsync& aAsync) = 0;
    virtual void SyncSkipPrevious() = 0;
    virtual void BeginSkipPrevious(FunctorAsync& aFunctor) = 0;
    virtual void EndSkipPrevious(IAsync& aAsync) = 0;
    virtual void SyncSetRepeat(uint32_t aRepeat) = 0;
    virtual void BeginSetRepeat(uint32_t aRepeat, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRepeat(IAsync& aAsync) = 0;
    virtual void SyncSetShuffle(uint32_t aShuffle) = 0;
    virtual void BeginSetShuffle(uint32_t aShuffle, FunctorAsync& aFunctor) = 0;
    virtual void EndSetShuffle(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute) = 0;
    virtual void BeginSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondAbsolute(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative) = 0;
    virtual void BeginSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondRelative(IAsync& aAsync) = 0;
    virtual void SyncTransportState(std::string& aState) = 0;
    virtual void BeginTransportState(FunctorAsync& aFunctor) = 0;
    virtual void EndTransportState(IAsync& aAsync, std::string& aState) = 0;
    virtual void SyncModes(std::string& aModes) = 0;
    virtual void BeginModes(FunctorAsync& aFunctor) = 0;
    virtual void EndModes(IAsync& aAsync, std::string& aModes) = 0;
    virtual void SyncModeInfo(bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle) = 0;
    virtual void BeginModeInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndModeInfo(IAsync& aAsync, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle) = 0;
    virtual void SyncStreamInfo(uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause) = 0;
    virtual void BeginStreamInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause) = 0;
    virtual void SyncStreamId(uint32_t& aStreamId) = 0;
    virtual void BeginStreamId(FunctorAsync& aFunctor) = 0;
    virtual void EndStreamId(IAsync& aAsync, uint32_t& aStreamId) = 0;
    virtual void SyncRepeat(uint32_t& aRepeat) = 0;
    virtual void BeginRepeat(FunctorAsync& aFunctor) = 0;
    virtual void EndRepeat(IAsync& aAsync, uint32_t& aRepeat) = 0;
    virtual void SyncShuffle(uint32_t& aShuffle) = 0;
    virtual void BeginShuffle(FunctorAsync& aFunctor) = 0;
    virtual void EndShuffle(IAsync& aAsync, uint32_t& aShuffle) = 0;
    virtual void SetPropertyModesChanged(Functor& aModesChanged) = 0;
    virtual void PropertyModes(std::string& aModes) const = 0;
    virtual void SetPropertyCanSkipNextChanged(Functor& aCanSkipNextChanged) = 0;
    virtual void PropertyCanSkipNext(bool& aCanSkipNext) const = 0;
    virtual void SetPropertyCanSkipPreviousChanged(Functor& aCanSkipPreviousChanged) = 0;
    virtual void PropertyCanSkipPrevious(bool& aCanSkipPrevious) const = 0;
    virtual void SetPropertyCanRepeatChanged(Functor& aCanRepeatChanged) = 0;
    virtual void PropertyCanRepeat(bool& aCanRepeat) const = 0;
    virtual void SetPropertyCanShuffleChanged(Functor& aCanShuffleChanged) = 0;
    virtual void PropertyCanShuffle(bool& aCanShuffle) const = 0;
    virtual void SetPropertyStreamIdChanged(Functor& aStreamIdChanged) = 0;
    virtual void PropertyStreamId(uint32_t& aStreamId) const = 0;
    virtual void SetPropertyCanSeekChanged(Functor& aCanSeekChanged) = 0;
    virtual void PropertyCanSeek(bool& aCanSeek) const = 0;
    virtual void SetPropertyCanPauseChanged(Functor& aCanPauseChanged) = 0;
    virtual void PropertyCanPause(bool& aCanPause) const = 0;
    virtual void SetPropertyTransportStateChanged(Functor& aTransportStateChanged) = 0;
    virtual void PropertyTransportState(std::string& aTransportState) const = 0;
    virtual void SetPropertyRepeatChanged(Functor& aRepeatChanged) = 0;
    virtual void PropertyRepeat(uint32_t& aRepeat) const = 0;
    virtual void SetPropertyShuffleChanged(Functor& aShuffleChanged) = 0;
    virtual void PropertyShuffle(uint32_t& aShuffle) const = 0;
};

/**
 * Proxy for av.openhome.org:Transport:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgTransport1Cpp : public ICpProxyAvOpenhomeOrgTransport1Cpp
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
    CpProxyAvOpenhomeOrgTransport1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgTransport1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aMode
     * @param[in]  aCommand
     */
    void SyncPlayAs(const std::string& aMode, const std::string& aCommand);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlayAs().
     *
     * @param[in] aMode
     * @param[in] aCommand
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlayAs(const std::string& aMode, const std::string& aCommand, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlayAs(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPlay();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlay().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlay(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlay(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPause();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPause().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPause(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPause(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncStop();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStop().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStop(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndStop(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncSkipNext();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSkipNext().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSkipNext(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSkipNext(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncSkipPrevious();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSkipPrevious().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSkipPrevious(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSkipPrevious(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRepeat
     */
    void SyncSetRepeat(uint32_t aRepeat);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRepeat().
     *
     * @param[in] aRepeat
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRepeat(uint32_t aRepeat, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRepeat(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aShuffle
     */
    void SyncSetShuffle(uint32_t aShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetShuffle().
     *
     * @param[in] aShuffle
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetShuffle(uint32_t aShuffle, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetShuffle(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStreamId
     * @param[in]  aSecondAbsolute
     */
    void SyncSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondAbsolute().
     *
     * @param[in] aStreamId
     * @param[in] aSecondAbsolute
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeekSecondAbsolute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStreamId
     * @param[in]  aSecondRelative
     */
    void SyncSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondRelative().
     *
     * @param[in] aStreamId
     * @param[in] aSecondRelative
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeekSecondRelative(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aState
     */
    void SyncTransportState(std::string& aState);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndTransportState().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginTransportState(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aState
     */
    void EndTransportState(IAsync& aAsync, std::string& aState);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aModes
     */
    void SyncModes(std::string& aModes);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndModes().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginModes(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aModes
     */
    void EndModes(IAsync& aAsync, std::string& aModes);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aCanSkipNext
     * @param[out] aCanSkipPrevious
     * @param[out] aCanRepeat
     * @param[out] aCanShuffle
     */
    void SyncModeInfo(bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndModeInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginModeInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCanSkipNext
     * @param[out] aCanSkipPrevious
     * @param[out] aCanRepeat
     * @param[out] aCanShuffle
     */
    void EndModeInfo(IAsync& aAsync, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStreamId
     * @param[out] aCanSeek
     * @param[out] aCanPause
     */
    void SyncStreamInfo(uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStreamInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStreamInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aStreamId
     * @param[out] aCanSeek
     * @param[out] aCanPause
     */
    void EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStreamId
     */
    void SyncStreamId(uint32_t& aStreamId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStreamId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStreamId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aStreamId
     */
    void EndStreamId(IAsync& aAsync, uint32_t& aStreamId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRepeat
     */
    void SyncRepeat(uint32_t& aRepeat);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRepeat().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRepeat(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRepeat
     */
    void EndRepeat(IAsync& aAsync, uint32_t& aRepeat);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aShuffle
     */
    void SyncShuffle(uint32_t& aShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndShuffle().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginShuffle(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aShuffle
     */
    void EndShuffle(IAsync& aAsync, uint32_t& aShuffle);

    /**
     * Set a callback to be run when the Modes state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyModesChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanSkipNext state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanSkipNextChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanSkipPrevious state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanSkipPreviousChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanRepeat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanRepeatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanShuffle state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanShuffleChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the StreamId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStreamIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanSeek state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanSeekChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CanPause state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCanPauseChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TransportState state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Repeat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Shuffle state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyShuffleChanged(Functor& aFunctor);

    /**
     * Query the value of the Modes property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aModes
     */
    void PropertyModes(std::string& aModes) const;
    /**
     * Query the value of the CanSkipNext property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanSkipNext
     */
    void PropertyCanSkipNext(bool& aCanSkipNext) const;
    /**
     * Query the value of the CanSkipPrevious property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanSkipPrevious
     */
    void PropertyCanSkipPrevious(bool& aCanSkipPrevious) const;
    /**
     * Query the value of the CanRepeat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanRepeat
     */
    void PropertyCanRepeat(bool& aCanRepeat) const;
    /**
     * Query the value of the CanShuffle property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanShuffle
     */
    void PropertyCanShuffle(bool& aCanShuffle) const;
    /**
     * Query the value of the StreamId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStreamId
     */
    void PropertyStreamId(uint32_t& aStreamId) const;
    /**
     * Query the value of the CanSeek property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanSeek
     */
    void PropertyCanSeek(bool& aCanSeek) const;
    /**
     * Query the value of the CanPause property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCanPause
     */
    void PropertyCanPause(bool& aCanPause) const;
    /**
     * Query the value of the TransportState property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTransportState
     */
    void PropertyTransportState(std::string& aTransportState) const;
    /**
     * Query the value of the Repeat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeat
     */
    void PropertyRepeat(uint32_t& aRepeat) const;
    /**
     * Query the value of the Shuffle property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aShuffle
     */
    void PropertyShuffle(uint32_t& aShuffle) const;
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
    void ModesPropertyChanged();
    void CanSkipNextPropertyChanged();
    void CanSkipPreviousPropertyChanged();
    void CanRepeatPropertyChanged();
    void CanShufflePropertyChanged();
    void StreamIdPropertyChanged();
    void CanSeekPropertyChanged();
    void CanPausePropertyChanged();
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void ShufflePropertyChanged();
private:
    Action* iActionPlayAs;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionSkipNext;
    Action* iActionSkipPrevious;
    Action* iActionSetRepeat;
    Action* iActionSetShuffle;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionTransportState;
    Action* iActionModes;
    Action* iActionModeInfo;
    Action* iActionStreamInfo;
    Action* iActionStreamId;
    Action* iActionRepeat;
    Action* iActionShuffle;
    PropertyString* iModes;
    PropertyBool* iCanSkipNext;
    PropertyBool* iCanSkipPrevious;
    PropertyBool* iCanRepeat;
    PropertyBool* iCanShuffle;
    PropertyUint* iStreamId;
    PropertyBool* iCanSeek;
    PropertyBool* iCanPause;
    PropertyString* iTransportState;
    PropertyUint* iRepeat;
    PropertyUint* iShuffle;
    Functor iModesChanged;
    Functor iCanSkipNextChanged;
    Functor iCanSkipPreviousChanged;
    Functor iCanRepeatChanged;
    Functor iCanShuffleChanged;
    Functor iStreamIdChanged;
    Functor iCanSeekChanged;
    Functor iCanPauseChanged;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iShuffleChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGTRANSPORT1CPP

