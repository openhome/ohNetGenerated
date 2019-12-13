#include "DvAvOpenhomeOrgVolume4.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolume(TUint aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolume(TUint& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyMute(TBool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyMute(TBool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyBalance(TInt aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyBalance(TInt& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyFade(TInt aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyFade(TInt& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeLimit(TUint aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeLimit(TUint& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeMax(TUint aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeUnity(TUint aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeUnity(TUint& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeSteps(TUint aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeSteps(TUint& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeMilliDbPerStep(TUint aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeMilliDbPerStep(TUint& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyBalanceMax(TUint aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyBalanceMax(TUint& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyFadeMax(TUint aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyFadeMax(TUint& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyUnityGain(TBool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyUnityGain(TBool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeOffsets(const Brx& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    return SetPropertyString(*iPropertyVolumeOffsets, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeOffsets(Brhz& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    aValue.Set(iPropertyVolumeOffsets->Value());
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyVolumeOffsetMax(TUint aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    return SetPropertyUint(*iPropertyVolumeOffsetMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyVolumeOffsetMax(TUint& aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    aValue = iPropertyVolumeOffsetMax->Value();
}

TBool DvProviderAvOpenhomeOrgVolume4::SetPropertyTrim(const Brx& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    return SetPropertyString(*iPropertyTrim, aValue);
}

void DvProviderAvOpenhomeOrgVolume4::GetPropertyTrim(Brhz& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    aValue.Set(iPropertyTrim->Value());
}

DvProviderAvOpenhomeOrgVolume4::DvProviderAvOpenhomeOrgVolume4(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Volume", 4)
{
    Construct();
}

DvProviderAvOpenhomeOrgVolume4::DvProviderAvOpenhomeOrgVolume4(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Volume", 4)
{
    Construct();
}

void DvProviderAvOpenhomeOrgVolume4::Construct()
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

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeOffsets()
{
    iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets"));
    iService->AddProperty(iPropertyVolumeOffsets); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyVolumeOffsetMax()
{
    iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
    iService->AddProperty(iPropertyVolumeOffsetMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnablePropertyTrim()
{
    iPropertyTrim = new PropertyString(new ParameterString("Trim"));
    iService->AddProperty(iPropertyTrim); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionCharacteristics()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Characteristics");
    action->AddOutputParameter(new ParameterRelated("VolumeMax", *iPropertyVolumeMax));
    action->AddOutputParameter(new ParameterRelated("VolumeUnity", *iPropertyVolumeUnity));
    action->AddOutputParameter(new ParameterRelated("VolumeSteps", *iPropertyVolumeSteps));
    action->AddOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", *iPropertyVolumeMilliDbPerStep));
    action->AddOutputParameter(new ParameterRelated("BalanceMax", *iPropertyBalanceMax));
    action->AddOutputParameter(new ParameterRelated("FadeMax", *iPropertyFadeMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetVolumeNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeNoUnmute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetVolumeNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeIncNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeIncNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeIncNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeDecNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDecNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeDecNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionBalanceInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionBalanceDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionFadeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionFadeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeLimit()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionUnityGain()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Trim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::EnableActionSetTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTrim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4::DoSetTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4::DoCharacteristics(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVolumeMax(aInvocation, "VolumeMax");
    DviInvocationResponseUint respVolumeUnity(aInvocation, "VolumeUnity");
    DviInvocationResponseUint respVolumeSteps(aInvocation, "VolumeSteps");
    DviInvocationResponseUint respVolumeMilliDbPerStep(aInvocation, "VolumeMilliDbPerStep");
    DviInvocationResponseUint respBalanceMax(aInvocation, "BalanceMax");
    DviInvocationResponseUint respFadeMax(aInvocation, "FadeMax");
    Characteristics(invocation, respVolumeMax, respVolumeUnity, respVolumeSteps, respVolumeMilliDbPerStep, respBalanceMax, respFadeMax);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetVolume(invocation, Value);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    VolumeInc(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    VolumeDec(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetVolumeNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetVolumeNoUnmute(invocation, Value);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeIncNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    VolumeIncNoUnmute(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeDecNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    VolumeDecNoUnmute(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respValue(aInvocation, "Value");
    Volume(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetBalance(invocation, Value);
}

void DvProviderAvOpenhomeOrgVolume4::DoBalanceInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    BalanceInc(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoBalanceDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    BalanceDec(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseInt respValue(aInvocation, "Value");
    Balance(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetFade(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TInt Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetFade(invocation, Value);
}

void DvProviderAvOpenhomeOrgVolume4::DoFadeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    FadeInc(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoFadeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    FadeDec(invocation);
}

void DvProviderAvOpenhomeOrgVolume4::DoFade(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseInt respValue(aInvocation, "Value");
    Fade(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetMute(invocation, Value);
}

void DvProviderAvOpenhomeOrgVolume4::DoMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    Mute(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeLimit(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respValue(aInvocation, "Value");
    VolumeLimit(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoUnityGain(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    UnityGain(invocation, respValue);
}

void DvProviderAvOpenhomeOrgVolume4::DoVolumeOffset(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseInt respVolumeOffsetBinaryMilliDb(aInvocation, "VolumeOffsetBinaryMilliDb");
    VolumeOffset(invocation, Channel, respVolumeOffsetBinaryMilliDb);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetVolumeOffset(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    TInt VolumeOffsetBinaryMilliDb = aInvocation.InvocationReadInt("VolumeOffsetBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetVolumeOffset(invocation, Channel, VolumeOffsetBinaryMilliDb);
}

void DvProviderAvOpenhomeOrgVolume4::DoTrim(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseInt respTrimBinaryMilliDb(aInvocation, "TrimBinaryMilliDb");
    Trim(invocation, Channel, respTrimBinaryMilliDb);
}

void DvProviderAvOpenhomeOrgVolume4::DoSetTrim(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    TInt TrimBinaryMilliDb = aInvocation.InvocationReadInt("TrimBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetTrim(invocation, Channel, TrimBinaryMilliDb);
}

void DvProviderAvOpenhomeOrgVolume4::Characteristics(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVolumeMax*/, IDvInvocationResponseUint& /*aVolumeUnity*/, IDvInvocationResponseUint& /*aVolumeSteps*/, IDvInvocationResponseUint& /*aVolumeMilliDbPerStep*/, IDvInvocationResponseUint& /*aBalanceMax*/, IDvInvocationResponseUint& /*aFadeMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetVolume(IDvInvocation& /*aResponse*/, TUint /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeInc(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeDec(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetVolumeNoUnmute(IDvInvocation& /*aResponse*/, TUint /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeIncNoUnmute(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeDecNoUnmute(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::Volume(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetBalance(IDvInvocation& /*aResponse*/, TInt /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::BalanceInc(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::BalanceDec(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::Balance(IDvInvocation& /*aResponse*/, IDvInvocationResponseInt& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetFade(IDvInvocation& /*aResponse*/, TInt /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::FadeInc(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::FadeDec(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::Fade(IDvInvocation& /*aResponse*/, IDvInvocationResponseInt& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetMute(IDvInvocation& /*aResponse*/, TBool /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::Mute(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeLimit(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::UnityGain(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::VolumeOffset(IDvInvocation& /*aResponse*/, const Brx& /*aChannel*/, IDvInvocationResponseInt& /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetVolumeOffset(IDvInvocation& /*aResponse*/, const Brx& /*aChannel*/, TInt /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::Trim(IDvInvocation& /*aResponse*/, const Brx& /*aChannel*/, IDvInvocationResponseInt& /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4::SetTrim(IDvInvocation& /*aResponse*/, const Brx& /*aChannel*/, TInt /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

