#include "CpAvOpenhomeOrgOAuth1.h"
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

class CpProxyAvOpenhomeOrgOAuth1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgOAuth1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgOAuth1C();
    //CpProxyAvOpenhomeOrgOAuth1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgOAuth1*>(iProxy); }

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


class SyncSetTokenAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncSetTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTokenAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncSetTokenAvOpenhomeOrgOAuth1C::SyncSetTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTokenAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetToken(aAsync);
}


class SyncGetPublicKeyAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetPublicKeyAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    Brh& iPublicKey;
};

SyncGetPublicKeyAvOpenhomeOrgOAuth1C::SyncGetPublicKeyAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


class SyncClearTokenAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTokenAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearTokenAvOpenhomeOrgOAuth1C::SyncClearTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearTokenAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearToken(aAsync);
}


class SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C::SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedToken(aAsync);
}


class SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C::SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedToken(aAsync);
}


class SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C::SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearShortLivedTokens(aAsync);
}


class SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C::SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearLongLivedTokens(aAsync);
}


class SyncClearAllTokensAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncClearAllTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAllTokensAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
};

SyncClearAllTokensAvOpenhomeOrgOAuth1C::SyncClearAllTokensAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearAllTokensAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAllTokens(aAsync);
}


class SyncGetUpdateIdAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetUpdateIdAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, TUint& aUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateIdAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    TUint& iUpdateId;
};

SyncGetUpdateIdAvOpenhomeOrgOAuth1C::SyncGetUpdateIdAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, TUint& aUpdateId)
    : iService(aProxy)
    , iUpdateId(aUpdateId)
{
}

void SyncGetUpdateIdAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateId(aAsync, iUpdateId);
}


class SyncGetServiceStatusAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetServiceStatusAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aServiceStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetServiceStatusAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    Brh& iServiceStatusJson;
};

SyncGetServiceStatusAvOpenhomeOrgOAuth1C::SyncGetServiceStatusAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aServiceStatusJson)
    : iService(aProxy)
    , iServiceStatusJson(aServiceStatusJson)
{
}

void SyncGetServiceStatusAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetServiceStatus(aAsync, iServiceStatusJson);
}


class SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, TUint& aJobUpdateId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    TUint& iJobUpdateId;
};

SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C::SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, TUint& aJobUpdateId)
    : iService(aProxy)
    , iJobUpdateId(aJobUpdateId)
{
}

void SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobUpdateId(aAsync, iJobUpdateId);
}


class SyncGetJobStatusAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetJobStatusAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aJobStatusJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    Brh& iJobStatusJson;
};

SyncGetJobStatusAvOpenhomeOrgOAuth1C::SyncGetJobStatusAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aJobStatusJson)
    : iService(aProxy)
    , iJobStatusJson(aJobStatusJson)
{
}

void SyncGetJobStatusAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatusJson);
}


class SyncGetSupportedServicesAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncGetSupportedServicesAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aSupportedServiceListJson);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSupportedServicesAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    Brh& iSupportedServiceListJson;
};

SyncGetSupportedServicesAvOpenhomeOrgOAuth1C::SyncGetSupportedServicesAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aSupportedServiceListJson)
    : iService(aProxy)
    , iSupportedServiceListJson(aSupportedServiceListJson)
{
}

void SyncGetSupportedServicesAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSupportedServices(aAsync, iSupportedServiceListJson);
}


class SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C : public SyncProxyAction
{
public:
    SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C() {};
private:
    CpProxyAvOpenhomeOrgOAuth1C& iService;
    Brh& iJobId;
    Brh& iLoginUrl;
    Brh& iUserCode;
};

SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C::SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C(CpProxyAvOpenhomeOrgOAuth1C& aProxy, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
    : iService(aProxy)
    , iJobId(aJobId)
    , iLoginUrl(aLoginUrl)
    , iUserCode(aUserCode)
{
}

void SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBeginLimitedInputFlow(aAsync, iJobId, iLoginUrl, iUserCode);
}

