#include "DvLinnCoUkCloud1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkCloud1::SetPropertyAssociationStatus(const Brx& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    return SetPropertyString(*iPropertyAssociationStatus, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyAssociationStatus(Brhz& aValue)
{
    ASSERT(iPropertyAssociationStatus != NULL);
    aValue.Set(iPropertyAssociationStatus->Value());
}

TBool DvProviderLinnCoUkCloud1::SetPropertyControlEnabled(TBool aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    return SetPropertyBool(*iPropertyControlEnabled, aValue);
}

void DvProviderLinnCoUkCloud1::GetPropertyControlEnabled(TBool& aValue)
{
    ASSERT(iPropertyControlEnabled != NULL);
    aValue = iPropertyControlEnabled->Value();
}

DvProviderLinnCoUkCloud1::DvProviderLinnCoUkCloud1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Cloud", 1)
{
    Construct();
}

DvProviderLinnCoUkCloud1::DvProviderLinnCoUkCloud1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Cloud", 1)
{
    Construct();
}

void DvProviderLinnCoUkCloud1::Construct()
{
    iPropertyAssociationStatus = NULL;
    iPropertyControlEnabled = NULL;
}

void DvProviderLinnCoUkCloud1::EnablePropertyAssociationStatus()
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

void DvProviderLinnCoUkCloud1::EnablePropertyControlEnabled()
{
    iPropertyControlEnabled = new PropertyBool(new ParameterBool("ControlEnabled"));
    iService->AddProperty(iPropertyControlEnabled); // passes ownership
}

void DvProviderLinnCoUkCloud1::EnableActionGetChallengeResponse()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChallengeResponse");
    action->AddInputParameter(new ParameterString("Challenge"));
    action->AddOutputParameter(new ParameterString("Response"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetChallengeResponse);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionSetAssociationStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociationStatus");
    action->AddInputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoSetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionGetAssociationStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociationStatus");
    action->AddOutputParameter(new ParameterRelated("Status", *iPropertyAssociationStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetAssociationStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionSetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetControlEnabled");
    action->AddInputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoSetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::EnableActionGetControlEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetControlEnabled");
    action->AddOutputParameter(new ParameterRelated("Enabled", *iPropertyControlEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkCloud1::DoGetControlEnabled);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkCloud1::DoGetChallengeResponse(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Challenge;
    aInvocation.InvocationReadString("Challenge", Challenge);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respResponse(aInvocation, "Response");
    GetChallengeResponse(invocation, Challenge, respResponse);
}

void DvProviderLinnCoUkCloud1::DoSetAssociationStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Status;
    aInvocation.InvocationReadString("Status", Status);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAssociationStatus(invocation, Status);
}

void DvProviderLinnCoUkCloud1::DoGetAssociationStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respStatus(aInvocation, "Status");
    GetAssociationStatus(invocation, respStatus);
}

void DvProviderLinnCoUkCloud1::DoSetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    TBool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetControlEnabled(invocation, Enabled);
}

void DvProviderLinnCoUkCloud1::DoGetControlEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respEnabled(aInvocation, "Enabled");
    GetControlEnabled(invocation, respEnabled);
}

void DvProviderLinnCoUkCloud1::GetChallengeResponse(IDvInvocation& /*aResponse*/, const Brx& /*aChallenge*/, IDvInvocationResponseString& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::SetAssociationStatus(IDvInvocation& /*aResponse*/, const Brx& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::GetAssociationStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::SetControlEnabled(IDvInvocation& /*aResponse*/, TBool /*aEnabled*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkCloud1::GetControlEnabled(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aEnabled*/)
{
    ASSERTS();
}

