#include "CpLinnCoUkUpdate4.h"
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


class SyncPushManifestLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
};

SyncPushManifestLinnCoUkUpdate4Cpp::SyncPushManifestLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncPushManifest2LinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncPushManifest2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifest2LinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    uint32_t& iId;
};

SyncPushManifest2LinnCoUkUpdate4Cpp::SyncPushManifest2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncPushManifest2LinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest2(aAsync, iId);
}


class SyncGetSoftwareStatusLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    std::string& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate4Cpp::SyncGetSoftwareStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    std::string& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate4Cpp::SyncGetExecutorStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncGetJobStatusLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncGetJobStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aJobStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetJobStatusLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    std::string& iJobStatus;
};

SyncGetJobStatusLinnCoUkUpdate4Cpp::SyncGetJobStatusLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, std::string& aJobStatus)
    : iService(aProxy)
    , iJobStatus(aJobStatus)
{
}

void SyncGetJobStatusLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetJobStatus(aAsync, iJobStatus);
}


class SyncApplyLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
};

SyncApplyLinnCoUkUpdate4Cpp::SyncApplyLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncApply2LinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncApply2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApply2LinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    uint32_t& iId;
};

SyncApply2LinnCoUkUpdate4Cpp::SyncApply2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncApply2LinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply2(aAsync, iId);
}


class SyncRecoverLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncRecoverLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
};

SyncRecoverLinnCoUkUpdate4Cpp::SyncRecoverLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover(aAsync);
}


class SyncRecover2LinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncRecover2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecover2LinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    uint32_t& iId;
};

SyncRecover2LinnCoUkUpdate4Cpp::SyncRecover2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecover2LinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecover2(aAsync, iId);
}


class SyncRecoverKeepStoreLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncRecoverKeepStoreLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverKeepStoreLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
};

SyncRecoverKeepStoreLinnCoUkUpdate4Cpp::SyncRecoverKeepStoreLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRecoverKeepStoreLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore(aAsync);
}


class SyncRecoverKeepStore2LinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncRecoverKeepStore2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRecoverKeepStore2LinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    uint32_t& iId;
};

SyncRecoverKeepStore2LinnCoUkUpdate4Cpp::SyncRecoverKeepStore2LinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, uint32_t& aId)
    : iService(aProxy)
    , iId(aId)
{
}

void SyncRecoverKeepStore2LinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRecoverKeepStore2(aAsync, iId);
}


class SyncCheckNowLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncCheckNowLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCheckNowLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
};

SyncCheckNowLinnCoUkUpdate4Cpp::SyncCheckNowLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncCheckNowLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCheckNow(aAsync);
}


class SyncGetRecoverSupportedLinnCoUkUpdate4Cpp : public SyncProxyAction
{
public:
    SyncGetRecoverSupportedLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, bool& aRecoverSupported);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRecoverSupportedLinnCoUkUpdate4Cpp() {}
private:
    CpProxyLinnCoUkUpdate4Cpp& iService;
    bool& iRecoverSupported;
};

SyncGetRecoverSupportedLinnCoUkUpdate4Cpp::SyncGetRecoverSupportedLinnCoUkUpdate4Cpp(CpProxyLinnCoUkUpdate4Cpp& aProxy, bool& aRecoverSupported)
    : iService(aProxy)
    , iRecoverSupported(aRecoverSupported)
{
}

void SyncGetRecoverSupportedLinnCoUkUpdate4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecoverSupported(aAsync, iRecoverSupported);
}


CpProxyLinnCoUkUpdate4Cpp::CpProxyLinnCoUkUpdate4Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4Cpp::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4Cpp::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4Cpp::JobStatusPropertyChanged);
    iJobStatus = new PropertyString("JobStatus", functor);
    AddProperty(iJobStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate4Cpp::RecoverSupportedPropertyChanged);
    iRecoverSupported = new PropertyBool("RecoverSupported", functor);
    AddProperty(iRecoverSupported);
}

CpProxyLinnCoUkUpdate4Cpp::~CpProxyLinnCoUkUpdate4Cpp()
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

