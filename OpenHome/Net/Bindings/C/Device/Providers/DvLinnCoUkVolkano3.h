/**
 * Provider for the linn.co.uk:Volkano:3 UPnP service
 */
#ifndef HEADER_DVLINNCOUKVOLKANO3_C
#define HEADER_DVLINNCOUKVOLKANO3_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkVolkano3
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Reboot action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionReboot
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3Reboot)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the BootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3BootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMode);
/**
 * Callback which runs when the SetBootMode action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionSetBootMode
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaMode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3SetBootMode)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aaMode);
/**
 * Callback which runs when the BspType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionBspType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaBspType
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3BspType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaBspType);
/**
 * Callback which runs when the UglyName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionUglyName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaUglyName
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3UglyName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaUglyName);
/**
 * Callback which runs when the IpAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionIpAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaIpAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3IpAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaIpAddress);
/**
 * Callback which runs when the IpAddressList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionIpAddressList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaIpAddressList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3IpAddressList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaIpAddressList);
/**
 * Callback which runs when the MacAddress action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionMacAddress
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMacAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3MacAddress)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMacAddress);
/**
 * Callback which runs when the MacAddressList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionMacAddressList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMacAddressList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3MacAddressList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaMacAddressList);
/**
 * Callback which runs when the ProductId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionProductId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaProductNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3ProductId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaProductNumber);
/**
 * Callback which runs when the BoardId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionBoardId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3BoardId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the BoardType action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionBoardType
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaIndex
 * @param[out] aaBoardNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3BoardType)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaIndex, char** aaBoardNumber);
/**
 * Callback which runs when the MaxBoards action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionMaxBoards
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaMaxBoards
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3MaxBoards)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaMaxBoards);
/**
 * Callback which runs when the SoftwareVersion action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionSoftwareVersion
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3SoftwareVersion)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaSoftwareVersion);
/**
 * Callback which runs when the SoftwareUpdate action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionSoftwareUpdate
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaAvailable
 * @param[out] aaSoftwareVersion
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3SoftwareUpdate)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaAvailable, char** aaSoftwareVersion);
/**
 * Callback which runs when the DeviceInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionDeviceInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaDeviceInfoXml
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3DeviceInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaDeviceInfoXml);
/**
 * Callback which runs when the CoreBoardId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkVolkano3EnableActionCoreBoardId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaCoreBoardId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackVolkano3CoreBoardId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaCoreBoardId);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkVolkano3Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3Destroy(THandle aProvider);

/**
 * Enable the DeviceInfo property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyDeviceInfo(THandle aProvider);
/**
 * Enable the IpAddress property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyIpAddress(THandle aProvider);
/**
 * Enable the IpAddressList property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyIpAddressList(THandle aProvider);
/**
 * Enable the MacAddressList property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyMacAddressList(THandle aProvider);
/**
 * Enable the CoreBoardId property.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnablePropertyCoreBoardId(THandle aProvider);

/**
 * Register a callback for the action Reboot
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionReboot(THandle aProvider, CallbackVolkano3Reboot aCallback, void* aPtr);
/**
 * Register a callback for the action BootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionBootMode(THandle aProvider, CallbackVolkano3BootMode aCallback, void* aPtr);
/**
 * Register a callback for the action SetBootMode
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionSetBootMode(THandle aProvider, CallbackVolkano3SetBootMode aCallback, void* aPtr);
/**
 * Register a callback for the action BspType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionBspType(THandle aProvider, CallbackVolkano3BspType aCallback, void* aPtr);
/**
 * Register a callback for the action UglyName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionUglyName(THandle aProvider, CallbackVolkano3UglyName aCallback, void* aPtr);
/**
 * Register a callback for the action IpAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionIpAddress(THandle aProvider, CallbackVolkano3IpAddress aCallback, void* aPtr);
/**
 * Register a callback for the action IpAddressList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionIpAddressList(THandle aProvider, CallbackVolkano3IpAddressList aCallback, void* aPtr);
/**
 * Register a callback for the action MacAddress
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionMacAddress(THandle aProvider, CallbackVolkano3MacAddress aCallback, void* aPtr);
/**
 * Register a callback for the action MacAddressList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionMacAddressList(THandle aProvider, CallbackVolkano3MacAddressList aCallback, void* aPtr);
/**
 * Register a callback for the action ProductId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionProductId(THandle aProvider, CallbackVolkano3ProductId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionBoardId(THandle aProvider, CallbackVolkano3BoardId aCallback, void* aPtr);
/**
 * Register a callback for the action BoardType
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionBoardType(THandle aProvider, CallbackVolkano3BoardType aCallback, void* aPtr);
/**
 * Register a callback for the action MaxBoards
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionMaxBoards(THandle aProvider, CallbackVolkano3MaxBoards aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareVersion
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionSoftwareVersion(THandle aProvider, CallbackVolkano3SoftwareVersion aCallback, void* aPtr);
/**
 * Register a callback for the action SoftwareUpdate
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionSoftwareUpdate(THandle aProvider, CallbackVolkano3SoftwareUpdate aCallback, void* aPtr);
/**
 * Register a callback for the action DeviceInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionDeviceInfo(THandle aProvider, CallbackVolkano3DeviceInfo aCallback, void* aPtr);
/**
 * Register a callback for the action CoreBoardId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3EnableActionCoreBoardId(THandle aProvider, CallbackVolkano3CoreBoardId aCallback, void* aPtr);

/**
 * Set the value of the DeviceInfo property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyDeviceInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyDeviceInfo(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceInfo property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyDeviceInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3GetPropertyDeviceInfo(THandle aProvider, char** aValue);
/**
 * Set the value of the IpAddress property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyIpAddress has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyIpAddress(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IpAddress property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyIpAddress has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3GetPropertyIpAddress(THandle aProvider, char** aValue);
/**
 * Set the value of the IpAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyIpAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyIpAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IpAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyIpAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3GetPropertyIpAddressList(THandle aProvider, char** aValue);
/**
 * Set the value of the MacAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyMacAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyMacAddressList(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the MacAddressList property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyMacAddressList has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3GetPropertyMacAddressList(THandle aProvider, char** aValue);
/**
 * Set the value of the CoreBoardId property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyCoreBoardId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkVolkano3SetPropertyCoreBoardId(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the CoreBoardId property
 *
 * Can only be called if DvProviderLinnCoUkVolkano3EnablePropertyCoreBoardId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkVolkano3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkVolkano3GetPropertyCoreBoardId(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKVOLKANO3_C

