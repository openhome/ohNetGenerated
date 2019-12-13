#include "DvAvOpenhomeOrgVolume4.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolume(uint32_t aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolume(uint32_t& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyMute(bool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyMute(bool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyBalance(int32_t aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyBalance(int32_t& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyFade(int32_t aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyFade(int32_t& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeLimit(uint32_t aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeLimit(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeMax(uint32_t aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeMax(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeUnity(uint32_t aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeUnity(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeSteps(uint32_t aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeSteps(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeMilliDbPerStep(uint32_t aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeMilliDbPerStep(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyBalanceMax(uint32_t aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyBalanceMax(uint32_t& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyFadeMax(uint32_t aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyFadeMax(uint32_t& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyUnityGain(bool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyUnityGain(bool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeOffsets(const std::string& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyVolumeOffsets, buf);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeOffsets(std::string& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    const Brx& val = iPropertyVolumeOffsets->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeOffsetMax(uint32_t aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    return SetPropertyUint(*iPropertyVolumeOffsetMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyVolumeOffsetMax(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    aValue = iPropertyVolumeOffsetMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume4Cpp::SetPropertyTrim(const std::string& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyTrim, buf);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::GetPropertyTrim(std::string& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    const Brx& val = iPropertyTrim->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgVolume4Cpp::DvProviderAvOpenhomeOrgVolume4Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Volume", 4)
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

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeOffsets()
{
    iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets"));
    iService->AddProperty(iPropertyVolumeOffsets); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyVolumeOffsetMax()
{
    iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
    iService->AddProperty(iPropertyVolumeOffsetMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnablePropertyTrim()
{
    iPropertyTrim = new PropertyString(new ParameterString("Trim"));
    iService->AddProperty(iPropertyTrim); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionCharacteristics()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Characteristics");
    action->AddOutputParameter(new ParameterRelated("VolumeMax", *iPropertyVolumeMax));
    action->AddOutputParameter(new ParameterRelated("VolumeUnity", *iPropertyVolumeUnity));
    action->AddOutputParameter(new ParameterRelated("VolumeSteps", *iPropertyVolumeSteps));
    action->AddOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", *iPropertyVolumeMilliDbPerStep));
    action->AddOutputParameter(new ParameterRelated("BalanceMax", *iPropertyBalanceMax));
    action->AddOutputParameter(new ParameterRelated("FadeMax", *iPropertyFadeMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetVolumeNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeNoUnmute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolumeNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeIncNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeIncNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeIncNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeDecNoUnmute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDecNoUnmute");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeDecNoUnmute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionBalanceInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionBalanceDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionFadeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionFadeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeLimit()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionUnityGain()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Trim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::EnableActionSetTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTrim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume4Cpp::DoSetTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoCharacteristics(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respVolumeMax;
    uint32_t respVolumeUnity;
    uint32_t respVolumeSteps;
    uint32_t respVolumeMilliDbPerStep;
    uint32_t respBalanceMax;
    uint32_t respFadeMax;
    DvInvocationStd invocation(aInvocation);
    Characteristics(invocation, respVolumeMax, respVolumeUnity, respVolumeSteps, respVolumeMilliDbPerStep, respBalanceMax, respFadeMax);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterVolumeMax(aInvocation, "VolumeMax");
    respWriterVolumeMax.Write(respVolumeMax);
    DviInvocationResponseUint respWriterVolumeUnity(aInvocation, "VolumeUnity");
    respWriterVolumeUnity.Write(respVolumeUnity);
    DviInvocationResponseUint respWriterVolumeSteps(aInvocation, "VolumeSteps");
    respWriterVolumeSteps.Write(respVolumeSteps);
    DviInvocationResponseUint respWriterVolumeMilliDbPerStep(aInvocation, "VolumeMilliDbPerStep");
    respWriterVolumeMilliDbPerStep.Write(respVolumeMilliDbPerStep);
    DviInvocationResponseUint respWriterBalanceMax(aInvocation, "BalanceMax");
    respWriterBalanceMax.Write(respBalanceMax);
    DviInvocationResponseUint respWriterFadeMax(aInvocation, "FadeMax");
    respWriterFadeMax.Write(respFadeMax);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetVolume(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolumeNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetVolumeNoUnmute(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeIncNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeIncNoUnmute(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeDecNoUnmute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeDecNoUnmute(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respValue;
    DvInvocationStd invocation(aInvocation);
    Volume(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    int32_t Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetBalance(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoBalanceInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BalanceInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoBalanceDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BalanceDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    int32_t respValue;
    DvInvocationStd invocation(aInvocation);
    Balance(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseInt respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetFade(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    int32_t Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetFade(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoFadeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    FadeInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoFadeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    FadeDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoFade(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    int32_t respValue;
    DvInvocationStd invocation(aInvocation);
    Fade(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseInt respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetMute(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    Mute(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeLimit(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respValue;
    DvInvocationStd invocation(aInvocation);
    VolumeLimit(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoUnityGain(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    UnityGain(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoVolumeOffset(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    aInvocation.InvocationReadEnd();
    int32_t respVolumeOffsetBinaryMilliDb;
    DvInvocationStd invocation(aInvocation);
    VolumeOffset(invocation, Channel, respVolumeOffsetBinaryMilliDb);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseInt respWriterVolumeOffsetBinaryMilliDb(aInvocation, "VolumeOffsetBinaryMilliDb");
    respWriterVolumeOffsetBinaryMilliDb.Write(respVolumeOffsetBinaryMilliDb);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetVolumeOffset(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    int32_t VolumeOffsetBinaryMilliDb = aInvocation.InvocationReadInt("VolumeOffsetBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetVolumeOffset(invocation, Channel, VolumeOffsetBinaryMilliDb);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoTrim(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    aInvocation.InvocationReadEnd();
    int32_t respTrimBinaryMilliDb;
    DvInvocationStd invocation(aInvocation);
    Trim(invocation, Channel, respTrimBinaryMilliDb);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseInt respWriterTrimBinaryMilliDb(aInvocation, "TrimBinaryMilliDb");
    respWriterTrimBinaryMilliDb.Write(respTrimBinaryMilliDb);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::DoSetTrim(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    int32_t TrimBinaryMilliDb = aInvocation.InvocationReadInt("TrimBinaryMilliDb");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetTrim(invocation, Channel, TrimBinaryMilliDb);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Characteristics(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVolumeMax*/, uint32_t& /*aVolumeUnity*/, uint32_t& /*aVolumeSteps*/, uint32_t& /*aVolumeMilliDbPerStep*/, uint32_t& /*aBalanceMax*/, uint32_t& /*aFadeMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetVolume(IDvInvocationStd& /*aInvocation*/, uint32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetVolumeNoUnmute(IDvInvocationStd& /*aInvocation*/, uint32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeIncNoUnmute(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeDecNoUnmute(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Volume(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetBalance(IDvInvocationStd& /*aInvocation*/, int32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::BalanceInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::BalanceDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Balance(IDvInvocationStd& /*aInvocation*/, int32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetFade(IDvInvocationStd& /*aInvocation*/, int32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::FadeInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::FadeDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Fade(IDvInvocationStd& /*aInvocation*/, int32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetMute(IDvInvocationStd& /*aInvocation*/, bool /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Mute(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeLimit(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::UnityGain(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::VolumeOffset(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t& /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetVolumeOffset(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::Trim(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t& /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume4Cpp::SetTrim(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

