/**
 * Provider for the linn.co.uk:Wifi:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKWIFI1_C
#define HEADER_DVLINNCOUKWIFI1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkWifi1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the ClearCredentials action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionClearCredentials
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1ClearCredentials)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the GetAdapterInUse action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetAdapterInUse
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aAdapterInUse
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetAdapterInUse)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aAdapterInUse);
/**
 * Callback which runs when the GetConfiguration action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetConfiguration
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConfiguration
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetConfiguration)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aConfiguration);
/**
 * Callback which runs when the GetNetworkInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetNetworkInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aNetworkInfo
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetNetworkInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aNetworkInfo);
/**
 * Callback which runs when the GetScanResults action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetScanResults
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aScanResults
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetScanResults)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aScanResults);
/**
 * Callback which runs when the GetSignalInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetSignalInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSignalInfo
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetSignalInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSignalInfo);
/**
 * Callback which runs when the GetStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionGetStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aStatus
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1GetStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aStatus);
/**
 * Callback which runs when the Scan action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionScan
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1Scan)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);
/**
 * Callback which runs when the SetCredentials action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkWifi1EnableActionSetCredentials
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aSsid
 * @param[in]  aPassword
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackWifi1SetCredentials)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aSsid, const char* aPassword);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkWifi1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1Destroy(THandle aProvider);

/**
 * Enable the AdapterInUse property.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnablePropertyAdapterInUse(THandle aProvider);
/**
 * Enable the Configuration property.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnablePropertyConfiguration(THandle aProvider);
/**
 * Enable the ScanResults property.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnablePropertyScanResults(THandle aProvider);
/**
 * Enable the Status property.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnablePropertyStatus(THandle aProvider);

/**
 * Register a callback for the action ClearCredentials
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionClearCredentials(THandle aProvider, CallbackWifi1ClearCredentials aCallback, void* aPtr);
/**
 * Register a callback for the action GetAdapterInUse
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetAdapterInUse(THandle aProvider, CallbackWifi1GetAdapterInUse aCallback, void* aPtr);
/**
 * Register a callback for the action GetConfiguration
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetConfiguration(THandle aProvider, CallbackWifi1GetConfiguration aCallback, void* aPtr);
/**
 * Register a callback for the action GetNetworkInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetNetworkInfo(THandle aProvider, CallbackWifi1GetNetworkInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetScanResults
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetScanResults(THandle aProvider, CallbackWifi1GetScanResults aCallback, void* aPtr);
/**
 * Register a callback for the action GetSignalInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetSignalInfo(THandle aProvider, CallbackWifi1GetSignalInfo aCallback, void* aPtr);
/**
 * Register a callback for the action GetStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionGetStatus(THandle aProvider, CallbackWifi1GetStatus aCallback, void* aPtr);
/**
 * Register a callback for the action Scan
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionScan(THandle aProvider, CallbackWifi1Scan aCallback, void* aPtr);
/**
 * Register a callback for the action SetCredentials
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1EnableActionSetCredentials(THandle aProvider, CallbackWifi1SetCredentials aCallback, void* aPtr);

/**
 * Set the value of the AdapterInUse property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyAdapterInUse has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyAdapterInUse(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AdapterInUse property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyAdapterInUse has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1GetPropertyAdapterInUse(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Configuration property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyConfiguration has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyConfiguration(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Configuration property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyConfiguration has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1GetPropertyConfiguration(THandle aProvider, char** aValue);
/**
 * Set the value of the ScanResults property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyScanResults has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyScanResults(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ScanResults property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyScanResults has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1GetPropertyScanResults(THandle aProvider, char** aValue);
/**
 * Set the value of the Status property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkWifi1SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Status property
 *
 * Can only be called if DvProviderLinnCoUkWifi1EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkWifi1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkWifi1GetPropertyStatus(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKWIFI1_C

