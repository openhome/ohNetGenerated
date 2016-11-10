#include "DvLinnCoUkPrivacy1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkPrivacy1::SetPropertyPolicyVersion(TUint aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    return SetPropertyUint(*iPropertyPolicyVersion, aValue);
}

void DvProviderLinnCoUkPrivacy1::GetPropertyPolicyVersion(TUint& aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    aValue = iPropertyPolicyVersion->Value();
}

TBool DvProviderLinnCoUkPrivacy1::SetPropertyPolicyAgreed(TUint aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    return SetPropertyUint(*iPropertyPolicyAgreed, aValue);
}

void DvProviderLinnCoUkPrivacy1::GetPropertyPolicyAgreed(TUint& aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    aValue = iPropertyPolicyAgreed->Value();
}

TBool DvProviderLinnCoUkPrivacy1::SetPropertyPolicyDetails(const Brx& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    return SetPropertyString(*iPropertyPolicyDetails, aValue);
}

void DvProviderLinnCoUkPrivacy1::GetPropertyPolicyDetails(Brhz& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    aValue.Set(iPropertyPolicyDetails->Value());
}

DvProviderLinnCoUkPrivacy1::DvProviderLinnCoUkPrivacy1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Privacy", 1)
{
    Construct();
}

DvProviderLinnCoUkPrivacy1::DvProviderLinnCoUkPrivacy1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Privacy", 1)
{
    Construct();
}

void DvProviderLinnCoUkPrivacy1::Construct()
{
    iPropertyPolicyVersion = NULL;
    iPropertyPolicyAgreed = NULL;
    iPropertyPolicyDetails = NULL;
}

void DvProviderLinnCoUkPrivacy1::EnablePropertyPolicyVersion()
{
    iPropertyPolicyVersion = new PropertyUint(new ParameterUint("PolicyVersion"));
    iService->AddProperty(iPropertyPolicyVersion); // passes ownership
}

void DvProviderLinnCoUkPrivacy1::EnablePropertyPolicyAgreed()
{
    iPropertyPolicyAgreed = new PropertyUint(new ParameterUint("PolicyAgreed"));
    iService->AddProperty(iPropertyPolicyAgreed); // passes ownership
}

void DvProviderLinnCoUkPrivacy1::EnablePropertyPolicyDetails()
{
    iPropertyPolicyDetails = new PropertyString(new ParameterString("PolicyDetails"));
    iService->AddProperty(iPropertyPolicyDetails); // passes ownership
}

void DvProviderLinnCoUkPrivacy1::EnableActionGetPolicyVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1::DoGetPolicyVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1::EnableActionGetPolicyAgreed()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyAgreed");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyAgreed));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1::DoGetPolicyAgreed);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1::EnableActionGetPolicyDetails()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyDetails");
    action->AddOutputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1::DoGetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1::EnableActionSetPolicyDetails()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPolicyDetails");
    action->AddInputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1::DoSetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1::DoGetPolicyVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    GetPolicyVersion(invocation, respVersion);
}

void DvProviderLinnCoUkPrivacy1::DoGetPolicyAgreed(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    GetPolicyAgreed(invocation, respVersion);
}

void DvProviderLinnCoUkPrivacy1::DoGetPolicyDetails(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respDetails(aInvocation, "Details");
    GetPolicyDetails(invocation, respDetails);
}

void DvProviderLinnCoUkPrivacy1::DoSetPolicyDetails(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Details;
    aInvocation.InvocationReadString("Details", Details);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetPolicyDetails(invocation, Details);
}

void DvProviderLinnCoUkPrivacy1::GetPolicyVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1::GetPolicyAgreed(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1::GetPolicyDetails(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aDetails*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1::SetPolicyDetails(IDvInvocation& /*aResponse*/, const Brx& /*aDetails*/)
{
    ASSERTS();
}

