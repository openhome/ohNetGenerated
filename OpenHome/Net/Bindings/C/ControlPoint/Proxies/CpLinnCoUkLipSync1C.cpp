#include "CpLinnCoUkLipSync1.h"
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

class CpProxyLinnCoUkLipSync1C : public CpProxyC
{
public:
    CpProxyLinnCoUkLipSync1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkLipSync1C();
    //CpProxyLinnCoUkLipSync1* Proxy() { return static_cast<CpProxyLinnCoUkLipSync1*>(iProxy); }

    void SyncSetDelay(TUint aDelay);
    void BeginSetDelay(TUint aDelay, FunctorAsync& aFunctor);
    void EndSetDelay(IAsync& aAsync);

    void SyncDelay(TUint& aDelay);
    void BeginDelay(FunctorAsync& aFunctor);
    void EndDelay(IAsync& aAsync, TUint& aDelay);

    void SyncDelayMinimum(TUint& aMin);
    void BeginDelayMinimum(FunctorAsync& aFunctor);
    void EndDelayMinimum(IAsync& aAsync, TUint& aMin);

    void SyncDelayMaximum(TUint& aMax);
    void BeginDelayMaximum(FunctorAsync& aFunctor);
    void EndDelayMaximum(IAsync& aAsync, TUint& aMax);

    void SetPropertyDelayChanged(Functor& aFunctor);
    void SetPropertyDelayMinimumChanged(Functor& aFunctor);
    void SetPropertyDelayMaximumChanged(Functor& aFunctor);

    void PropertyDelay(TUint& aDelay) const;
    void PropertyDelayMinimum(TUint& aDelayMinimum) const;
    void PropertyDelayMaximum(TUint& aDelayMaximum) const;
private:
    void DelayPropertyChanged();
    void DelayMinimumPropertyChanged();
    void DelayMaximumPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetDelay;
    Action* iActionDelay;
    Action* iActionDelayMinimum;
    Action* iActionDelayMaximum;
    PropertyUint* iDelay;
    PropertyUint* iDelayMinimum;
    PropertyUint* iDelayMaximum;
    Functor iDelayChanged;
    Functor iDelayMinimumChanged;
    Functor iDelayMaximumChanged;
};


class SyncSetDelayLinnCoUkLipSync1C : public SyncProxyAction
{
public:
    SyncSetDelayLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDelayLinnCoUkLipSync1C() {};
private:
    CpProxyLinnCoUkLipSync1C& iService;
};

SyncSetDelayLinnCoUkLipSync1C::SyncSetDelayLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetDelayLinnCoUkLipSync1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDelay(aAsync);
}


class SyncDelayLinnCoUkLipSync1C : public SyncProxyAction
{
public:
    SyncDelayLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aDelay);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayLinnCoUkLipSync1C() {};
private:
    CpProxyLinnCoUkLipSync1C& iService;
    TUint& iDelay;
};

SyncDelayLinnCoUkLipSync1C::SyncDelayLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aDelay)
    : iService(aProxy)
    , iDelay(aDelay)
{
}

void SyncDelayLinnCoUkLipSync1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelay(aAsync, iDelay);
}


class SyncDelayMinimumLinnCoUkLipSync1C : public SyncProxyAction
{
public:
    SyncDelayMinimumLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aMin);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayMinimumLinnCoUkLipSync1C() {};
private:
    CpProxyLinnCoUkLipSync1C& iService;
    TUint& iMin;
};

SyncDelayMinimumLinnCoUkLipSync1C::SyncDelayMinimumLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aMin)
    : iService(aProxy)
    , iMin(aMin)
{
}

void SyncDelayMinimumLinnCoUkLipSync1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMinimum(aAsync, iMin);
}


class SyncDelayMaximumLinnCoUkLipSync1C : public SyncProxyAction
{
public:
    SyncDelayMaximumLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayMaximumLinnCoUkLipSync1C() {};
private:
    CpProxyLinnCoUkLipSync1C& iService;
    TUint& iMax;
};

SyncDelayMaximumLinnCoUkLipSync1C::SyncDelayMaximumLinnCoUkLipSync1C(CpProxyLinnCoUkLipSync1C& aProxy, TUint& aMax)
    : iService(aProxy)
    , iMax(aMax)
{
}

void SyncDelayMaximumLinnCoUkLipSync1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMaximum(aAsync, iMax);
}

CpProxyLinnCoUkLipSync1C::CpProxyLinnCoUkLipSync1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "LipSync", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionSetDelay = new Action("SetDelay");
    param = new OpenHome::Net::ParameterUint("Delay");
    iActionSetDelay->AddInputParameter(param);

    iActionDelay = new Action("Delay");
    param = new OpenHome::Net::ParameterUint("Delay");
    iActionDelay->AddOutputParameter(param);

    iActionDelayMinimum = new Action("DelayMinimum");
    param = new OpenHome::Net::ParameterUint("Min");
    iActionDelayMinimum->AddOutputParameter(param);

    iActionDelayMaximum = new Action("DelayMaximum");
    param = new OpenHome::Net::ParameterUint("Max");
    iActionDelayMaximum->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1C::DelayPropertyChanged);
    iDelay = new PropertyUint("Delay", functor);
    AddProperty(iDelay);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1C::DelayMinimumPropertyChanged);
    iDelayMinimum = new PropertyUint("DelayMinimum", functor);
    AddProperty(iDelayMinimum);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1C::DelayMaximumPropertyChanged);
    iDelayMaximum = new PropertyUint("DelayMaximum", functor);
    AddProperty(iDelayMaximum);
}

