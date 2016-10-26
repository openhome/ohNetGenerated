/**
 * Provider for the av.openhome.org:Exakt:3 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGEXAKT3_C
#define HEADER_DVAVOPENHOMEORGEXAKT3_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgExakt3
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the DeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3DeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the DeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3DeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the ConnectionStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionConnectionStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConnectionStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3ConnectionStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aConnectionStatus);
/**
 * Callback which runs when the Set action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionSet
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
typedef int32_t (STDCALL *CallbackExakt3Set)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist);
/**
 * Callback which runs when the Reprogram action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionReprogram
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3Reprogram)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ReprogramFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionReprogramFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3ReprogramFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3ChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aChannelMap);
/**
 * Callback which runs when the SetChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionSetChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3SetChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannelMap);
/**
 * Callback which runs when the Version action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt3EnableActionVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt3Version)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aVersion);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgExakt3Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the ConnectionStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyConnectionStatus(THandle aProvider);
/**
 * Enable the ChannelMap property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyChannelMap(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyVersion(THandle aProvider);

/**
 * Register a callback for the action DeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionDeviceList(THandle aProvider, CallbackExakt3DeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionDeviceSettings(THandle aProvider, CallbackExakt3DeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action ConnectionStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionConnectionStatus(THandle aProvider, CallbackExakt3ConnectionStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Set
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionSet(THandle aProvider, CallbackExakt3Set aCallback, void* aPtr);
/**
 * Register a callback for the action Reprogram
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionReprogram(THandle aProvider, CallbackExakt3Reprogram aCallback, void* aPtr);
/**
 * Register a callback for the action ReprogramFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionReprogramFallback(THandle aProvider, CallbackExakt3ReprogramFallback aCallback, void* aPtr);
/**
 * Register a callback for the action ChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionChannelMap(THandle aProvider, CallbackExakt3ChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action SetChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionSetChannelMap(THandle aProvider, CallbackExakt3SetChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action Version
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionVersion(THandle aProvider, CallbackExakt3Version aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyConnectionStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ChannelMap property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ChannelMap property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyChannelMap(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt3EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyVersion(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGEXAKT3_C

