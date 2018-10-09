#include "CpLinnCoUkExakt21.h"
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

class CpProxyLinnCoUkExakt21C : public CpProxyC
{
public:
    CpProxyLinnCoUkExakt21C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkExakt21C();
    //CpProxyLinnCoUkExakt21* Proxy() { return static_cast<CpProxyLinnCoUkExakt21*>(iProxy); }

    void SyncGetDeviceList(Brh& aList);
    void BeginGetDeviceList(FunctorAsync& aFunctor);
    void EndGetDeviceList(IAsync& aAsync, Brh& aList);

    void SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
    void BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    void EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings);

    void SyncGetSettingsAvailable(TBool& aSettingsAvailable);
    void BeginGetSettingsAvailable(FunctorAsync& aFunctor);
    void EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable);

    void SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq);
    void BeginGetSettingsChangedSeq(FunctorAsync& aFunctor);
    void EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq);

    void SyncUpdate(const Brx& aManifest);
    void BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor);
    void EndUpdate(IAsync& aAsync);

    void SyncUpdateBlocking(const Brx& aManifest);
    void BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor);
    void EndUpdateBlocking(IAsync& aAsync);

    void SyncGetUpdateStatus(Brh& aUpdateStatus);
    void BeginGetUpdateStatus(FunctorAsync& aFunctor);
    void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus);

    void SyncGetChannelMap(Brh& aChannelMap);
    void BeginGetChannelMap(FunctorAsync& aFunctor);
    void EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap);

    void SyncGetAudioChannels(Brh& aAudioChannels);
    void BeginGetAudioChannels(FunctorAsync& aFunctor);
    void EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels);

    void SyncGetVersion(TUint& aVersion);
    void BeginGetVersion(FunctorAsync& aFunctor);
    void EndGetVersion(IAsync& aAsync, TUint& aVersion);

    void SyncApplyUpdate();
    void BeginApplyUpdate(FunctorAsync& aFunctor);
    void EndApplyUpdate(IAsync& aAsync);

    void SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata);
    void BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    void EndPlayTestTrack(IAsync& aAsync);

    void SyncClearTestTrack();
    void BeginClearTestTrack(FunctorAsync& aFunctor);
    void EndClearTestTrack(IAsync& aAsync);

    void SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent);
    void BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor);
    void EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent);

    void SyncBootIntegratedDevicesToFallback();
    void BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor);
    void EndBootIntegratedDevicesToFallback(IAsync& aAsync);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    void SetPropertySettingsChangedSeqChanged(Functor& aFunctor);
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);
    void SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertySettingsAvailable(TBool& aSettingsAvailable) const;
    void PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const;
    void PropertyUpdateStatus(Brhz& aUpdateStatus) const;
    void PropertyChannelMap(Brhz& aChannelMap) const;
    void PropertyAudioChannels(Brhz& aAudioChannels) const;
    void PropertyVersion(TUint& aVersion) const;
    void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const;
private:
    void DeviceListPropertyChanged();
    void SettingsAvailablePropertyChanged();
    void SettingsChangedSeqPropertyChanged();
    void UpdateStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
    void IntegratedDevicesPresentPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetDeviceList;
    Action* iActionGetDeviceSettings;
    Action* iActionGetSettingsAvailable;
    Action* iActionGetSettingsChangedSeq;
    Action* iActionUpdate;
    Action* iActionUpdateBlocking;
    Action* iActionGetUpdateStatus;
    Action* iActionGetChannelMap;
    Action* iActionGetAudioChannels;
    Action* iActionGetVersion;
    Action* iActionApplyUpdate;
    Action* iActionPlayTestTrack;
    Action* iActionClearTestTrack;
    Action* iActionGetIntegratedDevicesPresent;
    Action* iActionBootIntegratedDevicesToFallback;
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyString* iSettingsChangedSeq;
    PropertyString* iUpdateStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedSeqChanged;
    Functor iUpdateStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
};


class SyncGetDeviceListLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceListLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iList;
};

SyncGetDeviceListLinnCoUkExakt21C::SyncGetDeviceListLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}


class SyncGetDeviceSettingsLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceSettingsLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iSettings;
};

SyncGetDeviceSettingsLinnCoUkExakt21C::SyncGetDeviceSettingsLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}


class SyncGetSettingsAvailableLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsAvailableLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    TBool& iSettingsAvailable;
};

SyncGetSettingsAvailableLinnCoUkExakt21C::SyncGetSettingsAvailableLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncGetSettingsChangedSeqLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsChangedSeqLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iSettingsChangedSeq;
};

