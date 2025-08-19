#include "CpLinnCoUkUpdate4.h"
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

class CpProxyLinnCoUkUpdate4C : public CpProxyC
{
public:
    CpProxyLinnCoUkUpdate4C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkUpdate4C();
    //CpProxyLinnCoUkUpdate4* Proxy() { return static_cast<CpProxyLinnCoUkUpdate4*>(iProxy); }

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

    void SyncRecoverKeepStore();
    void BeginRecoverKeepStore(FunctorAsync& aFunctor);
    void EndRecoverKeepStore(IAsync& aAsync);

    void SyncRecoverKeepStore2(TUint& aId);
    void BeginRecoverKeepStore2(FunctorAsync& aFunctor);
    void EndRecoverKeepStore2(IAsync& aAsync, TUint& aId);

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
    Action* iActionRecoverKeepStore;
    Action* iActionRecoverKeepStore2;
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


class SyncPushManifestLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
};

SyncPushManifestLinnCoUkUpdate4C::SyncPushManifestLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncPushManifest2LinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifest2LinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    TUint& iId;
};

SyncPushManifest2LinnCoUkUpdate4C::SyncPushManifest2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}


class SyncGetSoftwareStatusLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    Brh& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate4C::SyncGetSoftwareStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    Brh& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate4C::SyncGetExecutorStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncGetJobStatusLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    Brh& iJobStatus;
};

SyncGetJobStatusLinnCoUkUpdate4C::SyncGetJobStatusLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}


class SyncApplyLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
};

SyncApplyLinnCoUkUpdate4C::SyncApplyLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncApply2LinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApply2LinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    TUint& iId;
};

SyncApply2LinnCoUkUpdate4C::SyncApply2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}


class SyncRecoverLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
};

SyncRecoverLinnCoUkUpdate4C::SyncRecoverLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}


class SyncRecover2LinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecover2LinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    TUint& iId;
};

SyncRecover2LinnCoUkUpdate4C::SyncRecover2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}


class SyncRecoverKeepStoreLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncRecoverKeepStoreLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverKeepStoreLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
};

SyncRecoverKeepStoreLinnCoUkUpdate4C::SyncRecoverKeepStoreLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverKeepStoreLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore(aAsync);
}


class SyncRecoverKeepStore2LinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncRecoverKeepStore2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverKeepStore2LinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    TUint& iId;
};

SyncRecoverKeepStore2LinnCoUkUpdate4C::SyncRecoverKeepStore2LinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecoverKeepStore2LinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore2(aAsync, iId);
}


class SyncCheckNowLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckNowLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
};

SyncCheckNowLinnCoUkUpdate4C::SyncCheckNowLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


class SyncGetRecoverSupportedLinnCoUkUpdate4C : public SyncProxyAction
{
public:
    SyncGetRecoverSupportedLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TBool& aRecoverSupported);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRecoverSupportedLinnCoUkUpdate4C() {};
private:
    CpProxyLinnCoUkUpdate4C& iService;
    TBool& iRecoverSupported;
};

SyncGetRecoverSupportedLinnCoUkUpdate4C::SyncGetRecoverSupportedLinnCoUkUpdate4C(CpProxyLinnCoUkUpdate4C& aProxy, TBool& aRecoverSupported)
    : iService(aProxy)
    , iRecoverSupported(aRecoverSupported)
{
}

void SyncGetRecoverSupportedLinnCoUkUpdate4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecoverSupported(aAsync, iRecoverSupported);
}

CpProxyLinnCoUkUpdate4C::CpProxyLinnCoUkUpdate4C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Update", 4, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionRecoverKeepStore = new Action("RecoverKeepStore");

    iActionRecoverKeepStore2 = new Action("RecoverKeepStore2");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionRecoverKeepStore2->AddOutputParameter(param);

    iActionCheckNow = new Action("CheckNow");

    iActionGetRecoverSupported = new Action("GetRecoverSupported");
    param = new OpenHome::Net::ParameterBool("RecoverSupported");
    iActionGetRecoverSupported->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4C::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4C::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4C::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4C::RecoverSupportedPropertyChanged);
    iRecoverSupported = new PropertyBool("RecoverSupported", functor);
    AddProperty(iRecoverSupported);
}

CpProxyLinnCoUkUpdate4C::~CpProxyLinnCoUkUpdate4C()
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
    delete iActionRecoverKeepStore;
    delete iActionRecoverKeepStore2;
    delete iActionCheckNow;
    delete iActionGetRecoverSupported;
}

