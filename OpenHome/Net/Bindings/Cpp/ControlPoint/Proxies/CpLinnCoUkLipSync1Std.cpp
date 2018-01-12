#include "CpLinnCoUkLipSync1.h"
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


class SyncSetDelayLinnCoUkLipSync1Cpp : public SyncProxyAction
{
public:
    SyncSetDelayLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetDelayLinnCoUkLipSync1Cpp() {}
private:
    CpProxyLinnCoUkLipSync1Cpp& iService;
};

SyncSetDelayLinnCoUkLipSync1Cpp::SyncSetDelayLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetDelayLinnCoUkLipSync1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetDelay(aAsync);
}


class SyncDelayLinnCoUkLipSync1Cpp : public SyncProxyAction
{
public:
    SyncDelayLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aDelay);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayLinnCoUkLipSync1Cpp() {}
private:
    CpProxyLinnCoUkLipSync1Cpp& iService;
    uint32_t& iDelay;
};

SyncDelayLinnCoUkLipSync1Cpp::SyncDelayLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aDelay)
    : iService(aProxy)
    , iDelay(aDelay)
{
}

void SyncDelayLinnCoUkLipSync1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelay(aAsync, iDelay);
}


class SyncDelayMinimumLinnCoUkLipSync1Cpp : public SyncProxyAction
{
public:
    SyncDelayMinimumLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aMin);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayMinimumLinnCoUkLipSync1Cpp() {}
private:
    CpProxyLinnCoUkLipSync1Cpp& iService;
    uint32_t& iMin;
};

SyncDelayMinimumLinnCoUkLipSync1Cpp::SyncDelayMinimumLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aMin)
    : iService(aProxy)
    , iMin(aMin)
{
}

void SyncDelayMinimumLinnCoUkLipSync1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMinimum(aAsync, iMin);
}


class SyncDelayMaximumLinnCoUkLipSync1Cpp : public SyncProxyAction
{
public:
    SyncDelayMaximumLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDelayMaximumLinnCoUkLipSync1Cpp() {}
private:
    CpProxyLinnCoUkLipSync1Cpp& iService;
    uint32_t& iMax;
};

SyncDelayMaximumLinnCoUkLipSync1Cpp::SyncDelayMaximumLinnCoUkLipSync1Cpp(CpProxyLinnCoUkLipSync1Cpp& aProxy, uint32_t& aMax)
    : iService(aProxy)
    , iMax(aMax)
{
}

void SyncDelayMaximumLinnCoUkLipSync1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDelayMaximum(aAsync, iMax);
}


CpProxyLinnCoUkLipSync1Cpp::CpProxyLinnCoUkLipSync1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1Cpp::DelayPropertyChanged);
    iDelay = new PropertyUint("Delay", functor);
    AddProperty(iDelay);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1Cpp::DelayMinimumPropertyChanged);
    iDelayMinimum = new PropertyUint("DelayMinimum", functor);
    AddProperty(iDelayMinimum);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkLipSync1Cpp::DelayMaximumPropertyChanged);
    iDelayMaximum = new PropertyUint("DelayMaximum", functor);
    AddProperty(iDelayMaximum);
}

CpProxyLinnCoUkLipSync1Cpp::~CpProxyLinnCoUkLipSync1Cpp()
{
    DestroyService();
    delete iActionSetDelay;
    delete iActionDelay;
    delete iActionDelayMinimum;
    delete iActionDelayMaximum;
}

void CpProxyLinnCoUkLipSync1Cpp::SyncSetDelay(uint32_t aDelay)
{
    SyncSetDelayLinnCoUkLipSync1Cpp sync(*this);
    BeginSetDelay(aDelay, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1Cpp::BeginSetDelay(uint32_t aDelay, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetDelay, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetDelay->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aDelay));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1Cpp::EndSetDelay(IAsync& aAsync)
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

void CpProxyLinnCoUkLipSync1Cpp::SyncDelay(uint32_t& aDelay)
{
    SyncDelayLinnCoUkLipSync1Cpp sync(*this, aDelay);
    BeginDelay(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1Cpp::BeginDelay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelay, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelay->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1Cpp::EndDelay(IAsync& aAsync, uint32_t& aDelay)
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

void CpProxyLinnCoUkLipSync1Cpp::SyncDelayMinimum(uint32_t& aMin)
{
    SyncDelayMinimumLinnCoUkLipSync1Cpp sync(*this, aMin);
    BeginDelayMinimum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1Cpp::BeginDelayMinimum(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelayMinimum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMinimum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1Cpp::EndDelayMinimum(IAsync& aAsync, uint32_t& aMin)
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

void CpProxyLinnCoUkLipSync1Cpp::SyncDelayMaximum(uint32_t& aMax)
{
    SyncDelayMaximumLinnCoUkLipSync1Cpp sync(*this, aMax);
    BeginDelayMaximum(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkLipSync1Cpp::BeginDelayMaximum(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDelayMaximum, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDelayMaximum->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkLipSync1Cpp::EndDelayMaximum(IAsync& aAsync, uint32_t& aMax)
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

void CpProxyLinnCoUkLipSync1Cpp::SetPropertyDelayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1Cpp::SetPropertyDelayMinimumChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayMinimumChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1Cpp::SetPropertyDelayMaximumChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDelayMaximumChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkLipSync1Cpp::PropertyDelay(uint32_t& aDelay) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelay = iDelay->Value();
}

void CpProxyLinnCoUkLipSync1Cpp::PropertyDelayMinimum(uint32_t& aDelayMinimum) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelayMinimum = iDelayMinimum->Value();
}

void CpProxyLinnCoUkLipSync1Cpp::PropertyDelayMaximum(uint32_t& aDelayMaximum) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDelayMaximum = iDelayMaximum->Value();
}

void CpProxyLinnCoUkLipSync1Cpp::DelayPropertyChanged()
{
    ReportEvent(iDelayChanged);
}

void CpProxyLinnCoUkLipSync1Cpp::DelayMinimumPropertyChanged()
{
    ReportEvent(iDelayMinimumChanged);
}

void CpProxyLinnCoUkLipSync1Cpp::DelayMaximumPropertyChanged()
{
    ReportEvent(iDelayMaximumChanged);
}

void CpProxyLinnCoUkLipSync1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkLipSync1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkLipSync1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkLipSync1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkLipSync1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkLipSync1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkLipSync1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkLipSync1Cpp::Version() const
{
  return iCpProxy.Version();
}

