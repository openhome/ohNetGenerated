#ifndef HEADER_LINNCOUKEXAKT22
#define HEADER_LINNCOUKEXAKT22

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
class ICpProxyLinnCoUkExakt22 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkExakt22() {}
    virtual void SyncGetDeviceList(Brh& aList) = 0;
    virtual void BeginGetDeviceList(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceList(IAsync& aAsync, Brh& aList) = 0;
    virtual void SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings) = 0;
    virtual void BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings) = 0;
    virtual void SyncGetSettingsAvailable(TBool& aSettingsAvailable) = 0;
    virtual void BeginGetSettingsAvailable(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable) = 0;
    virtual void SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq) = 0;
    virtual void BeginGetSettingsChangedSeq(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq) = 0;
    virtual void SyncUpdate(const Brx& aManifest) = 0;
    virtual void BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdate(IAsync& aAsync) = 0;
    virtual void SyncUpdateBlocking(const Brx& aManifest) = 0;
    virtual void BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdateBlocking(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateStatus(Brh& aUpdateStatus) = 0;
    virtual void BeginGetUpdateStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus) = 0;
    virtual void SyncGetChannelMap(Brh& aChannelMap) = 0;
    virtual void BeginGetChannelMap(FunctorAsync& aFunctor) = 0;
    virtual void EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap) = 0;
    virtual void SyncGetAudioChannels(Brh& aAudioChannels) = 0;
    virtual void BeginGetAudioChannels(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels) = 0;
    virtual void SyncGetVersion(TUint& aVersion) = 0;
    virtual void BeginGetVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndGetVersion(IAsync& aAsync, TUint& aVersion) = 0;
    virtual void SyncApplyUpdate() = 0;
    virtual void BeginApplyUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndApplyUpdate(IAsync& aAsync) = 0;
    virtual void SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata) = 0;
    virtual void BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor) = 0;
    virtual void EndPlayTestTrack(IAsync& aAsync) = 0;
    virtual void SyncClearTestTrack() = 0;
    virtual void BeginClearTestTrack(FunctorAsync& aFunctor) = 0;
    virtual void EndClearTestTrack(IAsync& aAsync) = 0;
    virtual void SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) = 0;
    virtual void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent) = 0;
    virtual void SyncBootIntegratedDevicesToFallback() = 0;
    virtual void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor) = 0;
    virtual void EndBootIntegratedDevicesToFallback(IAsync& aAsync) = 0;
    virtual void SyncGetTestTrackPlaying(TBool& aTestTrackPlaying) = 0;
    virtual void BeginGetTestTrackPlaying(FunctorAsync& aFunctor) = 0;
    virtual void EndGetTestTrackPlaying(IAsync& aAsync, TBool& aTestTrackPlaying) = 0;
    virtual void SetPropertyDeviceListChanged(Functor& aDeviceListChanged) = 0;
    virtual void PropertyDeviceList(Brhz& aDeviceList) const = 0;
    virtual void SetPropertySettingsAvailableChanged(Functor& aSettingsAvailableChanged) = 0;
    virtual void PropertySettingsAvailable(TBool& aSettingsAvailable) const = 0;
    virtual void SetPropertySettingsChangedSeqChanged(Functor& aSettingsChangedSeqChanged) = 0;
    virtual void PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const = 0;
    virtual void SetPropertyUpdateStatusChanged(Functor& aUpdateStatusChanged) = 0;
    virtual void PropertyUpdateStatus(Brhz& aUpdateStatus) const = 0;
    virtual void SetPropertyChannelMapChanged(Functor& aChannelMapChanged) = 0;
    virtual void PropertyChannelMap(Brhz& aChannelMap) const = 0;
    virtual void SetPropertyAudioChannelsChanged(Functor& aAudioChannelsChanged) = 0;
    virtual void PropertyAudioChannels(Brhz& aAudioChannels) const = 0;
    virtual void SetPropertyVersionChanged(Functor& aVersionChanged) = 0;
    virtual void PropertyVersion(TUint& aVersion) const = 0;
    virtual void SetPropertyIntegratedDevicesPresentChanged(Functor& aIntegratedDevicesPresentChanged) = 0;
    virtual void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const = 0;
    virtual void SetPropertyTestTrackPlayingChanged(Functor& aTestTrackPlayingChanged) = 0;
    virtual void PropertyTestTrackPlaying(TBool& aTestTrackPlaying) const = 0;
};

/**
 * Proxy for linn.co.uk:Exakt2:2
 * @ingroup Proxies
 */
