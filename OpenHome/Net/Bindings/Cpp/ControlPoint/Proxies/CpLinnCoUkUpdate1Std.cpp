#include "CpLinnCoUkUpdate1.h"
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


class SyncPushManifestLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
};

SyncPushManifestLinnCoUkUpdate1Cpp::SyncPushManifestLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
};

SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp::SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpdateFeedParams(aAsync);
}


class SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aTopic, std::string& aChannel);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
    std::string& iTopic;
    std::string& iChannel;
};

SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp::SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aTopic, std::string& aChannel)
    : iService(aProxy)
    , iTopic(aTopic)
    , iChannel(aChannel)
{
}

void SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateFeedParams(aAsync, iTopic, iChannel);
}


class SyncGetSoftwareStatusLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
    std::string& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate1Cpp::SyncGetSoftwareStatusLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
    std::string& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate1Cpp::SyncGetExecutorStatusLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy, std::string& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncApplyLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
};

SyncApplyLinnCoUkUpdate1Cpp::SyncApplyLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncRestoreLinnCoUkUpdate1Cpp : public SyncProxyAction
{
public:
    SyncRestoreLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRestoreLinnCoUkUpdate1Cpp() {}
private:
    CpProxyLinnCoUkUpdate1Cpp& iService;
};

SyncRestoreLinnCoUkUpdate1Cpp::SyncRestoreLinnCoUkUpdate1Cpp(CpProxyLinnCoUkUpdate1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRestoreLinnCoUkUpdate1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRestore(aAsync);
}


CpProxyLinnCoUkUpdate1Cpp::CpProxyLinnCoUkUpdate1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Update", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPushManifest = new Action("PushManifest");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPushManifest->AddInputParameter(param);

    iActionSetUpdateFeedParams = new Action("SetUpdateFeedParams");
    param = new OpenHome::Net::ParameterString("Topic");
    iActionSetUpdateFeedParams->AddInputParameter(param);
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    param = new OpenHome::Net::ParameterString("Channel", allowedValues, 4);
    iActionSetUpdateFeedParams->AddInputParameter(param);
    delete[] allowedValues;

    iActionGetUpdateFeedParams = new Action("GetUpdateFeedParams");
    param = new OpenHome::Net::ParameterString("Topic");
    iActionGetUpdateFeedParams->AddOutputParameter(param);
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    param = new OpenHome::Net::ParameterString("Channel", allowedValues, 4);
    iActionGetUpdateFeedParams->AddOutputParameter(param);
    delete[] allowedValues;

    iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
    param = new OpenHome::Net::ParameterString("SoftwareStatus");
    iActionGetSoftwareStatus->AddOutputParameter(param);

    iActionGetExecutorStatus = new Action("GetExecutorStatus");
    param = new OpenHome::Net::ParameterString("ExecutorStatus");
    iActionGetExecutorStatus->AddOutputParameter(param);

    iActionApply = new Action("Apply");

    iActionRestore = new Action("Restore");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1Cpp::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1Cpp::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1Cpp::UpdateTopicPropertyChanged);
    iUpdateTopic = new PropertyString("UpdateTopic", functor);
    AddProperty(iUpdateTopic);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1Cpp::UpdateChannelPropertyChanged);
    iUpdateChannel = new PropertyString("UpdateChannel", functor);
    AddProperty(iUpdateChannel);
}

CpProxyLinnCoUkUpdate1Cpp::~CpProxyLinnCoUkUpdate1Cpp()
{
    DestroyService();
    delete iActionPushManifest;
    delete iActionSetUpdateFeedParams;
    delete iActionGetUpdateFeedParams;
    delete iActionGetSoftwareStatus;
    delete iActionGetExecutorStatus;
    delete iActionApply;
    delete iActionRestore;
}

void CpProxyLinnCoUkUpdate1Cpp::SyncPushManifest(const std::string& aUri)
{
    SyncPushManifestLinnCoUkUpdate1Cpp sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginPushManifest(const std::string& aUri, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkUpdate1Cpp::EndPushManifest(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1Cpp::SyncSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel)
{
    SyncSetUpdateFeedParamsLinnCoUkUpdate1Cpp sync(*this);
    BeginSetUpdateFeedParams(aTopic, aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginSetUpdateFeedParams(const std::string& aTopic, const std::string& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetUpdateFeedParams, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpdateFeedParams->InputParameters();
    {
        Brn buf((const TByte*)aTopic.c_str(), (TUint)aTopic.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndSetUpdateFeedParams(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetUpdateFeedParams"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1Cpp::SyncGetUpdateFeedParams(std::string& aTopic, std::string& aChannel)
{
    SyncGetUpdateFeedParamsLinnCoUkUpdate1Cpp sync(*this, aTopic, aChannel);
    BeginGetUpdateFeedParams(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginGetUpdateFeedParams(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateFeedParams, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateFeedParams->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndGetUpdateFeedParams(IAsync& aAsync, std::string& aTopic, std::string& aChannel)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateFeedParams"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aTopic.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aChannel.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkUpdate1Cpp::SyncGetSoftwareStatus(std::string& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate1Cpp sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndGetSoftwareStatus(IAsync& aAsync, std::string& aSoftwareStatus)
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

void CpProxyLinnCoUkUpdate1Cpp::SyncGetExecutorStatus(std::string& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate1Cpp sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndGetExecutorStatus(IAsync& aAsync, std::string& aExecutorStatus)
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

void CpProxyLinnCoUkUpdate1Cpp::SyncApply()
{
    SyncApplyLinnCoUkUpdate1Cpp sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApply, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndApply(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1Cpp::SyncRestore()
{
    SyncRestoreLinnCoUkUpdate1Cpp sync(*this);
    BeginRestore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1Cpp::BeginRestore(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRestore, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1Cpp::EndRestore(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Restore"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSoftwareStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iExecutorStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertyUpdateTopicChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTopicChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertyUpdateChannelChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateChannelChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1Cpp::PropertySoftwareStatus(std::string& aSoftwareStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSoftwareStatus->Value();
    aSoftwareStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate1Cpp::PropertyExecutorStatus(std::string& aExecutorStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iExecutorStatus->Value();
    aExecutorStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate1Cpp::PropertyUpdateTopic(std::string& aUpdateTopic) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateTopic->Value();
    aUpdateTopic.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate1Cpp::PropertyUpdateChannel(std::string& aUpdateChannel) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateChannel->Value();
    aUpdateChannel.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkUpdate1Cpp::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate1Cpp::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate1Cpp::UpdateTopicPropertyChanged()
{
    ReportEvent(iUpdateTopicChanged);
}

void CpProxyLinnCoUkUpdate1Cpp::UpdateChannelPropertyChanged()
{
    ReportEvent(iUpdateChannelChanged);
}

void CpProxyLinnCoUkUpdate1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkUpdate1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkUpdate1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkUpdate1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkUpdate1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkUpdate1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkUpdate1Cpp::Version() const
{
  return iCpProxy.Version();
}

