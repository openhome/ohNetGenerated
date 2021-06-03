#include "CpOpenhomeOrgOAuth1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetTokenOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncSetTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncGetPublicKeyOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetPublicKeyOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    Brh& iPublicKey;
};

class SyncClearTokenOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncClearShortLivedTokenOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearShortLivedTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncClearLongLivedTokenOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearLongLivedTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncClearShortLivedTokensOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearShortLivedTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncClearLongLivedTokensOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearLongLivedTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncClearAllTokensOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncClearAllTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
};

class SyncGetUpdateIdOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetUpdateIdOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, TUint& aUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    TUint& iUpdateId;
};

class SyncGetServiceStatusOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetServiceStatusOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aServiceStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    Brh& iServiceStatusJson;
};

class SyncGetJobUpdateIdOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetJobUpdateIdOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, TUint& aJobUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    TUint& iJobUpdateId;
};

class SyncGetJobStatusOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetJobStatusOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aJobStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    Brh& iJobStatusJson;
};

class SyncGetSupportedServicesOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncGetSupportedServicesOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aSupportedServiceListJson);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    Brh& iSupportedServiceListJson;
};

class SyncBeginLimitedInputFlowOpenhomeOrgOAuth1 : public SyncProxyAction
{
public:
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyOpenhomeOrgOAuth1& iService;
    Brh& iJobId;
    Brh& iLoginUrl;
    Brh& iUserCode;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetTokenOpenhomeOrgOAuth1

SyncSetTokenOpenhomeOrgOAuth1::SyncSetTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncSetTokenOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetToken(aAsync);
}

// SyncGetPublicKeyOpenhomeOrgOAuth1

SyncGetPublicKeyOpenhomeOrgOAuth1::SyncGetPublicKeyOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}

// SyncClearTokenOpenhomeOrgOAuth1

SyncClearTokenOpenhomeOrgOAuth1::SyncClearTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearTokenOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearToken(aAsync);
}

// SyncClearShortLivedTokenOpenhomeOrgOAuth1

SyncClearShortLivedTokenOpenhomeOrgOAuth1::SyncClearShortLivedTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokenOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedToken(aAsync);
}

// SyncClearLongLivedTokenOpenhomeOrgOAuth1

SyncClearLongLivedTokenOpenhomeOrgOAuth1::SyncClearLongLivedTokenOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokenOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedToken(aAsync);
}

// SyncClearShortLivedTokensOpenhomeOrgOAuth1

SyncClearShortLivedTokensOpenhomeOrgOAuth1::SyncClearShortLivedTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokensOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedTokens(aAsync);
}

// SyncClearLongLivedTokensOpenhomeOrgOAuth1

SyncClearLongLivedTokensOpenhomeOrgOAuth1::SyncClearLongLivedTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokensOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedTokens(aAsync);
}

// SyncClearAllTokensOpenhomeOrgOAuth1

SyncClearAllTokensOpenhomeOrgOAuth1::SyncClearAllTokensOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy)
    : iService(aProxy)
{
}

void SyncClearAllTokensOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAllTokens(aAsync);
}

// SyncGetUpdateIdOpenhomeOrgOAuth1

SyncGetUpdateIdOpenhomeOrgOAuth1::SyncGetUpdateIdOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, TUint& aUpdateId)
    : iService(aProxy)
    , iUpdateId(aUpdateId)
{
}

void SyncGetUpdateIdOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateId(aAsync, iUpdateId);
}

// SyncGetServiceStatusOpenhomeOrgOAuth1

SyncGetServiceStatusOpenhomeOrgOAuth1::SyncGetServiceStatusOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aServiceStatusJson)
    : iService(aProxy)
    , iServiceStatusJson(aServiceStatusJson)
{
}

void SyncGetServiceStatusOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceStatus(aAsync, iServiceStatusJson);
}

// SyncGetJobUpdateIdOpenhomeOrgOAuth1

SyncGetJobUpdateIdOpenhomeOrgOAuth1::SyncGetJobUpdateIdOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, TUint& aJobUpdateId)
    : iService(aProxy)
    , iJobUpdateId(aJobUpdateId)
{
}

void SyncGetJobUpdateIdOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobUpdateId(aAsync, iJobUpdateId);
}

// SyncGetJobStatusOpenhomeOrgOAuth1

SyncGetJobStatusOpenhomeOrgOAuth1::SyncGetJobStatusOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aJobStatusJson)
    : iService(aProxy)
    , iJobStatusJson(aJobStatusJson)
{
}

void SyncGetJobStatusOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatusJson);
}

// SyncGetSupportedServicesOpenhomeOrgOAuth1

SyncGetSupportedServicesOpenhomeOrgOAuth1::SyncGetSupportedServicesOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aSupportedServiceListJson)
    : iService(aProxy)
    , iSupportedServiceListJson(aSupportedServiceListJson)
{
}

void SyncGetSupportedServicesOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSupportedServices(aAsync, iSupportedServiceListJson);
}

// SyncBeginLimitedInputFlowOpenhomeOrgOAuth1

SyncBeginLimitedInputFlowOpenhomeOrgOAuth1::SyncBeginLimitedInputFlowOpenhomeOrgOAuth1(CpProxyOpenhomeOrgOAuth1& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
    : iService(aProxy)
    , iJobId(aJobId)
    , iLoginUrl(aLoginUrl)
    , iUserCode(aUserCode)
{
}

void SyncBeginLimitedInputFlowOpenhomeOrgOAuth1::CompleteRequest(IAsync& aAsync)
{
    iService.EndBeginLimitedInputFlow(aAsync, iJobId, iLoginUrl, iUserCode);
}


// CpProxyOpenhomeOrgOAuth1

CpProxyOpenhomeOrgOAuth1::CpProxyOpenhomeOrgOAuth1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1::UpdateIdPropertyChanged);
    iUpdateId = new PropertyUint("UpdateId", functor);
    AddProperty(iUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1::JobUpdateIdPropertyChanged);
    iJobUpdateId = new PropertyUint("JobUpdateId", functor);
    AddProperty(iJobUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1::SupportedServicesPropertyChanged);
    iSupportedServices = new PropertyString("SupportedServices", functor);
    AddProperty(iSupportedServices);
}

