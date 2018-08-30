#include "CpAvOpenhomeOrgConfigApp1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetKeysAvOpenhomeOrgConfigApp1 : public SyncProxyAction
{
public:
    SyncGetKeysAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy, Brh& aKeys);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgConfigApp1& iService;
    Brh& iKeys;
};

class SyncSetValueAvOpenhomeOrgConfigApp1 : public SyncProxyAction
{
public:
    SyncSetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgConfigApp1& iService;
};

class SyncGetValueAvOpenhomeOrgConfigApp1 : public SyncProxyAction
{
public:
    SyncGetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgConfigApp1& iService;
    Brh& iValue;
};

class SyncResetAllAvOpenhomeOrgConfigApp1 : public SyncProxyAction
{
public:
    SyncResetAllAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgConfigApp1& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetKeysAvOpenhomeOrgConfigApp1

SyncGetKeysAvOpenhomeOrgConfigApp1::SyncGetKeysAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy, Brh& aKeys)
    : iService(aProxy)
    , iKeys(aKeys)
{
}

void SyncGetKeysAvOpenhomeOrgConfigApp1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetKeys(aAsync, iKeys);
}

// SyncSetValueAvOpenhomeOrgConfigApp1

SyncSetValueAvOpenhomeOrgConfigApp1::SyncSetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy)
    : iService(aProxy)
{
}

void SyncSetValueAvOpenhomeOrgConfigApp1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetValue(aAsync);
}

// SyncGetValueAvOpenhomeOrgConfigApp1

SyncGetValueAvOpenhomeOrgConfigApp1::SyncGetValueAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncGetValueAvOpenhomeOrgConfigApp1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetValue(aAsync, iValue);
}

// SyncResetAllAvOpenhomeOrgConfigApp1

SyncResetAllAvOpenhomeOrgConfigApp1::SyncResetAllAvOpenhomeOrgConfigApp1(CpProxyAvOpenhomeOrgConfigApp1& aProxy)
    : iService(aProxy)
{
}

void SyncResetAllAvOpenhomeOrgConfigApp1::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetAll(aAsync);
}


// CpProxyAvOpenhomeOrgConfigApp1

CpProxyAvOpenhomeOrgConfigApp1::CpProxyAvOpenhomeOrgConfigApp1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "ConfigApp", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionGetKeys = new Action("GetKeys");
    param = new OpenHome::Net::ParameterString("Keys");
    iActionGetKeys->AddOutputParameter(param);

    iActionSetValue = new Action("SetValue");
    param = new OpenHome::Net::ParameterString("Key");
    iActionSetValue->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Value");
    iActionSetValue->AddInputParameter(param);

    iActionGetValue = new Action("GetValue");
    param = new OpenHome::Net::ParameterString("Key");
    iActionGetValue->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Value");
    iActionGetValue->AddOutputParameter(param);

    iActionResetAll = new Action("ResetAll");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgConfigApp1::KeysPropertyChanged);
    iKeys = new PropertyString("Keys", functor);
    AddProperty(iKeys);
}

CpProxyAvOpenhomeOrgConfigApp1::~CpProxyAvOpenhomeOrgConfigApp1()
{
    DestroyService();
    delete iActionGetKeys;
    delete iActionSetValue;
    delete iActionGetValue;
    delete iActionResetAll;
}

void CpProxyAvOpenhomeOrgConfigApp1::SyncGetKeys(Brh& aKeys)
{
    SyncGetKeysAvOpenhomeOrgConfigApp1 sync(*this, aKeys);
    BeginGetKeys(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1::BeginGetKeys(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetKeys, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetKeys->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1::EndGetKeys(IAsync& aAsync, Brh& aKeys)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetKeys"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aKeys);
}

void CpProxyAvOpenhomeOrgConfigApp1::SyncSetValue(const Brx& aKey, const Brx& aValue)
{
    SyncSetValueAvOpenhomeOrgConfigApp1 sync(*this);
    BeginSetValue(aKey, aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1::BeginSetValue(const Brx& aKey, const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetValue->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1::EndSetValue(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetValue"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgConfigApp1::SyncGetValue(const Brx& aKey, Brh& aValue)
{
    SyncGetValueAvOpenhomeOrgConfigApp1 sync(*this, aValue);
    BeginGetValue(aKey, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1::BeginGetValue(const Brx& aKey, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetValue->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetValue->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1::EndGetValue(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetValue"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgConfigApp1::SyncResetAll()
{
    SyncResetAllAvOpenhomeOrgConfigApp1 sync(*this);
    BeginResetAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1::BeginResetAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionResetAll, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1::EndResetAll(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ResetAll"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgConfigApp1::SetPropertyKeysChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iKeysChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgConfigApp1::PropertyKeys(Brhz& aKeys) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aKeys.Set(iKeys->Value());
}

void CpProxyAvOpenhomeOrgConfigApp1::KeysPropertyChanged()
{
    ReportEvent(iKeysChanged);
}


void CpProxyAvOpenhomeOrgConfigApp1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgConfigApp1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgConfigApp1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgConfigApp1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgConfigApp1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgConfigApp1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgConfigApp1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgConfigApp1::Version() const
{
  return iCpProxy.Version();
}


