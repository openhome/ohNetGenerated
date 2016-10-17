#include "CpAvOpenhomeOrgDebug1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetLogAvOpenhomeOrgDebug1 : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1& aProxy, Brh& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug1& iService;
    Brh& iLog;
};

class SyncSendLogAvOpenhomeOrgDebug1 : public SyncProxyAction
{
public:
    SyncSendLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetLogAvOpenhomeOrgDebug1

SyncGetLogAvOpenhomeOrgDebug1::SyncGetLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1& aProxy, Brh& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}

// SyncSendLogAvOpenhomeOrgDebug1

SyncSendLogAvOpenhomeOrgDebug1::SyncSendLogAvOpenhomeOrgDebug1(CpProxyAvOpenhomeOrgDebug1& aProxy)
    : iService(aProxy)
{
}

void SyncSendLogAvOpenhomeOrgDebug1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendLog(aAsync);
}


// CpProxyAvOpenhomeOrgDebug1

CpProxyAvOpenhomeOrgDebug1::CpProxyAvOpenhomeOrgDebug1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Debug", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);

    iActionSendLog = new Action("SendLog");
    param = new OpenHome::Net::ParameterString("Data");
    iActionSendLog->AddInputParameter(param);
}

CpProxyAvOpenhomeOrgDebug1::~CpProxyAvOpenhomeOrgDebug1()
{
    DestroyService();
    delete iActionGetLog;
    delete iActionSendLog;
}

void CpProxyAvOpenhomeOrgDebug1::SyncGetLog(Brh& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug1 sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug1::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug1::EndGetLog(IAsync& aAsync, Brh& aLog)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetLog"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aLog);
}

void CpProxyAvOpenhomeOrgDebug1::SyncSendLog(const Brx& aData)
{
    SyncSendLogAvOpenhomeOrgDebug1 sync(*this);
    BeginSendLog(aData, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug1::BeginSendLog(const Brx& aData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSendLog, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSendLog->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aData));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug1::EndSendLog(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SendLog"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}


void CpProxyAvOpenhomeOrgDebug1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDebug1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDebug1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDebug1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDebug1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDebug1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDebug1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDebug1::Version() const
{
  return iCpProxy.Version();
}


