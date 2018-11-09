#ifndef HEADER_LINNCOUKZONES1
#define HEADER_LINNCOUKZONES1

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
class ICpProxyLinnCoUkZones1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkZones1() {}
    virtual void SyncGetInputs(Brh& aInputs) = 0;
    virtual void BeginGetInputs(FunctorAsync& aFunctor) = 0;
    virtual void EndGetInputs(IAsync& aAsync, Brh& aInputs) = 0;
    virtual void SyncGetOutputs(Brh& aOutputs) = 0;
    virtual void BeginGetOutputs(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOutputs(IAsync& aAsync, Brh& aOutputs) = 0;
    virtual void SyncGetMappings(Brh& aMappings) = 0;
    virtual void BeginGetMappings(FunctorAsync& aFunctor) = 0;
    virtual void EndGetMappings(IAsync& aAsync, Brh& aMappings) = 0;
    virtual void SyncSetMappings(const Brx& aMappings) = 0;
    virtual void BeginSetMappings(const Brx& aMappings, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMappings(IAsync& aAsync) = 0;
    virtual void SetPropertyInputsChanged(Functor& aInputsChanged) = 0;
    virtual void PropertyInputs(Brhz& aInputs) const = 0;
    virtual void SetPropertyOutputsChanged(Functor& aOutputsChanged) = 0;
    virtual void PropertyOutputs(Brhz& aOutputs) const = 0;
    virtual void SetPropertyMappingsChanged(Functor& aMappingsChanged) = 0;
    virtual void PropertyMappings(Brhz& aMappings) const = 0;
};

/**
 * Proxy for linn.co.uk:Zones:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkZones1 : public ICpProxyLinnCoUkZones1
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
    CpProxyLinnCoUkZones1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkZones1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInputs
     */
    void SyncGetInputs(Brh& aInputs);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetInputs().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetInputs(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aInputs
     */
    void EndGetInputs(IAsync& aAsync, Brh& aInputs);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aOutputs
     */
    void SyncGetOutputs(Brh& aOutputs);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetOutputs().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetOutputs(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aOutputs
     */
    void EndGetOutputs(IAsync& aAsync, Brh& aOutputs);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMappings
     */
    void SyncGetMappings(Brh& aMappings);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndGetMappings().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginGetMappings(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aMappings
     */
    void EndGetMappings(IAsync& aAsync, Brh& aMappings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aMappings
     */
    void SyncSetMappings(const Brx& aMappings);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetMappings().
     *
     * @param[in] aMappings
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetMappings(const Brx& aMappings, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMappings(IAsync& aAsync);

    /**
     * Set a callback to be run when the Inputs state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyInputsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Outputs state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyOutputsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Mappings state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMappingsChanged(Functor& aFunctor);

    /**
     * Query the value of the Inputs property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aInputs
     */
    void PropertyInputs(Brhz& aInputs) const;
    /**
     * Query the value of the Outputs property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aOutputs
     */
    void PropertyOutputs(Brhz& aOutputs) const;
    /**
     * Query the value of the Mappings property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMappings
     */
    void PropertyMappings(Brhz& aMappings) const;
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
    void InputsPropertyChanged();
    void OutputsPropertyChanged();
    void MappingsPropertyChanged();
private:
    Action* iActionGetInputs;
    Action* iActionGetOutputs;
    Action* iActionGetMappings;
    Action* iActionSetMappings;
    PropertyString* iInputs;
    PropertyString* iOutputs;
    PropertyString* iMappings;
    Functor iInputsChanged;
    Functor iOutputsChanged;
    Functor iMappingsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKZONES1

