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

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyPreviousAvailable(bool aValue)
{
    ASSERT(iPropertyPreviousAvailable != NULL);
    return SetPropertyBool(*iPropertyPreviousAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyPreviousAvailable(bool& aValue)
{
    ASSERT(iPropertyPreviousAvailable != NULL);
    aValue = iPropertyPreviousAvailable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyRepeatAvailable(bool aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    return SetPropertyBool(*iPropertyRepeatAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyRepeatAvailable(bool& aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    aValue = iPropertyRepeatAvailable->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyShuffleAvailable(bool aValue)
{
    ASSERT(iPropertyShuffleAvailable != NULL);
    return SetPropertyBool(*iPropertyShuffleAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyShuffleAvailable(bool& aValue)
{
    ASSERT(iPropertyShuffleAvailable != NULL);
    aValue = iPropertyShuffleAvailable->Value();
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

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyRepeat(uint32_t aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyUint(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyRepeat(uint32_t& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyShuffle(uint32_t aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyUint(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyShuffle(uint32_t& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

DvProviderAvOpenhomeOrgTransport1Cpp::DvProviderAvOpenhomeOrgTransport1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Transport", 1)
{
    iPropertyModes = NULL;
    iPropertyNextAvailable = NULL;
    iPropertyPreviousAvailable = NULL;
    iPropertyRepeatAvailable = NULL;
    iPropertyShuffleAvailable = NULL;
    iPropertyStreamId = NULL;
    iPropertySeekable = NULL;
    iPropertyPausable = NULL;
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyShuffle = NULL;
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

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyPreviousAvailable()
{
    iPropertyPreviousAvailable = new PropertyBool(new ParameterBool("PreviousAvailable"));
    iService->AddProperty(iPropertyPreviousAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyRepeatAvailable()
{
    iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
    iService->AddProperty(iPropertyRepeatAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyShuffleAvailable()
{
    iPropertyShuffleAvailable = new PropertyBool(new ParameterBool("ShuffleAvailable"));
    iService->AddProperty(iPropertyShuffleAvailable); // passes ownership
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

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyUint(new ParameterUint("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyUint(new ParameterUint("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSetRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterUint("Repeat"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSetShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterUint("Shuffle"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondsAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondsRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondRelative);
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
    action->AddOutputParameter(new ParameterRelated("PreviousAvailable", *iPropertyPreviousAvailable));
    action->AddOutputParameter(new ParameterRelated("RepeatAvailable", *iPropertyRepeatAvailable));
    action->AddOutputParameter(new ParameterRelated("ShuffleAvailable", *iPropertyShuffleAvailable));
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

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoShuffle);
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
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Next(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Previous(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSetRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Repeat = aInvocation.InvocationReadUint("Repeat");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetRepeat(invocation, Repeat);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSetShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Shuffle = aInvocation.InvocationReadUint("Shuffle");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetShuffle(invocation, Shuffle);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    uint32_t SecondsAbsolute = aInvocation.InvocationReadUint("SecondsAbsolute");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondAbsolute(invocation, StreamId, SecondsAbsolute);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    int32_t SecondsRelative = aInvocation.InvocationReadInt("SecondsRelative");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondRelative(invocation, StreamId, SecondsRelative);
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
    bool respPreviousAvailable;
    bool respRepeatAvailable;
    bool respShuffleAvailable;
    DvInvocationStd invocation(aInvocation);
    ModeInfo(invocation, respNextAvailable, respPreviousAvailable, respRepeatAvailable, respShuffleAvailable);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterNextAvailable(aInvocation, "NextAvailable");
    respWriterNextAvailable.Write(respNextAvailable);
    DviInvocationResponseBool respWriterPreviousAvailable(aInvocation, "PreviousAvailable");
    respWriterPreviousAvailable.Write(respPreviousAvailable);
    DviInvocationResponseBool respWriterRepeatAvailable(aInvocation, "RepeatAvailable");
    respWriterRepeatAvailable.Write(respRepeatAvailable);
    DviInvocationResponseBool respWriterShuffleAvailable(aInvocation, "ShuffleAvailable");
    respWriterShuffleAvailable.Write(respShuffleAvailable);
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

void DvProviderAvOpenhomeOrgTransport1Cpp::DoRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respRepeat;
    DvInvocationStd invocation(aInvocation);
    Repeat(invocation, respRepeat);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterRepeat(aInvocation, "Repeat");
    respWriterRepeat.Write(respRepeat);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respShuffle;
    DvInvocationStd invocation(aInvocation);
    Shuffle(invocation, respShuffle);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterShuffle(aInvocation, "Shuffle");
    respWriterShuffle.Write(respShuffle);
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

void DvProviderAvOpenhomeOrgTransport1Cpp::Next(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Previous(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SetRepeat(IDvInvocationStd& /*aInvocation*/, uint32_t /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SetShuffle(IDvInvocationStd& /*aInvocation*/, uint32_t /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondAbsolute(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, uint32_t /*aSecondsAbsolute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondRelative(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, int32_t /*aSecondsRelative*/)
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

void DvProviderAvOpenhomeOrgTransport1Cpp::ModeInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aNextAvailable*/, bool& /*aPreviousAvailable*/, bool& /*aRepeatAvailable*/, bool& /*aShuffleAvailable*/)
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

void DvProviderAvOpenhomeOrgTransport1Cpp::Repeat(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::Shuffle(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aShuffle*/)
{
    ASSERTS();
}

