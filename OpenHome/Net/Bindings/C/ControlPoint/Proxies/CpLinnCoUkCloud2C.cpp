#include "CpLinnCoUkCloud2.h"
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

class CpProxyLinnCoUkCloud2C : public CpProxyC
{
public:
    CpProxyLinnCoUkCloud2C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkCloud2C();
    //CpProxyLinnCoUkCloud2* Proxy() { return static_cast<CpProxyLinnCoUkCloud2*>(iProxy); }

    void SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse);
    void BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor);
    void EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse);

    void SyncSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated);
    void BeginSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated, FunctorAsync& aFunctor);
    void EndSetAssociated(IAsync& aAsync);

    void SyncGetConnected(TBool& aConnected);
    void BeginGetConnected(FunctorAsync& aFunctor);
    void EndGetConnected(IAsync& aAsync, TBool& aConnected);

    void SyncGetAccountId(Brh& aAccountId);
    void BeginGetAccountId(FunctorAsync& aFunctor);
    void EndGetAccountId(IAsync& aAsync, Brh& aAccountId);

    void SyncGetPublicKey(Brh& aPublicKey);
    void BeginGetPublicKey(FunctorAsync& aFunctor);
    void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey);

    void SetPropertyAssociationStatusChanged(Functor& aFunctor);
    void SetPropertyConnectedChanged(Functor& aFunctor);
    void SetPropertyAccountIdChanged(Functor& aFunctor);
    void SetPropertyPublicKeyChanged(Functor& aFunctor);

    void PropertyAssociationStatus(Brhz& aAssociationStatus) const;
    void PropertyConnected(TBool& aConnected) const;
    void PropertyAccountId(Brhz& aAccountId) const;
    void PropertyPublicKey(Brhz& aPublicKey) const;
private:
    void AssociationStatusPropertyChanged();
    void ConnectedPropertyChanged();
    void AccountIdPropertyChanged();
    void PublicKeyPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetChallengeResponse;
    Action* iActionSetAssociated;
    Action* iActionGetConnected;
    Action* iActionGetAccountId;
    Action* iActionGetPublicKey;
    PropertyString* iAssociationStatus;
    PropertyBool* iConnected;
    PropertyString* iAccountId;
    PropertyString* iPublicKey;
    Functor iAssociationStatusChanged;
    Functor iConnectedChanged;
    Functor iAccountIdChanged;
    Functor iPublicKeyChanged;
};


class SyncGetChallengeResponseLinnCoUkCloud2C : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChallengeResponseLinnCoUkCloud2C() {};
private:
    CpProxyLinnCoUkCloud2C& iService;
    Brh& iResponse;
};

SyncGetChallengeResponseLinnCoUkCloud2C::SyncGetChallengeResponseLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}


class SyncSetAssociatedLinnCoUkCloud2C : public SyncProxyAction
{
public:
    SyncSetAssociatedLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociatedLinnCoUkCloud2C() {};
private:
    CpProxyLinnCoUkCloud2C& iService;
};

SyncSetAssociatedLinnCoUkCloud2C::SyncSetAssociatedLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociatedLinnCoUkCloud2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociated(aAsync);
}


class SyncGetConnectedLinnCoUkCloud2C : public SyncProxyAction
{
public:
    SyncGetConnectedLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, TBool& aConnected);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConnectedLinnCoUkCloud2C() {};
private:
    CpProxyLinnCoUkCloud2C& iService;
    TBool& iConnected;
};

SyncGetConnectedLinnCoUkCloud2C::SyncGetConnectedLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, TBool& aConnected)
    : iService(aProxy)
    , iConnected(aConnected)
{
}

void SyncGetConnectedLinnCoUkCloud2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConnected(aAsync, iConnected);
}


class SyncGetAccountIdLinnCoUkCloud2C : public SyncProxyAction
{
public:
    SyncGetAccountIdLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aAccountId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAccountIdLinnCoUkCloud2C() {};
private:
    CpProxyLinnCoUkCloud2C& iService;
    Brh& iAccountId;
};

SyncGetAccountIdLinnCoUkCloud2C::SyncGetAccountIdLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aAccountId)
    : iService(aProxy)
    , iAccountId(aAccountId)
{
}

void SyncGetAccountIdLinnCoUkCloud2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAccountId(aAsync, iAccountId);
}


