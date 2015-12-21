#ifndef HEADER_UPNPORGSWITCHPOWER1CPP
#define HEADER_UPNPORGSWITCHPOWER1CPP

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
class ICpProxyUpnpOrgSwitchPower1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyUpnpOrgSwitchPower1Cpp() {}
    virtual void SyncSetTarget(bool anewTargetValue) = 0;
    virtual void BeginSetTarget(bool anewTargetValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetTarget(IAsync& aAsync) = 0;
    virtual void SyncGetTarget(bool& aRetTargetValue) = 0;
    virtual void BeginGetTarget(FunctorAsync& aFunctor) = 0;
    virtual void EndGetTarget(IAsync& aAsync, bool& aRetTargetValue) = 0;
    virtual void SyncGetStatus(bool& aResultStatus) = 0;
    virtual void BeginGetStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndGetStatus(IAsync& aAsync, bool& aResultStatus) = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(bool& aStatus) const = 0;
};

/**
 * Proxy for upnp.org:SwitchPower:1
 * @ingroup Proxies
 */
class CpProxyUpnpOrgSwitchPower1Cpp : public ICpProxyUpnpOrgSwitchPower1Cpp
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
    CpProxyUpnpOrgSwitchPower1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyUpnpOrgSwitchPower1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  anewTargetValue
     */
    void SyncSetTarget(bool anewTargetValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetTarget().
     *
     * @param[in] anewTargetValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetTarget(bool anewTargetValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetTarget(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aRetTargetValue
     */
    void SyncGetTarget(bool& aRetTargetValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetTarget().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetTarget(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aRetTargetValue
     */
    void EndGetTarget(IAsync& aAsync, bool& aRetTargetValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aResultStatus
     */
    void SyncGetStatus(bool& aResultStatus);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aResultStatus
     */
    void EndGetStatus(IAsync& aAsync, bool& aResultStatus);

    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyUpnpOrgSwitchPower1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatusChanged(Functor& aFunctor);

    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(bool& aStatus) const;
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
    void StatusPropertyChanged();
private:
    Action* iActionSetTarget;
    Action* iActionGetTarget;
    Action* iActionGetStatus;
    PropertyBool* iStatus;
    Functor iStatusChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_UPNPORGSWITCHPOWER1CPP

