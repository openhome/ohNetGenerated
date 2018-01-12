/**
 * Provider for the linn.co.uk:Exakt:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKEXAKT1_C
#define HEADER_DVLINNCOUKEXAKT1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkExakt1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the DeviceList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionDeviceList
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
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionDeviceSettings
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
 * Callback which runs when the SettingsAvailable action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionSettingsAvailable
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsAvailable
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1SettingsAvailable)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSettingsAvailable);
/**
 * Callback which runs when the SettingsChangedCount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionSettingsChangedCount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSettingsChangedCount
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1SettingsChangedCount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSettingsChangedCount);
/**
 * Callback which runs when the Update action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifestUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1Update)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifestUri);
/**
 * Callback which runs when the UpdateBlocking action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionUpdateBlocking
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aManifestUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1UpdateBlocking)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aManifestUri);
/**
 * Callback which runs when the GetUpdateStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionGetUpdateStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aUpdateStatus
 * @param[out] aUpdateTotalPercentage
 * @param[out] aUpdateTotalJobs
 * @param[out] aUpdateJob
 * @param[out] aUpdateJobPercentage
 * @param[out] aUpdateJobDescription
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1GetUpdateStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aUpdateStatus, uint32_t* aUpdateTotalPercentage, uint32_t* aUpdateTotalJobs, uint32_t* aUpdateJob, uint32_t* aUpdateJobPercentage, char** aUpdateJobDescription);
/**
 * Callback which runs when the ChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1ChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aChannelMap);
/**
 * Callback which runs when the SetChannelMap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionSetChannelMap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannelMap
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1SetChannelMap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannelMap);
/**
 * Callback which runs when the AudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1AudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aAudioChannels);
/**
 * Callback which runs when the SetAudioChannels action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionSetAudioChannels
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aAudioChannels
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1SetAudioChannels)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aAudioChannels);
/**
 * Callback which runs when the Version action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExakt1EnableActionVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExakt1Version)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVersion);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkExakt1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1Destroy(THandle aProvider);

/**
 * Enable the DeviceList property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyDeviceList(THandle aProvider);
/**
 * Enable the SettingsAvailable property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertySettingsAvailable(THandle aProvider);
/**
 * Enable the SettingsChangedCount property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertySettingsChangedCount(THandle aProvider);
/**
 * Enable the UpdateStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateStatus(THandle aProvider);
/**
 * Enable the UpdateTotalPercentage property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalPercentage(THandle aProvider);
/**
 * Enable the UpdateTotalJobs property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalJobs(THandle aProvider);
/**
 * Enable the UpdateJob property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJob(THandle aProvider);
/**
 * Enable the UpdateJobPercentage property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJobPercentage(THandle aProvider);
/**
 * Enable the UpdateJobDescription property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJobDescription(THandle aProvider);
/**
 * Enable the ChannelMap property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyChannelMap(THandle aProvider);
/**
 * Enable the AudioChannels property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyAudioChannels(THandle aProvider);
/**
 * Enable the Version property.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnablePropertyVersion(THandle aProvider);

/**
 * Register a callback for the action DeviceList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionDeviceList(THandle aProvider, CallbackExakt1DeviceList aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceSettings
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionDeviceSettings(THandle aProvider, CallbackExakt1DeviceSettings aCallback, void* aPtr);
/**
 * Register a callback for the action SettingsAvailable
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionSettingsAvailable(THandle aProvider, CallbackExakt1SettingsAvailable aCallback, void* aPtr);
/**
 * Register a callback for the action SettingsChangedCount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionSettingsChangedCount(THandle aProvider, CallbackExakt1SettingsChangedCount aCallback, void* aPtr);
/**
 * Register a callback for the action Update
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionUpdate(THandle aProvider, CallbackExakt1Update aCallback, void* aPtr);
/**
 * Register a callback for the action UpdateBlocking
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionUpdateBlocking(THandle aProvider, CallbackExakt1UpdateBlocking aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt1GetUpdateStatus aCallback, void* aPtr);
/**
 * Register a callback for the action ChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionChannelMap(THandle aProvider, CallbackExakt1ChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action SetChannelMap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionSetChannelMap(THandle aProvider, CallbackExakt1SetChannelMap aCallback, void* aPtr);
/**
 * Register a callback for the action AudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionAudioChannels(THandle aProvider, CallbackExakt1AudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action SetAudioChannels
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionSetAudioChannels(THandle aProvider, CallbackExakt1SetAudioChannels aCallback, void* aPtr);
/**
 * Register a callback for the action Version
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1EnableActionVersion(THandle aProvider, CallbackExakt1Version aCallback, void* aPtr);

/**
 * Set the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceList property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyDeviceList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyDeviceList(THandle aProvider, char** aValue);
/**
 * Set the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsAvailable property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertySettingsAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SettingsChangedCount property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertySettingsChangedCount has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertySettingsChangedCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SettingsChangedCount property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertySettingsChangedCount has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertySettingsChangedCount(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateStatus property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateTotalPercentage property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalPercentage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateTotalPercentage(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateTotalPercentage property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalPercentage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateTotalPercentage(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UpdateTotalJobs property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalJobs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateTotalJobs(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateTotalJobs property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalJobs has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateTotalJobs(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UpdateJob property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJob has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJob(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateJob property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJob has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJob(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UpdateJobPercentage property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJobPercentage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJobPercentage(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateJobPercentage property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJobPercentage has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJobPercentage(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UpdateJobDescription property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJobDescription has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJobDescription(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateJobDescription property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyUpdateJobDescription has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJobDescription(THandle aProvider, char** aValue);
/**
 * Set the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ChannelMap property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyChannelMap has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyChannelMap(THandle aProvider, char** aValue);
/**
 * Set the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AudioChannels property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyAudioChannels has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyAudioChannels(THandle aProvider, char** aValue);
/**
 * Set the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Version property
 *
 * Can only be called if DvProviderLinnCoUkExakt1EnablePropertyVersion has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExakt1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkExakt1GetPropertyVersion(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKEXAKT1_C

