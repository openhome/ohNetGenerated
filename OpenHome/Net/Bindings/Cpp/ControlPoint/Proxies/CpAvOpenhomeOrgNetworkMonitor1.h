#ifndef HEADER_AVOPENHOMEORGNETWORKMONITOR1CPP
#define HEADER_AVOPENHOMEORGNETWORKMONITOR1CPP

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
class ICpProxyAvOpenhomeOrgNetworkMonitor1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgNetworkMonitor1Cpp() {}
    virtual void SyncName(std::string& aName) = 0;
    virtual void BeginName(FunctorAsync& aFunctor) = 0;
    virtual void EndName(IAsync& aAsync, std::string& aName) = 0;
    virtual void SyncPorts(uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults) = 0;
    virtual void BeginPorts(FunctorAsync& aFunctor) = 0;
    virtual void EndPorts(IAsync& aAsync, uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults) = 0;
    virtual void SetPropertyNameChanged(Functor& aNameChanged) = 0;
    virtual void PropertyName(std::string& aName) const = 0;
    virtual void SetPropertySenderChanged(Functor& aSenderChanged) = 0;
    virtual void PropertySender(uint32_t& aSender) const = 0;
    virtual void SetPropertyReceiverChanged(Functor& aReceiverChanged) = 0;
    virtual void PropertyReceiver(uint32_t& aReceiver) const = 0;
    virtual void SetPropertyResultsChanged(Functor& aResultsChanged) = 0;
    virtual void PropertyResults(uint32_t& aResults) const = 0;
};

/**
 * Proxy for av.openhome.org:NetworkMonitor:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgNetworkMonitor1Cpp : public ICpProxyAvOpenhomeOrgNetworkMonitor1Cpp
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
    CpProxyAvOpenhomeOrgNetworkMonitor1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgNetworkMonitor1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aName
     */
    void SyncName(std::string& aName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndName().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginName(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aName
     */
    void EndName(IAsync& aAsync, std::string& aName);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aSender
     * @param[out] aReceiver
     * @param[out] aResults
     */
    void SyncPorts(uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPorts().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPorts(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aSender
     * @param[out] aReceiver
     * @param[out] aResults
     */
    void EndPorts(IAsync& aAsync, uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults);

    /**
     * Set a callback to be run when the Name state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgNetworkMonitor1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Sender state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgNetworkMonitor1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySenderChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Receiver state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgNetworkMonitor1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyReceiverChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Results state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgNetworkMonitor1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyResultsChanged(Functor& aFunctor);

    /**
     * Query the value of the Name property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aName
     */
    void PropertyName(std::string& aName) const;
    /**
     * Query the value of the Sender property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSender
     */
    void PropertySender(uint32_t& aSender) const;
    /**
     * Query the value of the Receiver property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aReceiver
     */
    void PropertyReceiver(uint32_t& aReceiver) const;
    /**
     * Query the value of the Results property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aResults
     */
    void PropertyResults(uint32_t& aResults) const;
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
    void NamePropertyChanged();
    void SenderPropertyChanged();
    void ReceiverPropertyChanged();
    void ResultsPropertyChanged();
private:
    Action* iActionName;
    Action* iActionPorts;
    PropertyString* iName;
    PropertyUint* iSender;
    PropertyUint* iReceiver;
    PropertyUint* iResults;
    Functor iNameChanged;
    Functor iSenderChanged;
    Functor iReceiverChanged;
    Functor iResultsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGNETWORKMONITOR1CPP

