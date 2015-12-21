#ifndef HEADER_AVOPENHOMEORGINFO1
#define HEADER_AVOPENHOMEORGINFO1

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
class ICpProxyAvOpenhomeOrgInfo1 : public ICpProxy
{
public:
    virtual ~ICpProxyAvOpenhomeOrgInfo1() {}
    virtual void SyncCounters(TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount) = 0;
    virtual void BeginCounters(FunctorAsync& aFunctor) = 0;
    virtual void EndCounters(IAsync& aAsync, TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount) = 0;
    virtual void SyncTrack(Brh& aUri, Brh& aMetadata) = 0;
    virtual void BeginTrack(FunctorAsync& aFunctor) = 0;
    virtual void EndTrack(IAsync& aAsync, Brh& aUri, Brh& aMetadata) = 0;
    virtual void SyncDetails(TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName) = 0;
    virtual void BeginDetails(FunctorAsync& aFunctor) = 0;
    virtual void EndDetails(IAsync& aAsync, TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName) = 0;
    virtual void SyncMetatext(Brh& aValue) = 0;
    virtual void BeginMetatext(FunctorAsync& aFunctor) = 0;
    virtual void EndMetatext(IAsync& aAsync, Brh& aValue) = 0;
    virtual void SetPropertyTrackCountChanged(Functor& aTrackCountChanged) = 0;
    virtual void PropertyTrackCount(TUint& aTrackCount) const = 0;
    virtual void SetPropertyDetailsCountChanged(Functor& aDetailsCountChanged) = 0;
    virtual void PropertyDetailsCount(TUint& aDetailsCount) const = 0;
    virtual void SetPropertyMetatextCountChanged(Functor& aMetatextCountChanged) = 0;
    virtual void PropertyMetatextCount(TUint& aMetatextCount) const = 0;
    virtual void SetPropertyUriChanged(Functor& aUriChanged) = 0;
    virtual void PropertyUri(Brhz& aUri) const = 0;
    virtual void SetPropertyMetadataChanged(Functor& aMetadataChanged) = 0;
    virtual void PropertyMetadata(Brhz& aMetadata) const = 0;
    virtual void SetPropertyDurationChanged(Functor& aDurationChanged) = 0;
    virtual void PropertyDuration(TUint& aDuration) const = 0;
    virtual void SetPropertyBitRateChanged(Functor& aBitRateChanged) = 0;
    virtual void PropertyBitRate(TUint& aBitRate) const = 0;
    virtual void SetPropertyBitDepthChanged(Functor& aBitDepthChanged) = 0;
    virtual void PropertyBitDepth(TUint& aBitDepth) const = 0;
    virtual void SetPropertySampleRateChanged(Functor& aSampleRateChanged) = 0;
    virtual void PropertySampleRate(TUint& aSampleRate) const = 0;
    virtual void SetPropertyLosslessChanged(Functor& aLosslessChanged) = 0;
    virtual void PropertyLossless(TBool& aLossless) const = 0;
    virtual void SetPropertyCodecNameChanged(Functor& aCodecNameChanged) = 0;
    virtual void PropertyCodecName(Brhz& aCodecName) const = 0;
    virtual void SetPropertyMetatextChanged(Functor& aMetatextChanged) = 0;
    virtual void PropertyMetatext(Brhz& aMetatext) const = 0;
};

/**
 * Proxy for av.openhome.org:Info:1
 * @ingroup Proxies
 */
