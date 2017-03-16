/**
 * Provider for the linn.co.uk:ExaktInputs:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKEXAKTINPUTS1_C
#define HEADER_DVLINNCOUKEXAKTINPUTS1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkExaktInputs1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetAssociation action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExaktInputs1EnableActionGetAssociation
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInputIndex
 * @param[out] aDeviceId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExaktInputs1GetAssociation)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aInputIndex, char** aDeviceId);
/**
 * Callback which runs when the SetAssociation action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExaktInputs1EnableActionSetAssociation
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInputIndex
 * @param[in]  aDeviceId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExaktInputs1SetAssociation)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aInputIndex, const char* aDeviceId);
/**
 * Callback which runs when the ClearAssociation action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExaktInputs1EnableActionClearAssociation
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aInputIndex
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExaktInputs1ClearAssociation)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aInputIndex);
/**
 * Callback which runs when the InputCount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkExaktInputs1EnableActionInputCount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aInputCount
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackExaktInputs1InputCount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aInputCount);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkExaktInputs1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1Destroy(THandle aProvider);

/**
 * Enable the Associations property.
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1EnablePropertyAssociations(THandle aProvider);

/**
 * Register a callback for the action GetAssociation
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionGetAssociation(THandle aProvider, CallbackExaktInputs1GetAssociation aCallback, void* aPtr);
/**
 * Register a callback for the action SetAssociation
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionSetAssociation(THandle aProvider, CallbackExaktInputs1SetAssociation aCallback, void* aPtr);
/**
 * Register a callback for the action ClearAssociation
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionClearAssociation(THandle aProvider, CallbackExaktInputs1ClearAssociation aCallback, void* aPtr);
/**
 * Register a callback for the action InputCount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionInputCount(THandle aProvider, CallbackExaktInputs1InputCount aCallback, void* aPtr);

/**
 * Set the value of the Associations property
 *
 * Can only be called if DvProviderLinnCoUkExaktInputs1EnablePropertyAssociations has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkExaktInputs1SetPropertyAssociations(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Associations property
 *
 * Can only be called if DvProviderLinnCoUkExaktInputs1EnablePropertyAssociations has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkExaktInputs1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkExaktInputs1GetPropertyAssociations(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKEXAKTINPUTS1_C

