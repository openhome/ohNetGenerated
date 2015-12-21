#include "CpAvOpenhomeOrgExakt2.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncDeviceListAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
    Brh& iList;
};

class SyncDeviceSettingsAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
    Brh& iSettings;
};

class SyncConnectionStatusAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
    Brh& iConnectionStatus;
};

class SyncSetAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
};

class SyncReprogramAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
};

class SyncReprogramFallbackAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
};

class SyncVersionAvOpenhomeOrgExakt2 : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt2& iService;
    Brh& iVersion;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncDeviceListAvOpenhomeOrgExakt2

SyncDeviceListAvOpenhomeOrgExakt2::SyncDeviceListAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}

// SyncDeviceSettingsAvOpenhomeOrgExakt2

SyncDeviceSettingsAvOpenhomeOrgExakt2::SyncDeviceSettingsAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}

// SyncConnectionStatusAvOpenhomeOrgExakt2

SyncConnectionStatusAvOpenhomeOrgExakt2::SyncConnectionStatusAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}

// SyncSetAvOpenhomeOrgExakt2

SyncSetAvOpenhomeOrgExakt2::SyncSetAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}

// SyncReprogramAvOpenhomeOrgExakt2

SyncReprogramAvOpenhomeOrgExakt2::SyncReprogramAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}

// SyncReprogramFallbackAvOpenhomeOrgExakt2

SyncReprogramFallbackAvOpenhomeOrgExakt2::SyncReprogramFallbackAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}

// SyncVersionAvOpenhomeOrgExakt2

SyncVersionAvOpenhomeOrgExakt2::SyncVersionAvOpenhomeOrgExakt2(CpProxyAvOpenhomeOrgExakt2& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt2::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


// CpProxyAvOpenhomeOrgExakt2

CpProxyAvOpenhomeOrgExakt2::CpProxyAvOpenhomeOrgExakt2(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Exakt", 2, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionDeviceList = new Action("DeviceList");
    param = new OpenHome::Net::ParameterString("List");
    iActionDeviceList->AddOutputParameter(param);

    iActionDeviceSettings = new Action("DeviceSettings");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionDeviceSettings->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Settings");
    iActionDeviceSettings->AddOutputParameter(param);

    iActionConnectionStatus = new Action("ConnectionStatus");
    param = new OpenHome::Net::ParameterString("ConnectionStatus");
    iActionConnectionStatus->AddOutputParameter(param);

    iActionSet = new Action("Set");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("BankId");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Mute");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Persist");
    iActionSet->AddInputParameter(param);

    iActionReprogram = new Action("Reprogram");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionReprogram->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionReprogram->AddInputParameter(param);

    iActionReprogramFallback = new Action("ReprogramFallback");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionReprogramFallback->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionReprogramFallback->AddInputParameter(param);

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt2::~CpProxyAvOpenhomeOrgExakt2()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
    delete iActionVersion;
}

void CpProxyAvOpenhomeOrgExakt2::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt2 sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndDeviceList(IAsync& aAsync, Brh& aList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeviceList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aList);
}

void CpProxyAvOpenhomeOrgExakt2::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt2 sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeviceSettings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeviceSettings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSettings);
}

void CpProxyAvOpenhomeOrgExakt2::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt2 sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ConnectionStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aConnectionStatus);
}

void CpProxyAvOpenhomeOrgExakt2::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt2 sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBankId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aMute));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPersist));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndSet(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Set"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt2::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt2 sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndReprogram(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Reprogram"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt2::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt2 sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndReprogramFallback(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReprogramFallback"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt2::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt2 sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2::EndVersion(IAsync& aAsync, Brh& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Version"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aVersion);
}

void CpProxyAvOpenhomeOrgExakt2::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt2::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt2::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt2::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt2::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt2::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


void CpProxyAvOpenhomeOrgExakt2::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt2::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt2::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt2::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt2::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt2::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt2::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt2::Version() const
{
  return iCpProxy.Version();
}


