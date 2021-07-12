#include "DvAvOpenhomeOrgOAuth1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgOAuth1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgOAuth1C(DvDeviceC aDevice);
    TBool SetPropertyPublicKey(const Brx& aValue);
    void GetPropertyPublicKey(Brhz& aValue);
    TBool SetPropertyUpdateId(TUint aValue);
    void GetPropertyUpdateId(TUint& aValue);
    TBool SetPropertyJobUpdateId(TUint aValue);
    void GetPropertyJobUpdateId(TUint& aValue);
    TBool SetPropertySupportedServices(const Brx& aValue);
    void GetPropertySupportedServices(Brhz& aValue);
    void EnablePropertyPublicKey();
    void EnablePropertyUpdateId();
    void EnablePropertyJobUpdateId();
    void EnablePropertySupportedServices();
    void EnableActionSetToken(CallbackOAuth1SetToken aCallback, void* aPtr);
    void EnableActionGetPublicKey(CallbackOAuth1GetPublicKey aCallback, void* aPtr);
    void EnableActionClearToken(CallbackOAuth1ClearToken aCallback, void* aPtr);
    void EnableActionClearShortLivedToken(CallbackOAuth1ClearShortLivedToken aCallback, void* aPtr);
    void EnableActionClearLongLivedToken(CallbackOAuth1ClearLongLivedToken aCallback, void* aPtr);
    void EnableActionClearShortLivedTokens(CallbackOAuth1ClearShortLivedTokens aCallback, void* aPtr);
    void EnableActionClearLongLivedTokens(CallbackOAuth1ClearLongLivedTokens aCallback, void* aPtr);
    void EnableActionClearAllTokens(CallbackOAuth1ClearAllTokens aCallback, void* aPtr);
    void EnableActionGetUpdateId(CallbackOAuth1GetUpdateId aCallback, void* aPtr);
    void EnableActionGetServiceStatus(CallbackOAuth1GetServiceStatus aCallback, void* aPtr);
    void EnableActionGetJobUpdateId(CallbackOAuth1GetJobUpdateId aCallback, void* aPtr);
    void EnableActionGetJobStatus(CallbackOAuth1GetJobStatus aCallback, void* aPtr);
    void EnableActionGetSupportedServices(CallbackOAuth1GetSupportedServices aCallback, void* aPtr);
    void EnableActionBeginLimitedInputFlow(CallbackOAuth1BeginLimitedInputFlow aCallback, void* aPtr);
private:
    void DoSetToken(IDviInvocation& aInvocation);
    void DoGetPublicKey(IDviInvocation& aInvocation);
    void DoClearToken(IDviInvocation& aInvocation);
    void DoClearShortLivedToken(IDviInvocation& aInvocation);
    void DoClearLongLivedToken(IDviInvocation& aInvocation);
    void DoClearShortLivedTokens(IDviInvocation& aInvocation);
    void DoClearLongLivedTokens(IDviInvocation& aInvocation);
    void DoClearAllTokens(IDviInvocation& aInvocation);
    void DoGetUpdateId(IDviInvocation& aInvocation);
    void DoGetServiceStatus(IDviInvocation& aInvocation);
    void DoGetJobUpdateId(IDviInvocation& aInvocation);
    void DoGetJobStatus(IDviInvocation& aInvocation);
    void DoGetSupportedServices(IDviInvocation& aInvocation);
    void DoBeginLimitedInputFlow(IDviInvocation& aInvocation);
