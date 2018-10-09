#ifndef HEADER_LINNCOUKZONERECEIVER1
#define HEADER_LINNCOUKZONERECEIVER1

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
class ICpProxyLinnCoUkZoneReceiver1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkZoneReceiver1() {}
    virtual void SyncGetSender(Brh& aSender) = 0;
    virtual void BeginGetSender(FunctorAsync& aFunctor) = 0;
    virtual void EndGetSender(IAsync& aAsync, Brh& aSender) = 0;
    virtual void SetPropertySenderChanged(Functor& aSenderChanged) = 0;
    virtual void PropertySender(Brhz& aSender) const = 0;
};

/**
 * Proxy for linn.co.uk:ZoneReceiver:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkZoneReceiver1 : public ICpProxyLinnCoUkZoneReceiver1
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
    CpProxyLinnCoUkZoneReceiver1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkZoneReceiver1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSender
     */
    void SyncGetSender(Brh& aSender);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetSender().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetSender(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSender
     */
    void EndGetSender(IAsync& aAsync, Brh& aSender);

    /**
     * Set a callback to be run when the Sender state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZoneReceiver1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySenderChanged(Functor& aFunctor);

    /**
     * Query the value of the Sender property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSender
     */
    void PropertySender(Brhz& aSender) const;
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
    void SenderPropertyChanged();
private:
    Action* iActionGetSender;
    PropertyString* iSender;
    Functor iSenderChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKZONERECEIVER1

