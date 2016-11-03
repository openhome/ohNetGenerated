/**
 * Provider for the linn.co.uk:Privacy:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKPRIVACY1_C
#define HEADER_DVLINNCOUKPRIVACY1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkPrivacy1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetPolicyVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkPrivacy1EnableActionGetPolicyVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPrivacy1GetPolicyVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVersion);
/**
 * Callback which runs when the GetPolicyAgreed action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkPrivacy1EnableActionGetPolicyAgreed
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPrivacy1GetPolicyAgreed)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVersion);
/**
 * Callback which runs when the SetPolicyAgreed action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkPrivacy1EnableActionSetPolicyAgreed
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aAgreed
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPrivacy1SetPolicyAgreed)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aAgreed);
/**
 * Callback which runs when the GetPolicyDetails action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkPrivacy1EnableActionGetPolicyDetails
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDetails
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPrivacy1GetPolicyDetails)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aDetails);
/**
 * Callback which runs when the SetPolicyDetails action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkPrivacy1EnableActionSetPolicyDetails
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDetails
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPrivacy1SetPolicyDetails)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDetails);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkPrivacy1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1Destroy(THandle aProvider);

/**
 * Enable the PolicyVersion property.
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyVersion(THandle aProvider);
/**
 * Enable the PolicyAgreed property.
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyAgreed(THandle aProvider);
/**
 * Enable the PolicyDetails property.
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnablePropertyPolicyDetails(THandle aProvider);

/**
 * Register a callback for the action GetPolicyVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyVersion(THandle aProvider, CallbackPrivacy1GetPolicyVersion aCallback, void* aPtr);
/**
 * Register a callback for the action GetPolicyAgreed
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyAgreed(THandle aProvider, CallbackPrivacy1GetPolicyAgreed aCallback, void* aPtr);
/**
 * Register a callback for the action SetPolicyAgreed
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnableActionSetPolicyAgreed(THandle aProvider, CallbackPrivacy1SetPolicyAgreed aCallback, void* aPtr);
/**
 * Register a callback for the action GetPolicyDetails
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnableActionGetPolicyDetails(THandle aProvider, CallbackPrivacy1GetPolicyDetails aCallback, void* aPtr);
/**
 * Register a callback for the action SetPolicyDetails
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1EnableActionSetPolicyDetails(THandle aProvider, CallbackPrivacy1SetPolicyDetails aCallback, void* aPtr);

/**
 * Set the value of the PolicyVersion property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PolicyVersion property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyVersion(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the PolicyAgreed property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyAgreed has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyAgreed(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PolicyAgreed property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyAgreed has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyAgreed(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the PolicyDetails property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyDetails has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkPrivacy1SetPropertyPolicyDetails(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PolicyDetails property
 *
 * Can only be called if DvProviderLinnCoUkPrivacy1EnablePropertyPolicyDetails has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkPrivacy1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkPrivacy1GetPropertyPolicyDetails(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKPRIVACY1_C

