#ifndef HEADER_AVOPENHOMEORGCONFIGAPP1CPP
#define HEADER_AVOPENHOMEORGCONFIGAPP1CPP

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
class ICpProxyAvOpenhomeOrgConfigApp1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgConfigApp1Cpp() {}
    virtual void SyncGetKeys(std::string& aKeys) = 0;
    virtual void BeginGetKeys(FunctorAsync& aFunctor) = 0;
    virtual void EndGetKeys(IAsync& aAsync, std::string& aKeys) = 0;
    virtual void SyncSetValue(const std::string& aKey, const std::string& aValue) = 0;
    virtual void BeginSetValue(const std::string& aKey, const std::string& aValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetValue(IAsync& aAsync) = 0;
    virtual void SyncGetValue(const std::string& aKey, std::string& aValue) = 0;
    virtual void BeginGetValue(const std::string& aKey, FunctorAsync& aFunctor) = 0;
    virtual void EndGetValue(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncResetAll() = 0;
    virtual void BeginResetAll(FunctorAsync& aFunctor) = 0;
    virtual void EndResetAll(IAsync& aAsync) = 0;
    virtual void SetPropertyKeysChanged(Functor& aKeysChanged) = 0;
    virtual void PropertyKeys(std::string& aKeys) const = 0;
};

/**
 * Proxy for av.openhome.org:ConfigApp:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgConfigApp1Cpp : public ICpProxyAvOpenhomeOrgConfigApp1Cpp
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
    CpProxyAvOpenhomeOrgConfigApp1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgConfigApp1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aKeys
     */
    void SyncGetKeys(std::string& aKeys);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetKeys().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetKeys(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aKeys
     */
    void EndGetKeys(IAsync& aAsync, std::string& aKeys);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aKey
     * @param[in]  aValue
     */
    void SyncSetValue(const std::string& aKey, const std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetValue().
     *
     * @param[in] aKey
     * @param[in] aValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetValue(const std::string& aKey, const std::string& aValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetValue(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aKey
     * @param[out] aValue
     */
    void SyncGetValue(const std::string& aKey, std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetValue().
     *
     * @param[in] aKey
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetValue(const std::string& aKey, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndGetValue(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     */
    void SyncResetAll();
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndResetAll().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginResetAll(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndResetAll(IAsync& aAsync);

    /**
     * Set a callback to be run when the Keys state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgConfigApp1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyKeysChanged(Functor& aFunctor);

    /**
     * Query the value of the Keys property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aKeys
     */
    void PropertyKeys(std::string& aKeys) const;
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
    void KeysPropertyChanged();
private:
    Action* iActionGetKeys;
    Action* iActionSetValue;
    Action* iActionGetValue;
    Action* iActionResetAll;
    PropertyString* iKeys;
    Functor iKeysChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGCONFIGAPP1CPP