class SyncGetPublicKeyLinnCoUkCloud2C : public SyncProxyAction
{
public:
    SyncGetPublicKeyLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyLinnCoUkCloud2C() {};
private:
    CpProxyLinnCoUkCloud2C& iService;
    Brh& iPublicKey;
};

SyncGetPublicKeyLinnCoUkCloud2C::SyncGetPublicKeyLinnCoUkCloud2C(CpProxyLinnCoUkCloud2C& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyLinnCoUkCloud2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}

CpProxyLinnCoUkCloud2C::CpProxyLinnCoUkCloud2C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Cloud", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2C::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2C::ConnectedPropertyChanged);
    iConnected = new PropertyBool("Connected", functor);
    AddProperty(iConnected);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2C::AccountIdPropertyChanged);
    iAccountId = new PropertyString("AccountId", functor);
    AddProperty(iAccountId);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud2C::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
}

CpProxyLinnCoUkCloud2C::~CpProxyLinnCoUkCloud2C()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetAssociated;
    delete iActionGetConnected;
    delete iActionGetAccountId;
    delete iActionGetPublicKey;
}

void CpProxyLinnCoUkCloud2C::SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud2C sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2C::BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetChallengeResponse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetChallengeResponse->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChallenge));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChallengeResponse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2C::EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse)
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

void CpProxyLinnCoUkCloud2C::SyncSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated)
{
    SyncSetAssociatedLinnCoUkCloud2C sync(*this);
    BeginSetAssociated(aAesKeyRsaEncrypted, aInitVectorRsaEncrypted, aTokenAesEncrypted, aAssociated, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2C::BeginSetAssociated(const Brx& aAesKeyRsaEncrypted, const Brx& aInitVectorRsaEncrypted, const Brx& aTokenAesEncrypted, TBool aAssociated, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAssociated, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociated->InputParameters();
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aAesKeyRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aInitVectorRsaEncrypted));
    invocation->AddInput(new ArgumentBinary(*inParams[inIndex++], aTokenAesEncrypted));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aAssociated));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2C::EndSetAssociated(IAsync& aAsync)
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

void CpProxyLinnCoUkCloud2C::SyncGetConnected(TBool& aConnected)
{
    SyncGetConnectedLinnCoUkCloud2C sync(*this, aConnected);
    BeginGetConnected(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2C::BeginGetConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2C::EndGetConnected(IAsync& aAsync, TBool& aConnected)
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

void CpProxyLinnCoUkCloud2C::SyncGetAccountId(Brh& aAccountId)
{
    SyncGetAccountIdLinnCoUkCloud2C sync(*this, aAccountId);
    BeginGetAccountId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2C::BeginGetAccountId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAccountId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAccountId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2C::EndGetAccountId(IAsync& aAsync, Brh& aAccountId)
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

void CpProxyLinnCoUkCloud2C::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyLinnCoUkCloud2C sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud2C::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud2C::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
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

void CpProxyLinnCoUkCloud2C::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAssociationStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud2C::SetPropertyConnectedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud2C::SetPropertyAccountIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAccountIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud2C::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPublicKeyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud2C::PropertyAssociationStatus(Brhz& aAssociationStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAssociationStatus.Set(iAssociationStatus->Value());
}

void CpProxyLinnCoUkCloud2C::PropertyConnected(TBool& aConnected) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aConnected = iConnected->Value();
}

void CpProxyLinnCoUkCloud2C::PropertyAccountId(Brhz& aAccountId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAccountId.Set(iAccountId->Value());
}

void CpProxyLinnCoUkCloud2C::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyLinnCoUkCloud2C::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud2C::ConnectedPropertyChanged()
{
    ReportEvent(iConnectedChanged);
}

void CpProxyLinnCoUkCloud2C::AccountIdPropertyChanged()
{
    ReportEvent(iAccountIdChanged);
}

void CpProxyLinnCoUkCloud2C::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}


THandle STDCALL CpProxyLinnCoUkCloud2Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkCloud2C(aDevice);
}

