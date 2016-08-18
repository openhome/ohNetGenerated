#include "DvAvOpenhomeOrgVolume2.h"
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

class DvProviderAvOpenhomeOrgVolume2C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgVolume2C(DvDeviceC aDevice);
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
    void EnableActionCharacteristics(CallbackVolume2Characteristics aCallback, void* aPtr);
    void EnableActionSetVolume(CallbackVolume2SetVolume aCallback, void* aPtr);
    void EnableActionVolumeInc(CallbackVolume2VolumeInc aCallback, void* aPtr);
    void EnableActionVolumeDec(CallbackVolume2VolumeDec aCallback, void* aPtr);
    void EnableActionVolume(CallbackVolume2Volume aCallback, void* aPtr);
    void EnableActionSetBalance(CallbackVolume2SetBalance aCallback, void* aPtr);
    void EnableActionBalanceInc(CallbackVolume2BalanceInc aCallback, void* aPtr);
    void EnableActionBalanceDec(CallbackVolume2BalanceDec aCallback, void* aPtr);
    void EnableActionBalance(CallbackVolume2Balance aCallback, void* aPtr);
    void EnableActionSetFade(CallbackVolume2SetFade aCallback, void* aPtr);
    void EnableActionFadeInc(CallbackVolume2FadeInc aCallback, void* aPtr);
    void EnableActionFadeDec(CallbackVolume2FadeDec aCallback, void* aPtr);
    void EnableActionFade(CallbackVolume2Fade aCallback, void* aPtr);
    void EnableActionSetMute(CallbackVolume2SetMute aCallback, void* aPtr);
    void EnableActionMute(CallbackVolume2Mute aCallback, void* aPtr);
    void EnableActionVolumeLimit(CallbackVolume2VolumeLimit aCallback, void* aPtr);
    void EnableActionUnityGain(CallbackVolume2UnityGain aCallback, void* aPtr);
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
private:
    CallbackVolume2Characteristics iCallbackCharacteristics;
    void* iPtrCharacteristics;
    CallbackVolume2SetVolume iCallbackSetVolume;
    void* iPtrSetVolume;
    CallbackVolume2VolumeInc iCallbackVolumeInc;
    void* iPtrVolumeInc;
    CallbackVolume2VolumeDec iCallbackVolumeDec;
    void* iPtrVolumeDec;
    CallbackVolume2Volume iCallbackVolume;
    void* iPtrVolume;
    CallbackVolume2SetBalance iCallbackSetBalance;
    void* iPtrSetBalance;
    CallbackVolume2BalanceInc iCallbackBalanceInc;
    void* iPtrBalanceInc;
    CallbackVolume2BalanceDec iCallbackBalanceDec;
    void* iPtrBalanceDec;
    CallbackVolume2Balance iCallbackBalance;
    void* iPtrBalance;
    CallbackVolume2SetFade iCallbackSetFade;
    void* iPtrSetFade;
    CallbackVolume2FadeInc iCallbackFadeInc;
    void* iPtrFadeInc;
    CallbackVolume2FadeDec iCallbackFadeDec;
    void* iPtrFadeDec;
    CallbackVolume2Fade iCallbackFade;
    void* iPtrFade;
    CallbackVolume2SetMute iCallbackSetMute;
    void* iPtrSetMute;
    CallbackVolume2Mute iCallbackMute;
    void* iPtrMute;
    CallbackVolume2VolumeLimit iCallbackVolumeLimit;
    void* iPtrVolumeLimit;
    CallbackVolume2UnityGain iCallbackUnityGain;
    void* iPtrUnityGain;
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
};

