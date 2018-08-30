#include "CpAvOpenhomeOrgConfigApp1.h"
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


class SyncGetKeysAvOpenhomeOrgConfigApp1Cpp : public SyncProxyAction
{
public:
    SyncGetKeysAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy, std::string& aKeys);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetKeysAvOpenhomeOrgConfigApp1Cpp() {}
private:
    CpProxyAvOpenhomeOrgConfigApp1Cpp& iService;
    std::string& iKeys;
};

SyncGetKeysAvOpenhomeOrgConfigApp1Cpp::SyncGetKeysAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy, std::string& aKeys)
    : iService(aProxy)
    , iKeys(aKeys)
{
}

void SyncGetKeysAvOpenhomeOrgConfigApp1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetKeys(aAsync, iKeys);
}


class SyncSetValueAvOpenhomeOrgConfigApp1Cpp : public SyncProxyAction
{
public:
    SyncSetValueAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetValueAvOpenhomeOrgConfigApp1Cpp() {}
private:
    CpProxyAvOpenhomeOrgConfigApp1Cpp& iService;
};

SyncSetValueAvOpenhomeOrgConfigApp1Cpp::SyncSetValueAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetValueAvOpenhomeOrgConfigApp1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetValue(aAsync);
}


class SyncGetValueAvOpenhomeOrgConfigApp1Cpp : public SyncProxyAction
{
public:
    SyncGetValueAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetValueAvOpenhomeOrgConfigApp1Cpp() {}
private:
    CpProxyAvOpenhomeOrgConfigApp1Cpp& iService;
    std::string& iValue;
};

SyncGetValueAvOpenhomeOrgConfigApp1Cpp::SyncGetValueAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncGetValueAvOpenhomeOrgConfigApp1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetValue(aAsync, iValue);
}


class SyncResetAllAvOpenhomeOrgConfigApp1Cpp : public SyncProxyAction
{
public:
    SyncResetAllAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncResetAllAvOpenhomeOrgConfigApp1Cpp() {}
private:
    CpProxyAvOpenhomeOrgConfigApp1Cpp& iService;
};

SyncResetAllAvOpenhomeOrgConfigApp1Cpp::SyncResetAllAvOpenhomeOrgConfigApp1Cpp(CpProxyAvOpenhomeOrgConfigApp1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncResetAllAvOpenhomeOrgConfigApp1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetAll(aAsync);
}


CpProxyAvOpenhomeOrgConfigApp1Cpp::CpProxyAvOpenhomeOrgConfigApp1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgConfigApp1Cpp::KeysPropertyChanged);
    iKeys = new PropertyString("Keys", functor);
    AddProperty(iKeys);
}

CpProxyAvOpenhomeOrgConfigApp1Cpp::~CpProxyAvOpenhomeOrgConfigApp1Cpp()
{
    DestroyService();
    delete iActionGetKeys;
    delete iActionSetValue;
    delete iActionGetValue;
    delete iActionResetAll;
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SyncGetKeys(std::string& aKeys)
{
    SyncGetKeysAvOpenhomeOrgConfigApp1Cpp sync(*this, aKeys);
    BeginGetKeys(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::BeginGetKeys(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetKeys, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetKeys->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::EndGetKeys(IAsync& aAsync, std::string& aKeys)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aKeys.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SyncSetValue(const std::string& aKey, const std::string& aValue)
{
    SyncSetValueAvOpenhomeOrgConfigApp1Cpp sync(*this);
    BeginSetValue(aKey, aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::BeginSetValue(const std::string& aKey, const std::string& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetValue->InputParameters();
    {
        Brn buf((const TByte*)aKey.c_str(), (TUint)aKey.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::EndSetValue(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SyncGetValue(const std::string& aKey, std::string& aValue)
{
    SyncGetValueAvOpenhomeOrgConfigApp1Cpp sync(*this, aValue);
    BeginGetValue(aKey, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::BeginGetValue(const std::string& aKey, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetValue->InputParameters();
    {
        Brn buf((const TByte*)aKey.c_str(), (TUint)aKey.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetValue->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::EndGetValue(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SyncResetAll()
{
    SyncResetAllAvOpenhomeOrgConfigApp1Cpp sync(*this);
    BeginResetAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::BeginResetAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionResetAll, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::EndResetAll(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SetPropertyKeysChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iKeysChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::PropertyKeys(std::string& aKeys) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iKeys->Value();
    aKeys.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::KeysPropertyChanged()
{
    ReportEvent(iKeysChanged);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgConfigApp1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgConfigApp1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgConfigApp1Cpp::Version() const
{
  return iCpProxy.Version();
}

