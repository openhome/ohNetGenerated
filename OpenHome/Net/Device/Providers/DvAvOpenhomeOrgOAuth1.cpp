#include "DvAvOpenhomeOrgOAuth1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgOAuth1::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

TBool DvProviderAvOpenhomeOrgOAuth1::SetPropertyUpdateId(TUint aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    return SetPropertyUint(*iPropertyUpdateId, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1::GetPropertyUpdateId(TUint& aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    aValue = iPropertyUpdateId->Value();
}

TBool DvProviderAvOpenhomeOrgOAuth1::SetPropertyJobUpdateId(TUint aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    return SetPropertyUint(*iPropertyJobUpdateId, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1::GetPropertyJobUpdateId(TUint& aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    aValue = iPropertyJobUpdateId->Value();
}

TBool DvProviderAvOpenhomeOrgOAuth1::SetPropertySupportedServices(const Brx& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    return SetPropertyString(*iPropertySupportedServices, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1::GetPropertySupportedServices(Brhz& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    aValue.Set(iPropertySupportedServices->Value());
}

DvProviderAvOpenhomeOrgOAuth1::DvProviderAvOpenhomeOrgOAuth1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "OAuth", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgOAuth1::DvProviderAvOpenhomeOrgOAuth1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "OAuth", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgOAuth1::Construct()
{
    iPropertyPublicKey = NULL;
    iPropertyUpdateId = NULL;
    iPropertyJobUpdateId = NULL;
    iPropertySupportedServices = NULL;
}

void DvProviderAvOpenhomeOrgOAuth1::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1::EnablePropertyUpdateId()
{
    iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
    iService->AddProperty(iPropertyUpdateId); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1::EnablePropertyJobUpdateId()
{
    iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
    iService->AddProperty(iPropertyJobUpdateId); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1::EnablePropertySupportedServices()
{
    iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices"));
    iService->AddProperty(iPropertySupportedServices); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionSetToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("IsLongLived"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoSetToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearShortLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearShortLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearLongLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearLongLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearShortLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearShortLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearLongLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearLongLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionClearAllTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAllTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoClearAllTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateId");
    action->AddOutputParameter(new ParameterRelated("UpdateId", *iPropertyUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetServiceStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceStatus");
    action->AddOutputParameter(new ParameterString("ServiceStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetServiceStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetJobUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobUpdateId");
    action->AddOutputParameter(new ParameterRelated("JobUpdateId", *iPropertyJobUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetJobUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterString("JobStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionGetSupportedServices()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSupportedServices");
    action->AddOutputParameter(new ParameterRelated("SupportedServiceListJson", *iPropertySupportedServices));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoGetSupportedServices);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::EnableActionBeginLimitedInputFlow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BeginLimitedInputFlow");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddOutputParameter(new ParameterString("JobId"));
    action->AddOutputParameter(new ParameterString("LoginUrl"));
    action->AddOutputParameter(new ParameterString("UserCode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1::DoBeginLimitedInputFlow);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1::DoSetToken(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgOAuth1::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    GetPublicKey(invocation, respPublicKey);
}

void DvProviderAvOpenhomeOrgOAuth1::DoClearToken(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgOAuth1::DoClearShortLivedToken(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgOAuth1::DoClearLongLivedToken(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgOAuth1::DoClearShortLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearShortLivedTokens(invocation, ServiceId);
}

void DvProviderAvOpenhomeOrgOAuth1::DoClearLongLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearLongLivedTokens(invocation, ServiceId);
}

void DvProviderAvOpenhomeOrgOAuth1::DoClearAllTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearAllTokens(invocation, ServiceId);
}

void DvProviderAvOpenhomeOrgOAuth1::DoGetUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respUpdateId(aInvocation, "UpdateId");
    GetUpdateId(invocation, respUpdateId);
}

void DvProviderAvOpenhomeOrgOAuth1::DoGetServiceStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respServiceStatusJson(aInvocation, "ServiceStatusJson");
    GetServiceStatus(invocation, respServiceStatusJson);
}

void DvProviderAvOpenhomeOrgOAuth1::DoGetJobUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respJobUpdateId(aInvocation, "JobUpdateId");
    GetJobUpdateId(invocation, respJobUpdateId);
}

void DvProviderAvOpenhomeOrgOAuth1::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobStatusJson(aInvocation, "JobStatusJson");
    GetJobStatus(invocation, respJobStatusJson);
}

void DvProviderAvOpenhomeOrgOAuth1::DoGetSupportedServices(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSupportedServiceListJson(aInvocation, "SupportedServiceListJson");
    GetSupportedServices(invocation, respSupportedServiceListJson);
}

void DvProviderAvOpenhomeOrgOAuth1::DoBeginLimitedInputFlow(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgOAuth1::SetToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/, const Brx& /*aAesKeyRsaEncrypted*/, const Brx& /*aInitVectorRsaEncrypted*/, const Brx& /*aTokenAesEncrypted*/, TBool /*aIsLongLived*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetPublicKey(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aPublicKey*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearShortLivedToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearLongLivedToken(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, const Brx& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearShortLivedTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearLongLivedTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::ClearAllTokens(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetUpdateId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aUpdateId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetServiceStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aServiceStatusJson*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetJobUpdateId(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aJobUpdateId*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetJobStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJobStatusJson*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::GetSupportedServices(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSupportedServiceListJson*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgOAuth1::BeginLimitedInputFlow(IDvInvocation& /*aResponse*/, const Brx& /*aServiceId*/, IDvInvocationResponseString& /*aJobId*/, IDvInvocationResponseString& /*aLoginUrl*/, IDvInvocationResponseString& /*aUserCode*/)
{
    ASSERTS();
}

