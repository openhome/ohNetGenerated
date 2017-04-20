#ifndef HEADER_AVOPENHOMEORGTRANSPORT1
#define HEADER_AVOPENHOMEORGTRANSPORT1

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
class ICpProxyAvOpenhomeOrgTransport1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgTransport1() {}
    virtual void SyncPlayAs(const Brx& aMode, const Brx& aCommand) = 0;
    virtual void BeginPlayAs(const Brx& aMode, const Brx& aCommand, FunctorAsync& aFunctor) = 0;
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
    virtual void SyncNext(TUint aStreamId) = 0;
    virtual void BeginNext(TUint aStreamId, FunctorAsync& aFunctor) = 0;
    virtual void EndNext(IAsync& aAsync) = 0;
    virtual void SyncPrev(TUint aStreamId) = 0;
    virtual void BeginPrev(TUint aStreamId, FunctorAsync& aFunctor) = 0;
    virtual void EndPrev(IAsync& aAsync) = 0;
    virtual void SyncSetRepeat(TBool aRepeat) = 0;
    virtual void BeginSetRepeat(TBool aRepeat, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRepeat(IAsync& aAsync) = 0;
    virtual void SyncSetRandom(TBool aRandom) = 0;
    virtual void BeginSetRandom(TBool aRandom, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRandom(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute) = 0;
    virtual void BeginSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondsAbsolute(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative) = 0;
    virtual void BeginSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondsRelative(IAsync& aAsync) = 0;
    virtual void SyncTransportState(Brh& aState) = 0;
    virtual void BeginTransportState(FunctorAsync& aFunctor) = 0;
    virtual void EndTransportState(IAsync& aAsync, Brh& aState) = 0;
    virtual void SyncModes(Brh& aModes) = 0;
    virtual void BeginModes(FunctorAsync& aFunctor) = 0;
    virtual void EndModes(IAsync& aAsync, Brh& aModes) = 0;
    virtual void SyncModeInfo(TBool& aNextAvailable, TBool& aPrevAvailable, TBool& aRepeatAvailable, TBool& aRandomAvailable) = 0;
    virtual void BeginModeInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPrevAvailable, TBool& aRepeatAvailable, TBool& aRandomAvailable) = 0;
    virtual void SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable) = 0;
    virtual void BeginStreamInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable) = 0;
    virtual void SyncStreamId(TUint& aStreamId) = 0;
    virtual void BeginStreamId(FunctorAsync& aFunctor) = 0;
    virtual void EndStreamId(IAsync& aAsync, TUint& aStreamId) = 0;
    virtual void SyncRepeat(TBool& aRepeat) = 0;
    virtual void BeginRepeat(FunctorAsync& aFunctor) = 0;
    virtual void EndRepeat(IAsync& aAsync, TBool& aRepeat) = 0;
    virtual void SyncRandom(TBool& aRandom) = 0;
    virtual void BeginRandom(FunctorAsync& aFunctor) = 0;
    virtual void EndRandom(IAsync& aAsync, TBool& aRandom) = 0;
    virtual void SetPropertyModesChanged(Functor& aModesChanged) = 0;
    virtual void PropertyModes(Brhz& aModes) const = 0;
    virtual void SetPropertyNextAvailableChanged(Functor& aNextAvailableChanged) = 0;
    virtual void PropertyNextAvailable(TBool& aNextAvailable) const = 0;
    virtual void SetPropertyPrevAvailableChanged(Functor& aPrevAvailableChanged) = 0;
    virtual void PropertyPrevAvailable(TBool& aPrevAvailable) const = 0;
    virtual void SetPropertyRepeatAvailableChanged(Functor& aRepeatAvailableChanged) = 0;
    virtual void PropertyRepeatAvailable(TBool& aRepeatAvailable) const = 0;
    virtual void SetPropertyRandomAvailableChanged(Functor& aRandomAvailableChanged) = 0;
    virtual void PropertyRandomAvailable(TBool& aRandomAvailable) const = 0;
    virtual void SetPropertyStreamIdChanged(Functor& aStreamIdChanged) = 0;
    virtual void PropertyStreamId(TUint& aStreamId) const = 0;
    virtual void SetPropertySeekableChanged(Functor& aSeekableChanged) = 0;
    virtual void PropertySeekable(TBool& aSeekable) const = 0;
    virtual void SetPropertyPausableChanged(Functor& aPausableChanged) = 0;
    virtual void PropertyPausable(TBool& aPausable) const = 0;
    virtual void SetPropertyTransportStateChanged(Functor& aTransportStateChanged) = 0;
    virtual void PropertyTransportState(Brhz& aTransportState) const = 0;
    virtual void SetPropertyRepeatChanged(Functor& aRepeatChanged) = 0;
    virtual void PropertyRepeat(TBool& aRepeat) const = 0;
    virtual void SetPropertyRandomChanged(Functor& aRandomChanged) = 0;
    virtual void PropertyRandom(TBool& aRandom) const = 0;
};

