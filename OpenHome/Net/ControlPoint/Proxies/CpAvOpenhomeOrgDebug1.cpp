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


// CpProxyAvOpenhomeOrgDebug1

CpProxyAvOpenhomeOrgDebug1::CpProxyAvOpenhomeOrgDebug1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Debug", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgDebug1::~CpProxyAvOpenhomeOrgDebug1()
{
    DestroyService();
    delete iActionGetLog;
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


