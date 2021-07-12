#ifndef HEADER_AVOPENHOMEORGOAUTH1CPP
#define HEADER_AVOPENHOMEORGOAUTH1CPP

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
class ICpProxyAvOpenhomeOrgOAuth1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgOAuth1Cpp() {}
    virtual void SyncSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived) = 0;
    virtual void BeginSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived, FunctorAsync& aFunctor) = 0;
    virtual void EndSetToken(IAsync& aAsync) = 0;
    virtual void SyncGetPublicKey(std::string& aPublicKey) = 0;
    virtual void BeginGetPublicKey(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey) = 0;
    virtual void SyncClearToken(const std::string& aServiceId, const std::string& aTokenId) = 0;
    virtual void BeginClearToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearToken(IAsync& aAsync) = 0;
    virtual void SyncClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId) = 0;
    virtual void BeginClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearShortLivedToken(IAsync& aAsync) = 0;
    virtual void SyncClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId) = 0;
    virtual void BeginClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearLongLivedToken(IAsync& aAsync) = 0;
    virtual void SyncClearShortLivedTokens(const std::string& aServiceId) = 0;
    virtual void BeginClearShortLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearShortLivedTokens(IAsync& aAsync) = 0;
    virtual void SyncClearLongLivedTokens(const std::string& aServiceId) = 0;
    virtual void BeginClearLongLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearLongLivedTokens(IAsync& aAsync) = 0;
    virtual void SyncClearAllTokens(const std::string& aServiceId) = 0;
    virtual void BeginClearAllTokens(const std::string& aServiceId, FunctorAsync& aFunctor) = 0;
    virtual void EndClearAllTokens(IAsync& aAsync) = 0;
    virtual void SyncGetUpdateId(uint32_t& aUpdateId) = 0;
    virtual void BeginGetUpdateId(FunctorAsync& aFunctor) = 0;
    virtual void EndGetUpdateId(IAsync& aAsync, uint32_t& aUpdateId) = 0;
    virtual void SyncGetServiceStatus(std::string& aServiceStatusJson) = 0;
    virtual void BeginGetServiceStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetServiceStatus(IAsync& aAsync, std::string& aServiceStatusJson) = 0;
    virtual void SyncGetJobUpdateId(uint32_t& aJobUpdateId) = 0;
    virtual void BeginGetJobUpdateId(FunctorAsync& aFunctor) = 0;
    virtual void EndGetJobUpdateId(IAsync& aAsync, uint32_t& aJobUpdateId) = 0;
    virtual void SyncGetJobStatus(std::string& aJobStatusJson) = 0;
    virtual void BeginGetJobStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetJobStatus(IAsync& aAsync, std::string& aJobStatusJson) = 0;
    virtual void SyncGetSupportedServices(std::string& aSupportedServiceListJson) = 0;
    virtual void BeginGetSupportedServices(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSupportedServices(IAsync& aAsync, std::string& aSupportedServiceListJson) = 0;
    virtual void SyncBeginLimitedInputFlow(const std::string& aServiceId, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode) = 0;
    virtual void BeginBeginLimitedInputFlow(const std::string& aServiceId, FunctorAsync& aFunctor) = 0;
    virtual void EndBeginLimitedInputFlow(IAsync& aAsync, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode) = 0;
    virtual void SetPropertyPublicKeyChanged(Functor& aPublicKeyChanged) = 0;
    virtual void PropertyPublicKey(std::string& aPublicKey) const = 0;
    virtual void SetPropertyUpdateIdChanged(Functor& aUpdateIdChanged) = 0;
    virtual void PropertyUpdateId(uint32_t& aUpdateId) const = 0;
    virtual void SetPropertyJobUpdateIdChanged(Functor& aJobUpdateIdChanged) = 0;
    virtual void PropertyJobUpdateId(uint32_t& aJobUpdateId) const = 0;
    virtual void SetPropertySupportedServicesChanged(Functor& aSupportedServicesChanged) = 0;
    virtual void PropertySupportedServices(std::string& aSupportedServices) const = 0;
};

