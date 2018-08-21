#ifndef HEADER_LINNCOUKEXAKT21CPP
#define HEADER_LINNCOUKEXAKT21CPP

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
class ICpProxyLinnCoUkExakt21Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkExakt21Cpp() {}
    virtual void SyncGetDeviceList(std::string& aList) = 0;
    virtual void BeginGetDeviceList(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceList(IAsync& aAsync, std::string& aList) = 0;
    virtual void SyncGetDeviceSettings(const std::string& aDeviceId, std::string& aSettings) = 0;
    virtual void BeginGetDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceSettings(IAsync& aAsync, std::string& aSettings) = 0;
    virtual void SyncGetSettingsAvailable(bool& aSettingsAvailable) = 0;
    virtual void BeginGetSettingsAvailable(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable) = 0;
    virtual void SyncGetSettingsChangedSeq(std::string& aSettingsChangedSeq) = 0;
    virtual void BeginGetSettingsChangedSeq(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSettingsChangedSeq(IAsync& aAsync, std::string& aSettingsChangedSeq) = 0;
    virtual void SyncUpdate(const std::string& aManifest) = 0;
    virtual void BeginUpdate(const std::string& aManifest, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdate(IAsync& aAsync) = 0;
    virtual void SyncUpdateBlocking(const std::string& aManifest) = 0;
    virtual void BeginUpdateBlocking(const std::string& aManifest, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdateBlocking(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateStatus(std::string& aUpdateStatus) = 0;
    virtual void BeginGetUpdateStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus) = 0;
    virtual void SyncGetChannelMap(std::string& aChannelMap) = 0;
    virtual void BeginGetChannelMap(FunctorAsync& aFunctor) = 0;
    virtual void EndGetChannelMap(IAsync& aAsync, std::string& aChannelMap) = 0;
    virtual void SyncGetAudioChannels(std::string& aAudioChannels) = 0;
    virtual void BeginGetAudioChannels(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAudioChannels(IAsync& aAsync, std::string& aAudioChannels) = 0;
    virtual void SyncGetVersion(uint32_t& aVersion) = 0;
    virtual void BeginGetVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndGetVersion(IAsync& aAsync, uint32_t& aVersion) = 0;
    virtual void SyncApplyUpdate() = 0;
    virtual void BeginApplyUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndApplyUpdate(IAsync& aAsync) = 0;
    virtual void SyncPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata) = 0;
    virtual void BeginPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor) = 0;
    virtual void EndPlayTestTrack(IAsync& aAsync) = 0;
    virtual void SyncClearTestTrack() = 0;
    virtual void BeginClearTestTrack(FunctorAsync& aFunctor) = 0;
    virtual void EndClearTestTrack(IAsync& aAsync) = 0;
    virtual void SyncGetIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) = 0;
    virtual void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIntegratedDevicesPresent(IAsync& aAsync, bool& aIntegratedDevicesPresent) = 0;
    virtual void SyncBootIntegratedDevicesToFallback() = 0;
    virtual void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor) = 0;
    virtual void EndBootIntegratedDevicesToFallback(IAsync& aAsync) = 0;
    virtual void SetPropertyDeviceListChanged(Functor& aDeviceListChanged) = 0;
    virtual void PropertyDeviceList(std::string& aDeviceList) const = 0;
    virtual void SetPropertySettingsAvailableChanged(Functor& aSettingsAvailableChanged) = 0;
    virtual void PropertySettingsAvailable(bool& aSettingsAvailable) const = 0;
    virtual void SetPropertySettingsChangedSeqChanged(Functor& aSettingsChangedSeqChanged) = 0;
    virtual void PropertySettingsChangedSeq(std::string& aSettingsChangedSeq) const = 0;
    virtual void SetPropertyUpdateStatusChanged(Functor& aUpdateStatusChanged) = 0;
    virtual void PropertyUpdateStatus(std::string& aUpdateStatus) const = 0;
    virtual void SetPropertyChannelMapChanged(Functor& aChannelMapChanged) = 0;
    virtual void PropertyChannelMap(std::string& aChannelMap) const = 0;
    virtual void SetPropertyAudioChannelsChanged(Functor& aAudioChannelsChanged) = 0;
    virtual void PropertyAudioChannels(std::string& aAudioChannels) const = 0;
    virtual void SetPropertyVersionChanged(Functor& aVersionChanged) = 0;
    virtual void PropertyVersion(uint32_t& aVersion) const = 0;
    virtual void SetPropertyIntegratedDevicesPresentChanged(Functor& aIntegratedDevicesPresentChanged) = 0;
    virtual void PropertyIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) const = 0;
};

