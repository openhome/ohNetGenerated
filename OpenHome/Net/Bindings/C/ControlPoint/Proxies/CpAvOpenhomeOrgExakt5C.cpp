#include "CpAvOpenhomeOrgExakt5.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgExakt5C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgExakt5C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgExakt5C();
    //CpProxyAvOpenhomeOrgExakt5* Proxy() { return static_cast<CpProxyAvOpenhomeOrgExakt5*>(iProxy); }

    void SyncDeviceList(Brh& aList);
    void BeginDeviceList(FunctorAsync& aFunctor);
    void EndDeviceList(IAsync& aAsync, Brh& aList);

    void SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
    void BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    void EndDeviceSettings(IAsync& aAsync, Brh& aSettings);

    void SyncConnectionStatus(Brh& aConnectionStatus);
    void BeginConnectionStatus(FunctorAsync& aFunctor);
    void EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus);

    void SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist);
    void BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor);
    void EndSet(IAsync& aAsync);

    void SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri);
    void BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    void EndReprogram(IAsync& aAsync);

    void SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri);
    void BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    void EndReprogramFallback(IAsync& aAsync);

    void SyncChannelMap(Brh& aChannelMap);
    void BeginChannelMap(FunctorAsync& aFunctor);
    void EndChannelMap(IAsync& aAsync, Brh& aChannelMap);

    void SyncSetChannelMap(const Brx& aChannelMap);
    void BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor);
    void EndSetChannelMap(IAsync& aAsync);

    void SyncAudioChannels(Brh& aAudioChannels);
    void BeginAudioChannels(FunctorAsync& aFunctor);
    void EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels);

    void SyncSetAudioChannels(const Brx& aAudioChannels);
    void BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor);
    void EndSetAudioChannels(IAsync& aAsync);

    void SyncVersion(Brh& aVersion);
    void BeginVersion(FunctorAsync& aFunctor);
    void EndVersion(IAsync& aAsync, Brh& aVersion);

    void SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent);
    void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor);
    void EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent);

    void SyncBootIntegratedDevicesToFallback();
    void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor);
    void EndBootIntegratedDevicesToFallback(IAsync& aAsync);

    void SyncReboot();
    void BeginReboot(FunctorAsync& aFunctor);
    void EndReboot(IAsync& aAsync);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);
    void SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertyConnectionStatus(Brhz& aConnectionStatus) const;
    void PropertyChannelMap(Brhz& aChannelMap) const;
    void PropertyAudioChannels(Brhz& aAudioChannels) const;
    void PropertyVersion(Brhz& aVersion) const;
    void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const;
private:
    void DeviceListPropertyChanged();
    void ConnectionStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
    void IntegratedDevicesPresentPropertyChanged();
private:
    Mutex iLock;
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionAudioChannels;
    Action* iActionSetAudioChannels;
    Action* iActionVersion;
    Action* iActionGetIntegratedDevicesPresent;
    Action* iActionBootIntegratedDevicesToFallback;
    Action* iActionReboot;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyString* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
};


class SyncDeviceListAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iList;
};

SyncDeviceListAvOpenhomeOrgExakt5C::SyncDeviceListAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt5C::SyncDeviceSettingsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt5C::SyncConnectionStatusAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncSetAvOpenhomeOrgExakt5C::SyncSetAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncReprogramAvOpenhomeOrgExakt5C::SyncReprogramAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt5C::SyncReprogramFallbackAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncChannelMapAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iChannelMap;
};

SyncChannelMapAvOpenhomeOrgExakt5C::SyncChannelMapAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncSetChannelMapAvOpenhomeOrgExakt5C::SyncSetChannelMapAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncAudioChannelsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iAudioChannels;
};

SyncAudioChannelsAvOpenhomeOrgExakt5C::SyncAudioChannelsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncSetAudioChannelsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncSetAudioChannelsAvOpenhomeOrgExakt5C::SyncSetAudioChannelsAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    Brh& iVersion;
};

SyncVersionAvOpenhomeOrgExakt5C::SyncVersionAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


class SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
    TBool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C::SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C::SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


class SyncRebootAvOpenhomeOrgExakt5C : public SyncProxyAction
{
public:
    SyncRebootAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootAvOpenhomeOrgExakt5C() {};
private:
    CpProxyAvOpenhomeOrgExakt5C& iService;
};

SyncRebootAvOpenhomeOrgExakt5C::SyncRebootAvOpenhomeOrgExakt5C(CpProxyAvOpenhomeOrgExakt5C& aProxy)
    : iService(aProxy)
{
}

void SyncRebootAvOpenhomeOrgExakt5C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}

CpProxyAvOpenhomeOrgExakt5C::CpProxyAvOpenhomeOrgExakt5C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Exakt", 5, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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

    iActionReboot = new Action("Reboot");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt5C::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyAvOpenhomeOrgExakt5C::~CpProxyAvOpenhomeOrgExakt5C()
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
    delete iActionReboot;
}