void CpProxyLinnCoUkUpdate4C::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate4C sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4C::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate4C sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate4C::EndPushManifest2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4C::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate4C sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate4C::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate4C sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate4C::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate4C sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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

void CpProxyLinnCoUkUpdate4C::SyncApply()
{
    SyncApplyLinnCoUkUpdate4C sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4C::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate4C sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndApply2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4C::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate4C sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4C::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate4C sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndRecover2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4C::SyncRecoverKeepStore()
{
    SyncRecoverKeepStoreLinnCoUkUpdate4C sync(*this);
    BeginRecoverKeepStore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginRecoverKeepStore(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecoverKeepStore, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndRecoverKeepStore(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RecoverKeepStore"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate4C::SyncRecoverKeepStore2(TUint& aId)
{
    SyncRecoverKeepStore2LinnCoUkUpdate4C sync(*this, aId);
    BeginRecoverKeepStore2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginRecoverKeepStore2(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRecoverKeepStore2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecoverKeepStore2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndRecoverKeepStore2(IAsync& aAsync, TUint& aId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RecoverKeepStore2"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkUpdate4C::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate4C sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCheckNow, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4C::SyncGetRecoverSupported(TBool& aRecoverSupported)
{
    SyncGetRecoverSupportedLinnCoUkUpdate4C sync(*this, aRecoverSupported);
    BeginGetRecoverSupported(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4C::BeginGetRecoverSupported(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetRecoverSupported, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecoverSupported->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4C::EndGetRecoverSupported(IAsync& aAsync, TBool& aRecoverSupported)
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

void CpProxyLinnCoUkUpdate4C::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSoftwareStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate4C::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iExecutorStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate4C::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iJobStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate4C::SetPropertyRecoverSupportedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRecoverSupportedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate4C::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate4C::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate4C::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate4C::PropertyRecoverSupported(TBool& aRecoverSupported) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRecoverSupported = iRecoverSupported->Value();
}

void CpProxyLinnCoUkUpdate4C::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate4C::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate4C::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate4C::RecoverSupportedPropertyChanged()
{
    ReportEvent(iRecoverSupportedChanged);
}


THandle STDCALL CpProxyLinnCoUkUpdate4Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkUpdate4C(aDevice);
}

void STDCALL CpProxyLinnCoUkUpdate4Destroy(THandle aHandle)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncPushManifest(THandle aHandle, const char* aUri)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginPushManifest(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndPushManifest(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncPushManifest2(THandle aHandle, const char* aUri, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginPushManifest2(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest2(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndPushManifest2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncGetSoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginGetSoftwareStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSoftwareStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndGetSoftwareStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aSoftwareStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncGetExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginGetExecutorStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetExecutorStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndGetExecutorStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aExecutorStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncGetJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginGetJobStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetJobStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndGetJobStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aJobStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncApply(THandle aHandle)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginApply(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndApply(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncApply2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginApply2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndApply2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncRecover(THandle aHandle)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginRecover(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndRecover(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncRecover2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginRecover2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecover2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndRecover2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncRecoverKeepStore(THandle aHandle)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRecoverKeepStore();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate4BeginRecoverKeepStore(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecoverKeepStore(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndRecoverKeepStore(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRecoverKeepStore(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncRecoverKeepStore2(THandle aHandle, uint32_t* aId)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRecoverKeepStore2(*aId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aId = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate4BeginRecoverKeepStore2(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRecoverKeepStore2(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndRecoverKeepStore2(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aId)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRecoverKeepStore2(*async, *aId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncCheckNow(THandle aHandle)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginCheckNow(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCheckNow(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndCheckNow(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4SyncGetRecoverSupported(THandle aHandle, uint32_t* aRecoverSupported)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4BeginGetRecoverSupported(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetRecoverSupported(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4EndGetRecoverSupported(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aRecoverSupported)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkUpdate4SetPropertySoftwareStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySoftwareStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate4SetPropertyExecutorStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyExecutorStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate4SetPropertyJobStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyJobStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate4SetPropertyRecoverSupportedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRecoverSupportedChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate4PropertySoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4PropertyExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4PropertyJobStatus(THandle aHandle, char** aJobStatus)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkUpdate4PropertyRecoverSupported(THandle aHandle, uint32_t* aRecoverSupported)
{
    CpProxyLinnCoUkUpdate4C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate4C*>(aHandle);
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

