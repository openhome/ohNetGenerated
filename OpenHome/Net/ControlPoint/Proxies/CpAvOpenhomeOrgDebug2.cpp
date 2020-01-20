#include "CpAvOpenhomeOrgDebug2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetLogAvOpenhomeOrgDebug2 : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy, Brh& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug2& iService;
    Brh& iLog;
};

class SyncSendLogAvOpenhomeOrgDebug2 : public SyncProxyAction
{
public:
    SyncSendLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug2& iService;
};

class SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 : public SyncProxyAction
{
public:
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug2& iService;
};

class SyncGetRecentMSearchesAvOpenhomeOrgDebug2 : public SyncProxyAction
{
public:
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy, Brh& aJsonArray);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgDebug2& iService;
    Brh& iJsonArray;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetLogAvOpenhomeOrgDebug2

SyncGetLogAvOpenhomeOrgDebug2::SyncGetLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy, Brh& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}

// SyncSendLogAvOpenhomeOrgDebug2

SyncSendLogAvOpenhomeOrgDebug2::SyncSendLogAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy)
    : iService(aProxy)
{
}

void SyncSendLogAvOpenhomeOrgDebug2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendLog(aAsync);
}

// SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2

SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2::SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy)
    : iService(aProxy)
{
}

void SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendDeviceAnnouncements(aAsync);
}

// SyncGetRecentMSearchesAvOpenhomeOrgDebug2

SyncGetRecentMSearchesAvOpenhomeOrgDebug2::SyncGetRecentMSearchesAvOpenhomeOrgDebug2(CpProxyAvOpenhomeOrgDebug2& aProxy, Brh& aJsonArray)
    : iService(aProxy)
    , iJsonArray(aJsonArray)
{
}

void SyncGetRecentMSearchesAvOpenhomeOrgDebug2::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecentMSearches(aAsync, iJsonArray);
}


// CpProxyAvOpenhomeOrgDebug2

CpProxyAvOpenhomeOrgDebug2::CpProxyAvOpenhomeOrgDebug2(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Debug", 2, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);

    iActionSendLog = new Action("SendLog");
    param = new OpenHome::Net::ParameterString("Data");
    iActionSendLog->AddInputParameter(param);

    iActionSendDeviceAnnouncements = new Action("SendDeviceAnnouncements");

    iActionGetRecentMSearches = new Action("GetRecentMSearches");
    param = new OpenHome::Net::ParameterString("JsonArray");
    iActionGetRecentMSearches->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgDebug2::~CpProxyAvOpenhomeOrgDebug2()
{
    DestroyService();
    delete iActionGetLog;
    delete iActionSendLog;
    delete iActionSendDeviceAnnouncements;
    delete iActionGetRecentMSearches;
}

void CpProxyAvOpenhomeOrgDebug2::SyncGetLog(Brh& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug2 sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2::EndGetLog(IAsync& aAsync, Brh& aLog)
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

void CpProxyAvOpenhomeOrgDebug2::SyncSendLog(const Brx& aData)
{
    SyncSendLogAvOpenhomeOrgDebug2 sync(*this);
    BeginSendLog(aData, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2::BeginSendLog(const Brx& aData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSendLog, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSendLog->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aData));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2::EndSendLog(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDebug2::SyncSendDeviceAnnouncements()
{
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2 sync(*this);
    BeginSendDeviceAnnouncements(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2::BeginSendDeviceAnnouncements(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSendDeviceAnnouncements, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2::EndSendDeviceAnnouncements(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SendDeviceAnnouncements"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDebug2::SyncGetRecentMSearches(Brh& aJsonArray)
{
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2 sync(*this, aJsonArray);
    BeginGetRecentMSearches(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2::BeginGetRecentMSearches(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRecentMSearches, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecentMSearches->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2::EndGetRecentMSearches(IAsync& aAsync, Brh& aJsonArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRecentMSearches"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aJsonArray);
}


void CpProxyAvOpenhomeOrgDebug2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDebug2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDebug2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDebug2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDebug2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDebug2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDebug2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDebug2::Version() const
{
  return iCpProxy.Version();
}


