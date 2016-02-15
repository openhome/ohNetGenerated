/**
 * Provider for the av.openhome.org:Debug:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGDEBUG1_C
#define HEADER_DVAVOPENHOMEORGDEBUG1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgDebug1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetLog action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgDebug1EnableActionGetLog
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aLog
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackDebug1GetLog)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aLog);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgDebug1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug1Destroy(THandle aProvider);


/**
 * Register a callback for the action GetLog
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgDebug1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgDebug1EnableActionGetLog(THandle aProvider, CallbackDebug1GetLog aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGDEBUG1_C

