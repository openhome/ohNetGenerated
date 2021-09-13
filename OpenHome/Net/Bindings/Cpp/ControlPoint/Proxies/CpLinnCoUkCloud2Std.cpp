#include "CpLinnCoUkCloud2.h"
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


class SyncGetChallengeResponseLinnCoUkCloud2Cpp : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChallengeResponseLinnCoUkCloud2Cpp() {}
private:
    CpProxyLinnCoUkCloud2Cpp& iService;
    std::string& iResponse;
};

SyncGetChallengeResponseLinnCoUkCloud2Cpp::SyncGetChallengeResponseLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}


class SyncSetAssociatedLinnCoUkCloud2Cpp : public SyncProxyAction
{
public:
    SyncSetAssociatedLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociatedLinnCoUkCloud2Cpp() {}
private:
    CpProxyLinnCoUkCloud2Cpp& iService;
};

SyncSetAssociatedLinnCoUkCloud2Cpp::SyncSetAssociatedLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociatedLinnCoUkCloud2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociated(aAsync);
}


class SyncGetConnectedLinnCoUkCloud2Cpp : public SyncProxyAction
{
public:
    SyncGetConnectedLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, bool& aConnected);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConnectedLinnCoUkCloud2Cpp() {}
private:
    CpProxyLinnCoUkCloud2Cpp& iService;
    bool& iConnected;
};

SyncGetConnectedLinnCoUkCloud2Cpp::SyncGetConnectedLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, bool& aConnected)
    : iService(aProxy)
    , iConnected(aConnected)
{
}

void SyncGetConnectedLinnCoUkCloud2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConnected(aAsync, iConnected);
}


class SyncGetAccountIdLinnCoUkCloud2Cpp : public SyncProxyAction
{
public:
    SyncGetAccountIdLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aAccountId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAccountIdLinnCoUkCloud2Cpp() {}
private:
    CpProxyLinnCoUkCloud2Cpp& iService;
    std::string& iAccountId;
};

SyncGetAccountIdLinnCoUkCloud2Cpp::SyncGetAccountIdLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aAccountId)
    : iService(aProxy)
    , iAccountId(aAccountId)
{
}

void SyncGetAccountIdLinnCoUkCloud2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAccountId(aAsync, iAccountId);
}


class SyncGetPublicKeyLinnCoUkCloud2Cpp : public SyncProxyAction
{
public:
    SyncGetPublicKeyLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyLinnCoUkCloud2Cpp() {}
private:
    CpProxyLinnCoUkCloud2Cpp& iService;
    std::string& iPublicKey;
};

SyncGetPublicKeyLinnCoUkCloud2Cpp::SyncGetPublicKeyLinnCoUkCloud2Cpp(CpProxyLinnCoUkCloud2Cpp& aProxy, std::string& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyLinnCoUkCloud2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


CpProxyLinnCoUkCloud2Cpp::CpProxyLinnCoUkCloud2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Cloud", 2, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetChallengeResponse = new Action("GetChallengeResponse");
    param = new OpenHome::Net::ParameterString("Challenge");
    iActionGetChallengeResponse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Response");
    iActionGetChallengeResponse->AddOutputParameter(param);

    iActionSetAssociated = new Action("SetAssociated");
    param = new OpenHome::Net::ParameterBinary("AesKeyRsaEncrypted");
    iActionSetAssociated->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("InitVectorRsaEncrypted");
    iActionSetAssociated->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBinary("TokenAesEncrypted");
    iActionSetAssociated->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Associated");
    iActionSetAssociated->AddInputParameter(param);

    iActionGetConnected = new Action("GetConnected");
    param = new OpenHome::Net::ParameterBool("Connected");
    iActionGetConnected->AddOutputParameter(param);

    iActionGetAccountId = new Action("GetAccountId");
    param = new OpenHome::Net::ParameterString("AccountId");
    iActionGetAccountId->AddOutputParameter(param);

    iActionGetPublicKey = new Action("GetPublicKey");
    param = new OpenHome::Net::ParameterString("PublicKey");
    iActionGetPublicKey->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2Cpp::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2Cpp::ConnectedPropertyChanged);
    iConnected = new PropertyBool("Connected", functor);
    AddProperty(iConnected);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2Cpp::AccountIdPropertyChanged);
    iAccountId = new PropertyString("AccountId", functor);
    AddProperty(iAccountId);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2Cpp::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
}

