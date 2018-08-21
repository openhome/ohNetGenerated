#include "CpAvOpenhomeOrgExakt4.h"
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


class SyncDeviceListAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iList;
};

SyncDeviceListAvOpenhomeOrgExakt4Cpp::SyncDeviceListAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp::SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt4Cpp::SyncConnectionStatusAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncSetAvOpenhomeOrgExakt4Cpp::SyncSetAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncReprogramAvOpenhomeOrgExakt4Cpp::SyncReprogramAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp::SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncChannelMapAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iChannelMap;
};

SyncChannelMapAvOpenhomeOrgExakt4Cpp::SyncChannelMapAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncSetChannelMapAvOpenhomeOrgExakt4Cpp::SyncSetChannelMapAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncAudioChannelsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iAudioChannels;
};

SyncAudioChannelsAvOpenhomeOrgExakt4Cpp::SyncAudioChannelsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp::SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    std::string& iVersion;
};

SyncVersionAvOpenhomeOrgExakt4Cpp::SyncVersionAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, std::string& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


class SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, bool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
    bool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp::SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy, bool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt4Cpp& iService;
};

SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp::SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp(CpProxyAvOpenhomeOrgExakt4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


CpProxyAvOpenhomeOrgExakt4Cpp::CpProxyAvOpenhomeOrgExakt4Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Exakt", 4, aDevice.Device())
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

    iActionAudioChannels = new Action("AudioChannels");
    param = new OpenHome::Net::ParameterString("AudioChannels");
    iActionAudioChannels->AddOutputParameter(param);

    iActionSetAudioChannels = new Action("SetAudioChannels");
    param = new OpenHome::Net::ParameterString("AudioChannels");
    iActionSetAudioChannels->AddInputParameter(param);

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    iActionGetIntegratedDevicesPresent = new Action("GetIntegratedDevicesPresent");
    param = new OpenHome::Net::ParameterBool("IntegratedDevicesPresent");
    iActionGetIntegratedDevicesPresent->AddOutputParameter(param);

    iActionBootIntegratedDevicesToFallback = new Action("BootIntegratedDevicesToFallback");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4Cpp::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyAvOpenhomeOrgExakt4Cpp::~CpProxyAvOpenhomeOrgExakt4Cpp()
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
    delete iActionAudioChannels;
    delete iActionSetAudioChannels;
    delete iActionVersion;
    delete iActionGetIntegratedDevicesPresent;
    delete iActionBootIntegratedDevicesToFallback;
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncDeviceList(std::string& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt4Cpp sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndDeviceList(IAsync& aAsync, std::string& aList)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt4Cpp sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::EndDeviceSettings(IAsync& aAsync, std::string& aSettings)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncConnectionStatus(std::string& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt4Cpp sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist)
{
    SyncSetAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncChannelMap(std::string& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt4Cpp sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndChannelMap(IAsync& aAsync, std::string& aChannelMap)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncSetChannelMap(const std::string& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    {
        Brn buf((const TByte*)aChannelMap.c_str(), (TUint)aChannelMap.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncAudioChannels(std::string& aAudioChannels)
{
    SyncAudioChannelsAvOpenhomeOrgExakt4Cpp sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndAudioChannels(IAsync& aAsync, std::string& aAudioChannels)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("AudioChannels"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncSetAudioChannels(const std::string& aAudioChannels)
{
    SyncSetAudioChannelsAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginSetAudioChannels(const std::string& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    {
        Brn buf((const TByte*)aAudioChannels.c_str(), (TUint)aAudioChannels.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndSetAudioChannels(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAudioChannels"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncVersion(std::string& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt4Cpp sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndVersion(IAsync& aAsync, std::string& aVersion)
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

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncGetIntegratedDevicesPresent(bool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4Cpp sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndGetIntegratedDevicesPresent(IAsync& aAsync, bool& aIntegratedDevicesPresent)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetIntegratedDevicesPresent"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aIntegratedDevicesPresent = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4Cpp sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BootIntegratedDevicesToFallback"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyConnectionStatus(std::string& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iConnectionStatus->Value();
    aConnectionStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyChannelMap(std::string& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannelMap->Value();
    aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyAudioChannels(std::string& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAudioChannels->Value();
    aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyVersion(std::string& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iVersion->Value();
    aVersion.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt4Cpp::PropertyIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt4Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt4Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt4Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt4Cpp::Version() const
{
  return iCpProxy.Version();
}

