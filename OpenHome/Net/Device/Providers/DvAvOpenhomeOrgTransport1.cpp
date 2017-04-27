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

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyPreviousAvailable(TBool aValue)
{
    ASSERT(iPropertyPreviousAvailable != NULL);
    return SetPropertyBool(*iPropertyPreviousAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyPreviousAvailable(TBool& aValue)
{
    ASSERT(iPropertyPreviousAvailable != NULL);
    aValue = iPropertyPreviousAvailable->Value();
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

TBool DvProviderAvOpenhomeOrgTransport1::SetPropertyShuffleAvailable(TBool aValue)
{
    ASSERT(iPropertyShuffleAvailable != NULL);
    return SetPropertyBool(*iPropertyShuffleAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1::GetPropertyShuffleAvailable(TBool& aValue)
{
    ASSERT(iPropertyShuffleAvailable != NULL);
    aValue = iPropertyShuffleAvailable->Value();
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

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyPreviousAvailable()
{
    iPropertyPreviousAvailable = new PropertyBool(new ParameterBool("PreviousAvailable"));
    iService->AddProperty(iPropertyPreviousAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyRepeatAvailable()
{
    iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
    iService->AddProperty(iPropertyRepeatAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1::EnablePropertyShuffleAvailable()
{
    iPropertyShuffleAvailable = new PropertyBool(new ParameterBool("ShuffleAvailable"));
    iService->AddProperty(iPropertyShuffleAvailable); // passes ownership
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

void DvProviderAvOpenhomeOrgTransport1::EnableActionNext()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionPrevious()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Previous");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetRepeat()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterUint("Repeat"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1::EnableActionSetShuffle()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterUint("Shuffle"));
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
    action->AddOutputParameter(new ParameterRelated("NextAvailable", *iPropertyNextAvailable));
    action->AddOutputParameter(new ParameterRelated("PreviousAvailable", *iPropertyPreviousAvailable));
    action->AddOutputParameter(new ParameterRelated("RepeatAvailable", *iPropertyRepeatAvailable));
    action->AddOutputParameter(new ParameterRelated("ShuffleAvailable", *iPropertyShuffleAvailable));
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

void DvProviderAvOpenhomeOrgTransport1::DoNext(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Next(invocation);
}

void DvProviderAvOpenhomeOrgTransport1::DoPrevious(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Previous(invocation);
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
    DviInvocationResponseBool respNextAvailable(aInvocation, "NextAvailable");
    DviInvocationResponseBool respPreviousAvailable(aInvocation, "PreviousAvailable");
    DviInvocationResponseBool respRepeatAvailable(aInvocation, "RepeatAvailable");
    DviInvocationResponseBool respShuffleAvailable(aInvocation, "ShuffleAvailable");
    ModeInfo(invocation, respNextAvailable, respPreviousAvailable, respRepeatAvailable, respShuffleAvailable);
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

void DvProviderAvOpenhomeOrgTransport1::Next(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Previous(IDvInvocation& /*aResponse*/)
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

void DvProviderAvOpenhomeOrgTransport1::ModeInfo(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aNextAvailable*/, IDvInvocationResponseBool& /*aPreviousAvailable*/, IDvInvocationResponseBool& /*aRepeatAvailable*/, IDvInvocationResponseBool& /*aShuffleAvailable*/)
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

void DvProviderAvOpenhomeOrgTransport1::Repeat(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aRepeat*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgTransport1::Shuffle(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aShuffle*/)
{
    ASSERTS();
}

