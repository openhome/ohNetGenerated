#ifndef HEADER_DVAVOPENHOMEORGTRANSPORT1CPP
#define HEADER_DVAVOPENHOMEORGTRANSPORT1CPP

#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/DvDevice.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>

#include <string>

namespace OpenHome {
namespace Net {

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
class DvProviderAvOpenhomeOrgTransport1Cpp : public DvProvider
{
public:
    virtual ~DvProviderAvOpenhomeOrgTransport1Cpp() {}
    /**
     * Set the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyModes(const std::string& aValue);
    /**
     * Get a copy of the value of the Modes property
     *
     * Can only be called if EnablePropertyModes has previously been called.
     */
    void GetPropertyModes(std::string& aValue);
    /**
     * Set the value of the CanSkipNext property
     *
     * Can only be called if EnablePropertyCanSkipNext has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanSkipNext(bool aValue);
    /**
     * Get a copy of the value of the CanSkipNext property
     *
     * Can only be called if EnablePropertyCanSkipNext has previously been called.
     */
    void GetPropertyCanSkipNext(bool& aValue);
    /**
     * Set the value of the CanSkipPrevious property
     *
     * Can only be called if EnablePropertyCanSkipPrevious has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanSkipPrevious(bool aValue);
    /**
     * Get a copy of the value of the CanSkipPrevious property
     *
     * Can only be called if EnablePropertyCanSkipPrevious has previously been called.
     */
    void GetPropertyCanSkipPrevious(bool& aValue);
    /**
     * Set the value of the CanRepeat property
     *
     * Can only be called if EnablePropertyCanRepeat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanRepeat(bool aValue);
    /**
     * Get a copy of the value of the CanRepeat property
     *
     * Can only be called if EnablePropertyCanRepeat has previously been called.
     */
    void GetPropertyCanRepeat(bool& aValue);
    /**
     * Set the value of the CanShuffle property
     *
     * Can only be called if EnablePropertyCanShuffle has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanShuffle(bool aValue);
    /**
     * Get a copy of the value of the CanShuffle property
     *
     * Can only be called if EnablePropertyCanShuffle has previously been called.
     */
    void GetPropertyCanShuffle(bool& aValue);
    /**
     * Set the value of the StreamId property
     *
     * Can only be called if EnablePropertyStreamId has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyStreamId(uint32_t aValue);
    /**
     * Get a copy of the value of the StreamId property
     *
     * Can only be called if EnablePropertyStreamId has previously been called.
     */
    void GetPropertyStreamId(uint32_t& aValue);
    /**
     * Set the value of the CanSeek property
     *
     * Can only be called if EnablePropertyCanSeek has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanSeek(bool aValue);
    /**
     * Get a copy of the value of the CanSeek property
     *
     * Can only be called if EnablePropertyCanSeek has previously been called.
     */
    void GetPropertyCanSeek(bool& aValue);
    /**
     * Set the value of the CanPause property
     *
     * Can only be called if EnablePropertyCanPause has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyCanPause(bool aValue);
    /**
     * Get a copy of the value of the CanPause property
     *
     * Can only be called if EnablePropertyCanPause has previously been called.
     */
    void GetPropertyCanPause(bool& aValue);
    /**
     * Set the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyTransportState(const std::string& aValue);
    /**
     * Get a copy of the value of the TransportState property
     *
     * Can only be called if EnablePropertyTransportState has previously been called.
     */
    void GetPropertyTransportState(std::string& aValue);
    /**
     * Set the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyRepeat(bool aValue);
    /**
     * Get a copy of the value of the Repeat property
     *
     * Can only be called if EnablePropertyRepeat has previously been called.
     */
    void GetPropertyRepeat(bool& aValue);
    /**
     * Set the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyShuffle(bool aValue);
    /**
     * Get a copy of the value of the Shuffle property
     *
     * Can only be called if EnablePropertyShuffle has previously been called.
     */
    void GetPropertyShuffle(bool& aValue);
protected:
    /**
     * Constructor
     *
     * @param[in] aDevice  Device which owns this provider
     */
    DvProviderAvOpenhomeOrgTransport1Cpp(DvDeviceStd& aDevice);
    /**
     * Enable the Modes property.
     */
    void EnablePropertyModes();
    /**
     * Enable the CanSkipNext property.
     */
    void EnablePropertyCanSkipNext();
    /**
     * Enable the CanSkipPrevious property.
     */
    void EnablePropertyCanSkipPrevious();
    /**
     * Enable the CanRepeat property.
     */
    void EnablePropertyCanRepeat();
    /**
     * Enable the CanShuffle property.
     */
    void EnablePropertyCanShuffle();
    /**
     * Enable the StreamId property.
     */
    void EnablePropertyStreamId();
    /**
     * Enable the CanSeek property.
     */
    void EnablePropertyCanSeek();
    /**
     * Enable the CanPause property.
     */
    void EnablePropertyCanPause();
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
     * Signal that the action SkipNext is supported.
     * The action's availability will be published in the device's service.xml.
     * SkipNext must be overridden if this is called.
     */
    void EnableActionSkipNext();
    /**
     * Signal that the action SkipPrevious is supported.
     * The action's availability will be published in the device's service.xml.
     * SkipPrevious must be overridden if this is called.
     */
    void EnableActionSkipPrevious();
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
    virtual void PlayAs(IDvInvocationStd& aInvocation, const std::string& aMode, const std::string& aCommand);
    /**
     * Play action.
     *
     * Will be called when the device stack receives an invocation of the
     * Play action for the owning device.
     * Must be implemented iff EnableActionPlay was called.
     */
    virtual void Play(IDvInvocationStd& aInvocation);
    /**
     * Pause action.
     *
     * Will be called when the device stack receives an invocation of the
     * Pause action for the owning device.
     * Must be implemented iff EnableActionPause was called.
     */
    virtual void Pause(IDvInvocationStd& aInvocation);
    /**
     * Stop action.
     *
     * Will be called when the device stack receives an invocation of the
     * Stop action for the owning device.
     * Must be implemented iff EnableActionStop was called.
     */
    virtual void Stop(IDvInvocationStd& aInvocation);
    /**
     * SkipNext action.
     *
     * Will be called when the device stack receives an invocation of the
     * SkipNext action for the owning device.
     * Must be implemented iff EnableActionSkipNext was called.
     */
    virtual void SkipNext(IDvInvocationStd& aInvocation);
    /**
     * SkipPrevious action.
     *
     * Will be called when the device stack receives an invocation of the
     * SkipPrevious action for the owning device.
     * Must be implemented iff EnableActionSkipPrevious was called.
     */
    virtual void SkipPrevious(IDvInvocationStd& aInvocation);
    /**
     * SetRepeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetRepeat action for the owning device.
     * Must be implemented iff EnableActionSetRepeat was called.
     */
    virtual void SetRepeat(IDvInvocationStd& aInvocation, bool aRepeat);
    /**
     * SetShuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * SetShuffle action for the owning device.
     * Must be implemented iff EnableActionSetShuffle was called.
     */
    virtual void SetShuffle(IDvInvocationStd& aInvocation, bool aShuffle);
    /**
     * SeekSecondAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondAbsolute was called.
     */
    virtual void SeekSecondAbsolute(IDvInvocationStd& aInvocation, uint32_t aStreamId, uint32_t aSecondAbsolute);
    /**
     * SeekSecondRelative action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondRelative action for the owning device.
     * Must be implemented iff EnableActionSeekSecondRelative was called.
     */
    virtual void SeekSecondRelative(IDvInvocationStd& aInvocation, uint32_t aStreamId, int32_t aSecondRelative);
    /**
     * TransportState action.
     *
     * Will be called when the device stack receives an invocation of the
     * TransportState action for the owning device.
     * Must be implemented iff EnableActionTransportState was called.
     */
    virtual void TransportState(IDvInvocationStd& aInvocation, std::string& aState);
    /**
     * Modes action.
     *
     * Will be called when the device stack receives an invocation of the
     * Modes action for the owning device.
     * Must be implemented iff EnableActionModes was called.
     */
    virtual void Modes(IDvInvocationStd& aInvocation, std::string& aModes);
    /**
     * ModeInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * ModeInfo action for the owning device.
     * Must be implemented iff EnableActionModeInfo was called.
     */
    virtual void ModeInfo(IDvInvocationStd& aInvocation, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle);
    /**
     * StreamInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamInfo action for the owning device.
     * Must be implemented iff EnableActionStreamInfo was called.
     */
    virtual void StreamInfo(IDvInvocationStd& aInvocation, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause);
    /**
     * StreamId action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamId action for the owning device.
     * Must be implemented iff EnableActionStreamId was called.
     */
    virtual void StreamId(IDvInvocationStd& aInvocation, uint32_t& aStreamId);
    /**
     * Repeat action.
     *
     * Will be called when the device stack receives an invocation of the
     * Repeat action for the owning device.
     * Must be implemented iff EnableActionRepeat was called.
     */
    virtual void Repeat(IDvInvocationStd& aInvocation, bool& aRepeat);
    /**
     * Shuffle action.
     *
     * Will be called when the device stack receives an invocation of the
     * Shuffle action for the owning device.
     * Must be implemented iff EnableActionShuffle was called.
     */
    virtual void Shuffle(IDvInvocationStd& aInvocation, bool& aShuffle);
private:
    DvProviderAvOpenhomeOrgTransport1Cpp();
    void DoPlayAs(IDviInvocation& aInvocation);
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoSkipNext(IDviInvocation& aInvocation);
    void DoSkipPrevious(IDviInvocation& aInvocation);
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
    PropertyBool* iPropertyCanSkipNext;
    PropertyBool* iPropertyCanSkipPrevious;
    PropertyBool* iPropertyCanRepeat;
    PropertyBool* iPropertyCanShuffle;
    PropertyUint* iPropertyStreamId;
    PropertyBool* iPropertyCanSeek;
    PropertyBool* iPropertyCanPause;
    PropertyString* iPropertyTransportState;
    PropertyBool* iPropertyRepeat;
    PropertyBool* iPropertyShuffle;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1CPP