void CpProxyAvOpenhomeOrgExakt5C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt5C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt5C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeviceSettings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt5C sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt5C sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBankId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aMute));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPersist));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt5C sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt5C sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt5C sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt5C sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncAudioChannels(Brh& aAudioChannels)
{
    SyncAudioChannelsAvOpenhomeOrgExakt5C sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncSetAudioChannels(const Brx& aAudioChannels)
{
    SyncSetAudioChannelsAvOpenhomeOrgExakt5C sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAudioChannels));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt5C sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndVersion(IAsync& aAsync, Brh& aVersion)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt5C sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt5C sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt5C::SyncReboot()
{
    SyncRebootAvOpenhomeOrgExakt5C sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt5C::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReboot, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt5C::EndReboot(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Reboot"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectionStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChannelsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt5C::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyAvOpenhomeOrgExakt5C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt5C::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt5C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt5C::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyAvOpenhomeOrgExakt5C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt5C::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgExakt5Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgExakt5C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aList;
    int32_t err = 0;
    try {
        proxyC->SyncDeviceList(buf_aList);
        *aList = buf_aList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aList;
    *aList = NULL;
    try {
        proxyC->EndDeviceList(*async, buf_aList);
        *aList = buf_aList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aSettings;
    int32_t err = 0;
    try {
        proxyC->SyncDeviceSettings(buf_aDeviceId, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettings = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSettings;
    *aSettings = NULL;
    try {
        proxyC->EndDeviceSettings(*async, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aConnectionStatus;
    int32_t err = 0;
    try {
        proxyC->SyncConnectionStatus(buf_aConnectionStatus);
        *aConnectionStatus = buf_aConnectionStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aConnectionStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginConnectionStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginConnectionStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndConnectionStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aConnectionStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aConnectionStatus;
    *aConnectionStatus = NULL;
    try {
        proxyC->EndConnectionStatus(*async, buf_aConnectionStatus);
        *aConnectionStatus = buf_aConnectionStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSet(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncReprogram(buf_aDeviceId, buf_aFileUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogram(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndReprogram(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReprogram(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncReprogramFallback(buf_aDeviceId, buf_aFileUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogramFallback(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndReprogramFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReprogramFallback(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap;
    int32_t err = 0;
    try {
        proxyC->SyncChannelMap(buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aChannelMap = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannelMap(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aChannelMap;
    *aChannelMap = NULL;
    try {
        proxyC->EndChannelMap(*async, buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncSetChannelMap(THandle aHandle, const char* aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    int32_t err = 0;
    try {
        proxyC->SyncSetChannelMap(buf_aChannelMap);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginSetChannelMap(THandle aHandle, const char* aChannelMap, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetChannelMap(buf_aChannelMap, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndSetChannelMap(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetChannelMap(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels;
    int32_t err = 0;
    try {
        proxyC->SyncAudioChannels(buf_aAudioChannels);
        *aAudioChannels = buf_aAudioChannels.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aAudioChannels = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginAudioChannels(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAudioChannels(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndAudioChannels(THandle aHandle, OhNetHandleAsync aAsync, char** aAudioChannels)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aAudioChannels;
    *aAudioChannels = NULL;
    try {
        proxyC->EndAudioChannels(*async, buf_aAudioChannels);
        *aAudioChannels = buf_aAudioChannels.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncSetAudioChannels(THandle aHandle, const char* aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels(aAudioChannels);
    int32_t err = 0;
    try {
        proxyC->SyncSetAudioChannels(buf_aAudioChannels);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginSetAudioChannels(THandle aHandle, const char* aAudioChannels, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels(aAudioChannels);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAudioChannels(buf_aAudioChannels, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndSetAudioChannels(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetAudioChannels(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aVersion;
    int32_t err = 0;
    try {
        proxyC->SyncVersion(buf_aVersion);
        *aVersion = buf_aVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aVersion;
    *aVersion = NULL;
    try {
        proxyC->EndVersion(*async, buf_aVersion);
        *aVersion = buf_aVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncGetIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool IntegratedDevicesPresent;
    int32_t err = 0;
    try {
        proxyC->SyncGetIntegratedDevicesPresent(IntegratedDevicesPresent);
        *aIntegratedDevicesPresent = IntegratedDevicesPresent? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aIntegratedDevicesPresent = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginGetIntegratedDevicesPresent(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIntegratedDevicesPresent(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndGetIntegratedDevicesPresent(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aIntegratedDevicesPresent)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool IntegratedDevicesPresent;
    try {
        proxyC->EndGetIntegratedDevicesPresent(*async, IntegratedDevicesPresent);
        *aIntegratedDevicesPresent = IntegratedDevicesPresent? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncBootIntegratedDevicesToFallback(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncBootIntegratedDevicesToFallback();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginBootIntegratedDevicesToFallback(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootIntegratedDevicesToFallback(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndBootIntegratedDevicesToFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndBootIntegratedDevicesToFallback(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5SyncReboot(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncReboot();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5BeginReboot(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReboot(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5EndReboot(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReboot(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyConnectionStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectionStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyAudioChannelsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChannelsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt5SetPropertyIntegratedDevicesPresentChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIntegratedDevicesPresentChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceList;
    try {
        proxyC->PropertyDeviceList(buf_aDeviceList);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aDeviceList = buf_aDeviceList.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aConnectionStatus;
    try {
        proxyC->PropertyConnectionStatus(buf_aConnectionStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aConnectionStatus = buf_aConnectionStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aChannelMap;
    try {
        proxyC->PropertyChannelMap(buf_aChannelMap);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aChannelMap = buf_aChannelMap.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAudioChannels;
    try {
        proxyC->PropertyAudioChannels(buf_aAudioChannels);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAudioChannels = buf_aAudioChannels.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aVersion;
    try {
        proxyC->PropertyVersion(buf_aVersion);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aVersion = buf_aVersion.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt5PropertyIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyAvOpenhomeOrgExakt5C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt5C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool IntegratedDevicesPresent;
    try {
        proxyC->PropertyIntegratedDevicesPresent(IntegratedDevicesPresent);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aIntegratedDevicesPresent = IntegratedDevicesPresent? 1 : 0;
    return 0;
}

