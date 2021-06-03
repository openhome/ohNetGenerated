#include "CpOpenhomeOrgOAuth1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyOpenhomeOrgOAuth1C : public CpProxyC
{
public:
    CpProxyOpenhomeOrgOAuth1C(CpDeviceC aDevice);
    ~CpProxyOpenhomeOrgOAuth1C();
    //CpProxyOpenhomeOrgOAuth1* Proxy() { return static_cast<CpProxyOpenhomeOrgOAuth1*>(iProxy); }

    void SyncSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived);
    void BeginSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived, FunctorAsync& aFunctor);
    void EndSetToken(IAsync& aAsync);

    void SyncGetPublicKey(Brh& aPublicKey);
    void BeginGetPublicKey(FunctorAsync& aFunctor);
    void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey);

    void SyncClearToken(const Brx& aServiceId, const Brx& aTokenId);
    void BeginClearToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor);
    void EndClearToken(IAsync& aAsync);

    void SyncClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId);
    void BeginClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor);
    void EndClearShortLivedToken(IAsync& aAsync);

    void SyncClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId);
    void BeginClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor);
    void EndClearLongLivedToken(IAsync& aAsync);

    void SyncClearShortLivedTokens(const Brx& aServiceId);
    void BeginClearShortLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor);
    void EndClearShortLivedTokens(IAsync& aAsync);

    void SyncClearLongLivedTokens(const Brx& aServiceId);
    void BeginClearLongLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor);
    void EndClearLongLivedTokens(IAsync& aAsync);

    void SyncClearAllTokens(const Brx& aServiceId);
    void BeginClearAllTokens(const Brx& aServiceId, FunctorAsync& aFunctor);
    void EndClearAllTokens(IAsync& aAsync);

    void SyncGetUpdateId(TUint& aUpdateId);
    void BeginGetUpdateId(FunctorAsync& aFunctor);
    void EndGetUpdateId(IAsync& aAsync, TUint& aUpdateId);

    void SyncGetServiceStatus(Brh& aServiceStatusJson);
    void BeginGetServiceStatus(FunctorAsync& aFunctor);
    void EndGetServiceStatus(IAsync& aAsync, Brh& aServiceStatusJson);

    void SyncGetJobUpdateId(TUint& aJobUpdateId);
    void BeginGetJobUpdateId(FunctorAsync& aFunctor);
    void EndGetJobUpdateId(IAsync& aAsync, TUint& aJobUpdateId);

    void SyncGetJobStatus(Brh& aJobStatusJson);
    void BeginGetJobStatus(FunctorAsync& aFunctor);
    void EndGetJobStatus(IAsync& aAsync, Brh& aJobStatusJson);

    void SyncGetSupportedServices(Brh& aSupportedServiceListJson);
    void BeginGetSupportedServices(FunctorAsync& aFunctor);
    void EndGetSupportedServices(IAsync& aAsync, Brh& aSupportedServiceListJson);

    void SyncBeginLimitedInputFlow(const Brx& aServiceId, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode);
    void BeginBeginLimitedInputFlow(const Brx& aServiceId, FunctorAsync& aFunctor);
    void EndBeginLimitedInputFlow(IAsync& aAsync, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode);

    void SetPropertyPublicKeyChanged(Functor& aFunctor);
    void SetPropertyUpdateIdChanged(Functor& aFunctor);
    void SetPropertyJobUpdateIdChanged(Functor& aFunctor);
    void SetPropertySupportedServicesChanged(Functor& aFunctor);

    void PropertyPublicKey(Brhz& aPublicKey) const;
    void PropertyUpdateId(TUint& aUpdateId) const;
    void PropertyJobUpdateId(TUint& aJobUpdateId) const;
    void PropertySupportedServices(Brhz& aSupportedServices) const;
