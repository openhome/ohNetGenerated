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
     * Set the value of the NextAvailable property
     *
     * Can only be called if EnablePropertyNextAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyNextAvailable(bool aValue);
    /**
     * Get a copy of the value of the NextAvailable property
     *
     * Can only be called if EnablePropertyNextAvailable has previously been called.
     */
    void GetPropertyNextAvailable(bool& aValue);
    /**
     * Set the value of the PrevAvailable property
     *
     * Can only be called if EnablePropertyPrevAvailable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPrevAvailable(bool aValue);
    /**
     * Get a copy of the value of the PrevAvailable property
     *
     * Can only be called if EnablePropertyPrevAvailable has previously been called.
     */
    void GetPropertyPrevAvailable(bool& aValue);
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
     * Set the value of the Seekable property
     *
     * Can only be called if EnablePropertySeekable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertySeekable(bool aValue);
    /**
     * Get a copy of the value of the Seekable property
     *
     * Can only be called if EnablePropertySeekable has previously been called.
     */
    void GetPropertySeekable(bool& aValue);
    /**
     * Set the value of the Pausable property
     *
     * Can only be called if EnablePropertyPausable has previously been called.
     *
     * @return  true if the value has been updated; false if aValue was the same as the previous value
     */
    bool SetPropertyPausable(bool aValue);
    /**
     * Get a copy of the value of the Pausable property
     *
     * Can only be called if EnablePropertyPausable has previously been called.
     */
    void GetPropertyPausable(bool& aValue);
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
     * Enable the NextAvailable property.
     */
    void EnablePropertyNextAvailable();
    /**
     * Enable the PrevAvailable property.
     */
    void EnablePropertyPrevAvailable();
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
     * Next action.
     *
     * Will be called when the device stack receives an invocation of the
     * Next action for the owning device.
     * Must be implemented iff EnableActionNext was called.
     */
    virtual void Next(IDvInvocationStd& aInvocation, uint32_t aStreamId);
    /**
     * Prev action.
     *
     * Will be called when the device stack receives an invocation of the
     * Prev action for the owning device.
     * Must be implemented iff EnableActionPrev was called.
     */
    virtual void Prev(IDvInvocationStd& aInvocation, uint32_t aStreamId);
    /**
     * SeekSecondsAbsolute action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondsAbsolute action for the owning device.
     * Must be implemented iff EnableActionSeekSecondsAbsolute was called.
     */
    virtual void SeekSecondsAbsolute(IDvInvocationStd& aInvocation, uint32_t aStreamId, uint32_t aSecondsAbsolute);
    /**
     * SeekSecondsRelative action.
     *
     * Will be called when the device stack receives an invocation of the
     * SeekSecondsRelative action for the owning device.
     * Must be implemented iff EnableActionSeekSecondsRelative was called.
     */
    virtual void SeekSecondsRelative(IDvInvocationStd& aInvocation, uint32_t aStreamId, int32_t aSecondsRelative);
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
    virtual void ModeInfo(IDvInvocationStd& aInvocation, bool& aNextAvailable, bool& aPrevAvailable);
    /**
     * StreamInfo action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamInfo action for the owning device.
     * Must be implemented iff EnableActionStreamInfo was called.
     */
    virtual void StreamInfo(IDvInvocationStd& aInvocation, uint32_t& aStreamId, bool& aSeekable, bool& aPausable);
    /**
     * StreamId action.
     *
     * Will be called when the device stack receives an invocation of the
     * StreamId action for the owning device.
     * Must be implemented iff EnableActionStreamId was called.
     */
    virtual void StreamId(IDvInvocationStd& aInvocation, uint32_t& aStreamId);
private:
    DvProviderAvOpenhomeOrgTransport1Cpp();
    void DoPlayAs(IDviInvocation& aInvocation);
    void DoPlay(IDviInvocation& aInvocation);
    void DoPause(IDviInvocation& aInvocation);
    void DoStop(IDviInvocation& aInvocation);
    void DoNext(IDviInvocation& aInvocation);
    void DoPrev(IDviInvocation& aInvocation);
    void DoSeekSecondsAbsolute(IDviInvocation& aInvocation);
    void DoSeekSecondsRelative(IDviInvocation& aInvocation);
    void DoTransportState(IDviInvocation& aInvocation);
    void DoModes(IDviInvocation& aInvocation);
    void DoModeInfo(IDviInvocation& aInvocation);
    void DoStreamInfo(IDviInvocation& aInvocation);
    void DoStreamId(IDviInvocation& aInvocation);
private:
    PropertyString* iPropertyModes;
    PropertyBool* iPropertyNextAvailable;
    PropertyBool* iPropertyPrevAvailable;
    PropertyUint* iPropertyStreamId;
    PropertyBool* iPropertySeekable;
    PropertyBool* iPropertyPausable;
    PropertyString* iPropertyTransportState;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_DVAVOPENHOMEORGTRANSPORT1CPP

