/**
 * Provider for the av.openhome.org:Exakt:2 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGEXAKT2_C
#define HEADER_DVAVOPENHOMEORGEXAKT2_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgExakt2
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the DeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2DeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the DeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2DeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the ConnectionStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionConnectionStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConnectionStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2ConnectionStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aConnectionStatus);
/**
 * Callback which runs when the Set action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionSet
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
typedef int32_t (STDCALL *CallbackExakt2Set)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist);
/**
 * Callback which runs when the Reprogram action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionReprogram
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2Reprogram)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ReprogramFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionReprogramFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2ReprogramFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the Version action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt2EnableActionVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt2Version)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aVersion);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgExakt2Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the ConnectionStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyConnectionStatus(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyVersion(THandle aProvider);

/**
 * Register a callback for the action DeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionDeviceList(THandle aProvider, CallbackExakt2DeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionDeviceSettings(THandle aProvider, CallbackExakt2DeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action ConnectionStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionConnectionStatus(THandle aProvider, CallbackExakt2ConnectionStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Set
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionSet(THandle aProvider, CallbackExakt2Set aCallback, void* aPtr);
/**
 * Register a callback for the action Reprogram
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionReprogram(THandle aProvider, CallbackExakt2Reprogram aCallback, void* aPtr);
/**
 * Register a callback for the action ReprogramFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionReprogramFallback(THandle aProvider, CallbackExakt2ReprogramFallback aCallback, void* aPtr);
/**
 * Register a callback for the action Version
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionVersion(THandle aProvider, CallbackExakt2Version aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyConnectionStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt2EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyVersion(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGEXAKT2_C

