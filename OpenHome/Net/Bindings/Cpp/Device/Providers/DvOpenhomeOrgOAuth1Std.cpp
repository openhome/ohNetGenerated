#include "DvOpenhomeOrgOAuth1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderOpenhomeOrgOAuth1Cpp::SetPropertyPublicKey(const std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPublicKey, buf);
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetPropertyPublicKey(std::string& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    const Brx& val = iPropertyPublicKey->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderOpenhomeOrgOAuth1Cpp::SetPropertyUpdateId(uint32_t aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    return SetPropertyUint(*iPropertyUpdateId, aValue);
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetPropertyUpdateId(uint32_t& aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    aValue = iPropertyUpdateId->Value();
}

bool DvProviderOpenhomeOrgOAuth1Cpp::SetPropertyJobUpdateId(uint32_t aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    return SetPropertyUint(*iPropertyJobUpdateId, aValue);
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetPropertyJobUpdateId(uint32_t& aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    aValue = iPropertyJobUpdateId->Value();
}

bool DvProviderOpenhomeOrgOAuth1Cpp::SetPropertySupportedServices(const std::string& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySupportedServices, buf);
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetPropertySupportedServices(std::string& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    const Brx& val = iPropertySupportedServices->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderOpenhomeOrgOAuth1Cpp::DvProviderOpenhomeOrgOAuth1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "openhome.org", "OAuth", 1)
{
    iPropertyPublicKey = NULL;
    iPropertyUpdateId = NULL;
    iPropertyJobUpdateId = NULL;
    iPropertySupportedServices = NULL;
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnablePropertyUpdateId()
{
    iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
    iService->AddProperty(iPropertyUpdateId); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnablePropertyJobUpdateId()
{
    iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
    iService->AddProperty(iPropertyJobUpdateId); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnablePropertySupportedServices()
{
    iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices"));
    iService->AddProperty(iPropertySupportedServices); // passes ownership
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionSetToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("IsLongLived"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoSetToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetPublicKey()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearShortLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearShortLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearLongLivedToken()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearLongLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearShortLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearShortLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearLongLivedTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearLongLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionClearAllTokens()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAllTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoClearAllTokens);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateId");
    action->AddOutputParameter(new ParameterRelated("UpdateId", *iPropertyUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetServiceStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceStatus");
    action->AddOutputParameter(new ParameterString("ServiceStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetServiceStatus);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetJobUpdateId()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobUpdateId");
    action->AddOutputParameter(new ParameterRelated("JobUpdateId", *iPropertyJobUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetJobUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterString("JobStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionGetSupportedServices()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSupportedServices");
    action->AddOutputParameter(new ParameterRelated("SupportedServiceListJson", *iPropertySupportedServices));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoGetSupportedServices);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::EnableActionBeginLimitedInputFlow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BeginLimitedInputFlow");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddOutputParameter(new ParameterString("JobId"));
    action->AddOutputParameter(new ParameterString("LoginUrl"));
    action->AddOutputParameter(new ParameterString("UserCode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderOpenhomeOrgOAuth1Cpp::DoBeginLimitedInputFlow);
    iService->AddAction(action, functor);
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoSetToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    Brhz buf_TokenId;
    aInvocation.InvocationReadString("TokenId", buf_TokenId);
    std::string TokenId((const char*)buf_TokenId.Ptr(), buf_TokenId.Bytes());
    Brh buf_AesKeyRsaEncrypted;
    aInvocation.InvocationReadBinary("AesKeyRsaEncrypted", buf_AesKeyRsaEncrypted);
    std::string AesKeyRsaEncrypted((const char*)buf_AesKeyRsaEncrypted.Ptr(), buf_AesKeyRsaEncrypted.Bytes());
    Brh buf_InitVectorRsaEncrypted;
    aInvocation.InvocationReadBinary("InitVectorRsaEncrypted", buf_InitVectorRsaEncrypted);
    std::string InitVectorRsaEncrypted((const char*)buf_InitVectorRsaEncrypted.Ptr(), buf_InitVectorRsaEncrypted.Bytes());
    Brh buf_TokenAesEncrypted;
    aInvocation.InvocationReadBinary("TokenAesEncrypted", buf_TokenAesEncrypted);
    std::string TokenAesEncrypted((const char*)buf_TokenAesEncrypted.Ptr(), buf_TokenAesEncrypted.Bytes());
    bool IsLongLived = aInvocation.InvocationReadBool("IsLongLived");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetToken(invocation, ServiceId, TokenId, AesKeyRsaEncrypted, InitVectorRsaEncrypted, TokenAesEncrypted, IsLongLived);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetPublicKey(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respPublicKey;
    DvInvocationStd invocation(aInvocation);
    GetPublicKey(invocation, respPublicKey);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterPublicKey(aInvocation, "PublicKey");
    Brn buf_PublicKey((const TByte*)respPublicKey.c_str(), (TUint)respPublicKey.length());
    respWriterPublicKey.Write(buf_PublicKey);
    aInvocation.InvocationWriteStringEnd("PublicKey");
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    Brhz buf_TokenId;
    aInvocation.InvocationReadString("TokenId", buf_TokenId);
    std::string TokenId((const char*)buf_TokenId.Ptr(), buf_TokenId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearToken(invocation, ServiceId, TokenId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearShortLivedToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    Brhz buf_TokenId;
    aInvocation.InvocationReadString("TokenId", buf_TokenId);
    std::string TokenId((const char*)buf_TokenId.Ptr(), buf_TokenId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearShortLivedToken(invocation, ServiceId, TokenId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearLongLivedToken(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    Brhz buf_TokenId;
    aInvocation.InvocationReadString("TokenId", buf_TokenId);
    std::string TokenId((const char*)buf_TokenId.Ptr(), buf_TokenId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearLongLivedToken(invocation, ServiceId, TokenId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearShortLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearShortLivedTokens(invocation, ServiceId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearLongLivedTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearLongLivedTokens(invocation, ServiceId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoClearAllTokens(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearAllTokens(invocation, ServiceId);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respUpdateId;
    DvInvocationStd invocation(aInvocation);
    GetUpdateId(invocation, respUpdateId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterUpdateId(aInvocation, "UpdateId");
    respWriterUpdateId.Write(respUpdateId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetServiceStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respServiceStatusJson;
    DvInvocationStd invocation(aInvocation);
    GetServiceStatus(invocation, respServiceStatusJson);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterServiceStatusJson(aInvocation, "ServiceStatusJson");
    Brn buf_ServiceStatusJson((const TByte*)respServiceStatusJson.c_str(), (TUint)respServiceStatusJson.length());
    respWriterServiceStatusJson.Write(buf_ServiceStatusJson);
    aInvocation.InvocationWriteStringEnd("ServiceStatusJson");
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetJobUpdateId(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respJobUpdateId;
    DvInvocationStd invocation(aInvocation);
    GetJobUpdateId(invocation, respJobUpdateId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterJobUpdateId(aInvocation, "JobUpdateId");
    respWriterJobUpdateId.Write(respJobUpdateId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respJobStatusJson;
    DvInvocationStd invocation(aInvocation);
    GetJobStatus(invocation, respJobStatusJson);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterJobStatusJson(aInvocation, "JobStatusJson");
    Brn buf_JobStatusJson((const TByte*)respJobStatusJson.c_str(), (TUint)respJobStatusJson.length());
    respWriterJobStatusJson.Write(buf_JobStatusJson);
    aInvocation.InvocationWriteStringEnd("JobStatusJson");
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoGetSupportedServices(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSupportedServiceListJson;
    DvInvocationStd invocation(aInvocation);
    GetSupportedServices(invocation, respSupportedServiceListJson);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSupportedServiceListJson(aInvocation, "SupportedServiceListJson");
    Brn buf_SupportedServiceListJson((const TByte*)respSupportedServiceListJson.c_str(), (TUint)respSupportedServiceListJson.length());
    respWriterSupportedServiceListJson.Write(buf_SupportedServiceListJson);
    aInvocation.InvocationWriteStringEnd("SupportedServiceListJson");
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::DoBeginLimitedInputFlow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ServiceId;
    aInvocation.InvocationReadString("ServiceId", buf_ServiceId);
    std::string ServiceId((const char*)buf_ServiceId.Ptr(), buf_ServiceId.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respJobId;
    std::string respLoginUrl;
    std::string respUserCode;
    DvInvocationStd invocation(aInvocation);
    BeginLimitedInputFlow(invocation, ServiceId, respJobId, respLoginUrl, respUserCode);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterJobId(aInvocation, "JobId");
    Brn buf_JobId((const TByte*)respJobId.c_str(), (TUint)respJobId.length());
    respWriterJobId.Write(buf_JobId);
    aInvocation.InvocationWriteStringEnd("JobId");
    DviInvocationResponseString respWriterLoginUrl(aInvocation, "LoginUrl");
    Brn buf_LoginUrl((const TByte*)respLoginUrl.c_str(), (TUint)respLoginUrl.length());
    respWriterLoginUrl.Write(buf_LoginUrl);
    aInvocation.InvocationWriteStringEnd("LoginUrl");
    DviInvocationResponseString respWriterUserCode(aInvocation, "UserCode");
    Brn buf_UserCode((const TByte*)respUserCode.c_str(), (TUint)respUserCode.length());
    respWriterUserCode.Write(buf_UserCode);
    aInvocation.InvocationWriteStringEnd("UserCode");
    aInvocation.InvocationWriteEnd();
}

void DvProviderOpenhomeOrgOAuth1Cpp::SetToken(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/, const std::string& /*aTokenId*/, const std::string& /*aAesKeyRsaEncrypted*/, const std::string& /*aInitVectorRsaEncrypted*/, const std::string& /*aTokenAesEncrypted*/, bool /*aIsLongLived*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetPublicKey(IDvInvocationStd& /*aInvocation*/, std::string& /*aPublicKey*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearToken(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/, const std::string& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearShortLivedToken(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/, const std::string& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearLongLivedToken(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/, const std::string& /*aTokenId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearShortLivedTokens(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearLongLivedTokens(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::ClearAllTokens(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetUpdateId(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aUpdateId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetServiceStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aServiceStatusJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetJobUpdateId(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aJobUpdateId*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetJobStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aJobStatusJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::GetSupportedServices(IDvInvocationStd& /*aInvocation*/, std::string& /*aSupportedServiceListJson*/)
{
    ASSERTS();
}

void DvProviderOpenhomeOrgOAuth1Cpp::BeginLimitedInputFlow(IDvInvocationStd& /*aInvocation*/, const std::string& /*aServiceId*/, std::string& /*aJobId*/, std::string& /*aLoginUrl*/, std::string& /*aUserCode*/)
{
    ASSERTS();
}

