#ifndef HEADER_DVAVOPENHOMEORGTRANSPORT1
#define HEADER_DVAVOPENHOMEORGTRANSPORT1

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Core/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>

namespace OpenHome {
namespace Net {

class DviDevice;
class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Provider for the av.openhome.org:Transport:1 UPnP service
 * @ingroup Providers
 */
class DvProviderAvOpenhomeOrgTransport1 : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgTransport1() {}
    /**
     * Set the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyModes(const Brx& aValue);
    /**
     * Get a copy of the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     */
    void GetPropertyModes(Brhz& aValue);
    /**
     * Set the value of the NextAvailable property
     *
     * Can only be called if EnablePropertyNextAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyNextAvailable(TBool aValue);
    /**
     * Get a copy of the value of the NextAvailable property
     *
     * Can only be called if EnablePropertyNextAvailable has previously been called.
     */
    void GetPropertyNextAvailable(TBool& aValue);
    /**
     * Set the value of the PreviousAvailable property
     *
     * Can only be called if EnablePropertyPreviousAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPreviousAvailable(TBool aValue);
    /**
     * Get a copy of the value of the PreviousAvailable property
     *
     * Can only be called if EnablePropertyPreviousAvailable has previously been called.
     */
    void GetPropertyPreviousAvailable(TBool& aValue);
    /**
     * Set the value of the RepeatAvailable property
     *
     * Can only be called if EnablePropertyRepeatAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRepeatAvailable(TBool aValue);
    /**
     * Get a copy of the value of the RepeatAvailable property
     *
     * Can only be called if EnablePropertyRepeatAvailable has previously been called.
     */
    void GetPropertyRepeatAvailable(TBool& aValue);
    /**
     * Set the value of the ShuffleAvailable property
     *
     * Can only be called if EnablePropertyShuffleAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyShuffleAvailable(TBool aValue);
    /**
     * Get a copy of the value of the ShuffleAvailable property
     *
     * Can only be called if EnablePropertyShuffleAvailable has previously been called.
     */
    void GetPropertyShuffleAvailable(TBool& aValue);
    /**
     * Set the value of the StreamId property
     *
     * Can only be called if EnablePropertyStreamId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyStreamId(TUint aValue);
    /**
     * Get a copy of the value of the StreamId property
     *
     * Can only be called if EnablePropertyStreamId has previously been called.
     */
    void GetPropertyStreamId(TUint& aValue);
    /**
     * Set the value of the Seekable property
     *
     * Can only be called if EnablePropertySeekable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertySeekable(TBool aValue);
    /**
     * Get a copy of the value of the Seekable property
     *
     * Can only be called if EnablePropertySeekable has previously been called.
     */
    void GetPropertySeekable(TBool& aValue);
    /**
     * Set the value of the Pausable property
     *
     * Can only be called if EnablePropertyPausable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPausable(TBool aValue);
    /**
     * Get a copy of the value of the Pausable property
     *
     * Can only be called if EnablePropertyPausable has previously been called.
     */
    void GetPropertyPausable(TBool& aValue);
    /**
     * Set the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyTransportState(const Brx& aValue);
    /**
     * Get a copy of the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     */
    void GetPropertyTransportState(Brhz& aValue);
    /**
     * Set the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRepeat(TUint aValue);
    /**
     * Get a copy of the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     */
    void GetPropertyRepeat(TUint& aValue);
    /**
     * Set the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyShuffle(TUint aValue);
    /**
     * Get a copy of the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     */
    void GetPropertyShuffle(TUint& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTransport1(DvDevice& aDevice);
    /**
     * Constructor.  Not for external use.
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTransport1(DviDevice& aDevice);
    /**
     * Enable the Modes property.
     */
    void EnablePropertyModes();
    /**
     * Enable the NextAvailable property.
     */
    void EnablePropertyNextAvailable();
    /**
     * Enable the PreviousAvailable property.
     */
    void EnablePropertyPreviousAvailable();
    /**
     * Enable the RepeatAvailable property.
     */
    void EnablePropertyRepeatAvailable();
    /**
     * Enable the ShuffleAvailable property.
     */
    void EnablePropertyShuffleAvailable();
    /**
     * Enable the StreamId property.
     */
    void EnablePropertyStreamId();
    /**
     * Enable the Seekable property.
     */
    void EnablePropertySeekable();
    /**
     * Enable the Pausable property.
     */
    void EnablePropertyPausable();
    /**
     * Enable the TransportState property.
     */
    void EnablePropertyTransportState();
    /**
     * Enable the Repeat property.
     */
    void EnablePropertyRepeat();
    /**
     * Enable the Shuffle property.
     */
    void EnablePropertyShuffle();
    /**
     * Signal that the action PlayAs is supported.
     * The action's availability will be published in the device's service.xml.
     * PlayAs must be overridden if this is called.
     */
    void EnableActionPlayAs();
    /**
     * Signal that the action Play is supported.
     * The action's availability will be published in the device's service.xml.
     * Play must be overridden if this is called.
     */
    void EnableActionPlay();
    /**
     * Signal that the action Pause is supported.
     * The action's availability will be published in the device's service.xml.
     * Pause must be overridden if this is called.
     */
    void EnableActionPause();
    /**
     * Signal that the action Stop is supported.
     * The action's availability will be published in the device's service.xml.
     * Stop must be overridden if this is called.
     */
    void EnableActionStop();
    /**
     * Signal that the action Next is supported.
     * The action's availability will be published in the device's service.xml.
     * Next must be overridden if this is called.
     */
    void EnableActionNext();
    /**
     * Signal that the action Previous is supported.
     * The action's availability will be published in the device's service.xml.
     * Previous must be overridden if this is called.
     */
    void EnableActionPrevious();
    /**
     * Signal that the action SetRepeat is supported.
     * The action's availability will be published in the device's service.xml.
     * SetRepeat must be overridden if this is called.
     */
    void EnableActionSetRepeat();
    /**
     * Signal that the action SetShuffle is supported.
     * The action's availability will be published in the device's service.xml.
     * SetShuffle must be overridden if this is called.
     */
    void EnableActionSetShuffle();
    /**
     * Signal that the action SeekSecondAbsolute is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondAbsolute must be overridden if this is called.
     */
    void EnableActionSeekSecondAbsolute();
    /**
     * Signal that the action SeekSecondRelative is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondRelative must be overridden if this is called.
     */
    void EnableActionSeekSecondRelative();
    /**
     * Signal that the action TransportState is supported.
     * The action's availability will be published in the device's service.xml.
     * TransportState must be overridden if this is called.
     */
    void EnableActionTransportState();
    /**
     * Signal that the action Modes is supported.
     * The action's availability will be published in the device's service.xml.
     * Modes must be overridden if this is called.
     */
    void EnableActionModes();
    /**
     * Signal that the action ModeInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * ModeInfo must be overridden if this is called.
     */
    void EnableActionModeInfo();
    /**
     * Signal that the action StreamInfo is supported.
     * The action's availability will be published in the device's service.xml.
     * StreamInfo must be overridden if this is called.
     */
    void EnableActionStreamInfo();
    /**
     * Signal that the action StreamId is supported.
     * The action's availability will be published in the device's service.xml.
     * StreamId must be overridden if this is called.
     */
    void EnableActionStreamId();
    /**
     * Signal that the action Repeat is supported.
     * The action's availability will be published in the device's service.xml.
     * Repeat must be overridden if this is called.
     */
    void EnableActionRepeat();
    /**
     * Signal that the action Shuffle is supported.
     * The action's availability will be published in the device's service.xml.
     * Shuffle must be overridden if this is called.
     */
    void EnableActionShuffle();
private:
    /**
     * PlayAs action.
     *
     * Will be called when the device stack receives an invocation of the
     * PlayAs action for the owning device.
     * Must be implemented iff EnableActionPlayAs was called.
     */
    virtual void PlayAs(IDvInvocation& aInvocation, const Brx& aMode, const Brx& aCommand);
    /**
     * Play action.
     *
     * Will be called when the device stack receives an invocation of the
     * Play action for the owning device.
     * Must be implemented iff EnableActionPlay was called.
     */
    virtual void Play(IDvInvocation& aInvocation);
    /**
     * Pause action.
     *
     * Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     * Must be implemented iff EnableActionPause was called.
     */
    virtual void Pause(IDvInvocation& aInvocation);
    /**
     * Stop action.
     *
     * Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     * Must be implemented iff EnableActionStop was called.
     */
    virtual void Stop(IDvInvocation& aInvocation);
    /**
     * Next action.
     *
     * Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     * Must be implemented iff EnableActionNext was called.
     */
    virtual void Next(IDvInvocation& aInvocation);
    /**
     * Previous action.
     *
     * Will be called when the device stack receives an invocation of the
     * Previous action for the owning device.
     * Must be implemented iff EnableActionPrevious was called.
     */
    virtual void Previous(IDvInvocation& aInvocation);
    /**
     * SetRepeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRepeat action for the owning device.
     * Must be implemented iff EnableActionSetRepeat was called.
     */
    virtual void SetRepeat(IDvInvocation& aInvocation, TBool aRepeat);
    /**
     * SetShuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetShuffle action for the owning device.
     * Must be implemented iff EnableActionSetShuffle was called.
     */
    virtual void SetShuffle(IDvInvocation& aInvocation, TBool aShuffle);
    /**
     * SeekSecondAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondAbsolute was called.
     */
    virtual void SeekSecondAbsolute(IDvInvocation& aInvocation, TUint aStreamId, TUint aSecondsAbsolute);
    /**
     * SeekSecondRelative action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondRelative action for the owning device.
     * Must be implemented iff EnableActionSeekSecondRelative was called.
     */
    virtual void SeekSecondRelative(IDvInvocation& aInvocation, TUint aStreamId, TInt aSecondsRelative);
    /**
     * TransportState action.
     *
     * Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     * Must be implemented iff EnableActionTransportState was called.
     */
    virtual void TransportState(IDvInvocation& aInvocation, IDvInvocationResponseString& aState);
    /**
     * Modes action.
     *
     * Will be called when the device stack receives an invocation of the
     * Modes action for the owning device.
     * Must be implemented iff EnableActionModes was called.
     */
    virtual void Modes(IDvInvocation& aInvocation, IDvInvocationResponseString& aModes);
    /**
     * ModeInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * ModeInfo action for the owning device.
     * Must be implemented iff EnableActionModeInfo was called.
     */
    virtual void ModeInfo(IDvInvocation& aInvocation, IDvInvocationResponseBool& aNextAvailable, IDvInvocationResponseBool& aPreviousAvailable, IDvInvocationResponseBool& aRepeatAvailable, IDvInvocationResponseBool& aShuffleAvailable);
    /**
     * StreamInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamInfo action for the owning device.
     * Must be implemented iff EnableActionStreamInfo was called.
     */
    virtual void StreamInfo(IDvInvocation& aInvocation, IDvInvocationResponseUint& aStreamId, IDvInvocationResponseBool& aSeekable, IDvInvocationResponseBool& aPausable);
    /**
     * StreamId action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamId action for the owning device.
     * Must be implemented iff EnableActionStreamId was called.
     */
    virtual void StreamId(IDvInvocation& aInvocation, IDvInvocationResponseUint& aStreamId);
    /**
     * Repeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * Repeat action for the owning device.
     * Must be implemented iff EnableActionRepeat was called.
     */
    virtual void Repeat(IDvInvocation& aInvocation, IDvInvocationResponseUint& aRepeat);
    /**
     * Shuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * Shuffle action for the owning device.
     * Must be implemented iff EnableActionShuffle was called.
     */
    virtual void Shuffle(IDvInvocation& aInvocation, IDvInvocationResponseUint& aShuffle);
private:
    DvProviderAvOpenhomeOrgTransport1();
    void Construct();
    void DoPlayAs(IDviInvocation& aInvocation);
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrevious(IDviInvocation& aInvocation);
    void DoSetRepeat(IDviInvocation& aInvocation);
    void DoSetShuffle(IDviInvocation& aInvocation);
    void DoSeekSecondAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
    void DoModes(IDviInvocation& aInvocation);
    void DoModeInfo(IDviInvocation& aInvocation);
    void DoStreamInfo(IDviInvocation& aInvocation);
    void DoStreamId(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoShuffle(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyModes;
    PropertyBool* iPropertyNextAvailable;
    PropertyBool* iPropertyPreviousAvailable;
    PropertyBool* iPropertyRepeatAvailable;
    PropertyBool* iPropertyShuffleAvailable;
    PropertyUint* iPropertyStreamId;
    PropertyBool* iPropertySeekable;
    PropertyBool* iPropertyPausable;
    PropertyString* iPropertyTransportState;
    PropertyUint* iPropertyRepeat;
    PropertyUint* iPropertyShuffle;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1

