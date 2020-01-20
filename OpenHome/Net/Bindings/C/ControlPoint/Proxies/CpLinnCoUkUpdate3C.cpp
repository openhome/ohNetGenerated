#include "CpLinnCoUkUpdate3.h"
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

class CpProxyLinnCoUkUpdate3C : public CpProxyC
{
public:
    CpProxyLinnCoUkUpdate3C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkUpdate3C();
    //CpProxyLinnCoUkUpdate3* Proxy() { return static_cast<CpProxyLinnCoUkUpdate3*>(iProxy); }

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

    void SyncGetRecoverSupported(TBool& aRecoverSupported);
    void BeginGetRecoverSupported(FunctorAsync& aFunctor);
    void EndGetRecoverSupported(IAsync& aAsync, TBool& aRecoverSupported);

    void SetPropertySoftwareStatusChanged(Functor& aFunctor);
    void SetPropertyExecutorStatusChanged(Functor& aFunctor);
    void SetPropertyJobStatusChanged(Functor& aFunctor);
    void SetPropertyRecoverSupportedChanged(Functor& aFunctor);

    void PropertySoftwareStatus(Brhz& aSoftwareStatus) const;
    void PropertyExecutorStatus(Brhz& aExecutorStatus) const;
    void PropertyJobStatus(Brhz& aJobStatus) const;
    void PropertyRecoverSupported(TBool& aRecoverSupported) const;
private:
    void SoftwareStatusPropertyChanged();
    void ExecutorStatusPropertyChanged();
    void JobStatusPropertyChanged();
    void RecoverSupportedPropertyChanged();
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
    Action* iActionGetRecoverSupported;
    PropertyString* iSoftwareStatus;
    PropertyString* iExecutorStatus;
    PropertyString* iJobStatus;
    PropertyBool* iRecoverSupported;
    Functor iSoftwareStatusChanged;
    Functor iExecutorStatusChanged;
    Functor iJobStatusChanged;
    Functor iRecoverSupportedChanged;
};


class SyncPushManifestLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
};

SyncPushManifestLinnCoUkUpdate3C::SyncPushManifestLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncPushManifest2LinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifest2LinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    TUint& iId;
};

SyncPushManifest2LinnCoUkUpdate3C::SyncPushManifest2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}


class SyncGetSoftwareStatusLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    Brh& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate3C::SyncGetSoftwareStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    Brh& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate3C::SyncGetExecutorStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncGetJobStatusLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    Brh& iJobStatus;
};

SyncGetJobStatusLinnCoUkUpdate3C::SyncGetJobStatusLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}


class SyncApplyLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
};

SyncApplyLinnCoUkUpdate3C::SyncApplyLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncApply2LinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApply2LinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    TUint& iId;
};

SyncApply2LinnCoUkUpdate3C::SyncApply2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}


class SyncRecoverLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
};

SyncRecoverLinnCoUkUpdate3C::SyncRecoverLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}


class SyncRecover2LinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecover2LinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    TUint& iId;
};

SyncRecover2LinnCoUkUpdate3C::SyncRecover2LinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}


class SyncCheckNowLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckNowLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
};

SyncCheckNowLinnCoUkUpdate3C::SyncCheckNowLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


class SyncGetRecoverSupportedLinnCoUkUpdate3C : public SyncProxyAction
{
public:
    SyncGetRecoverSupportedLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TBool& aRecoverSupported);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRecoverSupportedLinnCoUkUpdate3C() {};
private:
    CpProxyLinnCoUkUpdate3C& iService;
    TBool& iRecoverSupported;
};

SyncGetRecoverSupportedLinnCoUkUpdate3C::SyncGetRecoverSupportedLinnCoUkUpdate3C(CpProxyLinnCoUkUpdate3C& aProxy, TBool& aRecoverSupported)
    : iService(aProxy)
    , iRecoverSupported(aRecoverSupported)
{
}

void SyncGetRecoverSupportedLinnCoUkUpdate3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecoverSupported(aAsync, iRecoverSupported);
}

