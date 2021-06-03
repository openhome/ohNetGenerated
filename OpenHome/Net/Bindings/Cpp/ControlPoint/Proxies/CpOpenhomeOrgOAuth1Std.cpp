#include "CpOpenhomeOrgOAuth1.h"
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


class SyncSetTokenOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncSetTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTokenOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncSetTokenOpenhomeOrgOAuth1Cpp::SyncSetTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetTokenOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetToken(aAsync);
}


class SyncGetPublicKeyOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetPublicKeyOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    std::string& iPublicKey;
};

SyncGetPublicKeyOpenhomeOrgOAuth1Cpp::SyncGetPublicKeyOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncClearTokenOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTokenOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearTokenOpenhomeOrgOAuth1Cpp::SyncClearTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearTokenOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearToken(aAsync);
}


class SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedToken(aAsync);
}


class SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedToken(aAsync);
}


class SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedTokens(aAsync);
}


class SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedTokens(aAsync);
}


class SyncClearAllTokensOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncClearAllTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAllTokensOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
};

SyncClearAllTokensOpenhomeOrgOAuth1Cpp::SyncClearAllTokensOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearAllTokensOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAllTokens(aAsync);
}


class SyncGetUpdateIdOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateIdOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateIdOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    uint32_t& iUpdateId;
};

SyncGetUpdateIdOpenhomeOrgOAuth1Cpp::SyncGetUpdateIdOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aUpdateId)
    : iService(aProxy)
    , iUpdateId(aUpdateId)
{
}

void SyncGetUpdateIdOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateId(aAsync, iUpdateId);
}


class SyncGetServiceStatusOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetServiceStatusOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aServiceStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceStatusOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    std::string& iServiceStatusJson;
};

SyncGetServiceStatusOpenhomeOrgOAuth1Cpp::SyncGetServiceStatusOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aServiceStatusJson)
    : iService(aProxy)
    , iServiceStatusJson(aServiceStatusJson)
{
}

void SyncGetServiceStatusOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceStatus(aAsync, iServiceStatusJson);
}


class SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aJobUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    uint32_t& iJobUpdateId;
};

SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp::SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, uint32_t& aJobUpdateId)
    : iService(aProxy)
    , iJobUpdateId(aJobUpdateId)
{
}

void SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobUpdateId(aAsync, iJobUpdateId);
}


class SyncGetJobStatusOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetJobStatusOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    std::string& iJobStatusJson;
};

SyncGetJobStatusOpenhomeOrgOAuth1Cpp::SyncGetJobStatusOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobStatusJson)
    : iService(aProxy)
    , iJobStatusJson(aJobStatusJson)
{
}

void SyncGetJobStatusOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatusJson);
}


class SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aSupportedServiceListJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    std::string& iSupportedServiceListJson;
};

SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp::SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aSupportedServiceListJson)
    : iService(aProxy)
    , iSupportedServiceListJson(aSupportedServiceListJson)
{
}

void SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSupportedServices(aAsync, iSupportedServiceListJson);
}


class SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp : public SyncProxyAction
{
public:
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp() {}
private:
    CpProxyOpenhomeOrgOAuth1Cpp& iService;
    std::string& iJobId;
    std::string& iLoginUrl;
    std::string& iUserCode;
};

SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp::SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp(CpProxyOpenhomeOrgOAuth1Cpp& aProxy, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
    : iService(aProxy)
    , iJobId(aJobId)
    , iLoginUrl(aLoginUrl)
    , iUserCode(aUserCode)
{
}

void SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBeginLimitedInputFlow(aAsync, iJobId, iLoginUrl, iUserCode);
}


CpProxyOpenhomeOrgOAuth1Cpp::CpProxyOpenhomeOrgOAuth1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("openhome-org", "OAuth", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1Cpp::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1Cpp::UpdateIdPropertyChanged);
    iUpdateId = new PropertyUint("UpdateId", functor);
    AddProperty(iUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1Cpp::JobUpdateIdPropertyChanged);
    iJobUpdateId = new PropertyUint("JobUpdateId", functor);
    AddProperty(iJobUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1Cpp::SupportedServicesPropertyChanged);
    iSupportedServices = new PropertyString("SupportedServices", functor);
    AddProperty(iSupportedServices);
}

