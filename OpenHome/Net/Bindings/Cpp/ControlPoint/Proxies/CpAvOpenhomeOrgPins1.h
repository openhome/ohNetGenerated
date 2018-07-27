#ifndef HEADER_AVOPENHOMEORGPINS1CPP
#define HEADER_AVOPENHOMEORGPINS1CPP

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
class ICpProxyAvOpenhomeOrgPins1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgPins1Cpp() {}
    virtual void SyncGetDeviceMax(uint32_t& aDeviceMax) = 0;
    virtual void BeginGetDeviceMax(FunctorAsync& aFunctor) = 0;
    virtual void EndGetDeviceMax(IAsync& aAsync, uint32_t& aDeviceMax) = 0;
    virtual void SyncGetAccountMax(uint32_t& aAccountMax) = 0;
    virtual void BeginGetAccountMax(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAccountMax(IAsync& aAsync, uint32_t& aAccountMax) = 0;
    virtual void SyncGetModes(std::string& aModes) = 0;
    virtual void BeginGetModes(FunctorAsync& aFunctor) = 0;
    virtual void EndGetModes(IAsync& aAsync, std::string& aModes) = 0;
    virtual void SyncGetIdArray(std::string& aIdArray) = 0;
    virtual void BeginGetIdArray(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIdArray(IAsync& aAsync, std::string& aIdArray) = 0;
    virtual void SyncGetCloudConnected(bool& aCloudConnected) = 0;
    virtual void BeginGetCloudConnected(FunctorAsync& aFunctor) = 0;
    virtual void EndGetCloudConnected(IAsync& aAsync, bool& aCloudConnected) = 0;
    virtual void SyncReadList(const std::string& aIds, std::string& aList) = 0;
    virtual void BeginReadList(const std::string& aIds, FunctorAsync& aFunctor) = 0;
    virtual void EndReadList(IAsync& aAsync, std::string& aList) = 0;
    virtual void SyncInvokeId(uint32_t aId) = 0;
    virtual void BeginInvokeId(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndInvokeId(IAsync& aAsync) = 0;
    virtual void SyncInvokeIndex(uint32_t aIndex) = 0;
    virtual void BeginInvokeIndex(uint32_t aIndex, FunctorAsync& aFunctor) = 0;
    virtual void EndInvokeIndex(IAsync& aAsync) = 0;
    virtual void SyncInvokeUri(const std::string& aMode, const std::string& aType, const std::string& aUri, bool aShuffle) = 0;
    virtual void BeginInvokeUri(const std::string& aMode, const std::string& aType, const std::string& aUri, bool aShuffle, FunctorAsync& aFunctor) = 0;
    virtual void EndInvokeUri(IAsync& aAsync) = 0;
    virtual void SyncSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle) = 0;
    virtual void BeginSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor) = 0;
    virtual void EndSetDevice(IAsync& aAsync) = 0;
    virtual void SyncSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle) = 0;
    virtual void BeginSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAccount(IAsync& aAsync) = 0;
    virtual void SyncClear(uint32_t aId) = 0;
    virtual void BeginClear(uint32_t aId, FunctorAsync& aFunctor) = 0;
    virtual void EndClear(IAsync& aAsync) = 0;
    virtual void SyncSwap(uint32_t aIndex1, uint32_t aIndex2) = 0;
    virtual void BeginSwap(uint32_t aIndex1, uint32_t aIndex2, FunctorAsync& aFunctor) = 0;
    virtual void EndSwap(IAsync& aAsync) = 0;
    virtual void SetPropertyDeviceMaxChanged(Functor& aDeviceMaxChanged) = 0;
    virtual void PropertyDeviceMax(uint32_t& aDeviceMax) const = 0;
    virtual void SetPropertyAccountMaxChanged(Functor& aAccountMaxChanged) = 0;
    virtual void PropertyAccountMax(uint32_t& aAccountMax) const = 0;
    virtual void SetPropertyModesChanged(Functor& aModesChanged) = 0;
    virtual void PropertyModes(std::string& aModes) const = 0;
    virtual void SetPropertyIdArrayChanged(Functor& aIdArrayChanged) = 0;
    virtual void PropertyIdArray(std::string& aIdArray) const = 0;
    virtual void SetPropertyCloudConnectedChanged(Functor& aCloudConnectedChanged) = 0;
    virtual void PropertyCloudConnected(bool& aCloudConnected) const = 0;
};

