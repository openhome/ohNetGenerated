#include "DvLinnCoUkExaktInputs1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkExaktInputs1Cpp::SetPropertyAssociations(const std::string& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAssociations, buf);
}

void DvProviderLinnCoUkExaktInputs1Cpp::GetPropertyAssociations(std::string& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    const Brx& val = iPropertyAssociations->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkExaktInputs1Cpp::DvProviderLinnCoUkExaktInputs1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "ExaktInputs", 1)
{
    iPropertyAssociations = NULL;
}

void DvProviderLinnCoUkExaktInputs1Cpp::EnablePropertyAssociations()
{
    iPropertyAssociations = new PropertyString(new ParameterString("Associations"));
    iService->AddProperty(iPropertyAssociations); // passes ownership
}

void DvProviderLinnCoUkExaktInputs1Cpp::EnableActionGetAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddOutputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1Cpp::DoGetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1Cpp::EnableActionSetAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddInputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1Cpp::DoSetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1Cpp::EnableActionClearAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1Cpp::DoClearAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1Cpp::EnableActionInputCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InputCount");
    action->AddOutputParameter(new ParameterUint("InputCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1Cpp::DoInputCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1Cpp::DoGetAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    std::string respDeviceId;
    DvInvocationStd invocation(aInvocation);
    GetAssociation(invocation, InputIndex, respDeviceId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterDeviceId(aInvocation, "DeviceId");
    Brn buf_DeviceId((const TByte*)respDeviceId.c_str(), (TUint)respDeviceId.length());
    respWriterDeviceId.Write(buf_DeviceId);
    aInvocation.InvocationWriteStringEnd("DeviceId");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExaktInputs1Cpp::DoSetAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t InputIndex = aInvocation.InvocationReadUint("InputIndex");
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetAssociation(invocation, InputIndex, DeviceId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExaktInputs1Cpp::DoClearAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearAssociation(invocation, InputIndex);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExaktInputs1Cpp::DoInputCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respInputCount;
    DvInvocationStd invocation(aInvocation);
    InputCount(invocation, respInputCount);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterInputCount(aInvocation, "InputCount");
    respWriterInputCount.Write(respInputCount);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExaktInputs1Cpp::GetAssociation(IDvInvocationStd& /*aInvocation*/, uint32_t /*aInputIndex*/, std::string& /*aDeviceId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1Cpp::SetAssociation(IDvInvocationStd& /*aInvocation*/, uint32_t /*aInputIndex*/, const std::string& /*aDeviceId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1Cpp::ClearAssociation(IDvInvocationStd& /*aInvocation*/, uint32_t /*aInputIndex*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1Cpp::InputCount(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aInputCount*/)
{
    ASSERTS();
}