class CpProxyLinnCoUkExakt22 : public ICpProxyLinnCoUkExakt22
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
    CpProxyLinnCoUkExakt22(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkExakt22();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aList
     */
    void SyncGetDeviceList(Brh& aList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDeviceList().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDeviceList(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aList
     */
    void EndGetDeviceList(IAsync& aAsync, Brh& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[out] aSettings
     */
    void SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDeviceSettings().
     *
     * @param[in] aDeviceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettings
     */
    void EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsAvailable
     */
    void SyncGetSettingsAvailable(TBool& aSettingsAvailable);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSettingsAvailable().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSettingsAvailable(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettingsAvailable
     */
    void EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsChangedSeq
     */
    void SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSettingsChangedSeq().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSettingsChangedSeq(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettingsChangedSeq
     */
    void EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aManifest
     */
    void SyncUpdate(const Brx& aManifest);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUpdate().
     *
     * @param[in] aManifest
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndUpdate(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aManifest
     */
    void SyncUpdateBlocking(const Brx& aManifest);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUpdateBlocking().
     *
     * @param[in] aManifest
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndUpdateBlocking(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUpdateStatus
     */
    void SyncGetUpdateStatus(Brh& aUpdateStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpdateStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpdateStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUpdateStatus
     */
    void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aChannelMap
     */
    void SyncGetChannelMap(Brh& aChannelMap);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetChannelMap().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetChannelMap(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aChannelMap
     */
    void EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAudioChannels
     */
    void SyncGetAudioChannels(Brh& aAudioChannels);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAudioChannels().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAudioChannels(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAudioChannels
     */
    void EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     */
    void SyncGetVersion(TUint& aVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVersion
     */
    void EndGetVersion(IAsync& aAsync, TUint& aVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncApplyUpdate();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndApplyUpdate().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginApplyUpdate(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndApplyUpdate(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannelMap
     * @param[in]  aUri
     * @param[in]  aMetadata
     */
    void SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlayTestTrack().
     *
     * @param[in] aChannelMap
     * @param[in] aUri
     * @param[in] aMetadata
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlayTestTrack(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncClearTestTrack();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearTestTrack().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearTestTrack(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearTestTrack(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aIntegratedDevicesPresent
     */
    void SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetIntegratedDevicesPresent().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aIntegratedDevicesPresent
     */
    void EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncBootIntegratedDevicesToFallback();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBootIntegratedDevicesToFallback().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndBootIntegratedDevicesToFallback(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aTestTrackPlaying
     */
    void SyncGetTestTrackPlaying(TBool& aTestTrackPlaying);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTestTrackPlaying().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTestTrackPlaying(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTestTrackPlaying
     */
    void EndGetTestTrackPlaying(IAsync& aAsync, TBool& aTestTrackPlaying);

    /**
     * Set a callback to be run when the DeviceList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsChangedSeq state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsChangedSeqChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelMap state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AudioChannels state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Version state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVersionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IntegratedDevicesPresent state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TestTrackPlaying state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt22 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTestTrackPlayingChanged(Functor& aFunctor);

    /**
     * Query the value of the DeviceList property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDeviceList
     */
    void PropertyDeviceList(Brhz& aDeviceList) const;
    /**
     * Query the value of the SettingsAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSettingsAvailable
     */
    void PropertySettingsAvailable(TBool& aSettingsAvailable) const;
    /**
     * Query the value of the SettingsChangedSeq property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSettingsChangedSeq
     */
    void PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const;
    /**
     * Query the value of the UpdateStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateStatus
     */
    void PropertyUpdateStatus(Brhz& aUpdateStatus) const;
    /**
     * Query the value of the ChannelMap property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aChannelMap
     */
    void PropertyChannelMap(Brhz& aChannelMap) const;
    /**
     * Query the value of the AudioChannels property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAudioChannels
     */
    void PropertyAudioChannels(Brhz& aAudioChannels) const;
    /**
     * Query the value of the Version property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVersion
     */
    void PropertyVersion(TUint& aVersion) const;
    /**
     * Query the value of the IntegratedDevicesPresent property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIntegratedDevicesPresent
     */
    void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const;
    /**
     * Query the value of the TestTrackPlaying property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTestTrackPlaying
     */
    void PropertyTestTrackPlaying(TBool& aTestTrackPlaying) const;
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
    void DeviceListPropertyChanged();
    void SettingsAvailablePropertyChanged();
    void SettingsChangedSeqPropertyChanged();
    void UpdateStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
    void IntegratedDevicesPresentPropertyChanged();
    void TestTrackPlayingPropertyChanged();
private:
    Action* iActionGetDeviceList;
    Action* iActionGetDeviceSettings;
    Action* iActionGetSettingsAvailable;
    Action* iActionGetSettingsChangedSeq;
    Action* iActionUpdate;
    Action* iActionUpdateBlocking;
    Action* iActionGetUpdateStatus;
    Action* iActionGetChannelMap;
    Action* iActionGetAudioChannels;
    Action* iActionGetVersion;
    Action* iActionApplyUpdate;
    Action* iActionPlayTestTrack;
    Action* iActionClearTestTrack;
    Action* iActionGetIntegratedDevicesPresent;
    Action* iActionBootIntegratedDevicesToFallback;
    Action* iActionGetTestTrackPlaying;
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyString* iSettingsChangedSeq;
    PropertyString* iUpdateStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    PropertyBool* iTestTrackPlaying;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedSeqChanged;
    Functor iUpdateStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
    Functor iTestTrackPlayingChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKEXAKT22

