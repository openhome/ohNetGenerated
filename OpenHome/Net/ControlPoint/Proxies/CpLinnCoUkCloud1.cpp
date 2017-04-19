#include "CpLinnCoUkCloud1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetChallengeResponseLinnCoUkCloud1 : public SyncProxyAction
{
public:
    SyncGetChallengeResponseLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy, Brh& aResponse);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud1& iService;
    Brh& iResponse;
};

class SyncSetControlEnabledLinnCoUkCloud1 : public SyncProxyAction
{
public:
    SyncSetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud1& iService;
};

class SyncGetControlEnabledLinnCoUkCloud1 : public SyncProxyAction
{
public:
    SyncGetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy, TBool& aEnabled);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkCloud1& iService;
    TBool& iEnabled;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetChallengeResponseLinnCoUkCloud1

SyncGetChallengeResponseLinnCoUkCloud1::SyncGetChallengeResponseLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy, Brh& aResponse)
    : iService(aProxy)
    , iResponse(aResponse)
{
}

void SyncGetChallengeResponseLinnCoUkCloud1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChallengeResponse(aAsync, iResponse);
}

// SyncSetControlEnabledLinnCoUkCloud1

SyncSetControlEnabledLinnCoUkCloud1::SyncSetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy)
    : iService(aProxy)
{
}

void SyncSetControlEnabledLinnCoUkCloud1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetControlEnabled(aAsync);
}

// SyncGetControlEnabledLinnCoUkCloud1

SyncGetControlEnabledLinnCoUkCloud1::SyncGetControlEnabledLinnCoUkCloud1(CpProxyLinnCoUkCloud1& aProxy, TBool& aEnabled)
    : iService(aProxy)
    , iEnabled(aEnabled)
{
}

void SyncGetControlEnabledLinnCoUkCloud1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetControlEnabled(aAsync, iEnabled);
}


// CpProxyLinnCoUkCloud1

CpProxyLinnCoUkCloud1::CpProxyLinnCoUkCloud1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Cloud", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetChallengeResponse = new Action("GetChallengeResponse");
    param = new OpenHome::Net::ParameterString("Challenge");
    iActionGetChallengeResponse->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Response");
    iActionGetChallengeResponse->AddOutputParameter(param);

    iActionSetControlEnabled = new Action("SetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetControlEnabled->AddInputParameter(param);

    iActionGetControlEnabled = new Action("GetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGetControlEnabled->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1::ControlEnabledPropertyChanged);
    iControlEnabled = new PropertyBool("ControlEnabled", functor);
    AddProperty(iControlEnabled);
}

CpProxyLinnCoUkCloud1::~CpProxyLinnCoUkCloud1()
{
    DestroyService();
    delete iActionGetChallengeResponse;
    delete iActionSetControlEnabled;
    delete iActionGetControlEnabled;
}

void CpProxyLinnCoUkCloud1::SyncGetChallengeResponse(const Brx& aChallenge, Brh& aResponse)
{
    SyncGetChallengeResponseLinnCoUkCloud1 sync(*this, aResponse);
    BeginGetChallengeResponse(aChallenge, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1::BeginGetChallengeResponse(const Brx& aChallenge, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChallengeResponse, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetChallengeResponse->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChallenge));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChallengeResponse->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1::EndGetChallengeResponse(IAsync& aAsync, Brh& aResponse)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetChallengeResponse"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aResponse);
}

void CpProxyLinnCoUkCloud1::SyncSetControlEnabled(TBool aEnabled)
{
    SyncSetControlEnabledLinnCoUkCloud1 sync(*this);
    BeginSetControlEnabled(aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1::BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetControlEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetControlEnabled->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1::EndSetControlEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1::SyncGetControlEnabled(TBool& aEnabled)
{
    SyncGetControlEnabledLinnCoUkCloud1 sync(*this, aEnabled);
    BeginGetControlEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1::BeginGetControlEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetControlEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetControlEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1::EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1::SetPropertyControlEnabledChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iControlEnabledChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1::PropertyControlEnabled(TBool& aControlEnabled) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aControlEnabled = iControlEnabled->Value();
}

void CpProxyLinnCoUkCloud1::ControlEnabledPropertyChanged()
{
    ReportEvent(iControlEnabledChanged);
}


void CpProxyLinnCoUkCloud1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkCloud1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkCloud1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkCloud1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkCloud1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkCloud1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkCloud1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkCloud1::Version() const
{
  return iCpProxy.Version();
}


