/**
 * Provider for the av.openhome.org:Transport:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGTRANSPORT1_C
#define HEADER_DVAVOPENHOMEORGTRANSPORT1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgTransport1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PlayAs action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionPlayAs
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aMode
 * @param[in]  aCommand
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1PlayAs)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aMode, const char* aCommand);
/**
 * Callback which runs when the Play action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionPlay
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Play)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Pause action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionPause
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Pause)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Stop action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionStop
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Stop)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Next action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionNext
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Next)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId);
/**
 * Callback which runs when the Prev action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionPrev
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Prev)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId);
/**
 * Callback which runs when the SeekSecondsAbsolute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsAbsolute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 * @param[in]  aSecondsAbsolute
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SeekSecondsAbsolute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId, uint32_t aSecondsAbsolute);
/**
 * Callback which runs when the SeekSecondsRelative action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsRelative
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 * @param[in]  aSecondsRelative
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SeekSecondsRelative)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId, int32_t aSecondsRelative);
/**
 * Callback which runs when the TransportState action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionTransportState
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aState
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1TransportState)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aState);
/**
 * Callback which runs when the Modes action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionModes
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aModes
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Modes)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aModes);
/**
 * Callback which runs when the ModeInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionModeInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aNextAvailable
 * @param[out] aPrevAvailable
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1ModeInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aNextAvailable, uint32_t* aPrevAvailable);
/**
 * Callback which runs when the StreamInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionStreamInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aStreamId
 * @param[out] aSeekable
 * @param[out] aPausable
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1StreamInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aStreamId, uint32_t* aSeekable, uint32_t* aPausable);
/**
 * Callback which runs when the StreamId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionStreamId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aStreamId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1StreamId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aStreamId);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgTransport1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1Destroy(THandle aProvider);

/**
 * Enable the Modes property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyModes(THandle aProvider);
/**
 * Enable the NextAvailable property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyNextAvailable(THandle aProvider);
/**
 * Enable the PrevAvailable property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyPrevAvailable(THandle aProvider);
/**
 * Enable the StreamId property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId(THandle aProvider);
/**
 * Enable the Seekable property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertySeekable(THandle aProvider);
/**
 * Enable the Pausable property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyPausable(THandle aProvider);
/**
 * Enable the TransportState property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState(THandle aProvider);

/**
 * Register a callback for the action PlayAs
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPlayAs(THandle aProvider, CallbackTransport1PlayAs aCallback, void* aPtr);
/**
 * Register a callback for the action Play
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPlay(THandle aProvider, CallbackTransport1Play aCallback, void* aPtr);
/**
 * Register a callback for the action Pause
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPause(THandle aProvider, CallbackTransport1Pause aCallback, void* aPtr);
/**
 * Register a callback for the action Stop
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStop(THandle aProvider, CallbackTransport1Stop aCallback, void* aPtr);
/**
 * Register a callback for the action Next
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionNext(THandle aProvider, CallbackTransport1Next aCallback, void* aPtr);
/**
 * Register a callback for the action Prev
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPrev(THandle aProvider, CallbackTransport1Prev aCallback, void* aPtr);
/**
 * Register a callback for the action SeekSecondsAbsolute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsAbsolute(THandle aProvider, CallbackTransport1SeekSecondsAbsolute aCallback, void* aPtr);
/**
 * Register a callback for the action SeekSecondsRelative
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsRelative(THandle aProvider, CallbackTransport1SeekSecondsRelative aCallback, void* aPtr);
/**
 * Register a callback for the action TransportState
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionTransportState(THandle aProvider, CallbackTransport1TransportState aCallback, void* aPtr);
/**
 * Register a callback for the action Modes
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionModes(THandle aProvider, CallbackTransport1Modes aCallback, void* aPtr);
/**
 * Register a callback for the action ModeInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionModeInfo(THandle aProvider, CallbackTransport1ModeInfo aCallback, void* aPtr);
/**
 * Register a callback for the action StreamInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStreamInfo(THandle aProvider, CallbackTransport1StreamInfo aCallback, void* aPtr);
/**
 * Register a callback for the action StreamId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStreamId(THandle aProvider, CallbackTransport1StreamId aCallback, void* aPtr);

/**
 * Set the value of the Modes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyModes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyModes(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Modes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyModes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyModes(THandle aProvider, char** aValue);
/**
 * Set the value of the NextAvailable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyNextAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyNextAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the NextAvailable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyNextAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyNextAvailable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the PrevAvailable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyPrevAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyPrevAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PrevAvailable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyPrevAvailable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyPrevAvailable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the StreamId property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyStreamId(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the StreamId property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyStreamId(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Seekable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertySeekable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertySeekable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Seekable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertySeekable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertySeekable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Pausable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyPausable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyPausable(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Pausable property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyPausable has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyPausable(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the TransportState property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the TransportState property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyTransportState(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1_C