SyncGetSettingsChangedSeqLinnCoUkExakt21C::SyncGetSettingsChangedSeqLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}


class SyncUpdateLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncUpdateLinnCoUkExakt21C::SyncUpdateLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncUpdateBlockingLinnCoUkExakt21C::SyncUpdateBlockingLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iUpdateStatus;
};

SyncGetUpdateStatusLinnCoUkExakt21C::SyncGetUpdateStatusLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}


class SyncGetChannelMapLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChannelMapLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iChannelMap;
};

SyncGetChannelMapLinnCoUkExakt21C::SyncGetChannelMapLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}


class SyncGetAudioChannelsLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAudioChannelsLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    Brh& iAudioChannels;
};

SyncGetAudioChannelsLinnCoUkExakt21C::SyncGetAudioChannelsLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}


class SyncGetVersionLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVersionLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    TUint& iVersion;
};

SyncGetVersionLinnCoUkExakt21C::SyncGetVersionLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}


class SyncApplyUpdateLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyUpdateLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncApplyUpdateLinnCoUkExakt21C::SyncApplyUpdateLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}


class SyncPlayTestTrackLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayTestTrackLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncPlayTestTrackLinnCoUkExakt21C::SyncPlayTestTrackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}


class SyncClearTestTrackLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTestTrackLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncClearTestTrackLinnCoUkExakt21C::SyncClearTestTrackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}


class SyncGetIntegratedDevicesPresentLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
    TBool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentLinnCoUkExakt21C::SyncGetIntegratedDevicesPresentLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C() {};
private:
    CpProxyLinnCoUkExakt21C& iService;
};

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C(CpProxyLinnCoUkExakt21C& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}

CpProxyLinnCoUkExakt21C::CpProxyLinnCoUkExakt21C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Exakt2", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetDeviceList = new Action("GetDeviceList");
    param = new OpenHome::Net::ParameterString("List");
    iActionGetDeviceList->AddOutputParameter(param);

    iActionGetDeviceSettings = new Action("GetDeviceSettings");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionGetDeviceSettings->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Settings");
    iActionGetDeviceSettings->AddOutputParameter(param);

    iActionGetSettingsAvailable = new Action("GetSettingsAvailable");
    param = new OpenHome::Net::ParameterBool("SettingsAvailable");
    iActionGetSettingsAvailable->AddOutputParameter(param);

    iActionGetSettingsChangedSeq = new Action("GetSettingsChangedSeq");
    param = new OpenHome::Net::ParameterString("SettingsChangedSeq");
    iActionGetSettingsChangedSeq->AddOutputParameter(param);

    iActionUpdate = new Action("Update");
    param = new OpenHome::Net::ParameterString("Manifest");
    iActionUpdate->AddInputParameter(param);

    iActionUpdateBlocking = new Action("UpdateBlocking");
    param = new OpenHome::Net::ParameterString("Manifest");
    iActionUpdateBlocking->AddInputParameter(param);

    iActionGetUpdateStatus = new Action("GetUpdateStatus");
    param = new OpenHome::Net::ParameterString("UpdateStatus");
    iActionGetUpdateStatus->AddOutputParameter(param);

    iActionGetChannelMap = new Action("GetChannelMap");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionGetChannelMap->AddOutputParameter(param);

    iActionGetAudioChannels = new Action("GetAudioChannels");
    param = new OpenHome::Net::ParameterString("AudioChannels");
    iActionGetAudioChannels->AddOutputParameter(param);

    iActionGetVersion = new Action("GetVersion");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetVersion->AddOutputParameter(param);

    iActionApplyUpdate = new Action("ApplyUpdate");

    iActionPlayTestTrack = new Action("PlayTestTrack");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionPlayTestTrack->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPlayTestTrack->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionPlayTestTrack->AddInputParameter(param);

    iActionClearTestTrack = new Action("ClearTestTrack");

    iActionGetIntegratedDevicesPresent = new Action("GetIntegratedDevicesPresent");
    param = new OpenHome::Net::ParameterBool("IntegratedDevicesPresent");
    iActionGetIntegratedDevicesPresent->AddOutputParameter(param);

    iActionBootIntegratedDevicesToFallback = new Action("BootIntegratedDevicesToFallback");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21C::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyLinnCoUkExakt21C::~CpProxyLinnCoUkExakt21C()
{
    DestroyService();
    delete iActionGetDeviceList;
    delete iActionGetDeviceSettings;
    delete iActionGetSettingsAvailable;
    delete iActionGetSettingsChangedSeq;
    delete iActionUpdate;
    delete iActionUpdateBlocking;
    delete iActionGetUpdateStatus;
    delete iActionGetChannelMap;
    delete iActionGetAudioChannels;
    delete iActionGetVersion;
    delete iActionApplyUpdate;
    delete iActionPlayTestTrack;
    delete iActionClearTestTrack;
    delete iActionGetIntegratedDevicesPresent;
    delete iActionBootIntegratedDevicesToFallback;
}

