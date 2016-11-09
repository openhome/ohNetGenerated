#include "CpAvOpenhomeOrgExakt3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncDeviceListAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
    Brh& iList;
};

class SyncDeviceSettingsAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
    Brh& iSettings;
};

class SyncConnectionStatusAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
    Brh& iConnectionStatus;
};

class SyncSetAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
};

class SyncReprogramAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
};

class SyncReprogramFallbackAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
};

class SyncChannelMapAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
    Brh& iChannelMap;
};

class SyncSetChannelMapAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
};

class SyncVersionAvOpenhomeOrgExakt3 : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt3& iService;
    Brh& iVersion;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncDeviceListAvOpenhomeOrgExakt3

SyncDeviceListAvOpenhomeOrgExakt3::SyncDeviceListAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}

// SyncDeviceSettingsAvOpenhomeOrgExakt3

SyncDeviceSettingsAvOpenhomeOrgExakt3::SyncDeviceSettingsAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}

// SyncConnectionStatusAvOpenhomeOrgExakt3

SyncConnectionStatusAvOpenhomeOrgExakt3::SyncConnectionStatusAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}

// SyncSetAvOpenhomeOrgExakt3

SyncSetAvOpenhomeOrgExakt3::SyncSetAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}

// SyncReprogramAvOpenhomeOrgExakt3

SyncReprogramAvOpenhomeOrgExakt3::SyncReprogramAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}

// SyncReprogramFallbackAvOpenhomeOrgExakt3

SyncReprogramFallbackAvOpenhomeOrgExakt3::SyncReprogramFallbackAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}

// SyncChannelMapAvOpenhomeOrgExakt3

SyncChannelMapAvOpenhomeOrgExakt3::SyncChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}

// SyncSetChannelMapAvOpenhomeOrgExakt3

SyncSetChannelMapAvOpenhomeOrgExakt3::SyncSetChannelMapAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}

// SyncVersionAvOpenhomeOrgExakt3

SyncVersionAvOpenhomeOrgExakt3::SyncVersionAvOpenhomeOrgExakt3(CpProxyAvOpenhomeOrgExakt3& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


// CpProxyAvOpenhomeOrgExakt3

CpProxyAvOpenhomeOrgExakt3::CpProxyAvOpenhomeOrgExakt3(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Exakt", 3, aDevice.Device())
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

    iActionChannelMap = new Action("ChannelMap");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionChannelMap->AddOutputParameter(param);

    iActionSetChannelMap = new Action("SetChannelMap");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionSetChannelMap->AddInputParameter(param);

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt3::~CpProxyAvOpenhomeOrgExakt3()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
    delete iActionChannelMap;
    delete iActionSetChannelMap;
    delete iActionVersion;
}

void CpProxyAvOpenhomeOrgExakt3::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt3 sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt3::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt3 sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt3::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt3 sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt3::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt3 sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt3 sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt3 sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt3 sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ChannelMap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannelMap);
}

void CpProxyAvOpenhomeOrgExakt3::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt3 sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndSetChannelMap(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetChannelMap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt3::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt3 sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3::EndVersion(IAsync& aAsync, Brh& aVersion)
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

void CpProxyAvOpenhomeOrgExakt3::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt3::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt3::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyAvOpenhomeOrgExakt3::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt3::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt3::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt3::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt3::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


void CpProxyAvOpenhomeOrgExakt3::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt3::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt3::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt3::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt3::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt3::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt3::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt3::Version() const
{
  return iCpProxy.Version();
}


