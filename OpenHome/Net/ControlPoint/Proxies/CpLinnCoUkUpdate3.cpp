#include "CpLinnCoUkUpdate3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPushManifestLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
};

class SyncPushManifest2LinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    TUint& iId;
};

class SyncGetSoftwareStatusLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    Brh& iSoftwareStatus;
};

class SyncGetExecutorStatusLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    Brh& iExecutorStatus;
};

class SyncGetJobStatusLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    Brh& iJobStatus;
};

class SyncApplyLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
};

class SyncApply2LinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    TUint& iId;
};

class SyncRecoverLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
};

class SyncRecover2LinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    TUint& iId;
};

class SyncCheckNowLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
};

class SyncGetRecoverSupportedLinnCoUkUpdate3 : public SyncProxyAction
{
public:
    SyncGetRecoverSupportedLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TBool& aRecoverSupported);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate3& iService;
    TBool& iRecoverSupported;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPushManifestLinnCoUkUpdate3

SyncPushManifestLinnCoUkUpdate3::SyncPushManifestLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}

// SyncPushManifest2LinnCoUkUpdate3

SyncPushManifest2LinnCoUkUpdate3::SyncPushManifest2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}

// SyncGetSoftwareStatusLinnCoUkUpdate3

SyncGetSoftwareStatusLinnCoUkUpdate3::SyncGetSoftwareStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}

// SyncGetExecutorStatusLinnCoUkUpdate3

SyncGetExecutorStatusLinnCoUkUpdate3::SyncGetExecutorStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}

// SyncGetJobStatusLinnCoUkUpdate3

SyncGetJobStatusLinnCoUkUpdate3::SyncGetJobStatusLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}

// SyncApplyLinnCoUkUpdate3

SyncApplyLinnCoUkUpdate3::SyncApplyLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}

// SyncApply2LinnCoUkUpdate3

SyncApply2LinnCoUkUpdate3::SyncApply2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}

// SyncRecoverLinnCoUkUpdate3

SyncRecoverLinnCoUkUpdate3::SyncRecoverLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}

// SyncRecover2LinnCoUkUpdate3

SyncRecover2LinnCoUkUpdate3::SyncRecover2LinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}

// SyncCheckNowLinnCoUkUpdate3

SyncCheckNowLinnCoUkUpdate3::SyncCheckNowLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}

// SyncGetRecoverSupportedLinnCoUkUpdate3

SyncGetRecoverSupportedLinnCoUkUpdate3::SyncGetRecoverSupportedLinnCoUkUpdate3(CpProxyLinnCoUkUpdate3& aProxy, TBool& aRecoverSupported)
    : iService(aProxy)
    , iRecoverSupported(aRecoverSupported)
{
}

void SyncGetRecoverSupportedLinnCoUkUpdate3::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecoverSupported(aAsync, iRecoverSupported);
}


// CpProxyLinnCoUkUpdate3

CpProxyLinnCoUkUpdate3::CpProxyLinnCoUkUpdate3(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Update", 3, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate3::RecoverSupportedPropertyChanged);
    iRecoverSupported = new PropertyBool("RecoverSupported", functor);
    AddProperty(iRecoverSupported);
}

CpProxyLinnCoUkUpdate3::~CpProxyLinnCoUkUpdate3()
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

void CpProxyLinnCoUkUpdate3::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate3 sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate3 sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate3::EndPushManifest2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate3 sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate3::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate3 sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate3::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate3 sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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

void CpProxyLinnCoUkUpdate3::SyncApply()
{
    SyncApplyLinnCoUkUpdate3 sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate3 sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndApply2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate3 sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate3 sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndRecover2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate3::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate3 sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate3::SyncGetRecoverSupported(TBool& aRecoverSupported)
{
    SyncGetRecoverSupportedLinnCoUkUpdate3 sync(*this, aRecoverSupported);
    BeginGetRecoverSupported(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate3::BeginGetRecoverSupported(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRecoverSupported, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecoverSupported->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate3::EndGetRecoverSupported(IAsync& aAsync, TBool& aRecoverSupported)
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

void CpProxyLinnCoUkUpdate3::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate3::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate3::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate3::SetPropertyRecoverSupportedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRecoverSupportedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate3::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate3::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate3::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate3::PropertyRecoverSupported(TBool& aRecoverSupported) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRecoverSupported = iRecoverSupported->Value();
}

void CpProxyLinnCoUkUpdate3::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate3::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate3::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate3::RecoverSupportedPropertyChanged()
{
    ReportEvent(iRecoverSupportedChanged);
}


void CpProxyLinnCoUkUpdate3::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate3::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate3::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate3::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate3::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate3::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate3::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate3::Version() const
{
  return iCpProxy.Version();
}