class CpProxyAvOpenhomeOrgInfo1 : public ICpProxyAvOpenhomeOrgInfo1
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
    CpProxyAvOpenhomeOrgInfo1(CpDevice& aDevice);
    /**
     * Destructor.
     * If any asynchronous method is in progress, this will block until they complete.
     * [Note that any methods still in progress are likely to complete with an error.]
     * Clients who have called Subscribe() do not need to call Unsubscribe() before
     * calling delete.  An unsubscribe will be triggered automatically when required.
     */
    ~CpProxyAvOpenhomeOrgInfo1();

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aTrackCount
     * @param[out] aDetailsCount
     * @param[out] aMetatextCount
     */
    void SyncCounters(TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndCounters().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginCounters(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aTrackCount
     * @param[out] aDetailsCount
     * @param[out] aMetatextCount
     */
    void EndCounters(IAsync& aAsync, TUint& aTrackCount, TUint& aDetailsCount, TUint& aMetatextCount);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aUri
     * @param[out] aMetadata
     */
    void SyncTrack(Brh& aUri, Brh& aMetadata);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndTrack().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginTrack(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aUri
     * @param[out] aMetadata
     */
    void EndTrack(IAsync& aAsync, Brh& aUri, Brh& aMetadata);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aDuration
     * @param[out] aBitRate
     * @param[out] aBitDepth
     * @param[out] aSampleRate
     * @param[out] aLossless
     * @param[out] aCodecName
     */
    void SyncDetails(TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndDetails().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginDetails(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aDuration
     * @param[out] aBitRate
     * @param[out] aBitDepth
     * @param[out] aSampleRate
     * @param[out] aLossless
     * @param[out] aCodecName
     */
    void EndDetails(IAsync& aAsync, TUint& aDuration, TUint& aBitRate, TUint& aBitDepth, TUint& aSampleRate, TBool& aLossless, Brh& aCodecName);

    /**
     * Invoke the action synchronously.  Blocks until the action has been processed
     * on the device and sets any output arguments.
     *
     * @param[out] aValue
     */
    void SyncMetatext(Brh& aValue);
    /**
     * Invoke the action asynchronously.
     * Returns immediately and will run the client-specified callback when the action
     * later completes.  Any output arguments can then be retrieved by calling
     * EndMetatext().
     *
     * @param[in] aFunctor   Callback to run when the action completes.
     *                       This is guaranteed to be run but may indicate an error
     */
    void BeginMetatext(FunctorAsync& aFunctor);
    /**
     * Retrieve the output arguments from an asynchronously invoked action.
     * This may only be called from the callback set in the above Begin function.
     *
     * @param[in]  aAsync  Argument passed to the callback set in the above Begin function
     * @param[out] aValue
     */
    void EndMetatext(IAsync& aAsync, Brh& aValue);

    /**
     * Set a callback to be run when the TrackCount state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyTrackCountChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the DetailsCount state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDetailsCountChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the MetatextCount state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetatextCountChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Uri state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyUriChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Metadata state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetadataChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Duration state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyDurationChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the BitRate state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBitRateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the BitDepth state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyBitDepthChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the SampleRate state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertySampleRateChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Lossless state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyLosslessChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the CodecName state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyCodecNameChanged(Functor& aFunctor);
    /**
     * Set a callback to be run when the Metatext state variable changes.
     *
     * Callbacks may be run in different threads but callbacks for a
     * CpProxyAvOpenhomeOrgInfo1 instance will not overlap.
     *
     * @param[in]  aFunctor  The callback to run when the state variable changes
     */
    void SetPropertyMetatextChanged(Functor& aFunctor);

    /**
     * Query the value of the TrackCount property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aTrackCount
     */
    void PropertyTrackCount(TUint& aTrackCount) const;
    /**
     * Query the value of the DetailsCount property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDetailsCount
     */
    void PropertyDetailsCount(TUint& aDetailsCount) const;
    /**
     * Query the value of the MetatextCount property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMetatextCount
     */
    void PropertyMetatextCount(TUint& aMetatextCount) const;
    /**
     * Query the value of the Uri property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aUri
     */
    void PropertyUri(Brhz& aUri) const;
    /**
     * Query the value of the Metadata property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMetadata
     */
    void PropertyMetadata(Brhz& aMetadata) const;
    /**
     * Query the value of the Duration property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aDuration
     */
    void PropertyDuration(TUint& aDuration) const;
    /**
     * Query the value of the BitRate property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBitRate
     */
    void PropertyBitRate(TUint& aBitRate) const;
    /**
     * Query the value of the BitDepth property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aBitDepth
     */
    void PropertyBitDepth(TUint& aBitDepth) const;
    /**
     * Query the value of the SampleRate property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aSampleRate
     */
    void PropertySampleRate(TUint& aSampleRate) const;
    /**
     * Query the value of the Lossless property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aLossless
     */
    void PropertyLossless(TBool& aLossless) const;
    /**
     * Query the value of the CodecName property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aCodecName
     */
    void PropertyCodecName(Brhz& aCodecName) const;
    /**
     * Query the value of the Metatext property.
     *
     * This function is threadsafe and can only be called if Subscribe() has been
     * called and a first eventing callback received more recently than any call
     * to Unsubscribe().
     *
     * @param[out] aMetatext
     */
    void PropertyMetatext(Brhz& aMetatext) const;
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
    void TrackCountPropertyChanged();
    void DetailsCountPropertyChanged();
    void MetatextCountPropertyChanged();
    void UriPropertyChanged();
    void MetadataPropertyChanged();
    void DurationPropertyChanged();
    void BitRatePropertyChanged();
    void BitDepthPropertyChanged();
    void SampleRatePropertyChanged();
    void LosslessPropertyChanged();
    void CodecNamePropertyChanged();
    void MetatextPropertyChanged();
private:
    Action* iActionCounters;
    Action* iActionTrack;
    Action* iActionDetails;
    Action* iActionMetatext;
    PropertyUint* iTrackCount;
    PropertyUint* iDetailsCount;
    PropertyUint* iMetatextCount;
    PropertyString* iUri;
    PropertyString* iMetadata;
    PropertyUint* iDuration;
    PropertyUint* iBitRate;
    PropertyUint* iBitDepth;
    PropertyUint* iSampleRate;
    PropertyBool* iLossless;
    PropertyString* iCodecName;
    PropertyString* iMetatext;
    Functor iTrackCountChanged;
    Functor iDetailsCountChanged;
    Functor iMetatextCountChanged;
    Functor iUriChanged;
    Functor iMetadataChanged;
    Functor iDurationChanged;
    Functor iBitRateChanged;
    Functor iBitDepthChanged;
    Functor iSampleRateChanged;
    Functor iLosslessChanged;
    Functor iCodecNameChanged;
    Functor iMetatextChanged;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_AVOPENHOMEORGINFO1

