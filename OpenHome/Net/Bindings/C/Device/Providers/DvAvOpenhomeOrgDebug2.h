/**
 * Provider for the av.openhome.org:Debug:2 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGDEBUG2_C
#define HEADER_DVAVOPENHOMEORGDEBUG2_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgDebug2
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetLog action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDebug2EnableActionGetLog
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aLog
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDebug2GetLog)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aLog);
/**
 * Callback which runs when the SendLog action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDebug2EnableActionSendLog
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aData
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDebug2SendLog)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aData);
/**
 * Callback which runs when the SendDeviceAnnouncements action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDebug2EnableActionSendDeviceAnnouncements
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDebug2SendDeviceAnnouncements)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetRecentMSearches action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDebug2EnableActionGetRecentMSearches
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJsonArray
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDebug2GetRecentMSearches)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aJsonArray);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgDebug2Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug2Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug2Destroy(THandle aProvider);


/**
 * Register a callback for the action GetLog
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionGetLog(THandle aProvider, CallbackDebug2GetLog aCallback, void* aPtr);
/**
 * Register a callback for the action SendLog
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionSendLog(THandle aProvider, CallbackDebug2SendLog aCallback, void* aPtr);
/**
 * Register a callback for the action SendDeviceAnnouncements
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionSendDeviceAnnouncements(THandle aProvider, CallbackDebug2SendDeviceAnnouncements aCallback, void* aPtr);
/**
 * Register a callback for the action GetRecentMSearches
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug2EnableActionGetRecentMSearches(THandle aProvider, CallbackDebug2GetRecentMSearches aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGDEBUG2_C

