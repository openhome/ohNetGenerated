/**
 * Provider for the linn.co.uk:Volkano:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKVOLKANO1_C
#define HEADER_DVLINNCOUKVOLKANO1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkVolkano1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Reboot action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionReboot
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1Reboot)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the BootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1BootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMode);
/**
 * Callback which runs when the SetBootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionSetBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1SetBootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aaMode);
/**
 * Callback which runs when the BspType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionBspType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaBspType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1BspType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaBspType);
/**
 * Callback which runs when the UglyName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionUglyName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaUglyName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1UglyName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaUglyName);
/**
 * Callback which runs when the MacAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionMacAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMacAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1MacAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMacAddress);
/**
 * Callback which runs when the ProductId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionProductId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaProductNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1ProductId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaProductNumber);
/**
 * Callback which runs when the BoardId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionBoardId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1BoardId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the BoardType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionBoardType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1BoardType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the MaxBoards action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionMaxBoards
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMaxBoards
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1MaxBoards)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaMaxBoards);
/**
 * Callback which runs when the SoftwareVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionSoftwareVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1SoftwareVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaSoftwareVersion);
/**
 * Callback which runs when the SoftwareUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionSoftwareUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaAvailable
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1SoftwareUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaAvailable, char** aaSoftwareVersion);
/**
 * Callback which runs when the DeviceInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano1EnableActionDeviceInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaDeviceInfoXml
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano1DeviceInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaDeviceInfoXml);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkVolkano1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1Destroy(THandle aProvider);


/**
 * Register a callback for the action Reboot
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionReboot(THandle aProvider, CallbackVolkano1Reboot aCallback, void* aPtr);
/**
 * Register a callback for the action BootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionBootMode(THandle aProvider, CallbackVolkano1BootMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetBootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionSetBootMode(THandle aProvider, CallbackVolkano1SetBootMode aCallback, void* aPtr);
/**
 * Register a callback for the action BspType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionBspType(THandle aProvider, CallbackVolkano1BspType aCallback, void* aPtr);
/**
 * Register a callback for the action UglyName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionUglyName(THandle aProvider, CallbackVolkano1UglyName aCallback, void* aPtr);
/**
 * Register a callback for the action MacAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionMacAddress(THandle aProvider, CallbackVolkano1MacAddress aCallback, void* aPtr);
/**
 * Register a callback for the action ProductId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionProductId(THandle aProvider, CallbackVolkano1ProductId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionBoardId(THandle aProvider, CallbackVolkano1BoardId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionBoardType(THandle aProvider, CallbackVolkano1BoardType aCallback, void* aPtr);
/**
 * Register a callback for the action MaxBoards
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionMaxBoards(THandle aProvider, CallbackVolkano1MaxBoards aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano1SoftwareVersion aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano1SoftwareUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano1EnableActionDeviceInfo(THandle aProvider, CallbackVolkano1DeviceInfo aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKVOLKANO1_C

