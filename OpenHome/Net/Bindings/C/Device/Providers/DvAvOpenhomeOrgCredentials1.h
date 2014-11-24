/**
 * Provider for the av.openhome.org:Credentials:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGCREDENTIALS1_C
#define HEADER_DVAVOPENHOMEORGCREDENTIALS1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgCredentials1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Set action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionSet
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 * @param[in]  aUserName
 * @param[in]  aPassword
 * @param[in]  aPasswordLen
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1Set)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId, const char* aUserName, const char* aPassword, uint32_t aPasswordLen);
/**
 * Callback which runs when the Clear action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionClear
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1Clear)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId);
/**
 * Callback which runs when the SetEnabled action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionSetEnabled
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 * @param[in]  aEnabled
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1SetEnabled)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId, uint32_t aEnabled);
/**
 * Callback which runs when the Get action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionGet
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 * @param[out] aUserName
 * @param[out] aPassword
 * @param[out] aPasswordLen
 * @param[out] aEnabled
 * @param[out] aStatus
 * @param[out] aData
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1Get)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId, char** aUserName, char** aPassword, uint32_t* aPasswordLen, uint32_t* aEnabled, char** aStatus, char** aData);
/**
 * Callback which runs when the Login action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionLogin
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 * @param[out] aToken
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1Login)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId, char** aToken);
/**
 * Callback which runs when the ReLogin action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionReLogin
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aId
 * @param[in]  aCurrentToken
 * @param[out] aNewToken
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1ReLogin)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aId, const char* aCurrentToken, char** aNewToken);
/**
 * Callback which runs when the GetIds action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionGetIds
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aIds
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1GetIds)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aIds);
/**
 * Callback which runs when the GetPublicKey action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionGetPublicKey
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aPublicKey
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1GetPublicKey)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aPublicKey);
/**
 * Callback which runs when the GetSequenceNumber action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgCredentials1EnableActionGetSequenceNumber
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSequenceNumber
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackCredentials1GetSequenceNumber)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aSequenceNumber);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgCredentials1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1Destroy(THandle aProvider);

/**
 * Enable the Ids property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertyIds(THandle aProvider);
/**
 * Enable the PublicKey property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertyPublicKey(THandle aProvider);
/**
 * Enable the SequenceNumber property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnablePropertySequenceNumber(THandle aProvider);

/**
 * Register a callback for the action Set
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionSet(THandle aProvider, CallbackCredentials1Set aCallback, void* aPtr);
/**
 * Register a callback for the action Clear
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionClear(THandle aProvider, CallbackCredentials1Clear aCallback, void* aPtr);
/**
 * Register a callback for the action SetEnabled
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionSetEnabled(THandle aProvider, CallbackCredentials1SetEnabled aCallback, void* aPtr);
/**
 * Register a callback for the action Get
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGet(THandle aProvider, CallbackCredentials1Get aCallback, void* aPtr);
/**
 * Register a callback for the action Login
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionLogin(THandle aProvider, CallbackCredentials1Login aCallback, void* aPtr);
/**
 * Register a callback for the action ReLogin
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionReLogin(THandle aProvider, CallbackCredentials1ReLogin aCallback, void* aPtr);
/**
 * Register a callback for the action GetIds
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetIds(THandle aProvider, CallbackCredentials1GetIds aCallback, void* aPtr);
/**
 * Register a callback for the action GetPublicKey
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetPublicKey(THandle aProvider, CallbackCredentials1GetPublicKey aCallback, void* aPtr);
/**
 * Register a callback for the action GetSequenceNumber
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1EnableActionGetSequenceNumber(THandle aProvider, CallbackCredentials1GetSequenceNumber aCallback, void* aPtr);

/**
 * Set the value of the Ids property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertyIds has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertyIds(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Ids property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertyIds has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertyIds(THandle aProvider, char** aValue);
/**
 * Set the value of the PublicKey property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PublicKey property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertyPublicKey(THandle aProvider, char** aValue);
/**
 * Set the value of the SequenceNumber property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertySequenceNumber has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgCredentials1SetPropertySequenceNumber(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SequenceNumber property
 *
 * Can only be called if DvProviderAvOpenhomeOrgCredentials1EnablePropertySequenceNumber has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgCredentials1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgCredentials1GetPropertySequenceNumber(THandle aProvider, uint32_t* aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGCREDENTIALS1_C

