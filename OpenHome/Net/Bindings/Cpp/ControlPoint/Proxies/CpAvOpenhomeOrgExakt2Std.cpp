#include "CpAvOpenhomeOrgExakt2.h"
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


class SyncDeviceListAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
    std::string& iList;
};

SyncDeviceListAvOpenhomeOrgExakt2Cpp::SyncDeviceListAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
    std::string& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp::SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
    std::string& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt2Cpp::SyncConnectionStatusAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
};

SyncSetAvOpenhomeOrgExakt2Cpp::SyncSetAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
};

SyncReprogramAvOpenhomeOrgExakt2Cpp::SyncReprogramAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp::SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt2Cpp : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt2Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt2Cpp& iService;
    std::string& iVersion;
};

SyncVersionAvOpenhomeOrgExakt2Cpp::SyncVersionAvOpenhomeOrgExakt2Cpp(CpProxyAvOpenhomeOrgExakt2Cpp& aProxy, std::string& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


CpProxyAvOpenhomeOrgExakt2Cpp::CpProxyAvOpenhomeOrgExakt2Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2Cpp::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2Cpp::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt2Cpp::~CpProxyAvOpenhomeOrgExakt2Cpp()
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

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncDeviceList(std::string& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt2Cpp sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndDeviceList(IAsync& aAsync, std::string& aList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt2Cpp sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeviceSettings->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndDeviceSettings(IAsync& aAsync, std::string& aSettings)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSettings.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncConnectionStatus(std::string& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt2Cpp sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aConnectionStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist)
{
    SyncSetAvOpenhomeOrgExakt2Cpp sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBankId));
    {
        Brn buf((const TByte*)aFileUri.c_str(), (TUint)aFileUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aMute));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPersist));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt2Cpp sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aFileUri.c_str(), (TUint)aFileUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt2Cpp sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aFileUri.c_str(), (TUint)aFileUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2Cpp::SyncVersion(std::string& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt2Cpp sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::EndVersion(IAsync& aAsync, std::string& aVersion)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt2Cpp::PropertyConnectionStatus(std::string& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    const Brx& val = iConnectionStatus->Value();
    aConnectionStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt2Cpp::PropertyVersion(std::string& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    ASSERT(iCpProxy.GetSubscriptionStatus() == CpProxy::eSubscribed);
    const Brx& val = iVersion->Value();
    aVersion.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt2Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::Subscribe()
{
    iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::Unsubscribe()
{
   iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SetPropertyChanged(Functor& aFunctor)
{
    iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
    iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt2Cpp::AddProperty(Property* aProperty)
{
    iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt2Cpp::DestroyService()
{
    iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt2Cpp::ReportEvent(Functor aFunctor)
{
    iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt2Cpp::Version() const
{
    return iCpProxy.Version();
}