CpProxyLinnCoUkLipSync1C::~CpProxyLinnCoUkLipSync1C()
{
    DestroyService();
    delete iActionSetDelay;
    delete iActionDelay;
    delete iActionDelayMinimum;
    delete iActionDelayMaximum;
}

void CpProxyLinnCoUkLipSync1C::SyncSetDelay(TUint aDelay)
{
    SyncSetDelayLinnCoUkLipSync1C sync(*this);
    BeginSetDelay(aDelay, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1C::BeginSetDelay(TUint aDelay, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetDelay, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDelay->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aDelay));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1C::EndSetDelay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDelay"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkLipSync1C::SyncDelay(TUint& aDelay)
{
    SyncDelayLinnCoUkLipSync1C sync(*this, aDelay);
    BeginDelay(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1C::BeginDelay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDelay, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelay->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1C::EndDelay(IAsync& aAsync, TUint& aDelay)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Delay"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDelay = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1C::SyncDelayMinimum(TUint& aMin)
{
    SyncDelayMinimumLinnCoUkLipSync1C sync(*this, aMin);
    BeginDelayMinimum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1C::BeginDelayMinimum(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDelayMinimum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMinimum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1C::EndDelayMinimum(IAsync& aAsync, TUint& aMin)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DelayMinimum"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aMin = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1C::SyncDelayMaximum(TUint& aMax)
{
    SyncDelayMaximumLinnCoUkLipSync1C sync(*this, aMax);
    BeginDelayMaximum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1C::BeginDelayMaximum(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDelayMaximum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMaximum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1C::EndDelayMaximum(IAsync& aAsync, TUint& aMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DelayMaximum"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1C::SetPropertyDelayChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDelayChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkLipSync1C::SetPropertyDelayMinimumChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDelayMinimumChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkLipSync1C::SetPropertyDelayMaximumChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDelayMaximumChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkLipSync1C::PropertyDelay(TUint& aDelay) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDelay = iDelay->Value();
}

void CpProxyLinnCoUkLipSync1C::PropertyDelayMinimum(TUint& aDelayMinimum) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDelayMinimum = iDelayMinimum->Value();
}

void CpProxyLinnCoUkLipSync1C::PropertyDelayMaximum(TUint& aDelayMaximum) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDelayMaximum = iDelayMaximum->Value();
}

void CpProxyLinnCoUkLipSync1C::DelayPropertyChanged()
{
    ReportEvent(iDelayChanged);
}

void CpProxyLinnCoUkLipSync1C::DelayMinimumPropertyChanged()
{
    ReportEvent(iDelayMinimumChanged);
}

void CpProxyLinnCoUkLipSync1C::DelayMaximumPropertyChanged()
{
    ReportEvent(iDelayMaximumChanged);
}


THandle STDCALL CpProxyLinnCoUkLipSync1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkLipSync1C(aDevice);
}

void STDCALL CpProxyLinnCoUkLipSync1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1SyncSetDelay(THandle aHandle, uint32_t aDelay)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetDelay(aDelay);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkLipSync1BeginSetDelay(THandle aHandle, uint32_t aDelay, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetDelay(aDelay, functor);
}

int32_t STDCALL CpProxyLinnCoUkLipSync1EndSetDelay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetDelay(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1SyncDelay(THandle aHandle, uint32_t* aDelay)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDelay(*aDelay);
    }
    catch (ProxyError& ) {
        err = -1;
        *aDelay = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkLipSync1BeginDelay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDelay(functor);
}

int32_t STDCALL CpProxyLinnCoUkLipSync1EndDelay(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aDelay)
{
    int32_t err = 0;
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDelay(*async, *aDelay);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1SyncDelayMinimum(THandle aHandle, uint32_t* aMin)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDelayMinimum(*aMin);
    }
    catch (ProxyError& ) {
        err = -1;
        *aMin = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkLipSync1BeginDelayMinimum(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDelayMinimum(functor);
}

int32_t STDCALL CpProxyLinnCoUkLipSync1EndDelayMinimum(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aMin)
{
    int32_t err = 0;
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDelayMinimum(*async, *aMin);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1SyncDelayMaximum(THandle aHandle, uint32_t* aMax)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncDelayMaximum(*aMax);
    }
    catch (ProxyError& ) {
        err = -1;
        *aMax = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkLipSync1BeginDelayMaximum(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDelayMaximum(functor);
}

int32_t STDCALL CpProxyLinnCoUkLipSync1EndDelayMaximum(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aMax)
{
    int32_t err = 0;
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndDelayMaximum(*async, *aMax);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkLipSync1SetPropertyDelayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDelayChanged(functor);
}

void STDCALL CpProxyLinnCoUkLipSync1SetPropertyDelayMinimumChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDelayMinimumChanged(functor);
}

void STDCALL CpProxyLinnCoUkLipSync1SetPropertyDelayMaximumChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDelayMaximumChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkLipSync1PropertyDelay(THandle aHandle, uint32_t* aDelay)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyDelay(*aDelay);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1PropertyDelayMinimum(THandle aHandle, uint32_t* aDelayMinimum)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyDelayMinimum(*aDelayMinimum);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkLipSync1PropertyDelayMaximum(THandle aHandle, uint32_t* aDelayMaximum)
{
    CpProxyLinnCoUkLipSync1C* proxyC = reinterpret_cast<CpProxyLinnCoUkLipSync1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyDelayMaximum(*aDelayMaximum);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

