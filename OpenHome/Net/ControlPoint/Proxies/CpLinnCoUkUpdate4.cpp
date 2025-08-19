#include "CpLinnCoUkUpdate4.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPushManifestLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
};

class SyncPushManifest2LinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    TUint& iId;
};

class SyncGetSoftwareStatusLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    Brh& iSoftwareStatus;
};

class SyncGetExecutorStatusLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    Brh& iExecutorStatus;
};

class SyncGetJobStatusLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    Brh& iJobStatus;
};

class SyncApplyLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
};

class SyncApply2LinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    TUint& iId;
};

class SyncRecoverLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
};

class SyncRecover2LinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    TUint& iId;
};

class SyncRecoverKeepStoreLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncRecoverKeepStoreLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
};

class SyncRecoverKeepStore2LinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncRecoverKeepStore2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    TUint& iId;
};

class SyncCheckNowLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
};

class SyncGetRecoverSupportedLinnCoUkUpdate4 : public SyncProxyAction
{
public:
    SyncGetRecoverSupportedLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TBool& aRecoverSupported);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate4& iService;
    TBool& iRecoverSupported;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPushManifestLinnCoUkUpdate4

SyncPushManifestLinnCoUkUpdate4::SyncPushManifestLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}

// SyncPushManifest2LinnCoUkUpdate4

SyncPushManifest2LinnCoUkUpdate4::SyncPushManifest2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}

// SyncGetSoftwareStatusLinnCoUkUpdate4

SyncGetSoftwareStatusLinnCoUkUpdate4::SyncGetSoftwareStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}

// SyncGetExecutorStatusLinnCoUkUpdate4

SyncGetExecutorStatusLinnCoUkUpdate4::SyncGetExecutorStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}

// SyncGetJobStatusLinnCoUkUpdate4

SyncGetJobStatusLinnCoUkUpdate4::SyncGetJobStatusLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, Brh& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}

// SyncApplyLinnCoUkUpdate4

SyncApplyLinnCoUkUpdate4::SyncApplyLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}

// SyncApply2LinnCoUkUpdate4

SyncApply2LinnCoUkUpdate4::SyncApply2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}

// SyncRecoverLinnCoUkUpdate4

SyncRecoverLinnCoUkUpdate4::SyncRecoverLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}

// SyncRecover2LinnCoUkUpdate4

SyncRecover2LinnCoUkUpdate4::SyncRecover2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}

// SyncRecoverKeepStoreLinnCoUkUpdate4

SyncRecoverKeepStoreLinnCoUkUpdate4::SyncRecoverKeepStoreLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverKeepStoreLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore(aAsync);
}

// SyncRecoverKeepStore2LinnCoUkUpdate4

SyncRecoverKeepStore2LinnCoUkUpdate4::SyncRecoverKeepStore2LinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TUint& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecoverKeepStore2LinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore2(aAsync, iId);
}

// SyncCheckNowLinnCoUkUpdate4

SyncCheckNowLinnCoUkUpdate4::SyncCheckNowLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}

// SyncGetRecoverSupportedLinnCoUkUpdate4

SyncGetRecoverSupportedLinnCoUkUpdate4::SyncGetRecoverSupportedLinnCoUkUpdate4(CpProxyLinnCoUkUpdate4& aProxy, TBool& aRecoverSupported)
    : iService(aProxy)
    , iRecoverSupported(aRecoverSupported)
{
}

void SyncGetRecoverSupportedLinnCoUkUpdate4::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecoverSupported(aAsync, iRecoverSupported);
}


// CpProxyLinnCoUkUpdate4

CpProxyLinnCoUkUpdate4::CpProxyLinnCoUkUpdate4(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Update", 4, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4::RecoverSupportedPropertyChanged);
    iRecoverSupported = new PropertyBool("RecoverSupported", functor);
    AddProperty(iRecoverSupported);
}

CpProxyLinnCoUkUpdate4::~CpProxyLinnCoUkUpdate4()
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

void CpProxyLinnCoUkUpdate4::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate4 sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4::SyncPushManifest2(const Brx& aUri, TUint& aId)
{
    SyncPushManifest2LinnCoUkUpdate4 sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginPushManifest2(const Brx& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate4::EndPushManifest2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate4 sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate4::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate4 sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate4::SyncGetJobStatus(Brh& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate4 sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndGetJobStatus(IAsync& aAsync, Brh& aJobStatus)
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

void CpProxyLinnCoUkUpdate4::SyncApply()
{
    SyncApplyLinnCoUkUpdate4 sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4::SyncApply2(TUint& aId)
{
    SyncApply2LinnCoUkUpdate4 sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndApply2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate4 sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4::SyncRecover2(TUint& aId)
{
    SyncRecover2LinnCoUkUpdate4 sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndRecover2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4::SyncRecoverKeepStore()
{
    SyncRecoverKeepStoreLinnCoUkUpdate4 sync(*this);
    BeginRecoverKeepStore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginRecoverKeepStore(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecoverKeepStore, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndRecoverKeepStore(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4::SyncRecoverKeepStore2(TUint& aId)
{
    SyncRecoverKeepStore2LinnCoUkUpdate4 sync(*this, aId);
    BeginRecoverKeepStore2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginRecoverKeepStore2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecoverKeepStore2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecoverKeepStore2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndRecoverKeepStore2(IAsync& aAsync, TUint& aId)
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

void CpProxyLinnCoUkUpdate4::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate4 sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4::SyncGetRecoverSupported(TBool& aRecoverSupported)
{
    SyncGetRecoverSupportedLinnCoUkUpdate4 sync(*this, aRecoverSupported);
    BeginGetRecoverSupported(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4::BeginGetRecoverSupported(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRecoverSupported, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecoverSupported->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4::EndGetRecoverSupported(IAsync& aAsync, TBool& aRecoverSupported)
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

void CpProxyLinnCoUkUpdate4::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4::SetPropertyRecoverSupportedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRecoverSupportedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate4::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate4::PropertyJobStatus(Brhz& aJobStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aJobStatus.Set(iJobStatus->Value());
}

void CpProxyLinnCoUkUpdate4::PropertyRecoverSupported(TBool& aRecoverSupported) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRecoverSupported = iRecoverSupported->Value();
}

void CpProxyLinnCoUkUpdate4::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate4::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate4::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate4::RecoverSupportedPropertyChanged()
{
    ReportEvent(iRecoverSupportedChanged);
}


void CpProxyLinnCoUkUpdate4::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate4::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate4::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate4::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate4::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate4::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate4::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate4::Version() const
{
  return iCpProxy.Version();
}