CpProxyAvOpenhomeOrgOAuth1C::CpProxyAvOpenhomeOrgOAuth1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "OAuth", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1C::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1C::UpdateIdPropertyChanged);
    iUpdateId = new PropertyUint("UpdateId", functor);
    AddProperty(iUpdateId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1C::JobUpdateIdPropertyChanged);
    iJobUpdateId = new PropertyUint("JobUpdateId", functor);
    AddProperty(iJobUpdateId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgOAuth1C::SupportedServicesPropertyChanged);
    iSupportedServices = new PropertyString("SupportedServices", functor);
    AddProperty(iSupportedServices);
}

CpProxyAvOpenhomeOrgOAuth1C::~CpProxyAvOpenhomeOrgOAuth1C()
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived)
{
    SyncSetTokenAvOpenhomeOrgOAuth1C sync(*this);
    BeginSetToken(aServiceId, aTokenId, aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aIsLongLived, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginSetToken(const Brx& aServiceId, const Brx& aTokenId, const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aIsLongLived, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgOAuth1C::EndSetToken(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyAvOpenhomeOrgOAuth1C sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearTokenAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearToken(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearShortLivedTokenAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearShortLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearShortLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearShortLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearShortLivedToken(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId)
{
    SyncClearLongLivedTokenAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearLongLivedToken(aServiceId, aTokenId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearLongLivedToken(const Brx& aServiceId, const Brx& aTokenId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearLongLivedToken, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedToken->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearLongLivedToken(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearShortLivedTokens(const Brx& aServiceId)
{
    SyncClearShortLivedTokensAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearShortLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearShortLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearShortLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearShortLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearShortLivedTokens(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearLongLivedTokens(const Brx& aServiceId)
{
    SyncClearLongLivedTokensAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearLongLivedTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearLongLivedTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearLongLivedTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearLongLivedTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearLongLivedTokens(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncClearAllTokens(const Brx& aServiceId)
{
    SyncClearAllTokensAvOpenhomeOrgOAuth1C sync(*this);
    BeginClearAllTokens(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginClearAllTokens(const Brx& aServiceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearAllTokens, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAllTokens->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aServiceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndClearAllTokens(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetUpdateId(TUint& aUpdateId)
{
    SyncGetUpdateIdAvOpenhomeOrgOAuth1C sync(*this, aUpdateId);
    BeginGetUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetUpdateId(IAsync& aAsync, TUint& aUpdateId)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetServiceStatus(Brh& aServiceStatusJson)
{
    SyncGetServiceStatusAvOpenhomeOrgOAuth1C sync(*this, aServiceStatusJson);
    BeginGetServiceStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetServiceStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetServiceStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetServiceStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetServiceStatus(IAsync& aAsync, Brh& aServiceStatusJson)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetJobUpdateId(TUint& aJobUpdateId)
{
    SyncGetJobUpdateIdAvOpenhomeOrgOAuth1C sync(*this, aJobUpdateId);
    BeginGetJobUpdateId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetJobUpdateId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobUpdateId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobUpdateId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetJobUpdateId(IAsync& aAsync, TUint& aJobUpdateId)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetJobStatus(Brh& aJobStatusJson)
{
    SyncGetJobStatusAvOpenhomeOrgOAuth1C sync(*this, aJobStatusJson);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatusJson)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncGetSupportedServices(Brh& aSupportedServiceListJson)
{
    SyncGetSupportedServicesAvOpenhomeOrgOAuth1C sync(*this, aSupportedServiceListJson);
    BeginGetSupportedServices(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginGetSupportedServices(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSupportedServices, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSupportedServices->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgOAuth1C::EndGetSupportedServices(IAsync& aAsync, Brh& aSupportedServiceListJson)
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

void CpProxyAvOpenhomeOrgOAuth1C::SyncBeginLimitedInputFlow(const Brx& aServiceId, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
{
    SyncBeginLimitedInputFlowAvOpenhomeOrgOAuth1C sync(*this, aJobId, aLoginUrl, aUserCode);
    BeginBeginLimitedInputFlow(aServiceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgOAuth1C::BeginBeginLimitedInputFlow(const Brx& aServiceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgOAuth1C::EndBeginLimitedInputFlow(IAsync& aAsync, Brh& aJobId, Brh& aLoginUrl, Brh& aUserCode)
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

void CpProxyAvOpenhomeOrgOAuth1C::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPublicKeyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgOAuth1C::SetPropertyUpdateIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgOAuth1C::SetPropertyJobUpdateIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iJobUpdateIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgOAuth1C::SetPropertySupportedServicesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSupportedServicesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgOAuth1C::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyAvOpenhomeOrgOAuth1C::PropertyUpdateId(TUint& aUpdateId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateId = iUpdateId->Value();
}

void CpProxyAvOpenhomeOrgOAuth1C::PropertyJobUpdateId(TUint& aJobUpdateId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aJobUpdateId = iJobUpdateId->Value();
}

void CpProxyAvOpenhomeOrgOAuth1C::PropertySupportedServices(Brhz& aSupportedServices) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSupportedServices.Set(iSupportedServices->Value());
}

void CpProxyAvOpenhomeOrgOAuth1C::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyAvOpenhomeOrgOAuth1C::UpdateIdPropertyChanged()
{
    ReportEvent(iUpdateIdChanged);
}

void CpProxyAvOpenhomeOrgOAuth1C::JobUpdateIdPropertyChanged()
{
    ReportEvent(iJobUpdateIdChanged);
}

void CpProxyAvOpenhomeOrgOAuth1C::SupportedServicesPropertyChanged()
{
    ReportEvent(iSupportedServicesChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgOAuth1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgOAuth1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgOAuth1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncSetToken(THandle aHandle, const char* aServiceId, const char* aTokenId, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aIsLongLived)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginSetToken(THandle aHandle, const char* aServiceId, const char* aTokenId, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aIsLongLived, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndSetToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPublicKey(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearShortLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearShortLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearShortLivedToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearShortLivedToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearLongLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearLongLivedToken(THandle aHandle, const char* aServiceId, const char* aTokenId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    Brh buf_aTokenId(aTokenId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearLongLivedToken(buf_aServiceId, buf_aTokenId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearLongLivedToken(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearShortLivedTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearShortLivedTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearShortLivedTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearShortLivedTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearLongLivedTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearLongLivedTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearLongLivedTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearLongLivedTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncClearAllTokens(THandle aHandle, const char* aServiceId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginClearAllTokens(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearAllTokens(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndClearAllTokens(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetUpdateId(THandle aHandle, uint32_t* aUpdateId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetUpdateId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateId(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetUpdateId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aUpdateId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetServiceStatus(THandle aHandle, char** aServiceStatusJson)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetServiceStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetServiceStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetServiceStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aServiceStatusJson)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetJobUpdateId(THandle aHandle, uint32_t* aJobUpdateId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetJobUpdateId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobUpdateId(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetJobUpdateId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aJobUpdateId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetJobStatus(THandle aHandle, char** aJobStatusJson)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetJobStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetJobStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aJobStatusJson)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncGetSupportedServices(THandle aHandle, char** aSupportedServiceListJson)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginGetSupportedServices(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSupportedServices(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndGetSupportedServices(THandle aHandle, OhNetHandleAsync aAsync, char** aSupportedServiceListJson)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1SyncBeginLimitedInputFlow(THandle aHandle, const char* aServiceId, char** aJobId, char** aLoginUrl, char** aUserCode)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1BeginBeginLimitedInputFlow(THandle aHandle, const char* aServiceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aServiceId(aServiceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBeginLimitedInputFlow(buf_aServiceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1EndBeginLimitedInputFlow(THandle aHandle, OhNetHandleAsync aAsync, char** aJobId, char** aLoginUrl, char** aUserCode)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgOAuth1SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPublicKeyChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgOAuth1SetPropertyUpdateIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateIdChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgOAuth1SetPropertyJobUpdateIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyJobUpdateIdChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgOAuth1SetPropertySupportedServicesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySupportedServicesChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1PropertyPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1PropertyUpdateId(THandle aHandle, uint32_t* aUpdateId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateId(*aUpdateId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1PropertyJobUpdateId(THandle aHandle, uint32_t* aJobUpdateId)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyJobUpdateId(*aJobUpdateId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgOAuth1PropertySupportedServices(THandle aHandle, char** aSupportedServices)
{
    CpProxyAvOpenhomeOrgOAuth1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgOAuth1C*>(aHandle);
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