private:
    CallbackOAuth1SetToken iCallbackSetToken;
    void* iPtrSetToken;
    CallbackOAuth1GetPublicKey iCallbackGetPublicKey;
    void* iPtrGetPublicKey;
    CallbackOAuth1ClearToken iCallbackClearToken;
    void* iPtrClearToken;
    CallbackOAuth1ClearShortLivedToken iCallbackClearShortLivedToken;
    void* iPtrClearShortLivedToken;
    CallbackOAuth1ClearLongLivedToken iCallbackClearLongLivedToken;
    void* iPtrClearLongLivedToken;
    CallbackOAuth1ClearShortLivedTokens iCallbackClearShortLivedTokens;
    void* iPtrClearShortLivedTokens;
    CallbackOAuth1ClearLongLivedTokens iCallbackClearLongLivedTokens;
    void* iPtrClearLongLivedTokens;
    CallbackOAuth1ClearAllTokens iCallbackClearAllTokens;
    void* iPtrClearAllTokens;
    CallbackOAuth1GetUpdateId iCallbackGetUpdateId;
    void* iPtrGetUpdateId;
    CallbackOAuth1GetServiceStatus iCallbackGetServiceStatus;
    void* iPtrGetServiceStatus;
    CallbackOAuth1GetJobUpdateId iCallbackGetJobUpdateId;
    void* iPtrGetJobUpdateId;
    CallbackOAuth1GetJobStatus iCallbackGetJobStatus;
    void* iPtrGetJobStatus;
    CallbackOAuth1GetSupportedServices iCallbackGetSupportedServices;
    void* iPtrGetSupportedServices;
    CallbackOAuth1BeginLimitedInputFlow iCallbackBeginLimitedInputFlow;
    void* iPtrBeginLimitedInputFlow;
    PropertyString* iPropertyPublicKey;
    PropertyUint* iPropertyUpdateId;
    PropertyUint* iPropertyJobUpdateId;
    PropertyString* iPropertySupportedServices;
};

DvProviderAvOpenhomeOrgOAuth1C::DvProviderAvOpenhomeOrgOAuth1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "OAuth", 1)
{
    iPropertyPublicKey = NULL;
    iPropertyUpdateId = NULL;
    iPropertyJobUpdateId = NULL;
    iPropertySupportedServices = NULL;
}

