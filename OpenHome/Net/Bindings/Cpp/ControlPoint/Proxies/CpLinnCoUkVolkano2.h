#ifndef HEADER_LINNCOUKVOLKANO2CPP
#define HEADER_LINNCOUKVOLKANO2CPP

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
class ICpProxyLinnCoUkVolkano2Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkVolkano2Cpp() {}
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
    virtual void SyncIpAddress(std::string& aaIpAddress) = 0;
    virtual void BeginIpAddress(FunctorAsync& aFunctor) = 0;
    virtual void EndIpAddress(IAsync& aAsync, std::string& aaIpAddress) = 0;
    virtual void SyncIpAddressList(std::string& aaIpAddressList) = 0;
    virtual void BeginIpAddressList(FunctorAsync& aFunctor) = 0;
    virtual void EndIpAddressList(IAsync& aAsync, std::string& aaIpAddressList) = 0;
    virtual void SyncMacAddress(std::string& aaMacAddress) = 0;
    virtual void BeginMacAddress(FunctorAsync& aFunctor) = 0;
    virtual void EndMacAddress(IAsync& aAsync, std::string& aaMacAddress) = 0;
    virtual void SyncMacAddressList(std::string& aaMacAddressList) = 0;
    virtual void BeginMacAddressList(FunctorAsync& aFunctor) = 0;
    virtual void EndMacAddressList(IAsync& aAsync, std::string& aaMacAddressList) = 0;
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
    virtual void SyncCoreBoardId(std::string& aaCoreBoardId) = 0;
    virtual void BeginCoreBoardId(FunctorAsync& aFunctor) = 0;
    virtual void EndCoreBoardId(IAsync& aAsync, std::string& aaCoreBoardId) = 0;
    virtual void SetPropertyDeviceInfoChanged(Functor& aDeviceInfoChanged) = 0;
    virtual void PropertyDeviceInfo(std::string& aDeviceInfo) const = 0;
    virtual void SetPropertyIpAddressListChanged(Functor& aIpAddressListChanged) = 0;
    virtual void PropertyIpAddressList(std::string& aIpAddressList) const = 0;
    virtual void SetPropertyMacAddressListChanged(Functor& aMacAddressListChanged) = 0;
    virtual void PropertyMacAddressList(std::string& aMacAddressList) const = 0;
    virtual void SetPropertyCoreBoardIdChanged(Functor& aCoreBoardIdChanged) = 0;
    virtual void PropertyCoreBoardId(std::string& aCoreBoardId) const = 0;
};

/**
 * Proxy for linn.co.uk:Volkano:2
 * @ingroup Proxies
 */
class CpProxyLinnCoUkVolkano2Cpp : public ICpProxyLinnCoUkVolkano2Cpp
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
    CpProxyLinnCoUkVolkano2Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkVolkano2Cpp();

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
     * @param[out] aaIpAddress
     */
    void SyncIpAddress(std::string& aaIpAddress);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndIpAddress().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginIpAddress(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaIpAddress
     */
    void EndIpAddress(IAsync& aAsync, std::string& aaIpAddress);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaIpAddressList
     */
    void SyncIpAddressList(std::string& aaIpAddressList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndIpAddressList().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginIpAddressList(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaIpAddressList
     */
    void EndIpAddressList(IAsync& aAsync, std::string& aaIpAddressList);

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
     * @param[out] aaMacAddressList
     */
    void SyncMacAddressList(std::string& aaMacAddressList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMacAddressList().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMacAddressList(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaMacAddressList
     */
    void EndMacAddressList(IAsync& aAsync, std::string& aaMacAddressList);

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

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaCoreBoardId
     */
    void SyncCoreBoardId(std::string& aaCoreBoardId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCoreBoardId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCoreBoardId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaCoreBoardId
     */
    void EndCoreBoardId(IAsync& aAsync, std::string& aaCoreBoardId);

    /**
     * Set a callback to be run when the DeviceInfo state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceInfoChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IpAddressList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIpAddressListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the MacAddressList state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMacAddressListChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CoreBoardId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkVolkano2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCoreBoardIdChanged(Functor& aFunctor);

    /**
     * Query the value of the DeviceInfo property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDeviceInfo
     */
    void PropertyDeviceInfo(std::string& aDeviceInfo) const;
    /**
     * Query the value of the IpAddressList property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIpAddressList
     */
    void PropertyIpAddressList(std::string& aIpAddressList) const;
    /**
     * Query the value of the MacAddressList property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMacAddressList
     */
    void PropertyMacAddressList(std::string& aMacAddressList) const;
    /**
     * Query the value of the CoreBoardId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCoreBoardId
     */
    void PropertyCoreBoardId(std::string& aCoreBoardId) const;
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
    void DeviceInfoPropertyChanged();
    void IpAddressListPropertyChanged();
    void MacAddressListPropertyChanged();
    void CoreBoardIdPropertyChanged();
private:
    Action* iActionReboot;
    Action* iActionBootMode;
    Action* iActionSetBootMode;
    Action* iActionBspType;
    Action* iActionUglyName;
    Action* iActionIpAddress;
    Action* iActionIpAddressList;
    Action* iActionMacAddress;
    Action* iActionMacAddressList;
    Action* iActionProductId;
    Action* iActionBoardId;
    Action* iActionBoardType;
    Action* iActionMaxBoards;
    Action* iActionSoftwareVersion;
    Action* iActionSoftwareUpdate;
    Action* iActionDeviceInfo;
    Action* iActionCoreBoardId;
    PropertyString* iDeviceInfo;
    PropertyString* iIpAddressList;
    PropertyString* iMacAddressList;
    PropertyString* iCoreBoardId;
    Functor iDeviceInfoChanged;
    Functor iIpAddressListChanged;
    Functor iMacAddressListChanged;
    Functor iCoreBoardIdChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKVOLKANO2CPP

