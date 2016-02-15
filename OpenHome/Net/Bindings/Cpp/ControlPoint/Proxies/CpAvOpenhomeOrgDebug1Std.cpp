#include "CpAvOpenhomeOrgDebug1.h"
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


class SyncGetLogAvOpenhomeOrgDebug1Cpp : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug1Cpp(CpProxyAvOpenhomeOrgDebug1Cpp& aProxy, std::string& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetLogAvOpenhomeOrgDebug1Cpp() {}
private:
    CpProxyAvOpenhomeOrgDebug1Cpp& iService;
    std::string& iLog;
};

SyncGetLogAvOpenhomeOrgDebug1Cpp::SyncGetLogAvOpenhomeOrgDebug1Cpp(CpProxyAvOpenhomeOrgDebug1Cpp& aProxy, std::string& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}


CpProxyAvOpenhomeOrgDebug1Cpp::CpProxyAvOpenhomeOrgDebug1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Debug", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgDebug1Cpp::~CpProxyAvOpenhomeOrgDebug1Cpp()
{
    DestroyService();
    delete iActionGetLog;
}

void CpProxyAvOpenhomeOrgDebug1Cpp::SyncGetLog(std::string& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug1Cpp sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug1Cpp::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug1Cpp::EndGetLog(IAsync& aAsync, std::string& aLog)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aLog.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgDebug1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDebug1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDebug1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDebug1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDebug1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDebug1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDebug1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDebug1Cpp::Version() const
{
  return iCpProxy.Version();
}

