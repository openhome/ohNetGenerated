/**
 * Provider for the linn.co.uk:Configuration:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKCONFIGURATION1_C
#define HEADER_DVLINNCOUKCONFIGURATION1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkConfiguration1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the ConfigurationXml action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkConfiguration1EnableActionConfigurationXml
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaConfigurationXml
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfiguration1ConfigurationXml)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaConfigurationXml);
/**
 * Callback which runs when the ParameterXml action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkConfiguration1EnableActionParameterXml
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaParameterXml
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfiguration1ParameterXml)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aaParameterXml);
/**
 * Callback which runs when the SetParameter action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkConfiguration1EnableActionSetParameter
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaTarget
 * @param[in]  aaName
 * @param[in]  aaValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackConfiguration1SetParameter)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aaTarget, const char* aaName, const char* aaValue);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkConfiguration1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1Destroy(THandle aProvider);

/**
 * Enable the ConfigurationXml property.
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1EnablePropertyConfigurationXml(THandle aProvider);
/**
 * Enable the ParameterXml property.
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1EnablePropertyParameterXml(THandle aProvider);

/**
 * Register a callback for the action ConfigurationXml
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1EnableActionConfigurationXml(THandle aProvider, CallbackConfiguration1ConfigurationXml aCallback, void* aPtr);
/**
 * Register a callback for the action ParameterXml
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1EnableActionParameterXml(THandle aProvider, CallbackConfiguration1ParameterXml aCallback, void* aPtr);
/**
 * Register a callback for the action SetParameter
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1EnableActionSetParameter(THandle aProvider, CallbackConfiguration1SetParameter aCallback, void* aPtr);

/**
 * Set the value of the ConfigurationXml property
 *
 * Can only be called if DvProviderLinnCoUkConfiguration1EnablePropertyConfigurationXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkConfiguration1SetPropertyConfigurationXml(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ConfigurationXml property
 *
 * Can only be called if DvProviderLinnCoUkConfiguration1EnablePropertyConfigurationXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1GetPropertyConfigurationXml(THandle aProvider, char** aValue);
/**
 * Set the value of the ParameterXml property
 *
 * Can only be called if DvProviderLinnCoUkConfiguration1EnablePropertyParameterXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderLinnCoUkConfiguration1SetPropertyParameterXml(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ParameterXml property
 *
 * Can only be called if DvProviderLinnCoUkConfiguration1EnablePropertyParameterXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderLinnCoUkConfiguration1Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderLinnCoUkConfiguration1GetPropertyParameterXml(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKCONFIGURATION1_C

