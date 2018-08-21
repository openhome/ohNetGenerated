#ifndef HEADER_AVOPENHOMEORGEXAKT4
#define HEADER_AVOPENHOMEORGEXAKT4

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
class ICpProxyAvOpenhomeOrgExakt4 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgExakt4() {}
    virtual void SyncDeviceList(Brh& aList) = 0;
    virtual void BeginDeviceList(FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceList(IAsync& aAsync, Brh& aList) = 0;
    virtual void SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings) = 0;
    virtual void BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceSettings(IAsync& aAsync, Brh& aSettings) = 0;
    virtual void SyncConnectionStatus(Brh& aConnectionStatus) = 0;
    virtual void BeginConnectionStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus) = 0;
    virtual void SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist) = 0;
    virtual void BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor) = 0;
    virtual void EndSet(IAsync& aAsync) = 0;
    virtual void SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri) = 0;
    virtual void BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor) = 0;
    virtual void EndReprogram(IAsync& aAsync) = 0;
    virtual void SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri) = 0;
    virtual void BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor) = 0;
    virtual void EndReprogramFallback(IAsync& aAsync) = 0;
    virtual void SyncChannelMap(Brh& aChannelMap) = 0;
    virtual void BeginChannelMap(FunctorAsync& aFunctor) = 0;
    virtual void EndChannelMap(IAsync& aAsync, Brh& aChannelMap) = 0;
    virtual void SyncSetChannelMap(const Brx& aChannelMap) = 0;
    virtual void BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor) = 0;
    virtual void EndSetChannelMap(IAsync& aAsync) = 0;
    virtual void SyncAudioChannels(Brh& aAudioChannels) = 0;
    virtual void BeginAudioChannels(FunctorAsync& aFunctor) = 0;
    virtual void EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels) = 0;
    virtual void SyncSetAudioChannels(const Brx& aAudioChannels) = 0;
    virtual void BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAudioChannels(IAsync& aAsync) = 0;
    virtual void SyncVersion(Brh& aVersion) = 0;
    virtual void BeginVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndVersion(IAsync& aAsync, Brh& aVersion) = 0;
    virtual void SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) = 0;
    virtual void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent) = 0;
    virtual void SyncBootIntegratedDevicesToFallback() = 0;
    virtual void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor) = 0;
    virtual void EndBootIntegratedDevicesToFallback(IAsync& aAsync) = 0;
    virtual void SetPropertyDeviceListChanged(Functor& aDeviceListChanged) = 0;
    virtual void PropertyDeviceList(Brhz& aDeviceList) const = 0;
    virtual void SetPropertyConnectionStatusChanged(Functor& aConnectionStatusChanged) = 0;
    virtual void PropertyConnectionStatus(Brhz& aConnectionStatus) const = 0;
    virtual void SetPropertyChannelMapChanged(Functor& aChannelMapChanged) = 0;
    virtual void PropertyChannelMap(Brhz& aChannelMap) const = 0;
    virtual void SetPropertyAudioChannelsChanged(Functor& aAudioChannelsChanged) = 0;
    virtual void PropertyAudioChannels(Brhz& aAudioChannels) const = 0;
    virtual void SetPropertyVersionChanged(Functor& aVersionChanged) = 0;
    virtual void PropertyVersion(Brhz& aVersion) const = 0;
    virtual void SetPropertyIntegratedDevicesPresentChanged(Functor& aIntegratedDevicesPresentChanged) = 0;
    virtual void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const = 0;
};

/**
 * Proxy for av.openhome.org:Exakt:4
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgExakt4 : public ICpProxyAvOpenhomeOrgExakt4
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
    CpProxyAvOpenhomeOrgExakt4(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgExakt4();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aList
     */
    void SyncDeviceList(Brh& aList);
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
    void EndDeviceList(IAsync& aAsync, Brh& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[out] aSettings
     */
    void SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
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
    void BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSettings
     */
    void EndDeviceSettings(IAsync& aAsync, Brh& aSettings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aConnectionStatus
     */
    void SyncConnectionStatus(Brh& aConnectionStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndConnectionStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginConnectionStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aConnectionStatus
     */
    void EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[in]  aBankId
     * @param[in]  aFileUri
     * @param[in]  aMute
     * @param[in]  aPersist
     */
    void SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSet().
     *
     * @param[in] aDeviceId
     * @param[in] aBankId
     * @param[in] aFileUri
     * @param[in] aMute
     * @param[in] aPersist
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSet(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[in]  aFileUri
     */
    void SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReprogram().
     *
     * @param[in] aDeviceId
     * @param[in] aFileUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndReprogram(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDeviceId
     * @param[in]  aFileUri
     */
    void SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReprogramFallback().
     *
     * @param[in] aDeviceId
     * @param[in] aFileUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndReprogramFallback(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aChannelMap
     */
    void SyncChannelMap(Brh& aChannelMap);
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
    void EndChannelMap(IAsync& aAsync, Brh& aChannelMap);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChannelMap
     */
    void SyncSetChannelMap(const Brx& aChannelMap);
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
    void BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor);
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
    void SyncAudioChannels(Brh& aAudioChannels);
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
    void EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aAudioChannels
     */
    void SyncSetAudioChannels(const Brx& aAudioChannels);
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
    void BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor);
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
    void SyncVersion(Brh& aVersion);
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
    void EndVersion(IAsync& aAsync, Brh& aVersion);

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
     * Set a callback to be run when the DeviceList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ConnectionStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelMap state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AudioChannels state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Version state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyVersionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IntegratedDevicesPresent state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt4 instance will not overlap.
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
    void PropertyDeviceList(Brhz& aDeviceList) const;
    /**
     * Query the value of the ConnectionStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConnectionStatus
     */
    void PropertyConnectionStatus(Brhz& aConnectionStatus) const;
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
    void PropertyVersion(Brhz& aVersion) const;
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
    void ConnectionStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
    void IntegratedDevicesPresentPropertyChanged();
private:
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionAudioChannels;
    Action* iActionSetAudioChannels;
    Action* iActionVersion;
    Action* iActionGetIntegratedDevicesPresent;
    Action* iActionBootIntegratedDevicesToFallback;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyString* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGEXAKT4

