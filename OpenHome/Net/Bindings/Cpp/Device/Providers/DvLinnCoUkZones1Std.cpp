#include "DvLinnCoUkZones1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkZones1Cpp::SetPropertyInputs(const std::string& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyInputs, buf);
}

void DvProviderLinnCoUkZones1Cpp::GetPropertyInputs(std::string& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    const Brx& val = iPropertyInputs->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkZones1Cpp::SetPropertyOutputs(const std::string& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyOutputs, buf);
}

void DvProviderLinnCoUkZones1Cpp::GetPropertyOutputs(std::string& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    const Brx& val = iPropertyOutputs->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkZones1Cpp::SetPropertyMappings(const std::string& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyMappings, buf);
}

void DvProviderLinnCoUkZones1Cpp::GetPropertyMappings(std::string& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    const Brx& val = iPropertyMappings->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkZones1Cpp::DvProviderLinnCoUkZones1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Zones", 1)
{
    iPropertyInputs = NULL;
    iPropertyOutputs = NULL;
    iPropertyMappings = NULL;
}

void DvProviderLinnCoUkZones1Cpp::EnablePropertyInputs()
{
    iPropertyInputs = new PropertyString(new ParameterString("Inputs"));
    iService->AddProperty(iPropertyInputs); // passes ownership
}

void DvProviderLinnCoUkZones1Cpp::EnablePropertyOutputs()
{
    iPropertyOutputs = new PropertyString(new ParameterString("Outputs"));
    iService->AddProperty(iPropertyOutputs); // passes ownership
}

void DvProviderLinnCoUkZones1Cpp::EnablePropertyMappings()
{
    iPropertyMappings = new PropertyString(new ParameterString("Mappings"));
    iService->AddProperty(iPropertyMappings); // passes ownership
}

void DvProviderLinnCoUkZones1Cpp::EnableActionGetInputs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInputs");
    action->AddOutputParameter(new ParameterRelated("Inputs", *iPropertyInputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1Cpp::DoGetInputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1Cpp::EnableActionGetOutputs()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutputs");
    action->AddOutputParameter(new ParameterRelated("Outputs", *iPropertyOutputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1Cpp::DoGetOutputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1Cpp::EnableActionGetMappings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMappings");
    action->AddOutputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1Cpp::DoGetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1Cpp::EnableActionSetMappings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMappings");
    action->AddInputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1Cpp::DoSetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1Cpp::EnableActionSetMapping()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMapping");
    action->AddInputParameter(new ParameterString("Output"));
    action->AddInputParameter(new ParameterString("Input"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1Cpp::DoSetMapping);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1Cpp::DoGetInputs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respInputs;
    DvInvocationStd invocation(aInvocation);
    GetInputs(invocation, respInputs);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterInputs(aInvocation, "Inputs");
    Brn buf_Inputs((const TByte*)respInputs.c_str(), (TUint)respInputs.length());
    respWriterInputs.Write(buf_Inputs);
    aInvocation.InvocationWriteStringEnd("Inputs");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZones1Cpp::DoGetOutputs(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respOutputs;
    DvInvocationStd invocation(aInvocation);
    GetOutputs(invocation, respOutputs);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterOutputs(aInvocation, "Outputs");
    Brn buf_Outputs((const TByte*)respOutputs.c_str(), (TUint)respOutputs.length());
    respWriterOutputs.Write(buf_Outputs);
    aInvocation.InvocationWriteStringEnd("Outputs");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZones1Cpp::DoGetMappings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respMappings;
    DvInvocationStd invocation(aInvocation);
    GetMappings(invocation, respMappings);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterMappings(aInvocation, "Mappings");
    Brn buf_Mappings((const TByte*)respMappings.c_str(), (TUint)respMappings.length());
    respWriterMappings.Write(buf_Mappings);
    aInvocation.InvocationWriteStringEnd("Mappings");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZones1Cpp::DoSetMappings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Mappings;
    aInvocation.InvocationReadString("Mappings", buf_Mappings);
    std::string Mappings((const char*)buf_Mappings.Ptr(), buf_Mappings.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetMappings(invocation, Mappings);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZones1Cpp::DoSetMapping(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Output;
    aInvocation.InvocationReadString("Output", buf_Output);
    std::string Output((const char*)buf_Output.Ptr(), buf_Output.Bytes());
    Brhz buf_Input;
    aInvocation.InvocationReadString("Input", buf_Input);
    std::string Input((const char*)buf_Input.Ptr(), buf_Input.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetMapping(invocation, Output, Input);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZones1Cpp::GetInputs(IDvInvocationStd& /*aInvocation*/, std::string& /*aInputs*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1Cpp::GetOutputs(IDvInvocationStd& /*aInvocation*/, std::string& /*aOutputs*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1Cpp::GetMappings(IDvInvocationStd& /*aInvocation*/, std::string& /*aMappings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1Cpp::SetMappings(IDvInvocationStd& /*aInvocation*/, const std::string& /*aMappings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkZones1Cpp::SetMapping(IDvInvocationStd& /*aInvocation*/, const std::string& /*aOutput*/, const std::string& /*aInput*/)
{
    ASSERTS();
}

