#ifndef HEADER_LINNCOUKFLASH1
#define HEADER_LINNCOUKFLASH1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Net/Core/CpProxy.h>

namespace OpenHome {
namespace Net {

class CpDevice;
class Action;
class PropertyBinary;
class PropertyBool;
class PropertyInt;
class PropertyString;
class PropertyUint;

class ICpProxyLinnCoUkFlash1
{
public:
    virtual void SyncRead(TUint aaId, TUint aaAddress, TUint aaLength, Brh& aaBuffer) = 0;
    virtual void BeginRead(TUint aaId, TUint aaAddress, TUint aaLength, FunctorAsync& aFunctor) = 0;
    virtual void EndRead(IAsync& aAsync, Brh& aaBuffer) = 0;
    virtual void SyncWrite(TUint aaId, TUint aaAddress, const Brx& aaSource) = 0;
    virtual void BeginWrite(TUint aaId, TUint aaAddress, const Brx& aaSource, FunctorAsync& aFunctor) = 0;
    virtual void EndWrite(IAsync& aAsync) = 0;
    virtual void SyncErase(TUint aaId, TUint aaAddress) = 0;
    virtual void BeginErase(TUint aaId, TUint aaAddress, FunctorAsync& aFunctor) = 0;
    virtual void EndErase(IAsync& aAsync) = 0;
    virtual void SyncEraseSector(TUint aaId, TUint aaSector) = 0;
    virtual void BeginEraseSector(TUint aaId, TUint aaSector, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseSector(IAsync& aAsync) = 0;
    virtual void SyncEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector) = 0;
    virtual void BeginEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseSectors(IAsync& aAsync) = 0;
    virtual void SyncEraseChip(TUint aaId) = 0;
    virtual void BeginEraseChip(TUint aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndEraseChip(IAsync& aAsync) = 0;
    virtual void SyncSectors(TUint aaId, TUint& aaSectors) = 0;
    virtual void BeginSectors(TUint aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndSectors(IAsync& aAsync, TUint& aaSectors) = 0;
    virtual void SyncSectorBytes(TUint aaId, TUint& aaBytes) = 0;
    virtual void BeginSectorBytes(TUint aaId, FunctorAsync& aFunctor) = 0;
    virtual void EndSectorBytes(IAsync& aAsync, TUint& aaBytes) = 0;
    virtual void SyncRomDirInfo(TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback) = 0;
    virtual void BeginRomDirInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndRomDirInfo(IAsync& aAsync, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback) = 0;
};

/**
 * Proxy for linn.co.uk:Flash:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkFlash1 : public CpProxy, public ICpProxyLinnCoUkFlash1
{
public:
    /**
     * Constructor.
     *
     * Use CpProxy::[Un]Subscribe() to enable/disable querying of state variable
     * and reporting of their changes.
     *
     * @param[in]  aDevice   The device to use
     */
    CpProxyLinnCoUkFlash1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkFlash1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaAddress
     * @param[in]  aaLength
     * @param[out] aaBuffer
     */
    void SyncRead(TUint aaId, TUint aaAddress, TUint aaLength, Brh& aaBuffer);
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
    void BeginRead(TUint aaId, TUint aaAddress, TUint aaLength, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBuffer
     */
    void EndRead(IAsync& aAsync, Brh& aaBuffer);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[in]  aaAddress
     * @param[in]  aaSource
     */
    void SyncWrite(TUint aaId, TUint aaAddress, const Brx& aaSource);
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
    void BeginWrite(TUint aaId, TUint aaAddress, const Brx& aaSource, FunctorAsync& aFunctor);
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
    void SyncErase(TUint aaId, TUint aaAddress);
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
    void BeginErase(TUint aaId, TUint aaAddress, FunctorAsync& aFunctor);
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
    void SyncEraseSector(TUint aaId, TUint aaSector);
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
    void BeginEraseSector(TUint aaId, TUint aaSector, FunctorAsync& aFunctor);
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
    void SyncEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector);
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
    void BeginEraseSectors(TUint aaId, TUint aaFirstSector, TUint aaLastSector, FunctorAsync& aFunctor);
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
    void SyncEraseChip(TUint aaId);
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
    void BeginEraseChip(TUint aaId, FunctorAsync& aFunctor);
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
    void SyncSectors(TUint aaId, TUint& aaSectors);
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
    void BeginSectors(TUint aaId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaSectors
     */
    void EndSectors(IAsync& aAsync, TUint& aaSectors);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaId
     * @param[out] aaBytes
     */
    void SyncSectorBytes(TUint aaId, TUint& aaBytes);
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
    void BeginSectorBytes(TUint aaId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBytes
     */
    void EndSectorBytes(IAsync& aAsync, TUint& aaBytes);

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
    void SyncRomDirInfo(TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);
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
    void EndRomDirInfo(IAsync& aAsync, TUint& aaFlashIdMain, TUint& aaOffsetMain, TUint& aaBytesMain, TUint& aaFlashIdFallback, TUint& aaOffsetFallback, TUint& aaBytesFallback);


private:
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

#endif // HEADER_LINNCOUKFLASH1

