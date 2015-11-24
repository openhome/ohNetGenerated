#ifndef HEADER_LINNCOUKVOLKANO1CPP
#define HEADER_LINNCOUKVOLKANO1CPP

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

class ICpProxyLinnCoUkVolkano1Cpp
{
public:
    virtual void SyncReboot() = 0;
    virtual void BeginReboot(FunctorAsync& aFunctor) = 0;
    virtual void EndReboot(IAsync& aAsync) = 0;
    virtual void SyncBootMode(std::string& aaMode) = 0;
    virtual void BeginBootMode(FunctorAsync& aFunctor) = 0;
    virtual void EndBootMode(IAsync& aAsync, std::string& aaMode) = 0;
    virtual void SyncSetBootMode(const std::string& aaMode) = 0;
    virtual void BeginSetBootMode(const std::string& aaMode, FunctorAsync& aFunctor) = 0;
    virtual void EndSetBootMode(IAsync& aAsync) = 0;
    virtual void SyncBspType(std::string& aaBspType) = 0;
    virtual void BeginBspType(FunctorAsync& aFunctor) = 0;
    virtual void EndBspType(IAsync& aAsync, std::string& aaBspType) = 0;
    virtual void SyncUglyName(std::string& aaUglyName) = 0;
    virtual void BeginUglyName(FunctorAsync& aFunctor) = 0;
    virtual void EndUglyName(IAsync& aAsync, std::string& aaUglyName) = 0;
    virtual void SyncMacAddress(std::string& aaMacAddress) = 0;
    virtual void BeginMacAddress(FunctorAsync& aFunctor) = 0;
    virtual void EndMacAddress(IAsync& aAsync, std::string& aaMacAddress) = 0;
    virtual void SyncProductId(std::string& aaProductNumber) = 0;
    virtual void BeginProductId(FunctorAsync& aFunctor) = 0;
    virtual void EndProductId(IAsync& aAsync, std::string& aaProductNumber) = 0;
    virtual void SyncBoardId(uint32_t aaIndex, std::string& aaBoardNumber) = 0;
    virtual void BeginBoardId(uint32_t aaIndex, FunctorAsync& aFunctor) = 0;
    virtual void EndBoardId(IAsync& aAsync, std::string& aaBoardNumber) = 0;
    virtual void SyncBoardType(uint32_t aaIndex, std::string& aaBoardNumber) = 0;
    virtual void BeginBoardType(uint32_t aaIndex, FunctorAsync& aFunctor) = 0;
    virtual void EndBoardType(IAsync& aAsync, std::string& aaBoardNumber) = 0;
    virtual void SyncMaxBoards(uint32_t& aaMaxBoards) = 0;
    virtual void BeginMaxBoards(FunctorAsync& aFunctor) = 0;
    virtual void EndMaxBoards(IAsync& aAsync, uint32_t& aaMaxBoards) = 0;
    virtual void SyncSoftwareVersion(std::string& aaSoftwareVersion) = 0;
    virtual void BeginSoftwareVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndSoftwareVersion(IAsync& aAsync, std::string& aaSoftwareVersion) = 0;
    virtual void SyncSoftwareUpdate(bool& aaAvailable, std::string& aaSoftwareVersion) = 0;
    virtual void BeginSoftwareUpdate(FunctorAsync& aFunctor) = 0;
    virtual void EndSoftwareUpdate(IAsync& aAsync, bool& aaAvailable, std::string& aaSoftwareVersion) = 0;
    virtual void SyncDeviceInfo(std::string& aaDeviceInfoXml) = 0;
    virtual void BeginDeviceInfo(FunctorAsync& aFunctor) = 0;
    virtual void EndDeviceInfo(IAsync& aAsync, std::string& aaDeviceInfoXml) = 0;
};

/**
 * Proxy for linn.co.uk:Volkano:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkVolkano1Cpp : public CpProxy, public ICpProxyLinnCoUkVolkano1Cpp
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
    CpProxyLinnCoUkVolkano1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkVolkano1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncReboot();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReboot().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReboot(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndReboot(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaMode
     */
    void SyncBootMode(std::string& aaMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBootMode().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBootMode(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaMode
     */
    void EndBootMode(IAsync& aAsync, std::string& aaMode);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaMode
     */
    void SyncSetBootMode(const std::string& aaMode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetBootMode().
     *
     * @param[in] aaMode
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetBootMode(const std::string& aaMode, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetBootMode(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaBspType
     */
    void SyncBspType(std::string& aaBspType);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBspType().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBspType(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBspType
     */
    void EndBspType(IAsync& aAsync, std::string& aaBspType);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaUglyName
     */
    void SyncUglyName(std::string& aaUglyName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndUglyName().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginUglyName(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaUglyName
     */
    void EndUglyName(IAsync& aAsync, std::string& aaUglyName);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaMacAddress
     */
    void SyncMacAddress(std::string& aaMacAddress);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMacAddress().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMacAddress(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaMacAddress
     */
    void EndMacAddress(IAsync& aAsync, std::string& aaMacAddress);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaProductNumber
     */
    void SyncProductId(std::string& aaProductNumber);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndProductId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginProductId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaProductNumber
     */
    void EndProductId(IAsync& aAsync, std::string& aaProductNumber);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaIndex
     * @param[out] aaBoardNumber
     */
    void SyncBoardId(uint32_t aaIndex, std::string& aaBoardNumber);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBoardId().
     *
     * @param[in] aaIndex
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBoardId(uint32_t aaIndex, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBoardNumber
     */
    void EndBoardId(IAsync& aAsync, std::string& aaBoardNumber);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaIndex
     * @param[out] aaBoardNumber
     */
    void SyncBoardType(uint32_t aaIndex, std::string& aaBoardNumber);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBoardType().
     *
     * @param[in] aaIndex
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBoardType(uint32_t aaIndex, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaBoardNumber
     */
    void EndBoardType(IAsync& aAsync, std::string& aaBoardNumber);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaMaxBoards
     */
    void SyncMaxBoards(uint32_t& aaMaxBoards);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMaxBoards().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMaxBoards(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaMaxBoards
     */
    void EndMaxBoards(IAsync& aAsync, uint32_t& aaMaxBoards);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaSoftwareVersion
     */
    void SyncSoftwareVersion(std::string& aaSoftwareVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSoftwareVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSoftwareVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaSoftwareVersion
     */
    void EndSoftwareVersion(IAsync& aAsync, std::string& aaSoftwareVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaAvailable
     * @param[out] aaSoftwareVersion
     */
    void SyncSoftwareUpdate(bool& aaAvailable, std::string& aaSoftwareVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSoftwareUpdate().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSoftwareUpdate(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaAvailable
     * @param[out] aaSoftwareVersion
     */
    void EndSoftwareUpdate(IAsync& aAsync, bool& aaAvailable, std::string& aaSoftwareVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaDeviceInfoXml
     */
    void SyncDeviceInfo(std::string& aaDeviceInfoXml);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDeviceInfo().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDeviceInfo(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaDeviceInfoXml
     */
    void EndDeviceInfo(IAsync& aAsync, std::string& aaDeviceInfoXml);


private:
private:
    Action* iActionReboot;
    Action* iActionBootMode;
    Action* iActionSetBootMode;
    Action* iActionBspType;
    Action* iActionUglyName;
    Action* iActionMacAddress;
    Action* iActionProductId;
    Action* iActionBoardId;
    Action* iActionBoardType;
    Action* iActionMaxBoards;
    Action* iActionSoftwareVersion;
    Action* iActionSoftwareUpdate;
    Action* iActionDeviceInfo;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKVOLKANO1CPP

