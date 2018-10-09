#include "CpAvOpenhomeOrgExakt4.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncDeviceListAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iList;
};

class SyncDeviceSettingsAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iSettings;
};

class SyncConnectionStatusAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iConnectionStatus;
};

class SyncSetAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

class SyncReprogramAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

class SyncReprogramFallbackAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

class SyncChannelMapAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iChannelMap;
};

class SyncSetChannelMapAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

class SyncAudioChannelsAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncAudioChannelsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iAudioChannels;
};

class SyncSetAudioChannelsAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncSetAudioChannelsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

class SyncVersionAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    Brh& iVersion;
};

class SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
    TBool& iIntegratedDevicesPresent;
};

class SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4 : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgExakt4& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncDeviceListAvOpenhomeOrgExakt4

SyncDeviceListAvOpenhomeOrgExakt4::SyncDeviceListAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}

// SyncDeviceSettingsAvOpenhomeOrgExakt4

SyncDeviceSettingsAvOpenhomeOrgExakt4::SyncDeviceSettingsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}

// SyncConnectionStatusAvOpenhomeOrgExakt4

SyncConnectionStatusAvOpenhomeOrgExakt4::SyncConnectionStatusAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}

// SyncSetAvOpenhomeOrgExakt4

SyncSetAvOpenhomeOrgExakt4::SyncSetAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}

// SyncReprogramAvOpenhomeOrgExakt4

SyncReprogramAvOpenhomeOrgExakt4::SyncReprogramAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}

// SyncReprogramFallbackAvOpenhomeOrgExakt4

SyncReprogramFallbackAvOpenhomeOrgExakt4::SyncReprogramFallbackAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}

// SyncChannelMapAvOpenhomeOrgExakt4

SyncChannelMapAvOpenhomeOrgExakt4::SyncChannelMapAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}

// SyncSetChannelMapAvOpenhomeOrgExakt4

SyncSetChannelMapAvOpenhomeOrgExakt4::SyncSetChannelMapAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}

// SyncAudioChannelsAvOpenhomeOrgExakt4

SyncAudioChannelsAvOpenhomeOrgExakt4::SyncAudioChannelsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}

// SyncSetAudioChannelsAvOpenhomeOrgExakt4

SyncSetAudioChannelsAvOpenhomeOrgExakt4::SyncSetAudioChannelsAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}

// SyncVersionAvOpenhomeOrgExakt4

SyncVersionAvOpenhomeOrgExakt4::SyncVersionAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}

// SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4

SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4::SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}

// SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4

SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4::SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4(CpProxyAvOpenhomeOrgExakt4& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


// CpProxyAvOpenhomeOrgExakt4

CpProxyAvOpenhomeOrgExakt4::CpProxyAvOpenhomeOrgExakt4(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyAvOpenhomeOrgExakt4::~CpProxyAvOpenhomeOrgExakt4()
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

void CpProxyAvOpenhomeOrgExakt4::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt4 sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt4::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt4 sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt4::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt4 sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt4::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt4 sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt4 sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt4 sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt4 sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyAvOpenhomeOrgExakt4::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt4 sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SyncAudioChannels(Brh& aAudioChannels)
{
    SyncAudioChannelsAvOpenhomeOrgExakt4 sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aAudioChannels);
}

void CpProxyAvOpenhomeOrgExakt4::SyncSetAudioChannels(const Brx& aAudioChannels)
{
    SyncSetAudioChannelsAvOpenhomeOrgExakt4 sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAudioChannels));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt4 sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndVersion(IAsync& aAsync, Brh& aVersion)
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

void CpProxyAvOpenhomeOrgExakt4::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4 sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyAvOpenhomeOrgExakt4::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4 sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iConnectionStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgExakt4::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt4::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt4::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyAvOpenhomeOrgExakt4::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyAvOpenhomeOrgExakt4::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt4::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyAvOpenhomeOrgExakt4::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt4::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt4::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt4::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyAvOpenhomeOrgExakt4::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt4::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}


void CpProxyAvOpenhomeOrgExakt4::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgExakt4::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgExakt4::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgExakt4::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgExakt4::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgExakt4::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgExakt4::Version() const
{
  return iCpProxy.Version();
}


