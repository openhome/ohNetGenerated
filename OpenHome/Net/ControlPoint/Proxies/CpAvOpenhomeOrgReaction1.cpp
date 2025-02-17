#include "CpAvOpenhomeOrgReaction1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetCanReactAvOpenhomeOrgReaction1 : public SyncProxyAction
{
public:
    SyncGetCanReactAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, TBool& aCanReact);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgReaction1& iService;
    TBool& iCanReact;
};

class SyncGetCurrentReactionAvOpenhomeOrgReaction1 : public SyncProxyAction
{
public:
    SyncGetCurrentReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, Brh& aReaction);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgReaction1& iService;
    Brh& iReaction;
};

class SyncGetAvailableReactionsAvOpenhomeOrgReaction1 : public SyncProxyAction
{
public:
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, Brh& aAvailableReactions);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgReaction1& iService;
    Brh& iAvailableReactions;
};

class SyncSetReactionAvOpenhomeOrgReaction1 : public SyncProxyAction
{
public:
    SyncSetReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgReaction1& iService;
};

class SyncClearReactionAvOpenhomeOrgReaction1 : public SyncProxyAction
{
public:
    SyncClearReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgReaction1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetCanReactAvOpenhomeOrgReaction1

SyncGetCanReactAvOpenhomeOrgReaction1::SyncGetCanReactAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, TBool& aCanReact)
    : iService(aProxy)
    , iCanReact(aCanReact)
{
}

void SyncGetCanReactAvOpenhomeOrgReaction1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCanReact(aAsync, iCanReact);
}

// SyncGetCurrentReactionAvOpenhomeOrgReaction1

SyncGetCurrentReactionAvOpenhomeOrgReaction1::SyncGetCurrentReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, Brh& aReaction)
    : iService(aProxy)
    , iReaction(aReaction)
{
}

void SyncGetCurrentReactionAvOpenhomeOrgReaction1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetCurrentReaction(aAsync, iReaction);
}

// SyncGetAvailableReactionsAvOpenhomeOrgReaction1

SyncGetAvailableReactionsAvOpenhomeOrgReaction1::SyncGetAvailableReactionsAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy, Brh& aAvailableReactions)
    : iService(aProxy)
    , iAvailableReactions(aAvailableReactions)
{
}

void SyncGetAvailableReactionsAvOpenhomeOrgReaction1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAvailableReactions(aAsync, iAvailableReactions);
}

// SyncSetReactionAvOpenhomeOrgReaction1

SyncSetReactionAvOpenhomeOrgReaction1::SyncSetReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy)
    : iService(aProxy)
{
}

void SyncSetReactionAvOpenhomeOrgReaction1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetReaction(aAsync);
}

// SyncClearReactionAvOpenhomeOrgReaction1

SyncClearReactionAvOpenhomeOrgReaction1::SyncClearReactionAvOpenhomeOrgReaction1(CpProxyAvOpenhomeOrgReaction1& aProxy)
    : iService(aProxy)
{
}

void SyncClearReactionAvOpenhomeOrgReaction1::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearReaction(aAsync);
}


// CpProxyAvOpenhomeOrgReaction1

CpProxyAvOpenhomeOrgReaction1::CpProxyAvOpenhomeOrgReaction1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1::CanReactPropertyChanged);
    iCanReact = new PropertyBool("CanReact", functor);
    AddProperty(iCanReact);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1::CurrentReactionPropertyChanged);
    iCurrentReaction = new PropertyString("CurrentReaction", functor);
    AddProperty(iCurrentReaction);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgReaction1::AvailableReactionsPropertyChanged);
    iAvailableReactions = new PropertyString("AvailableReactions", functor);
    AddProperty(iAvailableReactions);
}

CpProxyAvOpenhomeOrgReaction1::~CpProxyAvOpenhomeOrgReaction1()
{
    DestroyService();
    delete iActionGetCanReact;
    delete iActionGetCurrentReaction;
    delete iActionGetAvailableReactions;
    delete iActionSetReaction;
    delete iActionClearReaction;
}

void CpProxyAvOpenhomeOrgReaction1::SyncGetCanReact(TBool& aCanReact)
{
    SyncGetCanReactAvOpenhomeOrgReaction1 sync(*this, aCanReact);
    BeginGetCanReact(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1::BeginGetCanReact(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCanReact, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCanReact->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1::EndGetCanReact(IAsync& aAsync, TBool& aCanReact)
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

void CpProxyAvOpenhomeOrgReaction1::SyncGetCurrentReaction(Brh& aReaction)
{
    SyncGetCurrentReactionAvOpenhomeOrgReaction1 sync(*this, aReaction);
    BeginGetCurrentReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1::BeginGetCurrentReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetCurrentReaction, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetCurrentReaction->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1::EndGetCurrentReaction(IAsync& aAsync, Brh& aReaction)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aReaction);
}

void CpProxyAvOpenhomeOrgReaction1::SyncGetAvailableReactions(Brh& aAvailableReactions)
{
    SyncGetAvailableReactionsAvOpenhomeOrgReaction1 sync(*this, aAvailableReactions);
    BeginGetAvailableReactions(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1::BeginGetAvailableReactions(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAvailableReactions, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAvailableReactions->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1::EndGetAvailableReactions(IAsync& aAsync, Brh& aAvailableReactions)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aAvailableReactions);
}

void CpProxyAvOpenhomeOrgReaction1::SyncSetReaction(const Brx& aReaction)
{
    SyncSetReactionAvOpenhomeOrgReaction1 sync(*this);
    BeginSetReaction(aReaction, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1::BeginSetReaction(const Brx& aReaction, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetReaction, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetReaction->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aReaction));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1::EndSetReaction(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgReaction1::SyncClearReaction()
{
    SyncClearReactionAvOpenhomeOrgReaction1 sync(*this);
    BeginClearReaction(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgReaction1::BeginClearReaction(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearReaction, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgReaction1::EndClearReaction(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgReaction1::SetPropertyCanReactChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanReactChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1::SetPropertyCurrentReactionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCurrentReactionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1::SetPropertyAvailableReactionsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAvailableReactionsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgReaction1::PropertyCanReact(TBool& aCanReact) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanReact = iCanReact->Value();
}

void CpProxyAvOpenhomeOrgReaction1::PropertyCurrentReaction(Brhz& aCurrentReaction) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCurrentReaction.Set(iCurrentReaction->Value());
}

void CpProxyAvOpenhomeOrgReaction1::PropertyAvailableReactions(Brhz& aAvailableReactions) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAvailableReactions.Set(iAvailableReactions->Value());
}

void CpProxyAvOpenhomeOrgReaction1::CanReactPropertyChanged()
{
    ReportEvent(iCanReactChanged);
}

void CpProxyAvOpenhomeOrgReaction1::CurrentReactionPropertyChanged()
{
    ReportEvent(iCurrentReactionChanged);
}

void CpProxyAvOpenhomeOrgReaction1::AvailableReactionsPropertyChanged()
{
    ReportEvent(iAvailableReactionsChanged);
}


void CpProxyAvOpenhomeOrgReaction1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgReaction1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgReaction1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgReaction1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgReaction1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgReaction1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgReaction1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgReaction1::Version() const
{
  return iCpProxy.Version();
}


