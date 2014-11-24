#include "DvAvOpenhomeOrgCredentials1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgCredentials1::SetPropertyIds(const Brx& aValue)
{
    ASSERT(iPropertyIds != NULL);
    return SetPropertyString(*iPropertyIds, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1::GetPropertyIds(Brhz& aValue)
{
    ASSERT(iPropertyIds != NULL);
    aValue.Set(iPropertyIds->Value());
}

TBool DvProviderAvOpenhomeOrgCredentials1::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

TBool DvProviderAvOpenhomeOrgCredentials1::SetPropertySequenceNumber(TUint aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    return SetPropertyUint(*iPropertySequenceNumber, aValue);
}

void DvProviderAvOpenhomeOrgCredentials1::GetPropertySequenceNumber(TUint& aValue)
{
    ASSERT(iPropertySequenceNumber != NULL);
    aValue = iPropertySequenceNumber->Value();
}

DvProviderAvOpenhomeOrgCredentials1::DvProviderAvOpenhomeOrgCredentials1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Credentials", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgCredentials1::DvProviderAvOpenhomeOrgCredentials1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Credentials", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgCredentials1::Construct()
{
    iPropertyIds = NULL;
    iPropertyPublicKey = NULL;
    iPropertySequenceNumber = NULL;
}

void DvProviderAvOpenhomeOrgCredentials1::EnablePropertyIds()
{
    iPropertyIds = new PropertyString(iDvStack.Env(), new ParameterString("Ids"));
    iService->AddProperty(iPropertyIds); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(iDvStack.Env(), new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1::EnablePropertySequenceNumber()
{
    iPropertySequenceNumber = new PropertyUint(iDvStack.Env(), new ParameterUint("SequenceNumber"));
    iService->AddProperty(iPropertySequenceNumber); // passes ownership
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("UserName"));
    action->AddInputParameter(new ParameterBinary("Password"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionClear()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Clear");
    action->AddInputParameter(new ParameterString("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoClear);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionSetEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetEnabled");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterBool("Enabled"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoSetEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionGet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Get");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("UserName"));
    action->AddOutputParameter(new ParameterBinary("Password"));
    action->AddOutputParameter(new ParameterBool("Enabled"));
    action->AddOutputParameter(new ParameterString("Status"));
    action->AddOutputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoGet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionLogin()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Login");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddOutputParameter(new ParameterString("Token"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionReLogin()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReLogin");
    action->AddInputParameter(new ParameterString("Id"));
    action->AddInputParameter(new ParameterString("CurrentToken"));
    action->AddOutputParameter(new ParameterString("NewToken"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoReLogin);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionGetIds()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIds");
    action->AddOutputParameter(new ParameterRelated("Ids", *iPropertyIds));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoGetIds);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::EnableActionGetSequenceNumber()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSequenceNumber");
    action->AddOutputParameter(new ParameterRelated("SequenceNumber", *iPropertySequenceNumber));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgCredentials1::DoGetSequenceNumber);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgCredentials1::DoSet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    Brhz UserName;
    aInvocation.InvocationReadString("UserName", UserName);
    Brh Password;
    aInvocation.InvocationReadBinary("Password", Password);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Set(invocation, Id, UserName, Password);
}

void DvProviderAvOpenhomeOrgCredentials1::DoClear(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Clear(invocation, Id);
}

void DvProviderAvOpenhomeOrgCredentials1::DoSetEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    TBool Enabled = aInvocation.InvocationReadBool("Enabled");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetEnabled(invocation, Id, Enabled);
}

void DvProviderAvOpenhomeOrgCredentials1::DoGet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respUserName(aInvocation, "UserName");
    DviInvocationResponseBinary respPassword(aInvocation, "Password");
    DviInvocationResponseBool respEnabled(aInvocation, "Enabled");
    DviInvocationResponseString respStatus(aInvocation, "Status");
    DviInvocationResponseString respData(aInvocation, "Data");
    Get(invocation, Id, respUserName, respPassword, respEnabled, respStatus, respData);
}

void DvProviderAvOpenhomeOrgCredentials1::DoLogin(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respToken(aInvocation, "Token");
    Login(invocation, Id, respToken);
}

void DvProviderAvOpenhomeOrgCredentials1::DoReLogin(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Id;
    aInvocation.InvocationReadString("Id", Id);
    Brhz CurrentToken;
    aInvocation.InvocationReadString("CurrentToken", CurrentToken);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respNewToken(aInvocation, "NewToken");
    ReLogin(invocation, Id, CurrentToken, respNewToken);
}

void DvProviderAvOpenhomeOrgCredentials1::DoGetIds(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respIds(aInvocation, "Ids");
    GetIds(invocation, respIds);
}

void DvProviderAvOpenhomeOrgCredentials1::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    GetPublicKey(invocation, respPublicKey);
}

void DvProviderAvOpenhomeOrgCredentials1::DoGetSequenceNumber(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respSequenceNumber(aInvocation, "SequenceNumber");
    GetSequenceNumber(invocation, respSequenceNumber);
}

void DvProviderAvOpenhomeOrgCredentials1::Set(IDvInvocation& /*aResponse*/, const Brx& /*aId*/, const Brx& /*aUserName*/, const Brx& /*aPassword*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::Clear(IDvInvocation& /*aResponse*/, const Brx& /*aId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::SetEnabled(IDvInvocation& /*aResponse*/, const Brx& /*aId*/, TBool /*aEnabled*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::Get(IDvInvocation& /*aResponse*/, const Brx& /*aId*/, IDvInvocationResponseString& /*aUserName*/, IDvInvocationResponseBinary& /*aPassword*/, IDvInvocationResponseBool& /*aEnabled*/, IDvInvocationResponseString& /*aStatus*/, IDvInvocationResponseString& /*aData*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::Login(IDvInvocation& /*aResponse*/, const Brx& /*aId*/, IDvInvocationResponseString& /*aToken*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::ReLogin(IDvInvocation& /*aResponse*/, const Brx& /*aId*/, const Brx& /*aCurrentToken*/, IDvInvocationResponseString& /*aNewToken*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::GetIds(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aIds*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::GetPublicKey(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aPublicKey*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgCredentials1::GetSequenceNumber(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aSequenceNumber*/)
{
    ASSERTS();
}

