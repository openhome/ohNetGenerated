#ifndef HEADER_LINNCOUKCLOUD2
#define HEADER_LINNCOUKCLOUD2

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
class CpProxy;
class ICpProxyLinnCoUkCloud2 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkCloud2() {}
    virtual void SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse) = 0;
    virtual void BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor) = 0;
    virtual void EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse) = 0;
    virtual void SyncSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated) = 0;
    virtual void BeginSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAssociated(IAsync& aAsync) = 0;
    virtual void SyncGetConnected(TBool& aConnected) = 0;
    virtual void BeginGetConnected(FunctorAsync& aFunctor) = 0;
    virtual void EndGetConnected(IAsync& aAsync, TBool& aConnected) = 0;
    virtual void SyncGetAccountId(Brh& aAccountId) = 0;
    virtual void BeginGetAccountId(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAccountId(IAsync& aAsync, Brh& aAccountId) = 0;
    virtual void SyncGetPublicKey(Brh& aPublicKey) = 0;
    virtual void BeginGetPublicKey(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey) = 0;
    virtual void SetPropertyAssociationStatusChanged(Functor& aAssociationStatusChanged) = 0;
    virtual void PropertyAssociationStatus(Brhz& aAssociationStatus) const = 0;
    virtual void SetPropertyConnectedChanged(Functor& aConnectedChanged) = 0;
    virtual void PropertyConnected(TBool& aConnected) const = 0;
    virtual void SetPropertyAccountIdChanged(Functor& aAccountIdChanged) = 0;
    virtual void PropertyAccountId(Brhz& aAccountId) const = 0;
    virtual void SetPropertyPublicKeyChanged(Functor& aPublicKeyChanged) = 0;
    virtual void PropertyPublicKey(Brhz& aPublicKey) const = 0;
};

/**
 * Proxy for linn.co.uk:Cloud:2
 * @ingroup Proxies
 */
class CpProxyLinnCoUkCloud2 : public ICpProxyLinnCoUkCloud2
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
    CpProxyLinnCoUkCloud2(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkCloud2();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aChallenge
     * @param[out] aResponse
     */
    void SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetChallengeResponse().
     *
     * @param[in] aChallenge
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResponse
     */
    void EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aAesKeyRsaEncrypted
     * @param[in]  aInitVectorRsaEncrypted
     * @param[in]  aTokenAesEncrypted
     * @param[in]  aAssociated
     */
    void SyncSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAssociated().
     *
     * @param[in] aAesKeyRsaEncrypted
     * @param[in] aInitVectorRsaEncrypted
     * @param[in] aTokenAesEncrypted
     * @param[in] aAssociated
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAssociated(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aConnected
     */
    void SyncGetConnected(TBool& aConnected);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetConnected().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetConnected(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aConnected
     */
    void EndGetConnected(IAsync& aAsync, TBool& aConnected);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aAccountId
     */
    void SyncGetAccountId(Brh& aAccountId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAccountId().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAccountId(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aAccountId
     */
    void EndGetAccountId(IAsync& aAsync, Brh& aAccountId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aPublicKey
     */
    void SyncGetPublicKey(Brh& aPublicKey);
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
    void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey);

    /**
     * Set a callback to be run when the AssociationStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAssociationStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Connected state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConnectedChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the AccountId state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAccountIdChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PublicKey state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud2 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPublicKeyChanged(Functor& aFunctor);

    /**
     * Query the value of the AssociationStatus property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAssociationStatus
     */
    void PropertyAssociationStatus(Brhz& aAssociationStatus) const;
    /**
     * Query the value of the Connected property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConnected
     */
    void PropertyConnected(TBool& aConnected) const;
    /**
     * Query the value of the AccountId property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAccountId
     */
    void PropertyAccountId(Brhz& aAccountId) const;
    /**
     * Query the value of the PublicKey property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPublicKey
     */
    void PropertyPublicKey(Brhz& aPublicKey) const;
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
    void AssociationStatusPropertyChanged();
    void ConnectedPropertyChanged();
    void AccountIdPropertyChanged();
    void PublicKeyPropertyChanged();
private:
    Action* iActionGetChallengeResponse;
    Action* iActionSetAssociated;
    Action* iActionGetConnected;
    Action* iActionGetAccountId;
    Action* iActionGetPublicKey;
    PropertyString* iAssociationStatus;
    PropertyBool* iConnected;
    PropertyString* iAccountId;
    PropertyString* iPublicKey;
    Functor iAssociationStatusChanged;
    Functor iConnectedChanged;
    Functor iAccountIdChanged;
    Functor iPublicKeyChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKCLOUD2

