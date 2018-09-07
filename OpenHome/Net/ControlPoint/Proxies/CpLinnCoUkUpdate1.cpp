#include "CpLinnCoUkUpdate1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPushManifestLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

class SyncGetSoftwareStatusLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
    Brh& iSoftwareStatus;
};

class SyncGetExecutorStatusLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
    Brh& iExecutorStatus;
};

class SyncApplyLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

class SyncRecoverLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

class SyncCheckNowLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPushManifestLinnCoUkUpdate1

SyncPushManifestLinnCoUkUpdate1::SyncPushManifestLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}

// SyncGetSoftwareStatusLinnCoUkUpdate1

SyncGetSoftwareStatusLinnCoUkUpdate1::SyncGetSoftwareStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}

// SyncGetExecutorStatusLinnCoUkUpdate1

SyncGetExecutorStatusLinnCoUkUpdate1::SyncGetExecutorStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}

// SyncApplyLinnCoUkUpdate1

SyncApplyLinnCoUkUpdate1::SyncApplyLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}

// SyncRecoverLinnCoUkUpdate1

SyncRecoverLinnCoUkUpdate1::SyncRecoverLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}

// SyncCheckNowLinnCoUkUpdate1

SyncCheckNowLinnCoUkUpdate1::SyncCheckNowLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


// CpProxyLinnCoUkUpdate1

CpProxyLinnCoUkUpdate1::CpProxyLinnCoUkUpdate1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Update", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionPushManifest = new Action("PushManifest");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPushManifest->AddInputParameter(param);

    iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
    param = new OpenHome::Net::ParameterString("SoftwareStatus");
    iActionGetSoftwareStatus->AddOutputParameter(param);

    iActionGetExecutorStatus = new Action("GetExecutorStatus");
    param = new OpenHome::Net::ParameterString("ExecutorStatus");
    iActionGetExecutorStatus->AddOutputParameter(param);

    iActionApply = new Action("Apply");

    iActionRecover = new Action("Recover");

    iActionCheckNow = new Action("CheckNow");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
}

CpProxyLinnCoUkUpdate1::~CpProxyLinnCoUkUpdate1()
{
    DestroyService();
    delete iActionPushManifest;
    delete iActionGetSoftwareStatus;
    delete iActionGetExecutorStatus;
    delete iActionApply;
    delete iActionRecover;
    delete iActionCheckNow;
}

void CpProxyLinnCoUkUpdate1::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate1 sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate1 sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate1::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate1 sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate1::SyncApply()
{
    SyncApplyLinnCoUkUpdate1 sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate1 sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate1 sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate1::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate1::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate1::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}


void CpProxyLinnCoUkUpdate1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate1::Version() const
{
  return iCpProxy.Version();
}


