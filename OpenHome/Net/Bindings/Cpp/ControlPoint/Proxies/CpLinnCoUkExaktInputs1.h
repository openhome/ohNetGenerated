#ifndef HEADER_LINNCOUKEXAKTINPUTS1CPP
#define HEADER_LINNCOUKEXAKTINPUTS1CPP

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
class ICpProxyLinnCoUkExaktInputs1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkExaktInputs1Cpp() {}
    virtual void SyncGetAssociation(uint32_t aInputIndex, std::string& aDeviceId) = 0;
    virtual void BeginGetAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor) = 0;
    virtual void EndGetAssociation(IAsync& aAsync, std::string& aDeviceId) = 0;
    virtual void SyncSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId) = 0;
    virtual void BeginSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId, FunctorAsync& aFunctor) = 0;
    virtual void EndSetAssociation(IAsync& aAsync) = 0;
    virtual void SyncClearAssociation(uint32_t aInputIndex) = 0;
    virtual void BeginClearAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor) = 0;
    virtual void EndClearAssociation(IAsync& aAsync) = 0;
    virtual void SyncInputCount(uint32_t& aInputCount) = 0;
    virtual void BeginInputCount(FunctorAsync& aFunctor) = 0;
    virtual void EndInputCount(IAsync& aAsync, uint32_t& aInputCount) = 0;
    virtual void SetPropertyAssociationsChanged(Functor& aAssociationsChanged) = 0;
    virtual void PropertyAssociations(std::string& aAssociations) const = 0;
};

/**
 * Proxy for linn.co.uk:ExaktInputs:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkExaktInputs1Cpp : public ICpProxyLinnCoUkExaktInputs1Cpp
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
    CpProxyLinnCoUkExaktInputs1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkExaktInputs1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInputIndex
     * @param[out] aDeviceId
     */
    void SyncGetAssociation(uint32_t aInputIndex, std::string& aDeviceId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetAssociation().
     *
     * @param[in] aInputIndex
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDeviceId
     */
    void EndGetAssociation(IAsync& aAsync, std::string& aDeviceId);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInputIndex
     * @param[in]  aDeviceId
     */
    void SyncSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetAssociation().
     *
     * @param[in] aInputIndex
     * @param[in] aDeviceId
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetAssociation(uint32_t aInputIndex, const std::string& aDeviceId, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetAssociation(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aInputIndex
     */
    void SyncClearAssociation(uint32_t aInputIndex);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndClearAssociation().
     *
     * @param[in] aInputIndex
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginClearAssociation(uint32_t aInputIndex, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndClearAssociation(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInputCount
     */
    void SyncInputCount(uint32_t& aInputCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndInputCount().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginInputCount(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aInputCount
     */
    void EndInputCount(IAsync& aAsync, uint32_t& aInputCount);

    /**
     * Set a callback to be run when the Associations state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkExaktInputs1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAssociationsChanged(Functor& aFunctor);

    /**
     * Query the value of the Associations property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAssociations
     */
    void PropertyAssociations(std::string& aAssociations) const;
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
    void AssociationsPropertyChanged();
private:
    Action* iActionGetAssociation;
    Action* iActionSetAssociation;
    Action* iActionClearAssociation;
    Action* iActionInputCount;
    PropertyString* iAssociations;
    Functor iAssociationsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKEXAKTINPUTS1CPP

