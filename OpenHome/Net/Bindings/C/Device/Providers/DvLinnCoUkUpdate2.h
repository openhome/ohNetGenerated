/**
 * Provider for the linn.co.uk:Update:2 UPnP service
 */
#ifndef HEADER_DVLINNCOUKUPDATE2_C
#define HEADER_DVLINNCOUKUPDATE2_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkUpdate2
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PushManifest action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionPushManifest
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2PushManifest)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri);
/**
 * Callback which runs when the PushManifest2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionPushManifest2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2PushManifest2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri, uint32_t* aId);
/**
 * Callback which runs when the GetSoftwareStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionGetSoftwareStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSoftwareStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2GetSoftwareStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSoftwareStatus);
/**
 * Callback which runs when the GetExecutorStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionGetExecutorStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aExecutorStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2GetExecutorStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aExecutorStatus);
/**
 * Callback which runs when the GetJobStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionGetJobStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJobStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2GetJobStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aJobStatus);
/**
 * Callback which runs when the Apply action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionApply
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2Apply)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Apply2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionApply2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2Apply2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the Recover action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionRecover
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2Recover)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Recover2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionRecover2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2Recover2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the CheckNow action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate2EnableActionCheckNow
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate2CheckNow)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkUpdate2Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2Destroy(THandle aProvider);

/**
 * Enable the SoftwareStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnablePropertySoftwareStatus(THandle aProvider);
/**
 * Enable the ExecutorStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnablePropertyExecutorStatus(THandle aProvider);
/**
 * Enable the JobStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnablePropertyJobStatus(THandle aProvider);

/**
 * Register a callback for the action PushManifest
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionPushManifest(THandle aProvider, CallbackUpdate2PushManifest aCallback, void* aPtr);
/**
 * Register a callback for the action PushManifest2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionPushManifest2(THandle aProvider, CallbackUpdate2PushManifest2 aCallback, void* aPtr);
/**
 * Register a callback for the action GetSoftwareStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate2GetSoftwareStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetExecutorStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate2GetExecutorStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetJobStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetJobStatus(THandle aProvider, CallbackUpdate2GetJobStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Apply
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionApply(THandle aProvider, CallbackUpdate2Apply aCallback, void* aPtr);
/**
 * Register a callback for the action Apply2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionApply2(THandle aProvider, CallbackUpdate2Apply2 aCallback, void* aPtr);
/**
 * Register a callback for the action Recover
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionRecover(THandle aProvider, CallbackUpdate2Recover aCallback, void* aPtr);
/**
 * Register a callback for the action Recover2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionRecover2(THandle aProvider, CallbackUpdate2Recover2 aCallback, void* aPtr);
/**
 * Register a callback for the action CheckNow
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2EnableActionCheckNow(THandle aProvider, CallbackUpdate2CheckNow aCallback, void* aPtr);

/**
 * Set the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2GetPropertySoftwareStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2GetPropertyExecutorStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate2EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate2GetPropertyJobStatus(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKUPDATE2_C

