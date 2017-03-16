#include "DvLinnCoUkExaktInputs1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkExaktInputs1::SetPropertyAssociations(const Brx& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    return SetPropertyString(*iPropertyAssociations, aValue);
}

void DvProviderLinnCoUkExaktInputs1::GetPropertyAssociations(Brhz& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    aValue.Set(iPropertyAssociations->Value());
}

DvProviderLinnCoUkExaktInputs1::DvProviderLinnCoUkExaktInputs1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "ExaktInputs", 1)
{
    Construct();
}

DvProviderLinnCoUkExaktInputs1::DvProviderLinnCoUkExaktInputs1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "ExaktInputs", 1)
{
    Construct();
}

void DvProviderLinnCoUkExaktInputs1::Construct()
{
    iPropertyAssociations = NULL;
}

void DvProviderLinnCoUkExaktInputs1::EnablePropertyAssociations()
{
    iPropertyAssociations = new PropertyString(new ParameterString("Associations"));
    iService->AddProperty(iPropertyAssociations); // passes ownership
}

void DvProviderLinnCoUkExaktInputs1::EnableActionGetAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddOutputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1::DoGetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1::EnableActionSetAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddInputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1::DoSetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1::EnableActionClearAssociation()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1::DoClearAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1::EnableActionInputCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InputCount");
    action->AddOutputParameter(new ParameterUint("InputCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1::DoInputCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1::DoGetAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respDeviceId(aInvocation, "DeviceId");
    GetAssociation(invocation, InputIndex, respDeviceId);
}

void DvProviderLinnCoUkExaktInputs1::DoSetAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAssociation(invocation, InputIndex, DeviceId);
}

void DvProviderLinnCoUkExaktInputs1::DoClearAssociation(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearAssociation(invocation, InputIndex);
}

void DvProviderLinnCoUkExaktInputs1::DoInputCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respInputCount(aInvocation, "InputCount");
    InputCount(invocation, respInputCount);
}

void DvProviderLinnCoUkExaktInputs1::GetAssociation(IDvInvocation& /*aResponse*/, TUint /*aInputIndex*/, IDvInvocationResponseString& /*aDeviceId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1::SetAssociation(IDvInvocation& /*aResponse*/, TUint /*aInputIndex*/, const Brx& /*aDeviceId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1::ClearAssociation(IDvInvocation& /*aResponse*/, TUint /*aInputIndex*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExaktInputs1::InputCount(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aInputCount*/)
{
    ASSERTS();
}

