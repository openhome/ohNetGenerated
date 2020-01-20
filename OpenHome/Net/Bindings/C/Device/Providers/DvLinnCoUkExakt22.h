/**
 * Provider for the linn.co.uk:Exakt2:2 UPnP service
 */
#ifndef HEADER_DVLINNCOUKEXAKT22_C
#define HEADER_DVLINNCOUKEXAKT22_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkExakt22
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetDeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetDeviceList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetDeviceList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aList);
/**
 * Callback which runs when the GetDeviceSettings action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetDeviceSettings
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aDeviceId
 * @param[out] aSettings
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetDeviceSettings)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aDeviceId, char** aSettings);
/**
 * Callback which runs when the GetSettingsAvailable action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetSettingsAvailable
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsAvailable
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetSettingsAvailable)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSettingsAvailable);
/**
 * Callback which runs when the GetSettingsChangedSeq action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetSettingsChangedSeq
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsChangedSeq
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetSettingsChangedSeq)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSettingsChangedSeq);
/**
 * Callback which runs when the Update action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifest
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22Update)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifest);
/**
 * Callback which runs when the UpdateBlocking action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionUpdateBlocking
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifest
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22UpdateBlocking)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifest);
/**
 * Callback which runs when the GetUpdateStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetUpdateStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aUpdateStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetUpdateStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aUpdateStatus);
/**
 * Callback which runs when the GetChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aChannelMap);
/**
 * Callback which runs when the GetAudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetAudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aAudioChannels);
/**
 * Callback which runs when the GetVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVersion);
/**
 * Callback which runs when the ApplyUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionApplyUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22ApplyUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the PlayTestTrack action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionPlayTestTrack
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannelMap
 * @param[in]  aUri
 * @param[in]  aMetadata
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22PlayTestTrack)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannelMap, const char* aUri, const char* aMetadata);
/**
 * Callback which runs when the ClearTestTrack action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionClearTestTrack
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22ClearTestTrack)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetIntegratedDevicesPresent action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetIntegratedDevicesPresent
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIntegratedDevicesPresent
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetIntegratedDevicesPresent)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aIntegratedDevicesPresent);
/**
 * Callback which runs when the BootIntegratedDevicesToFallback action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionBootIntegratedDevicesToFallback
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22BootIntegratedDevicesToFallback)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetTestTrackPlaying action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt22EnableActionGetTestTrackPlaying
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aTestTrackPlaying
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt22GetTestTrackPlaying)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aTestTrackPlaying);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkExakt22Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the SettingsAvailable property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertySettingsAvailable(THandle aProvider);
/**
 * Enable the SettingsChangedSeq property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertySettingsChangedSeq(THandle aProvider);
/**
 * Enable the UpdateStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyUpdateStatus(THandle aProvider);
/**
 * Enable the ChannelMap property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyChannelMap(THandle aProvider);
/**
 * Enable the AudioChannels property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyAudioChannels(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyVersion(THandle aProvider);
/**
 * Enable the IntegratedDevicesPresent property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyIntegratedDevicesPresent(THandle aProvider);
/**
 * Enable the TestTrackPlaying property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnablePropertyTestTrackPlaying(THandle aProvider);

/**
 * Register a callback for the action GetDeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetDeviceList(THandle aProvider, CallbackExakt22GetDeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action GetDeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetDeviceSettings(THandle aProvider, CallbackExakt22GetDeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action GetSettingsAvailable
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetSettingsAvailable(THandle aProvider, CallbackExakt22GetSettingsAvailable aCallback, void* aPtr);
/**
 * Register a callback for the action GetSettingsChangedSeq
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetSettingsChangedSeq(THandle aProvider, CallbackExakt22GetSettingsChangedSeq aCallback, void* aPtr);
/**
 * Register a callback for the action Update
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionUpdate(THandle aProvider, CallbackExakt22Update aCallback, void* aPtr);
/**
 * Register a callback for the action UpdateBlocking
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionUpdateBlocking(THandle aProvider, CallbackExakt22UpdateBlocking aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt22GetUpdateStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetChannelMap(THandle aProvider, CallbackExakt22GetChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action GetAudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetAudioChannels(THandle aProvider, CallbackExakt22GetAudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action GetVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetVersion(THandle aProvider, CallbackExakt22GetVersion aCallback, void* aPtr);
/**
 * Register a callback for the action ApplyUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionApplyUpdate(THandle aProvider, CallbackExakt22ApplyUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action PlayTestTrack
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionPlayTestTrack(THandle aProvider, CallbackExakt22PlayTestTrack aCallback, void* aPtr);
/**
 * Register a callback for the action ClearTestTrack
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionClearTestTrack(THandle aProvider, CallbackExakt22ClearTestTrack aCallback, void* aPtr);
/**
 * Register a callback for the action GetIntegratedDevicesPresent
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt22GetIntegratedDevicesPresent aCallback, void* aPtr);
/**
 * Register a callback for the action BootIntegratedDevicesToFallback
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt22BootIntegratedDevicesToFallback aCallback, void* aPtr);
/**
 * Register a callback for the action GetTestTrackPlaying
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22EnableActionGetTestTrackPlaying(THandle aProvider, CallbackExakt22GetTestTrackPlaying aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SettingsChangedSeq property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertySettingsChangedSeq has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertySettingsChangedSeq(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsChangedSeq property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertySettingsChangedSeq has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertySettingsChangedSeq(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyUpdateStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyChannelMap(THandle aProvider, char** aValue);
/**
 * Set the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyAudioChannels(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyVersion(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IntegratedDevicesPresent property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyIntegratedDevicesPresent has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the TestTrackPlaying property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyTestTrackPlaying has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyTestTrackPlaying(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the TestTrackPlaying property
 *
 * Can only be called if DvProviderLinnCoUkExakt22EnablePropertyTestTrackPlaying has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt22Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt22GetPropertyTestTrackPlaying(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKEXAKT22_C

