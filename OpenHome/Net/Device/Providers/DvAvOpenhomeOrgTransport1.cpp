#include "DvAvOpenhomeOrgTransport1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyModes(const Brx& aValue)
{
    ASSERT(iPropertyModes != NULL);
    return SetPropertyString(*iPropertyModes, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyModes(Brhz& aValue)
{
    ASSERT(iPropertyModes != NULL);
    aValue.Set(iPropertyModes->Value());
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanSkipNext(TBool aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    return SetPropertyBool(*iPropertyCanSkipNext, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanSkipNext(TBool& aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    aValue = iPropertyCanSkipNext->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanSkipPrevious(TBool aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    return SetPropertyBool(*iPropertyCanSkipPrevious, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanSkipPrevious(TBool& aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    aValue = iPropertyCanSkipPrevious->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanRepeat(TBool aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    return SetPropertyBool(*iPropertyCanRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanRepeat(TBool& aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    aValue = iPropertyCanRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanShuffle(TBool aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    return SetPropertyBool(*iPropertyCanShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanShuffle(TBool& aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    aValue = iPropertyCanShuffle->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyStreamId(TUint aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    return SetPropertyUint(*iPropertyStreamId, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyStreamId(TUint& aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    aValue = iPropertyStreamId->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanSeek(TBool aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    return SetPropertyBool(*iPropertyCanSeek, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanSeek(TBool& aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    aValue = iPropertyCanSeek->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyCanPause(TBool aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    return SetPropertyBool(*iPropertyCanPause, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyCanPause(TBool& aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    aValue = iPropertyCanPause->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyRepeat(TUint aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyUint(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyRepeat(TUint& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyShuffle(TUint aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyUint(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyShuffle(TUint& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

DvProviderAvOpenhomeOrgTransport1::DvProviderAvOpenhomeOrgTransport1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Transport", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgTransport1::DvProviderAvOpenhomeOrgTransport1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Transport", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgTransport1::Construct()
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

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanSkipNext()
{
    iPropertyCanSkipNext = new PropertyBool(new ParameterBool("CanSkipNext"));
    iService->AddProperty(iPropertyCanSkipNext); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanSkipPrevious()
{
    iPropertyCanSkipPrevious = new PropertyBool(new ParameterBool("CanSkipPrevious"));
    iService->AddProperty(iPropertyCanSkipPrevious); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanRepeat()
{
    iPropertyCanRepeat = new PropertyBool(new ParameterBool("CanRepeat"));
    iService->AddProperty(iPropertyCanRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanShuffle()
{
    iPropertyCanShuffle = new PropertyBool(new ParameterBool("CanShuffle"));
    iService->AddProperty(iPropertyCanShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanSeek()
{
    iPropertyCanSeek = new PropertyBool(new ParameterBool("CanSeek"));
    iService->AddProperty(iPropertyCanSeek); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyCanPause()
{
    iPropertyCanPause = new PropertyBool(new ParameterBool("CanPause"));
    iService->AddProperty(iPropertyCanPause); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyUint(new ParameterUint("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyUint(new ParameterUint("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionPlayAs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayAs");
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Command"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoPlayAs);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionPlay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionPause()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionStop()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSkipNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipNext");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSkipNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSkipPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipPrevious");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSkipPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSeekSecondAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSeekSecondRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionTransportState()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("State", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionModes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Modes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionModeInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ModeInfo");
    action->AddOutputParameter(new ParameterRelated("CanSkipNext", *iPropertyCanSkipNext));
    action->AddOutputParameter(new ParameterRelated("CanSkipPrevious", *iPropertyCanSkipPrevious));
    action->AddOutputParameter(new ParameterRelated("CanRepeat", *iPropertyCanRepeat));
    action->AddOutputParameter(new ParameterRelated("CanShuffle", *iPropertyCanShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionStreamInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("CanSeek", *iPropertyCanSeek));
    action->AddOutputParameter(new ParameterRelated("CanPause", *iPropertyCanPause));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoStreamInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionStreamId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamId");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoStreamId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::DoPlayAs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Mode;
    aInvocation.InvocationReadString("Mode", Mode);
    Brhz Command;
    aInvocation.InvocationReadString("Command", Command);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PlayAs(invocation, Mode, Command);
}

void DvProviderAvOpenhomeOrgTransport1::DoPlay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Play(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoPause(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Pause(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoStop(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Stop(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoSkipNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SkipNext(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoSkipPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SkipPrevious(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoSetRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Repeat = aInvocation.InvocationReadUint("Repeat");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRepeat(invocation, Repeat);
}

void DvProviderAvOpenhomeOrgTransport1::DoSetShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Shuffle = aInvocation.InvocationReadUint("Shuffle");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetShuffle(invocation, Shuffle);
}

void DvProviderAvOpenhomeOrgTransport1::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TUint SecondAbsolute = aInvocation.InvocationReadUint("SecondAbsolute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondAbsolute(invocation, StreamId, SecondAbsolute);
}

void DvProviderAvOpenhomeOrgTransport1::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TInt SecondRelative = aInvocation.InvocationReadInt("SecondRelative");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondRelative(invocation, StreamId, SecondRelative);
}

void DvProviderAvOpenhomeOrgTransport1::DoTransportState(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respState(aInvocation, "State");
    TransportState(invocation, respState);
}

void DvProviderAvOpenhomeOrgTransport1::DoModes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respModes(aInvocation, "Modes");
    Modes(invocation, respModes);
}

void DvProviderAvOpenhomeOrgTransport1::DoModeInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respCanSkipNext(aInvocation, "CanSkipNext");
    DviInvocationResponseBool respCanSkipPrevious(aInvocation, "CanSkipPrevious");
    DviInvocationResponseBool respCanRepeat(aInvocation, "CanRepeat");
    DviInvocationResponseBool respCanShuffle(aInvocation, "CanShuffle");
    ModeInfo(invocation, respCanSkipNext, respCanSkipPrevious, respCanRepeat, respCanShuffle);
}

void DvProviderAvOpenhomeOrgTransport1::DoStreamInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    DviInvocationResponseBool respCanSeek(aInvocation, "CanSeek");
    DviInvocationResponseBool respCanPause(aInvocation, "CanPause");
    StreamInfo(invocation, respStreamId, respCanSeek, respCanPause);
}

void DvProviderAvOpenhomeOrgTransport1::DoStreamId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    StreamId(invocation, respStreamId);
}

void DvProviderAvOpenhomeOrgTransport1::DoRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respRepeat(aInvocation, "Repeat");
    Repeat(invocation, respRepeat);
}

void DvProviderAvOpenhomeOrgTransport1::DoShuffle(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respShuffle(aInvocation, "Shuffle");
    Shuffle(invocation, respShuffle);
}

void DvProviderAvOpenhomeOrgTransport1::PlayAs(IDvInvocation& /*aResponse*/, const Brx& /*aMode*/, const Brx& /*aCommand*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Play(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Pause(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Stop(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SkipNext(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SkipPrevious(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SetRepeat(IDvInvocation& /*aResponse*/, TUint /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SetShuffle(IDvInvocation& /*aResponse*/, TUint /*aShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SeekSecondAbsolute(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/, TUint /*aSecondAbsolute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SeekSecondRelative(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/, TInt /*aSecondRelative*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::TransportState(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aState*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Modes(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aModes*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::ModeInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aCanSkipNext*/, IDvInvocationResponseBool& /*aCanSkipPrevious*/, IDvInvocationResponseBool& /*aCanRepeat*/, IDvInvocationResponseBool& /*aCanShuffle*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::StreamInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aStreamId*/, IDvInvocationResponseBool& /*aCanSeek*/, IDvInvocationResponseBool& /*aCanPause*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::StreamId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Repeat(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Shuffle(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aShuffle*/)
{
    ASSERTS();
}

