#include "DvAvOpenhomeOrgVolume4.h"
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

class DvProviderAvOpenhomeOrgVolume4C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgVolume4C(DvDeviceC aDevice);
    TBool SetPropertyVolume(TUint aValue);
    void GetPropertyVolume(TUint& aValue);
    TBool SetPropertyMute(TBool aValue);
    void GetPropertyMute(TBool& aValue);
    TBool SetPropertyBalance(TInt aValue);
    void GetPropertyBalance(TInt& aValue);
    TBool SetPropertyFade(TInt aValue);
    void GetPropertyFade(TInt& aValue);
    TBool SetPropertyVolumeLimit(TUint aValue);
    void GetPropertyVolumeLimit(TUint& aValue);
    TBool SetPropertyVolumeMax(TUint aValue);
    void GetPropertyVolumeMax(TUint& aValue);
    TBool SetPropertyVolumeUnity(TUint aValue);
    void GetPropertyVolumeUnity(TUint& aValue);
    TBool SetPropertyVolumeSteps(TUint aValue);
    void GetPropertyVolumeSteps(TUint& aValue);
    TBool SetPropertyVolumeMilliDbPerStep(TUint aValue);
    void GetPropertyVolumeMilliDbPerStep(TUint& aValue);
    TBool SetPropertyBalanceMax(TUint aValue);
    void GetPropertyBalanceMax(TUint& aValue);
    TBool SetPropertyFadeMax(TUint aValue);
    void GetPropertyFadeMax(TUint& aValue);
    TBool SetPropertyUnityGain(TBool aValue);
    void GetPropertyUnityGain(TBool& aValue);
    TBool SetPropertyVolumeOffsets(const Brx& aValue);
    void GetPropertyVolumeOffsets(Brhz& aValue);
    TBool SetPropertyVolumeOffsetMax(TUint aValue);
    void GetPropertyVolumeOffsetMax(TUint& aValue);
    TBool SetPropertyTrim(const Brx& aValue);
    void GetPropertyTrim(Brhz& aValue);
    void EnablePropertyVolume();
    void EnablePropertyMute();
    void EnablePropertyBalance();
    void EnablePropertyFade();
    void EnablePropertyVolumeLimit();
    void EnablePropertyVolumeMax();
    void EnablePropertyVolumeUnity();
    void EnablePropertyVolumeSteps();
    void EnablePropertyVolumeMilliDbPerStep();
    void EnablePropertyBalanceMax();
    void EnablePropertyFadeMax();
    void EnablePropertyUnityGain();
    void EnablePropertyVolumeOffsets();
    void EnablePropertyVolumeOffsetMax();
    void EnablePropertyTrim();
    void EnableActionCharacteristics(CallbackVolume4Characteristics aCallback, void* aPtr);
    void EnableActionSetVolume(CallbackVolume4SetVolume aCallback, void* aPtr);
    void EnableActionVolumeInc(CallbackVolume4VolumeInc aCallback, void* aPtr);
    void EnableActionVolumeDec(CallbackVolume4VolumeDec aCallback, void* aPtr);
    void EnableActionSetVolumeNoUnmute(CallbackVolume4SetVolumeNoUnmute aCallback, void* aPtr);
    void EnableActionVolumeIncNoUnmute(CallbackVolume4VolumeIncNoUnmute aCallback, void* aPtr);
    void EnableActionVolumeDecNoUnmute(CallbackVolume4VolumeDecNoUnmute aCallback, void* aPtr);
    void EnableActionVolume(CallbackVolume4Volume aCallback, void* aPtr);
    void EnableActionSetBalance(CallbackVolume4SetBalance aCallback, void* aPtr);
    void EnableActionBalanceInc(CallbackVolume4BalanceInc aCallback, void* aPtr);
    void EnableActionBalanceDec(CallbackVolume4BalanceDec aCallback, void* aPtr);
    void EnableActionBalance(CallbackVolume4Balance aCallback, void* aPtr);
    void EnableActionSetFade(CallbackVolume4SetFade aCallback, void* aPtr);
    void EnableActionFadeInc(CallbackVolume4FadeInc aCallback, void* aPtr);
    void EnableActionFadeDec(CallbackVolume4FadeDec aCallback, void* aPtr);
    void EnableActionFade(CallbackVolume4Fade aCallback, void* aPtr);
    void EnableActionSetMute(CallbackVolume4SetMute aCallback, void* aPtr);
    void EnableActionMute(CallbackVolume4Mute aCallback, void* aPtr);
    void EnableActionVolumeLimit(CallbackVolume4VolumeLimit aCallback, void* aPtr);
    void EnableActionUnityGain(CallbackVolume4UnityGain aCallback, void* aPtr);
    void EnableActionVolumeOffset(CallbackVolume4VolumeOffset aCallback, void* aPtr);
    void EnableActionSetVolumeOffset(CallbackVolume4SetVolumeOffset aCallback, void* aPtr);
    void EnableActionTrim(CallbackVolume4Trim aCallback, void* aPtr);
    void EnableActionSetTrim(CallbackVolume4SetTrim aCallback, void* aPtr);
