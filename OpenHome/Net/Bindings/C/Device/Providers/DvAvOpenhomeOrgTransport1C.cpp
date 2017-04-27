#include "DvAvOpenhomeOrgTransport1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgTransport1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgTransport1C(DvDeviceC aDevice);
    TBool SetPropertyModes(const Brx& aValue);
    void GetPropertyModes(Brhz& aValue);
    TBool SetPropertyCanSkipNext(TBool aValue);
    void GetPropertyCanSkipNext(TBool& aValue);
    TBool SetPropertyCanSkipPrevious(TBool aValue);
    void GetPropertyCanSkipPrevious(TBool& aValue);
    TBool SetPropertyCanRepeat(TBool aValue);
    void GetPropertyCanRepeat(TBool& aValue);
    TBool SetPropertyCanShuffle(TBool aValue);
    void GetPropertyCanShuffle(TBool& aValue);
    TBool SetPropertyStreamId(TUint aValue);
    void GetPropertyStreamId(TUint& aValue);
    TBool SetPropertyCanSeek(TBool aValue);
    void GetPropertyCanSeek(TBool& aValue);
    TBool SetPropertyCanPause(TBool aValue);
    void GetPropertyCanPause(TBool& aValue);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TUint aValue);
    void GetPropertyRepeat(TUint& aValue);
    TBool SetPropertyShuffle(TUint aValue);
    void GetPropertyShuffle(TUint& aValue);
    void EnablePropertyModes();
    void EnablePropertyCanSkipNext();
    void EnablePropertyCanSkipPrevious();
    void EnablePropertyCanRepeat();
    void EnablePropertyCanShuffle();
    void EnablePropertyStreamId();
    void EnablePropertyCanSeek();
    void EnablePropertyCanPause();
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyShuffle();
    void EnableActionPlayAs(CallbackTransport1PlayAs aCallback, void* aPtr);
    void EnableActionPlay(CallbackTransport1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackTransport1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackTransport1Stop aCallback, void* aPtr);
    void EnableActionSkipNext(CallbackTransport1SkipNext aCallback, void* aPtr);
    void EnableActionSkipPrevious(CallbackTransport1SkipPrevious aCallback, void* aPtr);
    void EnableActionSetRepeat(CallbackTransport1SetRepeat aCallback, void* aPtr);
    void EnableActionSetShuffle(CallbackTransport1SetShuffle aCallback, void* aPtr);
    void EnableActionSeekSecondAbsolute(CallbackTransport1SeekSecondAbsolute aCallback, void* aPtr);
    void EnableActionSeekSecondRelative(CallbackTransport1SeekSecondRelative aCallback, void* aPtr);
    void EnableActionTransportState(CallbackTransport1TransportState aCallback, void* aPtr);
    void EnableActionModes(CallbackTransport1Modes aCallback, void* aPtr);
    void EnableActionModeInfo(CallbackTransport1ModeInfo aCallback, void* aPtr);
    void EnableActionStreamInfo(CallbackTransport1StreamInfo aCallback, void* aPtr);
    void EnableActionStreamId(CallbackTransport1StreamId aCallback, void* aPtr);
    void EnableActionRepeat(CallbackTransport1Repeat aCallback, void* aPtr);
    void EnableActionShuffle(CallbackTransport1Shuffle aCallback, void* aPtr);
