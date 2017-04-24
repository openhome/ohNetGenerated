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
    TBool SetPropertyNextAvailable(TBool aValue);
    void GetPropertyNextAvailable(TBool& aValue);
    TBool SetPropertyPrevAvailable(TBool aValue);
    void GetPropertyPrevAvailable(TBool& aValue);
    TBool SetPropertyRepeatAvailable(TBool aValue);
    void GetPropertyRepeatAvailable(TBool& aValue);
    TBool SetPropertyRandomAvailable(TBool aValue);
    void GetPropertyRandomAvailable(TBool& aValue);
    TBool SetPropertyStreamId(TUint aValue);
    void GetPropertyStreamId(TUint& aValue);
    TBool SetPropertySeekable(TBool aValue);
    void GetPropertySeekable(TBool& aValue);
    TBool SetPropertyPausable(TBool aValue);
    void GetPropertyPausable(TBool& aValue);
    TBool SetPropertyTransportState(const Brx& aValue);
    void GetPropertyTransportState(Brhz& aValue);
    TBool SetPropertyRepeat(TBool aValue);
    void GetPropertyRepeat(TBool& aValue);
    TBool SetPropertyRandom(TBool aValue);
    void GetPropertyRandom(TBool& aValue);
    void EnablePropertyModes();
    void EnablePropertyNextAvailable();
    void EnablePropertyPrevAvailable();
    void EnablePropertyRepeatAvailable();
    void EnablePropertyRandomAvailable();
    void EnablePropertyStreamId();
    void EnablePropertySeekable();
    void EnablePropertyPausable();
    void EnablePropertyTransportState();
    void EnablePropertyRepeat();
    void EnablePropertyRandom();
    void EnableActionPlayAs(CallbackTransport1PlayAs aCallback, void* aPtr);
    void EnableActionPlay(CallbackTransport1Play aCallback, void* aPtr);
    void EnableActionPause(CallbackTransport1Pause aCallback, void* aPtr);
    void EnableActionStop(CallbackTransport1Stop aCallback, void* aPtr);
    void EnableActionNext(CallbackTransport1Next aCallback, void* aPtr);
    void EnableActionPrev(CallbackTransport1Prev aCallback, void* aPtr);
    void EnableActionSetRepeat(CallbackTransport1SetRepeat aCallback, void* aPtr);
    void EnableActionSetRandom(CallbackTransport1SetRandom aCallback, void* aPtr);
    void EnableActionSeekSecondsAbsolute(CallbackTransport1SeekSecondsAbsolute aCallback, void* aPtr);
    void EnableActionSeekSecondsRelative(CallbackTransport1SeekSecondsRelative aCallback, void* aPtr);
    void EnableActionTransportState(CallbackTransport1TransportState aCallback, void* aPtr);
    void EnableActionModes(CallbackTransport1Modes aCallback, void* aPtr);
    void EnableActionModeInfo(CallbackTransport1ModeInfo aCallback, void* aPtr);
    void EnableActionStreamInfo(CallbackTransport1StreamInfo aCallback, void* aPtr);
    void EnableActionStreamId(CallbackTransport1StreamId aCallback, void* aPtr);
    void EnableActionRepeat(CallbackTransport1Repeat aCallback, void* aPtr);
    void EnableActionRandom(CallbackTransport1Random aCallback, void* aPtr);
private:
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
    CallbackTransport1PlayAs iCallbackPlayAs;
    void* iPtrPlayAs;
    CallbackTransport1Play iCallbackPlay;
    void* iPtrPlay;
    CallbackTransport1Pause iCallbackPause;
    void* iPtrPause;
    CallbackTransport1Stop iCallbackStop;
    void* iPtrStop;
    CallbackTransport1Next iCallbackNext;
    void* iPtrNext;
    CallbackTransport1Prev iCallbackPrev;
    void* iPtrPrev;
    CallbackTransport1SetRepeat iCallbackSetRepeat;
    void* iPtrSetRepeat;
    CallbackTransport1SetRandom iCallbackSetRandom;
    void* iPtrSetRandom;
    CallbackTransport1SeekSecondsAbsolute iCallbackSeekSecondsAbsolute;
    void* iPtrSeekSecondsAbsolute;
    CallbackTransport1SeekSecondsRelative iCallbackSeekSecondsRelative;
    void* iPtrSeekSecondsRelative;
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
    CallbackTransport1Random iCallbackRandom;
    void* iPtrRandom;
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

