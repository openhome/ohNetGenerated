#ifndef HEADER_AVOPENHOMEORGSENDER2CPP
#define HEADER_AVOPENHOMEORGSENDER2CPP

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
class ICpProxyAvOpenhomeOrgSender2Cpp : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgSender2Cpp() {}
    virtual void SyncPresentationUrl(std::string& aValue) = 0;
    virtual void BeginPresentationUrl(FunctorAsync& aFunctor) = 0;
    virtual void EndPresentationUrl(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncMetadata(std::string& aValue) = 0;
    virtual void BeginMetadata(FunctorAsync& aFunctor) = 0;
    virtual void EndMetadata(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncAudio(bool& aValue) = 0;
    virtual void BeginAudio(FunctorAsync& aFunctor) = 0;
    virtual void EndAudio(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncStatus(std::string& aValue) = 0;
    virtual void BeginStatus(FunctorAsync& aFunctor) = 0;
    virtual void EndStatus(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncStatus2(std::string& aValue) = 0;
    virtual void BeginStatus2(FunctorAsync& aFunctor) = 0;
    virtual void EndStatus2(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SyncEnabled(bool& aValue) = 0;
    virtual void BeginEnabled(FunctorAsync& aFunctor) = 0;
    virtual void EndEnabled(IAsync& aAsync, bool& aValue) = 0;
    virtual void SyncAttributes(std::string& aValue) = 0;
    virtual void BeginAttributes(FunctorAsync& aFunctor) = 0;
    virtual void EndAttributes(IAsync& aAsync, std::string& aValue) = 0;
    virtual void SetPropertyPresentationUrlChanged(Functor& aPresentationUrlChanged) = 0;
    virtual void PropertyPresentationUrl(std::string& aPresentationUrl) const = 0;
    virtual void SetPropertyMetadataChanged(Functor& aMetadataChanged) = 0;
    virtual void PropertyMetadata(std::string& aMetadata) const = 0;
    virtual void SetPropertyAudioChanged(Functor& aAudioChanged) = 0;
    virtual void PropertyAudio(bool& aAudio) const = 0;
    virtual void SetPropertyStatusChanged(Functor& aStatusChanged) = 0;
    virtual void PropertyStatus(std::string& aStatus) const = 0;
    virtual void SetPropertyStatus2Changed(Functor& aStatus2Changed) = 0;
    virtual void PropertyStatus2(std::string& aStatus2) const = 0;
    virtual void SetPropertyEnabledChanged(Functor& aEnabledChanged) = 0;
    virtual void PropertyEnabled(bool& aEnabled) const = 0;
    virtual void SetPropertyAttributesChanged(Functor& aAttributesChanged) = 0;
    virtual void PropertyAttributes(std::string& aAttributes) const = 0;
};

/**
 * Proxy for av.openhome.org:Sender:2
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgSender2Cpp : public ICpProxyAvOpenhomeOrgSender2Cpp
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
    CpProxyAvOpenhomeOrgSender2Cpp(CpDeviceCpp& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgSender2Cpp();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncPresentationUrl(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndPresentationUrl().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginPresentationUrl(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndPresentationUrl(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncMetadata(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMetadata().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMetadata(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndMetadata(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncAudio(bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndAudio().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginAudio(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndAudio(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncStatus(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStatus().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStatus(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndStatus(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncStatus2(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndStatus2().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginStatus2(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndStatus2(IAsync& aAsync, std::string& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncEnabled(bool& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndEnabled().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginEnabled(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndEnabled(IAsync& aAsync, bool& aValue);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncAttributes(std::string& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndAttributes().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginAttributes(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndAttributes(IAsync& aAsync, std::string& aValue);

    /**
     * Set a callback to be run when the PresentationUrl state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyPresentationUrlChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Metadata state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetadataChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Audio state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAudioChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatusChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Status2 state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyStatus2Changed(Functor& aFunctor);
    /**
     * Set a callback to be run when the Enabled state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyEnabledChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Attributes state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgSender2Cpp instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyAttributesChanged(Functor& aFunctor);

    /**
     * Query the value of the PresentationUrl property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aPresentationUrl
     */
    void PropertyPresentationUrl(std::string& aPresentationUrl) const;
    /**
     * Query the value of the Metadata property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMetadata
     */
    void PropertyMetadata(std::string& aMetadata) const;
    /**
     * Query the value of the Audio property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAudio
     */
    void PropertyAudio(bool& aAudio) const;
    /**
     * Query the value of the Status property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus
     */
    void PropertyStatus(std::string& aStatus) const;
    /**
     * Query the value of the Status2 property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aStatus2
     */
    void PropertyStatus2(std::string& aStatus2) const;
    /**
     * Query the value of the Enabled property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aEnabled
     */
    void PropertyEnabled(bool& aEnabled) const;
    /**
     * Query the value of the Attributes property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aAttributes
     */
    void PropertyAttributes(std::string& aAttributes) const;
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
    void PresentationUrlPropertyChanged();
    void MetadataPropertyChanged();
    void AudioPropertyChanged();
    void StatusPropertyChanged();
    void Status2PropertyChanged();
    void EnabledPropertyChanged();
    void AttributesPropertyChanged();
private:
    Action* iActionPresentationUrl;
    Action* iActionMetadata;
    Action* iActionAudio;
    Action* iActionStatus;
    Action* iActionStatus2;
    Action* iActionEnabled;
    Action* iActionAttributes;
    PropertyString* iPresentationUrl;
    PropertyString* iMetadata;
    PropertyBool* iAudio;
    PropertyString* iStatus;
    PropertyString* iStatus2;
    PropertyBool* iEnabled;
    PropertyString* iAttributes;
    Functor iPresentationUrlChanged;
    Functor iMetadataChanged;
    Functor iAudioChanged;
    Functor iStatusChanged;
    Functor iStatus2Changed;
    Functor iEnabledChanged;
    Functor iAttributesChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGSENDER2CPP

