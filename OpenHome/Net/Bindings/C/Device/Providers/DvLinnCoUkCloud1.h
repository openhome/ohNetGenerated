/**
 * Provider for the linn.co.uk:Cloud:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKCLOUD1_C
#define HEADER_DVLINNCOUKCLOUD1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkCloud1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetChallengeResponse action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionGetChallengeResponse
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aChallenge
 * @param[out] aResponse
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1GetChallengeResponse)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aChallenge, char** aResponse);
/**
 * Callback which runs when the SetAssociated action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionSetAssociated
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aAesKeyRsaEncrypted
 * @param[in]  aAesKeyRsaEncryptedLen
 * @param[in]  aInitVectorRsaEncrypted
 * @param[in]  aInitVectorRsaEncryptedLen
 * @param[in]  aTokenAesEncrypted
 * @param[in]  aTokenAesEncryptedLen
 * @param[in]  aAssociated
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1SetAssociated)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aAssociated);
/**
 * Callback which runs when the GetConnected action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionGetConnected
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aConnected
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1GetConnected)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aConnected);
/**
 * Callback which runs when the GetPublicKey action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkCloud1EnableActionGetPublicKey
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aPublicKey
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCloud1GetPublicKey)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aPublicKey);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkCloud1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1Destroy(THandle aProvider);

/**
 * Enable the AssociationStatus property.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnablePropertyAssociationStatus(THandle aProvider);
/**
 * Enable the Connected property.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnablePropertyConnected(THandle aProvider);
/**
 * Enable the PublicKey property.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnablePropertyPublicKey(THandle aProvider);

/**
 * Register a callback for the action GetChallengeResponse
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionGetChallengeResponse(THandle aProvider, CallbackCloud1GetChallengeResponse aCallback, void* aPtr);
/**
 * Register a callback for the action SetAssociated
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionSetAssociated(THandle aProvider, CallbackCloud1SetAssociated aCallback, void* aPtr);
/**
 * Register a callback for the action GetConnected
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionGetConnected(THandle aProvider, CallbackCloud1GetConnected aCallback, void* aPtr);
/**
 * Register a callback for the action GetPublicKey
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1EnableActionGetPublicKey(THandle aProvider, CallbackCloud1GetPublicKey aCallback, void* aPtr);

/**
 * Set the value of the AssociationStatus property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyAssociationStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyAssociationStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the AssociationStatus property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyAssociationStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1GetPropertyAssociationStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the Connected property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyConnected has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyConnected(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Connected property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyConnected has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1GetPropertyConnected(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the PublicKey property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkCloud1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PublicKey property
 *
 * Can only be called if DvProviderLinnCoUkCloud1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkCloud1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkCloud1GetPropertyPublicKey(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKCLOUD1_C

