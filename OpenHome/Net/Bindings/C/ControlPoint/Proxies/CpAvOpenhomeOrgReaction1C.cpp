#include "CpAvOpenhomeOrgReaction1.h"
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

class CpProxyAvOpenhomeOrgReaction1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgReaction1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgReaction1C();
    //CpProxyAvOpenhomeOrgReaction1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgReaction1*>(iProxy); }

    void SyncGetCanReact(TBool& aCanReact);
    void BeginGetCanReact(FunctorAsync& aFunctor);
    void EndGetCanReact(IAsync& aAsync, TBool& aCanReact);

    void SyncGetCurrentReaction(Brh& aReaction);
    void BeginGetCurrentReaction(FunctorAsync& aFunctor);
    void EndGetCurrentReaction(IAsync& aAsync, Brh& aReaction);

    void SyncGetAvailableReactions(Brh& aAvailableReactions);
    void BeginGetAvailableReactions(FunctorAsync& aFunctor);
    void EndGetAvailableReactions(IAsync& aAsync, Brh& aAvailableReactions);

    void SyncSetReaction(const Brx& aReaction);
    void BeginSetReaction(const Brx& aReaction, FunctorAsync& aFunctor);
    void EndSetReaction(IAsync& aAsync);

    void SyncClearReaction();
    void BeginClearReaction(FunctorAsync& aFunctor);
    void EndClearReaction(IAsync& aAsync);

    void SetPropertyCanReactChanged(Functor& aFunctor);
    void SetPropertyCurrentReactionChanged(Functor& aFunctor);
    void SetPropertyAvailableReactionsChanged(Functor& aFunctor);

    void PropertyCanReact(TBool& aCanReact) const;
    void PropertyCurrentReaction(Brhz& aCurrentReaction) const;
    void PropertyAvailableReactions(Brhz& aAvailableReactions) const;
private:
    void CanReactPropertyChanged();
    void CurrentReactionPropertyChanged();
    void AvailableReactionsPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetCanReact;
    Action* iActionGetCurrentReaction;
    Action* iActionGetAvailableReactions;
    Action* iActionSetReaction;
    Action* iActionClearReaction;
    PropertyBool* iCanReact;
    PropertyString* iCurrentReaction;
    PropertyString* iAvailableReactions;
    Functor iCanReactChanged;
    Functor iCurrentReactionChanged;
    Functor iAvailableReactionsChanged;
};


class SyncGetCanReactAvOpenhomeOrgReaction1C : public SyncProxyAction
{
public:
    SyncGetCanReactAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, TBool& aCanReact);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCanReactAvOpenhomeOrgReaction1C() {};
private:
    CpProxyAvOpenhomeOrgReaction1C& iService;
    TBool& iCanReact;
};

SyncGetCanReactAvOpenhomeOrgReaction1C::SyncGetCanReactAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, TBool& aCanReact)
    : iService(aProxy)
    , iCanReact(aCanReact)
{
}

void SyncGetCanReactAvOpenhomeOrgReaction1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCanReact(aAsync, iCanReact);
}


class SyncGetCurrentReactionAvOpenhomeOrgReaction1C : public SyncProxyAction
{
public:
    SyncGetCurrentReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, Brh& aReaction);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCurrentReactionAvOpenhomeOrgReaction1C() {};
private:
    CpProxyAvOpenhomeOrgReaction1C& iService;
    Brh& iReaction;
};

SyncGetCurrentReactionAvOpenhomeOrgReaction1C::SyncGetCurrentReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, Brh& aReaction)
    : iService(aProxy)
    , iReaction(aReaction)
{
}

void SyncGetCurrentReactionAvOpenhomeOrgReaction1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCurrentReaction(aAsync, iReaction);
}


class SyncGetAvailableReactionsAvOpenhomeOrgReaction1C : public SyncProxyAction
{
public:
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, Brh& aAvailableReactions);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAvailableReactionsAvOpenhomeOrgReaction1C() {};
private:
    CpProxyAvOpenhomeOrgReaction1C& iService;
    Brh& iAvailableReactions;
};

SyncGetAvailableReactionsAvOpenhomeOrgReaction1C::SyncGetAvailableReactionsAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy, Brh& aAvailableReactions)
    : iService(aProxy)
    , iAvailableReactions(aAvailableReactions)
{
}

void SyncGetAvailableReactionsAvOpenhomeOrgReaction1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAvailableReactions(aAsync, iAvailableReactions);
}