/**
 * Proxy for av.openhome.org:OAuth:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgOAuth1Cpp : public ICpProxyAvOpenhomeOrgOAuth1Cpp
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
    CpProxyAvOpenhomeOrgOAuth1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgOAuth1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     * @param[in]  aTokenId
     * @param[in]  aAesKeyRsaEncrypted
     * @param[in]  aInitVectorRsaEncrypted
     * @param[in]  aTokenAesEncrypted
     * @param[in]  aIsLongLived
     */
    void SyncSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetToken().
     *
     * @param[in] aServiceId
     * @param[in] aTokenId
     * @param[in] aAesKeyRsaEncrypted
     * @param[in] aInitVectorRsaEncrypted
     * @param[in] aTokenAesEncrypted
     * @param[in] aIsLongLived
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetToken(IAsync& aAsync);

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
     * @param[in]  aServiceId
     * @param[in]  aTokenId
     */
    void SyncClearToken(const std::string& aServiceId, const std::string& aTokenId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearToken().
     *
     * @param[in] aServiceId
     * @param[in] aTokenId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearToken(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     * @param[in]  aTokenId
     */
    void SyncClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearShortLivedToken().
     *
     * @param[in] aServiceId
     * @param[in] aTokenId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearShortLivedToken(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     * @param[in]  aTokenId
     */
    void SyncClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearLongLivedToken().
     *
     * @param[in] aServiceId
     * @param[in] aTokenId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearLongLivedToken(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     */
    void SyncClearShortLivedTokens(const std::string& aServiceId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearShortLivedTokens().
     *
     * @param[in] aServiceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearShortLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearShortLivedTokens(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     */
    void SyncClearLongLivedTokens(const std::string& aServiceId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearLongLivedTokens().
     *
     * @param[in] aServiceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearLongLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearLongLivedTokens(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     */
    void SyncClearAllTokens(const std::string& aServiceId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearAllTokens().
     *
     * @param[in] aServiceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearAllTokens(const std::string& aServiceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearAllTokens(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUpdateId
     */
    void SyncGetUpdateId(uint32_t& aUpdateId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetUpdateId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetUpdateId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUpdateId
     */
    void EndGetUpdateId(IAsync& aAsync, uint32_t& aUpdateId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aServiceStatusJson
     */
    void SyncGetServiceStatus(std::string& aServiceStatusJson);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetServiceStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetServiceStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aServiceStatusJson
     */
    void EndGetServiceStatus(IAsync& aAsync, std::string& aServiceStatusJson);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aJobUpdateId
     */
    void SyncGetJobUpdateId(uint32_t& aJobUpdateId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetJobUpdateId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetJobUpdateId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aJobUpdateId
     */
    void EndGetJobUpdateId(IAsync& aAsync, uint32_t& aJobUpdateId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aJobStatusJson
     */
    void SyncGetJobStatus(std::string& aJobStatusJson);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetJobStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetJobStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aJobStatusJson
     */
    void EndGetJobStatus(IAsync& aAsync, std::string& aJobStatusJson);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSupportedServiceListJson
     */
    void SyncGetSupportedServices(std::string& aSupportedServiceListJson);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSupportedServices().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSupportedServices(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSupportedServiceListJson
     */
    void EndGetSupportedServices(IAsync& aAsync, std::string& aSupportedServiceListJson);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aServiceId
     * @param[out] aJobId
     * @param[out] aLoginUrl
     * @param[out] aUserCode
     */
    void SyncBeginLimitedInputFlow(const std::string& aServiceId, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndBeginLimitedInputFlow().
     *
     * @param[in] aServiceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginBeginLimitedInputFlow(const std::string& aServiceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aJobId
     * @param[out] aLoginUrl
     * @param[out] aUserCode
     */
    void EndBeginLimitedInputFlow(IAsync& aAsync, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode);

    /**
     * Set a callback to be run when the PublicKey state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPublicKeyChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the UpdateId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUpdateIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the JobUpdateId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyJobUpdateIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SupportedServices state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgOAuth1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySupportedServicesChanged(Functor& aFunctor);

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
     * Query the value of the UpdateId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUpdateId
     */
    void PropertyUpdateId(uint32_t& aUpdateId) const;
    /**
     * Query the value of the JobUpdateId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aJobUpdateId
     */
    void PropertyJobUpdateId(uint32_t& aJobUpdateId) const;
    /**
     * Query the value of the SupportedServices property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSupportedServices
     */
    void PropertySupportedServices(std::string& aSupportedServices) const;
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
    void PublicKeyPropertyChanged();
    void UpdateIdPropertyChanged();
    void JobUpdateIdPropertyChanged();
    void SupportedServicesPropertyChanged();
private:
    Action* iActionSetToken;
    Action* iActionGetPublicKey;
    Action* iActionClearToken;
    Action* iActionClearShortLivedToken;
    Action* iActionClearLongLivedToken;
    Action* iActionClearShortLivedTokens;
    Action* iActionClearLongLivedTokens;
    Action* iActionClearAllTokens;
    Action* iActionGetUpdateId;
    Action* iActionGetServiceStatus;
    Action* iActionGetJobUpdateId;
    Action* iActionGetJobStatus;
    Action* iActionGetSupportedServices;
    Action* iActionBeginLimitedInputFlow;
    PropertyString* iPublicKey;
    PropertyUint* iUpdateId;
    PropertyUint* iJobUpdateId;
    PropertyString* iSupportedServices;
    Functor iPublicKeyChanged;
    Functor iUpdateIdChanged;
    Functor iJobUpdateIdChanged;
    Functor iSupportedServicesChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGOAUTH1CPP