CpProxyLinnCoUkCloud2Cpp::~CpProxyLinnCoUkCloud2Cpp()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetAssociated;
    delete iActionGetConnected;
    delete iActionGetAccountId;
    delete iActionGetPublicKey;
}

void CpProxyLinnCoUkCloud2Cpp::SyncGetChallengeResponse(const std::string& aChallenge, std::string& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud2Cpp sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2Cpp::BeginGetChallengeResponse(const std::string& aChallenge, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChallengeResponse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetChallengeResponse->InputParameters();
    {
        Brn buf((const TByte*)aChallenge.c_str(), (TUint)aChallenge.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChallengeResponse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2Cpp::EndGetChallengeResponse(IAsync& aAsync, std::string& aResponse)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetChallengeResponse"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aResponse.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkCloud2Cpp::SyncSetAssociated(const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aAssociated)
{
    SyncSetAssociatedLinnCoUkCloud2Cpp sync(*this);
    BeginSetAssociated(aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aAssociated, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2Cpp::BeginSetAssociated(const std::string& aAesKeyRsaEncrypted, const std::string& aInitVectorRsaEncrypted, const std::string& aTokenAesEncrypted, bool aAssociated, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociated, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociated->InputParameters();
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
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aAssociated));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2Cpp::EndSetAssociated(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociated"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud2Cpp::SyncGetConnected(bool& aConnected)
{
    SyncGetConnectedLinnCoUkCloud2Cpp sync(*this, aConnected);
    BeginGetConnected(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2Cpp::BeginGetConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2Cpp::EndGetConnected(IAsync& aAsync, bool& aConnected)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetConnected"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aConnected = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud2Cpp::SyncGetAccountId(std::string& aAccountId)
{
    SyncGetAccountIdLinnCoUkCloud2Cpp sync(*this, aAccountId);
    BeginGetAccountId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2Cpp::BeginGetAccountId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAccountId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAccountId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2Cpp::EndGetAccountId(IAsync& aAsync, std::string& aAccountId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAccountId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aAccountId.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkCloud2Cpp::SyncGetPublicKey(std::string& aPublicKey)
{
    SyncGetPublicKeyLinnCoUkCloud2Cpp sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2Cpp::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2Cpp::EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey)
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

void CpProxyLinnCoUkCloud2Cpp::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2Cpp::SetPropertyConnectedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2Cpp::SetPropertyAccountIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAccountIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2Cpp::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2Cpp::PropertyAssociationStatus(std::string& aAssociationStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAssociationStatus->Value();
    aAssociationStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud2Cpp::PropertyConnected(bool& aConnected) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConnected = iConnected->Value();
}

void CpProxyLinnCoUkCloud2Cpp::PropertyAccountId(std::string& aAccountId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAccountId->Value();
    aAccountId.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud2Cpp::PropertyPublicKey(std::string& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPublicKey->Value();
    aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud2Cpp::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud2Cpp::ConnectedPropertyChanged()
{
    ReportEvent(iConnectedChanged);
}

void CpProxyLinnCoUkCloud2Cpp::AccountIdPropertyChanged()
{
    ReportEvent(iAccountIdChanged);
}

void CpProxyLinnCoUkCloud2Cpp::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyLinnCoUkCloud2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkCloud2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkCloud2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkCloud2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkCloud2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkCloud2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkCloud2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkCloud2Cpp::Version() const
{
  return iCpProxy.Version();
}

