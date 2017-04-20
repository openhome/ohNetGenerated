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

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyNextAvailable(TBool aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    return SetPropertyBool(*iPropertyNextAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyNextAvailable(TBool& aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    aValue = iPropertyNextAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyPrevAvailable(TBool aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    return SetPropertyBool(*iPropertyPrevAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyPrevAvailable(TBool& aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    aValue = iPropertyPrevAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyRepeatAvailable(TBool aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    return SetPropertyBool(*iPropertyRepeatAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyRepeatAvailable(TBool& aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    aValue = iPropertyRepeatAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyRandomAvailable(TBool aValue)
{
    ASSERT(iPropertyRandomAvailable != NULL);
    return SetPropertyBool(*iPropertyRandomAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyRandomAvailable(TBool& aValue)
{
    ASSERT(iPropertyRandomAvailable != NULL);
    aValue = iPropertyRandomAvailable->Value();
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

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertySeekable(TBool aValue)
{
    ASSERT(iPropertySeekable != NULL);
    return SetPropertyBool(*iPropertySeekable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertySeekable(TBool& aValue)
{
    ASSERT(iPropertySeekable != NULL);
    aValue = iPropertySeekable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyPausable(TBool aValue)
{
    ASSERT(iPropertyPausable != NULL);
    return SetPropertyBool(*iPropertyPausable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyPausable(TBool& aValue)
{
    ASSERT(iPropertyPausable != NULL);
    aValue = iPropertyPausable->Value();
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

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyRandom(TBool aValue)
{
    ASSERT(iPropertyRandom != NULL);
    return SetPropertyBool(*iPropertyRandom, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyRandom(TBool& aValue)
{
    ASSERT(iPropertyRandom != NULL);
    aValue = iPropertyRandom->Value();
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
    iPropertyNextAvailable = NULL;
    iPropertyPrevAvailable = NULL;
    iPropertyRepeatAvailable = NULL;
    iPropertyRandomAvailable = NULL;
    iPropertyStreamId = NULL;
    iPropertySeekable = NULL;
    iPropertyPausable = NULL;
    iPropertyTransportState = NULL;
    iPropertyRepeat = NULL;
    iPropertyRandom = NULL;
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyNextAvailable()
{
    iPropertyNextAvailable = new PropertyBool(new ParameterBool("NextAvailable"));
    iService->AddProperty(iPropertyNextAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyPrevAvailable()
{
    iPropertyPrevAvailable = new PropertyBool(new ParameterBool("PrevAvailable"));
    iService->AddProperty(iPropertyPrevAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyRepeatAvailable()
{
    iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
    iService->AddProperty(iPropertyRepeatAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyRandomAvailable()
{
    iPropertyRandomAvailable = new PropertyBool(new ParameterBool("RandomAvailable"));
    iService->AddProperty(iPropertyRandomAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertySeekable()
{
    iPropertySeekable = new PropertyBool(new ParameterBool("Seekable"));
    iService->AddProperty(iPropertySeekable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyPausable()
{
    iPropertyPausable = new PropertyBool(new ParameterBool("Pausable"));
    iService->AddProperty(iPropertyPausable); // passes ownership
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
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyRandom()
{
    iPropertyRandom = new PropertyBool(new ParameterBool("Random"));
    iService->AddProperty(iPropertyRandom); // passes ownership
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

void DvProviderAvOpenhomeOrgTransport1::EnableActionNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionPrev()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Prev");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoPrev);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterBool("Repeat"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetRandom()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRandom");
    action->AddInputParameter(new ParameterBool("Random"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSetRandom);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSeekSecondsAbsolute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondsAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSeekSecondsAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSeekSecondsRelative()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondsRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSeekSecondsRelative);
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
    action->AddOutputParameter(new ParameterRelated("NextAvailable", *iPropertyNextAvailable));
    action->AddOutputParameter(new ParameterRelated("PrevAvailable", *iPropertyPrevAvailable));
    action->AddOutputParameter(new ParameterRelated("RepeatAvailable", *iPropertyRepeatAvailable));
    action->AddOutputParameter(new ParameterRelated("RandomAvailable", *iPropertyRandomAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionStreamInfo()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("Seekable", *iPropertySeekable));
    action->AddOutputParameter(new ParameterRelated("Pausable", *iPropertyPausable));
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

void DvProviderAvOpenhomeOrgTransport1::EnableActionRandom()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Random");
    action->AddOutputParameter(new ParameterRelated("Random", *iPropertyRandom));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoRandom);
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

void DvProviderAvOpenhomeOrgTransport1::DoNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Next(invocation, StreamId);
}

void DvProviderAvOpenhomeOrgTransport1::DoPrev(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Prev(invocation, StreamId);
}

void DvProviderAvOpenhomeOrgTransport1::DoSetRepeat(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool Repeat = aInvocation.InvocationReadBool("Repeat");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRepeat(invocation, Repeat);
}

void DvProviderAvOpenhomeOrgTransport1::DoSetRandom(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool Random = aInvocation.InvocationReadBool("Random");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetRandom(invocation, Random);
}

void DvProviderAvOpenhomeOrgTransport1::DoSeekSecondsAbsolute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TUint SecondsAbsolute = aInvocation.InvocationReadUint("SecondsAbsolute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondsAbsolute(invocation, StreamId, SecondsAbsolute);
}

void DvProviderAvOpenhomeOrgTransport1::DoSeekSecondsRelative(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TInt SecondsRelative = aInvocation.InvocationReadInt("SecondsRelative");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SeekSecondsRelative(invocation, StreamId, SecondsRelative);
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
    DviInvocationResponseBool respNextAvailable(aInvocation, "NextAvailable");
    DviInvocationResponseBool respPrevAvailable(aInvocation, "PrevAvailable");
    DviInvocationResponseBool respRepeatAvailable(aInvocation, "RepeatAvailable");
    DviInvocationResponseBool respRandomAvailable(aInvocation, "RandomAvailable");
    ModeInfo(invocation, respNextAvailable, respPrevAvailable, respRepeatAvailable, respRandomAvailable);
}

void DvProviderAvOpenhomeOrgTransport1::DoStreamInfo(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    DviInvocationResponseBool respSeekable(aInvocation, "Seekable");
    DviInvocationResponseBool respPausable(aInvocation, "Pausable");
    StreamInfo(invocation, respStreamId, respSeekable, respPausable);
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
    DviInvocationResponseBool respRepeat(aInvocation, "Repeat");
    Repeat(invocation, respRepeat);
}

void DvProviderAvOpenhomeOrgTransport1::DoRandom(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respRandom(aInvocation, "Random");
    Random(invocation, respRandom);
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

void DvProviderAvOpenhomeOrgTransport1::Next(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Prev(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SetRepeat(IDvInvocation& /*aResponse*/, TBool /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SetRandom(IDvInvocation& /*aResponse*/, TBool /*aRandom*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SeekSecondsAbsolute(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/, TUint /*aSecondsAbsolute*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::SeekSecondsRelative(IDvInvocation& /*aResponse*/, TUint /*aStreamId*/, TInt /*aSecondsRelative*/)
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

void DvProviderAvOpenhomeOrgTransport1::ModeInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aNextAvailable*/, IDvInvocationResponseBool& /*aPrevAvailable*/, IDvInvocationResponseBool& /*aRepeatAvailable*/, IDvInvocationResponseBool& /*aRandomAvailable*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::StreamInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aStreamId*/, IDvInvocationResponseBool& /*aSeekable*/, IDvInvocationResponseBool& /*aPausable*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::StreamId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aStreamId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Repeat(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Random(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aRandom*/)
{
    ASSERTS();
}

