#include "CpAvOpenhomeOrgNetworkMonitor1.h"
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


class SyncNameAvOpenhomeOrgNetworkMonitor1Cpp : public SyncProxyAction
{
public:
    SyncNameAvOpenhomeOrgNetworkMonitor1Cpp(CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& aProxy, std::string& aName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNameAvOpenhomeOrgNetworkMonitor1Cpp() {}
private:
    CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& iService;
    std::string& iName;
};

SyncNameAvOpenhomeOrgNetworkMonitor1Cpp::SyncNameAvOpenhomeOrgNetworkMonitor1Cpp(CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& aProxy, std::string& aName)
    : iService(aProxy)
    , iName(aName)
{
}

void SyncNameAvOpenhomeOrgNetworkMonitor1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndName(aAsync, iName);
}


class SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp : public SyncProxyAction
{
public:
    SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp(CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& aProxy, uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp() {}
private:
    CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& iService;
    uint32_t& iSender;
    uint32_t& iReceiver;
    uint32_t& iResults;
};

SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp::SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp(CpProxyAvOpenhomeOrgNetworkMonitor1Cpp& aProxy, uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults)
    : iService(aProxy)
    , iSender(aSender)
    , iReceiver(aReceiver)
    , iResults(aResults)
{
}

void SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPorts(aAsync, iSender, iReceiver, iResults);
}


CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::CpProxyAvOpenhomeOrgNetworkMonitor1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::NamePropertyChanged);
    iName = new PropertyString("Name", functor);
    AddProperty(iName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SenderPropertyChanged);
    iSender = new PropertyUint("Sender", functor);
    AddProperty(iSender);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::ReceiverPropertyChanged);
    iReceiver = new PropertyUint("Receiver", functor);
    AddProperty(iReceiver);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::ResultsPropertyChanged);
    iResults = new PropertyUint("Results", functor);
    AddProperty(iResults);
}

CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::~CpProxyAvOpenhomeOrgNetworkMonitor1Cpp()
{
    DestroyService();
    delete iActionName;
    delete iActionPorts;
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SyncName(std::string& aName)
{
    SyncNameAvOpenhomeOrgNetworkMonitor1Cpp sync(*this, aName);
    BeginName(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::BeginName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::EndName(IAsync& aAsync, std::string& aName)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aName.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SyncPorts(uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults)
{
    SyncPortsAvOpenhomeOrgNetworkMonitor1Cpp sync(*this, aSender, aReceiver, aResults);
    BeginPorts(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::BeginPorts(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPorts, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionPorts->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::EndPorts(IAsync& aAsync, uint32_t& aSender, uint32_t& aReceiver, uint32_t& aResults)
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

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertyNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertySenderChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSenderChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertyReceiverChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iReceiverChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertyResultsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iResultsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::PropertyName(std::string& aName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iName->Value();
    aName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::PropertySender(uint32_t& aSender) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSender = iSender->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::PropertyReceiver(uint32_t& aReceiver) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aReceiver = iReceiver->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::PropertyResults(uint32_t& aResults) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aResults = iResults->Value();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::NamePropertyChanged()
{
    ReportEvent(iNameChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SenderPropertyChanged()
{
    ReportEvent(iSenderChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::ReceiverPropertyChanged()
{
    ReportEvent(iReceiverChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::ResultsPropertyChanged()
{
    ReportEvent(iResultsChanged);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgNetworkMonitor1Cpp::Version() const
{
  return iCpProxy.Version();
}

