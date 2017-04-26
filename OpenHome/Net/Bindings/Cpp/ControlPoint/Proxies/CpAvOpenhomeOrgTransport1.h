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
    virtual void SyncNext() = 0;
    virtual void BeginNext(FunctorAsync& aFunctor) = 0;
    virtual void EndNext(IAsync& aAsync) = 0;
    virtual void SyncPrevious() = 0;
    virtual void BeginPrevious(FunctorAsync& aFunctor) = 0;
    virtual void EndPrevious(IAsync& aAsync) = 0;
    virtual void SyncSetRepeat(uint32_t aRepeat) = 0;
    virtual void BeginSetRepeat(uint32_t aRepeat, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRepeat(IAsync& aAsync) = 0;
    virtual void SyncSetShuffle(uint32_t aShuffle) = 0;
    virtual void BeginSetShuffle(uint32_t aShuffle, FunctorAsync& aFunctor) = 0;
    virtual void EndSetShuffle(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute) = 0;
    virtual void BeginSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondAbsolute(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondRelative(uint32_t aStreamId, int32_t aSecondsRelative) = 0;
    virtual void BeginSeekSecondRelative(uint32_t aStreamId, int32_t aSecondsRelative, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondRelative(IAsync& aAsync) = 0;
    virtual void SyncTransportState(std::string& aState) = 0;
    virtual void BeginTransportState(FunctorAsync& aFunctor) = 0;
    virtual void EndTransportState(IAsync& aAsync, std::string& aState) = 0;
    virtual void SyncModes(std::string& aModes) = 0;
    virtual void BeginModes(FunctorAsync& aFunctor) = 0;
    virtual void EndModes(IAsync& aAsync, std::string& aModes) = 0;
    virtual void SyncModeInfo(bool& aNextAvailable, bool& aPreviousAvailable, bool& aRepeatAvailable, bool& aShuffleAvailable) = 0;
    virtual void BeginModeInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndModeInfo(IAsync& aAsync, bool& aNextAvailable, bool& aPreviousAvailable, bool& aRepeatAvailable, bool& aShuffleAvailable) = 0;
    virtual void SyncStreamInfo(uint32_t& aStreamId, bool& aSeekable, bool& aPausable) = 0;
    virtual void BeginStreamInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aSeekable, bool& aPausable) = 0;
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
    virtual void SetPropertyNextAvailableChanged(Functor& aNextAvailableChanged) = 0;
    virtual void PropertyNextAvailable(bool& aNextAvailable) const = 0;
    virtual void SetPropertyPreviousAvailableChanged(Functor& aPreviousAvailableChanged) = 0;
    virtual void PropertyPreviousAvailable(bool& aPreviousAvailable) const = 0;
    virtual void SetPropertyRepeatAvailableChanged(Functor& aRepeatAvailableChanged) = 0;
    virtual void PropertyRepeatAvailable(bool& aRepeatAvailable) const = 0;
    virtual void SetPropertyShuffleAvailableChanged(Functor& aShuffleAvailableChanged) = 0;
    virtual void PropertyShuffleAvailable(bool& aShuffleAvailable) const = 0;
    virtual void SetPropertyStreamIdChanged(Functor& aStreamIdChanged) = 0;
    virtual void PropertyStreamId(uint32_t& aStreamId) const = 0;
    virtual void SetPropertySeekableChanged(Functor& aSeekableChanged) = 0;
    virtual void PropertySeekable(bool& aSeekable) const = 0;
    virtual void SetPropertyPausableChanged(Functor& aPausableChanged) = 0;
    virtual void PropertyPausable(bool& aPausable) const = 0;
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
    void SyncNext();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndNext().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginNext(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndNext(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncPrevious();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPrevious().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPrevious(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPrevious(IAsync& aAsync);

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
     * @param[in]  aSecondsAbsolute
     */
    void SyncSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondAbsolute().
     *
     * @param[in] aStreamId
     * @param[in] aSecondsAbsolute
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute, FunctorAsync& aFunctor);
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
     * @param[in]  aSecondsRelative
     */
    void SyncSeekSecondRelative(uint32_t aStreamId, int32_t aSecondsRelative);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondRelative().
     *
     * @param[in] aStreamId
     * @param[in] aSecondsRelative
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondRelative(uint32_t aStreamId, int32_t aSecondsRelative, FunctorAsync& aFunctor);
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
     * @param[out] aNextAvailable
     * @param[out] aPreviousAvailable
     * @param[out] aRepeatAvailable
     * @param[out] aShuffleAvailable
     */
    void SyncModeInfo(bool& aNextAvailable, bool& aPreviousAvailable, bool& aRepeatAvailable, bool& aShuffleAvailable);
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
     * @param[out] aNextAvailable
     * @param[out] aPreviousAvailable
     * @param[out] aRepeatAvailable
     * @param[out] aShuffleAvailable
     */
    void EndModeInfo(IAsync& aAsync, bool& aNextAvailable, bool& aPreviousAvailable, bool& aRepeatAvailable, bool& aShuffleAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStreamId
     * @param[out] aSeekable
     * @param[out] aPausable
     */
    void SyncStreamInfo(uint32_t& aStreamId, bool& aSeekable, bool& aPausable);
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
     * @param[out] aSeekable
     * @param[out] aPausable
     */
    void EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aSeekable, bool& aPausable);

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
     * Set a callback to be run when the NextAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNextAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PreviousAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPreviousAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RepeatAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ShuffleAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyShuffleAvailableChanged(Functor& aFunctor);
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
     * Set a callback to be run when the Seekable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySeekableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Pausable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPausableChanged(Functor& aFunctor);
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
     * Query the value of the NextAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNextAvailable
     */
    void PropertyNextAvailable(bool& aNextAvailable) const;
    /**
     * Query the value of the PreviousAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPreviousAvailable
     */
    void PropertyPreviousAvailable(bool& aPreviousAvailable) const;
    /**
     * Query the value of the RepeatAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeatAvailable
     */
    void PropertyRepeatAvailable(bool& aRepeatAvailable) const;
    /**
     * Query the value of the ShuffleAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aShuffleAvailable
     */
    void PropertyShuffleAvailable(bool& aShuffleAvailable) const;
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
     * Query the value of the Seekable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSeekable
     */
    void PropertySeekable(bool& aSeekable) const;
    /**
     * Query the value of the Pausable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPausable
     */
    void PropertyPausable(bool& aPausable) const;
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
    void NextAvailablePropertyChanged();
    void PreviousAvailablePropertyChanged();
    void RepeatAvailablePropertyChanged();
    void ShuffleAvailablePropertyChanged();
    void StreamIdPropertyChanged();
    void SeekablePropertyChanged();
    void PausablePropertyChanged();
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void ShufflePropertyChanged();
private:
    Action* iActionPlayAs;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
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
    PropertyBool* iNextAvailable;
    PropertyBool* iPreviousAvailable;
    PropertyBool* iRepeatAvailable;
    PropertyBool* iShuffleAvailable;
    PropertyUint* iStreamId;
    PropertyBool* iSeekable;
    PropertyBool* iPausable;
    PropertyString* iTransportState;
    PropertyUint* iRepeat;
    PropertyUint* iShuffle;
    Functor iModesChanged;
    Functor iNextAvailableChanged;
    Functor iPreviousAvailableChanged;
    Functor iRepeatAvailableChanged;
    Functor iShuffleAvailableChanged;
    Functor iStreamIdChanged;
    Functor iSeekableChanged;
    Functor iPausableChanged;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iShuffleChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGTRANSPORT1CPP