class SyncSetReactionAvOpenhomeOrgReaction1C : public SyncProxyAction
{
public:
    SyncSetReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetReactionAvOpenhomeOrgReaction1C() {};
private:
    CpProxyAvOpenhomeOrgReaction1C& iService;
};

SyncSetReactionAvOpenhomeOrgReaction1C::SyncSetReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetReactionAvOpenhomeOrgReaction1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetReaction(aAsync);
}


class SyncClearReactionAvOpenhomeOrgReaction1C : public SyncProxyAction
{
public:
    SyncClearReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearReactionAvOpenhomeOrgReaction1C() {};
private:
    CpProxyAvOpenhomeOrgReaction1C& iService;
};

SyncClearReactionAvOpenhomeOrgReaction1C::SyncClearReactionAvOpenhomeOrgReaction1C(CpProxyAvOpenhomeOrgReaction1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearReactionAvOpenhomeOrgReaction1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearReaction(aAsync);
}

CpProxyAvOpenhomeOrgReaction1C::CpProxyAvOpenhomeOrgReaction1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Reaction", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetCanReact = new Action("GetCanReact");
    param = new OpenHome::Net::ParameterBool("CanReact");
    iActionGetCanReact->AddOutputParameter(param);

    iActionGetCurrentReaction = new Action("GetCurrentReaction");
    param = new OpenHome::Net::ParameterString("Reaction");
    iActionGetCurrentReaction->AddOutputParameter(param);

    iActionGetAvailableReactions = new Action("GetAvailableReactions");
    param = new OpenHome::Net::ParameterString("AvailableReactions");
    iActionGetAvailableReactions->AddOutputParameter(param);

    iActionSetReaction = new Action("SetReaction");
    param = new OpenHome::Net::ParameterString("Reaction");
    iActionSetReaction->AddInputParameter(param);

    iActionClearReaction = new Action("ClearReaction");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1C::CanReactPropertyChanged);
    iCanReact = new PropertyBool("CanReact", functor);
    AddProperty(iCanReact);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1C::CurrentReactionPropertyChanged);
    iCurrentReaction = new PropertyString("CurrentReaction", functor);
    AddProperty(iCurrentReaction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1C::AvailableReactionsPropertyChanged);
    iAvailableReactions = new PropertyString("AvailableReactions", functor);
    AddProperty(iAvailableReactions);
}

CpProxyAvOpenhomeOrgReaction1C::~CpProxyAvOpenhomeOrgReaction1C()
{
    DestroyService();
    delete iActionGetCanReact;
    delete iActionGetCurrentReaction;
    delete iActionGetAvailableReactions;
    delete iActionSetReaction;
    delete iActionClearReaction;
}

