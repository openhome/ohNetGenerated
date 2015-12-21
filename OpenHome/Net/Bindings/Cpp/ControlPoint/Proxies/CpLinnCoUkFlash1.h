#ifndef HEADER_LINNCOUKFLASH1CPP
#define HEADER_LINNCOUKFLASH1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

#include <string>

namespace OpenHome {
namespace Net {

class CpDeviceCpp;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;
class CpProxy;
class ICpProxyLinnCoUkFlash1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkFlash1Cpp() {}
    virtual void SyncRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, std::string& aaBuffer) = 0;
    virtual void BeginRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, FunctorAsync& aFunctor) = 0;
    virtual void EndRead(IAsync& aAsync, std::string& aaBuffer) = 0;
    virtual void SyncWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource) = 0;
    virtual void BeginWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource, FunctorAsync& aFunctor) = 0;
    virtual void EndWrite(IAsync& aAsync) = 0;
    virtual void SyncErase(uint32_t aaId, uint32_t aaAddress) = 0;
    virtual void BeginErase(uint32_t aaId, uint32_t aaAddress, FunctorAsync& aFunctor) = 0;
    virtual void EndErase(IAsync& aAsync) = 0;
    virtual void SyncEraseSector(uint32_t aaId, uint32_t aaSector) = 0;
    virtual void BeginEraseSector(uint32_t aaId, uint32_t aaSector, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseSector(IAsync& aAsync) = 0;
    virtual void SyncEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector) = 0;
    virtual void BeginEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseSectors(IAsync& aAsync) = 0;
    virtual void SyncEraseChip(uint32_t aaId) = 0;
    virtual void BeginEraseChip(uint32_t aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseChip(IAsync& aAsync) = 0;
    virtual void SyncSectors(uint32_t aaId, uint32_t& aaSectors) = 0;
    virtual void BeginSectors(uint32_t aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndSectors(IAsync& aAsync, uint32_t& aaSectors) = 0;
    virtual void SyncSectorBytes(uint32_t aaId, uint32_t& aaBytes) = 0;
    virtual void BeginSectorBytes(uint32_t aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndSectorBytes(IAsync& aAsync, uint32_t& aaBytes) = 0;
    virtual void SyncRomDirInfo(uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback) = 0;
    virtual void BeginRomDirInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndRomDirInfo(IAsync& aAsync, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback) = 0;
};

/**
 * Proxy for linn.co.uk:Flash:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkFlash1Cpp : public ICpProxyLinnCoUkFlash1Cpp
{
public:
    /**
     * Constructor.
     *
     * Use iCpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyLinnCoUkFlash1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkFlash1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaAddress
     * @param[in]  aaLength
     * @param[out] aaBuffer
     */
    void SyncRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, std::string& aaBuffer);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRead().
     *
     * @param[in] aaId
     * @param[in] aaAddress
     * @param[in] aaLength
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRead(uint32_t aaId, uint32_t aaAddress, uint32_t aaLength, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBuffer
     */
    void EndRead(IAsync& aAsync, std::string& aaBuffer);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaAddress
     * @param[in]  aaSource
     */
    void SyncWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndWrite().
     *
     * @param[in] aaId
     * @param[in] aaAddress
     * @param[in] aaSource
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginWrite(uint32_t aaId, uint32_t aaAddress, const std::string& aaSource, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndWrite(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaAddress
     */
    void SyncErase(uint32_t aaId, uint32_t aaAddress);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndErase().
     *
     * @param[in] aaId
     * @param[in] aaAddress
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginErase(uint32_t aaId, uint32_t aaAddress, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndErase(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaSector
     */
    void SyncEraseSector(uint32_t aaId, uint32_t aaSector);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEraseSector().
     *
     * @param[in] aaId
     * @param[in] aaSector
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEraseSector(uint32_t aaId, uint32_t aaSector, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEraseSector(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaFirstSector
     * @param[in]  aaLastSector
     */
    void SyncEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEraseSectors().
     *
     * @param[in] aaId
     * @param[in] aaFirstSector
     * @param[in] aaLastSector
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEraseSectors(uint32_t aaId, uint32_t aaFirstSector, uint32_t aaLastSector, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEraseSectors(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     */
    void SyncEraseChip(uint32_t aaId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEraseChip().
     *
     * @param[in] aaId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEraseChip(uint32_t aaId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndEraseChip(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[out] aaSectors
     */
    void SyncSectors(uint32_t aaId, uint32_t& aaSectors);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSectors().
     *
     * @param[in] aaId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSectors(uint32_t aaId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaSectors
     */
    void EndSectors(IAsync& aAsync, uint32_t& aaSectors);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[out] aaBytes
     */
    void SyncSectorBytes(uint32_t aaId, uint32_t& aaBytes);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSectorBytes().
     *
     * @param[in] aaId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSectorBytes(uint32_t aaId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBytes
     */
    void EndSectorBytes(IAsync& aAsync, uint32_t& aaBytes);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaFlashIdMain
     * @param[out] aaOffsetMain
     * @param[out] aaBytesMain
     * @param[out] aaFlashIdFallback
     * @param[out] aaOffsetFallback
     * @param[out] aaBytesFallback
     */
    void SyncRomDirInfo(uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndRomDirInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginRomDirInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaFlashIdMain
     * @param[out] aaOffsetMain
     * @param[out] aaBytesMain
     * @param[out] aaFlashIdFallback
     * @param[out] aaOffsetFallback
     * @param[out] aaBytesFallback
     */
    void EndRomDirInfo(IAsync& aAsync, uint32_t& aaFlashIdMain, uint32_t& aaOffsetMain, uint32_t& aaBytesMain, uint32_t& aaFlashIdFallback, uint32_t& aaOffsetFallback, uint32_t& aaBytesFallback);


    /**
    * This function exposes the Subscribe() function of the iCpProxy member variable
    */
    void Subscribe();
    /**
    * This function exposes the Unsubscribe() function of the iCpProxy member variable
    */
    void Unsubscribe();
    /**
    * This function exposes the SetPropertyChanged() function of the iCpProxy member variable
    */
    void SetPropertyChanged(Functor& aFunctor);
    /**
    * This function exposes the SetPropertyInitialEvent() function of the iCpProxy member variable
    */
    void SetPropertyInitialEvent(Functor& aFunctor);
    /**
    * This function exposes the AddProperty() function of the iCpProxy member variable
    */
    void AddProperty(Property* aProperty);
    /**
    * This function exposes DestroyService() function of the iCpProxy member variable
    */
    void DestroyService();
    /**
    * This function exposes the REportEvent() function of the iCpProxy member variable
    */
    void ReportEvent(Functor aFunctor);
    /**
    * This function exposes the Version() function of the iCpProxy member variable
    */
    TUint Version() const;
private:
    CpProxy iCpProxy;
private:
    Action* iActionRead;
    Action* iActionWrite;
    Action* iActionErase;
    Action* iActionEraseSector;
    Action* iActionEraseSectors;
    Action* iActionEraseChip;
    Action* iActionSectors;
    Action* iActionSectorBytes;
    Action* iActionRomDirInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKFLASH1CPP

