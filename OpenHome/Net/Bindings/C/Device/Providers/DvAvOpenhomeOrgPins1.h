/**
 * Provider for the av.openhome.org:Pins:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGPINS1_C
#define HEADER_DVAVOPENHOMEORGPINS1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgPins1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetDeviceAccountMax action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionGetDeviceAccountMax
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aDeviceMax
 * @param[out] aAccountMax
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1GetDeviceAccountMax)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aDeviceMax, uint32_t* aAccountMax);
/**
 * Callback which runs when the GetModes action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionGetModes
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aModes
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1GetModes)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aModes);
/**
 * Callback which runs when the GetIdArray action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionGetIdArray
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIdArray
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1GetIdArray)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aIdArray);
/**
 * Callback which runs when the ReadList action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionReadList
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIds
 * @param[out] aList
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1ReadList)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aIds, char** aList);
/**
 * Callback which runs when the InvokeId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionInvokeId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1InvokeId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aId);
/**
 * Callback which runs when the InvokeIndex action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionInvokeIndex
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIndex
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1InvokeIndex)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIndex);
/**
 * Callback which runs when the SetDevice action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionSetDevice
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIndex
 * @param[in]  aMode
 * @param[in]  aType
 * @param[in]  aUri
 * @param[in]  aTitle
 * @param[in]  aDescription
 * @param[in]  aArtworkUri
 * @param[in]  aShuffle
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1SetDevice)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle);
/**
 * Callback which runs when the SetAccount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionSetAccount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIndex
 * @param[in]  aMode
 * @param[in]  aType
 * @param[in]  aUri
 * @param[in]  aTitle
 * @param[in]  aDescription
 * @param[in]  aArtworkUri
 * @param[in]  aShuffle
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1SetAccount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIndex, const char* aMode, const char* aType, const char* aUri, const char* aTitle, const char* aDescription, const char* aArtworkUri, uint32_t aShuffle);
/**
 * Callback which runs when the Clear action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionClear
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1Clear)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aId);
/**
 * Callback which runs when the Swap action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgPins1EnableActionSwap
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIndex1
 * @param[in]  aIndex2
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackPins1Swap)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIndex1, uint32_t aIndex2);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgPins1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1Destroy(THandle aProvider);

/**
 * Enable the DeviceMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyDeviceMax(THandle aProvider);
/**
 * Enable the AccountMax property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyAccountMax(THandle aProvider);
/**
 * Enable the Modes property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyModes(THandle aProvider);
/**
 * Enable the IdArray property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnablePropertyIdArray(THandle aProvider);

/**
 * Register a callback for the action GetDeviceAccountMax
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetDeviceAccountMax(THandle aProvider, CallbackPins1GetDeviceAccountMax aCallback, void* aPtr);
/**
 * Register a callback for the action GetModes
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetModes(THandle aProvider, CallbackPins1GetModes aCallback, void* aPtr);
/**
 * Register a callback for the action GetIdArray
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionGetIdArray(THandle aProvider, CallbackPins1GetIdArray aCallback, void* aPtr);
/**
 * Register a callback for the action ReadList
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionReadList(THandle aProvider, CallbackPins1ReadList aCallback, void* aPtr);
/**
 * Register a callback for the action InvokeId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionInvokeId(THandle aProvider, CallbackPins1InvokeId aCallback, void* aPtr);
/**
 * Register a callback for the action InvokeIndex
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionInvokeIndex(THandle aProvider, CallbackPins1InvokeIndex aCallback, void* aPtr);
/**
 * Register a callback for the action SetDevice
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSetDevice(THandle aProvider, CallbackPins1SetDevice aCallback, void* aPtr);
/**
 * Register a callback for the action SetAccount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSetAccount(THandle aProvider, CallbackPins1SetAccount aCallback, void* aPtr);
/**
 * Register a callback for the action Clear
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionClear(THandle aProvider, CallbackPins1Clear aCallback, void* aPtr);
/**
 * Register a callback for the action Swap
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1EnableActionSwap(THandle aProvider, CallbackPins1Swap aCallback, void* aPtr);

/**
 * Set the value of the DeviceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyDeviceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyDeviceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the DeviceMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyDeviceMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyDeviceMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the AccountMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyAccountMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyAccountMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AccountMax property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyAccountMax has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyAccountMax(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Modes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyModes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyModes(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Modes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyModes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyModes(THandle aProvider, char** aValue);
/**
 * Set the value of the IdArray property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyIdArray has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgPins1SetPropertyIdArray(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the IdArray property
 *
 * Can only be called if DvProviderAvOpenhomeOrgPins1EnablePropertyIdArray has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgPins1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgPins1GetPropertyIdArray(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGPINS1_C

