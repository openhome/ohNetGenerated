/**
 * Provider for the av.openhome.org:ConfigApp:1 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGCONFIGAPP1_C
#define HEADER_DVAVOPENHOMEORGCONFIGAPP1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgConfigApp1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the GetKeys action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgConfigApp1EnableActionGetKeys
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aKeys
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfigApp1GetKeys)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aKeys);
/**
 * Callback which runs when the SetValue action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgConfigApp1EnableActionSetValue
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aKey
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfigApp1SetValue)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aKey, const char* aValue);
/**
 * Callback which runs when the GetValue action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgConfigApp1EnableActionGetValue
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aKey
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfigApp1GetValue)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aKey, char** aValue);
/**
 * Callback which runs when the ResetAll action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgConfigApp1EnableActionResetAll
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfigApp1ResetAll)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgConfigApp1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1Destroy(THandle aProvider);

/**
 * Enable the Keys property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnablePropertyKeys(THandle aProvider);

/**
 * Register a callback for the action GetKeys
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionGetKeys(THandle aProvider, CallbackConfigApp1GetKeys aCallback, void* aPtr);
/**
 * Register a callback for the action SetValue
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionSetValue(THandle aProvider, CallbackConfigApp1SetValue aCallback, void* aPtr);
/**
 * Register a callback for the action GetValue
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionGetValue(THandle aProvider, CallbackConfigApp1GetValue aCallback, void* aPtr);
/**
 * Register a callback for the action ResetAll
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionResetAll(THandle aProvider, CallbackConfigApp1ResetAll aCallback, void* aPtr);

/**
 * Set the value of the Keys property
 *
 * Can only be called if DvProviderAvOpenhomeOrgConfigApp1EnablePropertyKeys has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgConfigApp1SetPropertyKeys(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Keys property
 *
 * Can only be called if DvProviderAvOpenhomeOrgConfigApp1EnablePropertyKeys has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgConfigApp1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgConfigApp1GetPropertyKeys(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGCONFIGAPP1_C

