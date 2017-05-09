#ifndef HEADER_LINNCOUKCLOUD1
#define HEADER_LINNCOUKCLOUD1

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
class ICpProxyLinnCoUkCloud1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkCloud1() {}
    virtual void SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse) = 0;
    virtual void BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor) = 0;
    virtual void EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse) = 0;
    virtual void SyncSetAssociationStatus(const Brx& aStatus) = 0;
    virtual void BeginSetAssociationStatus(const Brx& aStatus, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAssociationStatus(IAsync& aAsync) = 0;
    virtual void SyncGetAssociationStatus(Brh& aStatus) = 0;
    virtual void BeginGetAssociationStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetAssociationStatus(IAsync& aAsync, Brh& aStatus) = 0;
    virtual void SyncSetControlEnabled(TBool aEnabled) = 0;
    virtual void BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor) = 0;
    virtual void EndSetControlEnabled(IAsync& aAsync) = 0;
    virtual void SyncGetControlEnabled(TBool& aEnabled) = 0;
    virtual void BeginGetControlEnabled(FunctorAsync& aFunctor) = 0;
    virtual void EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled) = 0;
    virtual void SetPropertyAssociationStatusChanged(Functor& aAssociationStatusChanged) = 0;
    virtual void PropertyAssociationStatus(Brhz& aAssociationStatus) const = 0;
    virtual void SetPropertyControlEnabledChanged(Functor& aControlEnabledChanged) = 0;
    virtual void PropertyControlEnabled(TBool& aControlEnabled) const = 0;
};

/**
 * Proxy for linn.co.uk:Cloud:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkCloud1 : public ICpProxyLinnCoUkCloud1
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
    CpProxyLinnCoUkCloud1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkCloud1();

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
     * @param[in]  aStatus
     */
    void SyncSetAssociationStatus(const Brx& aStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAssociationStatus().
     *
     * @param[in] aStatus
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAssociationStatus(const Brx& aStatus, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAssociationStatus(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aStatus
     */
    void SyncGetAssociationStatus(Brh& aStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAssociationStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAssociationStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aStatus
     */
    void EndGetAssociationStatus(IAsync& aAsync, Brh& aStatus);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aEnabled
     */
    void SyncSetControlEnabled(TBool aEnabled);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetControlEnabled().
     *
     * @param[in] aEnabled
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetControlEnabled(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aEnabled
     */
    void SyncGetControlEnabled(TBool& aEnabled);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetControlEnabled().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetControlEnabled(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aEnabled
     */
    void EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled);

    /**
     * Set a callback to be run when the AssociationStatus state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAssociationStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ControlEnabled state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkCloud1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyControlEnabledChanged(Functor& aFunctor);

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
     * Query the value of the ControlEnabled property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aControlEnabled
     */
    void PropertyControlEnabled(TBool& aControlEnabled) const;
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
    void ControlEnabledPropertyChanged();
private:
    Action* iActionGetChallengeResponse;
    Action* iActionSetAssociationStatus;
    Action* iActionGetAssociationStatus;
    Action* iActionSetControlEnabled;
    Action* iActionGetControlEnabled;
    PropertyString* iAssociationStatus;
    PropertyBool* iControlEnabled;
    Functor iAssociationStatusChanged;
    Functor iControlEnabledChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKCLOUD1