CpProxyOpenhomeOrgOAuth1Cpp::~CpProxyOpenhomeOrgOAuth1Cpp()
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived)
{
    SyncSetTokenOpenhomeOrgOAuth1Cpp sync(*this);
    BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginSetToken(const std::string& aServiceId, const std::string& aTokenId, const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aIsLongLived, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndSetToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetPublicKey(std::string& aPublicKey)
{
    SyncGetPublicKeyOpenhomeOrgOAuth1Cpp sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearTokenOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearShortLivedTokenOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearShortLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearShortLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearShortLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId)
{
    SyncClearLongLivedTokenOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearLongLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearLongLivedToken(const std::string& aServiceId, const std::string& aTokenId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearLongLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearShortLivedTokens(const std::string& aServiceId)
{
    SyncClearShortLivedTokensOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearShortLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearShortLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearShortLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearLongLivedTokens(const std::string& aServiceId)
{
    SyncClearLongLivedTokensOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearLongLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearLongLivedTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearLongLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncClearAllTokens(const std::string& aServiceId)
{
    SyncClearAllTokensOpenhomeOrgOAuth1Cpp sync(*this);
    BeginClearAllTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginClearAllTokens(const std::string& aServiceId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndClearAllTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetUpdateId(uint32_t& aUpdateId)
{
    SyncGetUpdateIdOpenhomeOrgOAuth1Cpp sync(*this, aUpdateId);
    BeginGetUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetUpdateId(IAsync& aAsync, uint32_t& aUpdateId)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetServiceStatus(std::string& aServiceStatusJson)
{
    SyncGetServiceStatusOpenhomeOrgOAuth1Cpp sync(*this, aServiceStatusJson);
    BeginGetServiceStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetServiceStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServiceStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetServiceStatus(IAsync& aAsync, std::string& aServiceStatusJson)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetJobUpdateId(uint32_t& aJobUpdateId)
{
    SyncGetJobUpdateIdOpenhomeOrgOAuth1Cpp sync(*this, aJobUpdateId);
    BeginGetJobUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetJobUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetJobUpdateId(IAsync& aAsync, uint32_t& aJobUpdateId)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetJobStatus(std::string& aJobStatusJson)
{
    SyncGetJobStatusOpenhomeOrgOAuth1Cpp sync(*this, aJobStatusJson);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetJobStatus(IAsync& aAsync, std::string& aJobStatusJson)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncGetSupportedServices(std::string& aSupportedServiceListJson)
{
    SyncGetSupportedServicesOpenhomeOrgOAuth1Cpp sync(*this, aSupportedServiceListJson);
    BeginGetSupportedServices(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginGetSupportedServices(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSupportedServices, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSupportedServices->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1Cpp::EndGetSupportedServices(IAsync& aAsync, std::string& aSupportedServiceListJson)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SyncBeginLimitedInputFlow(const std::string& aServiceId, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
{
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1Cpp sync(*this, aJobId, aLoginUrl, aUserCode);
    BeginBeginLimitedInputFlow(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1Cpp::BeginBeginLimitedInputFlow(const std::string& aServiceId, FunctorAsync& aFunctor)
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

void CpProxyOpenhomeOrgOAuth1Cpp::EndBeginLimitedInputFlow(IAsync& aAsync, std::string& aJobId, std::string& aLoginUrl, std::string& aUserCode)
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

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertyUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertyJobUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertySupportedServicesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSupportedServicesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1Cpp::PropertyPublicKey(std::string& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPublicKey->Value();
    aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyOpenhomeOrgOAuth1Cpp::PropertyUpdateId(uint32_t& aUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateId = iUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1Cpp::PropertyJobUpdateId(uint32_t& aJobUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobUpdateId = iJobUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1Cpp::PropertySupportedServices(std::string& aSupportedServices) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSupportedServices->Value();
    aSupportedServices.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyOpenhomeOrgOAuth1Cpp::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyOpenhomeOrgOAuth1Cpp::UpdateIdPropertyChanged()
{
    ReportEvent(iUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1Cpp::JobUpdateIdPropertyChanged()
{
    ReportEvent(iJobUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1Cpp::SupportedServicesPropertyChanged()
{
    ReportEvent(iSupportedServicesChanged);
}

void CpProxyOpenhomeOrgOAuth1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyOpenhomeOrgOAuth1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyOpenhomeOrgOAuth1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyOpenhomeOrgOAuth1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyOpenhomeOrgOAuth1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyOpenhomeOrgOAuth1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyOpenhomeOrgOAuth1Cpp::Version() const
{
  return iCpProxy.Version();
}