private:
    void DoCharacteristics(IDviInvocation& aInvocation);
    void DoSetVolume(IDviInvocation& aInvocation);
    void DoVolumeInc(IDviInvocation& aInvocation);
    void DoVolumeDec(IDviInvocation& aInvocation);
    void DoSetVolumeNoUnmute(IDviInvocation& aInvocation);
    void DoVolumeIncNoUnmute(IDviInvocation& aInvocation);
    void DoVolumeDecNoUnmute(IDviInvocation& aInvocation);
    void DoVolume(IDviInvocation& aInvocation);
    void DoSetBalance(IDviInvocation& aInvocation);
    void DoBalanceInc(IDviInvocation& aInvocation);
    void DoBalanceDec(IDviInvocation& aInvocation);
    void DoBalance(IDviInvocation& aInvocation);
    void DoSetFade(IDviInvocation& aInvocation);
    void DoFadeInc(IDviInvocation& aInvocation);
    void DoFadeDec(IDviInvocation& aInvocation);
    void DoFade(IDviInvocation& aInvocation);
    void DoSetMute(IDviInvocation& aInvocation);
    void DoMute(IDviInvocation& aInvocation);
    void DoVolumeLimit(IDviInvocation& aInvocation);
    void DoUnityGain(IDviInvocation& aInvocation);
    void DoVolumeOffset(IDviInvocation& aInvocation);
    void DoSetVolumeOffset(IDviInvocation& aInvocation);
    void DoTrim(IDviInvocation& aInvocation);
    void DoSetTrim(IDviInvocation& aInvocation);
private:
    CallbackVolume4Characteristics iCallbackCharacteristics;
    void* iPtrCharacteristics;
    CallbackVolume4SetVolume iCallbackSetVolume;
    void* iPtrSetVolume;
    CallbackVolume4VolumeInc iCallbackVolumeInc;
    void* iPtrVolumeInc;
    CallbackVolume4VolumeDec iCallbackVolumeDec;
    void* iPtrVolumeDec;
    CallbackVolume4SetVolumeNoUnmute iCallbackSetVolumeNoUnmute;
    void* iPtrSetVolumeNoUnmute;
    CallbackVolume4VolumeIncNoUnmute iCallbackVolumeIncNoUnmute;
    void* iPtrVolumeIncNoUnmute;
    CallbackVolume4VolumeDecNoUnmute iCallbackVolumeDecNoUnmute;
    void* iPtrVolumeDecNoUnmute;
    CallbackVolume4Volume iCallbackVolume;
    void* iPtrVolume;
    CallbackVolume4SetBalance iCallbackSetBalance;
    void* iPtrSetBalance;
    CallbackVolume4BalanceInc iCallbackBalanceInc;
    void* iPtrBalanceInc;
    CallbackVolume4BalanceDec iCallbackBalanceDec;
    void* iPtrBalanceDec;
    CallbackVolume4Balance iCallbackBalance;
    void* iPtrBalance;
    CallbackVolume4SetFade iCallbackSetFade;
    void* iPtrSetFade;
    CallbackVolume4FadeInc iCallbackFadeInc;
    void* iPtrFadeInc;
    CallbackVolume4FadeDec iCallbackFadeDec;
    void* iPtrFadeDec;
    CallbackVolume4Fade iCallbackFade;
    void* iPtrFade;
    CallbackVolume4SetMute iCallbackSetMute;
    void* iPtrSetMute;
    CallbackVolume4Mute iCallbackMute;
    void* iPtrMute;
    CallbackVolume4VolumeLimit iCallbackVolumeLimit;
    void* iPtrVolumeLimit;
    CallbackVolume4UnityGain iCallbackUnityGain;
    void* iPtrUnityGain;
    CallbackVolume4VolumeOffset iCallbackVolumeOffset;
    void* iPtrVolumeOffset;
    CallbackVolume4SetVolumeOffset iCallbackSetVolumeOffset;
    void* iPtrSetVolumeOffset;
    CallbackVolume4Trim iCallbackTrim;
    void* iPtrTrim;
    CallbackVolume4SetTrim iCallbackSetTrim;
    void* iPtrSetTrim;
    PropertyUint* iPropertyVolume;
    PropertyBool* iPropertyMute;
    PropertyInt* iPropertyBalance;
    PropertyInt* iPropertyFade;
    PropertyUint* iPropertyVolumeLimit;
    PropertyUint* iPropertyVolumeMax;
    PropertyUint* iPropertyVolumeUnity;
    PropertyUint* iPropertyVolumeSteps;
    PropertyUint* iPropertyVolumeMilliDbPerStep;
    PropertyUint* iPropertyBalanceMax;
    PropertyUint* iPropertyFadeMax;
    PropertyBool* iPropertyUnityGain;
    PropertyString* iPropertyVolumeOffsets;
    PropertyUint* iPropertyVolumeOffsetMax;
    PropertyString* iPropertyTrim;
};

