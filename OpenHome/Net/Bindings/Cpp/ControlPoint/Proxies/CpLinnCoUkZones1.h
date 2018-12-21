#ifndef HEADER_LINNCOUKZONES1CPP
#define HEADER_LINNCOUKZONES1CPP

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
class ICpProxyLinnCoUkZones1Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkZones1Cpp() {}
    virtual void SyncGetInputs(std::string& aInputs) = 0;
    virtual void BeginGetInputs(FunctorAsync& aFunctor) = 0;
    virtual void EndGetInputs(IAsync& aAsync, std::string& aInputs) = 0;
    virtual void SyncGetOutputs(std::string& aOutputs) = 0;
    virtual void BeginGetOutputs(FunctorAsync& aFunctor) = 0;
    virtual void EndGetOutputs(IAsync& aAsync, std::string& aOutputs) = 0;
    virtual void SyncGetMappings(std::string& aMappings) = 0;
    virtual void BeginGetMappings(FunctorAsync& aFunctor) = 0;
    virtual void EndGetMappings(IAsync& aAsync, std::string& aMappings) = 0;
    virtual void SyncSetMappings(const std::string& aMappings) = 0;
    virtual void BeginSetMappings(const std::string& aMappings, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMappings(IAsync& aAsync) = 0;
    virtual void SyncSetMapping(const std::string& aOutput, const std::string& aInput) = 0;
    virtual void BeginSetMapping(const std::string& aOutput, const std::string& aInput, FunctorAsync& aFunctor) = 0;
    virtual void EndSetMapping(IAsync& aAsync) = 0;
    virtual void SetPropertyInputsChanged(Functor& aInputsChanged) = 0;
    virtual void PropertyInputs(std::string& aInputs) const = 0;
    virtual void SetPropertyOutputsChanged(Functor& aOutputsChanged) = 0;
    virtual void PropertyOutputs(std::string& aOutputs) const = 0;
    virtual void SetPropertyMappingsChanged(Functor& aMappingsChanged) = 0;
    virtual void PropertyMappings(std::string& aMappings) const = 0;
};

/**
 * Proxy for linn.co.uk:Zones:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkZones1Cpp : public ICpProxyLinnCoUkZones1Cpp
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
    CpProxyLinnCoUkZones1Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkZones1Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aInputs
     */
    void SyncGetInputs(std::string& aInputs);
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
    void EndGetInputs(IAsync& aAsync, std::string& aInputs);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aOutputs
     */
    void SyncGetOutputs(std::string& aOutputs);
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
    void EndGetOutputs(IAsync& aAsync, std::string& aOutputs);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aMappings
     */
    void SyncGetMappings(std::string& aMappings);
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
    void EndGetMappings(IAsync& aAsync, std::string& aMappings);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aMappings
     */
    void SyncSetMappings(const std::string& aMappings);
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
    void BeginSetMappings(const std::string& aMappings, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMappings(IAsync& aAsync);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aOutput
     * @param[in]  aInput
     */
    void SyncSetMapping(const std::string& aOutput, const std::string& aInput);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetMapping().
     *
     * @param[in] aOutput
     * @param[in] aInput
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetMapping(const std::string& aOutput, const std::string& aInput, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetMapping(IAsync& aAsync);

    /**
     * Set a callback to be run when the Inputs state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyInputsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Outputs state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyOutputsChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Mappings state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkZones1Cpp instance will not overlap.
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
    void PropertyInputs(std::string& aInputs) const;
    /**
     * Query the value of the Outputs property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aOutputs
     */
    void PropertyOutputs(std::string& aOutputs) const;
    /**
     * Query the value of the Mappings property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMappings
     */
    void PropertyMappings(std::string& aMappings) const;
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
    Action* iActionSetMapping;
    PropertyString* iInputs;
    PropertyString* iOutputs;
    PropertyString* iMappings;
    Functor iInputsChanged;
    Functor iOutputsChanged;
    Functor iMappingsChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKZONES1CPP

