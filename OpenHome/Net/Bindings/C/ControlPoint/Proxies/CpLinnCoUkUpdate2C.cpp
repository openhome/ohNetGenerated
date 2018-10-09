#include "CpLinnCoUkUpdate2.h"
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

class CpProxyLinnCoUkUpdate2C : public CpProxyC
{
public:
    CpProxyLinnCoUkUpdate2C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkUpdate2C();
    //CpProxyLinnCoUkUpdate2* Proxy() { return static_cast<CpProxyLinnCoUkUpdate2*>(iProxy); }

    void SyncPushManifest(const Brx& aUri);
    void BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor);
    void EndPushManifest(IAsync& aAsync);

    void SyncPushManifest2(const Brx& aUri, TUint& aId);
    void BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor);
    void EndPushManifest2(IAsync& aAsync, TUint& aId);

    void SyncGetSoftwareStatus(Brh& aSoftwareStatus);
    void BeginGetSoftwareStatus(FunctorAsync& aFunctor);
    void EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus);

    void SyncGetExecutorStatus(Brh& aExecutorStatus);
    void BeginGetExecutorStatus(FunctorAsync& aFunctor);
    void EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus);

    void SyncGetJobStatus(Brh& aJobStatus);
    void BeginGetJobStatus(FunctorAsync& aFunctor);
    void EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus);

    void SyncApply();
    void BeginApply(FunctorAsync& aFunctor);
    void EndApply(IAsync& aAsync);

    void SyncApply2(TUint& aId);
    void BeginApply2(FunctorAsync& aFunctor);
    void EndApply2(IAsync& aAsync, TUint& aId);

    void SyncRecover();
    void BeginRecover(FunctorAsync& aFunctor);
    void EndRecover(IAsync& aAsync);

    void SyncRecover2(TUint& aId);
    void BeginRecover2(FunctorAsync& aFunctor);
    void EndRecover2(IAsync& aAsync, TUint& aId);

    void SyncCheckNow();
    void BeginCheckNow(FunctorAsync& aFunctor);
    void EndCheckNow(IAsync& aAsync);

    void SetPropertySoftwareStatusChanged(Functor& aFunctor);
    void SetPropertyExecutorStatusChanged(Functor& aFunctor);
    void SetPropertyJobStatusChanged(Functor& aFunctor);

    void PropertySoftwareStatus(Brhz& aSoftwareStatus) const;
    void PropertyExecutorStatus(Brhz& aExecutorStatus) const;
    void PropertyJobStatus(Brhz& aJobStatus) const;
private:
    void SoftwareStatusPropertyChanged();
    void ExecutorStatusPropertyChanged();
    void JobStatusPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPushManifest;
    Action* iActionPushManifest2;
    Action* iActionGetSoftwareStatus;
    Action* iActionGetExecutorStatus;
    Action* iActionGetJobStatus;
    Action* iActionApply;
    Action* iActionApply2;
    Action* iActionRecover;
    Action* iActionRecover2;
    Action* iActionCheckNow;
    PropertyString* iSoftwareStatus;
    PropertyString* iExecutorStatus;
    PropertyString* iJobStatus;
    Functor iSoftwareStatusChanged;
    Functor iExecutorStatusChanged;
    Functor iJobStatusChanged;
};


class SyncPushManifestLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
};

SyncPushManifestLinnCoUkUpdate2C::SyncPushManifestLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncPushManifest2LinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifest2LinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    TUint& iId;
};

SyncPushManifest2LinnCoUkUpdate2C::SyncPushManifest2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}


class SyncGetSoftwareStatusLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    Brh& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate2C::SyncGetSoftwareStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    Brh& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate2C::SyncGetExecutorStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncGetJobStatusLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    Brh& iJobStatus;
};

SyncGetJobStatusLinnCoUkUpdate2C::SyncGetJobStatusLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}


class SyncApplyLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
};

SyncApplyLinnCoUkUpdate2C::SyncApplyLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncApply2LinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApply2LinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    TUint& iId;
};

SyncApply2LinnCoUkUpdate2C::SyncApply2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}


class SyncRecoverLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
};

SyncRecoverLinnCoUkUpdate2C::SyncRecoverLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}


class SyncRecover2LinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecover2LinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
    TUint& iId;
};

SyncRecover2LinnCoUkUpdate2C::SyncRecover2LinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}


class SyncCheckNowLinnCoUkUpdate2C : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckNowLinnCoUkUpdate2C() {};
private:
    CpProxyLinnCoUkUpdate2C& iService;
};

SyncCheckNowLinnCoUkUpdate2C::SyncCheckNowLinnCoUkUpdate2C(CpProxyLinnCoUkUpdate2C& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}

CpProxyLinnCoUkUpdate2C::CpProxyLinnCoUkUpdate2C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Update", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionPushManifest = new Action("PushManifest");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPushManifest->AddInputParameter(param);

    iActionPushManifest2 = new Action("PushManifest2");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPushManifest2->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("Id");
    iActionPushManifest2->AddOutputParameter(param);

    iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
    param = new OpenHome::Net::ParameterString("SoftwareStatus");
    iActionGetSoftwareStatus->AddOutputParameter(param);

    iActionGetExecutorStatus = new Action("GetExecutorStatus");
    param = new OpenHome::Net::ParameterString("ExecutorStatus");
    iActionGetExecutorStatus->AddOutputParameter(param);

    iActionGetJobStatus = new Action("GetJobStatus");
    param = new OpenHome::Net::ParameterString("JobStatus");
    iActionGetJobStatus->AddOutputParameter(param);

    iActionApply = new Action("Apply");

    iActionApply2 = new Action("Apply2");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionApply2->AddOutputParameter(param);

    iActionRecover = new Action("Recover");

    iActionRecover2 = new Action("Recover2");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionRecover2->AddOutputParameter(param);

    iActionCheckNow = new Action("CheckNow");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2C::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2C::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2C::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
}

