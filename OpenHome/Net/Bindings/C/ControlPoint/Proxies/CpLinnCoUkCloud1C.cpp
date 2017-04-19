#include "CpLinnCoUkCloud1.h"
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

class CpProxyLinnCoUkCloud1C : public CpProxyC
{
public:
    CpProxyLinnCoUkCloud1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkCloud1C();
    //CpProxyLinnCoUkCloud1* Proxy() { return static_cast<CpProxyLinnCoUkCloud1*>(iProxy); }

    void SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse);
    void BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor);
    void EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse);

    void SyncSetControlEnabled(TBool aEnabled);
    void BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor);
    void EndSetControlEnabled(IAsync& aAsync);

    void SyncGetControlEnabled(TBool& aEnabled);
    void BeginGetControlEnabled(FunctorAsync& aFunctor);
    void EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled);

    void SetPropertyControlEnabledChanged(Functor& aFunctor);

    void PropertyControlEnabled(TBool& aControlEnabled) const;
private:
    void ControlEnabledPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetChallengeResponse;
    Action* iActionSetControlEnabled;
    Action* iActionGetControlEnabled;
    PropertyBool* iControlEnabled;
    Functor iControlEnabledChanged;
};


class SyncGetChallengeResponseLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, Brh& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChallengeResponseLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
    Brh& iResponse;
};

SyncGetChallengeResponseLinnCoUkCloud1C::SyncGetChallengeResponseLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, Brh& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}


class SyncSetControlEnabledLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncSetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetControlEnabledLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
};

SyncSetControlEnabledLinnCoUkCloud1C::SyncSetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetControlEnabledLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetControlEnabled(aAsync);
}


class SyncGetControlEnabledLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncGetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aEnabled);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetControlEnabledLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
    TBool& iEnabled;
};

SyncGetControlEnabledLinnCoUkCloud1C::SyncGetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aEnabled)
    : iService(aProxy)
    , iEnabled(aEnabled)
{
}

void SyncGetControlEnabledLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetControlEnabled(aAsync, iEnabled);
}

CpProxyLinnCoUkCloud1C::CpProxyLinnCoUkCloud1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Cloud", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetChallengeResponse = new Action("GetChallengeResponse");
    param = new OpenHome::Net::ParameterString("Challenge");
    iActionGetChallengeResponse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Response");
    iActionGetChallengeResponse->AddOutputParameter(param);

    iActionSetControlEnabled = new Action("SetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetControlEnabled->AddInputParameter(param);

    iActionGetControlEnabled = new Action("GetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGetControlEnabled->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1C::ControlEnabledPropertyChanged);
    iControlEnabled = new PropertyBool("ControlEnabled", functor);
    AddProperty(iControlEnabled);
}

CpProxyLinnCoUkCloud1C::~CpProxyLinnCoUkCloud1C()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetControlEnabled;
    delete iActionGetControlEnabled;
}

void CpProxyLinnCoUkCloud1C::SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud1C sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkCloud1C::EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse)
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

void CpProxyLinnCoUkCloud1C::SyncSetControlEnabled(TBool aEnabled)
{
    SyncSetControlEnabledLinnCoUkCloud1C sync(*this);
    BeginSetControlEnabled(aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetControlEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetControlEnabled->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndSetControlEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1C::SyncGetControlEnabled(TBool& aEnabled)
{
    SyncGetControlEnabledLinnCoUkCloud1C sync(*this, aEnabled);
    BeginGetControlEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginGetControlEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetControlEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetControlEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1C::SetPropertyControlEnabledChanged(Functor& aFunctor)
{
    iLock.Wait();
    iControlEnabledChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud1C::PropertyControlEnabled(TBool& aControlEnabled) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aControlEnabled = iControlEnabled->Value();
}

void CpProxyLinnCoUkCloud1C::ControlEnabledPropertyChanged()
{
    ReportEvent(iControlEnabledChanged);
}


THandle STDCALL CpProxyLinnCoUkCloud1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkCloud1C(aDevice);
}

void STDCALL CpProxyLinnCoUkCloud1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncGetChallengeResponse(THandle aHandle, const char* aChallenge, char** aResponse)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkCloud1BeginGetChallengeResponse(THandle aHandle, const char* aChallenge, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChallenge(aChallenge);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetChallengeResponse(buf_aChallenge, functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndGetChallengeResponse(THandle aHandle, OhNetHandleAsync aAsync, char** aResponse)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkCloud1SyncSetControlEnabled(THandle aHandle, uint32_t aEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetControlEnabled((aEnabled==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginSetControlEnabled(THandle aHandle, uint32_t aEnabled, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetControlEnabled((aEnabled==0? false : true), functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndSetControlEnabled(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetControlEnabled(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncGetControlEnabled(THandle aHandle, uint32_t* aEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Enabled;
    int32_t err = 0;
    try {
        proxyC->SyncGetControlEnabled(Enabled);
        *aEnabled = Enabled? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aEnabled = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginGetControlEnabled(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetControlEnabled(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndGetControlEnabled(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aEnabled)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Enabled;
    try {
        proxyC->EndGetControlEnabled(*async, Enabled);
        *aEnabled = Enabled? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1SetPropertyControlEnabledChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyControlEnabledChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1PropertyControlEnabled(THandle aHandle, uint32_t* aControlEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool ControlEnabled;
    try {
        proxyC->PropertyControlEnabled(ControlEnabled);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aControlEnabled = ControlEnabled? 1 : 0;
    return 0;
}

