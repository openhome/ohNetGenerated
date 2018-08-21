/**
 * Provider for the av.openhome.org:Exakt:4 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGEXAKT4_C
#define HEADER_DVAVOPENHOMEORGEXAKT4_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgExakt4
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the DeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4DeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the DeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4DeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the ConnectionStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionConnectionStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConnectionStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4ConnectionStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aConnectionStatus);
/**
 * Callback which runs when the Set action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionSet
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
typedef int32_t (STDCALL *CallbackExakt4Set)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist);
/**
 * Callback which runs when the Reprogram action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionReprogram
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4Reprogram)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ReprogramFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionReprogramFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[in]  aFileUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4ReprogramFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, const char* aFileUri);
/**
 * Callback which runs when the ChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4ChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aChannelMap);
/**
 * Callback which runs when the SetChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionSetChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4SetChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannelMap);
/**
 * Callback which runs when the AudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4AudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aAudioChannels);
/**
 * Callback which runs when the SetAudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionSetAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4SetAudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aAudioChannels);
/**
 * Callback which runs when the Version action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4Version)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aVersion);
/**
 * Callback which runs when the GetIntegratedDevicesPresent action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionGetIntegratedDevicesPresent
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIntegratedDevicesPresent
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4GetIntegratedDevicesPresent)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aIntegratedDevicesPresent);
/**
 * Callback which runs when the BootIntegratedDevicesToFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgExakt4EnableActionBootIntegratedDevicesToFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt4BootIntegratedDevicesToFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgExakt4Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the ConnectionStatus property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyConnectionStatus(THandle aProvider);
/**
 * Enable the ChannelMap property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyChannelMap(THandle aProvider);
/**
 * Enable the AudioChannels property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyAudioChannels(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyVersion(THandle aProvider);
/**
 * Enable the IntegratedDevicesPresent property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyIntegratedDevicesPresent(THandle aProvider);

/**
 * Register a callback for the action DeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionDeviceList(THandle aProvider, CallbackExakt4DeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionDeviceSettings(THandle aProvider, CallbackExakt4DeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action ConnectionStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionConnectionStatus(THandle aProvider, CallbackExakt4ConnectionStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Set
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSet(THandle aProvider, CallbackExakt4Set aCallback, void* aPtr);
/**
 * Register a callback for the action Reprogram
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionReprogram(THandle aProvider, CallbackExakt4Reprogram aCallback, void* aPtr);
/**
 * Register a callback for the action ReprogramFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionReprogramFallback(THandle aProvider, CallbackExakt4ReprogramFallback aCallback, void* aPtr);
/**
 * Register a callback for the action ChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionChannelMap(THandle aProvider, CallbackExakt4ChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action SetChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSetChannelMap(THandle aProvider, CallbackExakt4SetChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action AudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionAudioChannels(THandle aProvider, CallbackExakt4AudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action SetAudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSetAudioChannels(THandle aProvider, CallbackExakt4SetAudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action Version
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionVersion(THandle aProvider, CallbackExakt4Version aCallback, void* aPtr);
/**
 * Register a callback for the action GetIntegratedDevicesPresent
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt4GetIntegratedDevicesPresent aCallback, void* aPtr);
/**
 * Register a callback for the action BootIntegratedDevicesToFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt4BootIntegratedDevicesToFallback aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ConnectionStatus property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyConnectionStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyConnectionStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ChannelMap property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ChannelMap property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyChannelMap(THandle aProvider, char** aValue);
/**
 * Set the value of the AudioChannels property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AudioChannels property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyAudioChannels(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyVersion(THandle aProvider, char** aValue);
/**
 * Set the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderAvOpenhomeOrgExakt4EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgExakt4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGEXAKT4_C

