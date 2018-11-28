/**
 * Provider for the av.openhome.org:Product:3 UPnP service
 */
#ifndef HEADER_DVAVOPENHOMEORGPRODUCT3_C
#define HEADER_DVAVOPENHOMEORGPRODUCT3_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderAvOpenhomeOrgProduct3
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Manufacturer action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionManufacturer
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aName
 * @param[out] aInfo
 * @param[out] aUrl
 * @param[out] aImageUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Manufacturer)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aName, char** aInfo, char** aUrl, char** aImageUri);
/**
 * Callback which runs when the Model action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionModel
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aName
 * @param[out] aInfo
 * @param[out] aUrl
 * @param[out] aImageUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Model)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aName, char** aInfo, char** aUrl, char** aImageUri);
/**
 * Callback which runs when the Product action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionProduct
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aRoom
 * @param[out] aName
 * @param[out] aInfo
 * @param[out] aUrl
 * @param[out] aImageUri
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Product)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri);
/**
 * Callback which runs when the Standby action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionStandby
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Standby)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the StandbyTransitioning action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionStandbyTransitioning
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3StandbyTransitioning)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the SetStandby action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSetStandby
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SetStandby)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the SourceCount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSourceCount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SourceCount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the SourceXml action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSourceXml
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SourceXml)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the SourceIndex action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSourceIndex
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SourceIndex)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);
/**
 * Callback which runs when the SetSourceIndex action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndex
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SetSourceIndex)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aValue);
/**
 * Callback which runs when the SetSourceIndexByName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndexByName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SetSourceIndexByName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aValue);
/**
 * Callback which runs when the SetSourceBySystemName action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceBySystemName
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SetSourceBySystemName)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, const char* aValue);
/**
 * Callback which runs when the Source action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSource
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aIndex
 * @param[out] aSystemName
 * @param[out] aType
 * @param[out] aName
 * @param[out] aVisible
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Source)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aIndex, char** aSystemName, char** aType, char** aName, uint32_t* aVisible);
/**
 * Callback which runs when the Attributes action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionAttributes
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3Attributes)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, char** aValue);
/**
 * Callback which runs when the SourceXmlChangeCount action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderAvOpenhomeOrgProduct3EnableActionSourceXmlChangeCount
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aValue
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackProduct3SourceXmlChangeCount)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aValue);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderAvOpenhomeOrgProduct3Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3Destroy(THandle aProvider);

/**
 * Enable the ManufacturerName property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerName(THandle aProvider);
/**
 * Enable the ManufacturerInfo property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerInfo(THandle aProvider);
/**
 * Enable the ManufacturerUrl property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerUrl(THandle aProvider);
/**
 * Enable the ManufacturerImageUri property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerImageUri(THandle aProvider);
/**
 * Enable the ModelName property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelName(THandle aProvider);
/**
 * Enable the ModelInfo property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelInfo(THandle aProvider);
/**
 * Enable the ModelUrl property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelUrl(THandle aProvider);
/**
 * Enable the ModelImageUri property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelImageUri(THandle aProvider);
/**
 * Enable the ProductRoom property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductRoom(THandle aProvider);
/**
 * Enable the ProductName property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductName(THandle aProvider);
/**
 * Enable the ProductInfo property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductInfo(THandle aProvider);
/**
 * Enable the ProductUrl property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductUrl(THandle aProvider);
/**
 * Enable the ProductImageUri property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductImageUri(THandle aProvider);
/**
 * Enable the Standby property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyStandby(THandle aProvider);
/**
 * Enable the StandbyTransitioning property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyStandbyTransitioning(THandle aProvider);
/**
 * Enable the SourceIndex property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceIndex(THandle aProvider);
/**
 * Enable the SourceCount property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceCount(THandle aProvider);
/**
 * Enable the SourceXml property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceXml(THandle aProvider);
/**
 * Enable the Attributes property.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyAttributes(THandle aProvider);

/**
 * Register a callback for the action Manufacturer
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionManufacturer(THandle aProvider, CallbackProduct3Manufacturer aCallback, void* aPtr);
/**
 * Register a callback for the action Model
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionModel(THandle aProvider, CallbackProduct3Model aCallback, void* aPtr);
/**
 * Register a callback for the action Product
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionProduct(THandle aProvider, CallbackProduct3Product aCallback, void* aPtr);
/**
 * Register a callback for the action Standby
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionStandby(THandle aProvider, CallbackProduct3Standby aCallback, void* aPtr);
/**
 * Register a callback for the action StandbyTransitioning
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionStandbyTransitioning(THandle aProvider, CallbackProduct3StandbyTransitioning aCallback, void* aPtr);
/**
 * Register a callback for the action SetStandby
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetStandby(THandle aProvider, CallbackProduct3SetStandby aCallback, void* aPtr);
/**
 * Register a callback for the action SourceCount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceCount(THandle aProvider, CallbackProduct3SourceCount aCallback, void* aPtr);
/**
 * Register a callback for the action SourceXml
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceXml(THandle aProvider, CallbackProduct3SourceXml aCallback, void* aPtr);
/**
 * Register a callback for the action SourceIndex
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceIndex(THandle aProvider, CallbackProduct3SourceIndex aCallback, void* aPtr);
/**
 * Register a callback for the action SetSourceIndex
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndex(THandle aProvider, CallbackProduct3SetSourceIndex aCallback, void* aPtr);
/**
 * Register a callback for the action SetSourceIndexByName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndexByName(THandle aProvider, CallbackProduct3SetSourceIndexByName aCallback, void* aPtr);
/**
 * Register a callback for the action SetSourceBySystemName
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceBySystemName(THandle aProvider, CallbackProduct3SetSourceBySystemName aCallback, void* aPtr);
/**
 * Register a callback for the action Source
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSource(THandle aProvider, CallbackProduct3Source aCallback, void* aPtr);
/**
 * Register a callback for the action Attributes
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionAttributes(THandle aProvider, CallbackProduct3Attributes aCallback, void* aPtr);
/**
 * Register a callback for the action SourceXmlChangeCount
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceXmlChangeCount(THandle aProvider, CallbackProduct3SourceXmlChangeCount aCallback, void* aPtr);

/**
 * Set the value of the ManufacturerName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerName(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ManufacturerName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerName(THandle aProvider, char** aValue);
/**
 * Set the value of the ManufacturerInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerInfo(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ManufacturerInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerInfo(THandle aProvider, char** aValue);
/**
 * Set the value of the ManufacturerUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerUrl(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ManufacturerUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerUrl(THandle aProvider, char** aValue);
/**
 * Set the value of the ManufacturerImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ManufacturerImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerImageUri(THandle aProvider, char** aValue);
/**
 * Set the value of the ModelName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelName(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ModelName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelName(THandle aProvider, char** aValue);
/**
 * Set the value of the ModelInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelInfo(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ModelInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelInfo(THandle aProvider, char** aValue);
/**
 * Set the value of the ModelUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelUrl(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ModelUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelUrl(THandle aProvider, char** aValue);
/**
 * Set the value of the ModelImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ModelImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyModelImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelImageUri(THandle aProvider, char** aValue);
/**
 * Set the value of the ProductRoom property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductRoom has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductRoom(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProductRoom property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductRoom has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductRoom(THandle aProvider, char** aValue);
/**
 * Set the value of the ProductName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductName(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProductName property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductName has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductName(THandle aProvider, char** aValue);
/**
 * Set the value of the ProductInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductInfo(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProductInfo property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductInfo has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductInfo(THandle aProvider, char** aValue);
/**
 * Set the value of the ProductUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductUrl(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProductUrl property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductUrl has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductUrl(THandle aProvider, char** aValue);
/**
 * Set the value of the ProductImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the ProductImageUri property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyProductImageUri has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductImageUri(THandle aProvider, char** aValue);
/**
 * Set the value of the Standby property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyStandby has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyStandby(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Standby property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyStandby has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyStandby(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the StandbyTransitioning property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyStandbyTransitioning has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyStandbyTransitioning(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the StandbyTransitioning property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyStandbyTransitioning has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyStandbyTransitioning(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SourceIndex property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceIndex has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceIndex(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SourceIndex property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceIndex has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceIndex(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SourceCount property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceCount has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SourceCount property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceCount has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceCount(THandle aProvider, uint32_t* aValue);
/**
 * Set the value of the SourceXml property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceXml(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the SourceXml property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertySourceXml has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceXml(THandle aProvider, char** aValue);
/**
 * Set the value of the Attributes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyAttributes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[in]  aValue     New value for the property (will be copied)
 * @param[out] aChanged   1 if the value has been updated; 0 if it was the same as the previous value
 *
 * @return  0 if the property was successfully set; non-zero if there was an error (including
 *          an attempt to set a property to a value not in its allowed range/set)
 */
DllExport int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged);
/**
 * Get a copy of the value of the Attributes property
 *
 * Can only be called if DvProviderAvOpenhomeOrgProduct3EnablePropertyAttributes has previously been called.
 *
 * @param[in]  aProvider  Handle returned by DvProviderAvOpenhomeOrgProduct3Create
 * @param[out] aValue     Value for the property.  Caller is responsible for freeing this.
 */
DllExport void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyAttributes(THandle aProvider, char** aValue);

/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVAVOPENHOMEORGPRODUCT3_C