/**
 * Proxy for av.openhome.org:Transport:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgTransport1 : public ICpProxyAvOpenhomeOrgTransport1
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
    CpProxyAvOpenhomeOrgTransport1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgTransport1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aMode
     * @param[in]  aCommand
     */
    void SyncPlayAs(const Brx& aMode, const Brx& aCommand);
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
    void BeginPlayAs(const Brx& aMode, const Brx& aCommand, FunctorAsync& aFunctor);
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
     *
     * @param[in]  aStreamId
     */
    void SyncNext(TUint aStreamId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndNext().
     *
     * @param[in] aStreamId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginNext(TUint aStreamId, FunctorAsync& aFunctor);
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
     *
     * @param[in]  aStreamId
     */
    void SyncPrev(TUint aStreamId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPrev().
     *
     * @param[in] aStreamId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPrev(TUint aStreamId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPrev(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRepeat
     */
    void SyncSetRepeat(TBool aRepeat);
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
    void BeginSetRepeat(TBool aRepeat, FunctorAsync& aFunctor);
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
     * @param[in]  aRandom
     */
    void SyncSetRandom(TBool aRandom);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRandom().
     *
     * @param[in] aRandom
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRandom(TBool aRandom, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRandom(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStreamId
     * @param[in]  aSecondsAbsolute
     */
    void SyncSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondsAbsolute().
     *
     * @param[in] aStreamId
     * @param[in] aSecondsAbsolute
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeekSecondsAbsolute(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aStreamId
     * @param[in]  aSecondsRelative
     */
    void SyncSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondsRelative().
     *
     * @param[in] aStreamId
     * @param[in] aSecondsRelative
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeekSecondsRelative(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aState
     */
    void SyncTransportState(Brh& aState);
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
    void EndTransportState(IAsync& aAsync, Brh& aState);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aModes
     */
    void SyncModes(Brh& aModes);
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
    void EndModes(IAsync& aAsync, Brh& aModes);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aNextAvailable
     * @param[out] aPrevAvailable
     * @param[out] aRepeatAvailable
     * @param[out] aRandomAvailable
     */
    void SyncModeInfo(TBool& aNextAvailable, TBool& aPrevAvailable, TBool& aRepeatAvailable, TBool& aRandomAvailable);
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
     * @param[out] aPrevAvailable
     * @param[out] aRepeatAvailable
     * @param[out] aRandomAvailable
     */
    void EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPrevAvailable, TBool& aRepeatAvailable, TBool& aRandomAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStreamId
     * @param[out] aSeekable
     * @param[out] aPausable
     */
    void SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable);
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
    void EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStreamId
     */
    void SyncStreamId(TUint& aStreamId);
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
    void EndStreamId(IAsync& aAsync, TUint& aStreamId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRepeat
     */
    void SyncRepeat(TBool& aRepeat);
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
    void EndRepeat(IAsync& aAsync, TBool& aRepeat);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRandom
     */
    void SyncRandom(TBool& aRandom);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRandom().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRandom(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRandom
     */
    void EndRandom(IAsync& aAsync, TBool& aRandom);

    /**
     * Set a callback to be run when the Modes state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyModesChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the NextAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNextAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PrevAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPrevAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RepeatAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the RandomAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRandomAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the StreamId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStreamIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Seekable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySeekableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Pausable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPausableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TransportState state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Repeat state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRepeatChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Random state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyRandomChanged(Functor& aFunctor);

    /**
     * Query the value of the Modes property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aModes
     */
    void PropertyModes(Brhz& aModes) const;
    /**
     * Query the value of the NextAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aNextAvailable
     */
    void PropertyNextAvailable(TBool& aNextAvailable) const;
    /**
     * Query the value of the PrevAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPrevAvailable
     */
    void PropertyPrevAvailable(TBool& aPrevAvailable) const;
    /**
     * Query the value of the RepeatAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeatAvailable
     */
    void PropertyRepeatAvailable(TBool& aRepeatAvailable) const;
    /**
     * Query the value of the RandomAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRandomAvailable
     */
    void PropertyRandomAvailable(TBool& aRandomAvailable) const;
    /**
     * Query the value of the StreamId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStreamId
     */
    void PropertyStreamId(TUint& aStreamId) const;
    /**
     * Query the value of the Seekable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSeekable
     */
    void PropertySeekable(TBool& aSeekable) const;
    /**
     * Query the value of the Pausable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPausable
     */
    void PropertyPausable(TBool& aPausable) const;
    /**
     * Query the value of the TransportState property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTransportState
     */
    void PropertyTransportState(Brhz& aTransportState) const;
    /**
     * Query the value of the Repeat property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRepeat
     */
    void PropertyRepeat(TBool& aRepeat) const;
    /**
     * Query the value of the Random property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aRandom
     */
    void PropertyRandom(TBool& aRandom) const;
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
    void PrevAvailablePropertyChanged();
    void RepeatAvailablePropertyChanged();
    void RandomAvailablePropertyChanged();
    void StreamIdPropertyChanged();
    void SeekablePropertyChanged();
    void PausablePropertyChanged();
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void RandomPropertyChanged();
private:
    Action* iActionPlayAs;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrev;
    Action* iActionSetRepeat;
    Action* iActionSetRandom;
    Action* iActionSeekSecondsAbsolute;
    Action* iActionSeekSecondsRelative;
    Action* iActionTransportState;
    Action* iActionModes;
    Action* iActionModeInfo;
    Action* iActionStreamInfo;
    Action* iActionStreamId;
    Action* iActionRepeat;
    Action* iActionRandom;
    PropertyString* iModes;
    PropertyBool* iNextAvailable;
    PropertyBool* iPrevAvailable;
    PropertyBool* iRepeatAvailable;
    PropertyBool* iRandomAvailable;
    PropertyUint* iStreamId;
    PropertyBool* iSeekable;
    PropertyBool* iPausable;
    PropertyString* iTransportState;
    PropertyBool* iRepeat;
    PropertyBool* iRandom;
    Functor iModesChanged;
    Functor iNextAvailableChanged;
    Functor iPrevAvailableChanged;
    Functor iRepeatAvailableChanged;
    Functor iRandomAvailableChanged;
    Functor iStreamIdChanged;
    Functor iSeekableChanged;
    Functor iPausableChanged;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iRandomChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGTRANSPORT1

