#include "CpLinnCoUkCloud1.h"
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


class SyncSetAssociatedLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncSetAssociatedLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociatedLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
};

SyncSetAssociatedLinnCoUkCloud1Cpp::SyncSetAssociatedLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociatedLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociated(aAsync);
}


class SyncSetControlEnabledLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncSetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetControlEnabledLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
};

SyncSetControlEnabledLinnCoUkCloud1Cpp::SyncSetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetControlEnabledLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetControlEnabled(aAsync);
}


class SyncGetControlEnabledLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aEnabled);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetControlEnabledLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    bool& iEnabled;
};

SyncGetControlEnabledLinnCoUkCloud1Cpp::SyncGetControlEnabledLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aEnabled)
    : iService(aProxy)
    , iEnabled(aEnabled)
{
}

void SyncGetControlEnabledLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetControlEnabled(aAsync, iEnabled);
}


class SyncGetConnectedLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetConnectedLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aConnected);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConnectedLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    bool& iConnected;
};

SyncGetConnectedLinnCoUkCloud1Cpp::SyncGetConnectedLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, bool& aConnected)
    : iService(aProxy)
    , iConnected(aConnected)
{
}

void SyncGetConnectedLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConnected(aAsync, iConnected);
}


class SyncGetPublicKeyLinnCoUkCloud1Cpp : public SyncProxyAction
{
public:
    SyncGetPublicKeyLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyLinnCoUkCloud1Cpp() {}
private:
    CpProxyLinnCoUkCloud1Cpp& iService;
    std::string& iPublicKey;
};

SyncGetPublicKeyLinnCoUkCloud1Cpp::SyncGetPublicKeyLinnCoUkCloud1Cpp(CpProxyLinnCoUkCloud1Cpp& aProxy, std::string& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyLinnCoUkCloud1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}


CpProxyLinnCoUkCloud1Cpp::CpProxyLinnCoUkCloud1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Cloud", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionSetAssociated = new Action("SetAssociated");
    param = new OpenHome::Net::ParameterString("TokenEncrypted");
    iActionSetAssociated->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Associated");
    iActionSetAssociated->AddInputParameter(param);

    iActionSetControlEnabled = new Action("SetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetControlEnabled->AddInputParameter(param);

    iActionGetControlEnabled = new Action("GetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGetControlEnabled->AddOutputParameter(param);

    iActionGetConnected = new Action("GetConnected");
    param = new OpenHome::Net::ParameterBool("Connected");
    iActionGetConnected->AddOutputParameter(param);

    iActionGetPublicKey = new Action("GetPublicKey");
    param = new OpenHome::Net::ParameterString("PublicKey");
    iActionGetPublicKey->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::ControlEnabledPropertyChanged);
    iControlEnabled = new PropertyBool("ControlEnabled", functor);
    AddProperty(iControlEnabled);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::ConnectedPropertyChanged);
    iConnected = new PropertyBool("Connected", functor);
    AddProperty(iConnected);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1Cpp::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
}

CpProxyLinnCoUkCloud1Cpp::~CpProxyLinnCoUkCloud1Cpp()
{
    DestroyService();
    delete iActionSetAssociated;
    delete iActionSetControlEnabled;
    delete iActionGetControlEnabled;
    delete iActionGetConnected;
    delete iActionGetPublicKey;
}

void CpProxyLinnCoUkCloud1Cpp::SyncSetAssociated(const std::string& aTokenEncrypted, bool aAssociated)
{
    SyncSetAssociatedLinnCoUkCloud1Cpp sync(*this);
    BeginSetAssociated(aTokenEncrypted, aAssociated, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginSetAssociated(const std::string& aTokenEncrypted, bool aAssociated, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAssociated, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociated->InputParameters();
    {
        Brn buf((const TByte*)aTokenEncrypted.c_str(), (TUint)aTokenEncrypted.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aAssociated));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndSetAssociated(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociated"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncSetControlEnabled(bool aEnabled)
{
    SyncSetControlEnabledLinnCoUkCloud1Cpp sync(*this);
    BeginSetControlEnabled(aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginSetControlEnabled(bool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetControlEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetControlEnabled->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndSetControlEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetControlEnabled(bool& aEnabled)
{
    SyncGetControlEnabledLinnCoUkCloud1Cpp sync(*this, aEnabled);
    BeginGetControlEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetControlEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetControlEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetControlEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetControlEnabled(IAsync& aAsync, bool& aEnabled)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetConnected(bool& aConnected)
{
    SyncGetConnectedLinnCoUkCloud1Cpp sync(*this, aConnected);
    BeginGetConnected(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetConnected(IAsync& aAsync, bool& aConnected)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetConnected"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aConnected = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1Cpp::SyncGetPublicKey(std::string& aPublicKey)
{
    SyncGetPublicKeyLinnCoUkCloud1Cpp sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1Cpp::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1Cpp::EndGetPublicKey(IAsync& aAsync, std::string& aPublicKey)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPublicKey"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAssociationStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyControlEnabledChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iControlEnabledChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyConnectedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPublicKeyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkCloud1Cpp::PropertyAssociationStatus(std::string& aAssociationStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAssociationStatus->Value();
    aAssociationStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud1Cpp::PropertyControlEnabled(bool& aControlEnabled) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aControlEnabled = iControlEnabled->Value();
}

void CpProxyLinnCoUkCloud1Cpp::PropertyConnected(bool& aConnected) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConnected = iConnected->Value();
}

void CpProxyLinnCoUkCloud1Cpp::PropertyPublicKey(std::string& aPublicKey) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iPublicKey->Value();
    aPublicKey.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkCloud1Cpp::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud1Cpp::ControlEnabledPropertyChanged()
{
    ReportEvent(iControlEnabledChanged);
}

void CpProxyLinnCoUkCloud1Cpp::ConnectedPropertyChanged()
{
    ReportEvent(iConnectedChanged);
}

void CpProxyLinnCoUkCloud1Cpp::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}

void CpProxyLinnCoUkCloud1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkCloud1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkCloud1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkCloud1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkCloud1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkCloud1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkCloud1Cpp::Version() const
{
  return iCpProxy.Version();
}

