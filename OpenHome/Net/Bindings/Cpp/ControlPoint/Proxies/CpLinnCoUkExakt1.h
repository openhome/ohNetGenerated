#ifndef HEADER_LINNCOUKEXAKT1CPP
#define HEADER_LINNCOUKEXAKT1CPP

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
class ICpProxyLinnCoUkExakt1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkExakt1Cpp() {}
    virtual void SyncDeviceList(std::string& aList) = 0;
    virtual void BeginDeviceList(FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceList(IAsync& aAsync, std::string& aList) = 0;
    virtual void SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings) = 0;
    virtual void BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceSettings(IAsync& aAsync, std::string& aSettings) = 0;
    virtual void SyncSettingsAvailable(bool& aSettingsAvailable) = 0;
    virtual void BeginSettingsAvailable(FunctorAsync& aFunctor) = 0;
    virtual void EndSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable) = 0;
    virtual void SyncSettingsChangedCount(uint32_t& aSettingsChangedCount) = 0;
    virtual void BeginSettingsChangedCount(FunctorAsync& aFunctor) = 0;
    virtual void EndSettingsChangedCount(IAsync& aAsync, uint32_t& aSettingsChangedCount) = 0;
    virtual void SyncUpdate(const std::string& aManifestUri) = 0;
    virtual void BeginUpdate(const std::string& aManifestUri, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdate(IAsync& aAsync) = 0;
    virtual void SyncUpdateBlocking(const std::string& aManifestUri) = 0;
    virtual void BeginUpdateBlocking(const std::string& aManifestUri, FunctorAsync& aFunctor) = 0;
    virtual void EndUpdateBlocking(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateStatus(std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription) = 0;
    virtual void BeginGetUpdateStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription) = 0;
    virtual void SyncChannelMap(std::string& aChannelMap) = 0;
    virtual void BeginChannelMap(FunctorAsync& aFunctor) = 0;
    virtual void EndChannelMap(IAsync& aAsync, std::string& aChannelMap) = 0;
    virtual void SyncSetChannelMap(const std::string& aChannelMap) = 0;
    virtual void BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor) = 0;
    virtual void EndSetChannelMap(IAsync& aAsync) = 0;
    virtual void SyncAudioChannels(std::string& aAudioChannels) = 0;
    virtual void BeginAudioChannels(FunctorAsync& aFunctor) = 0;
    virtual void EndAudioChannels(IAsync& aAsync, std::string& aAudioChannels) = 0;
    virtual void SyncSetAudioChannels(const std::string& aAudioChannels) = 0;
    virtual void BeginSetAudioChannels(const std::string& aAudioChannels, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAudioChannels(IAsync& aAsync) = 0;
    virtual void SyncVersion(uint32_t& aVersion) = 0;
    virtual void BeginVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndVersion(IAsync& aAsync, uint32_t& aVersion) = 0;
    virtual void SetPropertyDeviceListChanged(Functor& aDeviceListChanged) = 0;
    virtual void PropertyDeviceList(std::string& aDeviceList) const = 0;
    virtual void SetPropertySettingsAvailableChanged(Functor& aSettingsAvailableChanged) = 0;
    virtual void PropertySettingsAvailable(bool& aSettingsAvailable) const = 0;
    virtual void SetPropertySettingsChangedCountChanged(Functor& aSettingsChangedCountChanged) = 0;
    virtual void PropertySettingsChangedCount(uint32_t& aSettingsChangedCount) const = 0;
    virtual void SetPropertyUpdateStatusChanged(Functor& aUpdateStatusChanged) = 0;
    virtual void PropertyUpdateStatus(std::string& aUpdateStatus) const = 0;
    virtual void SetPropertyUpdateTotalPercentageChanged(Functor& aUpdateTotalPercentageChanged) = 0;
    virtual void PropertyUpdateTotalPercentage(uint32_t& aUpdateTotalPercentage) const = 0;
    virtual void SetPropertyUpdateTotalJobsChanged(Functor& aUpdateTotalJobsChanged) = 0;
    virtual void PropertyUpdateTotalJobs(uint32_t& aUpdateTotalJobs) const = 0;
    virtual void SetPropertyUpdateJobChanged(Functor& aUpdateJobChanged) = 0;
    virtual void PropertyUpdateJob(uint32_t& aUpdateJob) const = 0;
    virtual void SetPropertyUpdateJobPercentageChanged(Functor& aUpdateJobPercentageChanged) = 0;
    virtual void PropertyUpdateJobPercentage(uint32_t& aUpdateJobPercentage) const = 0;
    virtual void SetPropertyUpdateJobDescriptionChanged(Functor& aUpdateJobDescriptionChanged) = 0;
    virtual void PropertyUpdateJobDescription(std::string& aUpdateJobDescription) const = 0;
    virtual void SetPropertyChannelMapChanged(Functor& aChannelMapChanged) = 0;
    virtual void PropertyChannelMap(std::string& aChannelMap) const = 0;
    virtual void SetPropertyAudioChannelsChanged(Functor& aAudioChannelsChanged) = 0;
    virtual void PropertyAudioChannels(std::string& aAudioChannels) const = 0;
    virtual void SetPropertyVersionChanged(Functor& aVersionChanged) = 0;
    virtual void PropertyVersion(uint32_t& aVersion) const = 0;
};

