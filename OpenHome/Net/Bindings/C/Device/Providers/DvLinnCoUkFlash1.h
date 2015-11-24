/**
 * Provider for the linn.co.uk:Flash:1 UPnP service
 */
#ifndef HEADER_DVLINNCOUKFLASH1_C
#define HEADER_DVLINNCOUKFLASH1_C

#include <OpenHome/Defines.h>
#include <OpenHome/OsTypes.h>
#include <OpenHome/Net/C/DvDevice.h>
#include <OpenHome/Net/C/DvInvocation.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup DvProviderLinnCoUkFlash1
 * @ingroup Providers
 * @{
 */

/**
 * Callback which runs when the Read action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionRead
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[in]  aaAddress
 * @param[in]  aaLength
 * @param[out] aaBuffer
 * @param[out] aaBufferLen
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1Read)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, char** aaBuffer, uint32_t* aaBufferLen);
/**
 * Callback which runs when the Write action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionWrite
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[in]  aaAddress
 * @param[in]  aaSource
 * @param[in]  aaSourceLen
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1Write)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t aaAddress, const char* aaSource, uint32_t aaSourceLen);
/**
 * Callback which runs when the Erase action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionErase
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[in]  aaAddress
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1Erase)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t aaAddress);
/**
 * Callback which runs when the EraseSector action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionEraseSector
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[in]  aaSector
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1EraseSector)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t aaSector);
/**
 * Callback which runs when the EraseSectors action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionEraseSectors
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[in]  aaFirstSector
 * @param[in]  aaLastSector
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1EraseSectors)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector);
/**
 * Callback which runs when the EraseChip action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionEraseChip
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1EraseChip)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId);
/**
 * Callback which runs when the Sectors action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionSectors
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[out] aaSectors
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1Sectors)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t* aaSectors);
/**
 * Callback which runs when the SectorBytes action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionSectorBytes
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[in]  aaId
 * @param[out] aaBytes
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1SectorBytes)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t aaId, uint32_t* aaBytes);
/**
 * Callback which runs when the RomDirInfo action is invoked
 *
 * @param[in]  aPtr           Opaque data passed to DvProviderLinnCoUkFlash1EnableActionRomDirInfo
 * @param[in]  aInvocation    Table of function pointers allowing access to the version of the service being used
 *                            and other queries.
 * @param[in] aInvocationPtr  aPtr argument to all functions contained in aInvocation.
 * @param[out] aaFlashIdMain
 * @param[out] aaOffsetMain
 * @param[out] aaBytesMain
 * @param[out] aaFlashIdFallback
 * @param[out] aaOffsetFallback
 * @param[out] aaBytesFallback
 *
 * @return  0 if the action succeeded; non-zero if the action failed
 */
typedef int32_t (STDCALL *CallbackFlash1RomDirInfo)(void* aPtr, IDvInvocationC* aInvocation, void* aInvocationPtr, uint32_t* aaFlashIdMain, uint32_t* aaOffsetMain, uint32_t* aaBytesMain, uint32_t* aaFlashIdFallback, uint32_t* aaOffsetFallback, uint32_t* aaBytesFallback);

/**
 * Provider constructor
 *
 * @param[in] aDevice  Handle returned by DvDeviceCreate[NoResources]
 *
 * @return  Handle to this provider
 */
DllExport THandle STDCALL DvProviderLinnCoUkFlash1Create(DvDeviceC aDevice);

/**
 * Provider destructor
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1Destroy(THandle aProvider);


/**
 * Register a callback for the action Read
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionRead(THandle aProvider, CallbackFlash1Read aCallback, void* aPtr);
/**
 * Register a callback for the action Write
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionWrite(THandle aProvider, CallbackFlash1Write aCallback, void* aPtr);
/**
 * Register a callback for the action Erase
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionErase(THandle aProvider, CallbackFlash1Erase aCallback, void* aPtr);
/**
 * Register a callback for the action EraseSector
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseSector(THandle aProvider, CallbackFlash1EraseSector aCallback, void* aPtr);
/**
 * Register a callback for the action EraseSectors
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseSectors(THandle aProvider, CallbackFlash1EraseSectors aCallback, void* aPtr);
/**
 * Register a callback for the action EraseChip
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionEraseChip(THandle aProvider, CallbackFlash1EraseChip aCallback, void* aPtr);
/**
 * Register a callback for the action Sectors
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionSectors(THandle aProvider, CallbackFlash1Sectors aCallback, void* aPtr);
/**
 * Register a callback for the action SectorBytes
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionSectorBytes(THandle aProvider, CallbackFlash1SectorBytes aCallback, void* aPtr);
/**
 * Register a callback for the action RomDirInfo
 *
 * If this is called, the action's availability will be published in the device's service.xml.
 * If this is not called, any attempt to invoke the action on a control point will fail.
 *
 * @param[in] aProvider  Handle returned by DvProviderLinnCoUkFlash1Create
 * @param[in] aCallback  Callback which will be run when the action is invoked
 * @param[in] aPtr       Client-specified data which will be passed to the callback
 */
DllExport void STDCALL DvProviderLinnCoUkFlash1EnableActionRomDirInfo(THandle aProvider, CallbackFlash1RomDirInfo aCallback, void* aPtr);


/* @} */

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKFLASH1_C

