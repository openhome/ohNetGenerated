/**
 * Provider for the av.openhome.org:Volume:4 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGVOLUME4_C
#define HEADER_DVAVOPENHOMEORGVOLUME4_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgVolume4
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Characteristics action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionCharacteristics
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aVolumeMax
 * @param[out] aVolumeUnity
 * @param[out] aVolumeSteps
 * @param[out] aVolumeMilliDbPerStep
 * @param[out] aBalanceMax
 * @param[out] aFadeMax
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Characteristics)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax);
/**
 * Callback which runs when the SetVolume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetVolume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the VolumeInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the VolumeDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the SetVolumeNoUnmute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeNoUnmute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetVolumeNoUnmute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the VolumeIncNoUnmute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeIncNoUnmute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeIncNoUnmute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the VolumeDecNoUnmute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDecNoUnmute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeDecNoUnmute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Volume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Volume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the SetBalance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetBalance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t aValue);
/**
 * Callback which runs when the BalanceInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionBalanceInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4BalanceInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the BalanceDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionBalanceDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4BalanceDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Balance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Balance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t* aValue);
/**
 * Callback which runs when the SetFade action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetFade
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetFade)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t aValue);
/**
 * Callback which runs when the FadeInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionFadeInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4FadeInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the FadeDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionFadeDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4FadeDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Fade action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionFade
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Fade)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t* aValue);
/**
 * Callback which runs when the SetMute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetMute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the Mute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Mute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the VolumeLimit action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeLimit
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeLimit)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the UnityGain action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionUnityGain
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4UnityGain)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the VolumeOffset action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionVolumeOffset
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[out] aVolumeOffsetBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4VolumeOffset)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t* aVolumeOffsetBinaryMilliDb);
/**
 * Callback which runs when the SetVolumeOffset action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeOffset
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[in]  aVolumeOffsetBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetVolumeOffset)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb);
/**
 * Callback which runs when the Trim action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionTrim
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[out] aTrimBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4Trim)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t* aTrimBinaryMilliDb);
/**
 * Callback which runs when the SetTrim action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume4EnableActionSetTrim
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[in]  aTrimBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume4SetTrim)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t aTrimBinaryMilliDb);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgVolume4Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4Destroy(THandle aProvider);

/**
 * Enable the Volume property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolume(THandle aProvider);
/**
 * Enable the Mute property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyMute(THandle aProvider);
/**
 * Enable the Balance property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyBalance(THandle aProvider);
/**
 * Enable the Fade property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyFade(THandle aProvider);
/**
 * Enable the VolumeLimit property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeLimit(THandle aProvider);
/**
 * Enable the VolumeMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMax(THandle aProvider);
/**
 * Enable the VolumeUnity property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeUnity(THandle aProvider);
/**
 * Enable the VolumeSteps property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeSteps(THandle aProvider);
/**
 * Enable the VolumeMilliDbPerStep property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMilliDbPerStep(THandle aProvider);
/**
 * Enable the BalanceMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyBalanceMax(THandle aProvider);
/**
 * Enable the FadeMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyFadeMax(THandle aProvider);
/**
 * Enable the UnityGain property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyUnityGain(THandle aProvider);
/**
 * Enable the VolumeOffsets property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsets(THandle aProvider);
/**
 * Enable the VolumeOffsetMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsetMax(THandle aProvider);
/**
 * Enable the Trim property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyTrim(THandle aProvider);

/**
 * Register a callback for the action Characteristics
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionCharacteristics(THandle aProvider, CallbackVolume4Characteristics aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolume(THandle aProvider, CallbackVolume4SetVolume aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeInc(THandle aProvider, CallbackVolume4VolumeInc aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDec(THandle aProvider, CallbackVolume4VolumeDec aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolumeNoUnmute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeNoUnmute(THandle aProvider, CallbackVolume4SetVolumeNoUnmute aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeIncNoUnmute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeIncNoUnmute(THandle aProvider, CallbackVolume4VolumeIncNoUnmute aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeDecNoUnmute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDecNoUnmute(THandle aProvider, CallbackVolume4VolumeDecNoUnmute aCallback, void* aPtr);
/**
 * Register a callback for the action Volume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolume(THandle aProvider, CallbackVolume4Volume aCallback, void* aPtr);
/**
 * Register a callback for the action SetBalance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetBalance(THandle aProvider, CallbackVolume4SetBalance aCallback, void* aPtr);
/**
 * Register a callback for the action BalanceInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalanceInc(THandle aProvider, CallbackVolume4BalanceInc aCallback, void* aPtr);
/**
 * Register a callback for the action BalanceDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalanceDec(THandle aProvider, CallbackVolume4BalanceDec aCallback, void* aPtr);
/**
 * Register a callback for the action Balance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalance(THandle aProvider, CallbackVolume4Balance aCallback, void* aPtr);
/**
 * Register a callback for the action SetFade
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetFade(THandle aProvider, CallbackVolume4SetFade aCallback, void* aPtr);
/**
 * Register a callback for the action FadeInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFadeInc(THandle aProvider, CallbackVolume4FadeInc aCallback, void* aPtr);
/**
 * Register a callback for the action FadeDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFadeDec(THandle aProvider, CallbackVolume4FadeDec aCallback, void* aPtr);
/**
 * Register a callback for the action Fade
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFade(THandle aProvider, CallbackVolume4Fade aCallback, void* aPtr);
/**
 * Register a callback for the action SetMute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetMute(THandle aProvider, CallbackVolume4SetMute aCallback, void* aPtr);
/**
 * Register a callback for the action Mute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionMute(THandle aProvider, CallbackVolume4Mute aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeLimit
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeLimit(THandle aProvider, CallbackVolume4VolumeLimit aCallback, void* aPtr);
/**
 * Register a callback for the action UnityGain
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionUnityGain(THandle aProvider, CallbackVolume4UnityGain aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeOffset
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeOffset(THandle aProvider, CallbackVolume4VolumeOffset aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolumeOffset
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeOffset(THandle aProvider, CallbackVolume4SetVolumeOffset aCallback, void* aPtr);
/**
 * Register a callback for the action Trim
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionTrim(THandle aProvider, CallbackVolume4Trim aCallback, void* aPtr);
/**
 * Register a callback for the action SetTrim
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetTrim(THandle aProvider, CallbackVolume4SetTrim aCallback, void* aPtr);

/**
 * Set the value of the Volume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Volume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolume(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Mute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Mute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyMute(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Balance property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyBalance has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyBalance(THandle aProvider, int32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Balance property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyBalance has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyBalance(THandle aProvider, int32_t* aValue);
/**
 * Set the value of the Fade property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyFade has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyFade(THandle aProvider, int32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Fade property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyFade has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyFade(THandle aProvider, int32_t* aValue);
/**
 * Set the value of the VolumeLimit property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeLimit has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeLimit(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeLimit property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeLimit has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeLimit(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeUnity property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeUnity has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeUnity(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeUnity property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeUnity has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeUnity(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeSteps property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeSteps has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeSteps(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeSteps property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeSteps has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeSteps(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeMilliDbPerStep property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMilliDbPerStep has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeMilliDbPerStep property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMilliDbPerStep has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the BalanceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyBalanceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyBalanceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the BalanceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyBalanceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyBalanceMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the FadeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyFadeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyFadeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the FadeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyFadeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyFadeMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UnityGain property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyUnityGain has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyUnityGain(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UnityGain property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyUnityGain has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyUnityGain(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeOffsets property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsets has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeOffsets(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeOffsets property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsets has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeOffsets(THandle aProvider, char** aValue);
/**
 * Set the value of the VolumeOffsetMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsetMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeOffsetMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeOffsetMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsetMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeOffsetMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Trim property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyTrim has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyTrim(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Trim property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume4EnablePropertyTrim has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume4Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyTrim(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGVOLUME4_C

