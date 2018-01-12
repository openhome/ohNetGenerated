#include "DvLinnCoUkLipSync1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkLipSync1Cpp::SetPropertyDelay(uint32_t aValue)
{
    ASSERT(iPropertyDelay != NULL);
    return SetPropertyUint(*iPropertyDelay, aValue);
}

void DvProviderLinnCoUkLipSync1Cpp::GetPropertyDelay(uint32_t& aValue)
{
    ASSERT(iPropertyDelay != NULL);
    aValue = iPropertyDelay->Value();
}

bool DvProviderLinnCoUkLipSync1Cpp::SetPropertyDelayMinimum(uint32_t aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    return SetPropertyUint(*iPropertyDelayMinimum, aValue);
}

void DvProviderLinnCoUkLipSync1Cpp::GetPropertyDelayMinimum(uint32_t& aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    aValue = iPropertyDelayMinimum->Value();
}

bool DvProviderLinnCoUkLipSync1Cpp::SetPropertyDelayMaximum(uint32_t aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    return SetPropertyUint(*iPropertyDelayMaximum, aValue);
}

void DvProviderLinnCoUkLipSync1Cpp::GetPropertyDelayMaximum(uint32_t& aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    aValue = iPropertyDelayMaximum->Value();
}

DvProviderLinnCoUkLipSync1Cpp::DvProviderLinnCoUkLipSync1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "LipSync", 1)
{
    iPropertyDelay = NULL;
    iPropertyDelayMinimum = NULL;
    iPropertyDelayMaximum = NULL;
}

void DvProviderLinnCoUkLipSync1Cpp::EnablePropertyDelay()
{
    iPropertyDelay = new PropertyUint(new ParameterUint("Delay"));
    iService->AddProperty(iPropertyDelay); // passes ownership
}

void DvProviderLinnCoUkLipSync1Cpp::EnablePropertyDelayMinimum()
{
    iPropertyDelayMinimum = new PropertyUint(new ParameterUint("DelayMinimum"));
    iService->AddProperty(iPropertyDelayMinimum); // passes ownership
}

void DvProviderLinnCoUkLipSync1Cpp::EnablePropertyDelayMaximum()
{
    iPropertyDelayMaximum = new PropertyUint(new ParameterUint("DelayMaximum"));
    iService->AddProperty(iPropertyDelayMaximum); // passes ownership
}

void DvProviderLinnCoUkLipSync1Cpp::EnableActionSetDelay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDelay");
    action->AddInputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1Cpp::DoSetDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1Cpp::EnableActionDelay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Delay");
    action->AddOutputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1Cpp::DoDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1Cpp::EnableActionDelayMinimum()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMinimum");
    action->AddOutputParameter(new ParameterRelated("Min", *iPropertyDelayMinimum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1Cpp::DoDelayMinimum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1Cpp::EnableActionDelayMaximum()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMaximum");
    action->AddOutputParameter(new ParameterRelated("Max", *iPropertyDelayMaximum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1Cpp::DoDelayMaximum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1Cpp::DoSetDelay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Delay = aInvocation.InvocationReadUint("Delay");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetDelay(invocation, Delay);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkLipSync1Cpp::DoDelay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respDelay;
    DvInvocationStd invocation(aInvocation);
    Delay(invocation, respDelay);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterDelay(aInvocation, "Delay");
    respWriterDelay.Write(respDelay);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkLipSync1Cpp::DoDelayMinimum(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respMin;
    DvInvocationStd invocation(aInvocation);
    DelayMinimum(invocation, respMin);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterMin(aInvocation, "Min");
    respWriterMin.Write(respMin);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkLipSync1Cpp::DoDelayMaximum(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respMax;
    DvInvocationStd invocation(aInvocation);
    DelayMaximum(invocation, respMax);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterMax(aInvocation, "Max");
    respWriterMax.Write(respMax);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkLipSync1Cpp::SetDelay(IDvInvocationStd& /*aInvocation*/, uint32_t /*aDelay*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1Cpp::Delay(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aDelay*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1Cpp::DelayMinimum(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aMin*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1Cpp::DelayMaximum(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aMax*/)
{
    ASSERTS();
}

