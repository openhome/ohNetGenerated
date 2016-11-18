#include "DvAvOpenhomeOrgVolume3.h"
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

class DvProviderAvOpenhomeOrgVolume3C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgVolume3C(DvDeviceC aDevice);
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
    void EnableActionCharacteristics(CallbackVolume3Characteristics aCallback, void* aPtr);
    void EnableActionSetVolume(CallbackVolume3SetVolume aCallback, void* aPtr);
    void EnableActionVolumeInc(CallbackVolume3VolumeInc aCallback, void* aPtr);
    void EnableActionVolumeDec(CallbackVolume3VolumeDec aCallback, void* aPtr);
    void EnableActionVolume(CallbackVolume3Volume aCallback, void* aPtr);
    void EnableActionSetBalance(CallbackVolume3SetBalance aCallback, void* aPtr);
    void EnableActionBalanceInc(CallbackVolume3BalanceInc aCallback, void* aPtr);
    void EnableActionBalanceDec(CallbackVolume3BalanceDec aCallback, void* aPtr);
    void EnableActionBalance(CallbackVolume3Balance aCallback, void* aPtr);
    void EnableActionSetFade(CallbackVolume3SetFade aCallback, void* aPtr);
    void EnableActionFadeInc(CallbackVolume3FadeInc aCallback, void* aPtr);
    void EnableActionFadeDec(CallbackVolume3FadeDec aCallback, void* aPtr);
    void EnableActionFade(CallbackVolume3Fade aCallback, void* aPtr);
    void EnableActionSetMute(CallbackVolume3SetMute aCallback, void* aPtr);
    void EnableActionMute(CallbackVolume3Mute aCallback, void* aPtr);
    void EnableActionVolumeLimit(CallbackVolume3VolumeLimit aCallback, void* aPtr);
    void EnableActionUnityGain(CallbackVolume3UnityGain aCallback, void* aPtr);
    void EnableActionVolumeOffset(CallbackVolume3VolumeOffset aCallback, void* aPtr);
    void EnableActionSetVolumeOffset(CallbackVolume3SetVolumeOffset aCallback, void* aPtr);
private:
    void DoCharacteristics(IDviInvocation& aInvocation);
    void DoSetVolume(IDviInvocation& aInvocation);
    void DoVolumeInc(IDviInvocation& aInvocation);
    void DoVolumeDec(IDviInvocation& aInvocation);
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
private:
    CallbackVolume3Characteristics iCallbackCharacteristics;
    void* iPtrCharacteristics;
    CallbackVolume3SetVolume iCallbackSetVolume;
    void* iPtrSetVolume;
    CallbackVolume3VolumeInc iCallbackVolumeInc;
    void* iPtrVolumeInc;
    CallbackVolume3VolumeDec iCallbackVolumeDec;
    void* iPtrVolumeDec;
    CallbackVolume3Volume iCallbackVolume;
    void* iPtrVolume;
    CallbackVolume3SetBalance iCallbackSetBalance;
    void* iPtrSetBalance;
    CallbackVolume3BalanceInc iCallbackBalanceInc;
    void* iPtrBalanceInc;
    CallbackVolume3BalanceDec iCallbackBalanceDec;
    void* iPtrBalanceDec;
    CallbackVolume3Balance iCallbackBalance;
    void* iPtrBalance;
    CallbackVolume3SetFade iCallbackSetFade;
    void* iPtrSetFade;
    CallbackVolume3FadeInc iCallbackFadeInc;
    void* iPtrFadeInc;
    CallbackVolume3FadeDec iCallbackFadeDec;
    void* iPtrFadeDec;
    CallbackVolume3Fade iCallbackFade;
    void* iPtrFade;
    CallbackVolume3SetMute iCallbackSetMute;
    void* iPtrSetMute;
    CallbackVolume3Mute iCallbackMute;
    void* iPtrMute;
    CallbackVolume3VolumeLimit iCallbackVolumeLimit;
    void* iPtrVolumeLimit;
    CallbackVolume3UnityGain iCallbackUnityGain;
    void* iPtrUnityGain;
    CallbackVolume3VolumeOffset iCallbackVolumeOffset;
    void* iPtrVolumeOffset;
    CallbackVolume3SetVolumeOffset iCallbackSetVolumeOffset;
    void* iPtrSetVolumeOffset;
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
};

