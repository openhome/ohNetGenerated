#include "DvLinnCoUkPrivacy1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkPrivacy1Cpp::SetPropertyPolicyVersion(uint32_t aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    return SetPropertyUint(*iPropertyPolicyVersion, aValue);
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPropertyPolicyVersion(uint32_t& aValue)
{
    ASSERT(iPropertyPolicyVersion != NULL);
    aValue = iPropertyPolicyVersion->Value();
}

bool DvProviderLinnCoUkPrivacy1Cpp::SetPropertyPolicyAgreed(uint32_t aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    return SetPropertyUint(*iPropertyPolicyAgreed, aValue);
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPropertyPolicyAgreed(uint32_t& aValue)
{
    ASSERT(iPropertyPolicyAgreed != NULL);
    aValue = iPropertyPolicyAgreed->Value();
}

bool DvProviderLinnCoUkPrivacy1Cpp::SetPropertyPolicyDetails(const std::string& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPolicyDetails, buf);
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPropertyPolicyDetails(std::string& aValue)
{
    ASSERT(iPropertyPolicyDetails != NULL);
    const Brx& val = iPropertyPolicyDetails->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkPrivacy1Cpp::DvProviderLinnCoUkPrivacy1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Privacy", 1)
{
    iPropertyPolicyVersion = NULL;
    iPropertyPolicyAgreed = NULL;
    iPropertyPolicyDetails = NULL;
}

void DvProviderLinnCoUkPrivacy1Cpp::EnablePropertyPolicyVersion()
{
    iPropertyPolicyVersion = new PropertyUint(new ParameterUint("PolicyVersion"));
    iService->AddProperty(iPropertyPolicyVersion); // passes ownership
}

void DvProviderLinnCoUkPrivacy1Cpp::EnablePropertyPolicyAgreed()
{
    iPropertyPolicyAgreed = new PropertyUint(new ParameterUint("PolicyAgreed"));
    iService->AddProperty(iPropertyPolicyAgreed); // passes ownership
}

void DvProviderLinnCoUkPrivacy1Cpp::EnablePropertyPolicyDetails()
{
    iPropertyPolicyDetails = new PropertyString(new ParameterString("PolicyDetails"));
    iService->AddProperty(iPropertyPolicyDetails); // passes ownership
}

void DvProviderLinnCoUkPrivacy1Cpp::EnableActionGetPolicyVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1Cpp::EnableActionGetPolicyAgreed()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyAgreed");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyPolicyAgreed));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyAgreed);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1Cpp::EnableActionSetPolicyAgreed()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPolicyAgreed");
    action->AddInputParameter(new ParameterRelated("Agreed", *iPropertyPolicyAgreed));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1Cpp::DoSetPolicyAgreed);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1Cpp::EnableActionGetPolicyDetails()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPolicyDetails");
    action->AddOutputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1Cpp::EnableActionSetPolicyDetails()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetPolicyDetails");
    action->AddInputParameter(new ParameterRelated("Details", *iPropertyPolicyDetails));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkPrivacy1Cpp::DoSetPolicyDetails);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respVersion;
    DvInvocationStd invocation(aInvocation);
    GetPolicyVersion(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterVersion(aInvocation, "Version");
    respWriterVersion.Write(respVersion);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyAgreed(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respVersion;
    DvInvocationStd invocation(aInvocation);
    GetPolicyAgreed(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterVersion(aInvocation, "Version");
    respWriterVersion.Write(respVersion);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkPrivacy1Cpp::DoSetPolicyAgreed(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Agreed = aInvocation.InvocationReadUint("Agreed");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetPolicyAgreed(invocation, Agreed);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkPrivacy1Cpp::DoGetPolicyDetails(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respDetails;
    DvInvocationStd invocation(aInvocation);
    GetPolicyDetails(invocation, respDetails);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterDetails(aInvocation, "Details");
    Brn buf_Details((const TByte*)respDetails.c_str(), (TUint)respDetails.length());
    respWriterDetails.Write(buf_Details);
    aInvocation.InvocationWriteStringEnd("Details");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkPrivacy1Cpp::DoSetPolicyDetails(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Details;
    aInvocation.InvocationReadString("Details", buf_Details);
    std::string Details((const char*)buf_Details.Ptr(), buf_Details.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetPolicyDetails(invocation, Details);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPolicyVersion(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPolicyAgreed(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1Cpp::SetPolicyAgreed(IDvInvocationStd& /*aInvocation*/, uint32_t /*aAgreed*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1Cpp::GetPolicyDetails(IDvInvocationStd& /*aInvocation*/, std::string& /*aDetails*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkPrivacy1Cpp::SetPolicyDetails(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDetails*/)
{
    ASSERTS();
}