DvProviderAvOpenhomeOrgVolume4C::DvProviderAvOpenhomeOrgVolume4C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Volume", 4)
{
    iPropertyVolume = NULL;
    iPropertyMute = NULL;
    iPropertyBalance = NULL;
    iPropertyFade = NULL;
    iPropertyVolumeLimit = NULL;
    iPropertyVolumeMax = NULL;
    iPropertyVolumeUnity = NULL;
    iPropertyVolumeSteps = NULL;
    iPropertyVolumeMilliDbPerStep = NULL;
    iPropertyBalanceMax = NULL;
    iPropertyFadeMax = NULL;
    iPropertyUnityGain = NULL;
    iPropertyVolumeOffsets = NULL;
    iPropertyVolumeOffsetMax = NULL;
    iPropertyTrim = NULL;
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolume(TUint aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolume(TUint& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyMute(TBool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyMute(TBool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyBalance(TInt aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyBalance(TInt& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyFade(TInt aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyFade(TInt& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeLimit(TUint aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeLimit(TUint& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeMax(TUint aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeUnity(TUint aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeUnity(TUint& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeSteps(TUint aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeSteps(TUint& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeMilliDbPerStep(TUint aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeMilliDbPerStep(TUint& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyBalanceMax(TUint aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyBalanceMax(TUint& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyFadeMax(TUint aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyFadeMax(TUint& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyUnityGain(TBool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyUnityGain(TBool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeOffsets(const Brx& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    return SetPropertyString(*iPropertyVolumeOffsets, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeOffsets(Brhz& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    aValue.Set(iPropertyVolumeOffsets->Value());
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyVolumeOffsetMax(TUint aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    return SetPropertyUint(*iPropertyVolumeOffsetMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyVolumeOffsetMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    aValue = iPropertyVolumeOffsetMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4C::SetPropertyTrim(const Brx& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    return SetPropertyString(*iPropertyTrim, aValue);
}

void DvProviderAvOpenhomeOrgVolume4C::GetPropertyTrim(Brhz& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    aValue.Set(iPropertyTrim->Value());
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeOffsets()
{
    iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets"));
    iService->AddProperty(iPropertyVolumeOffsets); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyVolumeOffsetMax()
{
    iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
    iService->AddProperty(iPropertyVolumeOffsetMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnablePropertyTrim()
{
    iPropertyTrim = new PropertyString(new ParameterString("Trim"));
    iService->AddProperty(iPropertyTrim); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionCharacteristics(CallbackVolume4Characteristics aCallback, void* aPtr)
{
    iCallbackCharacteristics = aCallback;
    iPtrCharacteristics = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Characteristics");
    action->AddOutputParameter(new ParameterRelated("VolumeMax", *iPropertyVolumeMax));
    action->AddOutputParameter(new ParameterRelated("VolumeUnity", *iPropertyVolumeUnity));
    action->AddOutputParameter(new ParameterRelated("VolumeSteps", *iPropertyVolumeSteps));
    action->AddOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", *iPropertyVolumeMilliDbPerStep));
    action->AddOutputParameter(new ParameterRelated("BalanceMax", *iPropertyBalanceMax));
    action->AddOutputParameter(new ParameterRelated("FadeMax", *iPropertyFadeMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetVolume(CallbackVolume4SetVolume aCallback, void* aPtr)
{
    iCallbackSetVolume = aCallback;
    iPtrSetVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeInc(CallbackVolume4VolumeInc aCallback, void* aPtr)
{
    iCallbackVolumeInc = aCallback;
    iPtrVolumeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeDec(CallbackVolume4VolumeDec aCallback, void* aPtr)
{
    iCallbackVolumeDec = aCallback;
    iPtrVolumeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetVolumeNoUnmute(CallbackVolume4SetVolumeNoUnmute aCallback, void* aPtr)
{
    iCallbackSetVolumeNoUnmute = aCallback;
    iPtrSetVolumeNoUnmute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeNoUnmute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetVolumeNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeIncNoUnmute(CallbackVolume4VolumeIncNoUnmute aCallback, void* aPtr)
{
    iCallbackVolumeIncNoUnmute = aCallback;
    iPtrVolumeIncNoUnmute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeIncNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeIncNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeDecNoUnmute(CallbackVolume4VolumeDecNoUnmute aCallback, void* aPtr)
{
    iCallbackVolumeDecNoUnmute = aCallback;
    iPtrVolumeDecNoUnmute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDecNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeDecNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolume(CallbackVolume4Volume aCallback, void* aPtr)
{
    iCallbackVolume = aCallback;
    iPtrVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetBalance(CallbackVolume4SetBalance aCallback, void* aPtr)
{
    iCallbackSetBalance = aCallback;
    iPtrSetBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionBalanceInc(CallbackVolume4BalanceInc aCallback, void* aPtr)
{
    iCallbackBalanceInc = aCallback;
    iPtrBalanceInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionBalanceDec(CallbackVolume4BalanceDec aCallback, void* aPtr)
{
    iCallbackBalanceDec = aCallback;
    iPtrBalanceDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionBalance(CallbackVolume4Balance aCallback, void* aPtr)
{
    iCallbackBalance = aCallback;
    iPtrBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetFade(CallbackVolume4SetFade aCallback, void* aPtr)
{
    iCallbackSetFade = aCallback;
    iPtrSetFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionFadeInc(CallbackVolume4FadeInc aCallback, void* aPtr)
{
    iCallbackFadeInc = aCallback;
    iPtrFadeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionFadeDec(CallbackVolume4FadeDec aCallback, void* aPtr)
{
    iCallbackFadeDec = aCallback;
    iPtrFadeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionFade(CallbackVolume4Fade aCallback, void* aPtr)
{
    iCallbackFade = aCallback;
    iPtrFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetMute(CallbackVolume4SetMute aCallback, void* aPtr)
{
    iCallbackSetMute = aCallback;
    iPtrSetMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionMute(CallbackVolume4Mute aCallback, void* aPtr)
{
    iCallbackMute = aCallback;
    iPtrMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeLimit(CallbackVolume4VolumeLimit aCallback, void* aPtr)
{
    iCallbackVolumeLimit = aCallback;
    iPtrVolumeLimit = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionUnityGain(CallbackVolume4UnityGain aCallback, void* aPtr)
{
    iCallbackUnityGain = aCallback;
    iPtrUnityGain = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionVolumeOffset(CallbackVolume4VolumeOffset aCallback, void* aPtr)
{
    iCallbackVolumeOffset = aCallback;
    iPtrVolumeOffset = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetVolumeOffset(CallbackVolume4SetVolumeOffset aCallback, void* aPtr)
{
    iCallbackSetVolumeOffset = aCallback;
    iPtrSetVolumeOffset = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionTrim(CallbackVolume4Trim aCallback, void* aPtr)
{
    iCallbackTrim = aCallback;
    iPtrTrim = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Trim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::EnableActionSetTrim(CallbackVolume4SetTrim aCallback, void* aPtr)
{
    iCallbackSetTrim = aCallback;
    iPtrSetTrim = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTrim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4C::DoSetTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4C::DoCharacteristics(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t VolumeMax;
    uint32_t VolumeUnity;
    uint32_t VolumeSteps;
    uint32_t VolumeMilliDbPerStep;
    uint32_t BalanceMax;
    uint32_t FadeMax;
    ASSERT(iCallbackCharacteristics != NULL);
    if (0 != iCallbackCharacteristics(iPtrCharacteristics, invocationC, invocationCPtr, &VolumeMax, &VolumeUnity, &VolumeSteps, &VolumeMilliDbPerStep, &BalanceMax, &FadeMax)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respVolumeMax(aInvocation, "VolumeMax");
    DviInvocationResponseUint respVolumeUnity(aInvocation, "VolumeUnity");
    DviInvocationResponseUint respVolumeSteps(aInvocation, "VolumeSteps");
    DviInvocationResponseUint respVolumeMilliDbPerStep(aInvocation, "VolumeMilliDbPerStep");
    DviInvocationResponseUint respBalanceMax(aInvocation, "BalanceMax");
    DviInvocationResponseUint respFadeMax(aInvocation, "FadeMax");
    invocation.StartResponse();
    respVolumeMax.Write(VolumeMax);
    respVolumeUnity.Write(VolumeUnity);
    respVolumeSteps.Write(VolumeSteps);
    respVolumeMilliDbPerStep.Write(VolumeMilliDbPerStep);
    respBalanceMax.Write(BalanceMax);
    respFadeMax.Write(FadeMax);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetVolume(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetVolume != NULL);
    if (0 != iCallbackSetVolume(iPtrSetVolume, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeInc(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackVolumeInc != NULL);
    if (0 != iCallbackVolumeInc(iPtrVolumeInc, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeDec(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackVolumeDec != NULL);
    if (0 != iCallbackVolumeDec(iPtrVolumeDec, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetVolumeNoUnmute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetVolumeNoUnmute != NULL);
    if (0 != iCallbackSetVolumeNoUnmute(iPtrSetVolumeNoUnmute, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeIncNoUnmute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackVolumeIncNoUnmute != NULL);
    if (0 != iCallbackVolumeIncNoUnmute(iPtrVolumeIncNoUnmute, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeDecNoUnmute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackVolumeDecNoUnmute != NULL);
    if (0 != iCallbackVolumeDecNoUnmute(iPtrVolumeDecNoUnmute, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolume(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackVolume != NULL);
    if (0 != iCallbackVolume(iPtrVolume, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetBalance != NULL);
    if (0 != iCallbackSetBalance(iPtrSetBalance, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoBalanceInc(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackBalanceInc != NULL);
    if (0 != iCallbackBalanceInc(iPtrBalanceInc, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoBalanceDec(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackBalanceDec != NULL);
    if (0 != iCallbackBalanceDec(iPtrBalanceDec, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoBalance(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    int32_t Value;
    ASSERT(iCallbackBalance != NULL);
    if (0 != iCallbackBalance(iPtrBalance, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseInt respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetFade(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetFade != NULL);
    if (0 != iCallbackSetFade(iPtrSetFade, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoFadeInc(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackFadeInc != NULL);
    if (0 != iCallbackFadeInc(iPtrFadeInc, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoFadeDec(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackFadeDec != NULL);
    if (0 != iCallbackFadeDec(iPtrFadeDec, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoFade(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    int32_t Value;
    ASSERT(iCallbackFade != NULL);
    if (0 != iCallbackFade(iPtrFade, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseInt respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetMute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetMute != NULL);
    if (0 != iCallbackSetMute(iPtrSetMute, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoMute(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackMute != NULL);
    if (0 != iCallbackMute(iPtrMute, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeLimit(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackVolumeLimit != NULL);
    if (0 != iCallbackVolumeLimit(iPtrVolumeLimit, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoUnityGain(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackUnityGain != NULL);
    if (0 != iCallbackUnityGain(iPtrUnityGain, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoVolumeOffset(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    int32_t VolumeOffsetBinaryMilliDb;
    ASSERT(iCallbackVolumeOffset != NULL);
    if (0 != iCallbackVolumeOffset(iPtrVolumeOffset, invocationC, invocationCPtr, (const char*)Channel.Ptr(), &VolumeOffsetBinaryMilliDb)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseInt respVolumeOffsetBinaryMilliDb(aInvocation, "VolumeOffsetBinaryMilliDb");
    invocation.StartResponse();
    respVolumeOffsetBinaryMilliDb.Write(VolumeOffsetBinaryMilliDb);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetVolumeOffset(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    TInt VolumeOffsetBinaryMilliDb = aInvocation.InvocationReadInt("VolumeOffsetBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetVolumeOffset != NULL);
    if (0 != iCallbackSetVolumeOffset(iPtrSetVolumeOffset, invocationC, invocationCPtr, (const char*)Channel.Ptr(), VolumeOffsetBinaryMilliDb)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoTrim(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    int32_t TrimBinaryMilliDb;
    ASSERT(iCallbackTrim != NULL);
    if (0 != iCallbackTrim(iPtrTrim, invocationC, invocationCPtr, (const char*)Channel.Ptr(), &TrimBinaryMilliDb)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseInt respTrimBinaryMilliDb(aInvocation, "TrimBinaryMilliDb");
    invocation.StartResponse();
    respTrimBinaryMilliDb.Write(TrimBinaryMilliDb);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgVolume4C::DoSetTrim(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    TInt TrimBinaryMilliDb = aInvocation.InvocationReadInt("TrimBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetTrim != NULL);
    if (0 != iCallbackSetTrim(iPtrSetTrim, invocationC, invocationCPtr, (const char*)Channel.Ptr(), TrimBinaryMilliDb)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgVolume4Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgVolume4C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionCharacteristics(THandle aProvider, CallbackVolume4Characteristics aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionCharacteristics(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolume(THandle aProvider, CallbackVolume4SetVolume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeInc(THandle aProvider, CallbackVolume4VolumeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDec(THandle aProvider, CallbackVolume4VolumeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeNoUnmute(THandle aProvider, CallbackVolume4SetVolumeNoUnmute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetVolumeNoUnmute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeIncNoUnmute(THandle aProvider, CallbackVolume4VolumeIncNoUnmute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeIncNoUnmute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeDecNoUnmute(THandle aProvider, CallbackVolume4VolumeDecNoUnmute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeDecNoUnmute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolume(THandle aProvider, CallbackVolume4Volume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetBalance(THandle aProvider, CallbackVolume4SetBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalanceInc(THandle aProvider, CallbackVolume4BalanceInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionBalanceInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalanceDec(THandle aProvider, CallbackVolume4BalanceDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionBalanceDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionBalance(THandle aProvider, CallbackVolume4Balance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetFade(THandle aProvider, CallbackVolume4SetFade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFadeInc(THandle aProvider, CallbackVolume4FadeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionFadeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFadeDec(THandle aProvider, CallbackVolume4FadeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionFadeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionFade(THandle aProvider, CallbackVolume4Fade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetMute(THandle aProvider, CallbackVolume4SetMute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionMute(THandle aProvider, CallbackVolume4Mute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeLimit(THandle aProvider, CallbackVolume4VolumeLimit aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeLimit(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionUnityGain(THandle aProvider, CallbackVolume4UnityGain aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionUnityGain(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionVolumeOffset(THandle aProvider, CallbackVolume4VolumeOffset aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionVolumeOffset(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetVolumeOffset(THandle aProvider, CallbackVolume4SetVolumeOffset aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetVolumeOffset(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionTrim(THandle aProvider, CallbackVolume4Trim aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionTrim(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnableActionSetTrim(THandle aProvider, CallbackVolume4SetTrim aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnableActionSetTrim(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolume(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolume(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolume(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyMute((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyMute(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyMute(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyBalance(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyBalance(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyBalance(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyBalance(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyFade(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyFade(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyFade(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyFade(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeLimit(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeLimit(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeLimit(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeLimit(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeUnity(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeUnity(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeUnity(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeUnity(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeSteps(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeSteps(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeSteps(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeSteps(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeMilliDbPerStep(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeMilliDbPerStep(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyBalanceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyBalanceMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyBalanceMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyBalanceMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyFadeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyFadeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyFadeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyFadeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyUnityGain(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyUnityGain((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyUnityGain(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyUnityGain(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeOffsets(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeOffsets(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeOffsets(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeOffsets(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyVolumeOffsetMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyVolumeOffsetMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyVolumeOffsetMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyVolumeOffsetMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume4SetPropertyTrim(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->SetPropertyTrim(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume4GetPropertyTrim(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->GetPropertyTrim(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolume(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolume();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyMute(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyMute();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyBalance(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyBalance();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyFade(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyFade();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeLimit(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeLimit();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeUnity(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeUnity();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeSteps(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeSteps();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeMilliDbPerStep(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeMilliDbPerStep();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyBalanceMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyBalanceMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyFadeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyFadeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyUnityGain(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyUnityGain();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsets(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeOffsets();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyVolumeOffsetMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyVolumeOffsetMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume4EnablePropertyTrim(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume4C*>(aProvider)->EnablePropertyTrim();
}

