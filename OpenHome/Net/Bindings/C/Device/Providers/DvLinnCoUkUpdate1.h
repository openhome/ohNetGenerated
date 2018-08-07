/**
 * Provider for the linn.co.uk:Update:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKUPDATE1_C
#define HEADER_DVLINNCOUKUPDATE1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkUpdate1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PushManifest action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionPushManifest
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1PushManifest)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aUri);
/**
 * Callback which runs when the SetUpdateFeedParams action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionSetUpdateFeedParams
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aTopic
 * @param[in]  aChannel
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1SetUpdateFeedParams)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aTopic, const char* aChannel);
/**
 * Callback which runs when the GetUpdateFeedParams action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionGetUpdateFeedParams
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aTopic
 * @param[out] aChannel
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1GetUpdateFeedParams)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aTopic, char** aChannel);
/**
 * Callback which runs when the GetSoftwareStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionGetSoftwareStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSoftwareStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1GetSoftwareStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSoftwareStatus);
/**
 * Callback which runs when the GetExecutorStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionGetExecutorStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aExecutorStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1GetExecutorStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aExecutorStatus);
/**
 * Callback which runs when the Apply action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionApply
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1Apply)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Restore action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkUpdate1EnableActionRestore
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackUpdate1Restore)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkUpdate1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1Destroy(THandle aProvider);

/**
 * Enable the SoftwareStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnablePropertySoftwareStatus(THandle aProvider);
/**
 * Enable the ExecutorStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyExecutorStatus(THandle aProvider);
/**
 * Enable the UpdateTopic property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyUpdateTopic(THandle aProvider);
/**
 * Enable the UpdateChannel property.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyUpdateChannel(THandle aProvider);

/**
 * Register a callback for the action PushManifest
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionPushManifest(THandle aProvider, CallbackUpdate1PushManifest aCallback, void* aPtr);
/**
 * Register a callback for the action SetUpdateFeedParams
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionSetUpdateFeedParams(THandle aProvider, CallbackUpdate1SetUpdateFeedParams aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateFeedParams
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetUpdateFeedParams(THandle aProvider, CallbackUpdate1GetUpdateFeedParams aCallback, void* aPtr);
/**
 * Register a callback for the action GetSoftwareStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate1GetSoftwareStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetExecutorStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate1GetExecutorStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Apply
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionApply(THandle aProvider, CallbackUpdate1Apply aCallback, void* aPtr);
/**
 * Register a callback for the action Restore
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1EnableActionRestore(THandle aProvider, CallbackUpdate1Restore aCallback, void* aPtr);

/**
 * Set the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SoftwareStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertySoftwareStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1GetPropertySoftwareStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ExecutorStatus property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyExecutorStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1GetPropertyExecutorStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateTopic property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyUpdateTopic has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyUpdateTopic(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateTopic property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyUpdateTopic has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1GetPropertyUpdateTopic(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateChannel property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyUpdateChannel has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyUpdateChannel(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateChannel property
 *
 * Can only be called if DvProviderLinnCoUkUpdate1EnablePropertyUpdateChannel has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkUpdate1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkUpdate1GetPropertyUpdateChannel(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKUPDATE1_C