private:
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
    CallbackTransport1PlayAs iCallbackPlayAs;
    void* iPtrPlayAs;
    CallbackTransport1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackTransport1Pause iCallbackPause;
    void* iPtrPause;
    CallbackTransport1Stop iCallbackStop;
    void* iPtrStop;
    CallbackTransport1SkipNext iCallbackSkipNext;
    void* iPtrSkipNext;
    CallbackTransport1SkipPrevious iCallbackSkipPrevious;
    void* iPtrSkipPrevious;
    CallbackTransport1SetRepeat iCallbackSetRepeat;
    void* iPtrSetRepeat;
    CallbackTransport1SetShuffle iCallbackSetShuffle;
    void* iPtrSetShuffle;
    CallbackTransport1SeekSecondAbsolute iCallbackSeekSecondAbsolute;
    void* iPtrSeekSecondAbsolute;
    CallbackTransport1SeekSecondRelative iCallbackSeekSecondRelative;
    void* iPtrSeekSecondRelative;
    CallbackTransport1TransportState iCallbackTransportState;
    void* iPtrTransportState;
    CallbackTransport1Modes iCallbackModes;
    void* iPtrModes;
    CallbackTransport1ModeInfo iCallbackModeInfo;
    void* iPtrModeInfo;
    CallbackTransport1StreamInfo iCallbackStreamInfo;
    void* iPtrStreamInfo;
    CallbackTransport1StreamId iCallbackStreamId;
    void* iPtrStreamId;
    CallbackTransport1Repeat iCallbackRepeat;
    void* iPtrRepeat;
    CallbackTransport1Shuffle iCallbackShuffle;
    void* iPtrShuffle;
    PropertyString* iPropertyModes;
    PropertyBool* iPropertyCanSkipNext;
    PropertyBool* iPropertyCanSkipPrevious;
    PropertyBool* iPropertyCanRepeat;
    PropertyBool* iPropertyCanShuffle;
    PropertyUint* iPropertyStreamId;
    PropertyBool* iPropertyCanSeek;
    PropertyBool* iPropertyCanPause;
    PropertyString* iPropertyTransportState;
    PropertyUint* iPropertyRepeat;
    PropertyUint* iPropertyShuffle;
};

