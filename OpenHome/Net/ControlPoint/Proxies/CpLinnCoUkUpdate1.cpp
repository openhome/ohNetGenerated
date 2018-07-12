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

class SyncSetUpdateFeedParamsLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncSetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

class SyncGetUpdateFeedParamsLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncGetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aTopic, Brh& aChannel);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
    Brh& iTopic;
    Brh& iChannel;
};

class SyncGetUpdateStatusLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
    Brh& iUpdateStatus;
};

class SyncApplyLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkUpdate1& iService;
};

class SyncRestoreLinnCoUkUpdate1 : public SyncProxyAction
{
public:
    SyncRestoreLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy);
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

// SyncSetUpdateFeedParamsLinnCoUkUpdate1

SyncSetUpdateFeedParamsLinnCoUkUpdate1::SyncSetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpdateFeedParamsLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpdateFeedParams(aAsync);
}

// SyncGetUpdateFeedParamsLinnCoUkUpdate1

SyncGetUpdateFeedParamsLinnCoUkUpdate1::SyncGetUpdateFeedParamsLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aTopic, Brh& aChannel)
    : iService(aProxy)
    , iTopic(aTopic)
    , iChannel(aChannel)
{
}

void SyncGetUpdateFeedParamsLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateFeedParams(aAsync, iTopic, iChannel);
}

// SyncGetUpdateStatusLinnCoUkUpdate1

SyncGetUpdateStatusLinnCoUkUpdate1::SyncGetUpdateStatusLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy, Brh& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
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

// SyncRestoreLinnCoUkUpdate1

SyncRestoreLinnCoUkUpdate1::SyncRestoreLinnCoUkUpdate1(CpProxyLinnCoUkUpdate1& aProxy)
    : iService(aProxy)
{
}

void SyncRestoreLinnCoUkUpdate1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRestore(aAsync);
}


// CpProxyLinnCoUkUpdate1

CpProxyLinnCoUkUpdate1::CpProxyLinnCoUkUpdate1(CpDevice& aDevice)
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

    iActionGetUpdateStatus = new Action("GetUpdateStatus");
    param = new OpenHome::Net::ParameterString("UpdateStatus");
    iActionGetUpdateStatus->AddOutputParameter(param);

    iActionApply = new Action("Apply");

    iActionRestore = new Action("Restore");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1::UpdateTopicPropertyChanged);
    iUpdateTopic = new PropertyString("UpdateTopic", functor);
    AddProperty(iUpdateTopic);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1::UpdateChannelPropertyChanged);
    iUpdateChannel = new PropertyString("UpdateChannel", functor);
    AddProperty(iUpdateChannel);
}

CpProxyLinnCoUkUpdate1::~CpProxyLinnCoUkUpdate1()
{
    DestroyService();
    delete iActionPushManifest;
    delete iActionSetUpdateFeedParams;
    delete iActionGetUpdateFeedParams;
    delete iActionGetUpdateStatus;
    delete iActionApply;
    delete iActionRestore;
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

void CpProxyLinnCoUkUpdate1::SyncSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel)
{
    SyncSetUpdateFeedParamsLinnCoUkUpdate1 sync(*this);
    BeginSetUpdateFeedParams(aTopic, aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetUpdateFeedParams, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpdateFeedParams->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTopic));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndSetUpdateFeedParams(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SyncGetUpdateFeedParams(Brh& aTopic, Brh& aChannel)
{
    SyncGetUpdateFeedParamsLinnCoUkUpdate1 sync(*this, aTopic, aChannel);
    BeginGetUpdateFeedParams(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginGetUpdateFeedParams(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateFeedParams, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateFeedParams->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndGetUpdateFeedParams(IAsync& aAsync, Brh& aTopic, Brh& aChannel)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTopic);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannel);
}

void CpProxyLinnCoUkUpdate1::SyncGetUpdateStatus(Brh& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkUpdate1 sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUpdateStatus);
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

void CpProxyLinnCoUkUpdate1::SyncRestore()
{
    SyncRestoreLinnCoUkUpdate1 sync(*this);
    BeginRestore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1::BeginRestore(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRestore, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1::EndRestore(IAsync& aAsync)
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

void CpProxyLinnCoUkUpdate1::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1::SetPropertyUpdateTopicChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTopicChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1::SetPropertyUpdateChannelChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateChannelChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkUpdate1::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkUpdate1::PropertyUpdateTopic(Brhz& aUpdateTopic) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateTopic.Set(iUpdateTopic->Value());
}

void CpProxyLinnCoUkUpdate1::PropertyUpdateChannel(Brhz& aUpdateChannel) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateChannel.Set(iUpdateChannel->Value());
}

void CpProxyLinnCoUkUpdate1::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkUpdate1::UpdateTopicPropertyChanged()
{
    ReportEvent(iUpdateTopicChanged);
}

void CpProxyLinnCoUkUpdate1::UpdateChannelPropertyChanged()
{
    ReportEvent(iUpdateChannelChanged);
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


