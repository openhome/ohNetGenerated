#include "CpLinnCoUkConfiguration1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncConfigurationXmlLinnCoUkConfiguration1 : public SyncProxyAction
{
public:
    SyncConfigurationXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy, Brh& aaConfigurationXml);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkConfiguration1& iService;
    Brh& iaConfigurationXml;
};

class SyncParameterXmlLinnCoUkConfiguration1 : public SyncProxyAction
{
public:
    SyncParameterXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy, Brh& aaParameterXml);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkConfiguration1& iService;
    Brh& iaParameterXml;
};

class SyncSetParameterLinnCoUkConfiguration1 : public SyncProxyAction
{
public:
    SyncSetParameterLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkConfiguration1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncConfigurationXmlLinnCoUkConfiguration1

SyncConfigurationXmlLinnCoUkConfiguration1::SyncConfigurationXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy, Brh& aaConfigurationXml)
    : iService(aProxy)
    , iaConfigurationXml(aaConfigurationXml)
{
}

void SyncConfigurationXmlLinnCoUkConfiguration1::CompleteRequest(IAsync& aAsync)
{
    iService.EndConfigurationXml(aAsync, iaConfigurationXml);
}

// SyncParameterXmlLinnCoUkConfiguration1

SyncParameterXmlLinnCoUkConfiguration1::SyncParameterXmlLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy, Brh& aaParameterXml)
    : iService(aProxy)
    , iaParameterXml(aaParameterXml)
{
}

void SyncParameterXmlLinnCoUkConfiguration1::CompleteRequest(IAsync& aAsync)
{
    iService.EndParameterXml(aAsync, iaParameterXml);
}

// SyncSetParameterLinnCoUkConfiguration1

SyncSetParameterLinnCoUkConfiguration1::SyncSetParameterLinnCoUkConfiguration1(CpProxyLinnCoUkConfiguration1& aProxy)
    : iService(aProxy)
{
}

void SyncSetParameterLinnCoUkConfiguration1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetParameter(aAsync);
}


// CpProxyLinnCoUkConfiguration1

CpProxyLinnCoUkConfiguration1::CpProxyLinnCoUkConfiguration1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Configuration", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionConfigurationXml = new Action("ConfigurationXml");
    param = new OpenHome::Net::ParameterString("aConfigurationXml");
    iActionConfigurationXml->AddOutputParameter(param);

    iActionParameterXml = new Action("ParameterXml");
    param = new OpenHome::Net::ParameterString("aParameterXml");
    iActionParameterXml->AddOutputParameter(param);

    iActionSetParameter = new Action("SetParameter");
    param = new OpenHome::Net::ParameterString("aTarget");
    iActionSetParameter->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aName");
    iActionSetParameter->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aValue");
    iActionSetParameter->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkConfiguration1::ConfigurationXmlPropertyChanged);
    iConfigurationXml = new PropertyString("ConfigurationXml", functor);
    AddProperty(iConfigurationXml);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkConfiguration1::ParameterXmlPropertyChanged);
    iParameterXml = new PropertyString("ParameterXml", functor);
    AddProperty(iParameterXml);
}

CpProxyLinnCoUkConfiguration1::~CpProxyLinnCoUkConfiguration1()
{
    DestroyService();
    delete iActionConfigurationXml;
    delete iActionParameterXml;
    delete iActionSetParameter;
}

void CpProxyLinnCoUkConfiguration1::SyncConfigurationXml(Brh& aaConfigurationXml)
{
    SyncConfigurationXmlLinnCoUkConfiguration1 sync(*this, aaConfigurationXml);
    BeginConfigurationXml(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1::BeginConfigurationXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConfigurationXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConfigurationXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1::EndConfigurationXml(IAsync& aAsync, Brh& aaConfigurationXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ConfigurationXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaConfigurationXml);
}

void CpProxyLinnCoUkConfiguration1::SyncParameterXml(Brh& aaParameterXml)
{
    SyncParameterXmlLinnCoUkConfiguration1 sync(*this, aaParameterXml);
    BeginParameterXml(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1::BeginParameterXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionParameterXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionParameterXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1::EndParameterXml(IAsync& aAsync, Brh& aaParameterXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ParameterXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaParameterXml);
}

void CpProxyLinnCoUkConfiguration1::SyncSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue)
{
    SyncSetParameterLinnCoUkConfiguration1 sync(*this);
    BeginSetParameter(aaTarget, aaName, aaValue, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkConfiguration1::BeginSetParameter(const Brx& aaTarget, const Brx& aaName, const Brx& aaValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetParameter, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetParameter->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaTarget));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaName));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkConfiguration1::EndSetParameter(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetParameter"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkConfiguration1::SetPropertyConfigurationXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConfigurationXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkConfiguration1::SetPropertyParameterXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iParameterXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkConfiguration1::PropertyConfigurationXml(Brhz& aConfigurationXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConfigurationXml.Set(iConfigurationXml->Value());
}

void CpProxyLinnCoUkConfiguration1::PropertyParameterXml(Brhz& aParameterXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aParameterXml.Set(iParameterXml->Value());
}

void CpProxyLinnCoUkConfiguration1::ConfigurationXmlPropertyChanged()
{
    ReportEvent(iConfigurationXmlChanged);
}

void CpProxyLinnCoUkConfiguration1::ParameterXmlPropertyChanged()
{
    ReportEvent(iParameterXmlChanged);
}


void CpProxyLinnCoUkConfiguration1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkConfiguration1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkConfiguration1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkConfiguration1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkConfiguration1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkConfiguration1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkConfiguration1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkConfiguration1::Version() const
{
  return iCpProxy.Version();
}