void CpProxyAvOpenhomeOrgReaction1C::SyncGetCanReact(TBool& aCanReact)
{
    SyncGetCanReactAvOpenhomeOrgReaction1C sync(*this, aCanReact);
    BeginGetCanReact(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1C::BeginGetCanReact(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetCanReact, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCanReact->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1C::EndGetCanReact(IAsync& aAsync, TBool& aCanReact)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCanReact"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aCanReact = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgReaction1C::SyncGetCurrentReaction(Brh& aReaction)
{
    SyncGetCurrentReactionAvOpenhomeOrgReaction1C sync(*this, aReaction);
    BeginGetCurrentReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1C::BeginGetCurrentReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetCurrentReaction, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCurrentReaction->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1C::EndGetCurrentReaction(IAsync& aAsync, Brh& aReaction)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCurrentReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aReaction);
}

void CpProxyAvOpenhomeOrgReaction1C::SyncGetAvailableReactions(Brh& aAvailableReactions)
{
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1C sync(*this, aAvailableReactions);
    BeginGetAvailableReactions(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1C::BeginGetAvailableReactions(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAvailableReactions, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAvailableReactions->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1C::EndGetAvailableReactions(IAsync& aAsync, Brh& aAvailableReactions)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAvailableReactions"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aAvailableReactions);
}

void CpProxyAvOpenhomeOrgReaction1C::SyncSetReaction(const Brx& aReaction)
{
    SyncSetReactionAvOpenhomeOrgReaction1C sync(*this);
    BeginSetReaction(aReaction, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1C::BeginSetReaction(const Brx& aReaction, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetReaction, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetReaction->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aReaction));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1C::EndSetReaction(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgReaction1C::SyncClearReaction()
{
    SyncClearReactionAvOpenhomeOrgReaction1C sync(*this);
    BeginClearReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1C::BeginClearReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearReaction, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1C::EndClearReaction(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgReaction1C::SetPropertyCanReactChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCanReactChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgReaction1C::SetPropertyCurrentReactionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCurrentReactionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgReaction1C::SetPropertyAvailableReactionsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAvailableReactionsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgReaction1C::PropertyCanReact(TBool& aCanReact) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCanReact = iCanReact->Value();
}

void CpProxyAvOpenhomeOrgReaction1C::PropertyCurrentReaction(Brhz& aCurrentReaction) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCurrentReaction.Set(iCurrentReaction->Value());
}

void CpProxyAvOpenhomeOrgReaction1C::PropertyAvailableReactions(Brhz& aAvailableReactions) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAvailableReactions.Set(iAvailableReactions->Value());
}

void CpProxyAvOpenhomeOrgReaction1C::CanReactPropertyChanged()
{
    ReportEvent(iCanReactChanged);
}

void CpProxyAvOpenhomeOrgReaction1C::CurrentReactionPropertyChanged()
{
    ReportEvent(iCurrentReactionChanged);
}

void CpProxyAvOpenhomeOrgReaction1C::AvailableReactionsPropertyChanged()
{
    ReportEvent(iAvailableReactionsChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgReaction1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgReaction1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgReaction1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1SyncGetCanReact(THandle aHandle, uint32_t* aCanReact)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool CanReact;
    int32_t err = 0;
    try {
        proxyC->SyncGetCanReact(CanReact);
        *aCanReact = CanReact? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aCanReact = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1BeginGetCanReact(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetCanReact(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1EndGetCanReact(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aCanReact)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool CanReact;
    try {
        proxyC->EndGetCanReact(*async, CanReact);
        *aCanReact = CanReact? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1SyncGetCurrentReaction(THandle aHandle, char** aReaction)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aReaction;
    int32_t err = 0;
    try {
        proxyC->SyncGetCurrentReaction(buf_aReaction);
        *aReaction = buf_aReaction.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aReaction = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1BeginGetCurrentReaction(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetCurrentReaction(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1EndGetCurrentReaction(THandle aHandle, OhNetHandleAsync aAsync, char** aReaction)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aReaction;
    *aReaction = NULL;
    try {
        proxyC->EndGetCurrentReaction(*async, buf_aReaction);
        *aReaction = buf_aReaction.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1SyncGetAvailableReactions(THandle aHandle, char** aAvailableReactions)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAvailableReactions;
    int32_t err = 0;
    try {
        proxyC->SyncGetAvailableReactions(buf_aAvailableReactions);
        *aAvailableReactions = buf_aAvailableReactions.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aAvailableReactions = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1BeginGetAvailableReactions(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAvailableReactions(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1EndGetAvailableReactions(THandle aHandle, OhNetHandleAsync aAsync, char** aAvailableReactions)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aAvailableReactions;
    *aAvailableReactions = NULL;
    try {
        proxyC->EndGetAvailableReactions(*async, buf_aAvailableReactions);
        *aAvailableReactions = buf_aAvailableReactions.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1SyncSetReaction(THandle aHandle, const char* aReaction)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aReaction(aReaction);
    int32_t err = 0;
    try {
        proxyC->SyncSetReaction(buf_aReaction);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1BeginSetReaction(THandle aHandle, const char* aReaction, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aReaction(aReaction);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetReaction(buf_aReaction, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1EndSetReaction(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetReaction(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1SyncClearReaction(THandle aHandle)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncClearReaction();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1BeginClearReaction(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearReaction(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1EndClearReaction(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearReaction(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgReaction1SetPropertyCanReactChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCanReactChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgReaction1SetPropertyCurrentReactionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCurrentReactionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgReaction1SetPropertyAvailableReactionsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAvailableReactionsChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1PropertyCanReact(THandle aHandle, uint32_t* aCanReact)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool CanReact;
    try {
        proxyC->PropertyCanReact(CanReact);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aCanReact = CanReact? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1PropertyCurrentReaction(THandle aHandle, char** aCurrentReaction)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aCurrentReaction;
    try {
        proxyC->PropertyCurrentReaction(buf_aCurrentReaction);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aCurrentReaction = buf_aCurrentReaction.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgReaction1PropertyAvailableReactions(THandle aHandle, char** aAvailableReactions)
{
    CpProxyAvOpenhomeOrgReaction1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgReaction1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAvailableReactions;
    try {
        proxyC->PropertyAvailableReactions(buf_aAvailableReactions);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAvailableReactions = buf_aAvailableReactions.Transfer();
    return 0;
}

