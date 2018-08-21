#include "CpAvOpenhomeOrgExakt4.h"
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

class CpProxyAvOpenhomeOrgExakt4C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgExakt4C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgExakt4C();
    //CpProxyAvOpenhomeOrgExakt4* Proxy() { return static_cast<CpProxyAvOpenhomeOrgExakt4*>(iProxy); }

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


class SyncDeviceListAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iList;
};

SyncDeviceListAvOpenhomeOrgExakt4C::SyncDeviceListAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt4C::SyncDeviceSettingsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt4C::SyncConnectionStatusAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncSetAvOpenhomeOrgExakt4C::SyncSetAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncReprogramAvOpenhomeOrgExakt4C::SyncReprogramAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt4C::SyncReprogramFallbackAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncChannelMapAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iChannelMap;
};

SyncChannelMapAvOpenhomeOrgExakt4C::SyncChannelMapAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncSetChannelMapAvOpenhomeOrgExakt4C::SyncSetChannelMapAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncAudioChannelsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iAudioChannels;
};

SyncAudioChannelsAvOpenhomeOrgExakt4C::SyncAudioChannelsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncSetAudioChannelsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncSetAudioChannelsAvOpenhomeOrgExakt4C::SyncSetAudioChannelsAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    Brh& iVersion;
};

SyncVersionAvOpenhomeOrgExakt4C::SyncVersionAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


class SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
    TBool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C::SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C() {};
private:
    CpProxyAvOpenhomeOrgExakt4C& iService;
};

SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C::SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C(CpProxyAvOpenhomeOrgExakt4C& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}

CpProxyAvOpenhomeOrgExakt4C::CpProxyAvOpenhomeOrgExakt4C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Exakt", 4, *reinterpret_cast<CpiDevice*>(aDevice))
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt4C::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyAvOpenhomeOrgExakt4C::~CpProxyAvOpenhomeOrgExakt4C()
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

void CpProxyAvOpenhomeOrgExakt4C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt4C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt4C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt4C sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt4C sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt4C::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt4C sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt4C sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt4C sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt4C sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncAudioChannels(Brh& aAudioChannels)
{
    SyncAudioChannelsAvOpenhomeOrgExakt4C sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncSetAudioChannels(const Brx& aAudioChannels)
{
    SyncSetAudioChannelsAvOpenhomeOrgExakt4C sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAudioChannels));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt4C sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndVersion(IAsync& aAsync, Brh& aVersion)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentAvOpenhomeOrgExakt4C sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyAvOpenhomeOrgExakt4C::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackAvOpenhomeOrgExakt4C sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt4C::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt4C::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectionStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChannelsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt4C::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyAvOpenhomeOrgExakt4C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt4C::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt4C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt4C::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyAvOpenhomeOrgExakt4C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyAvOpenhomeOrgExakt4C::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgExakt4Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgExakt4C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginConnectionStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginConnectionStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndConnectionStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aConnectionStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogram(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndReprogram(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogramFallback(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndReprogramFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannelMap(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncSetChannelMap(THandle aHandle, const char* aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginSetChannelMap(THandle aHandle, const char* aChannelMap, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetChannelMap(buf_aChannelMap, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndSetChannelMap(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginAudioChannels(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAudioChannels(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndAudioChannels(THandle aHandle, OhNetHandleAsync aAsync, char** aAudioChannels)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncSetAudioChannels(THandle aHandle, const char* aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginSetAudioChannels(THandle aHandle, const char* aAudioChannels, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels(aAudioChannels);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAudioChannels(buf_aAudioChannels, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndSetAudioChannels(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncGetIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginGetIntegratedDevicesPresent(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIntegratedDevicesPresent(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndGetIntegratedDevicesPresent(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aIntegratedDevicesPresent)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4SyncBootIntegratedDevicesToFallback(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4BeginBootIntegratedDevicesToFallback(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootIntegratedDevicesToFallback(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4EndBootIntegratedDevicesToFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyConnectionStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectionStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyAudioChannelsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChannelsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt4SetPropertyIntegratedDevicesPresentChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIntegratedDevicesPresentChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt4PropertyIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyAvOpenhomeOrgExakt4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt4C*>(aHandle);
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

