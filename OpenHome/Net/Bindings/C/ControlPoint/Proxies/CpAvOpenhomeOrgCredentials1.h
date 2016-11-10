/**
 * Proxy for av.openhome.org:Credentials:1
 */
#ifndef HEADER_AVOPENHOMEORGCREDENTIALS1_C
#define HEADER_AVOPENHOMEORGCREDENTIALS1_C

#include <OpenHome/OsTypes.h>
#include <OpenHome/Defines.h>
#include <OpenHome/Net/C/Async.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/C/CpDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup CpProxyAvOpenhomeOrgCredentials1
 * @ingroup Proxies
 * @{
 */

/**
 * Constructor.
 * Creates an instance of CpProxyAvOpenhomeOrgCredentials1 without support for eventing.
 * Use CpProxyC[Un]Subscribe() to enable/disable querying of state variable and
 * reporting of their changes.
 *
 * @param[in]  aDevice   The device to use
 *
 * @return  Handle which should be used with all other functions in this header
 */
DllExport THandle STDCALL CpProxyAvOpenhomeOrgCredentials1Create(CpDeviceC aDevice);
/**
 * Destructor.
 * If any asynchronous method is in progress, this will block until they complete.
 * [Note that any methods still in progress are likely to complete with an error.]
 * Clients who have called CpProxyCSubscribe() do not need to call CpProxyCSubscribe()
 * before calling delete.  An unsubscribe will be triggered automatically when required.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1Destroy(THandle aHandle);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aUserName
 * @param[in]  aPassword
 * @param[in]  aPasswordLen
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncSet(THandle aHandle, const char* aId, const char* aUserName, const char* aPassword, uint32_t aPasswordLen);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aUserName
 * @param[in]  aPassword
 * @param[in]  aPasswordLen
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginSet(THandle aHandle, const char* aId, const char* aUserName, const char* aPassword, uint32_t aPasswordLen, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndSet(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncClear(THandle aHandle, const char* aId);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginClear(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndClear(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aEnabled
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncSetEnabled(THandle aHandle, const char* aId, uint32_t aEnabled);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aEnabled
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginSetEnabled(THandle aHandle, const char* aId, uint32_t aEnabled, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndSetEnabled(THandle aHandle, OhNetHandleAsync aAsync);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[out] aUserName
 * @param[out] aPassword
 * @param[out] aPasswordLen
 * @param[out] aEnabled
 * @param[out] aStatus
 * @param[out] aData
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGet(THandle aHandle, const char* aId, char** aUserName, char** aPassword, uint32_t* aPasswordLen, uint32_t* aEnabled, char** aStatus, char** aData);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGet(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aUserName
 * @param[out] aPassword
 * @param[in]  aPasswordLen
 * @param[out] aEnabled
 * @param[out] aStatus
 * @param[out] aData
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGet(THandle aHandle, OhNetHandleAsync aAsync, char** aUserName, char** aPassword, uint32_t* aPasswordLen, uint32_t* aEnabled, char** aStatus, char** aData);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[out] aToken
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncLogin(THandle aHandle, const char* aId, char** aToken);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginLogin(THandle aHandle, const char* aId, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aToken
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndLogin(THandle aHandle, OhNetHandleAsync aAsync, char** aToken);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aCurrentToken
 * @param[out] aNewToken
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncReLogin(THandle aHandle, const char* aId, const char* aCurrentToken, char** aNewToken);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aId
 * @param[in]  aCurrentToken
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginReLogin(THandle aHandle, const char* aId, const char* aCurrentToken, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aNewToken
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndReLogin(THandle aHandle, OhNetHandleAsync aAsync, char** aNewToken);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aIds
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetIds(THandle aHandle, char** aIds);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetIds(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aIds
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetIds(THandle aHandle, OhNetHandleAsync aAsync, char** aIds);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aPublicKey
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetPublicKey(THandle aHandle, char** aPublicKey);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aPublicKey
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aSequenceNumber
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1SyncGetSequenceNumber(THandle aHandle, uint32_t* aSequenceNumber);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1BeginGetSequenceNumber(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aSequenceNumber
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1EndGetSequenceNumber(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSequenceNumber);
/**
 * Set a callback to be run when the Ids state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertyIdsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the PublicKey state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the SequenceNumber state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyAvOpenhomeOrgCredentials1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyAvOpenhomeOrgCredentials1SetPropertySequenceNumberChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);

/**
 * Query the value of the Ids property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aIds
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertyIds(THandle aHandle, char** aIds);
/**
 * Query the value of the PublicKey property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aPublicKey
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertyPublicKey(THandle aHandle, char** aPublicKey);
/**
 * Query the value of the SequenceNumber property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyAvOpenhomeOrgCredentials1Create
 * @param[out] aSequenceNumber
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyAvOpenhomeOrgCredentials1PropertySequenceNumber(THandle aHandle, uint32_t* aSequenceNumber);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_AVOPENHOMEORGCREDENTIALS1_C

