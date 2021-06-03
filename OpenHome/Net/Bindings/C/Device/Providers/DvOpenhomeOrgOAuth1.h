/**
 * Provider for the openhome.org:OAuth:1 UPnP service
 */
#ifndef HEADER_DVOPENHOMEORGOAUTH1_C
#define HEADER_DVOPENHOMEORGOAUTH1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderOpenhomeOrgOAuth1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the SetToken action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionSetToken
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 * @param[in]  aTokenId
 * @param[in]  aAesKeyRsaEncrypted
 * @param[in]  aAesKeyRsaEncryptedLen
 * @param[in]  aInitVectorRsaEncrypted
 * @param[in]  aInitVectorRsaEncryptedLen
 * @param[in]  aTokenAesEncrypted
 * @param[in]  aTokenAesEncryptedLen
 * @param[in]  aIsLongLived
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1SetToken)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId, const char* aTokenId, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aIsLongLived);
/**
 * Callback which runs when the GetPublicKey action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetPublicKey
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aPublicKey
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetPublicKey)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aPublicKey);
/**
 * Callback which runs when the ClearToken action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearToken
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 * @param[in]  aTokenId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearToken)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId, const char* aTokenId);
/**
 * Callback which runs when the ClearShortLivedToken action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearShortLivedToken
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 * @param[in]  aTokenId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearShortLivedToken)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId, const char* aTokenId);
/**
 * Callback which runs when the ClearLongLivedToken action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearLongLivedToken
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 * @param[in]  aTokenId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearLongLivedToken)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId, const char* aTokenId);
/**
 * Callback which runs when the ClearShortLivedTokens action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearShortLivedTokens
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearShortLivedTokens)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId);
/**
 * Callback which runs when the ClearLongLivedTokens action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearLongLivedTokens
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearLongLivedTokens)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId);
/**
 * Callback which runs when the ClearAllTokens action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionClearAllTokens
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1ClearAllTokens)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId);
/**
 * Callback which runs when the GetUpdateId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetUpdateId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aUpdateId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetUpdateId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aUpdateId);
/**
 * Callback which runs when the GetServiceStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetServiceStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aServiceStatusJson
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetServiceStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aServiceStatusJson);
/**
 * Callback which runs when the GetJobUpdateId action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetJobUpdateId
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJobUpdateId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetJobUpdateId)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aJobUpdateId);
/**
 * Callback which runs when the GetJobStatus action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetJobStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aJobStatusJson
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetJobStatus)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aJobStatusJson);
/**
 * Callback which runs when the GetSupportedServices action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionGetSupportedServices
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aSupportedServiceListJson
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1GetSupportedServices)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aSupportedServiceListJson);
/**
 * Callback which runs when the BeginLimitedInputFlow action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderOpenhomeOrgOAuth1EnableActionBeginLimitedInputFlow
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aServiceId
 * @param[out] aJobId
 * @param[out] aLoginUrl
 * @param[out] aUserCode
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackOAuth1BeginLimitedInputFlow)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aServiceId, char** aJobId, char** aLoginUrl, char** aUserCode);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderOpenhomeOrgOAuth1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1Destroy(THandle aProvider);

/**
 * Enable the PublicKey property.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnablePropertyPublicKey(THandle aProvider);
/**
 * Enable the UpdateId property.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnablePropertyUpdateId(THandle aProvider);
/**
 * Enable the JobUpdateId property.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnablePropertyJobUpdateId(THandle aProvider);
/**
 * Enable the SupportedServices property.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnablePropertySupportedServices(THandle aProvider);

/**
 * Register a callback for the action SetToken
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionSetToken(THandle aProvider, CallbackOAuth1SetToken aCallback, void* aPtr);
/**
 * Register a callback for the action GetPublicKey
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetPublicKey(THandle aProvider, CallbackOAuth1GetPublicKey aCallback, void* aPtr);
/**
 * Register a callback for the action ClearToken
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearToken(THandle aProvider, CallbackOAuth1ClearToken aCallback, void* aPtr);
/**
 * Register a callback for the action ClearShortLivedToken
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearShortLivedToken(THandle aProvider, CallbackOAuth1ClearShortLivedToken aCallback, void* aPtr);
/**
 * Register a callback for the action ClearLongLivedToken
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearLongLivedToken(THandle aProvider, CallbackOAuth1ClearLongLivedToken aCallback, void* aPtr);
/**
 * Register a callback for the action ClearShortLivedTokens
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearShortLivedTokens(THandle aProvider, CallbackOAuth1ClearShortLivedTokens aCallback, void* aPtr);
/**
 * Register a callback for the action ClearLongLivedTokens
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearLongLivedTokens(THandle aProvider, CallbackOAuth1ClearLongLivedTokens aCallback, void* aPtr);
/**
 * Register a callback for the action ClearAllTokens
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionClearAllTokens(THandle aProvider, CallbackOAuth1ClearAllTokens aCallback, void* aPtr);
/**
 * Register a callback for the action GetUpdateId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetUpdateId(THandle aProvider, CallbackOAuth1GetUpdateId aCallback, void* aPtr);
/**
 * Register a callback for the action GetServiceStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetServiceStatus(THandle aProvider, CallbackOAuth1GetServiceStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetJobUpdateId
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetJobUpdateId(THandle aProvider, CallbackOAuth1GetJobUpdateId aCallback, void* aPtr);
/**
 * Register a callback for the action GetJobStatus
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetJobStatus(THandle aProvider, CallbackOAuth1GetJobStatus aCallback, void* aPtr);
/**
 * Register a callback for the action GetSupportedServices
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionGetSupportedServices(THandle aProvider, CallbackOAuth1GetSupportedServices aCallback, void* aPtr);
/**
 * Register a callback for the action BeginLimitedInputFlow
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1EnableActionBeginLimitedInputFlow(THandle aProvider, CallbackOAuth1BeginLimitedInputFlow aCallback, void* aPtr);

/**
 * Set the value of the PublicKey property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderOpenhomeOrgOAuth1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PublicKey property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyPublicKey has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1GetPropertyPublicKey(THandle aProvider, char** aValue);
/**
 * Set the value of the UpdateId property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyUpdateId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderOpenhomeOrgOAuth1SetPropertyUpdateId(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the UpdateId property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyUpdateId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1GetPropertyUpdateId(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the JobUpdateId property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyJobUpdateId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderOpenhomeOrgOAuth1SetPropertyJobUpdateId(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the JobUpdateId property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertyJobUpdateId has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1GetPropertyJobUpdateId(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SupportedServices property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertySupportedServices has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderOpenhomeOrgOAuth1SetPropertySupportedServices(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SupportedServices property
 *
 * Can only be called if DvProviderOpenhomeOrgOAuth1EnablePropertySupportedServices has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderOpenhomeOrgOAuth1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderOpenhomeOrgOAuth1GetPropertySupportedServices(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVOPENHOMEORGOAUTH1_C

