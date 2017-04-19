/**
 * Provider for the linn.co.uk:Cloud:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKCLOUD1_C
#define HEADER_DVLINNCOUKCLOUD1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkCloud1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetChallengeResponse action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionGetChallengeResponse
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChallenge
 * @param[out] aResponse
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1GetChallengeResponse)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChallenge, char** aResponse);
/**
 * Callback which runs when the SetControlEnabled action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionSetControlEnabled
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aEnabled
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1SetControlEnabled)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aEnabled);
/**
 * Callback which runs when the GetControlEnabled action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionGetControlEnabled
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aEnabled
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1GetControlEnabled)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aEnabled);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkCloud1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1Destroy(THandle aProvider);

/**
 * Enable the ControlEnabled property.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnablePropertyControlEnabled(THandle aProvider);

/**
 * Register a callback for the action GetChallengeResponse
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionGetChallengeResponse(THandle aProvider, CallbackCloud1GetChallengeResponse aCallback, void* aPtr);
/**
 * Register a callback for the action SetControlEnabled
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionSetControlEnabled(THandle aProvider, CallbackCloud1SetControlEnabled aCallback, void* aPtr);
/**
 * Register a callback for the action GetControlEnabled
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionGetControlEnabled(THandle aProvider, CallbackCloud1GetControlEnabled aCallback, void* aPtr);

/**
 * Set the value of the ControlEnabled property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyControlEnabled has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyControlEnabled(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ControlEnabled property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyControlEnabled has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1GetPropertyControlEnabled(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKCLOUD1_C

