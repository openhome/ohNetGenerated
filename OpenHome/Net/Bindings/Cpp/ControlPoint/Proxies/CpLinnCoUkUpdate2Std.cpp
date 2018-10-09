#include "CpLinnCoUkUpdate2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncPushManifestLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
};

SyncPushManifestLinnCoUkUpdate2Cpp::SyncPushManifestLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncPushManifest2LinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifest2LinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    uint32_t& iId;
};

SyncPushManifest2LinnCoUkUpdate2Cpp::SyncPushManifest2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}


class SyncGetSoftwareStatusLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    std::string& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate2Cpp::SyncGetSoftwareStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    std::string& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate2Cpp::SyncGetExecutorStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncGetJobStatusLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    std::string& iJobStatus;
};

SyncGetJobStatusLinnCoUkUpdate2Cpp::SyncGetJobStatusLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, std::string& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}


class SyncApplyLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
};

SyncApplyLinnCoUkUpdate2Cpp::SyncApplyLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncApply2LinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApply2LinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    uint32_t& iId;
};

SyncApply2LinnCoUkUpdate2Cpp::SyncApply2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}


class SyncRecoverLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
};

SyncRecoverLinnCoUkUpdate2Cpp::SyncRecoverLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}


class SyncRecover2LinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecover2LinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
    uint32_t& iId;
};

SyncRecover2LinnCoUkUpdate2Cpp::SyncRecover2LinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}


class SyncCheckNowLinnCoUkUpdate2Cpp : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckNowLinnCoUkUpdate2Cpp() {}
private:
    CpProxyLinnCoUkUpdate2Cpp& iService;
};

SyncCheckNowLinnCoUkUpdate2Cpp::SyncCheckNowLinnCoUkUpdate2Cpp(CpProxyLinnCoUkUpdate2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


CpProxyLinnCoUkUpdate2Cpp::CpProxyLinnCoUkUpdate2Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2Cpp::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2Cpp::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate2Cpp::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
}

CpProxyLinnCoUkUpdate2Cpp::~CpProxyLinnCoUkUpdate2Cpp()
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

void CpProxyLinnCoUkUpdate2Cpp::SyncPushManifest(const std::string& aUri)
{
    SyncPushManifestLinnCoUkUpdate2Cpp sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginPushManifest(const std::string& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncPushManifest2(const std::string& aUri, uint32_t& aId)
{
    SyncPushManifest2LinnCoUkUpdate2Cpp sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginPushManifest2(const std::string& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPushManifest2, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest2->InputParameters();
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPushManifest2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndPushManifest2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncGetSoftwareStatus(std::string& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate2Cpp sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndGetSoftwareStatus(IAsync& aAsync, std::string& aSoftwareStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSoftwareStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkUpdate2Cpp::SyncGetExecutorStatus(std::string& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate2Cpp sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndGetExecutorStatus(IAsync& aAsync, std::string& aExecutorStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aExecutorStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkUpdate2Cpp::SyncGetJobStatus(std::string& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate2Cpp sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndGetJobStatus(IAsync& aAsync, std::string& aJobStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aJobStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkUpdate2Cpp::SyncApply()
{
    SyncApplyLinnCoUkUpdate2Cpp sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncApply2(uint32_t& aId)
{
    SyncApply2LinnCoUkUpdate2Cpp sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndApply2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate2Cpp sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncRecover2(uint32_t& aId)
{
    SyncRecover2LinnCoUkUpdate2Cpp sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndRecover2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate2Cpp::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate2Cpp sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate2Cpp::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate2Cpp::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate2Cpp::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2Cpp::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2Cpp::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate2Cpp::PropertySoftwareStatus(std::string& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSoftwareStatus->Value();
    aSoftwareStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate2Cpp::PropertyExecutorStatus(std::string& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iExecutorStatus->Value();
    aExecutorStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate2Cpp::PropertyJobStatus(std::string& aJobStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iJobStatus->Value();
    aJobStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate2Cpp::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate2Cpp::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate2Cpp::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate2Cpp::Version() const
{
  return iCpProxy.Version();
}

