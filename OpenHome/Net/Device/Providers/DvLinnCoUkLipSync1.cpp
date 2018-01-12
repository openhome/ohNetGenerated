#include "DvLinnCoUkLipSync1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkLipSync1::SetPropertyDelay(TUint aValue)
{
    ASSERT(iPropertyDelay != NULL);
    return SetPropertyUint(*iPropertyDelay, aValue);
}

void DvProviderLinnCoUkLipSync1::GetPropertyDelay(TUint& aValue)
{
    ASSERT(iPropertyDelay != NULL);
    aValue = iPropertyDelay->Value();
}

TBool DvProviderLinnCoUkLipSync1::SetPropertyDelayMinimum(TUint aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    return SetPropertyUint(*iPropertyDelayMinimum, aValue);
}

void DvProviderLinnCoUkLipSync1::GetPropertyDelayMinimum(TUint& aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    aValue = iPropertyDelayMinimum->Value();
}

TBool DvProviderLinnCoUkLipSync1::SetPropertyDelayMaximum(TUint aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    return SetPropertyUint(*iPropertyDelayMaximum, aValue);
}

void DvProviderLinnCoUkLipSync1::GetPropertyDelayMaximum(TUint& aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    aValue = iPropertyDelayMaximum->Value();
}

DvProviderLinnCoUkLipSync1::DvProviderLinnCoUkLipSync1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "LipSync", 1)
{
    Construct();
}

DvProviderLinnCoUkLipSync1::DvProviderLinnCoUkLipSync1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "LipSync", 1)
{
    Construct();
}

void DvProviderLinnCoUkLipSync1::Construct()
{
    iPropertyDelay = NULL;
    iPropertyDelayMinimum = NULL;
    iPropertyDelayMaximum = NULL;
}

void DvProviderLinnCoUkLipSync1::EnablePropertyDelay()
{
    iPropertyDelay = new PropertyUint(new ParameterUint("Delay"));
    iService->AddProperty(iPropertyDelay); // passes ownership
}

void DvProviderLinnCoUkLipSync1::EnablePropertyDelayMinimum()
{
    iPropertyDelayMinimum = new PropertyUint(new ParameterUint("DelayMinimum"));
    iService->AddProperty(iPropertyDelayMinimum); // passes ownership
}

void DvProviderLinnCoUkLipSync1::EnablePropertyDelayMaximum()
{
    iPropertyDelayMaximum = new PropertyUint(new ParameterUint("DelayMaximum"));
    iService->AddProperty(iPropertyDelayMaximum); // passes ownership
}

void DvProviderLinnCoUkLipSync1::EnableActionSetDelay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDelay");
    action->AddInputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1::DoSetDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1::EnableActionDelay()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Delay");
    action->AddOutputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1::DoDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1::EnableActionDelayMinimum()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMinimum");
    action->AddOutputParameter(new ParameterRelated("Min", *iPropertyDelayMinimum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1::DoDelayMinimum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1::EnableActionDelayMaximum()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMaximum");
    action->AddOutputParameter(new ParameterRelated("Max", *iPropertyDelayMaximum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1::DoDelayMaximum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1::DoSetDelay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint Delay = aInvocation.InvocationReadUint("Delay");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetDelay(invocation, Delay);
}

void DvProviderLinnCoUkLipSync1::DoDelay(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respDelay(aInvocation, "Delay");
    Delay(invocation, respDelay);
}

void DvProviderLinnCoUkLipSync1::DoDelayMinimum(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respMin(aInvocation, "Min");
    DelayMinimum(invocation, respMin);
}

void DvProviderLinnCoUkLipSync1::DoDelayMaximum(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respMax(aInvocation, "Max");
    DelayMaximum(invocation, respMax);
}

void DvProviderLinnCoUkLipSync1::SetDelay(IDvInvocation& /*aResponse*/, TUint /*aDelay*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1::Delay(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aDelay*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1::DelayMinimum(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aMin*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkLipSync1::DelayMaximum(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aMax*/)
{
    ASSERTS();
}