CpProxyLinnCoUkUpdate3C::CpProxyLinnCoUkUpdate3C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Update", 3, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionGetRecoverSupported = new Action("GetRecoverSupported");
    param = new OpenHome::Net::ParameterBool("RecoverSupported");
    iActionGetRecoverSupported->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3C::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3C::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3C::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3C::RecoverSupportedPropertyChanged);
    iRecoverSupported = new PropertyBool("RecoverSupported", functor);
    AddProperty(iRecoverSupported);
}

CpProxyLinnCoUkUpdate3C::~CpProxyLinnCoUkUpdate3C()
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
    delete iActionGetRecoverSupported;
}

void CpProxyLinnCoUkUpdate3C::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate3C sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3C::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate3C sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate3C::EndPushManifest2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3C::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate3C sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate3C::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate3C sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate3C::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate3C sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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

void CpProxyLinnCoUkUpdate3C::SyncApply()
{
    SyncApplyLinnCoUkUpdate3C sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3C::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate3C sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndApply2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3C::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate3C sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3C::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate3C sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndRecover2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3C::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate3C sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCheckNow, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3C::SyncGetRecoverSupported(TBool& aRecoverSupported)
{
    SyncGetRecoverSupportedLinnCoUkUpdate3C sync(*this, aRecoverSupported);
    BeginGetRecoverSupported(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3C::BeginGetRecoverSupported(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetRecoverSupported, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecoverSupported->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3C::EndGetRecoverSupported(IAsync& aAsync, TBool& aRecoverSupported)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRecoverSupported"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aRecoverSupported = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkUpdate3C::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSoftwareStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate3C::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iExecutorStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate3C::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iJobStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate3C::SetPropertyRecoverSupportedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRecoverSupportedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate3C::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate3C::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate3C::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate3C::PropertyRecoverSupported(TBool& aRecoverSupported) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRecoverSupported = iRecoverSupported->Value();
}

void CpProxyLinnCoUkUpdate3C::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate3C::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate3C::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate3C::RecoverSupportedPropertyChanged()
{
    ReportEvent(iRecoverSupportedChanged);
}


THandle STDCALL CpProxyLinnCoUkUpdate3Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkUpdate3C(aDevice);
}

void STDCALL CpProxyLinnCoUkUpdate3Destroy(THandle aHandle)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncPushManifest(THandle aHandle, const char* aUri)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginPushManifest(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndPushManifest(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncPushManifest2(THandle aHandle, const char* aUri, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginPushManifest2(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest2(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndPushManifest2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncGetSoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginGetSoftwareStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSoftwareStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndGetSoftwareStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aSoftwareStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncGetExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginGetExecutorStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetExecutorStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndGetExecutorStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aExecutorStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncGetJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginGetJobStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndGetJobStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aJobStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncApply(THandle aHandle)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginApply(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndApply(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncApply2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginApply2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndApply2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncRecover(THandle aHandle)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginRecover(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndRecover(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncRecover2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginRecover2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndRecover2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncCheckNow(THandle aHandle)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate3BeginCheckNow(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCheckNow(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndCheckNow(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3SyncGetRecoverSupported(THandle aHandle, uint32_t* aRecoverSupported)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool RecoverSupported;
    int32_t err = 0;
    try {
        proxyC->SyncGetRecoverSupported(RecoverSupported);
        *aRecoverSupported = RecoverSupported? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aRecoverSupported = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate3BeginGetRecoverSupported(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetRecoverSupported(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3EndGetRecoverSupported(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aRecoverSupported)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool RecoverSupported;
    try {
        proxyC->EndGetRecoverSupported(*async, RecoverSupported);
        *aRecoverSupported = RecoverSupported? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate3SetPropertySoftwareStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySoftwareStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate3SetPropertyExecutorStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyExecutorStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate3SetPropertyJobStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyJobStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate3SetPropertyRecoverSupportedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRecoverSupportedChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate3PropertySoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3PropertyExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3PropertyJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate3PropertyRecoverSupported(THandle aHandle, uint32_t* aRecoverSupported)
{
    CpProxyLinnCoUkUpdate3C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool RecoverSupported;
    try {
        proxyC->PropertyRecoverSupported(RecoverSupported);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aRecoverSupported = RecoverSupported? 1 : 0;
    return 0;
}