void CpProxyLinnCoUkExakt21C::SyncGetDeviceList(Brh& aList)
{
    SyncGetDeviceListLinnCoUkExakt21C sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetDeviceList(IAsync& aAsync, Brh& aList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDeviceList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aList);
}

void CpProxyLinnCoUkExakt21C::SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt21C sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetDeviceSettings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetDeviceSettings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSettings);
}

void CpProxyLinnCoUkExakt21C::SyncGetSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt21C sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSettingsAvailable"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSettingsAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt21C::SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt21C sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSettingsChangedSeq"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSettingsChangedSeq);
}

void CpProxyLinnCoUkExakt21C::SyncUpdate(const Brx& aManifest)
{
    SyncUpdateLinnCoUkExakt21C sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndUpdate(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Update"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExakt21C::SyncUpdateBlocking(const Brx& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt21C sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndUpdateBlocking(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("UpdateBlocking"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExakt21C::SyncGetUpdateStatus(Brh& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt21C sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUpdateStatus);
}

void CpProxyLinnCoUkExakt21C::SyncGetChannelMap(Brh& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt21C sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetChannelMap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannelMap);
}

void CpProxyLinnCoUkExakt21C::SyncGetAudioChannels(Brh& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt21C sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAudioChannels"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aAudioChannels);
}

