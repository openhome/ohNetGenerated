#ifndef HEADER_LINNCOUKCONFIGURATION1
#define HEADER_LINNCOUKCONFIGURATION1

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
class ICpProxyLinnCoUkConfiguration1 : public ICpProxy
{
public:
    virtual ~ICpProxyLinnCoUkConfiguration1() {}
    virtual void SyncConfigurationXml(Brh& aaConfigurationXml) = 0;
    virtual void BeginConfigurationXml(FunctorAsync& aFunctor) = 0;
    virtual void EndConfigurationXml(IAsync& aAsync, Brh& aaConfigurationXml) = 0;
    virtual void SyncParameterXml(Brh& aaParameterXml) = 0;
    virtual void BeginParameterXml(FunctorAsync& aFunctor) = 0;
    virtual void EndParameterXml(IAsync& aAsync, Brh& aaParameterXml) = 0;
    virtual void SyncSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue) = 0;
    virtual void BeginSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue, FunctorAsync& aFunctor) = 0;
    virtual void EndSetParameter(IAsync& aAsync) = 0;
    virtual void SetPropertyConfigurationXmlChanged(Functor& aConfigurationXmlChanged) = 0;
    virtual void PropertyConfigurationXml(Brhz& aConfigurationXml) const = 0;
    virtual void SetPropertyParameterXmlChanged(Functor& aParameterXmlChanged) = 0;
    virtual void PropertyParameterXml(Brhz& aParameterXml) const = 0;
};

/**
 * Proxy for linn.co.uk:Configuration:1
 * @ingroup Proxies
 */
class CpProxyLinnCoUkConfiguration1 : public ICpProxyLinnCoUkConfiguration1
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
    CpProxyLinnCoUkConfiguration1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyLinnCoUkConfiguration1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaConfigurationXml
     */
    void SyncConfigurationXml(Brh& aaConfigurationXml);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndConfigurationXml().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginConfigurationXml(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaConfigurationXml
     */
    void EndConfigurationXml(IAsync& aAsync, Brh& aaConfigurationXml);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aaParameterXml
     */
    void SyncParameterXml(Brh& aaParameterXml);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndParameterXml().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginParameterXml(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aaParameterXml
     */
    void EndParameterXml(IAsync& aAsync, Brh& aaParameterXml);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[in]  aaTarget
     * @param[in]  aaName
     * @param[in]  aaValue
     */
    void SyncSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndSetParameter().
     *
     * @param[in] aaTarget
     * @param[in] aaName
     * @param[in] aaValue
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue, FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     */
    void EndSetParameter(IAsync& aAsync);

    /**
     * Set a callback to be run when the ConfigurationXml state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkConfiguration1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyConfigurationXmlChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the ParameterXml state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyLinnCoUkConfiguration1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyParameterXmlChanged(Functor& aFunctor);

    /**
     * Query the value of the ConfigurationXml property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aConfigurationXml
     */
    void PropertyConfigurationXml(Brhz& aConfigurationXml) const;
    /**
     * Query the value of the ParameterXml property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aParameterXml
     */
    void PropertyParameterXml(Brhz& aParameterXml) const;
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
    void ConfigurationXmlPropertyChanged();
    void ParameterXmlPropertyChanged();
private:
    Action* iActionConfigurationXml;
    Action* iActionParameterXml;
    Action* iActionSetParameter;
    PropertyString* iConfigurationXml;
    PropertyString* iParameterXml;
    Functor iConfigurationXmlChanged;
    Functor iParameterXmlChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_LINNCOUKCONFIGURATION1

