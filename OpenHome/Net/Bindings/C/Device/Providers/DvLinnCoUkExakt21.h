/**
 * Provider for the linn.co.uk:Exakt2:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKEXAKT21_C
#define HEADER_DVLINNCOUKEXAKT21_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkExakt21
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetDeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetDeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the GetDeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetDeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the GetSettingsAvailable action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetSettingsAvailable
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsAvailable
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetSettingsAvailable)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSettingsAvailable);
/**
 * Callback which runs when the GetSettingsChangedSeq action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetSettingsChangedSeq
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsChangedSeq
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetSettingsChangedSeq)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSettingsChangedSeq);
/**
 * Callback which runs when the Update action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifest
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21Update)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifest);
/**
 * Callback which runs when the UpdateBlocking action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionUpdateBlocking
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifest
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21UpdateBlocking)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifest);
/**
 * Callback which runs when the GetUpdateStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetUpdateStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aUpdateStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetUpdateStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aUpdateStatus);
/**
 * Callback which runs when the GetChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aChannelMap);
/**
 * Callback which runs when the GetAudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetAudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aAudioChannels);
/**
 * Callback which runs when the GetVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVersion);
/**
 * Callback which runs when the ApplyUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionApplyUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21ApplyUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the PlayTestTrack action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionPlayTestTrack
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannelMap
 * @param[in]  aUri
 * @param[in]  aMetadata
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21PlayTestTrack)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannelMap, const char* aUri, const char* aMetadata);
/**
 * Callback which runs when the ClearTestTrack action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionClearTestTrack
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21ClearTestTrack)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetIntegratedDevicesPresent action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionGetIntegratedDevicesPresent
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIntegratedDevicesPresent
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21GetIntegratedDevicesPresent)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aIntegratedDevicesPresent);
/**
 * Callback which runs when the BootIntegratedDevicesToFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt21EnableActionBootIntegratedDevicesToFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt21BootIntegratedDevicesToFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkExakt21Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the SettingsAvailable property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertySettingsAvailable(THandle aProvider);
/**
 * Enable the SettingsChangedSeq property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertySettingsChangedSeq(THandle aProvider);
/**
 * Enable the UpdateStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyUpdateStatus(THandle aProvider);
/**
 * Enable the ChannelMap property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyChannelMap(THandle aProvider);
/**
 * Enable the AudioChannels property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyAudioChannels(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyVersion(THandle aProvider);
/**
 * Enable the IntegratedDevicesPresent property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnablePropertyIntegratedDevicesPresent(THandle aProvider);

/**
 * Register a callback for the action GetDeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetDeviceList(THandle aProvider, CallbackExakt21GetDeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action GetDeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetDeviceSettings(THandle aProvider, CallbackExakt21GetDeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action GetSettingsAvailable
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetSettingsAvailable(THandle aProvider, CallbackExakt21GetSettingsAvailable aCallback, void* aPtr);
/**
 * Register a callback for the action GetSettingsChangedSeq
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetSettingsChangedSeq(THandle aProvider, CallbackExakt21GetSettingsChangedSeq aCallback, void* aPtr);
/**
 * Register a callback for the action Update
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionUpdate(THandle aProvider, CallbackExakt21Update aCallback, void* aPtr);
/**
 * Register a callback for the action UpdateBlocking
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionUpdateBlocking(THandle aProvider, CallbackExakt21UpdateBlocking aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt21GetUpdateStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetChannelMap(THandle aProvider, CallbackExakt21GetChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action GetAudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetAudioChannels(THandle aProvider, CallbackExakt21GetAudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action GetVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetVersion(THandle aProvider, CallbackExakt21GetVersion aCallback, void* aPtr);
/**
 * Register a callback for the action ApplyUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionApplyUpdate(THandle aProvider, CallbackExakt21ApplyUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action PlayTestTrack
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionPlayTestTrack(THandle aProvider, CallbackExakt21PlayTestTrack aCallback, void* aPtr);
/**
 * Register a callback for the action ClearTestTrack
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionClearTestTrack(THandle aProvider, CallbackExakt21ClearTestTrack aCallback, void* aPtr);
/**
 * Register a callback for the action GetIntegratedDevicesPresent
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt21GetIntegratedDevicesPresent aCallback, void* aPtr);
/**
 * Register a callback for the action BootIntegratedDevicesToFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt21BootIntegratedDevicesToFallback aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SettingsChangedSeq property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertySettingsChangedSeq has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertySettingsChangedSeq(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsChangedSeq property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertySettingsChangedSeq has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertySettingsChangedSeq(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyUpdateStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyChannelMap(THandle aProvider, char** aValue);
/**
 * Set the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyAudioChannels(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyVersion(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderLinnCoUkExakt21EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt21Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt21GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKEXAKT21_C

