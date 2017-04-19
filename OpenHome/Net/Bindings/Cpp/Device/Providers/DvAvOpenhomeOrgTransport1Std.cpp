#include "DvAvOpenhomeOrgTransport1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyModes(const std::string& aValue)
{
    ASSERT(iPropertyModes != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModes, buf);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyModes(std::string& aValue)
{
    ASSERT(iPropertyModes != NULL);
    const Brx& val = iPropertyModes->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyNextAvailable(bool aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    return SetPropertyBool(*iPropertyNextAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyNextAvailable(bool& aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    aValue = iPropertyNextAvailable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyPrevAvailable(bool aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    return SetPropertyBool(*iPropertyPrevAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyPrevAvailable(bool& aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    aValue = iPropertyPrevAvailable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyStreamId(uint32_t aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    return SetPropertyUint(*iPropertyStreamId, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyStreamId(uint32_t& aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    aValue = iPropertyStreamId->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertySeekable(bool aValue)
{
    ASSERT(iPropertySeekable != NULL);
    return SetPropertyBool(*iPropertySeekable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertySeekable(bool& aValue)
{
    ASSERT(iPropertySeekable != NULL);
    aValue = iPropertySeekable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyPausable(bool aValue)
{
    ASSERT(iPropertyPausable != NULL);
    return SetPropertyBool(*iPropertyPausable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyPausable(bool& aValue)
{
    ASSERT(iPropertyPausable != NULL);
    aValue = iPropertyPausable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyTransportState(const std::string& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyTransportState, buf);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyTransportState(std::string& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    const Brx& val = iPropertyTransportState->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgTransport1Cpp::DvProviderAvOpenhomeOrgTransport1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Transport", 1)
{
    iPropertyModes = NULL;
    iPropertyNextAvailable = NULL;
    iPropertyPrevAvailable = NULL;
    iPropertyStreamId = NULL;
    iPropertySeekable = NULL;
    iPropertyPausable = NULL;
    iPropertyTransportState = NULL;
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyNextAvailable()
{
    iPropertyNextAvailable = new PropertyBool(new ParameterBool("NextAvailable"));
    iService->AddProperty(iPropertyNextAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyPrevAvailable()
{
    iPropertyPrevAvailable = new PropertyBool(new ParameterBool("PrevAvailable"));
    iService->AddProperty(iPropertyPrevAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertySeekable()
{
    iPropertySeekable = new PropertyBool(new ParameterBool("Seekable"));
    iService->AddProperty(iPropertySeekable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyPausable()
{
    iPropertyPausable = new PropertyBool(new ParameterBool("Pausable"));
    iService->AddProperty(iPropertyPausable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyTransportState()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[5];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    allowedValues[index++] = (TChar*)"Waiting";
    iPropertyTransportState = new PropertyString(new ParameterString("TransportState", allowedValues, 5));
    delete[] allowedValues;
    iService->AddProperty(iPropertyTransportState); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionPlayAs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayAs");
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Command"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoPlayAs);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionPlay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionPause()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionStop()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionPrev()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Prev");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoPrev);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondsAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondsAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondsAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondsRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondsRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondsRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionTransportState()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("State", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionModes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Modes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionModeInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ModeInfo");
    action->AddOutputParameter(new ParameterRelated("NextAvailable", *iPropertyNextAvailable));
    action->AddOutputParameter(new ParameterRelated("PrevAvailable", *iPropertyPrevAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionStreamInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("Seekable", *iPropertySeekable));
    action->AddOutputParameter(new ParameterRelated("Pausable", *iPropertyPausable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoStreamInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionStreamId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamId");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoStreamId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoPlayAs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Mode;
    aInvocation.InvocationReadString("Mode", buf_Mode);
    std::string Mode((const char*)buf_Mode.Ptr(), buf_Mode.Bytes());
    Brhz buf_Command;
    aInvocation.InvocationReadString("Command", buf_Command);
    std::string Command((const char*)buf_Command.Ptr(), buf_Command.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    PlayAs(invocation, Mode, Command);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoPlay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Play(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoPause(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Pause(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoStop(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Stop(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Next(invocation, StreamId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoPrev(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Prev(invocation, StreamId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondsAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    uint32_t SecondsAbsolute = aInvocation.InvocationReadUint("SecondsAbsolute");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondsAbsolute(invocation, StreamId, SecondsAbsolute);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondsRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    int32_t SecondsRelative = aInvocation.InvocationReadInt("SecondsRelative");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondsRelative(invocation, StreamId, SecondsRelative);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoTransportState(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respState;
    DvInvocationStd invocation(aInvocation);
    TransportState(invocation, respState);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterState(aInvocation, "State");
    Brn buf_State((const TByte*)respState.c_str(), (TUint)respState.length());
    respWriterState.Write(buf_State);
    aInvocation.InvocationWriteStringEnd("State");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoModes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respModes;
    DvInvocationStd invocation(aInvocation);
    Modes(invocation, respModes);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterModes(aInvocation, "Modes");
    Brn buf_Modes((const TByte*)respModes.c_str(), (TUint)respModes.length());
    respWriterModes.Write(buf_Modes);
    aInvocation.InvocationWriteStringEnd("Modes");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoModeInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respNextAvailable;
    bool respPrevAvailable;
    DvInvocationStd invocation(aInvocation);
    ModeInfo(invocation, respNextAvailable, respPrevAvailable);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterNextAvailable(aInvocation, "NextAvailable");
    respWriterNextAvailable.Write(respNextAvailable);
    DviInvocationResponseBool respWriterPrevAvailable(aInvocation, "PrevAvailable");
    respWriterPrevAvailable.Write(respPrevAvailable);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoStreamInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respStreamId;
    bool respSeekable;
    bool respPausable;
    DvInvocationStd invocation(aInvocation);
    StreamInfo(invocation, respStreamId, respSeekable, respPausable);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterStreamId(aInvocation, "StreamId");
    respWriterStreamId.Write(respStreamId);
    DviInvocationResponseBool respWriterSeekable(aInvocation, "Seekable");
    respWriterSeekable.Write(respSeekable);
    DviInvocationResponseBool respWriterPausable(aInvocation, "Pausable");
    respWriterPausable.Write(respPausable);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoStreamId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respStreamId;
    DvInvocationStd invocation(aInvocation);
    StreamId(invocation, respStreamId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterStreamId(aInvocation, "StreamId");
    respWriterStreamId.Write(respStreamId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::PlayAs(IDvInvocationStd& /*aInvocation*/, const std::string& /*aMode*/, const std::string& /*aCommand*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Play(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Pause(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Stop(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Next(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Prev(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondsAbsolute(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, uint32_t /*aSecondsAbsolute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondsRelative(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, int32_t /*aSecondsRelative*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::TransportState(IDvInvocationStd& /*aInvocation*/, std::string& /*aState*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Modes(IDvInvocationStd& /*aInvocation*/, std::string& /*aModes*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::ModeInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aNextAvailable*/, bool& /*aPrevAvailable*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::StreamInfo(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aStreamId*/, bool& /*aSeekable*/, bool& /*aPausable*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::StreamId(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aStreamId*/)
{
    ASSERTS();
}

