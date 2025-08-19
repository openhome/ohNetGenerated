/**
 * Provider for the linn.co.uk:Update:4 UPnP service
 */
#ifndef HEADER_DVLINNCOUKUPDATE4_C
#define HEADER_DVLINNCOUKUPDATE4_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkUpdate4
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PushManifest action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionPushManifest
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4PushManifest)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri);
/**
 * Callback which runs when the PushManifest2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionPushManifest2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4PushManifest2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri, uint32_t* aId);
/**
 * Callback which runs when the GetSoftwareStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionGetSoftwareStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSoftwareStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4GetSoftwareStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSoftwareStatus);
/**
 * Callback which runs when the GetExecutorStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionGetExecutorStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aExecutorStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4GetExecutorStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aExecutorStatus);
/**
 * Callback which runs when the GetJobStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionGetJobStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJobStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4GetJobStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aJobStatus);
/**
 * Callback which runs when the Apply action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionApply
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4Apply)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Apply2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionApply2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4Apply2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the Recover action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionRecover
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4Recover)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Recover2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionRecover2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4Recover2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the RecoverKeepStore action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4RecoverKeepStore)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the RecoverKeepStore2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4RecoverKeepStore2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aId);
/**
 * Callback which runs when the CheckNow action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionCheckNow
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4CheckNow)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetRecoverSupported action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate4EnableActionGetRecoverSupported
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aRecoverSupported
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate4GetRecoverSupported)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aRecoverSupported);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkUpdate4Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4Destroy(THandle aProvider);

/**
 * Enable the SoftwareStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnablePropertySoftwareStatus(THandle aProvider);
/**
 * Enable the ExecutorStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyExecutorStatus(THandle aProvider);
/**
 * Enable the JobStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyJobStatus(THandle aProvider);
/**
 * Enable the RecoverSupported property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyRecoverSupported(THandle aProvider);

/**
 * Register a callback for the action PushManifest
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionPushManifest(THandle aProvider, CallbackUpdate4PushManifest aCallback, void* aPtr);
/**
 * Register a callback for the action PushManifest2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionPushManifest2(THandle aProvider, CallbackUpdate4PushManifest2 aCallback, void* aPtr);
/**
 * Register a callback for the action GetSoftwareStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate4GetSoftwareStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetExecutorStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate4GetExecutorStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetJobStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetJobStatus(THandle aProvider, CallbackUpdate4GetJobStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Apply
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionApply(THandle aProvider, CallbackUpdate4Apply aCallback, void* aPtr);
/**
 * Register a callback for the action Apply2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionApply2(THandle aProvider, CallbackUpdate4Apply2 aCallback, void* aPtr);
/**
 * Register a callback for the action Recover
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecover(THandle aProvider, CallbackUpdate4Recover aCallback, void* aPtr);
/**
 * Register a callback for the action Recover2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecover2(THandle aProvider, CallbackUpdate4Recover2 aCallback, void* aPtr);
/**
 * Register a callback for the action RecoverKeepStore
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore(THandle aProvider, CallbackUpdate4RecoverKeepStore aCallback, void* aPtr);
/**
 * Register a callback for the action RecoverKeepStore2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore2(THandle aProvider, CallbackUpdate4RecoverKeepStore2 aCallback, void* aPtr);
/**
 * Register a callback for the action CheckNow
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionCheckNow(THandle aProvider, CallbackUpdate4CheckNow aCallback, void* aPtr);
/**
 * Register a callback for the action GetRecoverSupported
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetRecoverSupported(THandle aProvider, CallbackUpdate4GetRecoverSupported aCallback, void* aPtr);

/**
 * Set the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4GetPropertySoftwareStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4GetPropertyExecutorStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the JobStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyJobStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4GetPropertyJobStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the RecoverSupported property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyRecoverSupported has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyRecoverSupported(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the RecoverSupported property
 *
 * Can only be called if DvProviderLinnCoUkUpdate4EnablePropertyRecoverSupported has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate4GetPropertyRecoverSupported(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKUPDATE4_C

