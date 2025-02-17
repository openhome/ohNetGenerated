#include "CpAvOpenhomeOrgReaction1.h"
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


class SyncGetCanReactAvOpenhomeOrgReaction1Cpp : public SyncProxyAction
{
public:
    SyncGetCanReactAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, bool& aCanReact);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCanReactAvOpenhomeOrgReaction1Cpp() {}
private:
    CpProxyAvOpenhomeOrgReaction1Cpp& iService;
    bool& iCanReact;
};

SyncGetCanReactAvOpenhomeOrgReaction1Cpp::SyncGetCanReactAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, bool& aCanReact)
    : iService(aProxy)
    , iCanReact(aCanReact)
{
}

void SyncGetCanReactAvOpenhomeOrgReaction1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCanReact(aAsync, iCanReact);
}


class SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp : public SyncProxyAction
{
public:
    SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, std::string& aReaction);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp() {}
private:
    CpProxyAvOpenhomeOrgReaction1Cpp& iService;
    std::string& iReaction;
};

SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp::SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, std::string& aReaction)
    : iService(aProxy)
    , iReaction(aReaction)
{
}

void SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCurrentReaction(aAsync, iReaction);
}


class SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp : public SyncProxyAction
{
public:
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, std::string& aAvailableReactions);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp() {}
private:
    CpProxyAvOpenhomeOrgReaction1Cpp& iService;
    std::string& iAvailableReactions;
};

SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp::SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy, std::string& aAvailableReactions)
    : iService(aProxy)
    , iAvailableReactions(aAvailableReactions)
{
}

void SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAvailableReactions(aAsync, iAvailableReactions);
}


class SyncSetReactionAvOpenhomeOrgReaction1Cpp : public SyncProxyAction
{
public:
    SyncSetReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetReactionAvOpenhomeOrgReaction1Cpp() {}
private:
    CpProxyAvOpenhomeOrgReaction1Cpp& iService;
};

SyncSetReactionAvOpenhomeOrgReaction1Cpp::SyncSetReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetReactionAvOpenhomeOrgReaction1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetReaction(aAsync);
}


class SyncClearReactionAvOpenhomeOrgReaction1Cpp : public SyncProxyAction
{
public:
    SyncClearReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearReactionAvOpenhomeOrgReaction1Cpp() {}
private:
    CpProxyAvOpenhomeOrgReaction1Cpp& iService;
};

SyncClearReactionAvOpenhomeOrgReaction1Cpp::SyncClearReactionAvOpenhomeOrgReaction1Cpp(CpProxyAvOpenhomeOrgReaction1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearReactionAvOpenhomeOrgReaction1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearReaction(aAsync);
}


CpProxyAvOpenhomeOrgReaction1Cpp::CpProxyAvOpenhomeOrgReaction1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Reaction", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetCanReact = new Action("GetCanReact");
    param = new OpenHome::Net::ParameterBool("CanReact");
    iActionGetCanReact->AddOutputParameter(param);

    iActionGetCurrentReaction = new Action("GetCurrentReaction");
    param = new OpenHome::Net::ParameterString("Reaction");
    iActionGetCurrentReaction->AddOutputParameter(param);

    iActionGetAvailableReactions = new Action("GetAvailableReactions");
    param = new OpenHome::Net::ParameterString("AvailableReactions");
    iActionGetAvailableReactions->AddOutputParameter(param);

    iActionSetReaction = new Action("SetReaction");
    param = new OpenHome::Net::ParameterString("Reaction");
    iActionSetReaction->AddInputParameter(param);

    iActionClearReaction = new Action("ClearReaction");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1Cpp::CanReactPropertyChanged);
    iCanReact = new PropertyBool("CanReact", functor);
    AddProperty(iCanReact);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1Cpp::CurrentReactionPropertyChanged);
    iCurrentReaction = new PropertyString("CurrentReaction", functor);
    AddProperty(iCurrentReaction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1Cpp::AvailableReactionsPropertyChanged);
    iAvailableReactions = new PropertyString("AvailableReactions", functor);
    AddProperty(iAvailableReactions);
}

CpProxyAvOpenhomeOrgReaction1Cpp::~CpProxyAvOpenhomeOrgReaction1Cpp()
{
    DestroyService();
    delete iActionGetCanReact;
    delete iActionGetCurrentReaction;
    delete iActionGetAvailableReactions;
    delete iActionSetReaction;
    delete iActionClearReaction;
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SyncGetCanReact(bool& aCanReact)
{
    SyncGetCanReactAvOpenhomeOrgReaction1Cpp sync(*this, aCanReact);
    BeginGetCanReact(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::BeginGetCanReact(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCanReact, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCanReact->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::EndGetCanReact(IAsync& aAsync, bool& aCanReact)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCanReact"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aCanReact = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SyncGetCurrentReaction(std::string& aReaction)
{
    SyncGetCurrentReactionAvOpenhomeOrgReaction1Cpp sync(*this, aReaction);
    BeginGetCurrentReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::BeginGetCurrentReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCurrentReaction, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCurrentReaction->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::EndGetCurrentReaction(IAsync& aAsync, std::string& aReaction)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetCurrentReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aReaction.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SyncGetAvailableReactions(std::string& aAvailableReactions)
{
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1Cpp sync(*this, aAvailableReactions);
    BeginGetAvailableReactions(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::BeginGetAvailableReactions(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAvailableReactions, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAvailableReactions->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::EndGetAvailableReactions(IAsync& aAsync, std::string& aAvailableReactions)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAvailableReactions"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aAvailableReactions.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SyncSetReaction(const std::string& aReaction)
{
    SyncSetReactionAvOpenhomeOrgReaction1Cpp sync(*this);
    BeginSetReaction(aReaction, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::BeginSetReaction(const std::string& aReaction, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetReaction, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetReaction->InputParameters();
    {
        Brn buf((const TByte*)aReaction.c_str(), (TUint)aReaction.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::EndSetReaction(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SyncClearReaction()
{
    SyncClearReactionAvOpenhomeOrgReaction1Cpp sync(*this);
    BeginClearReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::BeginClearReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearReaction, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::EndClearReaction(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearReaction"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SetPropertyCanReactChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanReactChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SetPropertyCurrentReactionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentReactionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SetPropertyAvailableReactionsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAvailableReactionsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::PropertyCanReact(bool& aCanReact) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanReact = iCanReact->Value();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::PropertyCurrentReaction(std::string& aCurrentReaction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iCurrentReaction->Value();
    aCurrentReaction.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgReaction1Cpp::PropertyAvailableReactions(std::string& aAvailableReactions) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAvailableReactions->Value();
    aAvailableReactions.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgReaction1Cpp::CanReactPropertyChanged()
{
    ReportEvent(iCanReactChanged);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::CurrentReactionPropertyChanged()
{
    ReportEvent(iCurrentReactionChanged);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::AvailableReactionsPropertyChanged()
{
    ReportEvent(iAvailableReactionsChanged);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgReaction1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgReaction1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgReaction1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgReaction1Cpp::Version() const
{
  return iCpProxy.Version();
}

