#include "DvLinnCoUkCloud1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkCloud1Cpp::SetPropertyAssociationStatus(const std::string& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAssociationStatus, buf);
}

void DvProviderLinnCoUkCloud1Cpp::GetPropertyAssociationStatus(std::string& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    const Brx& val = iPropertyAssociationStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkCloud1Cpp::SetPropertyControlEnabled(bool aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    return SetPropertyBool(*iPropertyControlEnabled, aValue);
}

void DvProviderLinnCoUkCloud1Cpp::GetPropertyControlEnabled(bool& aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    aValue = iPropertyControlEnabled->Value();
}

DvProviderLinnCoUkCloud1Cpp::DvProviderLinnCoUkCloud1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Cloud", 1)
{
    iPropertyAssociationStatus = NULL;
    iPropertyControlEnabled = NULL;
}

void DvProviderLinnCoUkCloud1Cpp::EnablePropertyAssociationStatus()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Associated";
    allowedValues[index++] = (TChar*)"NotAssociated";
    allowedValues[index++] = (TChar*)"Unconfigured";
    iPropertyAssociationStatus = new PropertyString(new ParameterString("AssociationStatus", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyAssociationStatus); // passes ownership
}

void DvProviderLinnCoUkCloud1Cpp::EnablePropertyControlEnabled()
{
    iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
    iService->AddProperty(iPropertyControlEnabled); // passes ownership
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetChallengeResponse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionSetAssociationStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociationStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoSetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetAssociationStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociationStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionSetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetControlEnabled");
    action->AddInputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoSetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::EnableActionGetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetControlEnabled");
    action->AddOutputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1Cpp::DoGetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1Cpp::DoGetChallengeResponse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Challenge;
    aInvocation.InvocationReadString("Challenge", buf_Challenge);
    std::string Challenge((const char*)buf_Challenge.Ptr(), buf_Challenge.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respResponse;
    DvInvocationStd invocation(aInvocation);
    GetChallengeResponse(invocation, Challenge, respResponse);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterResponse(aInvocation, "Response");
    Brn buf_Response((const TByte*)respResponse.c_str(), (TUint)respResponse.length());
    respWriterResponse.Write(buf_Response);
    aInvocation.InvocationWriteStringEnd("Response");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoSetAssociationStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Status;
    aInvocation.InvocationReadString("Status", buf_Status);
    std::string Status((const char*)buf_Status.Ptr(), buf_Status.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetAssociationStatus(invocation, Status);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoGetAssociationStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respStatus;
    DvInvocationStd invocation(aInvocation);
    GetAssociationStatus(invocation, respStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterStatus(aInvocation, "Status");
    Brn buf_Status((const TByte*)respStatus.c_str(), (TUint)respStatus.length());
    respWriterStatus.Write(buf_Status);
    aInvocation.InvocationWriteStringEnd("Status");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoSetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetControlEnabled(invocation, Enabled);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::DoGetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respEnabled;
    DvInvocationStd invocation(aInvocation);
    GetControlEnabled(invocation, respEnabled);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterEnabled(aInvocation, "Enabled");
    respWriterEnabled.Write(respEnabled);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkCloud1Cpp::GetChallengeResponse(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChallenge*/, std::string& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::SetAssociationStatus(IDvInvocationStd& /*aInvocation*/, const std::string& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::GetAssociationStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::SetControlEnabled(IDvInvocationStd& /*aInvocation*/, bool /*aEnabled*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1Cpp::GetControlEnabled(IDvInvocationStd& /*aInvocation*/, bool& /*aEnabled*/)
{
    ASSERTS();
}

