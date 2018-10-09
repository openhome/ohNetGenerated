#include "CpLinnCoUkUpdate2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPushManifestLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
};

class SyncPushManifest2LinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    TUint& iId;
};

class SyncGetSoftwareStatusLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    Brh& iSoftwareStatus;
};

class SyncGetExecutorStatusLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    Brh& iExecutorStatus;
};

class SyncGetJobStatusLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    Brh& iJobStatus;
};

class SyncApplyLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
};

class SyncApply2LinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    TUint& iId;
};

class SyncRecoverLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
};

class SyncRecover2LinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
    TUint& iId;
};

class SyncCheckNowLinnCoUkUpdate2 : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate2& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPushManifestLinnCoUkUpdate2

SyncPushManifestLinnCoUkUpdate2::SyncPushManifestLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}

// SyncPushManifest2LinnCoUkUpdate2

SyncPushManifest2LinnCoUkUpdate2::SyncPushManifest2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}

// SyncGetSoftwareStatusLinnCoUkUpdate2

SyncGetSoftwareStatusLinnCoUkUpdate2::SyncGetSoftwareStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}

// SyncGetExecutorStatusLinnCoUkUpdate2

SyncGetExecutorStatusLinnCoUkUpdate2::SyncGetExecutorStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}

// SyncGetJobStatusLinnCoUkUpdate2

SyncGetJobStatusLinnCoUkUpdate2::SyncGetJobStatusLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}

// SyncApplyLinnCoUkUpdate2

SyncApplyLinnCoUkUpdate2::SyncApplyLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}

// SyncApply2LinnCoUkUpdate2

SyncApply2LinnCoUkUpdate2::SyncApply2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}

// SyncRecoverLinnCoUkUpdate2

SyncRecoverLinnCoUkUpdate2::SyncRecoverLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}

// SyncRecover2LinnCoUkUpdate2

SyncRecover2LinnCoUkUpdate2::SyncRecover2LinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}

// SyncCheckNowLinnCoUkUpdate2

SyncCheckNowLinnCoUkUpdate2::SyncCheckNowLinnCoUkUpdate2(CpProxyLinnCoUkUpdate2& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate2::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


// CpProxyLinnCoUkUpdate2

CpProxyLinnCoUkUpdate2::CpProxyLinnCoUkUpdate2(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Update", 2, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
}

CpProxyLinnCoUkUpdate2::~CpProxyLinnCoUkUpdate2()
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

void CpProxyLinnCoUkUpdate2::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate2 sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate2 sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest2, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest2->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPushManifest2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndPushManifest2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate2::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate2 sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate2::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate2 sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate2::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate2 sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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

void CpProxyLinnCoUkUpdate2::SyncApply()
{
    SyncApplyLinnCoUkUpdate2 sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate2 sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndApply2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate2::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate2 sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate2 sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndRecover2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate2::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate2 sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate2::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate2::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate2::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate2::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate2::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}


void CpProxyLinnCoUkUpdate2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate2::Version() const
{
  return iCpProxy.Version();
}


