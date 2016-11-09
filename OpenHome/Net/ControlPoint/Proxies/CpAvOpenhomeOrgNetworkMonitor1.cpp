#include "CpAvOpenhomeOrgNetworkMonitor1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncNameAvOpenhomeOrgNetworkMonitor1 : public SyncProxyAction
{
public:
    SyncNameAvOpenhomeOrgNetworkMonitor1(CpProxyAvOpenhomeOrgNetworkMonitor1& aProxy, Brh& aName);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgNetworkMonitor1& iService;
    Brh& iName;
};

class SyncPortsAvOpenhomeOrgNetworkMonitor1 : public SyncProxyAction
{
public:
    SyncPortsAvOpenhomeOrgNetworkMonitor1(CpProxyAvOpenhomeOrgNetworkMonitor1& aProxy, TUint& aSender, TUint& aReceiver, TUint& aResults);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgNetworkMonitor1& iService;
    TUint& iSender;
    TUint& iReceiver;
    TUint& iResults;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncNameAvOpenhomeOrgNetworkMonitor1

SyncNameAvOpenhomeOrgNetworkMonitor1::SyncNameAvOpenhomeOrgNetworkMonitor1(CpProxyAvOpenhomeOrgNetworkMonitor1& aProxy, Brh& aName)
    : iService(aProxy)
    , iName(aName)
{
}

void SyncNameAvOpenhomeOrgNetworkMonitor1::CompleteRequest(IAsync& aAsync)
{
    iService.EndName(aAsync, iName);
}

// SyncPortsAvOpenhomeOrgNetworkMonitor1

SyncPortsAvOpenhomeOrgNetworkMonitor1::SyncPortsAvOpenhomeOrgNetworkMonitor1(CpProxyAvOpenhomeOrgNetworkMonitor1& aProxy, TUint& aSender, TUint& aReceiver, TUint& aResults)
    : iService(aProxy)
    , iSender(aSender)
    , iReceiver(aReceiver)
    , iResults(aResults)
{
}

void SyncPortsAvOpenhomeOrgNetworkMonitor1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPorts(aAsync, iSender, iReceiver, iResults);
}


// CpProxyAvOpenhomeOrgNetworkMonitor1

CpProxyAvOpenhomeOrgNetworkMonitor1::CpProxyAvOpenhomeOrgNetworkMonitor1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "NetworkMonitor", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionName = new Action("Name");
    param = new OpenHome::Net::ParameterString("Name");
    iActionName->AddOutputParameter(param);

    iActionPorts = new Action("Ports");
    param = new OpenHome::Net::ParameterUint("Sender");
    iActionPorts->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Receiver");
    iActionPorts->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("Results");
    iActionPorts->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1::NamePropertyChanged);
    iName = new PropertyString("Name", functor);
    AddProperty(iName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1::SenderPropertyChanged);
    iSender = new PropertyUint("Sender", functor);
    AddProperty(iSender);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1::ReceiverPropertyChanged);
    iReceiver = new PropertyUint("Receiver", functor);
    AddProperty(iReceiver);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1::ResultsPropertyChanged);
    iResults = new PropertyUint("Results", functor);
    AddProperty(iResults);
}

CpProxyAvOpenhomeOrgNetworkMonitor1::~CpProxyAvOpenhomeOrgNetworkMonitor1()
{
    DestroyService();
    delete iActionName;
    delete iActionPorts;
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SyncName(Brh& aName)
{
    SyncNameAvOpenhomeOrgNetworkMonitor1 sync(*this, aName);
    BeginName(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::BeginName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::EndName(IAsync& aAsync, Brh& aName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Name"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SyncPorts(TUint& aSender, TUint& aReceiver, TUint& aResults)
{
    SyncPortsAvOpenhomeOrgNetworkMonitor1 sync(*this, aSender, aReceiver, aResults);
    BeginPorts(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::BeginPorts(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPorts, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPorts->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::EndPorts(IAsync& aAsync, TUint& aSender, TUint& aReceiver, TUint& aResults)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Ports"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSender = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aReceiver = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aResults = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertyNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertySenderChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSenderChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertyReceiverChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iReceiverChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertyResultsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iResultsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::PropertyName(Brhz& aName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aName.Set(iName->Value());
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::PropertySender(TUint& aSender) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSender = iSender->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::PropertyReceiver(TUint& aReceiver) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aReceiver = iReceiver->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::PropertyResults(TUint& aResults) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aResults = iResults->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::NamePropertyChanged()
{
    ReportEvent(iNameChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SenderPropertyChanged()
{
    ReportEvent(iSenderChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::ReceiverPropertyChanged()
{
    ReportEvent(iReceiverChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::ResultsPropertyChanged()
{
    ReportEvent(iResultsChanged);
}


void CpProxyAvOpenhomeOrgNetworkMonitor1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgNetworkMonitor1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgNetworkMonitor1::Version() const
{
  return iCpProxy.Version();
}


