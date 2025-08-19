/**
 * Provider for the linn.co.uk:Volkano:2 UPnP service
 */
#ifndef HEADER_DVLINNCOUKVOLKANO2_C
#define HEADER_DVLINNCOUKVOLKANO2_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkVolkano2
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Reboot action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionReboot
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2Reboot)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the BootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2BootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMode);
/**
 * Callback which runs when the SetBootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionSetBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2SetBootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aaMode);
/**
 * Callback which runs when the BspType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionBspType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaBspType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2BspType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaBspType);
/**
 * Callback which runs when the UglyName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionUglyName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaUglyName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2UglyName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaUglyName);
/**
 * Callback which runs when the IpAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionIpAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaIpAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2IpAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaIpAddress);
/**
 * Callback which runs when the IpAddressList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionIpAddressList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaIpAddressList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2IpAddressList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaIpAddressList);
/**
 * Callback which runs when the MacAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionMacAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMacAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2MacAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMacAddress);
/**
 * Callback which runs when the MacAddressList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionMacAddressList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMacAddressList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2MacAddressList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMacAddressList);
/**
 * Callback which runs when the ProductId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionProductId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaProductNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2ProductId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaProductNumber);
/**
 * Callback which runs when the BoardId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionBoardId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2BoardId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the BoardType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionBoardType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2BoardType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the MaxBoards action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionMaxBoards
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMaxBoards
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2MaxBoards)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaMaxBoards);
/**
 * Callback which runs when the SoftwareVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionSoftwareVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2SoftwareVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaSoftwareVersion);
/**
 * Callback which runs when the SoftwareUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionSoftwareUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaAvailable
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2SoftwareUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaAvailable, char** aaSoftwareVersion);
/**
 * Callback which runs when the DeviceInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionDeviceInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaDeviceInfoXml
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2DeviceInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaDeviceInfoXml);
/**
 * Callback which runs when the CoreBoardId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano2EnableActionCoreBoardId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaCoreBoardId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano2CoreBoardId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaCoreBoardId);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkVolkano2Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2Destroy(THandle aProvider);

/**
 * Enable the DeviceInfo property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyDeviceInfo(THandle aProvider);
/**
 * Enable the IpAddressList property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyIpAddressList(THandle aProvider);
/**
 * Enable the MacAddressList property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyMacAddressList(THandle aProvider);
/**
 * Enable the CoreBoardId property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnablePropertyCoreBoardId(THandle aProvider);

/**
 * Register a callback for the action Reboot
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionReboot(THandle aProvider, CallbackVolkano2Reboot aCallback, void* aPtr);
/**
 * Register a callback for the action BootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionBootMode(THandle aProvider, CallbackVolkano2BootMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetBootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionSetBootMode(THandle aProvider, CallbackVolkano2SetBootMode aCallback, void* aPtr);
/**
 * Register a callback for the action BspType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionBspType(THandle aProvider, CallbackVolkano2BspType aCallback, void* aPtr);
/**
 * Register a callback for the action UglyName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionUglyName(THandle aProvider, CallbackVolkano2UglyName aCallback, void* aPtr);
/**
 * Register a callback for the action IpAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionIpAddress(THandle aProvider, CallbackVolkano2IpAddress aCallback, void* aPtr);
/**
 * Register a callback for the action IpAddressList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionIpAddressList(THandle aProvider, CallbackVolkano2IpAddressList aCallback, void* aPtr);
/**
 * Register a callback for the action MacAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionMacAddress(THandle aProvider, CallbackVolkano2MacAddress aCallback, void* aPtr);
/**
 * Register a callback for the action MacAddressList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionMacAddressList(THandle aProvider, CallbackVolkano2MacAddressList aCallback, void* aPtr);
/**
 * Register a callback for the action ProductId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionProductId(THandle aProvider, CallbackVolkano2ProductId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionBoardId(THandle aProvider, CallbackVolkano2BoardId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionBoardType(THandle aProvider, CallbackVolkano2BoardType aCallback, void* aPtr);
/**
 * Register a callback for the action MaxBoards
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionMaxBoards(THandle aProvider, CallbackVolkano2MaxBoards aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano2SoftwareVersion aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano2SoftwareUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionDeviceInfo(THandle aProvider, CallbackVolkano2DeviceInfo aCallback, void* aPtr);
/**
 * Register a callback for the action CoreBoardId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2EnableActionCoreBoardId(THandle aProvider, CallbackVolkano2CoreBoardId aCallback, void* aPtr);

/**
 * Set the value of the DeviceInfo property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyDeviceInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyDeviceInfo(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceInfo property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyDeviceInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2GetPropertyDeviceInfo(THandle aProvider, char** aValue);
/**
 * Set the value of the IpAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyIpAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyIpAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IpAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyIpAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2GetPropertyIpAddressList(THandle aProvider, char** aValue);
/**
 * Set the value of the MacAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyMacAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyMacAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the MacAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyMacAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2GetPropertyMacAddressList(THandle aProvider, char** aValue);
/**
 * Set the value of the CoreBoardId property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyCoreBoardId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano2SetPropertyCoreBoardId(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CoreBoardId property
 *
 * Can only be called if DvProviderLinnCoUkVolkano2EnablePropertyCoreBoardId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano2GetPropertyCoreBoardId(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKVOLKANO2_C