void STDCALL CpProxyLinnCoUkCloud2Destroy(THandle aHandle)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkCloud2SyncGetChallengeResponse(THandle aHandle, const char* aChallenge, char** aResponse)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChallenge(aChallenge);
    Brh buf_aResponse;
    int32_t err = 0;
    try {
        proxyC->SyncGetChallengeResponse(buf_aChallenge, buf_aResponse);
        *aResponse = buf_aResponse.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aResponse = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud2BeginGetChallengeResponse(THandle aHandle, const char* aChallenge, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChallenge(aChallenge);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetChallengeResponse(buf_aChallenge, functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2EndGetChallengeResponse(THandle aHandle, OhNetHandleAsync aAsync, char** aResponse)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aResponse;
    *aResponse = NULL;
    try {
        proxyC->EndGetChallengeResponse(*async, buf_aResponse);
        *aResponse = buf_aResponse.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud2SyncSetAssociated(THandle aHandle, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aAssociated)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAesKeyRsaEncrypted;
    buf_aAesKeyRsaEncrypted.Set((const TByte*)aAesKeyRsaEncrypted, aAesKeyRsaEncryptedLen);
    Brh buf_aInitVectorRsaEncrypted;
    buf_aInitVectorRsaEncrypted.Set((const TByte*)aInitVectorRsaEncrypted, aInitVectorRsaEncryptedLen);
    Brh buf_aTokenAesEncrypted;
    buf_aTokenAesEncrypted.Set((const TByte*)aTokenAesEncrypted, aTokenAesEncryptedLen);
    int32_t err = 0;
    try {
        proxyC->SyncSetAssociated(buf_aAesKeyRsaEncrypted, buf_aInitVectorRsaEncrypted, buf_aTokenAesEncrypted, (aAssociated==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud2BeginSetAssociated(THandle aHandle, const char* aAesKeyRsaEncrypted, uint32_t aAesKeyRsaEncryptedLen, const char* aInitVectorRsaEncrypted, uint32_t aInitVectorRsaEncryptedLen, const char* aTokenAesEncrypted, uint32_t aTokenAesEncryptedLen, uint32_t aAssociated, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAesKeyRsaEncrypted;
    buf_aAesKeyRsaEncrypted.Set((const TByte*)aAesKeyRsaEncrypted, aAesKeyRsaEncryptedLen);
    Brh buf_aInitVectorRsaEncrypted;
    buf_aInitVectorRsaEncrypted.Set((const TByte*)aInitVectorRsaEncrypted, aInitVectorRsaEncryptedLen);
    Brh buf_aTokenAesEncrypted;
    buf_aTokenAesEncrypted.Set((const TByte*)aTokenAesEncrypted, aTokenAesEncryptedLen);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAssociated(buf_aAesKeyRsaEncrypted, buf_aInitVectorRsaEncrypted, buf_aTokenAesEncrypted, (aAssociated==0? false : true), functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2EndSetAssociated(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetAssociated(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud2SyncGetConnected(THandle aHandle, uint32_t* aConnected)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Connected;
    int32_t err = 0;
    try {
        proxyC->SyncGetConnected(Connected);
        *aConnected = Connected? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aConnected = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud2BeginGetConnected(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetConnected(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2EndGetConnected(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aConnected)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Connected;
    try {
        proxyC->EndGetConnected(*async, Connected);
        *aConnected = Connected? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud2SyncGetAccountId(THandle aHandle, char** aAccountId)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAccountId;
    int32_t err = 0;
    try {
        proxyC->SyncGetAccountId(buf_aAccountId);
        *aAccountId = buf_aAccountId.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aAccountId = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud2BeginGetAccountId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAccountId(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2EndGetAccountId(THandle aHandle, OhNetHandleAsync aAsync, char** aAccountId)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aAccountId;
    *aAccountId = NULL;
    try {
        proxyC->EndGetAccountId(*async, buf_aAccountId);
        *aAccountId = buf_aAccountId.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud2SyncGetPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkCloud2BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPublicKey(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkCloud2SetPropertyAssociationStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAssociationStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud2SetPropertyConnectedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectedChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud2SetPropertyAccountIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAccountIdChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud2SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPublicKeyChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud2PropertyAssociationStatus(THandle aHandle, char** aAssociationStatus)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAssociationStatus;
    try {
        proxyC->PropertyAssociationStatus(buf_aAssociationStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAssociationStatus = buf_aAssociationStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud2PropertyConnected(THandle aHandle, uint32_t* aConnected)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Connected;
    try {
        proxyC->PropertyConnected(Connected);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aConnected = Connected? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud2PropertyAccountId(THandle aHandle, char** aAccountId)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAccountId;
    try {
        proxyC->PropertyAccountId(buf_aAccountId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAccountId = buf_aAccountId.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud2PropertyPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyLinnCoUkCloud2C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud2C*>(aHandle);
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

