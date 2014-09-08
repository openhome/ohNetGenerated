#include "CpAvOpenhomeOrgExakt1.h"
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


class SyncDeviceListAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
    std::string& iList;
};

SyncDeviceListAvOpenhomeOrgExakt1Cpp::SyncDeviceListAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
    std::string& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp::SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
    std::string& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt1Cpp::SyncConnectionStatusAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy, std::string& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
};

SyncSetAvOpenhomeOrgExakt1Cpp::SyncSetAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
};

SyncReprogramAvOpenhomeOrgExakt1Cpp::SyncReprogramAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt1Cpp& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp::SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp(CpProxyAvOpenhomeOrgExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


CpProxyAvOpenhomeOrgExakt1Cpp::CpProxyAvOpenhomeOrgExakt1Cpp(CpDeviceCpp& aDevice)
    : CpProxy("av-openhome-org", "Exakt", 1, aDevice.Device())
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt1Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString(aDevice.Device().GetCpStack().Env(), "DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt1Cpp::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString(aDevice.Device().GetCpStack().Env(), "ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
}

CpProxyAvOpenhomeOrgExakt1Cpp::~CpProxyAvOpenhomeOrgExakt1Cpp()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
}

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncDeviceList(std::string& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt1Cpp sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndDeviceList(IAsync& aAsync, std::string& aList)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt1Cpp sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeviceSettings->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndDeviceSettings(IAsync& aAsync, std::string& aSettings)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncConnectionStatus(std::string& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt1Cpp sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist)
{
    SyncSetAvOpenhomeOrgExakt1Cpp sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionSet, aFunctor);
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
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt1Cpp sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionReprogram, aFunctor);
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
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt1Cpp sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iService->Invocation(*iActionReprogramFallback, aFunctor);
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
    iInvocable.InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock->Wait();
    iDeviceListChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock->Wait();
    iConnectionStatusChanged = aFunctor;
    iLock->Signal();
}

void CpProxyAvOpenhomeOrgExakt1Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt1Cpp::PropertyConnectionStatus(std::string& aConnectionStatus) const
{
    AutoMutex a(PropertyReadLock());
    ASSERT(iCpSubscriptionStatus == CpProxy::eSubscribed);
    const Brx& val = iConnectionStatus->Value();
    aConnectionStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt1Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt1Cpp::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

