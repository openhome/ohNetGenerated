#include "CpAvOpenhomeOrgExakt3.h"
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


class SyncDeviceListAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iList;
};

SyncDeviceListAvOpenhomeOrgExakt3Cpp::SyncDeviceListAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp::SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt3Cpp::SyncConnectionStatusAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
};

SyncSetAvOpenhomeOrgExakt3Cpp::SyncSetAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
};

SyncReprogramAvOpenhomeOrgExakt3Cpp::SyncReprogramAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp::SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncChannelMapAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iChannelMap;
};

SyncChannelMapAvOpenhomeOrgExakt3Cpp::SyncChannelMapAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
};

SyncSetChannelMapAvOpenhomeOrgExakt3Cpp::SyncSetChannelMapAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncAudioChannelsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iAudioChannels;
};

SyncAudioChannelsAvOpenhomeOrgExakt3Cpp::SyncAudioChannelsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
};

SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp::SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt3Cpp : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt3Cpp() {}
private:
    CpProxyAvOpenhomeOrgExakt3Cpp& iService;
    std::string& iVersion;
};

SyncVersionAvOpenhomeOrgExakt3Cpp::SyncVersionAvOpenhomeOrgExakt3Cpp(CpProxyAvOpenhomeOrgExakt3Cpp& aProxy, std::string& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


CpProxyAvOpenhomeOrgExakt3Cpp::CpProxyAvOpenhomeOrgExakt3Cpp(CpDeviceCpp& aDevice)
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

    iActionAudioChannels = new Action("AudioChannels");
    param = new OpenHome::Net::ParameterString("AudioChannels");
    iActionAudioChannels->AddOutputParameter(param);

    iActionSetAudioChannels = new Action("SetAudioChannels");
    param = new OpenHome::Net::ParameterString("AudioChannels");
    iActionSetAudioChannels->AddInputParameter(param);

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3Cpp::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3Cpp::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3Cpp::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3Cpp::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt3Cpp::~CpProxyAvOpenhomeOrgExakt3Cpp()
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
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncDeviceList(std::string& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt3Cpp sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::EndDeviceList(IAsync& aAsync, std::string& aList)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt3Cpp sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndDeviceSettings(IAsync& aAsync, std::string& aSettings)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncConnectionStatus(std::string& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt3Cpp sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::EndConnectionStatus(IAsync& aAsync, std::string& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist)
{
    SyncSetAvOpenhomeOrgExakt3Cpp sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginSet(const std::string& aDeviceId, uint32_t aBankId, const std::string& aFileUri, bool aMute, bool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncReprogram(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt3Cpp sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginReprogram(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt3Cpp sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginReprogramFallback(const std::string& aDeviceId, const std::string& aFileUri, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncChannelMap(std::string& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt3Cpp sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::EndChannelMap(IAsync& aAsync, std::string& aChannelMap)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncSetChannelMap(const std::string& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt3Cpp sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncAudioChannels(std::string& aAudioChannels)
{
    SyncAudioChannelsAvOpenhomeOrgExakt3Cpp sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::EndAudioChannels(IAsync& aAsync, std::string& aAudioChannels)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncSetAudioChannels(const std::string& aAudioChannels)
{
    SyncSetAudioChannelsAvOpenhomeOrgExakt3Cpp sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginSetAudioChannels(const std::string& aAudioChannels, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SyncVersion(std::string& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt3Cpp sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::EndVersion(IAsync& aAsync, std::string& aVersion)
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

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt3Cpp::PropertyConnectionStatus(std::string& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iConnectionStatus->Value();
    aConnectionStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt3Cpp::PropertyChannelMap(std::string& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannelMap->Value();
    aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt3Cpp::PropertyAudioChannels(std::string& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAudioChannels->Value();
    aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt3Cpp::PropertyVersion(std::string& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iVersion->Value();
    aVersion.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgExakt3Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt3Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt3Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt3Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt3Cpp::Version() const
{
  return iCpProxy.Version();
}