DvProviderAvOpenhomeOrgVolume2C::DvProviderAvOpenhomeOrgVolume2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Volume", 2)
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
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolume(TUint aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolume(TUint& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyMute(TBool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyMute(TBool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyBalance(TInt aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyBalance(TInt& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyFade(TInt aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyFade(TInt& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolumeLimit(TUint aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolumeLimit(TUint& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolumeMax(TUint aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolumeMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolumeUnity(TUint aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolumeUnity(TUint& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolumeSteps(TUint aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolumeSteps(TUint& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyVolumeMilliDbPerStep(TUint aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyVolumeMilliDbPerStep(TUint& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyBalanceMax(TUint aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyBalanceMax(TUint& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyFadeMax(TUint aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyFadeMax(TUint& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume2C::SetPropertyUnityGain(TBool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume2C::GetPropertyUnityGain(TBool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionCharacteristics(CallbackVolume2Characteristics aCallback, void* aPtr)
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
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionSetVolume(CallbackVolume2SetVolume aCallback, void* aPtr)
{
    iCallbackSetVolume = aCallback;
    iPtrSetVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionVolumeInc(CallbackVolume2VolumeInc aCallback, void* aPtr)
{
    iCallbackVolumeInc = aCallback;
    iPtrVolumeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionVolumeDec(CallbackVolume2VolumeDec aCallback, void* aPtr)
{
    iCallbackVolumeDec = aCallback;
    iPtrVolumeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionVolume(CallbackVolume2Volume aCallback, void* aPtr)
{
    iCallbackVolume = aCallback;
    iPtrVolume = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionSetBalance(CallbackVolume2SetBalance aCallback, void* aPtr)
{
    iCallbackSetBalance = aCallback;
    iPtrSetBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionBalanceInc(CallbackVolume2BalanceInc aCallback, void* aPtr)
{
    iCallbackBalanceInc = aCallback;
    iPtrBalanceInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionBalanceDec(CallbackVolume2BalanceDec aCallback, void* aPtr)
{
    iCallbackBalanceDec = aCallback;
    iPtrBalanceDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionBalance(CallbackVolume2Balance aCallback, void* aPtr)
{
    iCallbackBalance = aCallback;
    iPtrBalance = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionSetFade(CallbackVolume2SetFade aCallback, void* aPtr)
{
    iCallbackSetFade = aCallback;
    iPtrSetFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionFadeInc(CallbackVolume2FadeInc aCallback, void* aPtr)
{
    iCallbackFadeInc = aCallback;
    iPtrFadeInc = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionFadeDec(CallbackVolume2FadeDec aCallback, void* aPtr)
{
    iCallbackFadeDec = aCallback;
    iPtrFadeDec = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionFade(CallbackVolume2Fade aCallback, void* aPtr)
{
    iCallbackFade = aCallback;
    iPtrFade = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionSetMute(CallbackVolume2SetMute aCallback, void* aPtr)
{
    iCallbackSetMute = aCallback;
    iPtrSetMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionMute(CallbackVolume2Mute aCallback, void* aPtr)
{
    iCallbackMute = aCallback;
    iPtrMute = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionVolumeLimit(CallbackVolume2VolumeLimit aCallback, void* aPtr)
{
    iCallbackVolumeLimit = aCallback;
    iPtrVolumeLimit = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::EnableActionUnityGain(CallbackVolume2UnityGain aCallback, void* aPtr)
{
    iCallbackUnityGain = aCallback;
    iPtrUnityGain = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume2C::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume2C::DoCharacteristics(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoSetVolume(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoVolumeInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoVolumeDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoVolume(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoSetBalance(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoBalanceInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoBalanceDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoBalance(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoSetFade(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoFadeInc(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoFadeDec(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoFade(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoSetMute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoMute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoVolumeLimit(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume2C::DoUnityGain(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgVolume2Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgVolume2C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionCharacteristics(THandle aProvider, CallbackVolume2Characteristics aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionCharacteristics(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionSetVolume(THandle aProvider, CallbackVolume2SetVolume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionSetVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionVolumeInc(THandle aProvider, CallbackVolume2VolumeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionVolumeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionVolumeDec(THandle aProvider, CallbackVolume2VolumeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionVolumeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionVolume(THandle aProvider, CallbackVolume2Volume aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionVolume(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionSetBalance(THandle aProvider, CallbackVolume2SetBalance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionSetBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionBalanceInc(THandle aProvider, CallbackVolume2BalanceInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionBalanceInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionBalanceDec(THandle aProvider, CallbackVolume2BalanceDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionBalanceDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionBalance(THandle aProvider, CallbackVolume2Balance aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionBalance(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionSetFade(THandle aProvider, CallbackVolume2SetFade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionSetFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionFadeInc(THandle aProvider, CallbackVolume2FadeInc aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionFadeInc(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionFadeDec(THandle aProvider, CallbackVolume2FadeDec aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionFadeDec(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionFade(THandle aProvider, CallbackVolume2Fade aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionFade(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionSetMute(THandle aProvider, CallbackVolume2SetMute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionSetMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionMute(THandle aProvider, CallbackVolume2Mute aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionMute(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionVolumeLimit(THandle aProvider, CallbackVolume2VolumeLimit aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionVolumeLimit(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnableActionUnityGain(THandle aProvider, CallbackVolume2UnityGain aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnableActionUnityGain(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolume(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolume(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolume(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolume(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyMute(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyMute((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyMute(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyMute(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyBalance(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyBalance(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyBalance(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyBalance(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyFade(THandle aProvider, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyFade(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyFade(THandle aProvider, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyFade(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolumeLimit(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolumeLimit(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolumeLimit(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolumeLimit(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolumeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolumeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolumeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolumeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolumeUnity(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolumeUnity(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolumeUnity(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolumeUnity(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolumeSteps(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolumeSteps(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolumeSteps(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolumeSteps(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyVolumeMilliDbPerStep(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyVolumeMilliDbPerStep(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyVolumeMilliDbPerStep(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyBalanceMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyBalanceMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyBalanceMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyBalanceMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyFadeMax(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyFadeMax(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyFadeMax(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyFadeMax(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgVolume2SetPropertyUnityGain(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->SetPropertyUnityGain((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgVolume2GetPropertyUnityGain(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->GetPropertyUnityGain(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolume(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolume();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyMute(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyMute();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyBalance(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyBalance();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyFade(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyFade();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolumeLimit(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolumeLimit();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolumeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolumeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolumeUnity(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolumeUnity();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolumeSteps(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolumeSteps();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyVolumeMilliDbPerStep(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyVolumeMilliDbPerStep();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyBalanceMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyBalanceMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyFadeMax(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyFadeMax();
}

void STDCALL DvProviderAvOpenhomeOrgVolume2EnablePropertyUnityGain(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgVolume2C*>(aProvider)->EnablePropertyUnityGain();
}

