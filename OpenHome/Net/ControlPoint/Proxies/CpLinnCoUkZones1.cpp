#include "CpLinnCoUkZones1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetInputsLinnCoUkZones1 : public SyncProxyAction
{
public:
    SyncGetInputsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aInputs);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkZones1& iService;
    Brh& iInputs;
};

class SyncGetOutputsLinnCoUkZones1 : public SyncProxyAction
{
public:
    SyncGetOutputsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aOutputs);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkZones1& iService;
    Brh& iOutputs;
};

class SyncGetMappingsLinnCoUkZones1 : public SyncProxyAction
{
public:
    SyncGetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aMappings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkZones1& iService;
    Brh& iMappings;
};

class SyncSetMappingsLinnCoUkZones1 : public SyncProxyAction
{
public:
    SyncSetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkZones1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetInputsLinnCoUkZones1

SyncGetInputsLinnCoUkZones1::SyncGetInputsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aInputs)
    : iService(aProxy)
    , iInputs(aInputs)
{
}

void SyncGetInputsLinnCoUkZones1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInputs(aAsync, iInputs);
}

// SyncGetOutputsLinnCoUkZones1

SyncGetOutputsLinnCoUkZones1::SyncGetOutputsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aOutputs)
    : iService(aProxy)
    , iOutputs(aOutputs)
{
}

void SyncGetOutputsLinnCoUkZones1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutputs(aAsync, iOutputs);
}

// SyncGetMappingsLinnCoUkZones1

SyncGetMappingsLinnCoUkZones1::SyncGetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy, Brh& aMappings)
    : iService(aProxy)
    , iMappings(aMappings)
{
}

void SyncGetMappingsLinnCoUkZones1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMappings(aAsync, iMappings);
}

// SyncSetMappingsLinnCoUkZones1

SyncSetMappingsLinnCoUkZones1::SyncSetMappingsLinnCoUkZones1(CpProxyLinnCoUkZones1& aProxy)
    : iService(aProxy)
{
}

void SyncSetMappingsLinnCoUkZones1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMappings(aAsync);
}


// CpProxyLinnCoUkZones1

CpProxyLinnCoUkZones1::CpProxyLinnCoUkZones1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Zones", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetInputs = new Action("GetInputs");
    param = new OpenHome::Net::ParameterString("Inputs");
    iActionGetInputs->AddOutputParameter(param);

    iActionGetOutputs = new Action("GetOutputs");
    param = new OpenHome::Net::ParameterString("Outputs");
    iActionGetOutputs->AddOutputParameter(param);

    iActionGetMappings = new Action("GetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionGetMappings->AddOutputParameter(param);

    iActionSetMappings = new Action("SetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionSetMappings->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1::InputsPropertyChanged);
    iInputs = new PropertyString("Inputs", functor);
    AddProperty(iInputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1::OutputsPropertyChanged);
    iOutputs = new PropertyString("Outputs", functor);
    AddProperty(iOutputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1::MappingsPropertyChanged);
    iMappings = new PropertyString("Mappings", functor);
    AddProperty(iMappings);
}

CpProxyLinnCoUkZones1::~CpProxyLinnCoUkZones1()
{
    DestroyService();
    delete iActionGetInputs;
    delete iActionGetOutputs;
    delete iActionGetMappings;
    delete iActionSetMappings;
}

void CpProxyLinnCoUkZones1::SyncGetInputs(Brh& aInputs)
{
    SyncGetInputsLinnCoUkZones1 sync(*this, aInputs);
    BeginGetInputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1::BeginGetInputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetInputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1::EndGetInputs(IAsync& aAsync, Brh& aInputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetInputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInputs);
}

void CpProxyLinnCoUkZones1::SyncGetOutputs(Brh& aOutputs)
{
    SyncGetOutputsLinnCoUkZones1 sync(*this, aOutputs);
    BeginGetOutputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1::BeginGetOutputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetOutputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1::EndGetOutputs(IAsync& aAsync, Brh& aOutputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetOutputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aOutputs);
}

void CpProxyLinnCoUkZones1::SyncGetMappings(Brh& aMappings)
{
    SyncGetMappingsLinnCoUkZones1 sync(*this, aMappings);
    BeginGetMappings(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1::BeginGetMappings(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetMappings, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMappings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1::EndGetMappings(IAsync& aAsync, Brh& aMappings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMappings);
}

void CpProxyLinnCoUkZones1::SyncSetMappings(const Brx& aMappings)
{
    SyncSetMappingsLinnCoUkZones1 sync(*this);
    BeginSetMappings(aMappings, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1::BeginSetMappings(const Brx& aMappings, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMappings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMappings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMappings));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1::EndSetMappings(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkZones1::SetPropertyInputsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iInputsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1::SetPropertyOutputsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iOutputsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1::SetPropertyMappingsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMappingsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZones1::PropertyInputs(Brhz& aInputs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aInputs.Set(iInputs->Value());
}

void CpProxyLinnCoUkZones1::PropertyOutputs(Brhz& aOutputs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aOutputs.Set(iOutputs->Value());
}

void CpProxyLinnCoUkZones1::PropertyMappings(Brhz& aMappings) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMappings.Set(iMappings->Value());
}

void CpProxyLinnCoUkZones1::InputsPropertyChanged()
{
    ReportEvent(iInputsChanged);
}

void CpProxyLinnCoUkZones1::OutputsPropertyChanged()
{
    ReportEvent(iOutputsChanged);
}

void CpProxyLinnCoUkZones1::MappingsPropertyChanged()
{
    ReportEvent(iMappingsChanged);
}


void CpProxyLinnCoUkZones1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkZones1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkZones1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkZones1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkZones1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkZones1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkZones1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkZones1::Version() const
{
  return iCpProxy.Version();
}