void CpProxyLinnCoUkUpdate4Cpp::SyncPushManifest(const std::string& aUri)
{
    SyncPushManifestLinnCoUkUpdate4Cpp sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginPushManifest(const std::string& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate4Cpp::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncPushManifest2(const std::string& aUri, uint32_t& aId)
{
    SyncPushManifest2LinnCoUkUpdate4Cpp sync(*this, aId);
    BeginPushManifest2(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginPushManifest2(const std::string& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate4Cpp::EndPushManifest2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncGetSoftwareStatus(std::string& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate4Cpp sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndGetSoftwareStatus(IAsync& aAsync, std::string& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncGetExecutorStatus(std::string& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate4Cpp sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndGetExecutorStatus(IAsync& aAsync, std::string& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncGetJobStatus(std::string& aJobStatus)
{
    SyncGetJobStatusLinnCoUkUpdate4Cpp sync(*this, aJobStatus);
    BeginGetJobStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginGetJobStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetJobStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetJobStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndGetJobStatus(IAsync& aAsync, std::string& aJobStatus)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncApply()
{
    SyncApplyLinnCoUkUpdate4Cpp sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncApply2(uint32_t& aId)
{
    SyncApply2LinnCoUkUpdate4Cpp sync(*this, aId);
    BeginApply2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginApply2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionApply2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndApply2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncRecover()
{
    SyncRecoverLinnCoUkUpdate4Cpp sync(*this);
    BeginRecover(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginRecover(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndRecover(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncRecover2(uint32_t& aId)
{
    SyncRecover2LinnCoUkUpdate4Cpp sync(*this, aId);
    BeginRecover2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginRecover2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecover2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecover2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndRecover2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncRecoverKeepStore()
{
    SyncRecoverKeepStoreLinnCoUkUpdate4Cpp sync(*this);
    BeginRecoverKeepStore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginRecoverKeepStore(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecoverKeepStore, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndRecoverKeepStore(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncRecoverKeepStore2(uint32_t& aId)
{
    SyncRecoverKeepStore2LinnCoUkUpdate4Cpp sync(*this, aId);
    BeginRecoverKeepStore2(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginRecoverKeepStore2(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRecoverKeepStore2, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRecoverKeepStore2->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndRecoverKeepStore2(IAsync& aAsync, uint32_t& aId)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncCheckNow()
{
    SyncCheckNowLinnCoUkUpdate4Cpp sync(*this);
    BeginCheckNow(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginCheckNow(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCheckNow, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndCheckNow(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate4Cpp::SyncGetRecoverSupported(bool& aRecoverSupported)
{
    SyncGetRecoverSupportedLinnCoUkUpdate4Cpp sync(*this, aRecoverSupported);
    BeginGetRecoverSupported(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate4Cpp::BeginGetRecoverSupported(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRecoverSupported, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecoverSupported->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate4Cpp::EndGetRecoverSupported(IAsync& aAsync, bool& aRecoverSupported)
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

void CpProxyLinnCoUkUpdate4Cpp::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4Cpp::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4Cpp::SetPropertyJobStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iJobStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4Cpp::SetPropertyRecoverSupportedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRecoverSupportedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate4Cpp::PropertySoftwareStatus(std::string& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSoftwareStatus->Value();
    aSoftwareStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate4Cpp::PropertyExecutorStatus(std::string& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iExecutorStatus->Value();
    aExecutorStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate4Cpp::PropertyJobStatus(std::string& aJobStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iJobStatus->Value();
    aJobStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate4Cpp::PropertyRecoverSupported(bool& aRecoverSupported) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRecoverSupported = iRecoverSupported->Value();
}

void CpProxyLinnCoUkUpdate4Cpp::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate4Cpp::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate4Cpp::JobStatusPropertyChanged()
{
    ReportEvent(iJobStatusChanged);
}

void CpProxyLinnCoUkUpdate4Cpp::RecoverSupportedPropertyChanged()
{
    ReportEvent(iRecoverSupportedChanged);
}

void CpProxyLinnCoUkUpdate4Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate4Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate4Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate4Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate4Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate4Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate4Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate4Cpp::Version() const
{
  return iCpProxy.Version();
}