/**
 * Proxy for linn.co.uk:Exakt:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkExakt1Cpp : public ICpProxyLinnCoUkExakt1Cpp
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
    CpProxyLinnCoUkExakt1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkExakt1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aList
     */
    void SyncDeviceList(std::string& aList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeviceList().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeviceList(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aList
     */
    void EndDeviceList(IAsync& aAsync, std::string& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[out] aSettings
     */
    void SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeviceSettings().
     *
     * @param[in] aDeviceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettings
     */
    void EndDeviceSettings(IAsync& aAsync, std::string& aSettings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsAvailable
     */
    void SyncSettingsAvailable(bool& aSettingsAvailable);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSettingsAvailable().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSettingsAvailable(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettingsAvailable
     */
    void EndSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSettingsChangedCount
     */
    void SyncSettingsChangedCount(uint32_t& aSettingsChangedCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSettingsChangedCount().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSettingsChangedCount(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettingsChangedCount
     */
    void EndSettingsChangedCount(IAsync& aAsync, uint32_t& aSettingsChangedCount);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aManifestUri
     */
    void SyncUpdate(const std::string& aManifestUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUpdate().
     *
     * @param[in] aManifestUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUpdate(const std::string& aManifestUri, FunctorAsync& aFunctor);
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
     * @param[in]  aManifestUri
     */
    void SyncUpdateBlocking(const std::string& aManifestUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUpdateBlocking().
     *
     * @param[in] aManifestUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUpdateBlocking(const std::string& aManifestUri, FunctorAsync& aFunctor);
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
     * @param[out] aUpdateTotalPercentage
     * @param[out] aUpdateTotalJobs
     * @param[out] aUpdateJob
     * @param[out] aUpdateJobPercentage
     * @param[out] aUpdateJobDescription
     */
    void SyncGetUpdateStatus(std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription);
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
     * @param[out] aUpdateTotalPercentage
     * @param[out] aUpdateTotalJobs
     * @param[out] aUpdateJob
     * @param[out] aUpdateJobPercentage
     * @param[out] aUpdateJobDescription
     */
    void EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aChannelMap
     */
    void SyncChannelMap(std::string& aChannelMap);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndChannelMap().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginChannelMap(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aChannelMap
     */
    void EndChannelMap(IAsync& aAsync, std::string& aChannelMap);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannelMap
     */
    void SyncSetChannelMap(const std::string& aChannelMap);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetChannelMap().
     *
     * @param[in] aChannelMap
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetChannelMap(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAudioChannels
     */
    void SyncAudioChannels(std::string& aAudioChannels);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndAudioChannels().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginAudioChannels(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAudioChannels
     */
    void EndAudioChannels(IAsync& aAsync, std::string& aAudioChannels);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aAudioChannels
     */
    void SyncSetAudioChannels(const std::string& aAudioChannels);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAudioChannels().
     *
     * @param[in] aAudioChannels
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAudioChannels(const std::string& aAudioChannels, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAudioChannels(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     */
    void SyncVersion(uint32_t& aVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVersion
     */
    void EndVersion(IAsync& aAsync, uint32_t& aVersion);

    /**
     * Set a callback to be run when the DeviceList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsAvailable state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SettingsChangedCount state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySettingsChangedCountChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateTotalPercentage state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateTotalPercentageChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateTotalJobs state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateTotalJobsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateJob state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateJobChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateJobPercentage state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateJobPercentageChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateJobDescription state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateJobDescriptionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelMap state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AudioChannels state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Version state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExakt1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVersionChanged(Functor& aFunctor);

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
     * Query the value of the SettingsChangedCount property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSettingsChangedCount
     */
    void PropertySettingsChangedCount(uint32_t& aSettingsChangedCount) const;
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
     * Query the value of the UpdateTotalPercentage property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateTotalPercentage
     */
    void PropertyUpdateTotalPercentage(uint32_t& aUpdateTotalPercentage) const;
    /**
     * Query the value of the UpdateTotalJobs property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateTotalJobs
     */
    void PropertyUpdateTotalJobs(uint32_t& aUpdateTotalJobs) const;
    /**
     * Query the value of the UpdateJob property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateJob
     */
    void PropertyUpdateJob(uint32_t& aUpdateJob) const;
    /**
     * Query the value of the UpdateJobPercentage property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateJobPercentage
     */
    void PropertyUpdateJobPercentage(uint32_t& aUpdateJobPercentage) const;
    /**
     * Query the value of the UpdateJobDescription property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateJobDescription
     */
    void PropertyUpdateJobDescription(std::string& aUpdateJobDescription) const;
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
    void SettingsChangedCountPropertyChanged();
    void UpdateStatusPropertyChanged();
    void UpdateTotalPercentagePropertyChanged();
    void UpdateTotalJobsPropertyChanged();
    void UpdateJobPropertyChanged();
    void UpdateJobPercentagePropertyChanged();
    void UpdateJobDescriptionPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
private:
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionSettingsAvailable;
    Action* iActionSettingsChangedCount;
    Action* iActionUpdate;
    Action* iActionUpdateBlocking;
    Action* iActionGetUpdateStatus;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionAudioChannels;
    Action* iActionSetAudioChannels;
    Action* iActionVersion;
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyUint* iSettingsChangedCount;
    PropertyString* iUpdateStatus;
    PropertyUint* iUpdateTotalPercentage;
    PropertyUint* iUpdateTotalJobs;
    PropertyUint* iUpdateJob;
    PropertyUint* iUpdateJobPercentage;
    PropertyString* iUpdateJobDescription;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedCountChanged;
    Functor iUpdateStatusChanged;
    Functor iUpdateTotalPercentageChanged;
    Functor iUpdateTotalJobsChanged;
    Functor iUpdateJobChanged;
    Functor iUpdateJobPercentageChanged;
    Functor iUpdateJobDescriptionChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKEXAKT1CPP

