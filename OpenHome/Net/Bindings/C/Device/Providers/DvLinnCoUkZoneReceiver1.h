/**
 * Provider for the linn.co.uk:ZoneReceiver:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKZONERECEIVER1_C
#define HEADER_DVLINNCOUKZONERECEIVER1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkZoneReceiver1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetSender action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkZoneReceiver1EnableActionGetSender
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSender
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackZoneReceiver1GetSender)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSender);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkZoneReceiver1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZoneReceiver1Create
 */
DllExport void STDCALL DvProviderLinnCoUkZoneReceiver1Destroy(THandle aProvider);

/**
 * Enable the Sender property.
 */
DllExport void STDCALL DvProviderLinnCoUkZoneReceiver1EnablePropertySender(THandle aProvider);

/**
 * Register a callback for the action GetSender
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkZoneReceiver1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkZoneReceiver1EnableActionGetSender(THandle aProvider, CallbackZoneReceiver1GetSender aCallback, void* aPtr);

/**
 * Set the value of the Sender property
 *
 * Can only be called if DvProviderLinnCoUkZoneReceiver1EnablePropertySender has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZoneReceiver1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkZoneReceiver1SetPropertySender(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Sender property
 *
 * Can only be called if DvProviderLinnCoUkZoneReceiver1EnablePropertySender has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkZoneReceiver1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkZoneReceiver1GetPropertySender(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKZONERECEIVER1_C

