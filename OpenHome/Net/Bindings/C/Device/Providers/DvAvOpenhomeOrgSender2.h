/**
 * Provider for the av.openhome.org:Sender:2 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGSENDER2_C
#define HEADER_DVAVOPENHOMEORGSENDER2_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgSender2
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the PresentationUrl action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionPresentationUrl
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2PresentationUrl)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the Metadata action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionMetadata
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Metadata)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the Audio action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionAudio
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Audio)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the Status action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionStatus
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Status)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the Status2 action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionStatus2
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Status2)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the Enabled action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionEnabled
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Enabled)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the Attributes action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgSender2EnableActionAttributes
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackSender2Attributes)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgSender2Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2Destroy(THandle aProvider);

/**
 * Enable the PresentationUrl property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyPresentationUrl(THandle aProvider);
/**
 * Enable the Metadata property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyMetadata(THandle aProvider);
/**
 * Enable the Audio property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyAudio(THandle aProvider);
/**
 * Enable the Status property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyStatus(THandle aProvider);
/**
 * Enable the Status2 property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyStatus2(THandle aProvider);
/**
 * Enable the Enabled property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyEnabled(THandle aProvider);
/**
 * Enable the Attributes property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnablePropertyAttributes(THandle aProvider);

/**
 * Register a callback for the action PresentationUrl
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionPresentationUrl(THandle aProvider, CallbackSender2PresentationUrl aCallback, void* aPtr);
/**
 * Register a callback for the action Metadata
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionMetadata(THandle aProvider, CallbackSender2Metadata aCallback, void* aPtr);
/**
 * Register a callback for the action Audio
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionAudio(THandle aProvider, CallbackSender2Audio aCallback, void* aPtr);
/**
 * Register a callback for the action Status
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionStatus(THandle aProvider, CallbackSender2Status aCallback, void* aPtr);
/**
 * Register a callback for the action Status2
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionStatus2(THandle aProvider, CallbackSender2Status2 aCallback, void* aPtr);
/**
 * Register a callback for the action Enabled
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionEnabled(THandle aProvider, CallbackSender2Enabled aCallback, void* aPtr);
/**
 * Register a callback for the action Attributes
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2EnableActionAttributes(THandle aProvider, CallbackSender2Attributes aCallback, void* aPtr);

/**
 * Set the value of the PresentationUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyPresentationUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyPresentationUrl(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the PresentationUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyPresentationUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyPresentationUrl(THandle aProvider, char** aValue);
/**
 * Set the value of the Metadata property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyMetadata has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyMetadata(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Metadata property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyMetadata has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyMetadata(THandle aProvider, char** aValue);
/**
 * Set the value of the Audio property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyAudio has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyAudio(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Audio property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyAudio has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyAudio(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Status property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyStatus(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Status property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyStatus has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyStatus(THandle aProvider, char** aValue);
/**
 * Set the value of the Status2 property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyStatus2 has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyStatus2(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Status2 property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyStatus2 has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyStatus2(THandle aProvider, char** aValue);
/**
 * Set the value of the Enabled property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyEnabled has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyEnabled(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Enabled property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyEnabled has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyEnabled(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the Attributes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyAttributes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgSender2SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Attributes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgSender2EnablePropertyAttributes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgSender2Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgSender2GetPropertyAttributes(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGSENDER2_C

