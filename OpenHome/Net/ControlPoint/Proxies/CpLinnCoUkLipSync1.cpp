#include "CpLinnCoUkLipSync1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetDelayLinnCoUkLipSync1 : public SyncProxyAction
{
public:
    SyncSetDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkLipSync1& iService;
};

class SyncDelayLinnCoUkLipSync1 : public SyncProxyAction
{
public:
    SyncDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aDelay);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkLipSync1& iService;
    TUint& iDelay;
};

class SyncDelayMinimumLinnCoUkLipSync1 : public SyncProxyAction
{
public:
    SyncDelayMinimumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aMin);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkLipSync1& iService;
    TUint& iMin;
};

class SyncDelayMaximumLinnCoUkLipSync1 : public SyncProxyAction
{
public:
    SyncDelayMaximumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aMax);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkLipSync1& iService;
    TUint& iMax;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetDelayLinnCoUkLipSync1

SyncSetDelayLinnCoUkLipSync1::SyncSetDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy)
    : iService(aProxy)
{
}

void SyncSetDelayLinnCoUkLipSync1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDelay(aAsync);
}

// SyncDelayLinnCoUkLipSync1

SyncDelayLinnCoUkLipSync1::SyncDelayLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aDelay)
    : iService(aProxy)
    , iDelay(aDelay)
{
}

void SyncDelayLinnCoUkLipSync1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelay(aAsync, iDelay);
}

// SyncDelayMinimumLinnCoUkLipSync1

SyncDelayMinimumLinnCoUkLipSync1::SyncDelayMinimumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aMin)
    : iService(aProxy)
    , iMin(aMin)
{
}

void SyncDelayMinimumLinnCoUkLipSync1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMinimum(aAsync, iMin);
}

// SyncDelayMaximumLinnCoUkLipSync1

SyncDelayMaximumLinnCoUkLipSync1::SyncDelayMaximumLinnCoUkLipSync1(CpProxyLinnCoUkLipSync1& aProxy, TUint& aMax)
    : iService(aProxy)
    , iMax(aMax)
{
}

void SyncDelayMaximumLinnCoUkLipSync1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMaximum(aAsync, iMax);
}


// CpProxyLinnCoUkLipSync1

CpProxyLinnCoUkLipSync1::CpProxyLinnCoUkLipSync1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "LipSync", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetDelay = new Action("SetDelay");
    param = new OpenHome::Net::ParameterUint("Delay");
    iActionSetDelay->AddInputParameter(param);

    iActionDelay = new Action("Delay");
    param = new OpenHome::Net::ParameterUint("Delay");
    iActionDelay->AddOutputParameter(param);

    iActionDelayMinimum = new Action("DelayMinimum");
    param = new OpenHome::Net::ParameterUint("Min");
    iActionDelayMinimum->AddOutputParameter(param);

    iActionDelayMaximum = new Action("DelayMaximum");
    param = new OpenHome::Net::ParameterUint("Max");
    iActionDelayMaximum->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1::DelayPropertyChanged);
    iDelay = new PropertyUint("Delay", functor);
    AddProperty(iDelay);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1::DelayMinimumPropertyChanged);
    iDelayMinimum = new PropertyUint("DelayMinimum", functor);
    AddProperty(iDelayMinimum);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1::DelayMaximumPropertyChanged);
    iDelayMaximum = new PropertyUint("DelayMaximum", functor);
    AddProperty(iDelayMaximum);
}

CpProxyLinnCoUkLipSync1::~CpProxyLinnCoUkLipSync1()
{
    DestroyService();
    delete iActionSetDelay;
    delete iActionDelay;
    delete iActionDelayMinimum;
    delete iActionDelayMaximum;
}

void CpProxyLinnCoUkLipSync1::SyncSetDelay(TUint aDelay)
{
    SyncSetDelayLinnCoUkLipSync1 sync(*this);
    BeginSetDelay(aDelay, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1::BeginSetDelay(TUint aDelay, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDelay, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDelay->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aDelay));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1::EndSetDelay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetDelay"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkLipSync1::SyncDelay(TUint& aDelay)
{
    SyncDelayLinnCoUkLipSync1 sync(*this, aDelay);
    BeginDelay(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1::BeginDelay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelay, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelay->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1::EndDelay(IAsync& aAsync, TUint& aDelay)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Delay"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aDelay = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1::SyncDelayMinimum(TUint& aMin)
{
    SyncDelayMinimumLinnCoUkLipSync1 sync(*this, aMin);
    BeginDelayMinimum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1::BeginDelayMinimum(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelayMinimum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMinimum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1::EndDelayMinimum(IAsync& aAsync, TUint& aMin)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DelayMinimum"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aMin = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1::SyncDelayMaximum(TUint& aMax)
{
    SyncDelayMaximumLinnCoUkLipSync1 sync(*this, aMax);
    BeginDelayMaximum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1::BeginDelayMaximum(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelayMaximum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMaximum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1::EndDelayMaximum(IAsync& aAsync, TUint& aMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DelayMaximum"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkLipSync1::SetPropertyDelayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1::SetPropertyDelayMinimumChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayMinimumChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1::SetPropertyDelayMaximumChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayMaximumChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1::PropertyDelay(TUint& aDelay) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelay = iDelay->Value();
}

void CpProxyLinnCoUkLipSync1::PropertyDelayMinimum(TUint& aDelayMinimum) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelayMinimum = iDelayMinimum->Value();
}

void CpProxyLinnCoUkLipSync1::PropertyDelayMaximum(TUint& aDelayMaximum) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelayMaximum = iDelayMaximum->Value();
}

void CpProxyLinnCoUkLipSync1::DelayPropertyChanged()
{
    ReportEvent(iDelayChanged);
}

void CpProxyLinnCoUkLipSync1::DelayMinimumPropertyChanged()
{
    ReportEvent(iDelayMinimumChanged);
}

void CpProxyLinnCoUkLipSync1::DelayMaximumPropertyChanged()
{
    ReportEvent(iDelayMaximumChanged);
}


void CpProxyLinnCoUkLipSync1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkLipSync1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkLipSync1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkLipSync1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkLipSync1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkLipSync1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkLipSync1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkLipSync1::Version() const
{
  return iCpProxy.Version();
}


