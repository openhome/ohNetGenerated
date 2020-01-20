/**
 * Provider for the linn.co.uk:Update:3 UPnP service
 */
#ifndef HEADER_DVLINNCOUKUPDATE3_C
#define HEADER_DVLINNCOUKUPDATE3_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkUpdate3
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PushManifest action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionPushManifest
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3PushManifest)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri);
/**
 * Callback which runs when the PushManifest2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionPushManifest2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3PushManifest2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri, uint32_t* aId);
/**
 * Callback which runs when the GetSoftwareStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionGetSoftwareStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSoftwareStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3GetSoftwareStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSoftwareStatus);
/**
 * Callback which runs when the GetExecutorStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionGetExecutorStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aExecutorStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3GetExecutorStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aExecutorStatus);
/**
 * Callback which runs when the GetJobStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionGetJobStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJobStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3GetJobStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aJobStatus);
/**
 * Callback which runs when the Apply action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionApply
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3Apply)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Apply2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionApply2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3Apply2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the Recover action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionRecover
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3Recover)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Recover2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionRecover2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3Recover2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the CheckNow action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionCheckNow
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3CheckNow)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetRecoverSupported action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate3EnableActionGetRecoverSupported
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aRecoverSupported
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate3GetRecoverSupported)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aRecoverSupported);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkUpdate3Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3Destroy(THandle aProvider);

/**
 * Enable the SoftwareStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnablePropertySoftwareStatus(THandle aProvider);
/**
 * Enable the ExecutorStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyExecutorStatus(THandle aProvider);
/**
 * Enable the JobStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyJobStatus(THandle aProvider);
/**
 * Enable the RecoverSupported property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyRecoverSupported(THandle aProvider);

/**
 * Register a callback for the action PushManifest
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionPushManifest(THandle aProvider, CallbackUpdate3PushManifest aCallback, void* aPtr);
/**
 * Register a callback for the action PushManifest2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionPushManifest2(THandle aProvider, CallbackUpdate3PushManifest2 aCallback, void* aPtr);
/**
 * Register a callback for the action GetSoftwareStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate3GetSoftwareStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetExecutorStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate3GetExecutorStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetJobStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetJobStatus(THandle aProvider, CallbackUpdate3GetJobStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Apply
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionApply(THandle aProvider, CallbackUpdate3Apply aCallback, void* aPtr);
/**
 * Register a callback for the action Apply2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionApply2(THandle aProvider, CallbackUpdate3Apply2 aCallback, void* aPtr);
/**
 * Register a callback for the action Recover
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionRecover(THandle aProvider, CallbackUpdate3Recover aCallback, void* aPtr);
/**
 * Register a callback for the action Recover2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionRecover2(THandle aProvider, CallbackUpdate3Recover2 aCallback, void* aPtr);
/**
 * Register a callback for the action CheckNow
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionCheckNow(THandle aProvider, CallbackUpdate3CheckNow aCallback, void* aPtr);
/**
 * Register a callback for the action GetRecoverSupported
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetRecoverSupported(THandle aProvider, CallbackUpdate3GetRecoverSupported aCallback, void* aPtr);

/**
 * Set the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3GetPropertySoftwareStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3GetPropertyExecutorStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3GetPropertyJobStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the RecoverSupported property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyRecoverSupported has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyRecoverSupported(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the RecoverSupported property
 *
 * Can only be called if DvProviderLinnCoUkUpdate3EnablePropertyRecoverSupported has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate3GetPropertyRecoverSupported(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKUPDATE3_C

