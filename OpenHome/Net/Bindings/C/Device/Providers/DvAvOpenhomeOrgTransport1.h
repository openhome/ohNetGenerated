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
 * Callback which runs when the SkipNext action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSkipNext
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SkipNext)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the SkipPrevious action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSkipPrevious
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SkipPrevious)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the SetRepeat action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSetRepeat
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aRepeat
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SetRepeat)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aRepeat);
/**
 * Callback which runs when the SetShuffle action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSetShuffle
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aShuffle
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SetShuffle)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aShuffle);
/**
 * Callback which runs when the SeekSecondAbsolute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondAbsolute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 * @param[in]  aSecondAbsolute
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SeekSecondAbsolute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId, uint32_t aSecondAbsolute);
/**
 * Callback which runs when the SeekSecondRelative action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondRelative
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aStreamId
 * @param[in]  aSecondRelative
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1SeekSecondRelative)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aStreamId, int32_t aSecondRelative);
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
 * @param[out] aCanSkipNext
 * @param[out] aCanSkipPrevious
 * @param[out] aCanRepeat
 * @param[out] aCanShuffle
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1ModeInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aCanSkipNext, uint32_t* aCanSkipPrevious, uint32_t* aCanRepeat, uint32_t* aCanShuffle);
/**
 * Callback which runs when the StreamInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionStreamInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aStreamId
 * @param[out] aCanSeek
 * @param[out] aCanPause
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1StreamInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aStreamId, uint32_t* aCanSeek, uint32_t* aCanPause);
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
 * Callback which runs when the Repeat action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionRepeat
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aRepeat
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Repeat)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aRepeat);
/**
 * Callback which runs when the Shuffle action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgTransport1EnableActionShuffle
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aShuffle
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackTransport1Shuffle)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aShuffle);

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
 * Enable the CanSkipNext property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipNext(THandle aProvider);
/**
 * Enable the CanSkipPrevious property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipPrevious(THandle aProvider);
/**
 * Enable the CanRepeat property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanRepeat(THandle aProvider);
/**
 * Enable the CanShuffle property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanShuffle(THandle aProvider);
/**
 * Enable the StreamId property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId(THandle aProvider);
/**
 * Enable the CanSeek property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSeek(THandle aProvider);
/**
 * Enable the CanPause property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanPause(THandle aProvider);
/**
 * Enable the TransportState property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState(THandle aProvider);
/**
 * Enable the Repeat property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeat(THandle aProvider);
/**
 * Enable the Shuffle property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyShuffle(THandle aProvider);

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
 * Register a callback for the action SkipNext
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSkipNext(THandle aProvider, CallbackTransport1SkipNext aCallback, void* aPtr);
/**
 * Register a callback for the action SkipPrevious
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSkipPrevious(THandle aProvider, CallbackTransport1SkipPrevious aCallback, void* aPtr);
/**
 * Register a callback for the action SetRepeat
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetRepeat(THandle aProvider, CallbackTransport1SetRepeat aCallback, void* aPtr);
/**
 * Register a callback for the action SetShuffle
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetShuffle(THandle aProvider, CallbackTransport1SetShuffle aCallback, void* aPtr);
/**
 * Register a callback for the action SeekSecondAbsolute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackTransport1SeekSecondAbsolute aCallback, void* aPtr);
/**
 * Register a callback for the action SeekSecondRelative
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondRelative(THandle aProvider, CallbackTransport1SeekSecondRelative aCallback, void* aPtr);
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
 * Register a callback for the action Repeat
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionRepeat(THandle aProvider, CallbackTransport1Repeat aCallback, void* aPtr);
/**
 * Register a callback for the action Shuffle
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionShuffle(THandle aProvider, CallbackTransport1Shuffle aCallback, void* aPtr);

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
 * Set the value of the CanSkipNext property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipNext has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSkipNext(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanSkipNext property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipNext has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSkipNext(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CanSkipPrevious property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipPrevious has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSkipPrevious(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanSkipPrevious property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipPrevious has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSkipPrevious(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CanRepeat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanRepeat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanRepeat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanRepeat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanRepeat(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CanShuffle property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanShuffle has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanShuffle property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanShuffle has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanShuffle(THandle aProvider, uint32_t* aValue);
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
 * Set the value of the CanSeek property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSeek has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSeek(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanSeek property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSeek has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSeek(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the CanPause property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanPause has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanPause(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CanPause property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyCanPause has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanPause(THandle aProvider, uint32_t* aValue);
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
/**
 * Set the value of the Repeat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Repeat property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeat has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRepeat(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Shuffle property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyShuffle has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Shuffle property
 *
 * Can only be called if DvProviderAvOpenhomeOrgTransport1EnablePropertyShuffle has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgTransport1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyShuffle(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1_C

