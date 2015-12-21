#ifndef HEADER_AVOPENHOMEORGRADIO1CPP
#define HEADER_AVOPENHOMEORGRADIO1CPP

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
class ICpProxyAvOpenhomeOrgRadio1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgRadio1Cpp() {}
    virtual void SyncPlay() = 0;
    virtual void BeginPlay(FunctorAsync& aFunctor) = 0;
    virtual void EndPlay(IAsync& aAsync) = 0;
    virtual void SyncPause() = 0;
    virtual void BeginPause(FunctorAsync& aFunctor) = 0;
    virtual void EndPause(IAsync& aAsync) = 0;
    virtual void SyncStop() = 0;
    virtual void BeginStop(FunctorAsync& aFunctor) = 0;
    virtual void EndStop(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondAbsolute(uint32_t aValue) = 0;
    virtual void BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondAbsolute(IAsync& aAsync) = 0;
    virtual void SyncSeekSecondRelative(int32_t aValue) = 0;
    virtual void BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSeekSecondRelative(IAsync& aAsync) = 0;
    virtual void SyncChannel(std::string& aUri, std::string& aMetadata) = 0;
    virtual void BeginChannel(FunctorAsync& aFunctor) = 0;
    virtual void EndChannel(IAsync& aAsync, std::string& aUri, std::string& aMetadata) = 0;
    virtual void SyncSetChannel(const std::string& aUri, const std::string& aMetadata) = 0;
    virtual void BeginSetChannel(const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor) = 0;
    virtual void EndSetChannel(IAsync& aAsync) = 0;
    virtual void SyncTransportState(std::string& aValue) = 0;
    virtual void BeginTransportState(FunctorAsync& aFunctor) = 0;
    virtual void EndTransportState(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncId(uint32_t& aValue) = 0;
    virtual void BeginId(FunctorAsync& aFunctor) = 0;
    virtual void EndId(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncSetId(uint32_t aValue, const std::string& aUri) = 0;
    virtual void BeginSetId(uint32_t aValue, const std::string& aUri, FunctorAsync& aFunctor) = 0;
    virtual void EndSetId(IAsync& aAsync) = 0;
    virtual void SyncRead(uint32_t aId, std::string& aMetadata) = 0;
    virtual void BeginRead(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndRead(IAsync& aAsync, std::string& aMetadata) = 0;
    virtual void SyncReadList(const std::string& aIdList, std::string& aChannelList) = 0;
    virtual void BeginReadList(const std::string& aIdList, FunctorAsync& aFunctor) = 0;
    virtual void EndReadList(IAsync& aAsync, std::string& aChannelList) = 0;
    virtual void SyncIdArray(uint32_t& aToken, std::string& aArray) = 0;
    virtual void BeginIdArray(FunctorAsync& aFunctor) = 0;
    virtual void EndIdArray(IAsync& aAsync, uint32_t& aToken, std::string& aArray) = 0;
    virtual void SyncIdArrayChanged(uint32_t aToken, bool& aValue) = 0;
    virtual void BeginIdArrayChanged(uint32_t aToken, FunctorAsync& aFunctor) = 0;
    virtual void EndIdArrayChanged(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncChannelsMax(uint32_t& aValue) = 0;
    virtual void BeginChannelsMax(FunctorAsync& aFunctor) = 0;
    virtual void EndChannelsMax(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncProtocolInfo(std::string& aValue) = 0;
    virtual void BeginProtocolInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndProtocolInfo(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SetPropertyUriChanged(Functor& aUriChanged) = 0;
    virtual void PropertyUri(std::string& aUri) const = 0;
    virtual void SetPropertyMetadataChanged(Functor& aMetadataChanged) = 0;
    virtual void PropertyMetadata(std::string& aMetadata) const = 0;
    virtual void SetPropertyTransportStateChanged(Functor& aTransportStateChanged) = 0;
    virtual void PropertyTransportState(std::string& aTransportState) const = 0;
    virtual void SetPropertyIdChanged(Functor& aIdChanged) = 0;
    virtual void PropertyId(uint32_t& aId) const = 0;
    virtual void SetPropertyIdArrayChanged(Functor& aIdArrayChanged) = 0;
    virtual void PropertyIdArray(std::string& aIdArray) const = 0;
    virtual void SetPropertyChannelsMaxChanged(Functor& aChannelsMaxChanged) = 0;
    virtual void PropertyChannelsMax(uint32_t& aChannelsMax) const = 0;
    virtual void SetPropertyProtocolInfoChanged(Functor& aProtocolInfoChanged) = 0;
    virtual void PropertyProtocolInfo(std::string& aProtocolInfo) const = 0;
};

/**
 * Proxy for av.openhome.org:Radio:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgRadio1Cpp : public ICpProxyAvOpenhomeOrgRadio1Cpp
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
    CpProxyAvOpenhomeOrgRadio1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgRadio1Cpp();

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
     * @param[in]  aValue
     */
    void SyncSeekSecondAbsolute(uint32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondAbsolute().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor);
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
     * @param[in]  aValue
     */
    void SyncSeekSecondRelative(int32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSeekSecondRelative().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor);
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
     * @param[out] aUri
     * @param[out] aMetadata
     */
    void SyncChannel(std::string& aUri, std::string& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndChannel().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginChannel(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUri
     * @param[out] aMetadata
     */
    void EndChannel(IAsync& aAsync, std::string& aUri, std::string& aMetadata);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aUri
     * @param[in]  aMetadata
     */
    void SyncSetChannel(const std::string& aUri, const std::string& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetChannel().
     *
     * @param[in] aUri
     * @param[in] aMetadata
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetChannel(const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetChannel(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncTransportState(std::string& aValue);
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
     * @param[out] aValue
     */
    void EndTransportState(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncId(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndId(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     * @param[in]  aUri
     */
    void SyncSetId(uint32_t aValue, const std::string& aUri);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetId().
     *
     * @param[in] aValue
     * @param[in] aUri
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetId(uint32_t aValue, const std::string& aUri, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetId(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[out] aMetadata
     */
    void SyncRead(uint32_t aId, std::string& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRead().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRead(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMetadata
     */
    void EndRead(IAsync& aAsync, std::string& aMetadata);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIdList
     * @param[out] aChannelList
     */
    void SyncReadList(const std::string& aIdList, std::string& aChannelList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReadList().
     *
     * @param[in] aIdList
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReadList(const std::string& aIdList, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aChannelList
     */
    void EndReadList(IAsync& aAsync, std::string& aChannelList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aToken
     * @param[out] aArray
     */
    void SyncIdArray(uint32_t& aToken, std::string& aArray);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndIdArray().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginIdArray(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aToken
     * @param[out] aArray
     */
    void EndIdArray(IAsync& aAsync, uint32_t& aToken, std::string& aArray);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aToken
     * @param[out] aValue
     */
    void SyncIdArrayChanged(uint32_t aToken, bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndIdArrayChanged().
     *
     * @param[in] aToken
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginIdArrayChanged(uint32_t aToken, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndIdArrayChanged(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncChannelsMax(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndChannelsMax().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginChannelsMax(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndChannelsMax(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncProtocolInfo(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndProtocolInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginProtocolInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndProtocolInfo(IAsync& aAsync, std::string& aValue);

    /**
     * Set a callback to be run when the Uri state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUriChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Metadata state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetadataChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TransportState state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Id state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IdArray state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ChannelsMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyChannelsMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ProtocolInfo state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgRadio1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyProtocolInfoChanged(Functor& aFunctor);

    /**
     * Query the value of the Uri property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUri
     */
    void PropertyUri(std::string& aUri) const;
    /**
     * Query the value of the Metadata property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMetadata
     */
    void PropertyMetadata(std::string& aMetadata) const;
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
     * Query the value of the Id property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aId
     */
    void PropertyId(uint32_t& aId) const;
    /**
     * Query the value of the IdArray property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIdArray
     */
    void PropertyIdArray(std::string& aIdArray) const;
    /**
     * Query the value of the ChannelsMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aChannelsMax
     */
    void PropertyChannelsMax(uint32_t& aChannelsMax) const;
    /**
     * Query the value of the ProtocolInfo property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aProtocolInfo
     */
    void PropertyProtocolInfo(std::string& aProtocolInfo) const;
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
    void UriPropertyChanged();
    void MetadataPropertyChanged();
    void TransportStatePropertyChanged();
    void IdPropertyChanged();
    void IdArrayPropertyChanged();
    void ChannelsMaxPropertyChanged();
    void ProtocolInfoPropertyChanged();
private:
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionChannel;
    Action* iActionSetChannel;
    Action* iActionTransportState;
    Action* iActionId;
    Action* iActionSetId;
    Action* iActionRead;
    Action* iActionReadList;
    Action* iActionIdArray;
    Action* iActionIdArrayChanged;
    Action* iActionChannelsMax;
    Action* iActionProtocolInfo;
    PropertyString* iUri;
    PropertyString* iMetadata;
    PropertyString* iTransportState;
    PropertyUint* iId;
    PropertyBinary* iIdArray;
    PropertyUint* iChannelsMax;
    PropertyString* iProtocolInfo;
    Functor iUriChanged;
    Functor iMetadataChanged;
    Functor iTransportStateChanged;
    Functor iIdChanged;
    Functor iIdArrayChanged;
    Functor iChannelsMaxChanged;
    Functor iProtocolInfoChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGRADIO1CPP

