#ifndef HEADER_UPNPORGAVTRANSPORT1
#define HEADER_UPNPORGAVTRANSPORT1

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
class ICpProxyUpnpOrgAVTransport1 : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgAVTransport1() {}
    virtual void SyncSetAVTransportURI(TUint aInstanceID, const Brx& aCurrentURI, const Brx& aCurrentURIMetaData) = 0;
    virtual void BeginSetAVTransportURI(TUint aInstanceID, const Brx& aCurrentURI, const Brx& aCurrentURIMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAVTransportURI(IAsync& aAsync) = 0;
    virtual void SyncSetNextAVTransportURI(TUint aInstanceID, const Brx& aNextURI, const Brx& aNextURIMetaData) = 0;
    virtual void BeginSetNextAVTransportURI(TUint aInstanceID, const Brx& aNextURI, const Brx& aNextURIMetaData, FunctorAsync& aFunctor) = 0;
    virtual void EndSetNextAVTransportURI(IAsync& aAsync) = 0;
    virtual void SyncGetMediaInfo(TUint aInstanceID, TUint& aNrTracks, Brh& aMediaDuration, Brh& aCurrentURI, Brh& aCurrentURIMetaData, Brh& aNextURI, Brh& aNextURIMetaData, Brh& aPlayMedium, Brh& aRecordMedium, Brh& aWriteStatus) = 0;
    virtual void BeginGetMediaInfo(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetMediaInfo(IAsync& aAsync, TUint& aNrTracks, Brh& aMediaDuration, Brh& aCurrentURI, Brh& aCurrentURIMetaData, Brh& aNextURI, Brh& aNextURIMetaData, Brh& aPlayMedium, Brh& aRecordMedium, Brh& aWriteStatus) = 0;
    virtual void SyncGetTransportInfo(TUint aInstanceID, Brh& aCurrentTransportState, Brh& aCurrentTransportStatus, Brh& aCurrentSpeed) = 0;
    virtual void BeginGetTransportInfo(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetTransportInfo(IAsync& aAsync, Brh& aCurrentTransportState, Brh& aCurrentTransportStatus, Brh& aCurrentSpeed) = 0;
    virtual void SyncGetPositionInfo(TUint aInstanceID, TUint& aTrack, Brh& aTrackDuration, Brh& aTrackMetaData, Brh& aTrackURI, Brh& aRelTime, Brh& aAbsTime, TInt& aRelCount, TInt& aAbsCount) = 0;
    virtual void BeginGetPositionInfo(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetPositionInfo(IAsync& aAsync, TUint& aTrack, Brh& aTrackDuration, Brh& aTrackMetaData, Brh& aTrackURI, Brh& aRelTime, Brh& aAbsTime, TInt& aRelCount, TInt& aAbsCount) = 0;
    virtual void SyncGetDeviceCapabilities(TUint aInstanceID, Brh& aPlayMedia, Brh& aRecMedia, Brh& aRecQualityModes) = 0;
    virtual void BeginGetDeviceCapabilities(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceCapabilities(IAsync& aAsync, Brh& aPlayMedia, Brh& aRecMedia, Brh& aRecQualityModes) = 0;
    virtual void SyncGetTransportSettings(TUint aInstanceID, Brh& aPlayMode, Brh& aRecQualityMode) = 0;
    virtual void BeginGetTransportSettings(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetTransportSettings(IAsync& aAsync, Brh& aPlayMode, Brh& aRecQualityMode) = 0;
    virtual void SyncStop(TUint aInstanceID) = 0;
    virtual void BeginStop(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndStop(IAsync& aAsync) = 0;
    virtual void SyncPlay(TUint aInstanceID, const Brx& aSpeed) = 0;
    virtual void BeginPlay(TUint aInstanceID, const Brx& aSpeed, FunctorAsync& aFunctor) = 0;
    virtual void EndPlay(IAsync& aAsync) = 0;
    virtual void SyncPause(TUint aInstanceID) = 0;
    virtual void BeginPause(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndPause(IAsync& aAsync) = 0;
    virtual void SyncRecord(TUint aInstanceID) = 0;
    virtual void BeginRecord(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndRecord(IAsync& aAsync) = 0;
    virtual void SyncSeek(TUint aInstanceID, const Brx& aUnit, const Brx& aTarget) = 0;
    virtual void BeginSeek(TUint aInstanceID, const Brx& aUnit, const Brx& aTarget, FunctorAsync& aFunctor) = 0;
    virtual void EndSeek(IAsync& aAsync) = 0;
    virtual void SyncNext(TUint aInstanceID) = 0;
    virtual void BeginNext(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndNext(IAsync& aAsync) = 0;
    virtual void SyncPrevious(TUint aInstanceID) = 0;
    virtual void BeginPrevious(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndPrevious(IAsync& aAsync) = 0;
    virtual void SyncSetPlayMode(TUint aInstanceID, const Brx& aNewPlayMode) = 0;
    virtual void BeginSetPlayMode(TUint aInstanceID, const Brx& aNewPlayMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPlayMode(IAsync& aAsync) = 0;
    virtual void SyncSetRecordQualityMode(TUint aInstanceID, const Brx& aNewRecordQualityMode) = 0;
    virtual void BeginSetRecordQualityMode(TUint aInstanceID, const Brx& aNewRecordQualityMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetRecordQualityMode(IAsync& aAsync) = 0;
    virtual void SyncGetCurrentTransportActions(TUint aInstanceID, Brh& aActions) = 0;
    virtual void BeginGetCurrentTransportActions(TUint aInstanceID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetCurrentTransportActions(IAsync& aAsync, Brh& aActions) = 0;
    virtual void SetPropertyLastChangeChanged(Functor& aLastChangeChanged) = 0;
    virtual void PropertyLastChange(Brhz& aLastChange) const = 0;
};

/**
 * Proxy for upnp.org:AVTransport:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgAVTransport1 : public ICpProxyUpnpOrgAVTransport1
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
    CpProxyUpnpOrgAVTransport1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgAVTransport1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aCurrentURI
     * @param[in]  aCurrentURIMetaData
     */
    void SyncSetAVTransportURI(TUint aInstanceID, const Brx& aCurrentURI, const Brx& aCurrentURIMetaData);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAVTransportURI().
     *
     * @param[in] aInstanceID
     * @param[in] aCurrentURI
     * @param[in] aCurrentURIMetaData
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAVTransportURI(TUint aInstanceID, const Brx& aCurrentURI, const Brx& aCurrentURIMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAVTransportURI(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aNextURI
     * @param[in]  aNextURIMetaData
     */
    void SyncSetNextAVTransportURI(TUint aInstanceID, const Brx& aNextURI, const Brx& aNextURIMetaData);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetNextAVTransportURI().
     *
     * @param[in] aInstanceID
     * @param[in] aNextURI
     * @param[in] aNextURIMetaData
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetNextAVTransportURI(TUint aInstanceID, const Brx& aNextURI, const Brx& aNextURIMetaData, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetNextAVTransportURI(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aNrTracks
     * @param[out] aMediaDuration
     * @param[out] aCurrentURI
     * @param[out] aCurrentURIMetaData
     * @param[out] aNextURI
     * @param[out] aNextURIMetaData
     * @param[out] aPlayMedium
     * @param[out] aRecordMedium
     * @param[out] aWriteStatus
     */
    void SyncGetMediaInfo(TUint aInstanceID, TUint& aNrTracks, Brh& aMediaDuration, Brh& aCurrentURI, Brh& aCurrentURIMetaData, Brh& aNextURI, Brh& aNextURIMetaData, Brh& aPlayMedium, Brh& aRecordMedium, Brh& aWriteStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetMediaInfo().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetMediaInfo(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNrTracks
     * @param[out] aMediaDuration
     * @param[out] aCurrentURI
     * @param[out] aCurrentURIMetaData
     * @param[out] aNextURI
     * @param[out] aNextURIMetaData
     * @param[out] aPlayMedium
     * @param[out] aRecordMedium
     * @param[out] aWriteStatus
     */
    void EndGetMediaInfo(IAsync& aAsync, TUint& aNrTracks, Brh& aMediaDuration, Brh& aCurrentURI, Brh& aCurrentURIMetaData, Brh& aNextURI, Brh& aNextURIMetaData, Brh& aPlayMedium, Brh& aRecordMedium, Brh& aWriteStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aCurrentTransportState
     * @param[out] aCurrentTransportStatus
     * @param[out] aCurrentSpeed
     */
    void SyncGetTransportInfo(TUint aInstanceID, Brh& aCurrentTransportState, Brh& aCurrentTransportStatus, Brh& aCurrentSpeed);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTransportInfo().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTransportInfo(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCurrentTransportState
     * @param[out] aCurrentTransportStatus
     * @param[out] aCurrentSpeed
     */
    void EndGetTransportInfo(IAsync& aAsync, Brh& aCurrentTransportState, Brh& aCurrentTransportStatus, Brh& aCurrentSpeed);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aTrack
     * @param[out] aTrackDuration
     * @param[out] aTrackMetaData
     * @param[out] aTrackURI
     * @param[out] aRelTime
     * @param[out] aAbsTime
     * @param[out] aRelCount
     * @param[out] aAbsCount
     */
    void SyncGetPositionInfo(TUint aInstanceID, TUint& aTrack, Brh& aTrackDuration, Brh& aTrackMetaData, Brh& aTrackURI, Brh& aRelTime, Brh& aAbsTime, TInt& aRelCount, TInt& aAbsCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPositionInfo().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPositionInfo(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTrack
     * @param[out] aTrackDuration
     * @param[out] aTrackMetaData
     * @param[out] aTrackURI
     * @param[out] aRelTime
     * @param[out] aAbsTime
     * @param[out] aRelCount
     * @param[out] aAbsCount
     */
    void EndGetPositionInfo(IAsync& aAsync, TUint& aTrack, Brh& aTrackDuration, Brh& aTrackMetaData, Brh& aTrackURI, Brh& aRelTime, Brh& aAbsTime, TInt& aRelCount, TInt& aAbsCount);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aPlayMedia
     * @param[out] aRecMedia
     * @param[out] aRecQualityModes
     */
    void SyncGetDeviceCapabilities(TUint aInstanceID, Brh& aPlayMedia, Brh& aRecMedia, Brh& aRecQualityModes);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDeviceCapabilities().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDeviceCapabilities(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPlayMedia
     * @param[out] aRecMedia
     * @param[out] aRecQualityModes
     */
    void EndGetDeviceCapabilities(IAsync& aAsync, Brh& aPlayMedia, Brh& aRecMedia, Brh& aRecQualityModes);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aPlayMode
     * @param[out] aRecQualityMode
     */
    void SyncGetTransportSettings(TUint aInstanceID, Brh& aPlayMode, Brh& aRecQualityMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTransportSettings().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTransportSettings(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPlayMode
     * @param[out] aRecQualityMode
     */
    void EndGetTransportSettings(IAsync& aAsync, Brh& aPlayMode, Brh& aRecQualityMode);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     */
    void SyncStop(TUint aInstanceID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStop().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStop(TUint aInstanceID, FunctorAsync& aFunctor);
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
     * @param[in]  aInstanceID
     * @param[in]  aSpeed
     */
    void SyncPlay(TUint aInstanceID, const Brx& aSpeed);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlay().
     *
     * @param[in] aInstanceID
     * @param[in] aSpeed
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlay(TUint aInstanceID, const Brx& aSpeed, FunctorAsync& aFunctor);
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
     *
     * @param[in]  aInstanceID
     */
    void SyncPause(TUint aInstanceID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPause().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPause(TUint aInstanceID, FunctorAsync& aFunctor);
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
     *
     * @param[in]  aInstanceID
     */
    void SyncRecord(TUint aInstanceID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRecord().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRecord(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndRecord(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aUnit
     * @param[in]  aTarget
     */
    void SyncSeek(TUint aInstanceID, const Brx& aUnit, const Brx& aTarget);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeek().
     *
     * @param[in] aInstanceID
     * @param[in] aUnit
     * @param[in] aTarget
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeek(TUint aInstanceID, const Brx& aUnit, const Brx& aTarget, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSeek(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     */
    void SyncNext(TUint aInstanceID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndNext().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginNext(TUint aInstanceID, FunctorAsync& aFunctor);
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
     * @param[in]  aInstanceID
     */
    void SyncPrevious(TUint aInstanceID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPrevious().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPrevious(TUint aInstanceID, FunctorAsync& aFunctor);
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
     * @param[in]  aInstanceID
     * @param[in]  aNewPlayMode
     */
    void SyncSetPlayMode(TUint aInstanceID, const Brx& aNewPlayMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetPlayMode().
     *
     * @param[in] aInstanceID
     * @param[in] aNewPlayMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetPlayMode(TUint aInstanceID, const Brx& aNewPlayMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetPlayMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[in]  aNewRecordQualityMode
     */
    void SyncSetRecordQualityMode(TUint aInstanceID, const Brx& aNewRecordQualityMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetRecordQualityMode().
     *
     * @param[in] aInstanceID
     * @param[in] aNewRecordQualityMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetRecordQualityMode(TUint aInstanceID, const Brx& aNewRecordQualityMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetRecordQualityMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInstanceID
     * @param[out] aActions
     */
    void SyncGetCurrentTransportActions(TUint aInstanceID, Brh& aActions);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetCurrentTransportActions().
     *
     * @param[in] aInstanceID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetCurrentTransportActions(TUint aInstanceID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aActions
     */
    void EndGetCurrentTransportActions(IAsync& aAsync, Brh& aActions);

    /**
     * Set a callback to be run when the LastChange state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgAVTransport1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyLastChangeChanged(Functor& aFunctor);

    /**
     * Query the value of the LastChange property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aLastChange
     */
    void PropertyLastChange(Brhz& aLastChange) const;
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
    void LastChangePropertyChanged();
private:
    Action* iActionSetAVTransportURI;
    Action* iActionSetNextAVTransportURI;
    Action* iActionGetMediaInfo;
    Action* iActionGetTransportInfo;
    Action* iActionGetPositionInfo;
    Action* iActionGetDeviceCapabilities;
    Action* iActionGetTransportSettings;
    Action* iActionStop;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionRecord;
    Action* iActionSeek;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSetPlayMode;
    Action* iActionSetRecordQualityMode;
    Action* iActionGetCurrentTransportActions;
    PropertyString* iLastChange;
    Functor iLastChangeChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_UPNPORGAVTRANSPORT1

