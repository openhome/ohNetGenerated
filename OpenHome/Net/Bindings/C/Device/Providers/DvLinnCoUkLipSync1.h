/**
 * Provider for the linn.co.uk:LipSync:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKLIPSYNC1_C
#define HEADER_DVLINNCOUKLIPSYNC1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkLipSync1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetDelay action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkLipSync1EnableActionSetDelay
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDelay
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackLipSync1SetDelay)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aDelay);
/**
 * Callback which runs when the Delay action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkLipSync1EnableActionDelay
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDelay
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackLipSync1Delay)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aDelay);
/**
 * Callback which runs when the DelayMinimum action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkLipSync1EnableActionDelayMinimum
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aMin
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackLipSync1DelayMinimum)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aMin);
/**
 * Callback which runs when the DelayMaximum action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkLipSync1EnableActionDelayMaximum
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aMax
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackLipSync1DelayMaximum)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aMax);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkLipSync1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1Destroy(THandle aProvider);

/**
 * Enable the Delay property.
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelay(THandle aProvider);
/**
 * Enable the DelayMinimum property.
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelayMinimum(THandle aProvider);
/**
 * Enable the DelayMaximum property.
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelayMaximum(THandle aProvider);

/**
 * Register a callback for the action SetDelay
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnableActionSetDelay(THandle aProvider, CallbackLipSync1SetDelay aCallback, void* aPtr);
/**
 * Register a callback for the action Delay
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelay(THandle aProvider, CallbackLipSync1Delay aCallback, void* aPtr);
/**
 * Register a callback for the action DelayMinimum
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelayMinimum(THandle aProvider, CallbackLipSync1DelayMinimum aCallback, void* aPtr);
/**
 * Register a callback for the action DelayMaximum
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelayMaximum(THandle aProvider, CallbackLipSync1DelayMaximum aCallback, void* aPtr);

/**
 * Set the value of the Delay property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelay has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelay(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Delay property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelay has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelay(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the DelayMinimum property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelayMinimum has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelayMinimum(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DelayMinimum property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelayMinimum has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelayMinimum(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the DelayMaximum property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelayMaximum has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelayMaximum(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DelayMaximum property
 *
 * Can only be called if DvProviderLinnCoUkLipSync1EnablePropertyDelayMaximum has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkLipSync1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelayMaximum(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKLIPSYNC1_C