CpProxyOpenhomeOrgOAuth1::~CpProxyOpenhomeOrgOAuth1()
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

void CpProxyOpenhomeOrgOAuth1::SyncSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived)
{
    SyncSetTokenOpenhomeOrgOAuth1 sync(*this);
    BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aAesKeyRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aInitVectorRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aTokenAesEncrypted));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsLongLived));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndSetToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyOpenhomeOrgOAuth1 sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aPublicKey);
}

void CpProxyOpenhomeOrgOAuth1::SyncClearToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearTokenOpenhomeOrgOAuth1 sync(*this);
    BeginClearToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearShortLivedTokenOpenhomeOrgOAuth1 sync(*this);
    BeginClearShortLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearShortLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearShortLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearLongLivedTokenOpenhomeOrgOAuth1 sync(*this);
    BeginClearLongLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearLongLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearLongLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncClearShortLivedTokens(const Brx& aServiceId)
{
    SyncClearShortLivedTokensOpenhomeOrgOAuth1 sync(*this);
    BeginClearShortLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearShortLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearShortLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearShortLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncClearLongLivedTokens(const Brx& aServiceId)
{
    SyncClearLongLivedTokensOpenhomeOrgOAuth1 sync(*this);
    BeginClearLongLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearLongLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearLongLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearLongLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncClearAllTokens(const Brx& aServiceId)
{
    SyncClearAllTokensOpenhomeOrgOAuth1 sync(*this);
    BeginClearAllTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginClearAllTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearAllTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAllTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndClearAllTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1::SyncGetUpdateId(TUint& aUpdateId)
{
    SyncGetUpdateIdOpenhomeOrgOAuth1 sync(*this, aUpdateId);
    BeginGetUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetUpdateId(IAsync& aAsync, TUint& aUpdateId)
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

void CpProxyOpenhomeOrgOAuth1::SyncGetServiceStatus(Brh& aServiceStatusJson)
{
    SyncGetServiceStatusOpenhomeOrgOAuth1 sync(*this, aServiceStatusJson);
    BeginGetServiceStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetServiceStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetServiceStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetServiceStatus(IAsync& aAsync, Brh& aServiceStatusJson)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aServiceStatusJson);
}

void CpProxyOpenhomeOrgOAuth1::SyncGetJobUpdateId(TUint& aJobUpdateId)
{
    SyncGetJobUpdateIdOpenhomeOrgOAuth1 sync(*this, aJobUpdateId);
    BeginGetJobUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetJobUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetJobUpdateId(IAsync& aAsync, TUint& aJobUpdateId)
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

void CpProxyOpenhomeOrgOAuth1::SyncGetJobStatus(Brh& aJobStatusJson)
{
    SyncGetJobStatusOpenhomeOrgOAuth1 sync(*this, aJobStatusJson);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatusJson)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aJobStatusJson);
}

void CpProxyOpenhomeOrgOAuth1::SyncGetSupportedServices(Brh& aSupportedServiceListJson)
{
    SyncGetSupportedServicesOpenhomeOrgOAuth1 sync(*this, aSupportedServiceListJson);
    BeginGetSupportedServices(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginGetSupportedServices(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSupportedServices, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSupportedServices->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndGetSupportedServices(IAsync& aAsync, Brh& aSupportedServiceListJson)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSupportedServiceListJson);
}

void CpProxyOpenhomeOrgOAuth1::SyncBeginLimitedInputFlow(const Brx& aServiceId, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
{
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1 sync(*this, aJobId, aLoginUrl, aUserCode);
    BeginBeginLimitedInputFlow(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1::BeginBeginLimitedInputFlow(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBeginLimitedInputFlow, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBeginLimitedInputFlow->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBeginLimitedInputFlow->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1::EndBeginLimitedInputFlow(IAsync& aAsync, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aJobId);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aLoginUrl);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUserCode);
}

void CpProxyOpenhomeOrgOAuth1::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1::SetPropertyUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1::SetPropertyJobUpdateIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobUpdateIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1::SetPropertySupportedServicesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSupportedServicesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyOpenhomeOrgOAuth1::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyOpenhomeOrgOAuth1::PropertyUpdateId(TUint& aUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateId = iUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1::PropertyJobUpdateId(TUint& aJobUpdateId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobUpdateId = iJobUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1::PropertySupportedServices(Brhz& aSupportedServices) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSupportedServices.Set(iSupportedServices->Value());
}

void CpProxyOpenhomeOrgOAuth1::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyOpenhomeOrgOAuth1::UpdateIdPropertyChanged()
{
    ReportEvent(iUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1::JobUpdateIdPropertyChanged()
{
    ReportEvent(iJobUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1::SupportedServicesPropertyChanged()
{
    ReportEvent(iSupportedServicesChanged);
}


void CpProxyOpenhomeOrgOAuth1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyOpenhomeOrgOAuth1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyOpenhomeOrgOAuth1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyOpenhomeOrgOAuth1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyOpenhomeOrgOAuth1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyOpenhomeOrgOAuth1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyOpenhomeOrgOAuth1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyOpenhomeOrgOAuth1::Version() const
{
  return iCpProxy.Version();
}


