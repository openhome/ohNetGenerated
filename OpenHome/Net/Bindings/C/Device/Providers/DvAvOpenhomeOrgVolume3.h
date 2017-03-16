/**
 * Provider for the av.openhome.org:Volume:3 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGVOLUME3_C
#define HEADER_DVAVOPENHOMEORGVOLUME3_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgVolume3
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Characteristics action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionCharacteristics
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
typedef int32_t (STDCALL *CallbackVolume3Characteristics)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax);
/**
 * Callback which runs when the SetVolume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetVolume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the VolumeInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionVolumeInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3VolumeInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the VolumeDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionVolumeDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3VolumeDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Volume action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionVolume
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3Volume)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the SetBalance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetBalance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t aValue);
/**
 * Callback which runs when the BalanceInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionBalanceInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3BalanceInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the BalanceDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionBalanceDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3BalanceDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Balance action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionBalance
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3Balance)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t* aValue);
/**
 * Callback which runs when the SetFade action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetFade
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetFade)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t aValue);
/**
 * Callback which runs when the FadeInc action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionFadeInc
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3FadeInc)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the FadeDec action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionFadeDec
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3FadeDec)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the Fade action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionFade
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3Fade)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, int32_t* aValue);
/**
 * Callback which runs when the SetMute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetMute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the Mute action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionMute
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3Mute)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the VolumeLimit action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionVolumeLimit
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3VolumeLimit)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the UnityGain action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionUnityGain
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3UnityGain)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the VolumeOffset action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionVolumeOffset
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[out] aVolumeOffsetBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3VolumeOffset)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t* aVolumeOffsetBinaryMilliDb);
/**
 * Callback which runs when the SetVolumeOffset action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetVolumeOffset
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[in]  aVolumeOffsetBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetVolumeOffset)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb);
/**
 * Callback which runs when the Trim action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionTrim
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[out] aTrimBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3Trim)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t* aTrimBinaryMilliDb);
/**
 * Callback which runs when the SetTrim action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgVolume3EnableActionSetTrim
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChannel
 * @param[in]  aTrimBinaryMilliDb
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolume3SetTrim)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChannel, int32_t aTrimBinaryMilliDb);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgVolume3Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3Destroy(THandle aProvider);

/**
 * Enable the Volume property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolume(THandle aProvider);
/**
 * Enable the Mute property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyMute(THandle aProvider);
/**
 * Enable the Balance property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyBalance(THandle aProvider);
/**
 * Enable the Fade property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyFade(THandle aProvider);
/**
 * Enable the VolumeLimit property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeLimit(THandle aProvider);
/**
 * Enable the VolumeMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMax(THandle aProvider);
/**
 * Enable the VolumeUnity property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeUnity(THandle aProvider);
/**
 * Enable the VolumeSteps property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeSteps(THandle aProvider);
/**
 * Enable the VolumeMilliDbPerStep property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMilliDbPerStep(THandle aProvider);
/**
 * Enable the BalanceMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyBalanceMax(THandle aProvider);
/**
 * Enable the FadeMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyFadeMax(THandle aProvider);
/**
 * Enable the UnityGain property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyUnityGain(THandle aProvider);
/**
 * Enable the VolumeOffsets property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsets(THandle aProvider);
/**
 * Enable the VolumeOffsetMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsetMax(THandle aProvider);
/**
 * Enable the Trim property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyTrim(THandle aProvider);

/**
 * Register a callback for the action Characteristics
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionCharacteristics(THandle aProvider, CallbackVolume3Characteristics aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetVolume(THandle aProvider, CallbackVolume3SetVolume aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeInc(THandle aProvider, CallbackVolume3VolumeInc aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeDec(THandle aProvider, CallbackVolume3VolumeDec aCallback, void* aPtr);
/**
 * Register a callback for the action Volume
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolume(THandle aProvider, CallbackVolume3Volume aCallback, void* aPtr);
/**
 * Register a callback for the action SetBalance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetBalance(THandle aProvider, CallbackVolume3SetBalance aCallback, void* aPtr);
/**
 * Register a callback for the action BalanceInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalanceInc(THandle aProvider, CallbackVolume3BalanceInc aCallback, void* aPtr);
/**
 * Register a callback for the action BalanceDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalanceDec(THandle aProvider, CallbackVolume3BalanceDec aCallback, void* aPtr);
/**
 * Register a callback for the action Balance
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalance(THandle aProvider, CallbackVolume3Balance aCallback, void* aPtr);
/**
 * Register a callback for the action SetFade
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetFade(THandle aProvider, CallbackVolume3SetFade aCallback, void* aPtr);
/**
 * Register a callback for the action FadeInc
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFadeInc(THandle aProvider, CallbackVolume3FadeInc aCallback, void* aPtr);
/**
 * Register a callback for the action FadeDec
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFadeDec(THandle aProvider, CallbackVolume3FadeDec aCallback, void* aPtr);
/**
 * Register a callback for the action Fade
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFade(THandle aProvider, CallbackVolume3Fade aCallback, void* aPtr);
/**
 * Register a callback for the action SetMute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetMute(THandle aProvider, CallbackVolume3SetMute aCallback, void* aPtr);
/**
 * Register a callback for the action Mute
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionMute(THandle aProvider, CallbackVolume3Mute aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeLimit
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeLimit(THandle aProvider, CallbackVolume3VolumeLimit aCallback, void* aPtr);
/**
 * Register a callback for the action UnityGain
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionUnityGain(THandle aProvider, CallbackVolume3UnityGain aCallback, void* aPtr);
/**
 * Register a callback for the action VolumeOffset
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeOffset(THandle aProvider, CallbackVolume3VolumeOffset aCallback, void* aPtr);
/**
 * Register a callback for the action SetVolumeOffset
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetVolumeOffset(THandle aProvider, CallbackVolume3SetVolumeOffset aCallback, void* aPtr);
/**
 * Register a callback for the action Trim
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionTrim(THandle aProvider, CallbackVolume3Trim aCallback, void* aPtr);
/**
 * Register a callback for the action SetTrim
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetTrim(THandle aProvider, CallbackVolume3SetTrim aCallback, void* aPtr);

/**
 * Set the value of the Volume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Volume property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolume has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolume(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Mute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Mute property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyMute has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyMute(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Balance property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyBalance has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyBalance(THandle aProvider, int32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Balance property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyBalance has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyBalance(THandle aProvider, int32_t* aValue);
/**
 * Set the value of the Fade property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyFade has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyFade(THandle aProvider, int32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Fade property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyFade has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyFade(THandle aProvider, int32_t* aValue);
/**
 * Set the value of the VolumeLimit property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeLimit has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeLimit(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeLimit property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeLimit has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeLimit(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeUnity property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeUnity has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeUnity(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeUnity property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeUnity has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeUnity(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeSteps property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeSteps has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeSteps(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeSteps property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeSteps has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeSteps(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeMilliDbPerStep property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMilliDbPerStep has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeMilliDbPerStep property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMilliDbPerStep has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the BalanceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyBalanceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyBalanceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the BalanceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyBalanceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyBalanceMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the FadeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyFadeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyFadeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the FadeMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyFadeMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyFadeMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the UnityGain property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyUnityGain has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyUnityGain(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UnityGain property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyUnityGain has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyUnityGain(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the VolumeOffsets property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsets has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeOffsets(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeOffsets property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsets has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeOffsets(THandle aProvider, char** aValue);
/**
 * Set the value of the VolumeOffsetMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsetMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeOffsetMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the VolumeOffsetMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsetMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeOffsetMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Trim property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyTrim has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyTrim(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Trim property
 *
 * Can only be called if DvProviderAvOpenhomeOrgVolume3EnablePropertyTrim has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgVolume3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyTrim(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGVOLUME3_C