/**
 * Proxy for linn.co.uk:Exakt2:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkExakt21Cpp : public ICpProxyLinnCoUkExakt21Cpp
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
    CpProxyLinnCoUkExakt21Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkExakt21Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aList
     */
    void SyncGetDeviceList(std::string& aList);
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
    void EndGetDeviceList(IAsync& aAsync, std::string& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[out] aSettings
     */
    void SyncGetDeviceSettings(const std::string& aDeviceId, std::string& aSettings);
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
    void BeginGetDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettings
     */
    void EndGetDeviceSettings(IAsync& aAsync, std::string& aSettings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsAvailable
     */
    void SyncGetSettingsAvailable(bool& aSettingsAvailable);
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
    void EndGetSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsChangedSeq
     */
    void SyncGetSettingsChangedSeq(std::string& aSettingsChangedSeq);
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
    void EndGetSettingsChangedSeq(IAsync& aAsync, std::string& aSettingsChangedSeq);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aManifest
     */
    void SyncUpdate(const std::string& aManifest);
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
    void BeginUpdate(const std::string& aManifest, FunctorAsync& aFunctor);
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
    void SyncUpdateBlocking(const std::string& aManifest);
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
    void BeginUpdateBlocking(const std::string& aManifest, FunctorAsync& aFunctor);
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
    void SyncGetUpdateStatus(std::string& aUpdateStatus);
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
    void EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aChannelMap
     */
    void SyncGetChannelMap(std::string& aChannelMap);
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
    void EndGetChannelMap(IAsync& aAsync, std::string& aChannelMap);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAudioChannels
     */
    void SyncGetAudioChannels(std::string& aAudioChannels);
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
    void EndGetAudioChannels(IAsync& aAsync, std::string& aAudioChannels);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     */
    void SyncGetVersion(uint32_t& aVersion);
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
    void EndGetVersion(IAsync& aAsync, uint32_t& aVersion);

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
    void SyncPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata);
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
    void BeginPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor);
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
    void SyncGetIntegratedDevicesPresent(bool& aIntegratedDevicesPresent);
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
    void EndGetIntegratedDevicesPresent(IAsync& aAsync, bool& aIntegratedDevicesPresent);

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
     * Set a callback to be run when the DeviceList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsChangedSeq state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsChangedSeqChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelMap state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AudioChannels state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Version state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVersionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IntegratedDevicesPresent state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt21Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor);

    /**
     * Query the value of the DeviceList property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDeviceList
     */
    void PropertyDeviceList(std::string& aDeviceList) const;
    /**
     * Query the value of the SettingsAvailable property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSettingsAvailable
     */
    void PropertySettingsAvailable(bool& aSettingsAvailable) const;
    /**
     * Query the value of the SettingsChangedSeq property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSettingsChangedSeq
     */
    void PropertySettingsChangedSeq(std::string& aSettingsChangedSeq) const;
    /**
     * Query the value of the UpdateStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateStatus
     */
    void PropertyUpdateStatus(std::string& aUpdateStatus) const;
    /**
     * Query the value of the ChannelMap property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aChannelMap
     */
    void PropertyChannelMap(std::string& aChannelMap) const;
    /**
     * Query the value of the AudioChannels property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAudioChannels
     */
    void PropertyAudioChannels(std::string& aAudioChannels) const;
    /**
     * Query the value of the Version property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVersion
     */
    void PropertyVersion(uint32_t& aVersion) const;
    /**
     * Query the value of the IntegratedDevicesPresent property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIntegratedDevicesPresent
     */
    void PropertyIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) const;
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
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyString* iSettingsChangedSeq;
    PropertyString* iUpdateStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedSeqChanged;
    Functor iUpdateStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKEXAKT21CPP

