/**
 * Provider for the linn.co.uk:Zones:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKZONES1_C
#define HEADER_DVLINNCOUKZONES1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkZones1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetInputs action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZones1EnableActionGetInputs
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aInputs
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZones1GetInputs)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aInputs);
/**
 * Callback which runs when the GetOutputs action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZones1EnableActionGetOutputs
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aOutputs
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZones1GetOutputs)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aOutputs);
/**
 * Callback which runs when the GetMappings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZones1EnableActionGetMappings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aMappings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZones1GetMappings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aMappings);
/**
 * Callback which runs when the SetMappings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZones1EnableActionSetMappings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aMappings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZones1SetMappings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aMappings);
/**
 * Callback which runs when the SetMapping action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZones1EnableActionSetMapping
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aOutput
 * @param[in]  aInput
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZones1SetMapping)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aOutput, const char* aInput);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkZones1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 */
DllExport void STDCALL DvProviderLinnCoUkZones1Destroy(THandle aProvider);

/**
 * Enable the Inputs property.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnablePropertyInputs(THandle aProvider);
/**
 * Enable the Outputs property.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnablePropertyOutputs(THandle aProvider);
/**
 * Enable the Mappings property.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnablePropertyMappings(THandle aProvider);

/**
 * Register a callback for the action GetInputs
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnableActionGetInputs(THandle aProvider, CallbackZones1GetInputs aCallback, void* aPtr);
/**
 * Register a callback for the action GetOutputs
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnableActionGetOutputs(THandle aProvider, CallbackZones1GetOutputs aCallback, void* aPtr);
/**
 * Register a callback for the action GetMappings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnableActionGetMappings(THandle aProvider, CallbackZones1GetMappings aCallback, void* aPtr);
/**
 * Register a callback for the action SetMappings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnableActionSetMappings(THandle aProvider, CallbackZones1SetMappings aCallback, void* aPtr);
/**
 * Register a callback for the action SetMapping
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZones1EnableActionSetMapping(THandle aProvider, CallbackZones1SetMapping aCallback, void* aPtr);

/**
 * Set the value of the Inputs property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyInputs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyInputs(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Inputs property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyInputs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1GetPropertyInputs(THandle aProvider, char** aValue);
/**
 * Set the value of the Outputs property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyOutputs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyOutputs(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Outputs property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyOutputs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1GetPropertyOutputs(THandle aProvider, char** aValue);
/**
 * Set the value of the Mappings property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyMappings has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyMappings(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Mappings property
 *
 * Can only be called if DvProviderLinnCoUkZones1EnablePropertyMappings has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZones1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkZones1GetPropertyMappings(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKZONES1_C

