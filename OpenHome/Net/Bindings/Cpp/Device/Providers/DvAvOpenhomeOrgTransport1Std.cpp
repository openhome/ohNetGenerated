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

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanSkipNext(bool aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    return SetPropertyBool(*iPropertyCanSkipNext, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanSkipNext(bool& aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    aValue = iPropertyCanSkipNext->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanSkipPrevious(bool aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    return SetPropertyBool(*iPropertyCanSkipPrevious, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanSkipPrevious(bool& aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    aValue = iPropertyCanSkipPrevious->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanRepeat(bool aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    return SetPropertyBool(*iPropertyCanRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanRepeat(bool& aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    aValue = iPropertyCanRepeat->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanShuffle(bool aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    return SetPropertyBool(*iPropertyCanShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanShuffle(bool& aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    aValue = iPropertyCanShuffle->Value();
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

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanSeek(bool aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    return SetPropertyBool(*iPropertyCanSeek, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanSeek(bool& aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    aValue = iPropertyCanSeek->Value();
}

bool DvProviderAvOpenhomeOrgTransport1Cpp::SetPropertyCanPause(bool aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    return SetPropertyBool(*iPropertyCanPause, aValue);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::GetPropertyCanPause(bool& aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    aValue = iPropertyCanPause->Value();
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
    iPropertyCanSkipNext = NULL;
    iPropertyCanSkipPrevious = NULL;
    iPropertyCanRepeat = NULL;
    iPropertyCanShuffle = NULL;
    iPropertyStreamId = NULL;
    iPropertyCanSeek = NULL;
    iPropertyCanPause = NULL;
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyShuffle = NULL;
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanSkipNext()
{
    iPropertyCanSkipNext = new PropertyBool(new ParameterBool("CanSkipNext"));
    iService->AddProperty(iPropertyCanSkipNext); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanSkipPrevious()
{
    iPropertyCanSkipPrevious = new PropertyBool(new ParameterBool("CanSkipPrevious"));
    iService->AddProperty(iPropertyCanSkipPrevious); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanRepeat()
{
    iPropertyCanRepeat = new PropertyBool(new ParameterBool("CanRepeat"));
    iService->AddProperty(iPropertyCanRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanShuffle()
{
    iPropertyCanShuffle = new PropertyBool(new ParameterBool("CanShuffle"));
    iService->AddProperty(iPropertyCanShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanSeek()
{
    iPropertyCanSeek = new PropertyBool(new ParameterBool("CanSeek"));
    iService->AddProperty(iPropertyCanSeek); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnablePropertyCanPause()
{
    iPropertyCanPause = new PropertyBool(new ParameterBool("CanPause"));
    iService->AddProperty(iPropertyCanPause); // passes ownership
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

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSkipNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipNext");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSkipNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSkipPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipPrevious");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSkipPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSetRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSetShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionSeekSecondRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondRelative"));
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
    action->AddOutputParameter(new ParameterRelated("CanSkipNext", *iPropertyCanSkipNext));
    action->AddOutputParameter(new ParameterRelated("CanSkipPrevious", *iPropertyCanSkipPrevious));
    action->AddOutputParameter(new ParameterRelated("CanRepeat", *iPropertyCanRepeat));
    action->AddOutputParameter(new ParameterRelated("CanShuffle", *iPropertyCanShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1Cpp::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1Cpp::EnableActionStreamInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("CanSeek", *iPropertyCanSeek));
    action->AddOutputParameter(new ParameterRelated("CanPause", *iPropertyCanPause));
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

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSkipNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SkipNext(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSkipPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SkipPrevious(invocation);
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
    uint32_t SecondAbsolute = aInvocation.InvocationReadUint("SecondAbsolute");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondAbsolute(invocation, StreamId, SecondAbsolute);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t StreamId = aInvocation.InvocationReadUint("StreamId");
    int32_t SecondRelative = aInvocation.InvocationReadInt("SecondRelative");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SeekSecondRelative(invocation, StreamId, SecondRelative);
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
    bool respCanSkipNext;
    bool respCanSkipPrevious;
    bool respCanRepeat;
    bool respCanShuffle;
    DvInvocationStd invocation(aInvocation);
    ModeInfo(invocation, respCanSkipNext, respCanSkipPrevious, respCanRepeat, respCanShuffle);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterCanSkipNext(aInvocation, "CanSkipNext");
    respWriterCanSkipNext.Write(respCanSkipNext);
    DviInvocationResponseBool respWriterCanSkipPrevious(aInvocation, "CanSkipPrevious");
    respWriterCanSkipPrevious.Write(respCanSkipPrevious);
    DviInvocationResponseBool respWriterCanRepeat(aInvocation, "CanRepeat");
    respWriterCanRepeat.Write(respCanRepeat);
    DviInvocationResponseBool respWriterCanShuffle(aInvocation, "CanShuffle");
    respWriterCanShuffle.Write(respCanShuffle);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::DoStreamInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respStreamId;
    bool respCanSeek;
    bool respCanPause;
    DvInvocationStd invocation(aInvocation);
    StreamInfo(invocation, respStreamId, respCanSeek, respCanPause);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterStreamId(aInvocation, "StreamId");
    respWriterStreamId.Write(respStreamId);
    DviInvocationResponseBool respWriterCanSeek(aInvocation, "CanSeek");
    respWriterCanSeek.Write(respCanSeek);
    DviInvocationResponseBool respWriterCanPause(aInvocation, "CanPause");
    respWriterCanPause.Write(respCanPause);
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

void DvProviderAvOpenhomeOrgTransport1Cpp::SkipNext(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SkipPrevious(IDvInvocationStd& /*aInvocation*/)
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

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondAbsolute(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, uint32_t /*aSecondAbsolute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::SeekSecondRelative(IDvInvocationStd& /*aInvocation*/, uint32_t /*aStreamId*/, int32_t /*aSecondRelative*/)
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

void DvProviderAvOpenhomeOrgTransport1Cpp::ModeInfo(IDvInvocationStd& /*aInvocation*/, bool& /*aCanSkipNext*/, bool& /*aCanSkipPrevious*/, bool& /*aCanRepeat*/, bool& /*aCanShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1Cpp::StreamInfo(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aStreamId*/, bool& /*aCanSeek*/, bool& /*aCanPause*/)
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

