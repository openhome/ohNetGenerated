#ifndef HEADER_LINNCOUKPRIVACY1CPP
#define HEADER_LINNCOUKPRIVACY1CPP

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
class ICpProxyLinnCoUkPrivacy1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkPrivacy1Cpp() {}
    virtual void SyncGetPolicyVersion(uint32_t& aVersion) = 0;
    virtual void BeginGetPolicyVersion(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPolicyVersion(IAsync& aAsync, uint32_t& aVersion) = 0;
    virtual void SyncGetPolicyAgreed(uint32_t& aVersion) = 0;
    virtual void BeginGetPolicyAgreed(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPolicyAgreed(IAsync& aAsync, uint32_t& aVersion) = 0;
    virtual void SyncGetPolicyDetails(std::string& aDetails) = 0;
    virtual void BeginGetPolicyDetails(FunctorAsync& aFunctor) = 0;
    virtual void EndGetPolicyDetails(IAsync& aAsync, std::string& aDetails) = 0;
    virtual void SyncSetPolicyDetails(const std::string& aDetails) = 0;
    virtual void BeginSetPolicyDetails(const std::string& aDetails, FunctorAsync& aFunctor) = 0;
    virtual void EndSetPolicyDetails(IAsync& aAsync) = 0;
    virtual void SetPropertyPolicyVersionChanged(Functor& aPolicyVersionChanged) = 0;
    virtual void PropertyPolicyVersion(uint32_t& aPolicyVersion) const = 0;
    virtual void SetPropertyPolicyAgreedChanged(Functor& aPolicyAgreedChanged) = 0;
    virtual void PropertyPolicyAgreed(uint32_t& aPolicyAgreed) const = 0;
    virtual void SetPropertyPolicyDetailsChanged(Functor& aPolicyDetailsChanged) = 0;
    virtual void PropertyPolicyDetails(std::string& aPolicyDetails) const = 0;
};

/**
 * Proxy for linn.co.uk:Privacy:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkPrivacy1Cpp : public ICpProxyLinnCoUkPrivacy1Cpp
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
    CpProxyLinnCoUkPrivacy1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkPrivacy1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     */
    void SyncGetPolicyVersion(uint32_t& aVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPolicyVersion().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPolicyVersion(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVersion
     */
    void EndGetPolicyVersion(IAsync& aAsync, uint32_t& aVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aVersion
     */
    void SyncGetPolicyAgreed(uint32_t& aVersion);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPolicyAgreed().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPolicyAgreed(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aVersion
     */
    void EndGetPolicyAgreed(IAsync& aAsync, uint32_t& aVersion);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDetails
     */
    void SyncGetPolicyDetails(std::string& aDetails);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetPolicyDetails().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetPolicyDetails(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDetails
     */
    void EndGetPolicyDetails(IAsync& aAsync, std::string& aDetails);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aDetails
     */
    void SyncSetPolicyDetails(const std::string& aDetails);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetPolicyDetails().
     *
     * @param[in] aDetails
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetPolicyDetails(const std::string& aDetails, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetPolicyDetails(IAsync& aAsync);

    /**
     * Set a callback to be run when the PolicyVersion state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPolicyVersionChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PolicyAgreed state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPolicyAgreedChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the PolicyDetails state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkPrivacy1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPolicyDetailsChanged(Functor& aFunctor);

    /**
     * Query the value of the PolicyVersion property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPolicyVersion
     */
    void PropertyPolicyVersion(uint32_t& aPolicyVersion) const;
    /**
     * Query the value of the PolicyAgreed property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPolicyAgreed
     */
    void PropertyPolicyAgreed(uint32_t& aPolicyAgreed) const;
    /**
     * Query the value of the PolicyDetails property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPolicyDetails
     */
    void PropertyPolicyDetails(std::string& aPolicyDetails) const;
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
    void PolicyVersionPropertyChanged();
    void PolicyAgreedPropertyChanged();
    void PolicyDetailsPropertyChanged();
private:
    Action* iActionGetPolicyVersion;
    Action* iActionGetPolicyAgreed;
    Action* iActionGetPolicyDetails;
    Action* iActionSetPolicyDetails;
    PropertyUint* iPolicyVersion;
    PropertyUint* iPolicyAgreed;
    PropertyString* iPolicyDetails;
    Functor iPolicyVersionChanged;
    Functor iPolicyAgreedChanged;
    Functor iPolicyDetailsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKPRIVACY1CPP

