#include "CpAvOpenhomeOrgOAuth1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncSetTokenAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncSetTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTokenAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncSetTokenAvOpenhomeOrgOAuth1Cpp::SyncSetTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetTokenAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetToken(aAsync);
}


class SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    std::string& iPublicKey;
};

SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp::SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncClearTokenAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTokenAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearTokenAvOpenhomeOrgOAuth1Cpp::SyncClearTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearTokenAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearToken(aAsync);
}


class SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedToken(aAsync);
}


class SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedToken(aAsync);
}


class SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedTokens(aAsync);
}


class SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedTokens(aAsync);
}


class SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp::SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAllTokens(aAsync);
}


class SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    uint32_t& iUpdateId;
};

SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp::SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aUpdateId)
    : iService(aProxy)
    , iUpdateId(aUpdateId)
{
}

void SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateId(aAsync, iUpdateId);
}


class SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aServiceStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    std::string& iServiceStatusJson;
};

SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp::SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aServiceStatusJson)
    : iService(aProxy)
    , iServiceStatusJson(aServiceStatusJson)
{
}

void SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceStatus(aAsync, iServiceStatusJson);
}


class SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aJobUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    uint32_t& iJobUpdateId;
};

SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp::SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aJobUpdateId)
    : iService(aProxy)
    , iJobUpdateId(aJobUpdateId)
{
}

void SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobUpdateId(aAsync, iJobUpdateId);
}


class SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    std::string& iJobStatusJson;
};

SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp::SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobStatusJson)
    : iService(aProxy)
    , iJobStatusJson(aJobStatusJson)
{
}

void SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatusJson);
}


class SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aSupportedServiceListJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    std::string& iSupportedServiceListJson;
};

SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp::SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aSupportedServiceListJson)
    : iService(aProxy)
    , iSupportedServiceListJson(aSupportedServiceListJson)
{
}

void SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSupportedServices(aAsync, iSupportedServiceListJson);
}


class SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyAvOpenhomeOrgOAuth1Cpp& iService;
    std::string& iJobId;
    std::string& iLoginUrl;
    std::string& iUserCode;
};

SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp::SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp(CpProxyAvOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
    : iService(aProxy)
    , iJobId(aJobId)
    , iLoginUrl(aLoginUrl)
    , iUserCode(aUserCode)
{
}

void SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBeginLimitedInputFlow(aAsync, iJobId, iLoginUrl, iUserCode);
}


CpProxyAvOpenhomeOrgOAuth1Cpp::CpProxyAvOpenhomeOrgOAuth1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "OAuth", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetToken = new Action("SetToken");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionSetToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TokenId");
    iActionSetToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("AesKeyRsaEncrypted");
    iActionSetToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("InitVectorRsaEncrypted");
    iActionSetToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("TokenAesEncrypted");
    iActionSetToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("IsLongLived");
    iActionSetToken->AddInputParameter(param);

    iActionGetPublicKey = new Action("GetPublicKey");
    param = new OpenHome::Net::ParameterString("PublicKey");
    iActionGetPublicKey->AddOutputParameter(param);

    iActionClearToken = new Action("ClearToken");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TokenId");
    iActionClearToken->AddInputParameter(param);

    iActionClearShortLivedToken = new Action("ClearShortLivedToken");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearShortLivedToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TokenId");
    iActionClearShortLivedToken->AddInputParameter(param);

    iActionClearLongLivedToken = new Action("ClearLongLivedToken");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearLongLivedToken->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("TokenId");
    iActionClearLongLivedToken->AddInputParameter(param);

    iActionClearShortLivedTokens = new Action("ClearShortLivedTokens");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearShortLivedTokens->AddInputParameter(param);

    iActionClearLongLivedTokens = new Action("ClearLongLivedTokens");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearLongLivedTokens->AddInputParameter(param);

    iActionClearAllTokens = new Action("ClearAllTokens");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionClearAllTokens->AddInputParameter(param);

    iActionGetUpdateId = new Action("GetUpdateId");
    param = new OpenHome::Net::ParameterUint("UpdateId");
    iActionGetUpdateId->AddOutputParameter(param);

    iActionGetServiceStatus = new Action("GetServiceStatus");
    param = new OpenHome::Net::ParameterString("ServiceStatusJson");
    iActionGetServiceStatus->AddOutputParameter(param);

    iActionGetJobUpdateId = new Action("GetJobUpdateId");
    param = new OpenHome::Net::ParameterUint("JobUpdateId");
    iActionGetJobUpdateId->AddOutputParameter(param);

    iActionGetJobStatus = new Action("GetJobStatus");
    param = new OpenHome::Net::ParameterString("JobStatusJson");
    iActionGetJobStatus->AddOutputParameter(param);

    iActionGetSupportedServices = new Action("GetSupportedServices");
    param = new OpenHome::Net::ParameterString("SupportedServiceListJson");
    iActionGetSupportedServices->AddOutputParameter(param);

    iActionBeginLimitedInputFlow = new Action("BeginLimitedInputFlow");
    param = new OpenHome::Net::ParameterString("ServiceId");
    iActionBeginLimitedInputFlow->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("JobId");
    iActionBeginLimitedInputFlow->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("LoginUrl");
    iActionBeginLimitedInputFlow->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("UserCode");
    iActionBeginLimitedInputFlow->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1Cpp::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1Cpp::UpdateIdPropertyChanged);
    iUpdateId = new PropertyUint("UpdateId", functor);
    AddProperty(iUpdateId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1Cpp::JobUpdateIdPropertyChanged);
    iJobUpdateId = new PropertyUint("JobUpdateId", functor);
    AddProperty(iJobUpdateId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1Cpp::SupportedServicesPropertyChanged);
    iSupportedServices = new PropertyString("SupportedServices", functor);
    AddProperty(iSupportedServices);
}