private:
    void PublicKeyPropertyChanged();
    void UpdateIdPropertyChanged();
    void JobUpdateIdPropertyChanged();
    void SupportedServicesPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetToken;
    Action* iActionGetPublicKey;
    Action* iActionClearToken;
    Action* iActionClearShortLivedToken;
    Action* iActionClearLongLivedToken;
    Action* iActionClearShortLivedTokens;
    Action* iActionClearLongLivedTokens;
    Action* iActionClearAllTokens;
    Action* iActionGetUpdateId;
    Action* iActionGetServiceStatus;
    Action* iActionGetJobUpdateId;
    Action* iActionGetJobStatus;
    Action* iActionGetSupportedServices;
    Action* iActionBeginLimitedInputFlow;
    PropertyString* iPublicKey;
    PropertyUint* iUpdateId;
    PropertyUint* iJobUpdateId;
    PropertyString* iSupportedServices;
    Functor iPublicKeyChanged;
    Functor iUpdateIdChanged;
    Functor iJobUpdateIdChanged;
    Functor iSupportedServicesChanged;
};


class SyncSetTokenOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncSetTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTokenOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncSetTokenOpenhomeOrgOAuth1C::SyncSetTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTokenOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetToken(aAsync);
}


class SyncGetPublicKeyOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetPublicKeyOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    Brh& iPublicKey;
};

SyncGetPublicKeyOpenhomeOrgOAuth1C::SyncGetPublicKeyOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncClearTokenOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTokenOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearTokenOpenhomeOrgOAuth1C::SyncClearTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearTokenOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearToken(aAsync);
}


class SyncClearShortLivedTokenOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearShortLivedTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokenOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearShortLivedTokenOpenhomeOrgOAuth1C::SyncClearShortLivedTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokenOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedToken(aAsync);
}


class SyncClearLongLivedTokenOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearLongLivedTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokenOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearLongLivedTokenOpenhomeOrgOAuth1C::SyncClearLongLivedTokenOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokenOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedToken(aAsync);
}


class SyncClearShortLivedTokensOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearShortLivedTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokensOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearShortLivedTokensOpenhomeOrgOAuth1C::SyncClearShortLivedTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokensOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedTokens(aAsync);
}


class SyncClearLongLivedTokensOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearLongLivedTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokensOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearLongLivedTokensOpenhomeOrgOAuth1C::SyncClearLongLivedTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokensOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedTokens(aAsync);
}


class SyncClearAllTokensOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearAllTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAllTokensOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
};

SyncClearAllTokensOpenhomeOrgOAuth1C::SyncClearAllTokensOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearAllTokensOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAllTokens(aAsync);
}


class SyncGetUpdateIdOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetUpdateIdOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, TUint& aUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateIdOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    TUint& iUpdateId;
};

SyncGetUpdateIdOpenhomeOrgOAuth1C::SyncGetUpdateIdOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, TUint& aUpdateId)
    : iService(aProxy)
    , iUpdateId(aUpdateId)
{
}

void SyncGetUpdateIdOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateId(aAsync, iUpdateId);
}


class SyncGetServiceStatusOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetServiceStatusOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aServiceStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceStatusOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    Brh& iServiceStatusJson;
};

SyncGetServiceStatusOpenhomeOrgOAuth1C::SyncGetServiceStatusOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aServiceStatusJson)
    : iService(aProxy)
    , iServiceStatusJson(aServiceStatusJson)
{
}

void SyncGetServiceStatusOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceStatus(aAsync, iServiceStatusJson);
}


class SyncGetJobUpdateIdOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetJobUpdateIdOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, TUint& aJobUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobUpdateIdOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    TUint& iJobUpdateId;
};

SyncGetJobUpdateIdOpenhomeOrgOAuth1C::SyncGetJobUpdateIdOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, TUint& aJobUpdateId)
    : iService(aProxy)
    , iJobUpdateId(aJobUpdateId)
{
}

void SyncGetJobUpdateIdOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobUpdateId(aAsync, iJobUpdateId);
}


class SyncGetJobStatusOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetJobStatusOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aJobStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    Brh& iJobStatusJson;
};

