#ifndef HEADER_AVOPENHOMEORGPLAYLISTMANAGER1CPP
#define HEADER_AVOPENHOMEORGPLAYLISTMANAGER1CPP

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
class ICpProxyAvOpenhomeOrgPlaylistManager1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgPlaylistManager1Cpp() {}
    virtual void SyncMetadata(std::string& aMetadata) = 0;
    virtual void BeginMetadata(FunctorAsync& aFunctor) = 0;
    virtual void EndMetadata(IAsync& aAsync, std::string& aMetadata) = 0;
    virtual void SyncImagesXml(std::string& aImagesXml) = 0;
    virtual void BeginImagesXml(FunctorAsync& aFunctor) = 0;
    virtual void EndImagesXml(IAsync& aAsync, std::string& aImagesXml) = 0;
    virtual void SyncPlaylistReadArray(uint32_t aId, std::string& aArray) = 0;
    virtual void BeginPlaylistReadArray(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistReadArray(IAsync& aAsync, std::string& aArray) = 0;
    virtual void SyncPlaylistReadList(const std::string& aIdList, std::string& aPlaylistList) = 0;
    virtual void BeginPlaylistReadList(const std::string& aIdList, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistReadList(IAsync& aAsync, std::string& aPlaylistList) = 0;
    virtual void SyncPlaylistRead(uint32_t aId, std::string& aName, std::string& aDescription, uint32_t& aImageId) = 0;
    virtual void BeginPlaylistRead(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistRead(IAsync& aAsync, std::string& aName, std::string& aDescription, uint32_t& aImageId) = 0;
    virtual void SyncPlaylistSetName(uint32_t aId, const std::string& aName) = 0;
    virtual void BeginPlaylistSetName(uint32_t aId, const std::string& aName, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistSetName(IAsync& aAsync) = 0;
    virtual void SyncPlaylistSetDescription(uint32_t aId, const std::string& aDescription) = 0;
    virtual void BeginPlaylistSetDescription(uint32_t aId, const std::string& aDescription, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistSetDescription(IAsync& aAsync) = 0;
    virtual void SyncPlaylistSetImageId(uint32_t aId, uint32_t aImageId) = 0;
    virtual void BeginPlaylistSetImageId(uint32_t aId, uint32_t aImageId, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistSetImageId(IAsync& aAsync) = 0;
    virtual void SyncPlaylistInsert(uint32_t aAfterId, const std::string& aName, const std::string& aDescription, uint32_t aImageId, uint32_t& aNewId) = 0;
    virtual void BeginPlaylistInsert(uint32_t aAfterId, const std::string& aName, const std::string& aDescription, uint32_t aImageId, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistInsert(IAsync& aAsync, uint32_t& aNewId) = 0;
    virtual void SyncPlaylistDeleteId(uint32_t aValue) = 0;
    virtual void BeginPlaylistDeleteId(uint32_t aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistDeleteId(IAsync& aAsync) = 0;
    virtual void SyncPlaylistMove(uint32_t aId, uint32_t aAfterId) = 0;
    virtual void BeginPlaylistMove(uint32_t aId, uint32_t aAfterId, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistMove(IAsync& aAsync) = 0;
    virtual void SyncPlaylistsMax(uint32_t& aValue) = 0;
    virtual void BeginPlaylistsMax(FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistsMax(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncTracksMax(uint32_t& aValue) = 0;
    virtual void BeginTracksMax(FunctorAsync& aFunctor) = 0;
    virtual void EndTracksMax(IAsync& aAsync, uint32_t& aValue) = 0;
    virtual void SyncPlaylistArrays(uint32_t& aToken, std::string& aIdArray, std::string& aTokenArray) = 0;
    virtual void BeginPlaylistArrays(FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistArrays(IAsync& aAsync, uint32_t& aToken, std::string& aIdArray, std::string& aTokenArray) = 0;
    virtual void SyncPlaylistArraysChanged(uint32_t aToken, bool& aValue) = 0;
    virtual void BeginPlaylistArraysChanged(uint32_t aToken, FunctorAsync& aFunctor) = 0;
    virtual void EndPlaylistArraysChanged(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncRead(uint32_t aId, uint32_t aTrackId, std::string& aMetadata) = 0;
    virtual void BeginRead(uint32_t aId, uint32_t aTrackId, FunctorAsync& aFunctor) = 0;
    virtual void EndRead(IAsync& aAsync, std::string& aMetadata) = 0;
    virtual void SyncReadList(uint32_t aId, const std::string& aTrackIdList, std::string& aTrackList) = 0;
    virtual void BeginReadList(uint32_t aId, const std::string& aTrackIdList, FunctorAsync& aFunctor) = 0;
    virtual void EndReadList(IAsync& aAsync, std::string& aTrackList) = 0;
    virtual void SyncInsert(uint32_t aId, uint32_t aAfterTrackId, const std::string& aMetadata, uint32_t& aNewTrackId) = 0;
    virtual void BeginInsert(uint32_t aId, uint32_t aAfterTrackId, const std::string& aMetadata, FunctorAsync& aFunctor) = 0;
    virtual void EndInsert(IAsync& aAsync, uint32_t& aNewTrackId) = 0;
    virtual void SyncDeleteId(uint32_t aId, uint32_t aTrackId) = 0;
    virtual void BeginDeleteId(uint32_t aId, uint32_t aTrackId, FunctorAsync& aFunctor) = 0;
    virtual void EndDeleteId(IAsync& aAsync) = 0;
    virtual void SyncDeleteAll(uint32_t aId) = 0;
    virtual void BeginDeleteAll(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndDeleteAll(IAsync& aAsync) = 0;
    virtual void SetPropertyMetadataChanged(Functor& aMetadataChanged) = 0;
    virtual void PropertyMetadata(std::string& aMetadata) const = 0;
    virtual void SetPropertyImagesXmlChanged(Functor& aImagesXmlChanged) = 0;
    virtual void PropertyImagesXml(std::string& aImagesXml) const = 0;
    virtual void SetPropertyIdArrayChanged(Functor& aIdArrayChanged) = 0;
    virtual void PropertyIdArray(std::string& aIdArray) const = 0;
    virtual void SetPropertyTokenArrayChanged(Functor& aTokenArrayChanged) = 0;
    virtual void PropertyTokenArray(std::string& aTokenArray) const = 0;
    virtual void SetPropertyPlaylistsMaxChanged(Functor& aPlaylistsMaxChanged) = 0;
    virtual void PropertyPlaylistsMax(uint32_t& aPlaylistsMax) const = 0;
    virtual void SetPropertyTracksMaxChanged(Functor& aTracksMaxChanged) = 0;
    virtual void PropertyTracksMax(uint32_t& aTracksMax) const = 0;
};

/**
 * Proxy for av.openhome.org:PlaylistManager:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgPlaylistManager1Cpp : public ICpProxyAvOpenhomeOrgPlaylistManager1Cpp
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
    CpProxyAvOpenhomeOrgPlaylistManager1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgPlaylistManager1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMetadata
     */
    void SyncMetadata(std::string& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMetadata().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMetadata(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMetadata
     */
    void EndMetadata(IAsync& aAsync, std::string& aMetadata);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aImagesXml
     */
    void SyncImagesXml(std::string& aImagesXml);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndImagesXml().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginImagesXml(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aImagesXml
     */
    void EndImagesXml(IAsync& aAsync, std::string& aImagesXml);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[out] aArray
     */
    void SyncPlaylistReadArray(uint32_t aId, std::string& aArray);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistReadArray().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistReadArray(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aArray
     */
    void EndPlaylistReadArray(IAsync& aAsync, std::string& aArray);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIdList
     * @param[out] aPlaylistList
     */
    void SyncPlaylistReadList(const std::string& aIdList, std::string& aPlaylistList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistReadList().
     *
     * @param[in] aIdList
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistReadList(const std::string& aIdList, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPlaylistList
     */
    void EndPlaylistReadList(IAsync& aAsync, std::string& aPlaylistList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[out] aName
     * @param[out] aDescription
     * @param[out] aImageId
     */
    void SyncPlaylistRead(uint32_t aId, std::string& aName, std::string& aDescription, uint32_t& aImageId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistRead().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistRead(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aName
     * @param[out] aDescription
     * @param[out] aImageId
     */
    void EndPlaylistRead(IAsync& aAsync, std::string& aName, std::string& aDescription, uint32_t& aImageId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aName
     */
    void SyncPlaylistSetName(uint32_t aId, const std::string& aName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistSetName().
     *
     * @param[in] aId
     * @param[in] aName
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistSetName(uint32_t aId, const std::string& aName, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlaylistSetName(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aDescription
     */
    void SyncPlaylistSetDescription(uint32_t aId, const std::string& aDescription);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistSetDescription().
     *
     * @param[in] aId
     * @param[in] aDescription
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistSetDescription(uint32_t aId, const std::string& aDescription, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlaylistSetDescription(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aImageId
     */
    void SyncPlaylistSetImageId(uint32_t aId, uint32_t aImageId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistSetImageId().
     *
     * @param[in] aId
     * @param[in] aImageId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistSetImageId(uint32_t aId, uint32_t aImageId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlaylistSetImageId(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aAfterId
     * @param[in]  aName
     * @param[in]  aDescription
     * @param[in]  aImageId
     * @param[out] aNewId
     */
    void SyncPlaylistInsert(uint32_t aAfterId, const std::string& aName, const std::string& aDescription, uint32_t aImageId, uint32_t& aNewId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistInsert().
     *
     * @param[in] aAfterId
     * @param[in] aName
     * @param[in] aDescription
     * @param[in] aImageId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistInsert(uint32_t aAfterId, const std::string& aName, const std::string& aDescription, uint32_t aImageId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNewId
     */
    void EndPlaylistInsert(IAsync& aAsync, uint32_t& aNewId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aValue
     */
    void SyncPlaylistDeleteId(uint32_t aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistDeleteId().
     *
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistDeleteId(uint32_t aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlaylistDeleteId(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aAfterId
     */
    void SyncPlaylistMove(uint32_t aId, uint32_t aAfterId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistMove().
     *
     * @param[in] aId
     * @param[in] aAfterId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistMove(uint32_t aId, uint32_t aAfterId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndPlaylistMove(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncPlaylistsMax(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistsMax().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistsMax(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndPlaylistsMax(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncTracksMax(uint32_t& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndTracksMax().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginTracksMax(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndTracksMax(IAsync& aAsync, uint32_t& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aToken
     * @param[out] aIdArray
     * @param[out] aTokenArray
     */
    void SyncPlaylistArrays(uint32_t& aToken, std::string& aIdArray, std::string& aTokenArray);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistArrays().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistArrays(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aToken
     * @param[out] aIdArray
     * @param[out] aTokenArray
     */
    void EndPlaylistArrays(IAsync& aAsync, uint32_t& aToken, std::string& aIdArray, std::string& aTokenArray);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aToken
     * @param[out] aValue
     */
    void SyncPlaylistArraysChanged(uint32_t aToken, bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPlaylistArraysChanged().
     *
     * @param[in] aToken
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPlaylistArraysChanged(uint32_t aToken, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndPlaylistArraysChanged(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aTrackId
     * @param[out] aMetadata
     */
    void SyncRead(uint32_t aId, uint32_t aTrackId, std::string& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRead().
     *
     * @param[in] aId
     * @param[in] aTrackId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRead(uint32_t aId, uint32_t aTrackId, FunctorAsync& aFunctor);
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
     * @param[in]  aId
     * @param[in]  aTrackIdList
     * @param[out] aTrackList
     */
    void SyncReadList(uint32_t aId, const std::string& aTrackIdList, std::string& aTrackList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReadList().
     *
     * @param[in] aId
     * @param[in] aTrackIdList
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReadList(uint32_t aId, const std::string& aTrackIdList, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTrackList
     */
    void EndReadList(IAsync& aAsync, std::string& aTrackList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aAfterTrackId
     * @param[in]  aMetadata
     * @param[out] aNewTrackId
     */
    void SyncInsert(uint32_t aId, uint32_t aAfterTrackId, const std::string& aMetadata, uint32_t& aNewTrackId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInsert().
     *
     * @param[in] aId
     * @param[in] aAfterTrackId
     * @param[in] aMetadata
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInsert(uint32_t aId, uint32_t aAfterTrackId, const std::string& aMetadata, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNewTrackId
     */
    void EndInsert(IAsync& aAsync, uint32_t& aNewTrackId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aTrackId
     */
    void SyncDeleteId(uint32_t aId, uint32_t aTrackId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeleteId().
     *
     * @param[in] aId
     * @param[in] aTrackId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeleteId(uint32_t aId, uint32_t aTrackId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDeleteId(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     */
    void SyncDeleteAll(uint32_t aId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeleteAll().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeleteAll(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDeleteAll(IAsync& aAsync);

    /**
     * Set a callback to be run when the Metadata state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetadataChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ImagesXml state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyImagesXmlChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IdArray state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TokenArray state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTokenArrayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PlaylistsMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPlaylistsMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the TracksMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPlaylistManager1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTracksMaxChanged(Functor& aFunctor);

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
     * Query the value of the ImagesXml property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aImagesXml
     */
    void PropertyImagesXml(std::string& aImagesXml) const;
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
     * Query the value of the TokenArray property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTokenArray
     */
    void PropertyTokenArray(std::string& aTokenArray) const;
    /**
     * Query the value of the PlaylistsMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPlaylistsMax
     */
    void PropertyPlaylistsMax(uint32_t& aPlaylistsMax) const;
    /**
     * Query the value of the TracksMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTracksMax
     */
    void PropertyTracksMax(uint32_t& aTracksMax) const;
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
    void MetadataPropertyChanged();
    void ImagesXmlPropertyChanged();
    void IdArrayPropertyChanged();
    void TokenArrayPropertyChanged();
    void PlaylistsMaxPropertyChanged();
    void TracksMaxPropertyChanged();
private:
    Action* iActionMetadata;
    Action* iActionImagesXml;
    Action* iActionPlaylistReadArray;
    Action* iActionPlaylistReadList;
    Action* iActionPlaylistRead;
    Action* iActionPlaylistSetName;
    Action* iActionPlaylistSetDescription;
    Action* iActionPlaylistSetImageId;
    Action* iActionPlaylistInsert;
    Action* iActionPlaylistDeleteId;
    Action* iActionPlaylistMove;
    Action* iActionPlaylistsMax;
    Action* iActionTracksMax;
    Action* iActionPlaylistArrays;
    Action* iActionPlaylistArraysChanged;
    Action* iActionRead;
    Action* iActionReadList;
    Action* iActionInsert;
    Action* iActionDeleteId;
    Action* iActionDeleteAll;
    PropertyString* iMetadata;
    PropertyString* iImagesXml;
    PropertyBinary* iIdArray;
    PropertyBinary* iTokenArray;
    PropertyUint* iPlaylistsMax;
    PropertyUint* iTracksMax;
    Functor iMetadataChanged;
    Functor iImagesXmlChanged;
    Functor iIdArrayChanged;
    Functor iTokenArrayChanged;
    Functor iPlaylistsMaxChanged;
    Functor iTracksMaxChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGPLAYLISTMANAGER1CPP

