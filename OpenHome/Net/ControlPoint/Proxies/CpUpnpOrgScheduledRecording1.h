#ifndef HEADER_UPNPORGSCHEDULEDRECORDING1
#define HEADER_UPNPORGSCHEDULEDRECORDING1

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
class ICpProxyUpnpOrgScheduledRecording1 : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgScheduledRecording1() {}
    virtual void SyncGetSortCapabilities(Brh& aSortCaps, TUint& aSortLevelCap) = 0;
    virtual void BeginGetSortCapabilities(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSortCapabilities(IAsync& aAsync, Brh& aSortCaps, TUint& aSortLevelCap) = 0;
    virtual void SyncGetPropertyList(const Brx& aDataTypeID, Brh& aPropertyList) = 0;
    virtual void BeginGetPropertyList(const Brx& aDataTypeID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetPropertyList(IAsync& aAsync, Brh& aPropertyList) = 0;
    virtual void SyncGetAllowedValues(const Brx& aDataTypeID, const Brx& aFilter, Brh& aPropertyInfo) = 0;
    virtual void BeginGetAllowedValues(const Brx& aDataTypeID, const Brx& aFilter, FunctorAsync& aFunctor) = 0;
    virtual void EndGetAllowedValues(IAsync& aAsync, Brh& aPropertyInfo) = 0;
    virtual void SyncGetStateUpdateID(TUint& aId) = 0;
    virtual void BeginGetStateUpdateID(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStateUpdateID(IAsync& aAsync, TUint& aId) = 0;
    virtual void SyncBrowseRecordSchedules(const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID) = 0;
    virtual void BeginBrowseRecordSchedules(const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor) = 0;
    virtual void EndBrowseRecordSchedules(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID) = 0;
    virtual void SyncBrowseRecordTasks(const Brx& aRecordScheduleID, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID) = 0;
    virtual void BeginBrowseRecordTasks(const Brx& aRecordScheduleID, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor) = 0;
    virtual void EndBrowseRecordTasks(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID) = 0;
    virtual void SyncCreateRecordSchedule(const Brx& aElements, Brh& aRecordScheduleID, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void BeginCreateRecordSchedule(const Brx& aElements, FunctorAsync& aFunctor) = 0;
    virtual void EndCreateRecordSchedule(IAsync& aAsync, Brh& aRecordScheduleID, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void SyncDeleteRecordSchedule(const Brx& aRecordScheduleID) = 0;
    virtual void BeginDeleteRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor) = 0;
    virtual void EndDeleteRecordSchedule(IAsync& aAsync) = 0;
    virtual void SyncGetRecordSchedule(const Brx& aRecordScheduleID, const Brx& aFilter, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void BeginGetRecordSchedule(const Brx& aRecordScheduleID, const Brx& aFilter, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRecordSchedule(IAsync& aAsync, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void SyncEnableRecordSchedule(const Brx& aRecordScheduleID) = 0;
    virtual void BeginEnableRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor) = 0;
    virtual void EndEnableRecordSchedule(IAsync& aAsync) = 0;
    virtual void SyncDisableRecordSchedule(const Brx& aRecordScheduleID) = 0;
    virtual void BeginDisableRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor) = 0;
    virtual void EndDisableRecordSchedule(IAsync& aAsync) = 0;
    virtual void SyncDeleteRecordTask(const Brx& aRecordTaskID) = 0;
    virtual void BeginDeleteRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor) = 0;
    virtual void EndDeleteRecordTask(IAsync& aAsync) = 0;
    virtual void SyncGetRecordTask(const Brx& aRecordTaskID, const Brx& aFilter, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void BeginGetRecordTask(const Brx& aRecordTaskID, const Brx& aFilter, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRecordTask(IAsync& aAsync, Brh& aResult, TUint& aUpdateID) = 0;
    virtual void SyncEnableRecordTask(const Brx& aRecordTaskID) = 0;
    virtual void BeginEnableRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor) = 0;
    virtual void EndEnableRecordTask(IAsync& aAsync) = 0;
    virtual void SyncDisableRecordTask(const Brx& aRecordTaskID) = 0;
    virtual void BeginDisableRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor) = 0;
    virtual void EndDisableRecordTask(IAsync& aAsync) = 0;
    virtual void SyncResetRecordTask(const Brx& aRecordTaskID) = 0;
    virtual void BeginResetRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor) = 0;
    virtual void EndResetRecordTask(IAsync& aAsync) = 0;
    virtual void SyncGetRecordScheduleConflicts(const Brx& aRecordScheduleID, Brh& aRecordScheduleConflictIDList, TUint& aUpdateID) = 0;
    virtual void BeginGetRecordScheduleConflicts(const Brx& aRecordScheduleID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRecordScheduleConflicts(IAsync& aAsync, Brh& aRecordScheduleConflictIDList, TUint& aUpdateID) = 0;
    virtual void SyncGetRecordTaskConflicts(const Brx& aRecordTaskID, Brh& aRecordTaskConflictIDList, TUint& aUpdateID) = 0;
    virtual void BeginGetRecordTaskConflicts(const Brx& aRecordTaskID, FunctorAsync& aFunctor) = 0;
    virtual void EndGetRecordTaskConflicts(IAsync& aAsync, Brh& aRecordTaskConflictIDList, TUint& aUpdateID) = 0;
    virtual void SetPropertyLastChangeChanged(Functor& aLastChangeChanged) = 0;
    virtual void PropertyLastChange(Brhz& aLastChange) const = 0;
};

/**
 * Proxy for upnp.org:ScheduledRecording:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgScheduledRecording1 : public ICpProxyUpnpOrgScheduledRecording1
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
    CpProxyUpnpOrgScheduledRecording1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgScheduledRecording1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSortCaps
     * @param[out] aSortLevelCap
     */
    void SyncGetSortCapabilities(Brh& aSortCaps, TUint& aSortLevelCap);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSortCapabilities().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSortCapabilities(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSortCaps
     * @param[out] aSortLevelCap
     */
    void EndGetSortCapabilities(IAsync& aAsync, Brh& aSortCaps, TUint& aSortLevelCap);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDataTypeID
     * @param[out] aPropertyList
     */
    void SyncGetPropertyList(const Brx& aDataTypeID, Brh& aPropertyList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPropertyList().
     *
     * @param[in] aDataTypeID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPropertyList(const Brx& aDataTypeID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPropertyList
     */
    void EndGetPropertyList(IAsync& aAsync, Brh& aPropertyList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDataTypeID
     * @param[in]  aFilter
     * @param[out] aPropertyInfo
     */
    void SyncGetAllowedValues(const Brx& aDataTypeID, const Brx& aFilter, Brh& aPropertyInfo);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAllowedValues().
     *
     * @param[in] aDataTypeID
     * @param[in] aFilter
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAllowedValues(const Brx& aDataTypeID, const Brx& aFilter, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPropertyInfo
     */
    void EndGetAllowedValues(IAsync& aAsync, Brh& aPropertyInfo);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aId
     */
    void SyncGetStateUpdateID(TUint& aId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetStateUpdateID().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetStateUpdateID(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aId
     */
    void EndGetStateUpdateID(IAsync& aAsync, TUint& aId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aFilter
     * @param[in]  aStartingIndex
     * @param[in]  aRequestedCount
     * @param[in]  aSortCriteria
     * @param[out] aResult
     * @param[out] aNumberReturned
     * @param[out] aTotalMatches
     * @param[out] aUpdateID
     */
    void SyncBrowseRecordSchedules(const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBrowseRecordSchedules().
     *
     * @param[in] aFilter
     * @param[in] aStartingIndex
     * @param[in] aRequestedCount
     * @param[in] aSortCriteria
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBrowseRecordSchedules(const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResult
     * @param[out] aNumberReturned
     * @param[out] aTotalMatches
     * @param[out] aUpdateID
     */
    void EndBrowseRecordSchedules(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     * @param[in]  aFilter
     * @param[in]  aStartingIndex
     * @param[in]  aRequestedCount
     * @param[in]  aSortCriteria
     * @param[out] aResult
     * @param[out] aNumberReturned
     * @param[out] aTotalMatches
     * @param[out] aUpdateID
     */
    void SyncBrowseRecordTasks(const Brx& aRecordScheduleID, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBrowseRecordTasks().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFilter
     * @param[in] aStartingIndex
     * @param[in] aRequestedCount
     * @param[in] aSortCriteria
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBrowseRecordTasks(const Brx& aRecordScheduleID, const Brx& aFilter, TUint aStartingIndex, TUint aRequestedCount, const Brx& aSortCriteria, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResult
     * @param[out] aNumberReturned
     * @param[out] aTotalMatches
     * @param[out] aUpdateID
     */
    void EndBrowseRecordTasks(IAsync& aAsync, Brh& aResult, TUint& aNumberReturned, TUint& aTotalMatches, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aElements
     * @param[out] aRecordScheduleID
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void SyncCreateRecordSchedule(const Brx& aElements, Brh& aRecordScheduleID, Brh& aResult, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCreateRecordSchedule().
     *
     * @param[in] aElements
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCreateRecordSchedule(const Brx& aElements, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRecordScheduleID
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void EndCreateRecordSchedule(IAsync& aAsync, Brh& aRecordScheduleID, Brh& aResult, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     */
    void SyncDeleteRecordSchedule(const Brx& aRecordScheduleID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeleteRecordSchedule().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeleteRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDeleteRecordSchedule(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     * @param[in]  aFilter
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void SyncGetRecordSchedule(const Brx& aRecordScheduleID, const Brx& aFilter, Brh& aResult, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRecordSchedule().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFilter
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRecordSchedule(const Brx& aRecordScheduleID, const Brx& aFilter, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void EndGetRecordSchedule(IAsync& aAsync, Brh& aResult, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     */
    void SyncEnableRecordSchedule(const Brx& aRecordScheduleID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEnableRecordSchedule().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEnableRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEnableRecordSchedule(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     */
    void SyncDisableRecordSchedule(const Brx& aRecordScheduleID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDisableRecordSchedule().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDisableRecordSchedule(const Brx& aRecordScheduleID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDisableRecordSchedule(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     */
    void SyncDeleteRecordTask(const Brx& aRecordTaskID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeleteRecordTask().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeleteRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDeleteRecordTask(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     * @param[in]  aFilter
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void SyncGetRecordTask(const Brx& aRecordTaskID, const Brx& aFilter, Brh& aResult, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRecordTask().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFilter
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRecordTask(const Brx& aRecordTaskID, const Brx& aFilter, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResult
     * @param[out] aUpdateID
     */
    void EndGetRecordTask(IAsync& aAsync, Brh& aResult, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     */
    void SyncEnableRecordTask(const Brx& aRecordTaskID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEnableRecordTask().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEnableRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEnableRecordTask(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     */
    void SyncDisableRecordTask(const Brx& aRecordTaskID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDisableRecordTask().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDisableRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndDisableRecordTask(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     */
    void SyncResetRecordTask(const Brx& aRecordTaskID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndResetRecordTask().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginResetRecordTask(const Brx& aRecordTaskID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndResetRecordTask(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordScheduleID
     * @param[out] aRecordScheduleConflictIDList
     * @param[out] aUpdateID
     */
    void SyncGetRecordScheduleConflicts(const Brx& aRecordScheduleID, Brh& aRecordScheduleConflictIDList, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRecordScheduleConflicts().
     *
     * @param[in] aRecordScheduleID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRecordScheduleConflicts(const Brx& aRecordScheduleID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRecordScheduleConflictIDList
     * @param[out] aUpdateID
     */
    void EndGetRecordScheduleConflicts(IAsync& aAsync, Brh& aRecordScheduleConflictIDList, TUint& aUpdateID);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aRecordTaskID
     * @param[out] aRecordTaskConflictIDList
     * @param[out] aUpdateID
     */
    void SyncGetRecordTaskConflicts(const Brx& aRecordTaskID, Brh& aRecordTaskConflictIDList, TUint& aUpdateID);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetRecordTaskConflicts().
     *
     * @param[in] aRecordTaskID
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetRecordTaskConflicts(const Brx& aRecordTaskID, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRecordTaskConflictIDList
     * @param[out] aUpdateID
     */
    void EndGetRecordTaskConflicts(IAsync& aAsync, Brh& aRecordTaskConflictIDList, TUint& aUpdateID);

    /**
     * Set a callback to be run when the LastChange state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgScheduledRecording1 instance will not overlap.
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
    Action* iActionGetSortCapabilities;
    Action* iActionGetPropertyList;
    Action* iActionGetAllowedValues;
    Action* iActionGetStateUpdateID;
    Action* iActionBrowseRecordSchedules;
    Action* iActionBrowseRecordTasks;
    Action* iActionCreateRecordSchedule;
    Action* iActionDeleteRecordSchedule;
    Action* iActionGetRecordSchedule;
    Action* iActionEnableRecordSchedule;
    Action* iActionDisableRecordSchedule;
    Action* iActionDeleteRecordTask;
    Action* iActionGetRecordTask;
    Action* iActionEnableRecordTask;
    Action* iActionDisableRecordTask;
    Action* iActionResetRecordTask;
    Action* iActionGetRecordScheduleConflicts;
    Action* iActionGetRecordTaskConflicts;
    PropertyString* iLastChange;
    Functor iLastChangeChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_UPNPORGSCHEDULEDRECORDING1

