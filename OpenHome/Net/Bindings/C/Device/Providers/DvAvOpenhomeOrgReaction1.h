/**
 * Provider for the av.openhome.org:Reaction:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGREACTION1_C
#define HEADER_DVAVOPENHOMEORGREACTION1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgReaction1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetCanReact action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgReaction1EnableActionGetCanReact
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aCanReact
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackReaction1GetCanReact)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aCanReact);
/**
 * Callback which runs when the GetCurrentReaction action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgReaction1EnableActionGetCurrentReaction
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aReaction
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackReaction1GetCurrentReaction)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aReaction);
/**
 * Callback which runs when the GetAvailableReactions action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgReaction1EnableActionGetAvailableReactions
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAvailableReactions
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackReaction1GetAvailableReactions)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aAvailableReactions);
/**
 * Callback which runs when the SetReaction action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgReaction1EnableActionSetReaction
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aReaction
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackReaction1SetReaction)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aReaction);
/**
 * Callback which runs when the ClearReaction action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgReaction1EnableActionClearReaction
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackReaction1ClearReaction)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgReaction1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1Destroy(THandle aProvider);

/**
 * Enable the CanReact property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyCanReact(THandle aProvider);
/**
 * Enable the CurrentReaction property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyCurrentReaction(THandle aProvider);
/**
 * Enable the AvailableReactions property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyAvailableReactions(THandle aProvider);

/**
 * Register a callback for the action GetCanReact
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetCanReact(THandle aProvider, CallbackReaction1GetCanReact aCallback, void* aPtr);
/**
 * Register a callback for the action GetCurrentReaction
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetCurrentReaction(THandle aProvider, CallbackReaction1GetCurrentReaction aCallback, void* aPtr);
/**
 * Register a callback for the action GetAvailableReactions
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetAvailableReactions(THandle aProvider, CallbackReaction1GetAvailableReactions aCallback, void* aPtr);
/**
 * Register a callback for the action SetReaction
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionSetReaction(THandle aProvider, CallbackReaction1SetReaction aCallback, void* aPtr);
/**
 * Register a callback for the action ClearReaction
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionClearReaction(THandle aProvider, CallbackReaction1ClearReaction aCallback, void* aPtr);

/**
 * Set the value of the CanReact property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyCanReact has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyCanReact(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanReact property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyCanReact has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyCanReact(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CurrentReaction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyCurrentReaction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyCurrentReaction(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CurrentReaction property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyCurrentReaction has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyCurrentReaction(THandle aProvider, char** aValue);
/**
 * Set the value of the AvailableReactions property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyAvailableReactions has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyAvailableReactions(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AvailableReactions property
 *
 * Can only be called if DvProviderAvOpenhomeOrgReaction1EnablePropertyAvailableReactions has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgReaction1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyAvailableReactions(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGREACTION1_C