DvProviderAvOpenhomeOrgTransport1C::DvProviderAvOpenhomeOrgTransport1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Transport", 1)
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

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyNextAvailable(TBool aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    return SetPropertyBool(*iPropertyNextAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyNextAvailable(TBool& aValue)
{
    ASSERT(iPropertyNextAvailable != NULL);
    aValue = iPropertyNextAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyPrevAvailable(TBool aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    return SetPropertyBool(*iPropertyPrevAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyPrevAvailable(TBool& aValue)
{
    ASSERT(iPropertyPrevAvailable != NULL);
    aValue = iPropertyPrevAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyRepeatAvailable(TBool aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    return SetPropertyBool(*iPropertyRepeatAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyRepeatAvailable(TBool& aValue)
{
    ASSERT(iPropertyRepeatAvailable != NULL);
    aValue = iPropertyRepeatAvailable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyRandomAvailable(TBool aValue)
{
    ASSERT(iPropertyRandomAvailable != NULL);
    return SetPropertyBool(*iPropertyRandomAvailable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyRandomAvailable(TBool& aValue)
{
    ASSERT(iPropertyRandomAvailable != NULL);
    aValue = iPropertyRandomAvailable->Value();
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

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertySeekable(TBool aValue)
{
    ASSERT(iPropertySeekable != NULL);
    return SetPropertyBool(*iPropertySeekable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertySeekable(TBool& aValue)
{
    ASSERT(iPropertySeekable != NULL);
    aValue = iPropertySeekable->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyPausable(TBool aValue)
{
    ASSERT(iPropertyPausable != NULL);
    return SetPropertyBool(*iPropertyPausable, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyPausable(TBool& aValue)
{
    ASSERT(iPropertyPausable != NULL);
    aValue = iPropertyPausable->Value();
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

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyRepeat(TBool aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    return SetPropertyBool(*iPropertyRepeat, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyRepeat(TBool& aValue)
{
    ASSERT(iPropertyRepeat != NULL);
    aValue = iPropertyRepeat->Value();
}

TBool DvProviderAvOpenhomeOrgTransport1C::SetPropertyRandom(TBool aValue)
{
    ASSERT(iPropertyRandom != NULL);
    return SetPropertyBool(*iPropertyRandom, aValue);
}

void DvProviderAvOpenhomeOrgTransport1C::GetPropertyRandom(TBool& aValue)
{
    ASSERT(iPropertyRandom != NULL);
    aValue = iPropertyRandom->Value();
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyModes()
{
    iPropertyModes = new PropertyString(new ParameterString("Modes"));
    iService->AddProperty(iPropertyModes); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyNextAvailable()
{
    iPropertyNextAvailable = new PropertyBool(new ParameterBool("NextAvailable"));
    iService->AddProperty(iPropertyNextAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyPrevAvailable()
{
    iPropertyPrevAvailable = new PropertyBool(new ParameterBool("PrevAvailable"));
    iService->AddProperty(iPropertyPrevAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyRepeatAvailable()
{
    iPropertyRepeatAvailable = new PropertyBool(new ParameterBool("RepeatAvailable"));
    iService->AddProperty(iPropertyRepeatAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyRandomAvailable()
{
    iPropertyRandomAvailable = new PropertyBool(new ParameterBool("RandomAvailable"));
    iService->AddProperty(iPropertyRandomAvailable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyStreamId()
{
    iPropertyStreamId = new PropertyUint(new ParameterUint("StreamId"));
    iService->AddProperty(iPropertyStreamId); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertySeekable()
{
    iPropertySeekable = new PropertyBool(new ParameterBool("Seekable"));
    iService->AddProperty(iPropertySeekable); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyPausable()
{
    iPropertyPausable = new PropertyBool(new ParameterBool("Pausable"));
    iService->AddProperty(iPropertyPausable); // passes ownership
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
    iPropertyRepeat = new PropertyBool(new ParameterBool("Repeat"));
    iService->AddProperty(iPropertyRepeat); // passes ownership
}

void DvProviderAvOpenhomeOrgTransport1C::EnablePropertyRandom()
{
    iPropertyRandom = new PropertyBool(new ParameterBool("Random"));
    iService->AddProperty(iPropertyRandom); // passes ownership
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

void DvProviderAvOpenhomeOrgTransport1C::EnableActionNext(CallbackTransport1Next aCallback, void* aPtr)
{
    iCallbackNext = aCallback;
    iPtrNext = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Next");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoNext);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionPrev(CallbackTransport1Prev aCallback, void* aPtr)
{
    iCallbackPrev = aCallback;
    iPtrPrev = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Prev");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoPrev);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSetRepeat(CallbackTransport1SetRepeat aCallback, void* aPtr)
{
    iCallbackSetRepeat = aCallback;
    iPtrSetRepeat = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRepeat");
    action->AddInputParameter(new ParameterBool("Repeat"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSetRepeat);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSetRandom(CallbackTransport1SetRandom aCallback, void* aPtr)
{
    iCallbackSetRandom = aCallback;
    iPtrSetRandom = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetRandom");
    action->AddInputParameter(new ParameterBool("Random"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSetRandom);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSeekSecondsAbsolute(CallbackTransport1SeekSecondsAbsolute aCallback, void* aPtr)
{
    iCallbackSeekSecondsAbsolute = aCallback;
    iPtrSeekSecondsAbsolute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsAbsolute");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterUint("SecondsAbsolute"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondsAbsolute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionSeekSecondsRelative(CallbackTransport1SeekSecondsRelative aCallback, void* aPtr)
{
    iCallbackSeekSecondsRelative = aCallback;
    iPtrSeekSecondsRelative = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SeekSecondsRelative");
    action->AddInputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddInputParameter(new ParameterInt("SecondsRelative"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondsRelative);
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
    action->AddOutputParameter(new ParameterRelated("NextAvailable", *iPropertyNextAvailable));
    action->AddOutputParameter(new ParameterRelated("PrevAvailable", *iPropertyPrevAvailable));
    action->AddOutputParameter(new ParameterRelated("RepeatAvailable", *iPropertyRepeatAvailable));
    action->AddOutputParameter(new ParameterRelated("RandomAvailable", *iPropertyRandomAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoModeInfo);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgTransport1C::EnableActionStreamInfo(CallbackTransport1StreamInfo aCallback, void* aPtr)
{
    iCallbackStreamInfo = aCallback;
    iPtrStreamInfo = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StreamInfo");
    action->AddOutputParameter(new ParameterRelated("StreamId", *iPropertyStreamId));
    action->AddOutputParameter(new ParameterRelated("Seekable", *iPropertySeekable));
    action->AddOutputParameter(new ParameterRelated("Pausable", *iPropertyPausable));
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

void DvProviderAvOpenhomeOrgTransport1C::EnableActionRandom(CallbackTransport1Random aCallback, void* aPtr)
{
    iCallbackRandom = aCallback;
    iPtrRandom = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Random");
    action->AddOutputParameter(new ParameterRelated("Random", *iPropertyRandom));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgTransport1C::DoRandom);
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

void DvProviderAvOpenhomeOrgTransport1C::DoNext(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackNext != NULL);
    if (0 != iCallbackNext(iPtrNext, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoPrev(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPrev != NULL);
    if (0 != iCallbackPrev(iPtrPrev, invocationC, invocationCPtr)) {
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
    TBool Repeat = aInvocation.InvocationReadBool("Repeat");
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

void DvProviderAvOpenhomeOrgTransport1C::DoSetRandom(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Random = aInvocation.InvocationReadBool("Random");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetRandom != NULL);
    if (0 != iCallbackSetRandom(iPtrSetRandom, invocationC, invocationCPtr, Random)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondsAbsolute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TUint SecondsAbsolute = aInvocation.InvocationReadUint("SecondsAbsolute");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondsAbsolute != NULL);
    if (0 != iCallbackSeekSecondsAbsolute(iPtrSeekSecondsAbsolute, invocationC, invocationCPtr, StreamId, SecondsAbsolute)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoSeekSecondsRelative(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint StreamId = aInvocation.InvocationReadUint("StreamId");
    TInt SecondsRelative = aInvocation.InvocationReadInt("SecondsRelative");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSeekSecondsRelative != NULL);
    if (0 != iCallbackSeekSecondsRelative(iPtrSeekSecondsRelative, invocationC, invocationCPtr, StreamId, SecondsRelative)) {
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
    uint32_t NextAvailable;
    uint32_t PrevAvailable;
    uint32_t RepeatAvailable;
    uint32_t RandomAvailable;
    ASSERT(iCallbackModeInfo != NULL);
    if (0 != iCallbackModeInfo(iPtrModeInfo, invocationC, invocationCPtr, &NextAvailable, &PrevAvailable, &RepeatAvailable, &RandomAvailable)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respNextAvailable(aInvocation, "NextAvailable");
    DviInvocationResponseBool respPrevAvailable(aInvocation, "PrevAvailable");
    DviInvocationResponseBool respRepeatAvailable(aInvocation, "RepeatAvailable");
    DviInvocationResponseBool respRandomAvailable(aInvocation, "RandomAvailable");
    invocation.StartResponse();
    respNextAvailable.Write((NextAvailable!=0));
    respPrevAvailable.Write((PrevAvailable!=0));
    respRepeatAvailable.Write((RepeatAvailable!=0));
    respRandomAvailable.Write((RandomAvailable!=0));
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
    uint32_t Seekable;
    uint32_t Pausable;
    ASSERT(iCallbackStreamInfo != NULL);
    if (0 != iCallbackStreamInfo(iPtrStreamInfo, invocationC, invocationCPtr, &StreamId, &Seekable, &Pausable)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respStreamId(aInvocation, "StreamId");
    DviInvocationResponseBool respSeekable(aInvocation, "Seekable");
    DviInvocationResponseBool respPausable(aInvocation, "Pausable");
    invocation.StartResponse();
    respStreamId.Write(StreamId);
    respSeekable.Write((Seekable!=0));
    respPausable.Write((Pausable!=0));
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
    DviInvocationResponseBool respRepeat(aInvocation, "Repeat");
    invocation.StartResponse();
    respRepeat.Write((Repeat!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgTransport1C::DoRandom(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Random;
    ASSERT(iCallbackRandom != NULL);
    if (0 != iCallbackRandom(iPtrRandom, invocationC, invocationCPtr, &Random)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respRandom(aInvocation, "Random");
    invocation.StartResponse();
    respRandom.Write((Random!=0));
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

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionNext(THandle aProvider, CallbackTransport1Next aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionNext(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionPrev(THandle aProvider, CallbackTransport1Prev aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionPrev(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetRepeat(THandle aProvider, CallbackTransport1SetRepeat aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSetRepeat(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSetRandom(THandle aProvider, CallbackTransport1SetRandom aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSetRandom(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsAbsolute(THandle aProvider, CallbackTransport1SeekSecondsAbsolute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSeekSecondsAbsolute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionSeekSecondsRelative(THandle aProvider, CallbackTransport1SeekSecondsRelative aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionSeekSecondsRelative(aCallback, aPtr);
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

void STDCALL DvProviderAvOpenhomeOrgTransport1EnableActionRandom(THandle aProvider, CallbackTransport1Random aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnableActionRandom(aCallback, aPtr);
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

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyNextAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyNextAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyNextAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyNextAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyPrevAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyPrevAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyPrevAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyPrevAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyRepeatAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyRepeatAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRepeatAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyRepeatAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyRandomAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyRandomAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRandomAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyRandomAvailable(val);
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

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertySeekable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertySeekable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertySeekable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertySeekable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyPausable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyPausable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyPausable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyPausable(val);
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
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyRepeat((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRepeat(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyRepeat(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgTransport1SetPropertyRandom(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->SetPropertyRandom((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgTransport1GetPropertyRandom(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->GetPropertyRandom(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyModes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyModes();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyNextAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyNextAvailable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyPrevAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyPrevAvailable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeatAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyRepeatAvailable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRandomAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyRandomAvailable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyStreamId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyStreamId();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertySeekable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertySeekable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyPausable(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyPausable();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyTransportState(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyTransportState();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRepeat(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyRepeat();
}

void STDCALL DvProviderAvOpenhomeOrgTransport1EnablePropertyRandom(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgTransport1C*>(aProvider)->EnablePropertyRandom();
}

