#include "DvLinnCoUkZones1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkZones1::SetPropertyInputs(const Brx& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    return SetPropertyString(*iPropertyInputs, aValue);
}

void DvProviderLinnCoUkZones1::GetPropertyInputs(Brhz& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    aValue.Set(iPropertyInputs->Value());
}

TBool DvProviderLinnCoUkZones1::SetPropertyOutputs(const Brx& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    return SetPropertyString(*iPropertyOutputs, aValue);
}

void DvProviderLinnCoUkZones1::GetPropertyOutputs(Brhz& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    aValue.Set(iPropertyOutputs->Value());
}

TBool DvProviderLinnCoUkZones1::SetPropertyMappings(const Brx& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    return SetPropertyString(*iPropertyMappings, aValue);
}

void DvProviderLinnCoUkZones1::GetPropertyMappings(Brhz& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    aValue.Set(iPropertyMappings->Value());
}

DvProviderLinnCoUkZones1::DvProviderLinnCoUkZones1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Zones", 1)
{
    Construct();
}

DvProviderLinnCoUkZones1::DvProviderLinnCoUkZones1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Zones", 1)
{
    Construct();
}

void DvProviderLinnCoUkZones1::Construct()
{
    iPropertyInputs = NULL;
    iPropertyOutputs = NULL;
    iPropertyMappings = NULL;
}

void DvProviderLinnCoUkZones1::EnablePropertyInputs()
{
    iPropertyInputs = new PropertyString(new ParameterString("Inputs"));
    iService->AddProperty(iPropertyInputs); // passes ownership
}

void DvProviderLinnCoUkZones1::EnablePropertyOutputs()
{
    iPropertyOutputs = new PropertyString(new ParameterString("Outputs"));
    iService->AddProperty(iPropertyOutputs); // passes ownership
}

void DvProviderLinnCoUkZones1::EnablePropertyMappings()
{
    iPropertyMappings = new PropertyString(new ParameterString("Mappings"));
    iService->AddProperty(iPropertyMappings); // passes ownership
}

void DvProviderLinnCoUkZones1::EnableActionGetInputs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInputs");
    action->AddOutputParameter(new ParameterRelated("Inputs", *iPropertyInputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1::DoGetInputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1::EnableActionGetOutputs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutputs");
    action->AddOutputParameter(new ParameterRelated("Outputs", *iPropertyOutputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1::DoGetOutputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1::EnableActionGetMappings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMappings");
    action->AddOutputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1::DoGetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1::EnableActionSetMappings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMappings");
    action->AddInputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1::DoSetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1::EnableActionSetMapping()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMapping");
    action->AddInputParameter(new ParameterString("Output"));
    action->AddInputParameter(new ParameterString("Input"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1::DoSetMapping);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1::DoGetInputs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respInputs(aInvocation, "Inputs");
    GetInputs(invocation, respInputs);
}

void DvProviderLinnCoUkZones1::DoGetOutputs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respOutputs(aInvocation, "Outputs");
    GetOutputs(invocation, respOutputs);
}

void DvProviderLinnCoUkZones1::DoGetMappings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respMappings(aInvocation, "Mappings");
    GetMappings(invocation, respMappings);
}

void DvProviderLinnCoUkZones1::DoSetMappings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Mappings;
    aInvocation.InvocationReadString("Mappings", Mappings);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetMappings(invocation, Mappings);
}

void DvProviderLinnCoUkZones1::DoSetMapping(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Output;
    aInvocation.InvocationReadString("Output", Output);
    Brhz Input;
    aInvocation.InvocationReadString("Input", Input);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetMapping(invocation, Output, Input);
}

void DvProviderLinnCoUkZones1::GetInputs(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aInputs*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1::GetOutputs(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aOutputs*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1::GetMappings(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aMappings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1::SetMappings(IDvInvocation& /*aResponse*/, const Brx& /*aMappings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1::SetMapping(IDvInvocation& /*aResponse*/, const Brx& /*aOutput*/, const Brx& /*aInput*/)
{
    ASSERTS();
}

