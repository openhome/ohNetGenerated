#include "CpLinnCoUkZoneReceiver1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetSenderLinnCoUkZoneReceiver1 : public SyncProxyAction
{
public:
    SyncGetSenderLinnCoUkZoneReceiver1(CpProxyLinnCoUkZoneReceiver1& aProxy, Brh& aSender);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkZoneReceiver1& iService;
    Brh& iSender;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetSenderLinnCoUkZoneReceiver1

SyncGetSenderLinnCoUkZoneReceiver1::SyncGetSenderLinnCoUkZoneReceiver1(CpProxyLinnCoUkZoneReceiver1& aProxy, Brh& aSender)
    : iService(aProxy)
    , iSender(aSender)
{
}

void SyncGetSenderLinnCoUkZoneReceiver1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSender(aAsync, iSender);
}


// CpProxyLinnCoUkZoneReceiver1

CpProxyLinnCoUkZoneReceiver1::CpProxyLinnCoUkZoneReceiver1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "ZoneReceiver", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetSender = new Action("GetSender");
    param = new OpenHome::Net::ParameterString("Sender");
    iActionGetSender->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZoneReceiver1::SenderPropertyChanged);
    iSender = new PropertyString("Sender", functor);
    AddProperty(iSender);
}

CpProxyLinnCoUkZoneReceiver1::~CpProxyLinnCoUkZoneReceiver1()
{
    DestroyService();
    delete iActionGetSender;
}

void CpProxyLinnCoUkZoneReceiver1::SyncGetSender(Brh& aSender)
{
    SyncGetSenderLinnCoUkZoneReceiver1 sync(*this, aSender);
    BeginGetSender(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZoneReceiver1::BeginGetSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZoneReceiver1::EndGetSender(IAsync& aAsync, Brh& aSender)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSender);
}

void CpProxyLinnCoUkZoneReceiver1::SetPropertySenderChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSenderChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkZoneReceiver1::PropertySender(Brhz& aSender) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSender.Set(iSender->Value());
}

void CpProxyLinnCoUkZoneReceiver1::SenderPropertyChanged()
{
    ReportEvent(iSenderChanged);
}


void CpProxyLinnCoUkZoneReceiver1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkZoneReceiver1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkZoneReceiver1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkZoneReceiver1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkZoneReceiver1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkZoneReceiver1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkZoneReceiver1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkZoneReceiver1::Version() const
{
  return iCpProxy.Version();
}


