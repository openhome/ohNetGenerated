/**
 * Provider for the av.openhome.org:Exakt:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGEXAKT1_C
#define HEADER_DVAVOPENHOMEORGEXAKT1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgExakt1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the DeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1DeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the DeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1DeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the ConnectionStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionConnectionStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConnectionStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1ConnectionStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aConnectionStatus);
/**
 * Callback which runs when the Set action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionSet
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aBankId
 * @param[in]  aFileUri
 * @param[in]  aMute
 * @param[in]  aPersist
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1Set)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist);
/**
 * Callback which runs when the Reprogram action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionReprogram
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1Reprogram)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ReprogramFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt1EnableActionReprogramFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1ReprogramFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgExakt1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the ConnectionStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnablePropertyConnectionStatus(THandle aProvider);

/**
 * Register a callback for the action DeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionDeviceList(THandle aProvider, CallbackExakt1DeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionDeviceSettings(THandle aProvider, CallbackExakt1DeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action ConnectionStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionConnectionStatus(THandle aProvider, CallbackExakt1ConnectionStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Set
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionSet(THandle aProvider, CallbackExakt1Set aCallback, void* aPtr);
/**
 * Register a callback for the action Reprogram
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionReprogram(THandle aProvider, CallbackExakt1Reprogram aCallback, void* aPtr);
/**
 * Register a callback for the action ReprogramFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionReprogramFallback(THandle aProvider, CallbackExakt1ReprogramFallback aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt1EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt1SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt1EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt1EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt1SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt1EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt1GetPropertyConnectionStatus(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGEXAKT1_C

