#include "DvAvOpenhomeOrgVolume3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolume(uint32_t aValue)
{
    ASSERT(iPropertyVolume != NULL);
    return SetPropertyUint(*iPropertyVolume, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolume(uint32_t& aValue)
{
    ASSERT(iPropertyVolume != NULL);
    aValue = iPropertyVolume->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyMute(bool aValue)
{
    ASSERT(iPropertyMute != NULL);
    return SetPropertyBool(*iPropertyMute, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyMute(bool& aValue)
{
    ASSERT(iPropertyMute != NULL);
    aValue = iPropertyMute->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyBalance(int32_t aValue)
{
    ASSERT(iPropertyBalance != NULL);
    return SetPropertyInt(*iPropertyBalance, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyBalance(int32_t& aValue)
{
    ASSERT(iPropertyBalance != NULL);
    aValue = iPropertyBalance->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyFade(int32_t aValue)
{
    ASSERT(iPropertyFade != NULL);
    return SetPropertyInt(*iPropertyFade, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyFade(int32_t& aValue)
{
    ASSERT(iPropertyFade != NULL);
    aValue = iPropertyFade->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeLimit(uint32_t aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    return SetPropertyUint(*iPropertyVolumeLimit, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeLimit(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeLimit != NULL);
    aValue = iPropertyVolumeLimit->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeMax(uint32_t aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    return SetPropertyUint(*iPropertyVolumeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeMax(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeMax != NULL);
    aValue = iPropertyVolumeMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeUnity(uint32_t aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    return SetPropertyUint(*iPropertyVolumeUnity, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeUnity(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeUnity != NULL);
    aValue = iPropertyVolumeUnity->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeSteps(uint32_t aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    return SetPropertyUint(*iPropertyVolumeSteps, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeSteps(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeSteps != NULL);
    aValue = iPropertyVolumeSteps->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeMilliDbPerStep(uint32_t aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    return SetPropertyUint(*iPropertyVolumeMilliDbPerStep, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeMilliDbPerStep(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeMilliDbPerStep != NULL);
    aValue = iPropertyVolumeMilliDbPerStep->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyBalanceMax(uint32_t aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    return SetPropertyUint(*iPropertyBalanceMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyBalanceMax(uint32_t& aValue)
{
    ASSERT(iPropertyBalanceMax != NULL);
    aValue = iPropertyBalanceMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyFadeMax(uint32_t aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    return SetPropertyUint(*iPropertyFadeMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyFadeMax(uint32_t& aValue)
{
    ASSERT(iPropertyFadeMax != NULL);
    aValue = iPropertyFadeMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyUnityGain(bool aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    return SetPropertyBool(*iPropertyUnityGain, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyUnityGain(bool& aValue)
{
    ASSERT(iPropertyUnityGain != NULL);
    aValue = iPropertyUnityGain->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeOffsets(const std::string& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyVolumeOffsets, buf);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeOffsets(std::string& aValue)
{
    ASSERT(iPropertyVolumeOffsets != NULL);
    const Brx& val = iPropertyVolumeOffsets->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeOffsetMax(uint32_t aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    return SetPropertyUint(*iPropertyVolumeOffsetMax, aValue);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyVolumeOffsetMax(uint32_t& aValue)
{
    ASSERT(iPropertyVolumeOffsetMax != NULL);
    aValue = iPropertyVolumeOffsetMax->Value();
}

bool DvProviderAvOpenhomeOrgVolume3Cpp::SetPropertyTrim(const std::string& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyTrim, buf);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::GetPropertyTrim(std::string& aValue)
{
    ASSERT(iPropertyTrim != NULL);
    const Brx& val = iPropertyTrim->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgVolume3Cpp::DvProviderAvOpenhomeOrgVolume3Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Volume", 3)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolume()
{
    iPropertyVolume = new PropertyUint(new ParameterUint("Volume"));
    iService->AddProperty(iPropertyVolume); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyMute()
{
    iPropertyMute = new PropertyBool(new ParameterBool("Mute"));
    iService->AddProperty(iPropertyMute); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyBalance()
{
    iPropertyBalance = new PropertyInt(new ParameterInt("Balance"));
    iService->AddProperty(iPropertyBalance); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyFade()
{
    iPropertyFade = new PropertyInt(new ParameterInt("Fade"));
    iService->AddProperty(iPropertyFade); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeLimit()
{
    iPropertyVolumeLimit = new PropertyUint(new ParameterUint("VolumeLimit"));
    iService->AddProperty(iPropertyVolumeLimit); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeMax()
{
    iPropertyVolumeMax = new PropertyUint(new ParameterUint("VolumeMax"));
    iService->AddProperty(iPropertyVolumeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeUnity()
{
    iPropertyVolumeUnity = new PropertyUint(new ParameterUint("VolumeUnity"));
    iService->AddProperty(iPropertyVolumeUnity); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeSteps()
{
    iPropertyVolumeSteps = new PropertyUint(new ParameterUint("VolumeSteps"));
    iService->AddProperty(iPropertyVolumeSteps); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeMilliDbPerStep()
{
    iPropertyVolumeMilliDbPerStep = new PropertyUint(new ParameterUint("VolumeMilliDbPerStep"));
    iService->AddProperty(iPropertyVolumeMilliDbPerStep); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyBalanceMax()
{
    iPropertyBalanceMax = new PropertyUint(new ParameterUint("BalanceMax"));
    iService->AddProperty(iPropertyBalanceMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyFadeMax()
{
    iPropertyFadeMax = new PropertyUint(new ParameterUint("FadeMax"));
    iService->AddProperty(iPropertyFadeMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyUnityGain()
{
    iPropertyUnityGain = new PropertyBool(new ParameterBool("UnityGain"));
    iService->AddProperty(iPropertyUnityGain); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeOffsets()
{
    iPropertyVolumeOffsets = new PropertyString(new ParameterString("VolumeOffsets"));
    iService->AddProperty(iPropertyVolumeOffsets); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyVolumeOffsetMax()
{
    iPropertyVolumeOffsetMax = new PropertyUint(new ParameterUint("VolumeOffsetMax"));
    iService->AddProperty(iPropertyVolumeOffsetMax); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnablePropertyTrim()
{
    iPropertyTrim = new PropertyString(new ParameterString("Trim"));
    iService->AddProperty(iPropertyTrim); // passes ownership
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionCharacteristics()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Characteristics");
    action->AddOutputParameter(new ParameterRelated("VolumeMax", *iPropertyVolumeMax));
    action->AddOutputParameter(new ParameterRelated("VolumeUnity", *iPropertyVolumeUnity));
    action->AddOutputParameter(new ParameterRelated("VolumeSteps", *iPropertyVolumeSteps));
    action->AddOutputParameter(new ParameterRelated("VolumeMilliDbPerStep", *iPropertyVolumeMilliDbPerStep));
    action->AddOutputParameter(new ParameterRelated("BalanceMax", *iPropertyBalanceMax));
    action->AddOutputParameter(new ParameterRelated("FadeMax", *iPropertyFadeMax));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoCharacteristics);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolume");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionVolumeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionVolumeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionVolume()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Volume");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolume));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoVolume);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetBalance");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionBalanceInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoBalanceInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionBalanceDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BalanceDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoBalanceDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionBalance()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Balance");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyBalance));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoBalance);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetFade");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionFadeInc()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeInc");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoFadeInc);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionFadeDec()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("FadeDec");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoFadeDec);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionFade()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Fade");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyFade));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoFade);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMute");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionMute()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Mute");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMute));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoMute);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionVolumeLimit()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeLimit");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyVolumeLimit));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeLimit);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionUnityGain()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UnityGain");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyUnityGain));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoUnityGain);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("VolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetVolumeOffset()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetVolumeOffset");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("VolumeOffsetBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetVolumeOffset);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Trim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddOutputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::EnableActionSetTrim()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetTrim");
    action->AddInputParameter(new ParameterString("Channel"));
    action->AddInputParameter(new ParameterInt("TrimBinaryMilliDb"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgVolume3Cpp::DoSetTrim);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoCharacteristics(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetVolume(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetVolume(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    VolumeDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoVolume(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetBalance(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    int32_t Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetBalance(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoBalanceInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BalanceInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoBalanceDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BalanceDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoBalance(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetFade(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    int32_t Value = aInvocation.InvocationReadInt("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetFade(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoFadeInc(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    FadeInc(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoFadeDec(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    FadeDec(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoFade(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetMute(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetMute(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::DoMute(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeLimit(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoUnityGain(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoVolumeOffset(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetVolumeOffset(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoTrim(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::DoSetTrim(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgVolume3Cpp::Characteristics(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVolumeMax*/, uint32_t& /*aVolumeUnity*/, uint32_t& /*aVolumeSteps*/, uint32_t& /*aVolumeMilliDbPerStep*/, uint32_t& /*aBalanceMax*/, uint32_t& /*aFadeMax*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetVolume(IDvInvocationStd& /*aInvocation*/, uint32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::VolumeInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::VolumeDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::Volume(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetBalance(IDvInvocationStd& /*aInvocation*/, int32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::BalanceInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::BalanceDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::Balance(IDvInvocationStd& /*aInvocation*/, int32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetFade(IDvInvocationStd& /*aInvocation*/, int32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::FadeInc(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::FadeDec(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::Fade(IDvInvocationStd& /*aInvocation*/, int32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetMute(IDvInvocationStd& /*aInvocation*/, bool /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::Mute(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::VolumeLimit(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::UnityGain(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::VolumeOffset(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t& /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetVolumeOffset(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t /*aVolumeOffsetBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::Trim(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t& /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgVolume3Cpp::SetTrim(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannel*/, int32_t /*aTrimBinaryMilliDb*/)
{
    ASSERTS();
}

