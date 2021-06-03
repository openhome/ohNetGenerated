#include "DvOpenhomeOrgOAuth1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderOpenhomeOrgOAuth1::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderOpenhomeOrgOAuth1::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

TBool DvProviderOpenhomeOrgOAuth1::SetPropertyUpdateId(TUint aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    return SetPropertyUint(*iPropertyUpdateId, aValue);
}

void DvProviderOpenhomeOrgOAuth1::GetPropertyUpdateId(TUint& aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    aValue = iPropertyUpdateId->Value();
}

TBool DvProviderOpenhomeOrgOAuth1::SetPropertyJobUpdateId(TUint aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    return SetPropertyUint(*iPropertyJobUpdateId, aValue);
}

void DvProviderOpenhomeOrgOAuth1::GetPropertyJobUpdateId(TUint& aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    aValue = iPropertyJobUpdateId->Value();
}

TBool DvProviderOpenhomeOrgOAuth1::SetPropertySupportedServices(const Brx& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    return SetPropertyString(*iPropertySupportedServices, aValue);
}

void DvProviderOpenhomeOrgOAuth1::GetPropertySupportedServices(Brhz& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    aValue.Set(iPropertySupportedServices->Value());
}

DvProviderOpenhomeOrgOAuth1::DvProviderOpenhomeOrgOAuth1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "openhome.org", "OAuth", 1)
{
    Construct();
}

DvProviderOpenhomeOrgOAuth1::DvProviderOpenhomeOrgOAuth1(DviDevice& aDevice)
    : DvProvider(aDevice, "openhome.org", "OAuth", 1)
{
    Construct();
}

void DvProviderOpenhomeOrgOAuth1::Construct()
{
    iPropertyPublicKey = NULL;
    iPropertyUpdateId = NULL;
    iPropertyJobUpdateId = NULL;
    iPropertySupportedServices = NULL;
}

void DvProviderOpenhomeOrgOAuth1::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1::EnablePropertyUpdateId()
{
    iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
    iService->AddProperty(iPropertyUpdateId); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1::EnablePropertyJobUpdateId()
{
    iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
    iService->AddProperty(iPropertyJobUpdateId); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1::EnablePropertySupportedServices()
{
    iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices"));
    iService->AddProperty(iPropertySupportedServices); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1::EnableActionSetToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("IsLongLived"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoSetToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearShortLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearShortLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearLongLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearLongLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearShortLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearShortLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearLongLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearLongLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionClearAllTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAllTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoClearAllTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateId");
    action->AddOutputParameter(new ParameterRelated("UpdateId", *iPropertyUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetServiceStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceStatus");
    action->AddOutputParameter(new ParameterString("ServiceStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetServiceStatus);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetJobUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobUpdateId");
    action->AddOutputParameter(new ParameterRelated("JobUpdateId", *iPropertyJobUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetJobUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterString("JobStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionGetSupportedServices()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSupportedServices");
    action->AddOutputParameter(new ParameterRelated("SupportedServiceListJson", *iPropertySupportedServices));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoGetSupportedServices);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::EnableActionBeginLimitedInputFlow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BeginLimitedInputFlow");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddOutputParameter(new ParameterString("JobId"));
    action->AddOutputParameter(new ParameterString("LoginUrl"));
    action->AddOutputParameter(new ParameterString("UserCode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1::DoBeginLimitedInputFlow);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1::DoSetToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    Brh AesKeyRsaEncrypted;
    aInvocation.InvocationReadBinary("AesKeyRsaEncrypted", AesKeyRsaEncrypted);
    Brh InitVectorRsaEncrypted;
    aInvocation.InvocationReadBinary("InitVectorRsaEncrypted", InitVectorRsaEncrypted);
    Brh TokenAesEncrypted;
    aInvocation.InvocationReadBinary("TokenAesEncrypted", TokenAesEncrypted);
    TBool IsLongLived = aInvocation.InvocationReadBool("IsLongLived");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetToken(invocation, ServiceId, TokenId, AesKeyRsaEncrypted, InitVectorRsaEncrypted, TokenAesEncrypted, IsLongLived);
}

void DvProviderOpenhomeOrgOAuth1::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    GetPublicKey(invocation, respPublicKey);
}

void DvProviderOpenhomeOrgOAuth1::DoClearToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearToken(invocation, ServiceId, TokenId);
}

void DvProviderOpenhomeOrgOAuth1::DoClearShortLivedToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearShortLivedToken(invocation, ServiceId, TokenId);
}

void DvProviderOpenhomeOrgOAuth1::DoClearLongLivedToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearLongLivedToken(invocation, ServiceId, TokenId);
}

void DvProviderOpenhomeOrgOAuth1::DoClearShortLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearShortLivedTokens(invocation, ServiceId);
}

void DvProviderOpenhomeOrgOAuth1::DoClearLongLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearLongLivedTokens(invocation, ServiceId);
}

void DvProviderOpenhomeOrgOAuth1::DoClearAllTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearAllTokens(invocation, ServiceId);
}

void DvProviderOpenhomeOrgOAuth1::DoGetUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respUpdateId(aInvocation, "UpdateId");
    GetUpdateId(invocation, respUpdateId);
}

void DvProviderOpenhomeOrgOAuth1::DoGetServiceStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respServiceStatusJson(aInvocation, "ServiceStatusJson");
    GetServiceStatus(invocation, respServiceStatusJson);
}

void DvProviderOpenhomeOrgOAuth1::DoGetJobUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respJobUpdateId(aInvocation, "JobUpdateId");
    GetJobUpdateId(invocation, respJobUpdateId);
}

void DvProviderOpenhomeOrgOAuth1::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobStatusJson(aInvocation, "JobStatusJson");
    GetJobStatus(invocation, respJobStatusJson);
}

void DvProviderOpenhomeOrgOAuth1::DoGetSupportedServices(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSupportedServiceListJson(aInvocation, "SupportedServiceListJson");
    GetSupportedServices(invocation, respSupportedServiceListJson);
}

void DvProviderOpenhomeOrgOAuth1::DoBeginLimitedInputFlow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobId(aInvocation, "JobId");
    DviInvocationResponseString respLoginUrl(aInvocation, "LoginUrl");
    DviInvocationResponseString respUserCode(aInvocation, "UserCode");
    BeginLimitedInputFlow(invocation, ServiceId, respJobId, respLoginUrl, respUserCode);
}

void DvProviderOpenhomeOrgOAuth1::SetToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/, const Brx& /*aAesKeyRsaEncrypted*/, const Brx& /*aInitVectorRsaEncrypted*/, const Brx& /*aTokenAesEncrypted*/, TBool /*aIsLongLived*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetPublicKey(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aPublicKey*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearShortLivedToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearLongLivedToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearShortLivedTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearLongLivedTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::ClearAllTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetUpdateId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aUpdateId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetServiceStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aServiceStatusJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetJobUpdateId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aJobUpdateId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetJobStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJobStatusJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::GetSupportedServices(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSupportedServiceListJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1::BeginLimitedInputFlow(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, IDvInvocationResponseString& /*aJobId*/, IDvInvocationResponseString& /*aLoginUrl*/, IDvInvocationResponseString& /*aUserCode*/)
{
    ASSERTS();
}

