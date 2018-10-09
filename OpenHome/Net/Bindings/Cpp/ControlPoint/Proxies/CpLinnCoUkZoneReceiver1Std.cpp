#include "CpLinnCoUkZoneReceiver1.h"
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


class SyncGetSenderLinnCoUkZoneReceiver1Cpp : public SyncProxyAction
{
public:
    SyncGetSenderLinnCoUkZoneReceiver1Cpp(CpProxyLinnCoUkZoneReceiver1Cpp& aProxy, std::string& aSender);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSenderLinnCoUkZoneReceiver1Cpp() {}
private:
    CpProxyLinnCoUkZoneReceiver1Cpp& iService;
    std::string& iSender;
};

SyncGetSenderLinnCoUkZoneReceiver1Cpp::SyncGetSenderLinnCoUkZoneReceiver1Cpp(CpProxyLinnCoUkZoneReceiver1Cpp& aProxy, std::string& aSender)
    : iService(aProxy)
    , iSender(aSender)
{
}

void SyncGetSenderLinnCoUkZoneReceiver1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSender(aAsync, iSender);
}


CpProxyLinnCoUkZoneReceiver1Cpp::CpProxyLinnCoUkZoneReceiver1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "ZoneReceiver", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetSender = new Action("GetSender");
    param = new OpenHome::Net::ParameterString("Sender");
    iActionGetSender->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZoneReceiver1Cpp::SenderPropertyChanged);
    iSender = new PropertyString("Sender", functor);
    AddProperty(iSender);
}

CpProxyLinnCoUkZoneReceiver1Cpp::~CpProxyLinnCoUkZoneReceiver1Cpp()
{
    DestroyService();
    delete iActionGetSender;
}

void CpProxyLinnCoUkZoneReceiver1Cpp::SyncGetSender(std::string& aSender)
{
    SyncGetSenderLinnCoUkZoneReceiver1Cpp sync(*this, aSender);
    BeginGetSender(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZoneReceiver1Cpp::BeginGetSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZoneReceiver1Cpp::EndGetSender(IAsync& aAsync, std::string& aSender)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSender.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkZoneReceiver1Cpp::SetPropertySenderChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSenderChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZoneReceiver1Cpp::PropertySender(std::string& aSender) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSender->Value();
    aSender.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkZoneReceiver1Cpp::SenderPropertyChanged()
{
    ReportEvent(iSenderChanged);
}

void CpProxyLinnCoUkZoneReceiver1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkZoneReceiver1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkZoneReceiver1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkZoneReceiver1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkZoneReceiver1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkZoneReceiver1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkZoneReceiver1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkZoneReceiver1Cpp::Version() const
{
  return iCpProxy.Version();
}