SyncGetJobStatusOpenhomeOrgOAuth1C::SyncGetJobStatusOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aJobStatusJson)
    : iService(aProxy)
    , iJobStatusJson(aJobStatusJson)
{
}

void SyncGetJobStatusOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatusJson);
}


class SyncGetSupportedServicesOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetSupportedServicesOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aSupportedServiceListJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSupportedServicesOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    Brh& iSupportedServiceListJson;
};

SyncGetSupportedServicesOpenhomeOrgOAuth1C::SyncGetSupportedServicesOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aSupportedServiceListJson)
    : iService(aProxy)
    , iSupportedServiceListJson(aSupportedServiceListJson)
{
}

void SyncGetSupportedServicesOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSupportedServices(aAsync, iSupportedServiceListJson);
}


class SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C() {};
private:
    CpProxyOpenhomeOrgOAuth1C& iService;
    Brh& iJobId;
    Brh& iLoginUrl;
    Brh& iUserCode;
};

SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C::SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C(CpProxyOpenhomeOrgOAuth1C& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
    : iService(aProxy)
    , iJobId(aJobId)
    , iLoginUrl(aLoginUrl)
    , iUserCode(aUserCode)
{
}

void SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBeginLimitedInputFlow(aAsync, iJobId, iLoginUrl, iUserCode);
}

CpProxyOpenhomeOrgOAuth1C::CpProxyOpenhomeOrgOAuth1C(CpDeviceC aDevice)
    : CpProxyC("openhome-org", "OAuth", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1C::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1C::UpdateIdPropertyChanged);
    iUpdateId = new PropertyUint("UpdateId", functor);
    AddProperty(iUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1C::JobUpdateIdPropertyChanged);
    iJobUpdateId = new PropertyUint("JobUpdateId", functor);
    AddProperty(iJobUpdateId);
    functor = MakeFunctor(*this, &CpProxyOpenhomeOrgOAuth1C::SupportedServicesPropertyChanged);
    iSupportedServices = new PropertyString("SupportedServices", functor);
    AddProperty(iSupportedServices);
}

CpProxyOpenhomeOrgOAuth1C::~CpProxyOpenhomeOrgOAuth1C()
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

