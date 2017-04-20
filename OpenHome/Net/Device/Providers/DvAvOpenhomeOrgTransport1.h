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
     * Set the value of the PrevAvailable property
     *
     * Can only be called if EnablePropertyPrevAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyPrevAvailable(TBool aValue);
    /**
     * Get a copy of the value of the PrevAvailable property
     *
     * Can only be called if EnablePropertyPrevAvailable has previously been called.
     */
    void GetPropertyPrevAvailable(TBool& aValue);
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
     * Set the value of the RandomAvailable property
     *
     * Can only be called if EnablePropertyRandomAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRandomAvailable(TBool aValue);
    /**
     * Get a copy of the value of the RandomAvailable property
     *
     * Can only be called if EnablePropertyRandomAvailable has previously been called.
     */
    void GetPropertyRandomAvailable(TBool& aValue);
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
    TBool SetPropertyRepeat(TBool aValue);
    /**
     * Get a copy of the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     */
    void GetPropertyRepeat(TBool& aValue);
    /**
     * Set the value of the Random property
     *
     * Can only be called if EnablePropertyRandom has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    TBool SetPropertyRandom(TBool aValue);
    /**
     * Get a copy of the value of the Random property
     *
     * Can only be called if EnablePropertyRandom has previously been called.
     */
    void GetPropertyRandom(TBool& aValue);
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
     * Enable the PrevAvailable property.
     */
    void EnablePropertyPrevAvailable();
    /**
     * Enable the RepeatAvailable property.
     */
    void EnablePropertyRepeatAvailable();
    /**
     * Enable the RandomAvailable property.
     */
    void EnablePropertyRandomAvailable();
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
     * Enable the Random property.
     */
    void EnablePropertyRandom();
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
     * Signal that the action Prev is supported.
     * The action's availability will be published in the device's service.xml.
     * Prev must be overridden if this is called.
     */
    void EnableActionPrev();
    /**
     * Signal that the action SetRepeat is supported.
     * The action's availability will be published in the device's service.xml.
     * SetRepeat must be overridden if this is called.
     */
    void EnableActionSetRepeat();
    /**
     * Signal that the action SetRandom is supported.
     * The action's availability will be published in the device's service.xml.
     * SetRandom must be overridden if this is called.
     */
    void EnableActionSetRandom();
    /**
     * Signal that the action SeekSecondsAbsolute is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondsAbsolute must be overridden if this is called.
     */
    void EnableActionSeekSecondsAbsolute();
    /**
     * Signal that the action SeekSecondsRelative is supported.
     * The action's availability will be published in the device's service.xml.
     * SeekSecondsRelative must be overridden if this is called.
     */
    void EnableActionSeekSecondsRelative();
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
     * Signal that the action Random is supported.
     * The action's availability will be published in the device's service.xml.
     * Random must be overridden if this is called.
     */
    void EnableActionRandom();
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
    virtual void Next(IDvInvocation& aInvocation, TUint aStreamId);
    /**
     * Prev action.
     *
     * Will be called when the device stack receives an invocation of the
     * Prev action for the owning device.
     * Must be implemented iff EnableActionPrev was called.
     */
    virtual void Prev(IDvInvocation& aInvocation, TUint aStreamId);
    /**
     * SetRepeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRepeat action for the owning device.
     * Must be implemented iff EnableActionSetRepeat was called.
     */
    virtual void SetRepeat(IDvInvocation& aInvocation, TBool aRepeat);
    /**
     * SetRandom action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRandom action for the owning device.
     * Must be implemented iff EnableActionSetRandom was called.
     */
    virtual void SetRandom(IDvInvocation& aInvocation, TBool aRandom);
    /**
     * SeekSecondsAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondsAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondsAbsolute was called.
     */
    virtual void SeekSecondsAbsolute(IDvInvocation& aInvocation, TUint aStreamId, TUint aSecondsAbsolute);
    /**
     * SeekSecondsRelative action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondsRelative action for the owning device.
     * Must be implemented iff EnableActionSeekSecondsRelative was called.
     */
    virtual void SeekSecondsRelative(IDvInvocation& aInvocation, TUint aStreamId, TInt aSecondsRelative);
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
    virtual void ModeInfo(IDvInvocation& aInvocation, IDvInvocationResponseBool& aNextAvailable, IDvInvocationResponseBool& aPrevAvailable, IDvInvocationResponseBool& aRepeatAvailable, IDvInvocationResponseBool& aRandomAvailable);
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
    virtual void Repeat(IDvInvocation& aInvocation, IDvInvocationResponseBool& aRepeat);
    /**
     * Random action.
     *
     * Will be called when the device stack receives an invocation of the
     * Random action for the owning device.
     * Must be implemented iff EnableActionRandom was called.
     */
    virtual void Random(IDvInvocation& aInvocation, IDvInvocationResponseBool& aRandom);
private:
    DvProviderAvOpenhomeOrgTransport1();
    void Construct();
    void DoPlayAs(IDviInvocation& aInvocation);
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrev(IDviInvocation& aInvocation);
    void DoSetRepeat(IDviInvocation& aInvocation);
    void DoSetRandom(IDviInvocation& aInvocation);
    void DoSeekSecondsAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondsRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
    void DoModes(IDviInvocation& aInvocation);
    void DoModeInfo(IDviInvocation& aInvocation);
    void DoStreamInfo(IDviInvocation& aInvocation);
    void DoStreamId(IDviInvocation& aInvocation);
    void DoRepeat(IDviInvocation& aInvocation);
    void DoRandom(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyModes;
    PropertyBool* iPropertyNextAvailable;
    PropertyBool* iPropertyPrevAvailable;
    PropertyBool* iPropertyRepeatAvailable;
    PropertyBool* iPropertyRandomAvailable;
    PropertyUint* iPropertyStreamId;
    PropertyBool* iPropertySeekable;
    PropertyBool* iPropertyPausable;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyRandom;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1