/**
 * Proxy for av.openhome.org:Pins:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgPins1Cpp : public ICpProxyAvOpenhomeOrgPins1Cpp
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
    CpProxyAvOpenhomeOrgPins1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgPins1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDeviceMax
     */
    void SyncGetDeviceMax(uint32_t& aDeviceMax);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetDeviceMax().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetDeviceMax(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDeviceMax
     */
    void EndGetDeviceMax(IAsync& aAsync, uint32_t& aDeviceMax);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAccountMax
     */
    void SyncGetAccountMax(uint32_t& aAccountMax);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAccountMax().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAccountMax(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAccountMax
     */
    void EndGetAccountMax(IAsync& aAsync, uint32_t& aAccountMax);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aModes
     */
    void SyncGetModes(std::string& aModes);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetModes().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetModes(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aModes
     */
    void EndGetModes(IAsync& aAsync, std::string& aModes);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aIdArray
     */
    void SyncGetIdArray(std::string& aIdArray);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetIdArray().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetIdArray(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aIdArray
     */
    void EndGetIdArray(IAsync& aAsync, std::string& aIdArray);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aCloudConnected
     */
    void SyncGetCloudConnected(bool& aCloudConnected);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetCloudConnected().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetCloudConnected(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aCloudConnected
     */
    void EndGetCloudConnected(IAsync& aAsync, bool& aCloudConnected);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIds
     * @param[out] aList
     */
    void SyncReadList(const std::string& aIds, std::string& aList);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReadList().
     *
     * @param[in] aIds
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReadList(const std::string& aIds, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aList
     */
    void EndReadList(IAsync& aAsync, std::string& aList);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     */
    void SyncInvokeId(uint32_t aId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInvokeId().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInvokeId(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndInvokeId(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIndex
     */
    void SyncInvokeIndex(uint32_t aIndex);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInvokeIndex().
     *
     * @param[in] aIndex
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInvokeIndex(uint32_t aIndex, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndInvokeIndex(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aMode
     * @param[in]  aType
     * @param[in]  aUri
     * @param[in]  aShuffle
     */
    void SyncInvokeUri(const std::string& aMode, const std::string& aType, const std::string& aUri, bool aShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInvokeUri().
     *
     * @param[in] aMode
     * @param[in] aType
     * @param[in] aUri
     * @param[in] aShuffle
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInvokeUri(const std::string& aMode, const std::string& aType, const std::string& aUri, bool aShuffle, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndInvokeUri(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIndex
     * @param[in]  aMode
     * @param[in]  aType
     * @param[in]  aUri
     * @param[in]  aTitle
     * @param[in]  aDescription
     * @param[in]  aArtworkUri
     * @param[in]  aShuffle
     */
    void SyncSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetDevice().
     *
     * @param[in] aIndex
     * @param[in] aMode
     * @param[in] aType
     * @param[in] aUri
     * @param[in] aTitle
     * @param[in] aDescription
     * @param[in] aArtworkUri
     * @param[in] aShuffle
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetDevice(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetDevice(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIndex
     * @param[in]  aMode
     * @param[in]  aType
     * @param[in]  aUri
     * @param[in]  aTitle
     * @param[in]  aDescription
     * @param[in]  aArtworkUri
     * @param[in]  aShuffle
     */
    void SyncSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAccount().
     *
     * @param[in] aIndex
     * @param[in] aMode
     * @param[in] aType
     * @param[in] aUri
     * @param[in] aTitle
     * @param[in] aDescription
     * @param[in] aArtworkUri
     * @param[in] aShuffle
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAccount(uint32_t aIndex, const std::string& aMode, const std::string& aType, const std::string& aUri, const std::string& aTitle, const std::string& aDescription, const std::string& aArtworkUri, bool aShuffle, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAccount(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     */
    void SyncClear(uint32_t aId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClear().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClear(uint32_t aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClear(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aIndex1
     * @param[in]  aIndex2
     */
    void SyncSwap(uint32_t aIndex1, uint32_t aIndex2);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSwap().
     *
     * @param[in] aIndex1
     * @param[in] aIndex2
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSwap(uint32_t aIndex1, uint32_t aIndex2, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSwap(IAsync& aAsync);

    /**
     * Set a callback to be run when the DeviceMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDeviceMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AccountMax state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAccountMaxChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Modes state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyModesChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the IdArray state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CloudConnected state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgPins1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCloudConnectedChanged(Functor& aFunctor);

    /**
     * Query the value of the DeviceMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDeviceMax
     */
    void PropertyDeviceMax(uint32_t& aDeviceMax) const;
    /**
     * Query the value of the AccountMax property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAccountMax
     */
    void PropertyAccountMax(uint32_t& aAccountMax) const;
    /**
     * Query the value of the Modes property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aModes
     */
    void PropertyModes(std::string& aModes) const;
    /**
     * Query the value of the IdArray property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIdArray
     */
    void PropertyIdArray(std::string& aIdArray) const;
    /**
     * Query the value of the CloudConnected property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCloudConnected
     */
    void PropertyCloudConnected(bool& aCloudConnected) const;
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
    void DeviceMaxPropertyChanged();
    void AccountMaxPropertyChanged();
    void ModesPropertyChanged();
    void IdArrayPropertyChanged();
    void CloudConnectedPropertyChanged();
private:
    Action* iActionGetDeviceMax;
    Action* iActionGetAccountMax;
    Action* iActionGetModes;
    Action* iActionGetIdArray;
    Action* iActionGetCloudConnected;
    Action* iActionReadList;
    Action* iActionInvokeId;
    Action* iActionInvokeIndex;
    Action* iActionInvokeUri;
    Action* iActionSetDevice;
    Action* iActionSetAccount;
    Action* iActionClear;
    Action* iActionSwap;
    PropertyUint* iDeviceMax;
    PropertyUint* iAccountMax;
    PropertyString* iModes;
    PropertyString* iIdArray;
    PropertyBool* iCloudConnected;
    Functor iDeviceMaxChanged;
    Functor iAccountMaxChanged;
    Functor iModesChanged;
    Functor iIdArrayChanged;
    Functor iCloudConnectedChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGPINS1CPP

