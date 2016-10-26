#ifndef HEADER_AVOPENHOMEORGEXAKT3CPP
#define HEADER_AVOPENHOMEORGEXAKT3CPP

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
class ICpProxyAvOpenhomeOrgExakt3Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgExakt3Cpp() {}
    virtual void SyncDeviceList(std::string& aList) = 0;
    virtual void BeginDeviceList(FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceList(IAsync& aAsync, std::string& aList) = 0;
    virtual void SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings) = 0;
    virtual void BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceSettings(IAsync& aAsync, std::string& aSettings) = 0;
    virtual void SyncConnectionStatus(std::string& aConnectionStatus) = 0;
    virtual void BeginConnectionStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus) = 0;
    virtual void SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist) = 0;
    virtual void BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor) = 0;
    virtual void EndSet(IAsync& aAsync) = 0;
    virtual void SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri) = 0;
    virtual void BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor) = 0;
    virtual void EndReprogram(IAsync& aAsync) = 0;
    virtual void SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri) = 0;
    virtual void BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor) = 0;
    virtual void EndReprogramFallback(IAsync& aAsync) = 0;
    virtual void SyncChannelMap(std::string& aChannelMap) = 0;
    virtual void BeginChannelMap(FunctorAsync& aFunctor) = 0;
    virtual void EndChannelMap(IAsync& aAsync, std::string& aChannelMap) = 0;
    virtual void SyncSetChannelMap(const std::string& aChannelMap) = 0;
    virtual void BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor) = 0;
    virtual void EndSetChannelMap(IAsync& aAsync) = 0;
    virtual void SyncVersion(std::string& aVersion) = 0;
    virtual void BeginVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndVersion(IAsync& aAsync, std::string& aVersion) = 0;
    virtual void SetPropertyDeviceListChanged(Functor& aDeviceListChanged) = 0;
    virtual void PropertyDeviceList(std::string& aDeviceList) const = 0;
    virtual void SetPropertyConnectionStatusChanged(Functor& aConnectionStatusChanged) = 0;
    virtual void PropertyConnectionStatus(std::string& aConnectionStatus) const = 0;
    virtual void SetPropertyChannelMapChanged(Functor& aChannelMapChanged) = 0;
    virtual void PropertyChannelMap(std::string& aChannelMap) const = 0;
    virtual void SetPropertyVersionChanged(Functor& aVersionChanged) = 0;
    virtual void PropertyVersion(std::string& aVersion) const = 0;
};

/**
 * Proxy for av.openhome.org:Exakt:3
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgExakt3Cpp : public ICpProxyAvOpenhomeOrgExakt3Cpp
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
    CpProxyAvOpenhomeOrgExakt3Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgExakt3Cpp();

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
     * @param[out] aConnectionStatus
     */
    void SyncConnectionStatus(std::string& aConnectionStatus);
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
    void EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus);

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
    void SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist);
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
    void BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor);
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
    void SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri);
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
    void BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor);
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
    void SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri);
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
    void BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor);
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
     * @param[out] aVersion
     */
    void SyncVersion(std::string& aVersion);
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
    void EndVersion(IAsync& aAsync, std::string& aVersion);

    /**
     * Set a callback to be run when the DeviceList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt3Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ConnectionStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt3Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelMap state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt3Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Version state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgExakt3Cpp instance will not overlap.
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
     * Query the value of the ConnectionStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConnectionStatus
     */
    void PropertyConnectionStatus(std::string& aConnectionStatus) const;
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
     * Query the value of the Version property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aVersion
     */
    void PropertyVersion(std::string& aVersion) const;
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
    void VersionPropertyChanged();
private:
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionVersion;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    PropertyString* iChannelMap;
    PropertyString* iVersion;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
    Functor iChannelMapChanged;
    Functor iVersionChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGEXAKT3CPP