DvProviderAvOpenhomeOrgVolume3C::DvProviderAvOpenhomeOrgVolume3C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Volume", 3)
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
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolume(TUint aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolume(TUint& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyMute(TBool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyMute(TBool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyBalance(TInt aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyBalance(TInt& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyFade(TInt aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyFade(TInt& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeLimit(TUint aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeLimit(TUint& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeMax(TUint aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeUnity(TUint aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeUnity(TUint& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeSteps(TUint aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeSteps(TUint& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeMilliDbPerStep(TUint aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeMilliDbPerStep(TUint& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyBalanceMax(TUint aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyBalanceMax(TUint& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyFadeMax(TUint aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyFadeMax(TUint& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyUnityGain(TBool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyUnityGain(TBool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeOffsets(const Brx& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    return SetPropertyString(*iPropertyVolumeOffsets, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeOffsets(Brhz& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    aValue.Set(iPropertyVolumeOffsets->Value());
}

TBool DvProviderAvOpenhomeOrgVolume3C::SetPropertyVolumeOffsetMax(TUint aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    return SetPropertyUint(*iPropertyVolumeOffsetMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3C::GetPropertyVolumeOffsetMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    aValue = iPropertyVolumeOffsetMax->Value();
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeOffsets()
{
    iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets"));
    iService->AddProperty(iPropertyVolumeOffsets); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnablePropertyVolumeOffsetMax()
{
    iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
    iService->AddProperty(iPropertyVolumeOffsetMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionCharacteristics(CallbackVolume3Characteristics aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionSetVolume(CallbackVolume3SetVolume aCallback, void* aPtr)
{
    iCallbackSetVolume = aCallback;
    iPtrSetVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionVolumeInc(CallbackVolume3VolumeInc aCallback, void* aPtr)
{
    iCallbackVolumeInc = aCallback;
    iPtrVolumeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionVolumeDec(CallbackVolume3VolumeDec aCallback, void* aPtr)
{
    iCallbackVolumeDec = aCallback;
    iPtrVolumeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionVolume(CallbackVolume3Volume aCallback, void* aPtr)
{
    iCallbackVolume = aCallback;
    iPtrVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionSetBalance(CallbackVolume3SetBalance aCallback, void* aPtr)
{
    iCallbackSetBalance = aCallback;
    iPtrSetBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionBalanceInc(CallbackVolume3BalanceInc aCallback, void* aPtr)
{
    iCallbackBalanceInc = aCallback;
    iPtrBalanceInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionBalanceDec(CallbackVolume3BalanceDec aCallback, void* aPtr)
{
    iCallbackBalanceDec = aCallback;
    iPtrBalanceDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionBalance(CallbackVolume3Balance aCallback, void* aPtr)
{
    iCallbackBalance = aCallback;
    iPtrBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionSetFade(CallbackVolume3SetFade aCallback, void* aPtr)
{
    iCallbackSetFade = aCallback;
    iPtrSetFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionFadeInc(CallbackVolume3FadeInc aCallback, void* aPtr)
{
    iCallbackFadeInc = aCallback;
    iPtrFadeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionFadeDec(CallbackVolume3FadeDec aCallback, void* aPtr)
{
    iCallbackFadeDec = aCallback;
    iPtrFadeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionFade(CallbackVolume3Fade aCallback, void* aPtr)
{
    iCallbackFade = aCallback;
    iPtrFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionSetMute(CallbackVolume3SetMute aCallback, void* aPtr)
{
    iCallbackSetMute = aCallback;
    iPtrSetMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionMute(CallbackVolume3Mute aCallback, void* aPtr)
{
    iCallbackMute = aCallback;
    iPtrMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionVolumeLimit(CallbackVolume3VolumeLimit aCallback, void* aPtr)
{
    iCallbackVolumeLimit = aCallback;
    iPtrVolumeLimit = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionUnityGain(CallbackVolume3UnityGain aCallback, void* aPtr)
{
    iCallbackUnityGain = aCallback;
    iPtrUnityGain = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionVolumeOffset(CallbackVolume3VolumeOffset aCallback, void* aPtr)
{
    iCallbackVolumeOffset = aCallback;
    iPtrVolumeOffset = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::EnableActionSetVolumeOffset(CallbackVolume3SetVolumeOffset aCallback, void* aPtr)
{
    iCallbackSetVolumeOffset = aCallback;
    iPtrSetVolumeOffset = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3C::DoSetVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3C::DoCharacteristics(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoSetVolume(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoVolumeInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoVolumeDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoVolume(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoSetBalance(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoBalanceInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoBalanceDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoBalance(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoSetFade(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoFadeInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoFadeDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoFade(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoSetMute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoMute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoVolumeLimit(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoUnityGain(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoVolumeOffset(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3C::DoSetVolumeOffset(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgVolume3Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgVolume3C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionCharacteristics(THandle aProvider, CallbackVolume3Characteristics aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionCharacteristics(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetVolume(THandle aProvider, CallbackVolume3SetVolume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionSetVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeInc(THandle aProvider, CallbackVolume3VolumeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionVolumeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeDec(THandle aProvider, CallbackVolume3VolumeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionVolumeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolume(THandle aProvider, CallbackVolume3Volume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetBalance(THandle aProvider, CallbackVolume3SetBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionSetBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalanceInc(THandle aProvider, CallbackVolume3BalanceInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionBalanceInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalanceDec(THandle aProvider, CallbackVolume3BalanceDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionBalanceDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionBalance(THandle aProvider, CallbackVolume3Balance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetFade(THandle aProvider, CallbackVolume3SetFade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionSetFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFadeInc(THandle aProvider, CallbackVolume3FadeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionFadeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFadeDec(THandle aProvider, CallbackVolume3FadeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionFadeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionFade(THandle aProvider, CallbackVolume3Fade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetMute(THandle aProvider, CallbackVolume3SetMute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionSetMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionMute(THandle aProvider, CallbackVolume3Mute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeLimit(THandle aProvider, CallbackVolume3VolumeLimit aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionVolumeLimit(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionUnityGain(THandle aProvider, CallbackVolume3UnityGain aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionUnityGain(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionVolumeOffset(THandle aProvider, CallbackVolume3VolumeOffset aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionVolumeOffset(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnableActionSetVolumeOffset(THandle aProvider, CallbackVolume3SetVolumeOffset aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnableActionSetVolumeOffset(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolume(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolume(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolume(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyMute((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyMute(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyMute(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyBalance(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyBalance(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyBalance(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyBalance(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyFade(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyFade(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyFade(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyFade(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeLimit(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeLimit(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeLimit(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeLimit(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeUnity(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeUnity(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeUnity(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeUnity(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeSteps(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeSteps(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeSteps(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeSteps(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeMilliDbPerStep(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeMilliDbPerStep(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyBalanceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyBalanceMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyBalanceMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyBalanceMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyFadeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyFadeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyFadeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyFadeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyUnityGain(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyUnityGain((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyUnityGain(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyUnityGain(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeOffsets(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeOffsets(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeOffsets(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeOffsets(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume3SetPropertyVolumeOffsetMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->SetPropertyVolumeOffsetMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3GetPropertyVolumeOffsetMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->GetPropertyVolumeOffsetMax(val);
    *aValue = val;
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolume(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolume();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyMute(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyMute();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyBalance(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyBalance();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyFade(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyFade();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeLimit(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeLimit();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeUnity(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeUnity();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeSteps(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeSteps();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeMilliDbPerStep(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeMilliDbPerStep();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyBalanceMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyBalanceMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyFadeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyFadeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyUnityGain(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyUnityGain();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsets(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeOffsets();
}

void STDCALL DvProviderAvOpenhomeOrgVolume3EnablePropertyVolumeOffsetMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume3C*>(aProvider)->EnablePropertyVolumeOffsetMax();
}

