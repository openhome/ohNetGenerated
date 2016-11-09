/**
 * Proxy for linn.co.uk:Privacy:1
 */
#ifndef HEADER_LINNCOUKPRIVACY1_C
#define HEADER_LINNCOUKPRIVACY1_C

#include <OpenHome/OsTypes.h>
#include <OpenHome/Defines.h>
#include <OpenHome/Net/C/Async.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/C/CpDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup CpProxyLinnCoUkPrivacy1
 * @ingroup Proxies
 * @{
 */

/**
 * Constructor.
 * Creates an instance of CpProxyLinnCoUkPrivacy1 without support for eventing.
 * Use CpProxyC[Un]Subscribe() to enable/disable querying of state variable and
 * reporting of their changes.
 *
 * @param[in]  aDevice   The device to use
 *
 * @return  Handle which should be used with all other functions in this header
 */
DllExport THandle STDCALL CpProxyLinnCoUkPrivacy1Create(CpDeviceC aDevice);
/**
 * Destructor.
 * If any asynchronous method is in progress, this will block until they complete.
 * [Note that any methods still in progress are likely to complete with an error.]
 * Clients who have called CpProxyCSubscribe() do not need to call CpProxyCSubscribe()
 * before calling delete.  An unsubscribe will be triggered automatically when required.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1Destroy(THandle aHandle);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aVersion
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyVersion(THandle aHandle, uint32_t* aVersion);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aVersion
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyVersion(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aVersion
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyAgreed(THandle aHandle, uint32_t* aVersion);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyAgreed(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aVersion
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyAgreed(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aDetails
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyDetails(THandle aHandle, char** aDetails);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyDetails(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 * @param[out] aDetails
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyDetails(THandle aHandle, OhNetHandleAsync aAsync, char** aDetails);

/**
 * Invoke the action synchronously.  Blocks until the action has been processed
 * on the device and sets any output arguments.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aDetails
 *
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncSetPolicyDetails(THandle aHandle, const char* aDetails);
/**
 * Invoke the action asynchronously.
 * Returns immediately and will run the client-specified callback when the action
 * later completes.  Any output arguments can then be retrieved by calling
 * EndGetProtocolInfo().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aDetails
 * @param[in]  aCallback Callback to run when the action completes.
 *                       This is guaranteed to be run but may indicate an error
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1BeginSetPolicyDetails(THandle aHandle, const char* aDetails, OhNetCallbackAsync aCallback, void* aPtr);
/**
 * Retrieve the output arguments from an asynchronously invoked action.
 * This may only be called from the callback set in the above Begin function.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aAsync    Argument passed to the callback set in the above Begin function
 *
 * @return  0 if the function succedded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1EndSetPolicyDetails(THandle aHandle, OhNetHandleAsync aAsync);
/**
 * Set a callback to be run when the PolicyVersion state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyLinnCoUkPrivacy1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the PolicyAgreed state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyLinnCoUkPrivacy1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyAgreedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);
/**
 * Set a callback to be run when the PolicyDetails state variable changes.
 *
 * Callbacks may be run in different threads but callbacks for a
 * CpProxyLinnCoUkPrivacy1 instance will not overlap.
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[in]  aCallback The callback to run when the state variable changes
 * @param[in]  aPtr      Data to be passed to the callback
 */
DllExport void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyDetailsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr);

/**
 * Query the value of the PolicyVersion property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aPolicyVersion
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyVersion(THandle aHandle, uint32_t* aPolicyVersion);
/**
 * Query the value of the PolicyAgreed property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aPolicyAgreed
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyAgreed(THandle aHandle, uint32_t* aPolicyAgreed);
/**
 * Query the value of the PolicyDetails property.
 *
 * This function is threadsafe and can only be called after the first callback
 * following a call to CpProxyCSubscribe() and before CpProxyCUnsubscribe().
 *
 * @param[in]  aHandle   Handle returned by CpProxyLinnCoUkPrivacy1Create
 * @param[out] aPolicyDetails
 * @return  0 if the function succeeded; non-zero if it failed.  State of output
 *          arguments is not guaranteed in the case of failure
 */
DllExport int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyDetails(THandle aHandle, char** aPolicyDetails);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_LINNCOUKPRIVACY1_C

