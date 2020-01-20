#include "CpAvOpenhomeOrgDebug2.h"
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


class SyncGetLogAvOpenhomeOrgDebug2Cpp : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy, std::string& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetLogAvOpenhomeOrgDebug2Cpp() {}
private:
    CpProxyAvOpenhomeOrgDebug2Cpp& iService;
    std::string& iLog;
};

SyncGetLogAvOpenhomeOrgDebug2Cpp::SyncGetLogAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy, std::string& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}


class SyncSendLogAvOpenhomeOrgDebug2Cpp : public SyncProxyAction
{
public:
    SyncSendLogAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSendLogAvOpenhomeOrgDebug2Cpp() {}
private:
    CpProxyAvOpenhomeOrgDebug2Cpp& iService;
};

SyncSendLogAvOpenhomeOrgDebug2Cpp::SyncSendLogAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSendLogAvOpenhomeOrgDebug2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendLog(aAsync);
}


class SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp : public SyncProxyAction
{
public:
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp() {}
private:
    CpProxyAvOpenhomeOrgDebug2Cpp& iService;
};

SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp::SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendDeviceAnnouncements(aAsync);
}


class SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp : public SyncProxyAction
{
public:
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy, std::string& aJsonArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp() {}
private:
    CpProxyAvOpenhomeOrgDebug2Cpp& iService;
    std::string& iJsonArray;
};

SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp::SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp(CpProxyAvOpenhomeOrgDebug2Cpp& aProxy, std::string& aJsonArray)
    : iService(aProxy)
    , iJsonArray(aJsonArray)
{
}

void SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecentMSearches(aAsync, iJsonArray);
}


CpProxyAvOpenhomeOrgDebug2Cpp::CpProxyAvOpenhomeOrgDebug2Cpp(CpDeviceCpp& aDevice)
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

CpProxyAvOpenhomeOrgDebug2Cpp::~CpProxyAvOpenhomeOrgDebug2Cpp()
{
    DestroyService();
    delete iActionGetLog;
    delete iActionSendLog;
    delete iActionSendDeviceAnnouncements;
    delete iActionGetRecentMSearches;
}

void CpProxyAvOpenhomeOrgDebug2Cpp::SyncGetLog(std::string& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug2Cpp sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::EndGetLog(IAsync& aAsync, std::string& aLog)
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

void CpProxyAvOpenhomeOrgDebug2Cpp::SyncSendLog(const std::string& aData)
{
    SyncSendLogAvOpenhomeOrgDebug2Cpp sync(*this);
    BeginSendLog(aData, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::BeginSendLog(const std::string& aData, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSendLog, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSendLog->InputParameters();
    {
        Brn buf((const TByte*)aData.c_str(), (TUint)aData.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::EndSendLog(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDebug2Cpp::SyncSendDeviceAnnouncements()
{
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2Cpp sync(*this);
    BeginSendDeviceAnnouncements(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::BeginSendDeviceAnnouncements(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSendDeviceAnnouncements, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::EndSendDeviceAnnouncements(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgDebug2Cpp::SyncGetRecentMSearches(std::string& aJsonArray)
{
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2Cpp sync(*this, aJsonArray);
    BeginGetRecentMSearches(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::BeginGetRecentMSearches(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRecentMSearches, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecentMSearches->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::EndGetRecentMSearches(IAsync& aAsync, std::string& aJsonArray)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aJsonArray.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgDebug2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgDebug2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgDebug2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgDebug2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgDebug2Cpp::Version() const
{
  return iCpProxy.Version();
}