void CpProxyOpenhomeOrgOAuth1C::SyncSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived)
{
    SyncSetTokenOpenhomeOrgOAuth1C sync(*this);
    BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aAesKeyRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aInitVectorRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aTokenAesEncrypted));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aIsLongLived));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndSetToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyOpenhomeOrgOAuth1C sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearTokenOpenhomeOrgOAuth1C sync(*this);
    BeginClearToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearShortLivedTokenOpenhomeOrgOAuth1C sync(*this);
    BeginClearShortLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearShortLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearShortLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearLongLivedTokenOpenhomeOrgOAuth1C sync(*this);
    BeginClearLongLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearLongLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearLongLivedToken(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearShortLivedTokens(const Brx& aServiceId)
{
    SyncClearShortLivedTokensOpenhomeOrgOAuth1C sync(*this);
    BeginClearShortLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearShortLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearShortLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearShortLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearLongLivedTokens(const Brx& aServiceId)
{
    SyncClearLongLivedTokensOpenhomeOrgOAuth1C sync(*this);
    BeginClearLongLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearLongLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearLongLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearLongLivedTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncClearAllTokens(const Brx& aServiceId)
{
    SyncClearAllTokensOpenhomeOrgOAuth1C sync(*this);
    BeginClearAllTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginClearAllTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearAllTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAllTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndClearAllTokens(IAsync& aAsync)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetUpdateId(TUint& aUpdateId)
{
    SyncGetUpdateIdOpenhomeOrgOAuth1C sync(*this, aUpdateId);
    BeginGetUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetUpdateId(IAsync& aAsync, TUint& aUpdateId)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetServiceStatus(Brh& aServiceStatusJson)
{
    SyncGetServiceStatusOpenhomeOrgOAuth1C sync(*this, aServiceStatusJson);
    BeginGetServiceStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetServiceStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetServiceStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetServiceStatus(IAsync& aAsync, Brh& aServiceStatusJson)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetJobUpdateId(TUint& aJobUpdateId)
{
    SyncGetJobUpdateIdOpenhomeOrgOAuth1C sync(*this, aJobUpdateId);
    BeginGetJobUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetJobUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetJobUpdateId(IAsync& aAsync, TUint& aJobUpdateId)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetJobStatus(Brh& aJobStatusJson)
{
    SyncGetJobStatusOpenhomeOrgOAuth1C sync(*this, aJobStatusJson);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatusJson)
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

void CpProxyOpenhomeOrgOAuth1C::SyncGetSupportedServices(Brh& aSupportedServiceListJson)
{
    SyncGetSupportedServicesOpenhomeOrgOAuth1C sync(*this, aSupportedServiceListJson);
    BeginGetSupportedServices(sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginGetSupportedServices(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSupportedServices, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSupportedServices->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndGetSupportedServices(IAsync& aAsync, Brh& aSupportedServiceListJson)
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

void CpProxyOpenhomeOrgOAuth1C::SyncBeginLimitedInputFlow(const Brx& aServiceId, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
{
    SyncBeginLimitedInputFlowOpenhomeOrgOAuth1C sync(*this, aJobId, aLoginUrl, aUserCode);
    BeginBeginLimitedInputFlow(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyOpenhomeOrgOAuth1C::BeginBeginLimitedInputFlow(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBeginLimitedInputFlow, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBeginLimitedInputFlow->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBeginLimitedInputFlow->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyOpenhomeOrgOAuth1C::EndBeginLimitedInputFlow(IAsync& aAsync, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
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

void CpProxyOpenhomeOrgOAuth1C::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPublicKeyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyOpenhomeOrgOAuth1C::SetPropertyUpdateIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyOpenhomeOrgOAuth1C::SetPropertyJobUpdateIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iJobUpdateIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyOpenhomeOrgOAuth1C::SetPropertySupportedServicesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSupportedServicesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyOpenhomeOrgOAuth1C::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyOpenhomeOrgOAuth1C::PropertyUpdateId(TUint& aUpdateId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateId = iUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1C::PropertyJobUpdateId(TUint& aJobUpdateId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aJobUpdateId = iJobUpdateId->Value();
}

void CpProxyOpenhomeOrgOAuth1C::PropertySupportedServices(Brhz& aSupportedServices) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSupportedServices.Set(iSupportedServices->Value());
}

void CpProxyOpenhomeOrgOAuth1C::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyOpenhomeOrgOAuth1C::UpdateIdPropertyChanged()
{
    ReportEvent(iUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1C::JobUpdateIdPropertyChanged()
{
    ReportEvent(iJobUpdateIdChanged);
}

void CpProxyOpenhomeOrgOAuth1C::SupportedServicesPropertyChanged()
{
    ReportEvent(iSupportedServicesChanged);
}


THandle STDCALL CpProxyOpenhomeOrgOAuth1Create(CpDeviceC aDevice)
{
    return new CpProxyOpenhomeOrgOAuth1C(aDevice);
}

void STDCALL CpProxyOpenhomeOrgOAuth1Destroy(THandle aHandle)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncSetToken(THandle aHandle, const char* aServiceId, const char* aTokenId, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aIsLongLived)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    Brh buf_aAesKeyRsaEncrypted;
    buf_aAesKeyRsaEncrypted.Set((const TByte*)aAesKeyRsaEncrypted, aAesKeyRsaEncryptedLen);
    Brh buf_aInitVectorRsaEncrypted;
    buf_aInitVectorRsaEncrypted.Set((const TByte*)aInitVectorRsaEncrypted, aInitVectorRsaEncryptedLen);
    Brh buf_aTokenAesEncrypted;
    buf_aTokenAesEncrypted.Set((const TByte*)aTokenAesEncrypted, aTokenAesEncryptedLen);
    int32_t err = 0;
    try {
        proxyC->SyncSetToken(buf_aServiceId, buf_aTokenId, buf_aAesKeyRsaEncrypted, buf_aInitVectorRsaEncrypted, buf_aTokenAesEncrypted, (aIsLongLived==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginSetToken(THandle aHandle, const char* aServiceId, const char* aTokenId, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aIsLongLived, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    Brh buf_aAesKeyRsaEncrypted;
    buf_aAesKeyRsaEncrypted.Set((const TByte*)aAesKeyRsaEncrypted, aAesKeyRsaEncryptedLen);
    Brh buf_aInitVectorRsaEncrypted;
    buf_aInitVectorRsaEncrypted.Set((const TByte*)aInitVectorRsaEncrypted, aInitVectorRsaEncryptedLen);
    Brh buf_aTokenAesEncrypted;
    buf_aTokenAesEncrypted.Set((const TByte*)aTokenAesEncrypted, aTokenAesEncryptedLen);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetToken(buf_aServiceId, buf_aTokenId, buf_aAesKeyRsaEncrypted, buf_aInitVectorRsaEncrypted, buf_aTokenAesEncrypted, (aIsLongLived==0? false : true), functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndSetToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetToken(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aPublicKey;
    int32_t err = 0;
    try {
        proxyC->SyncGetPublicKey(buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aPublicKey = NULL;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPublicKey(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aPublicKey;
    *aPublicKey = NULL;
    try {
        proxyC->EndGetPublicKey(*async, buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    int32_t err = 0;
    try {
        proxyC->SyncClearToken(buf_aServiceId, buf_aTokenId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearToken(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearShortLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    int32_t err = 0;
    try {
        proxyC->SyncClearShortLivedToken(buf_aServiceId, buf_aTokenId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearShortLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearShortLivedToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearShortLivedToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearShortLivedToken(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearLongLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    int32_t err = 0;
    try {
        proxyC->SyncClearLongLivedToken(buf_aServiceId, buf_aTokenId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearLongLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearLongLivedToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearLongLivedToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearLongLivedToken(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearShortLivedTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    int32_t err = 0;
    try {
        proxyC->SyncClearShortLivedTokens(buf_aServiceId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearShortLivedTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearShortLivedTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearShortLivedTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearShortLivedTokens(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearLongLivedTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    int32_t err = 0;
    try {
        proxyC->SyncClearLongLivedTokens(buf_aServiceId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearLongLivedTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearLongLivedTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearLongLivedTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearLongLivedTokens(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncClearAllTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    int32_t err = 0;
    try {
        proxyC->SyncClearAllTokens(buf_aServiceId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginClearAllTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearAllTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndClearAllTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearAllTokens(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetUpdateId(THandle aHandle, uint32_t* aUpdateId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetUpdateId(*aUpdateId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aUpdateId = 0;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetUpdateId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateId(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetUpdateId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aUpdateId)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetUpdateId(*async, *aUpdateId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetServiceStatus(THandle aHandle, char** aServiceStatusJson)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceStatusJson;
    int32_t err = 0;
    try {
        proxyC->SyncGetServiceStatus(buf_aServiceStatusJson);
        *aServiceStatusJson = buf_aServiceStatusJson.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aServiceStatusJson = NULL;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetServiceStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetServiceStatus(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetServiceStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aServiceStatusJson)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aServiceStatusJson;
    *aServiceStatusJson = NULL;
    try {
        proxyC->EndGetServiceStatus(*async, buf_aServiceStatusJson);
        *aServiceStatusJson = buf_aServiceStatusJson.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetJobUpdateId(THandle aHandle, uint32_t* aJobUpdateId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetJobUpdateId(*aJobUpdateId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aJobUpdateId = 0;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetJobUpdateId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobUpdateId(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetJobUpdateId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aJobUpdateId)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetJobUpdateId(*async, *aJobUpdateId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetJobStatus(THandle aHandle, char** aJobStatusJson)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aJobStatusJson;
    int32_t err = 0;
    try {
        proxyC->SyncGetJobStatus(buf_aJobStatusJson);
        *aJobStatusJson = buf_aJobStatusJson.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aJobStatusJson = NULL;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetJobStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobStatus(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetJobStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aJobStatusJson)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aJobStatusJson;
    *aJobStatusJson = NULL;
    try {
        proxyC->EndGetJobStatus(*async, buf_aJobStatusJson);
        *aJobStatusJson = buf_aJobStatusJson.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncGetSupportedServices(THandle aHandle, char** aSupportedServiceListJson)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSupportedServiceListJson;
    int32_t err = 0;
    try {
        proxyC->SyncGetSupportedServices(buf_aSupportedServiceListJson);
        *aSupportedServiceListJson = buf_aSupportedServiceListJson.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSupportedServiceListJson = NULL;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginGetSupportedServices(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSupportedServices(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndGetSupportedServices(THandle aHandle, OhNetHandleAsync aAsync, char** aSupportedServiceListJson)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSupportedServiceListJson;
    *aSupportedServiceListJson = NULL;
    try {
        proxyC->EndGetSupportedServices(*async, buf_aSupportedServiceListJson);
        *aSupportedServiceListJson = buf_aSupportedServiceListJson.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1SyncBeginLimitedInputFlow(THandle aHandle, const char* aServiceId, char** aJobId, char** aLoginUrl, char** aUserCode)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aJobId;
    Brh buf_aLoginUrl;
    Brh buf_aUserCode;
    int32_t err = 0;
    try {
        proxyC->SyncBeginLimitedInputFlow(buf_aServiceId, buf_aJobId, buf_aLoginUrl, buf_aUserCode);
        *aJobId = buf_aJobId.Extract();
        *aLoginUrl = buf_aLoginUrl.Extract();
        *aUserCode = buf_aUserCode.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aJobId = NULL;
        *aLoginUrl = NULL;
        *aUserCode = NULL;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1BeginBeginLimitedInputFlow(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBeginLimitedInputFlow(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1EndBeginLimitedInputFlow(THandle aHandle, OhNetHandleAsync aAsync, char** aJobId, char** aLoginUrl, char** aUserCode)
{
    int32_t err = 0;
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aJobId;
    *aJobId = NULL;
    Brh buf_aLoginUrl;
    *aLoginUrl = NULL;
    Brh buf_aUserCode;
    *aUserCode = NULL;
    try {
        proxyC->EndBeginLimitedInputFlow(*async, buf_aJobId, buf_aLoginUrl, buf_aUserCode);
        *aJobId = buf_aJobId.Extract();
        *aLoginUrl = buf_aLoginUrl.Extract();
        *aUserCode = buf_aUserCode.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyOpenhomeOrgOAuth1SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPublicKeyChanged(functor);
}

void STDCALL CpProxyOpenhomeOrgOAuth1SetPropertyUpdateIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateIdChanged(functor);
}

void STDCALL CpProxyOpenhomeOrgOAuth1SetPropertyJobUpdateIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyJobUpdateIdChanged(functor);
}

void STDCALL CpProxyOpenhomeOrgOAuth1SetPropertySupportedServicesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySupportedServicesChanged(functor);
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1PropertyPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPublicKey;
    try {
        proxyC->PropertyPublicKey(buf_aPublicKey);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPublicKey = buf_aPublicKey.Transfer();
    return 0;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1PropertyUpdateId(THandle aHandle, uint32_t* aUpdateId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateId(*aUpdateId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1PropertyJobUpdateId(THandle aHandle, uint32_t* aJobUpdateId)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyJobUpdateId(*aJobUpdateId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyOpenhomeOrgOAuth1PropertySupportedServices(THandle aHandle, char** aSupportedServices)
{
    CpProxyOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSupportedServices;
    try {
        proxyC->PropertySupportedServices(buf_aSupportedServices);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSupportedServices = buf_aSupportedServices.Transfer();
    return 0;
}