DvProviderAvOpenhomeOrgTransport1C::DvProviderAvOpenhomeOrgTransport1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Transport", 1)
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

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyModes(const Brx& aValue)
{
    ASSERT(iPropertyModes != NULL);
    return SetPropertyString(*iPropertyModes, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyModes(Brhz& aValue)
{
    ASSERT(iPropertyModes != NULL);
    aValue.Set(iPropertyModes->Value());
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanSkipNext(TBool aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    return SetPropertyBool(*iPropertyCanSkipNext, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanSkipNext(TBool& aValue)
{
    ASSERT(iPropertyCanSkipNext != NULL);
    aValue = iPropertyCanSkipNext->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanSkipPrevious(TBool aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    return SetPropertyBool(*iPropertyCanSkipPrevious, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanSkipPrevious(TBool& aValue)
{
    ASSERT(iPropertyCanSkipPrevious != NULL);
    aValue = iPropertyCanSkipPrevious->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanRepeat(TBool aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    return SetPropertyBool(*iPropertyCanRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanRepeat(TBool& aValue)
{
    ASSERT(iPropertyCanRepeat != NULL);
    aValue = iPropertyCanRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanShuffle(TBool aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    return SetPropertyBool(*iPropertyCanShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanShuffle(TBool& aValue)
{
    ASSERT(iPropertyCanShuffle != NULL);
    aValue = iPropertyCanShuffle->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyStreamId(TUint aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    return SetPropertyUint(*iPropertyStreamId, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyStreamId(TUint& aValue)
{
    ASSERT(iPropertyStreamId != NULL);
    aValue = iPropertyStreamId->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanSeek(TBool aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    return SetPropertyBool(*iPropertyCanSeek, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanSeek(TBool& aValue)
{
    ASSERT(iPropertyCanSeek != NULL);
    aValue = iPropertyCanSeek->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyCanPause(TBool aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    return SetPropertyBool(*iPropertyCanPause, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyCanPause(TBool& aValue)
{
    ASSERT(iPropertyCanPause != NULL);
    aValue = iPropertyCanPause->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyTransportState(const Brx& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    return SetPropertyString(*iPropertyTransportState, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyTransportState(Brhz& aValue)
{
    ASSERT(iPropertyTransportState != NULL);
    aValue.Set(iPropertyTransportState->Value());
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyRepeat(TUint aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyUint(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyRepeat(TUint& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyShuffle(TUint aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    return SetPropertyUint(*iPropertyShuffle, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyShuffle(TUint& aValue)
{
    ASSERT(iPropertyShuffle != NULL);
    aValue = iPropertyShuffle->Value();
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanSkipNext()
{
    iPropertyCanSkipNext = new PropertyBool(new ParameterBool("CanSkipNext"));
    iService->AddProperty(iPropertyCanSkipNext); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanSkipPrevious()
{
    iPropertyCanSkipPrevious = new PropertyBool(new ParameterBool("CanSkipPrevious"));
    iService->AddProperty(iPropertyCanSkipPrevious); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanRepeat()
{
    iPropertyCanRepeat = new PropertyBool(new ParameterBool("CanRepeat"));
    iService->AddProperty(iPropertyCanRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanShuffle()
{
    iPropertyCanShuffle = new PropertyBool(new ParameterBool("CanShuffle"));
    iService->AddProperty(iPropertyCanShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanSeek()
{
    iPropertyCanSeek = new PropertyBool(new ParameterBool("CanSeek"));
    iService->AddProperty(iPropertyCanSeek); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyCanPause()
{
    iPropertyCanPause = new PropertyBool(new ParameterBool("CanPause"));
    iService->AddProperty(iPropertyCanPause); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyTransportState()
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

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyRepeat()
{
    iPropertyRepeat = new PropertyUint(new ParameterUint("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyShuffle()
{
    iPropertyShuffle = new PropertyUint(new ParameterUint("Shuffle"));
    iService->AddProperty(iPropertyShuffle); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionPlayAs(CallbackTransport1PlayAs aCallback, void* aPtr)
{
    iCallbackPlayAs = aCallback;
    iPtrPlayAs = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayAs");
    action->AddInputParameter(new ParameterString("Mode"));
    action->AddInputParameter(new ParameterString("Command"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoPlayAs);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionPlay(CallbackTransport1Play aCallback, void* aPtr)
{
    iCallbackPlay = aCallback;
    iPtrPlay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Play");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoPlay);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionPause(CallbackTransport1Pause aCallback, void* aPtr)
{
    iCallbackPause = aCallback;
    iPtrPause = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Pause");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoPause);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionStop(CallbackTransport1Stop aCallback, void* aPtr)
{
    iCallbackStop = aCallback;
    iPtrStop = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Stop");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoStop);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSkipNext(CallbackTransport1SkipNext aCallback, void* aPtr)
{
    iCallbackSkipNext = aCallback;
    iPtrSkipNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipNext");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSkipNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSkipPrevious(CallbackTransport1SkipPrevious aCallback, void* aPtr)
{
    iCallbackSkipPrevious = aCallback;
    iPtrSkipPrevious = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SkipPrevious");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSkipPrevious);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSetRepeat(CallbackTransport1SetRepeat aCallback, void* aPtr)
{
    iCallbackSetRepeat = aCallback;
    iPtrSetRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSetShuffle(CallbackTransport1SetShuffle aCallback, void* aPtr)
{
    iCallbackSetShuffle = aCallback;
    iPtrSetShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetShuffle");
    action->AddInputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSetShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSeekSecondAbsolute(CallbackTransport1SeekSecondAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondAbsolute = aCallback;
    iPtrSeekSecondAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSeekSecondRelative(CallbackTransport1SeekSecondRelative aCallback, void* aPtr)
{
    iCallbackSeekSecondRelative = aCallback;
    iPtrSeekSecondRelative = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondRelative);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionTransportState(CallbackTransport1TransportState aCallback, void* aPtr)
{
    iCallbackTransportState = aCallback;
    iPtrTransportState = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("TransportState");
    action->AddOutputParameter(new ParameterRelated("State", *iPropertyTransportState));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoTransportState);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionModes(CallbackTransport1Modes aCallback, void* aPtr)
{
    iCallbackModes = aCallback;
    iPtrModes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Modes");
    action->AddOutputParameter(new ParameterRelated("Modes", *iPropertyModes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoModes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionModeInfo(CallbackTransport1ModeInfo aCallback, void* aPtr)
{
    iCallbackModeInfo = aCallback;
    iPtrModeInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ModeInfo");
    action->AddOutputParameter(new ParameterRelated("CanSkipNext", *iPropertyCanSkipNext));
    action->AddOutputParameter(new ParameterRelated("CanSkipPrevious", *iPropertyCanSkipPrevious));
    action->AddOutputParameter(new ParameterRelated("CanRepeat", *iPropertyCanRepeat));
    action->AddOutputParameter(new ParameterRelated("CanShuffle", *iPropertyCanShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionStreamInfo(CallbackTransport1StreamInfo aCallback, void* aPtr)
{
    iCallbackStreamInfo = aCallback;
    iPtrStreamInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("CanSeek", *iPropertyCanSeek));
    action->AddOutputParameter(new ParameterRelated("CanPause", *iPropertyCanPause));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoStreamInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionStreamId(CallbackTransport1StreamId aCallback, void* aPtr)
{
    iCallbackStreamId = aCallback;
    iPtrStreamId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamId");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoStreamId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionRepeat(CallbackTransport1Repeat aCallback, void* aPtr)
{
    iCallbackRepeat = aCallback;
    iPtrRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Repeat");
    action->AddOutputParameter(new ParameterRelated("Repeat", *iPropertyRepeat));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionShuffle(CallbackTransport1Shuffle aCallback, void* aPtr)
{
    iCallbackShuffle = aCallback;
    iPtrShuffle = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Shuffle");
    action->AddOutputParameter(new ParameterRelated("Shuffle", *iPropertyShuffle));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoShuffle);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::DoPlayAs(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Mode;
    aInvocation.InvocationReadString("Mode", Mode);
    Brhz Command;
    aInvocation.InvocationReadString("Command", Command);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPlayAs != NULL);
    if (0 != iCallbackPlayAs(iPtrPlayAs, invocationC, invocationCPtr, (const char*)Mode.Ptr(), (const char*)Command.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoPlay(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPlay != NULL);
    if (0 != iCallbackPlay(iPtrPlay, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoPause(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPause != NULL);
    if (0 != iCallbackPause(iPtrPause, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoStop(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackStop != NULL);
    if (0 != iCallbackStop(iPtrStop, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSkipNext(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSkipNext != NULL);
    if (0 != iCallbackSkipNext(iPtrSkipNext, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSkipPrevious(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSkipPrevious != NULL);
    if (0 != iCallbackSkipPrevious(iPtrSkipPrevious, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSetRepeat(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Repeat = aInvocation.InvocationReadUint("Repeat");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRepeat != NULL);
    if (0 != iCallbackSetRepeat(iPtrSetRepeat, invocationC, invocationCPtr, Repeat)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSetShuffle(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Shuffle = aInvocation.InvocationReadUint("Shuffle");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetShuffle != NULL);
    if (0 != iCallbackSetShuffle(iPtrSetShuffle, invocationC, invocationCPtr, Shuffle)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondAbsolute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TUint SecondAbsolute = aInvocation.InvocationReadUint("SecondAbsolute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondAbsolute != NULL);
    if (0 != iCallbackSeekSecondAbsolute(iPtrSeekSecondAbsolute, invocationC, invocationCPtr, StreamId, SecondAbsolute)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondRelative(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TInt SecondRelative = aInvocation.InvocationReadInt("SecondRelative");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondRelative != NULL);
    if (0 != iCallbackSeekSecondRelative(iPtrSeekSecondRelative, invocationC, invocationCPtr, StreamId, SecondRelative)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoTransportState(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* State;
    ASSERT(iCallbackTransportState != NULL);
    if (0 != iCallbackTransportState(iPtrTransportState, invocationC, invocationCPtr, &State)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respState(aInvocation, "State");
    invocation.StartResponse();
    Brhz bufState((const TChar*)State);
    OhNetFreeExternal(State);
    respState.Write(bufState);
    respState.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoModes(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Modes;
    ASSERT(iCallbackModes != NULL);
    if (0 != iCallbackModes(iPtrModes, invocationC, invocationCPtr, &Modes)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respModes(aInvocation, "Modes");
    invocation.StartResponse();
    Brhz bufModes((const TChar*)Modes);
    OhNetFreeExternal(Modes);
    respModes.Write(bufModes);
    respModes.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoModeInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t CanSkipNext;
    uint32_t CanSkipPrevious;
    uint32_t CanRepeat;
    uint32_t CanShuffle;
    ASSERT(iCallbackModeInfo != NULL);
    if (0 != iCallbackModeInfo(iPtrModeInfo, invocationC, invocationCPtr, &CanSkipNext, &CanSkipPrevious, &CanRepeat, &CanShuffle)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respCanSkipNext(aInvocation, "CanSkipNext");
    DviInvocationResponseBool respCanSkipPrevious(aInvocation, "CanSkipPrevious");
    DviInvocationResponseBool respCanRepeat(aInvocation, "CanRepeat");
    DviInvocationResponseBool respCanShuffle(aInvocation, "CanShuffle");
    invocation.StartResponse();
    respCanSkipNext.Write((CanSkipNext!=0));
    respCanSkipPrevious.Write((CanSkipPrevious!=0));
    respCanRepeat.Write((CanRepeat!=0));
    respCanShuffle.Write((CanShuffle!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoStreamInfo(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t StreamId;
    uint32_t CanSeek;
    uint32_t CanPause;
    ASSERT(iCallbackStreamInfo != NULL);
    if (0 != iCallbackStreamInfo(iPtrStreamInfo, invocationC, invocationCPtr, &StreamId, &CanSeek, &CanPause)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    DviInvocationResponseBool respCanSeek(aInvocation, "CanSeek");
    DviInvocationResponseBool respCanPause(aInvocation, "CanPause");
    invocation.StartResponse();
    respStreamId.Write(StreamId);
    respCanSeek.Write((CanSeek!=0));
    respCanPause.Write((CanPause!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoStreamId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t StreamId;
    ASSERT(iCallbackStreamId != NULL);
    if (0 != iCallbackStreamId(iPtrStreamId, invocationC, invocationCPtr, &StreamId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    invocation.StartResponse();
    respStreamId.Write(StreamId);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoRepeat(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Repeat;
    ASSERT(iCallbackRepeat != NULL);
    if (0 != iCallbackRepeat(iPtrRepeat, invocationC, invocationCPtr, &Repeat)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respRepeat(aInvocation, "Repeat");
    invocation.StartResponse();
    respRepeat.Write(Repeat);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoShuffle(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Shuffle;
    ASSERT(iCallbackShuffle != NULL);
    if (0 != iCallbackShuffle(iPtrShuffle, invocationC, invocationCPtr, &Shuffle)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respShuffle(aInvocation, "Shuffle");
    invocation.StartResponse();
    respShuffle.Write(Shuffle);
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgTransport1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgTransport1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPlayAs(THandle aProvider, CallbackTransport1PlayAs aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionPlayAs(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPlay(THandle aProvider, CallbackTransport1Play aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionPlay(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPause(THandle aProvider, CallbackTransport1Pause aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionPause(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStop(THandle aProvider, CallbackTransport1Stop aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionStop(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSkipNext(THandle aProvider, CallbackTransport1SkipNext aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSkipNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSkipPrevious(THandle aProvider, CallbackTransport1SkipPrevious aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSkipPrevious(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetRepeat(THandle aProvider, CallbackTransport1SetRepeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSetRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetShuffle(THandle aProvider, CallbackTransport1SetShuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSetShuffle(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondAbsolute(THandle aProvider, CallbackTransport1SeekSecondAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSeekSecondAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondRelative(THandle aProvider, CallbackTransport1SeekSecondRelative aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSeekSecondRelative(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionTransportState(THandle aProvider, CallbackTransport1TransportState aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionTransportState(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionModes(THandle aProvider, CallbackTransport1Modes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionModes(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionModeInfo(THandle aProvider, CallbackTransport1ModeInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionModeInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStreamInfo(THandle aProvider, CallbackTransport1StreamInfo aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionStreamInfo(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionStreamId(THandle aProvider, CallbackTransport1StreamId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionStreamId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionRepeat(THandle aProvider, CallbackTransport1Repeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionShuffle(THandle aProvider, CallbackTransport1Shuffle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionShuffle(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyModes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyModes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyModes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyModes(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSkipNext(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanSkipNext((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSkipNext(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanSkipNext(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSkipPrevious(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanSkipPrevious((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSkipPrevious(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanSkipPrevious(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanShuffle((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanShuffle(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanShuffle(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyStreamId(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyStreamId(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyStreamId(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyStreamId(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanSeek(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanSeek((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanSeek(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanSeek(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyCanPause(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyCanPause((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyCanPause(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyCanPause(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyTransportState(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyTransportState(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyTransportState(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyTransportState(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyRepeat(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyRepeat(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyShuffle(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyShuffle(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyShuffle(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyShuffle(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyModes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyModes();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipNext(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanSkipNext();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSkipPrevious(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanSkipPrevious();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanShuffle();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyStreamId();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanSeek(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanSeek();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyCanPause(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyCanPause();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyShuffle(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyShuffle();
}