CpProxyAvOpenhomeOrgOAuth1Cpp::~CpProxyAvOpenhomeOrgOAuth1Cpp()
{
    DestroyService();
    delete iActionSetToken;
    delete iActionGetPublicKey;
    delete iActionClearToken;
    delete iActionClearShortLivedToken;
    delete iActionClearLongLivedToken;
    delete iActionClearShortLivedTokens;
    delete iActionClearLongLivedTokens;
    delete iActionClearAllTokens;
    delete iActionGetUpdateId;
    delete iActionGetServiceStatus;
    delete iActionGetJobUpdateId;
    delete iActionGetJobStatus;
    delete iActionGetSupportedServices;
    delete iActionBeginLimitedInputFlow;
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived)
{
    SyncSetTokenAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetToken->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTokenId.c_str(), (TUint)aTokenId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aAesKeyRsaEncrypted.c_str(), (TUint)aAesKeyRsaEncrypted.length());
        invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aInitVectorRsaEncrypted.c_str(), (TUint)aInitVectorRsaEncrypted.length());
        invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTokenAesEncrypted.c_str(), (TUint)aTokenAesEncrypted.length());
        invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsLongLived));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndSetToken(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetToken"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetPublicKey(std::string& aPublicKey)
{
    SyncGetPublicKeyAvOpenhomeOrgOAuth1Cpp sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPublicKey"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearTokenAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearToken->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTokenId.c_str(), (TUint)aTokenId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearToken(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearToken"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearShortLivedTokenAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearShortLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearShortLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedToken->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTokenId.c_str(), (TUint)aTokenId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearShortLivedToken(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearShortLivedToken"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearLongLivedTokenAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearLongLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearLongLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedToken->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aTokenId.c_str(), (TUint)aTokenId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearLongLivedToken(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearLongLivedToken"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokens(const std::string& aServiceId)
{
    SyncClearShortLivedTokensAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearShortLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearShortLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearShortLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedTokens->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearShortLivedTokens(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearShortLivedTokens"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokens(const std::string& aServiceId)
{
    SyncClearLongLivedTokensAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearLongLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearLongLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearLongLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedTokens->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearLongLivedTokens(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearLongLivedTokens"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncClearAllTokens(const std::string& aServiceId)
{
    SyncClearAllTokensAvOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearAllTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginClearAllTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearAllTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAllTokens->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndClearAllTokens(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearAllTokens"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetUpdateId(uint32_t& aUpdateId)
{
    SyncGetUpdateIdAvOpenhomeOrgOAuth1Cpp sync(*this, aUpdateId);
    BeginGetUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetUpdateId(IAsync& aAsync, uint32_t& aUpdateId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aUpdateId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetServiceStatus(std::string& aServiceStatusJson)
{
    SyncGetServiceStatusAvOpenhomeOrgOAuth1Cpp sync(*this, aServiceStatusJson);
    BeginGetServiceStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetServiceStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServiceStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetServiceStatus(IAsync& aAsync, std::string& aServiceStatusJson)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetServiceStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aServiceStatusJson.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetJobUpdateId(uint32_t& aJobUpdateId)
{
    SyncGetJobUpdateIdAvOpenhomeOrgOAuth1Cpp sync(*this, aJobUpdateId);
    BeginGetJobUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetJobUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetJobUpdateId(IAsync& aAsync, uint32_t& aJobUpdateId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetJobUpdateId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aJobUpdateId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetJobStatus(std::string& aJobStatusJson)
{
    SyncGetJobStatusAvOpenhomeOrgOAuth1Cpp sync(*this, aJobStatusJson);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetJobStatus(IAsync& aAsync, std::string& aJobStatusJson)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetJobStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aJobStatusJson.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncGetSupportedServices(std::string& aSupportedServiceListJson)
{
    SyncGetSupportedServicesAvOpenhomeOrgOAuth1Cpp sync(*this, aSupportedServiceListJson);
    BeginGetSupportedServices(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginGetSupportedServices(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSupportedServices, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSupportedServices->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndGetSupportedServices(IAsync& aAsync, std::string& aSupportedServiceListJson)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSupportedServices"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSupportedServiceListJson.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SyncBeginLimitedInputFlow(const std::string& aServiceId, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
{
    SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1Cpp sync(*this, aJobId, aLoginUrl, aUserCode);
    BeginBeginLimitedInputFlow(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::BeginBeginLimitedInputFlow(const std::string& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBeginLimitedInputFlow, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBeginLimitedInputFlow->InputParameters();
    {
        Brn buf((const TByte*)aServiceId.c_str(), (TUint)aServiceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBeginLimitedInputFlow->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::EndBeginLimitedInputFlow(IAsync& aAsync, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BeginLimitedInputFlow"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aJobId.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aLoginUrl.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUserCode.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertyUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertyJobUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertySupportedServicesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSupportedServicesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::PropertyPublicKey(std::string& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPublicKey->Value();
    aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::PropertyUpdateId(uint32_t& aUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateId = iUpdateId->Value();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::PropertyJobUpdateId(uint32_t& aJobUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobUpdateId = iJobUpdateId->Value();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::PropertySupportedServices(std::string& aSupportedServices) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSupportedServices->Value();
    aSupportedServices.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::UpdateIdPropertyChanged()
{
    ReportEvent(iUpdateIdChanged);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::JobUpdateIdPropertyChanged()
{
    ReportEvent(iJobUpdateIdChanged);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SupportedServicesPropertyChanged()
{
    ReportEvent(iSupportedServicesChanged);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgOAuth1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgOAuth1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgOAuth1Cpp::Version() const
{
  return iCpProxy.Version();
}

