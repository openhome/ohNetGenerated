#ifndef HEADER_AVOPENHOMEORGCREDENTIALS1CPP
#define HEADER_AVOPENHOMEORGCREDENTIALS1CPP

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
class ICpProxyAvOpenhomeOrgCredentials1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgCredentials1Cpp() {}
    virtual void SyncSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword) = 0;
    virtual void BeginSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword, FunctorAsync& aFunctor) = 0;
    virtual void EndSet(IAsync& aAsync) = 0;
    virtual void SyncClear(const std::string& aId) = 0;
    virtual void BeginClear(const std::string& aId, FunctorAsync& aFunctor) = 0;
    virtual void EndClear(IAsync& aAsync) = 0;
    virtual void SyncSetEnabled(const std::string& aId, bool aEnabled) = 0;
    virtual void BeginSetEnabled(const std::string& aId, bool aEnabled, FunctorAsync& aFunctor) = 0;
    virtual void EndSetEnabled(IAsync& aAsync) = 0;
    virtual void SyncGet(const std::string& aId, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData) = 0;
    virtual void BeginGet(const std::string& aId, FunctorAsync& aFunctor) = 0;
    virtual void EndGet(IAsync& aAsync, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData) = 0;
    virtual void SyncLogin(const std::string& aId, std::string& aToken) = 0;
    virtual void BeginLogin(const std::string& aId, FunctorAsync& aFunctor) = 0;
    virtual void EndLogin(IAsync& aAsync, std::string& aToken) = 0;
    virtual void SyncReLogin(const std::string& aId, const std::string& aCurrentToken, std::string& aNewToken) = 0;
    virtual void BeginReLogin(const std::string& aId, const std::string& aCurrentToken, FunctorAsync& aFunctor) = 0;
    virtual void EndReLogin(IAsync& aAsync, std::string& aNewToken) = 0;
    virtual void SyncGetIds(std::string& aIds) = 0;
    virtual void BeginGetIds(FunctorAsync& aFunctor) = 0;
    virtual void EndGetIds(IAsync& aAsync, std::string& aIds) = 0;
    virtual void SyncGetPublicKey(std::string& aPublicKey) = 0;
    virtual void BeginGetPublicKey(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey) = 0;
    virtual void SyncGetSequenceNumber(uint32_t& aSequenceNumber) = 0;
    virtual void BeginGetSequenceNumber(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSequenceNumber(IAsync& aAsync, uint32_t& aSequenceNumber) = 0;
    virtual void SetPropertyIdsChanged(Functor& aIdsChanged) = 0;
    virtual void PropertyIds(std::string& aIds) const = 0;
    virtual void SetPropertyPublicKeyChanged(Functor& aPublicKeyChanged) = 0;
    virtual void PropertyPublicKey(std::string& aPublicKey) const = 0;
    virtual void SetPropertySequenceNumberChanged(Functor& aSequenceNumberChanged) = 0;
    virtual void PropertySequenceNumber(uint32_t& aSequenceNumber) const = 0;
};

/**
 * Proxy for av.openhome.org:Credentials:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgCredentials1Cpp : public ICpProxyAvOpenhomeOrgCredentials1Cpp
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
    CpProxyAvOpenhomeOrgCredentials1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgCredentials1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aUserName
     * @param[in]  aPassword
     */
    void SyncSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSet().
     *
     * @param[in] aId
     * @param[in] aUserName
     * @param[in] aPassword
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSet(const std::string& aId, const std::string& aUserName, const std::string& aPassword, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSet(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     */
    void SyncClear(const std::string& aId);
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
    void BeginClear(const std::string& aId, FunctorAsync& aFunctor);
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
     * @param[in]  aId
     * @param[in]  aEnabled
     */
    void SyncSetEnabled(const std::string& aId, bool aEnabled);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetEnabled().
     *
     * @param[in] aId
     * @param[in] aEnabled
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetEnabled(const std::string& aId, bool aEnabled, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetEnabled(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[out] aUserName
     * @param[out] aPassword
     * @param[out] aEnabled
     * @param[out] aStatus
     * @param[out] aData
     */
    void SyncGet(const std::string& aId, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGet().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGet(const std::string& aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUserName
     * @param[out] aPassword
     * @param[out] aEnabled
     * @param[out] aStatus
     * @param[out] aData
     */
    void EndGet(IAsync& aAsync, std::string& aUserName, std::string& aPassword, bool& aEnabled, std::string& aStatus, std::string& aData);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[out] aToken
     */
    void SyncLogin(const std::string& aId, std::string& aToken);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndLogin().
     *
     * @param[in] aId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginLogin(const std::string& aId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aToken
     */
    void EndLogin(IAsync& aAsync, std::string& aToken);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aId
     * @param[in]  aCurrentToken
     * @param[out] aNewToken
     */
    void SyncReLogin(const std::string& aId, const std::string& aCurrentToken, std::string& aNewToken);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndReLogin().
     *
     * @param[in] aId
     * @param[in] aCurrentToken
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginReLogin(const std::string& aId, const std::string& aCurrentToken, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aNewToken
     */
    void EndReLogin(IAsync& aAsync, std::string& aNewToken);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aIds
     */
    void SyncGetIds(std::string& aIds);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetIds().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetIds(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aIds
     */
    void EndGetIds(IAsync& aAsync, std::string& aIds);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPublicKey
     */
    void SyncGetPublicKey(std::string& aPublicKey);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPublicKey().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPublicKey(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aPublicKey
     */
    void EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSequenceNumber
     */
    void SyncGetSequenceNumber(uint32_t& aSequenceNumber);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSequenceNumber().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSequenceNumber(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSequenceNumber
     */
    void EndGetSequenceNumber(IAsync& aAsync, uint32_t& aSequenceNumber);

    /**
     * Set a callback to be run when the Ids state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyIdsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PublicKey state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPublicKeyChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SequenceNumber state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgCredentials1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySequenceNumberChanged(Functor& aFunctor);

    /**
     * Query the value of the Ids property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aIds
     */
    void PropertyIds(std::string& aIds) const;
    /**
     * Query the value of the PublicKey property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPublicKey
     */
    void PropertyPublicKey(std::string& aPublicKey) const;
    /**
     * Query the value of the SequenceNumber property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSequenceNumber
     */
    void PropertySequenceNumber(uint32_t& aSequenceNumber) const;
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
    void IdsPropertyChanged();
    void PublicKeyPropertyChanged();
    void SequenceNumberPropertyChanged();
private:
    Action* iActionSet;
    Action* iActionClear;
    Action* iActionSetEnabled;
    Action* iActionGet;
    Action* iActionLogin;
    Action* iActionReLogin;
    Action* iActionGetIds;
    Action* iActionGetPublicKey;
    Action* iActionGetSequenceNumber;
    PropertyString* iIds;
    PropertyString* iPublicKey;
    PropertyUint* iSequenceNumber;
    Functor iIdsChanged;
    Functor iPublicKeyChanged;
    Functor iSequenceNumberChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGCREDENTIALS1CPP