TBool DvProviderAvOpenhomeOrgOAuth1C::SetPropertyPublicKey(const Brx& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    return SetPropertyString(*iPropertyPublicKey, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1C::GetPropertyPublicKey(Brhz& aValue)
{
    ASSERT(iPropertyPublicKey != NULL);
    aValue.Set(iPropertyPublicKey->Value());
}

TBool DvProviderAvOpenhomeOrgOAuth1C::SetPropertyUpdateId(TUint aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    return SetPropertyUint(*iPropertyUpdateId, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1C::GetPropertyUpdateId(TUint& aValue)
{
    ASSERT(iPropertyUpdateId != NULL);
    aValue = iPropertyUpdateId->Value();
}

TBool DvProviderAvOpenhomeOrgOAuth1C::SetPropertyJobUpdateId(TUint aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    return SetPropertyUint(*iPropertyJobUpdateId, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1C::GetPropertyJobUpdateId(TUint& aValue)
{
    ASSERT(iPropertyJobUpdateId != NULL);
    aValue = iPropertyJobUpdateId->Value();
}

TBool DvProviderAvOpenhomeOrgOAuth1C::SetPropertySupportedServices(const Brx& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    return SetPropertyString(*iPropertySupportedServices, aValue);
}

void DvProviderAvOpenhomeOrgOAuth1C::GetPropertySupportedServices(Brhz& aValue)
{
    ASSERT(iPropertySupportedServices != NULL);
    aValue.Set(iPropertySupportedServices->Value());
}

void DvProviderAvOpenhomeOrgOAuth1C::EnablePropertyPublicKey()
{
    iPropertyPublicKey = new PropertyString(new ParameterString("PublicKey"));
    iService->AddProperty(iPropertyPublicKey); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1C::EnablePropertyUpdateId()
{
    iPropertyUpdateId = new PropertyUint(new ParameterUint("UpdateId"));
    iService->AddProperty(iPropertyUpdateId); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1C::EnablePropertyJobUpdateId()
{
    iPropertyJobUpdateId = new PropertyUint(new ParameterUint("JobUpdateId"));
    iService->AddProperty(iPropertyJobUpdateId); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1C::EnablePropertySupportedServices()
{
    iPropertySupportedServices = new PropertyString(new ParameterString("SupportedServices"));
    iService->AddProperty(iPropertySupportedServices); // passes ownership
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionSetToken(CallbackOAuth1SetToken aCallback, void* aPtr)
{
    iCallbackSetToken = aCallback;
    iPtrSetToken = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    action->AddInputParameter(new ParameterBinary("AesKeyRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("InitVectorRsaEncrypted"));
    action->AddInputParameter(new ParameterBinary("TokenAesEncrypted"));
    action->AddInputParameter(new ParameterBool("IsLongLived"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoSetToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetPublicKey(CallbackOAuth1GetPublicKey aCallback, void* aPtr)
{
    iCallbackGetPublicKey = aCallback;
    iPtrGetPublicKey = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetPublicKey");
    action->AddOutputParameter(new ParameterRelated("PublicKey", *iPropertyPublicKey));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetPublicKey);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearToken(CallbackOAuth1ClearToken aCallback, void* aPtr)
{
    iCallbackClearToken = aCallback;
    iPtrClearToken = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearShortLivedToken(CallbackOAuth1ClearShortLivedToken aCallback, void* aPtr)
{
    iCallbackClearShortLivedToken = aCallback;
    iPtrClearShortLivedToken = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearShortLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearLongLivedToken(CallbackOAuth1ClearLongLivedToken aCallback, void* aPtr)
{
    iCallbackClearLongLivedToken = aCallback;
    iPtrClearLongLivedToken = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedToken");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddInputParameter(new ParameterString("TokenId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearLongLivedToken);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearShortLivedTokens(CallbackOAuth1ClearShortLivedTokens aCallback, void* aPtr)
{
    iCallbackClearShortLivedTokens = aCallback;
    iPtrClearShortLivedTokens = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearShortLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearShortLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearLongLivedTokens(CallbackOAuth1ClearLongLivedTokens aCallback, void* aPtr)
{
    iCallbackClearLongLivedTokens = aCallback;
    iPtrClearLongLivedTokens = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearLongLivedTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearLongLivedTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionClearAllTokens(CallbackOAuth1ClearAllTokens aCallback, void* aPtr)
{
    iCallbackClearAllTokens = aCallback;
    iPtrClearAllTokens = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAllTokens");
    action->AddInputParameter(new ParameterString("ServiceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoClearAllTokens);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetUpdateId(CallbackOAuth1GetUpdateId aCallback, void* aPtr)
{
    iCallbackGetUpdateId = aCallback;
    iPtrGetUpdateId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateId");
    action->AddOutputParameter(new ParameterRelated("UpdateId", *iPropertyUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetServiceStatus(CallbackOAuth1GetServiceStatus aCallback, void* aPtr)
{
    iCallbackGetServiceStatus = aCallback;
    iPtrGetServiceStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetServiceStatus");
    action->AddOutputParameter(new ParameterString("ServiceStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetServiceStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetJobUpdateId(CallbackOAuth1GetJobUpdateId aCallback, void* aPtr)
{
    iCallbackGetJobUpdateId = aCallback;
    iPtrGetJobUpdateId = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobUpdateId");
    action->AddOutputParameter(new ParameterRelated("JobUpdateId", *iPropertyJobUpdateId));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetJobUpdateId);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetJobStatus(CallbackOAuth1GetJobStatus aCallback, void* aPtr)
{
    iCallbackGetJobStatus = aCallback;
    iPtrGetJobStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterString("JobStatusJson"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionGetSupportedServices(CallbackOAuth1GetSupportedServices aCallback, void* aPtr)
{
    iCallbackGetSupportedServices = aCallback;
    iPtrGetSupportedServices = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSupportedServices");
    action->AddOutputParameter(new ParameterRelated("SupportedServiceListJson", *iPropertySupportedServices));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoGetSupportedServices);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::EnableActionBeginLimitedInputFlow(CallbackOAuth1BeginLimitedInputFlow aCallback, void* aPtr)
{
    iCallbackBeginLimitedInputFlow = aCallback;
    iPtrBeginLimitedInputFlow = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BeginLimitedInputFlow");
    action->AddInputParameter(new ParameterString("ServiceId"));
    action->AddOutputParameter(new ParameterString("JobId"));
    action->AddOutputParameter(new ParameterString("LoginUrl"));
    action->AddOutputParameter(new ParameterString("UserCode"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgOAuth1C::DoBeginLimitedInputFlow);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgOAuth1C::DoSetToken(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
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
    ASSERT(iCallbackSetToken != NULL);
    if (0 != iCallbackSetToken(iPtrSetToken, invocationC, invocationCPtr, (const char*)ServiceId.Ptr(), (const char*)TokenId.Ptr(), (const char*)AesKeyRsaEncrypted.Ptr(), AesKeyRsaEncrypted.Bytes(), (const char*)InitVectorRsaEncrypted.Ptr(), InitVectorRsaEncrypted.Bytes(), (const char*)TokenAesEncrypted.Ptr(), TokenAesEncrypted.Bytes(), IsLongLived)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetPublicKey(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* PublicKey;
    ASSERT(iCallbackGetPublicKey != NULL);
    if (0 != iCallbackGetPublicKey(iPtrGetPublicKey, invocationC, invocationCPtr, &PublicKey)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respPublicKey(aInvocation, "PublicKey");
    invocation.StartResponse();
    Brhz bufPublicKey((const TChar*)PublicKey);
    OhNetFreeExternal(PublicKey);
    respPublicKey.Write(bufPublicKey);
    respPublicKey.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearToken(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearToken != NULL);
    if (0 != iCallbackClearToken(iPtrClearToken, invocationC, invocationCPtr, (const char*)ServiceId.Ptr(), (const char*)TokenId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearShortLivedToken(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearShortLivedToken != NULL);
    if (0 != iCallbackClearShortLivedToken(iPtrClearShortLivedToken, invocationC, invocationCPtr, (const char*)ServiceId.Ptr(), (const char*)TokenId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearLongLivedToken(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    Brhz TokenId;
    aInvocation.InvocationReadString("TokenId", TokenId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearLongLivedToken != NULL);
    if (0 != iCallbackClearLongLivedToken(iPtrClearLongLivedToken, invocationC, invocationCPtr, (const char*)ServiceId.Ptr(), (const char*)TokenId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearShortLivedTokens(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearShortLivedTokens != NULL);
    if (0 != iCallbackClearShortLivedTokens(iPtrClearShortLivedTokens, invocationC, invocationCPtr, (const char*)ServiceId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearLongLivedTokens(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearLongLivedTokens != NULL);
    if (0 != iCallbackClearLongLivedTokens(iPtrClearLongLivedTokens, invocationC, invocationCPtr, (const char*)ServiceId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoClearAllTokens(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearAllTokens != NULL);
    if (0 != iCallbackClearAllTokens(iPtrClearAllTokens, invocationC, invocationCPtr, (const char*)ServiceId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetUpdateId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t UpdateId;
    ASSERT(iCallbackGetUpdateId != NULL);
    if (0 != iCallbackGetUpdateId(iPtrGetUpdateId, invocationC, invocationCPtr, &UpdateId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respUpdateId(aInvocation, "UpdateId");
    invocation.StartResponse();
    respUpdateId.Write(UpdateId);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetServiceStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ServiceStatusJson;
    ASSERT(iCallbackGetServiceStatus != NULL);
    if (0 != iCallbackGetServiceStatus(iPtrGetServiceStatus, invocationC, invocationCPtr, &ServiceStatusJson)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respServiceStatusJson(aInvocation, "ServiceStatusJson");
    invocation.StartResponse();
    Brhz bufServiceStatusJson((const TChar*)ServiceStatusJson);
    OhNetFreeExternal(ServiceStatusJson);
    respServiceStatusJson.Write(bufServiceStatusJson);
    respServiceStatusJson.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetJobUpdateId(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t JobUpdateId;
    ASSERT(iCallbackGetJobUpdateId != NULL);
    if (0 != iCallbackGetJobUpdateId(iPtrGetJobUpdateId, invocationC, invocationCPtr, &JobUpdateId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respJobUpdateId(aInvocation, "JobUpdateId");
    invocation.StartResponse();
    respJobUpdateId.Write(JobUpdateId);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetJobStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* JobStatusJson;
    ASSERT(iCallbackGetJobStatus != NULL);
    if (0 != iCallbackGetJobStatus(iPtrGetJobStatus, invocationC, invocationCPtr, &JobStatusJson)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respJobStatusJson(aInvocation, "JobStatusJson");
    invocation.StartResponse();
    Brhz bufJobStatusJson((const TChar*)JobStatusJson);
    OhNetFreeExternal(JobStatusJson);
    respJobStatusJson.Write(bufJobStatusJson);
    respJobStatusJson.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoGetSupportedServices(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SupportedServiceListJson;
    ASSERT(iCallbackGetSupportedServices != NULL);
    if (0 != iCallbackGetSupportedServices(iPtrGetSupportedServices, invocationC, invocationCPtr, &SupportedServiceListJson)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSupportedServiceListJson(aInvocation, "SupportedServiceListJson");
    invocation.StartResponse();
    Brhz bufSupportedServiceListJson((const TChar*)SupportedServiceListJson);
    OhNetFreeExternal(SupportedServiceListJson);
    respSupportedServiceListJson.Write(bufSupportedServiceListJson);
    respSupportedServiceListJson.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgOAuth1C::DoBeginLimitedInputFlow(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ServiceId;
    aInvocation.InvocationReadString("ServiceId", ServiceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* JobId;
    char* LoginUrl;
    char* UserCode;
    ASSERT(iCallbackBeginLimitedInputFlow != NULL);
    if (0 != iCallbackBeginLimitedInputFlow(iPtrBeginLimitedInputFlow, invocationC, invocationCPtr, (const char*)ServiceId.Ptr(), &JobId, &LoginUrl, &UserCode)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respJobId(aInvocation, "JobId");
    DviInvocationResponseString respLoginUrl(aInvocation, "LoginUrl");
    DviInvocationResponseString respUserCode(aInvocation, "UserCode");
    invocation.StartResponse();
    Brhz bufJobId((const TChar*)JobId);
    OhNetFreeExternal(JobId);
    respJobId.Write(bufJobId);
    respJobId.WriteFlush();
    Brhz bufLoginUrl((const TChar*)LoginUrl);
    OhNetFreeExternal(LoginUrl);
    respLoginUrl.Write(bufLoginUrl);
    respLoginUrl.WriteFlush();
    Brhz bufUserCode((const TChar*)UserCode);
    OhNetFreeExternal(UserCode);
    respUserCode.Write(bufUserCode);
    respUserCode.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgOAuth1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgOAuth1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionSetToken(THandle aProvider, CallbackOAuth1SetToken aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionSetToken(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetPublicKey(THandle aProvider, CallbackOAuth1GetPublicKey aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetPublicKey(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearToken(THandle aProvider, CallbackOAuth1ClearToken aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearToken(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearShortLivedToken(THandle aProvider, CallbackOAuth1ClearShortLivedToken aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearShortLivedToken(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearLongLivedToken(THandle aProvider, CallbackOAuth1ClearLongLivedToken aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearLongLivedToken(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearShortLivedTokens(THandle aProvider, CallbackOAuth1ClearShortLivedTokens aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearShortLivedTokens(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearLongLivedTokens(THandle aProvider, CallbackOAuth1ClearLongLivedTokens aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearLongLivedTokens(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionClearAllTokens(THandle aProvider, CallbackOAuth1ClearAllTokens aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionClearAllTokens(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetUpdateId(THandle aProvider, CallbackOAuth1GetUpdateId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetUpdateId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetServiceStatus(THandle aProvider, CallbackOAuth1GetServiceStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetServiceStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetJobUpdateId(THandle aProvider, CallbackOAuth1GetJobUpdateId aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetJobUpdateId(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetJobStatus(THandle aProvider, CallbackOAuth1GetJobStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetJobStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionGetSupportedServices(THandle aProvider, CallbackOAuth1GetSupportedServices aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionGetSupportedServices(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnableActionBeginLimitedInputFlow(THandle aProvider, CallbackOAuth1BeginLimitedInputFlow aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnableActionBeginLimitedInputFlow(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgOAuth1SetPropertyPublicKey(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->SetPropertyPublicKey(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1GetPropertyPublicKey(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->GetPropertyPublicKey(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgOAuth1SetPropertyUpdateId(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->SetPropertyUpdateId(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1GetPropertyUpdateId(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->GetPropertyUpdateId(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgOAuth1SetPropertyJobUpdateId(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->SetPropertyJobUpdateId(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1GetPropertyJobUpdateId(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->GetPropertyJobUpdateId(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgOAuth1SetPropertySupportedServices(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->SetPropertySupportedServices(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1GetPropertySupportedServices(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->GetPropertySupportedServices(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnablePropertyPublicKey(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnablePropertyPublicKey();
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnablePropertyUpdateId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnablePropertyUpdateId();
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnablePropertyJobUpdateId(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnablePropertyJobUpdateId();
}

void STDCALL DvProviderAvOpenhomeOrgOAuth1EnablePropertySupportedServices(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgOAuth1C*>(aProvider)->EnablePropertySupportedServices();
}