void CpProxyLinnCoUkExakt21C::SyncGetVersion(TUint& aVersion)
{
    SyncGetVersionLinnCoUkExakt21C sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetVersion(IAsync& aAsync, TUint& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt21C::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt21C sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApplyUpdate, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndApplyUpdate(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ApplyUpdate"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExakt21C::SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt21C sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlayTestTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayTestTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndPlayTestTrack(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlayTestTrack"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExakt21C::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt21C sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearTestTrack, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndClearTestTrack(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearTestTrack"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExakt21C::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21C sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt21C::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21C sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21C::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21C::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChannelsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt21C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt21C::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt21C::PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsChangedSeq.Set(iSettingsChangedSeq->Value());
}

void CpProxyLinnCoUkExakt21C::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt21C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt21C::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt21C::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt21C::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt21C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt21C::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt21C::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt21C::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt21C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt21C::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt21C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt21C::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}


THandle STDCALL CpProxyLinnCoUkExakt21Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkExakt21C(aDevice);
}

void STDCALL CpProxyLinnCoUkExakt21Destroy(THandle aHandle)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetDeviceList(THandle aHandle, char** aList)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aList;
    int32_t err = 0;
    try {
        proxyC->SyncGetDeviceList(buf_aList);
        *aList = buf_aList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aList = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceList(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aList;
    *aList = NULL;
    try {
        proxyC->EndGetDeviceList(*async, buf_aList);
        *aList = buf_aList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aSettings;
    int32_t err = 0;
    try {
        proxyC->SyncGetDeviceSettings(buf_aDeviceId, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettings = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSettings;
    *aSettings = NULL;
    try {
        proxyC->EndGetDeviceSettings(*async, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetSettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool SettingsAvailable;
    int32_t err = 0;
    try {
        proxyC->SyncGetSettingsAvailable(SettingsAvailable);
        *aSettingsAvailable = SettingsAvailable? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettingsAvailable = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetSettingsAvailable(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSettingsAvailable(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetSettingsAvailable(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSettingsAvailable)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool SettingsAvailable;
    try {
        proxyC->EndGetSettingsAvailable(*async, SettingsAvailable);
        *aSettingsAvailable = SettingsAvailable? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetSettingsChangedSeq(THandle aHandle, char** aSettingsChangedSeq)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSettingsChangedSeq;
    int32_t err = 0;
    try {
        proxyC->SyncGetSettingsChangedSeq(buf_aSettingsChangedSeq);
        *aSettingsChangedSeq = buf_aSettingsChangedSeq.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettingsChangedSeq = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetSettingsChangedSeq(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSettingsChangedSeq(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetSettingsChangedSeq(THandle aHandle, OhNetHandleAsync aAsync, char** aSettingsChangedSeq)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSettingsChangedSeq;
    *aSettingsChangedSeq = NULL;
    try {
        proxyC->EndGetSettingsChangedSeq(*async, buf_aSettingsChangedSeq);
        *aSettingsChangedSeq = buf_aSettingsChangedSeq.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncUpdate(THandle aHandle, const char* aManifest)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    int32_t err = 0;
    try {
        proxyC->SyncUpdate(buf_aManifest);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginUpdate(THandle aHandle, const char* aManifest, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdate(buf_aManifest, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndUpdate(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncUpdateBlocking(THandle aHandle, const char* aManifest)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    int32_t err = 0;
    try {
        proxyC->SyncUpdateBlocking(buf_aManifest);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginUpdateBlocking(THandle aHandle, const char* aManifest, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdateBlocking(buf_aManifest, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndUpdateBlocking(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndUpdateBlocking(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetUpdateStatus(THandle aHandle, char** aUpdateStatus)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUpdateStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetUpdateStatus(buf_aUpdateStatus);
        *aUpdateStatus = buf_aUpdateStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUpdateStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetUpdateStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetUpdateStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aUpdateStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUpdateStatus;
    *aUpdateStatus = NULL;
    try {
        proxyC->EndGetUpdateStatus(*async, buf_aUpdateStatus);
        *aUpdateStatus = buf_aUpdateStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap;
    int32_t err = 0;
    try {
        proxyC->SyncGetChannelMap(buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aChannelMap = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetChannelMap(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aChannelMap;
    *aChannelMap = NULL;
    try {
        proxyC->EndGetChannelMap(*async, buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels;
    int32_t err = 0;
    try {
        proxyC->SyncGetAudioChannels(buf_aAudioChannels);
        *aAudioChannels = buf_aAudioChannels.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aAudioChannels = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetAudioChannels(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAudioChannels(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetAudioChannels(THandle aHandle, OhNetHandleAsync aAsync, char** aAudioChannels)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aAudioChannels;
    *aAudioChannels = NULL;
    try {
        proxyC->EndGetAudioChannels(*async, buf_aAudioChannels);
        *aAudioChannels = buf_aAudioChannels.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetVersion(*aVersion);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginGetVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetVersion(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetVersion(*async, *aVersion);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncApplyUpdate(THandle aHandle)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncApplyUpdate();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginApplyUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApplyUpdate(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndApplyUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndApplyUpdate(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncPlayTestTrack(THandle aHandle, const char* aChannelMap, const char* aUri, const char* aMetadata)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    int32_t err = 0;
    try {
        proxyC->SyncPlayTestTrack(buf_aChannelMap, buf_aUri, buf_aMetadata);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginPlayTestTrack(THandle aHandle, const char* aChannelMap, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlayTestTrack(buf_aChannelMap, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndPlayTestTrack(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlayTestTrack(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncClearTestTrack(THandle aHandle)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncClearTestTrack();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt21BeginClearTestTrack(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearTestTrack(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndClearTestTrack(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearTestTrack(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt21SyncGetIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt21BeginGetIntegratedDevicesPresent(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIntegratedDevicesPresent(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndGetIntegratedDevicesPresent(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aIntegratedDevicesPresent)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt21SyncBootIntegratedDevicesToFallback(THandle aHandle)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt21BeginBootIntegratedDevicesToFallback(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootIntegratedDevicesToFallback(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21EndBootIntegratedDevicesToFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt21SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertySettingsAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsAvailableChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertySettingsChangedSeqChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsChangedSeqChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertyUpdateStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertyAudioChannelsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChannelsChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt21SetPropertyIntegratedDevicesPresentChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIntegratedDevicesPresentChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt21PropertySettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool SettingsAvailable;
    try {
        proxyC->PropertySettingsAvailable(SettingsAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSettingsAvailable = SettingsAvailable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt21PropertySettingsChangedSeq(THandle aHandle, char** aSettingsChangedSeq)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSettingsChangedSeq;
    try {
        proxyC->PropertySettingsChangedSeq(buf_aSettingsChangedSeq);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSettingsChangedSeq = buf_aSettingsChangedSeq.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyUpdateStatus(THandle aHandle, char** aUpdateStatus)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUpdateStatus;
    try {
        proxyC->PropertyUpdateStatus(buf_aUpdateStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUpdateStatus = buf_aUpdateStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVersion(*aVersion);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt21PropertyIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyLinnCoUkExakt21C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt21C*>(aHandle);
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

