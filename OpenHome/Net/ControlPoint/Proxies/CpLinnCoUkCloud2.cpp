#include "CpLinnCoUkCloud2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetChallengeResponseLinnCoUkCloud2 : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud2& iService;
    Brh& iResponse;
};

class SyncSetAssociatedLinnCoUkCloud2 : public SyncProxyAction
{
public:
    SyncSetAssociatedLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud2& iService;
};

class SyncGetConnectedLinnCoUkCloud2 : public SyncProxyAction
{
public:
    SyncGetConnectedLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, TBool& aConnected);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud2& iService;
    TBool& iConnected;
};

class SyncGetAccountIdLinnCoUkCloud2 : public SyncProxyAction
{
public:
    SyncGetAccountIdLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aAccountId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud2& iService;
    Brh& iAccountId;
};

class SyncGetPublicKeyLinnCoUkCloud2 : public SyncProxyAction
{
public:
    SyncGetPublicKeyLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud2& iService;
    Brh& iPublicKey;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetChallengeResponseLinnCoUkCloud2

SyncGetChallengeResponseLinnCoUkCloud2::SyncGetChallengeResponseLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}

// SyncSetAssociatedLinnCoUkCloud2

SyncSetAssociatedLinnCoUkCloud2::SyncSetAssociatedLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociatedLinnCoUkCloud2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociated(aAsync);
}

// SyncGetConnectedLinnCoUkCloud2

SyncGetConnectedLinnCoUkCloud2::SyncGetConnectedLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, TBool& aConnected)
    : iService(aProxy)
    , iConnected(aConnected)
{
}

void SyncGetConnectedLinnCoUkCloud2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConnected(aAsync, iConnected);
}

// SyncGetAccountIdLinnCoUkCloud2

SyncGetAccountIdLinnCoUkCloud2::SyncGetAccountIdLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aAccountId)
    : iService(aProxy)
    , iAccountId(aAccountId)
{
}

void SyncGetAccountIdLinnCoUkCloud2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAccountId(aAsync, iAccountId);
}

// SyncGetPublicKeyLinnCoUkCloud2

SyncGetPublicKeyLinnCoUkCloud2::SyncGetPublicKeyLinnCoUkCloud2(CpProxyLinnCoUkCloud2& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyLinnCoUkCloud2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


// CpProxyLinnCoUkCloud2

CpProxyLinnCoUkCloud2::CpProxyLinnCoUkCloud2(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2::ConnectedPropertyChanged);
    iConnected = new PropertyBool("Connected", functor);
    AddProperty(iConnected);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2::AccountIdPropertyChanged);
    iAccountId = new PropertyString("AccountId", functor);
    AddProperty(iAccountId);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
}

CpProxyLinnCoUkCloud2::~CpProxyLinnCoUkCloud2()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetAssociated;
    delete iActionGetConnected;
    delete iActionGetAccountId;
    delete iActionGetPublicKey;
}

void CpProxyLinnCoUkCloud2::SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud2 sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2::BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChallengeResponse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetChallengeResponse->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChallenge));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChallengeResponse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2::EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResponse);
}

void CpProxyLinnCoUkCloud2::SyncSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated)
{
    SyncSetAssociatedLinnCoUkCloud2 sync(*this);
    BeginSetAssociated(aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aAssociated, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2::BeginSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociated, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociated->InputParameters();
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aAesKeyRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aInitVectorRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aTokenAesEncrypted));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aAssociated));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2::EndSetAssociated(IAsync& aAsync)
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

void CpProxyLinnCoUkCloud2::SyncGetConnected(TBool& aConnected)
{
    SyncGetConnectedLinnCoUkCloud2 sync(*this, aConnected);
    BeginGetConnected(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2::BeginGetConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2::EndGetConnected(IAsync& aAsync, TBool& aConnected)
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

void CpProxyLinnCoUkCloud2::SyncGetAccountId(Brh& aAccountId)
{
    SyncGetAccountIdLinnCoUkCloud2 sync(*this, aAccountId);
    BeginGetAccountId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2::BeginGetAccountId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAccountId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAccountId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2::EndGetAccountId(IAsync& aAsync, Brh& aAccountId)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aAccountId);
}

void CpProxyLinnCoUkCloud2::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyLinnCoUkCloud2 sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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

void CpProxyLinnCoUkCloud2::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2::SetPropertyConnectedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2::SetPropertyAccountIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAccountIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud2::PropertyAssociationStatus(Brhz& aAssociationStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAssociationStatus.Set(iAssociationStatus->Value());
}

void CpProxyLinnCoUkCloud2::PropertyConnected(TBool& aConnected) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConnected = iConnected->Value();
}

void CpProxyLinnCoUkCloud2::PropertyAccountId(Brhz& aAccountId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAccountId.Set(iAccountId->Value());
}

void CpProxyLinnCoUkCloud2::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyLinnCoUkCloud2::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud2::ConnectedPropertyChanged()
{
    ReportEvent(iConnectedChanged);
}

void CpProxyLinnCoUkCloud2::AccountIdPropertyChanged()
{
    ReportEvent(iAccountIdChanged);
}

void CpProxyLinnCoUkCloud2::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}


void CpProxyLinnCoUkCloud2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkCloud2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkCloud2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkCloud2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkCloud2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkCloud2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkCloud2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkCloud2::Version() const
{
  return iCpProxy.Version();
}