CpProxyLinnCoUkUpdate2C::~CpProxyLinnCoUkUpdate2C()
{
    DestroyService();
    delete iActionPushManifest;
    delete iActionPushManifest2;
    delete iActionGetSoftwareStatus;
    delete iActionGetExecutorStatus;
    delete iActionGetJobStatus;
    delete iActionApply;
    delete iActionApply2;
    delete iActionRecover;
    delete iActionRecover2;
    delete iActionCheckNow;
}

void CpProxyLinnCoUkUpdate2C::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate2C sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndPushManifest(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PushManifest"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate2C::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate2C sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPushManifest2, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest2->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPushManifest2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndPushManifest2(IAsync& aAsync, TUint& aId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PushManifest2"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkUpdate2C::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate2C sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSoftwareStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSoftwareStatus);
}

void CpProxyLinnCoUkUpdate2C::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate2C sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetExecutorStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aExecutorStatus);
}

void CpProxyLinnCoUkUpdate2C::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate2C sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aJobStatus);
}

void CpProxyLinnCoUkUpdate2C::SyncApply()
{
    SyncApplyLinnCoUkUpdate2C sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndApply(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Apply"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate2C::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate2C sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndApply2(IAsync& aAsync, TUint& aId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Apply2"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkUpdate2C::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate2C sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndRecover(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Recover"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate2C::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate2C sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndRecover2(IAsync& aAsync, TUint& aId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Recover2"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkUpdate2C::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate2C sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2C::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCheckNow, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2C::EndCheckNow(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CheckNow"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate2C::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSoftwareStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate2C::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iExecutorStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate2C::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iJobStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate2C::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate2C::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate2C::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate2C::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate2C::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate2C::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}


THandle STDCALL CpProxyLinnCoUkUpdate2Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkUpdate2C(aDevice);
}

void STDCALL CpProxyLinnCoUkUpdate2Destroy(THandle aHandle)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncPushManifest(THandle aHandle, const char* aUri)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    int32_t err = 0;
    try {
        proxyC->SyncPushManifest(buf_aUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginPushManifest(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndPushManifest(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPushManifest(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncPushManifest2(THandle aHandle, const char* aUri, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    int32_t err = 0;
    try {
        proxyC->SyncPushManifest2(buf_aUri, *aId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aId = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginPushManifest2(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest2(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndPushManifest2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPushManifest2(*async, *aId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncGetSoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSoftwareStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetSoftwareStatus(buf_aSoftwareStatus);
        *aSoftwareStatus = buf_aSoftwareStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSoftwareStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginGetSoftwareStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSoftwareStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndGetSoftwareStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aSoftwareStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSoftwareStatus;
    *aSoftwareStatus = NULL;
    try {
        proxyC->EndGetSoftwareStatus(*async, buf_aSoftwareStatus);
        *aSoftwareStatus = buf_aSoftwareStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncGetExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aExecutorStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetExecutorStatus(buf_aExecutorStatus);
        *aExecutorStatus = buf_aExecutorStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aExecutorStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginGetExecutorStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetExecutorStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndGetExecutorStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aExecutorStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aExecutorStatus;
    *aExecutorStatus = NULL;
    try {
        proxyC->EndGetExecutorStatus(*async, buf_aExecutorStatus);
        *aExecutorStatus = buf_aExecutorStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncGetJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aJobStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetJobStatus(buf_aJobStatus);
        *aJobStatus = buf_aJobStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aJobStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginGetJobStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndGetJobStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aJobStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aJobStatus;
    *aJobStatus = NULL;
    try {
        proxyC->EndGetJobStatus(*async, buf_aJobStatus);
        *aJobStatus = buf_aJobStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncApply(THandle aHandle)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncApply();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginApply(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndApply(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndApply(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncApply2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncApply2(*aId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aId = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginApply2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndApply2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndApply2(*async, *aId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncRecover(THandle aHandle)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRecover();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginRecover(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndRecover(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRecover(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncRecover2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRecover2(*aId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aId = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginRecover2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndRecover2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRecover2(*async, *aId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2SyncCheckNow(THandle aHandle)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncCheckNow();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2BeginCheckNow(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCheckNow(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2EndCheckNow(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndCheckNow(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate2SetPropertySoftwareStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySoftwareStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate2SetPropertyExecutorStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyExecutorStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate2SetPropertyJobStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyJobStatusChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate2PropertySoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSoftwareStatus;
    try {
        proxyC->PropertySoftwareStatus(buf_aSoftwareStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSoftwareStatus = buf_aSoftwareStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2PropertyExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aExecutorStatus;
    try {
        proxyC->PropertyExecutorStatus(buf_aExecutorStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aExecutorStatus = buf_aExecutorStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkUpdate2PropertyJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate2C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aJobStatus;
    try {
        proxyC->PropertyJobStatus(buf_aJobStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aJobStatus = buf_aJobStatus.Transfer();
    return 0;
}

