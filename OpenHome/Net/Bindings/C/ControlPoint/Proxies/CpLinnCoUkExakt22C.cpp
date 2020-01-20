#include "CpLinnCoUkExakt22.h"
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

class CpProxyLinnCoUkExakt22C : public CpProxyC
{
public:
    CpProxyLinnCoUkExakt22C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkExakt22C();
    //CpProxyLinnCoUkExakt22* Proxy() { return static_cast<CpProxyLinnCoUkExakt22*>(iProxy); }

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

    void SyncGetTestTrackPlaying(TBool& aTestTrackPlaying);
    void BeginGetTestTrackPlaying(FunctorAsync& aFunctor);
    void EndGetTestTrackPlaying(IAsync& aAsync, TBool& aTestTrackPlaying);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    void SetPropertySettingsChangedSeqChanged(Functor& aFunctor);
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);
    void SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor);
    void SetPropertyTestTrackPlayingChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertySettingsAvailable(TBool& aSettingsAvailable) const;
    void PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const;
    void PropertyUpdateStatus(Brhz& aUpdateStatus) const;
    void PropertyChannelMap(Brhz& aChannelMap) const;
    void PropertyAudioChannels(Brhz& aAudioChannels) const;
    void PropertyVersion(TUint& aVersion) const;
    void PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const;
    void PropertyTestTrackPlaying(TBool& aTestTrackPlaying) const;
private:
    void DeviceListPropertyChanged();
    void SettingsAvailablePropertyChanged();
    void SettingsChangedSeqPropertyChanged();
    void UpdateStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
    void IntegratedDevicesPresentPropertyChanged();
    void TestTrackPlayingPropertyChanged();
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
    Action* iActionGetTestTrackPlaying;
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyString* iSettingsChangedSeq;
    PropertyString* iUpdateStatus;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    PropertyBool* iIntegratedDevicesPresent;
    PropertyBool* iTestTrackPlaying;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedSeqChanged;
    Functor iUpdateStatusChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
    Functor iIntegratedDevicesPresentChanged;
    Functor iTestTrackPlayingChanged;
};


class SyncGetDeviceListLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceListLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iList;
};

SyncGetDeviceListLinnCoUkExakt22C::SyncGetDeviceListLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}


class SyncGetDeviceSettingsLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceSettingsLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iSettings;
};

SyncGetDeviceSettingsLinnCoUkExakt22C::SyncGetDeviceSettingsLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}


class SyncGetSettingsAvailableLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsAvailableLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    TBool& iSettingsAvailable;
};

SyncGetSettingsAvailableLinnCoUkExakt22C::SyncGetSettingsAvailableLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncGetSettingsChangedSeqLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsChangedSeqLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iSettingsChangedSeq;
};

SyncGetSettingsChangedSeqLinnCoUkExakt22C::SyncGetSettingsChangedSeqLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}


class SyncUpdateLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncUpdateLinnCoUkExakt22C::SyncUpdateLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncUpdateBlockingLinnCoUkExakt22C::SyncUpdateBlockingLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iUpdateStatus;
};

SyncGetUpdateStatusLinnCoUkExakt22C::SyncGetUpdateStatusLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}


class SyncGetChannelMapLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChannelMapLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iChannelMap;
};

SyncGetChannelMapLinnCoUkExakt22C::SyncGetChannelMapLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}


class SyncGetAudioChannelsLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAudioChannelsLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    Brh& iAudioChannels;
};

SyncGetAudioChannelsLinnCoUkExakt22C::SyncGetAudioChannelsLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}


class SyncGetVersionLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVersionLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    TUint& iVersion;
};

SyncGetVersionLinnCoUkExakt22C::SyncGetVersionLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}


class SyncApplyUpdateLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyUpdateLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncApplyUpdateLinnCoUkExakt22C::SyncApplyUpdateLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}


class SyncPlayTestTrackLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayTestTrackLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncPlayTestTrackLinnCoUkExakt22C::SyncPlayTestTrackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}


class SyncClearTestTrackLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTestTrackLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncClearTestTrackLinnCoUkExakt22C::SyncClearTestTrackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}


class SyncGetIntegratedDevicesPresentLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    TBool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentLinnCoUkExakt22C::SyncGetIntegratedDevicesPresentLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
};

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


class SyncGetTestTrackPlayingLinnCoUkExakt22C : public SyncProxyAction
{
public:
    SyncGetTestTrackPlayingLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aTestTrackPlaying);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTestTrackPlayingLinnCoUkExakt22C() {};
private:
    CpProxyLinnCoUkExakt22C& iService;
    TBool& iTestTrackPlaying;
};

SyncGetTestTrackPlayingLinnCoUkExakt22C::SyncGetTestTrackPlayingLinnCoUkExakt22C(CpProxyLinnCoUkExakt22C& aProxy, TBool& aTestTrackPlaying)
    : iService(aProxy)
    , iTestTrackPlaying(aTestTrackPlaying)
{
}

void SyncGetTestTrackPlayingLinnCoUkExakt22C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTestTrackPlaying(aAsync, iTestTrackPlaying);
}

CpProxyLinnCoUkExakt22C::CpProxyLinnCoUkExakt22C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Exakt2", 2, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionGetTestTrackPlaying = new Action("GetTestTrackPlaying");
    param = new OpenHome::Net::ParameterBool("TestTrackPlaying");
    iActionGetTestTrackPlaying->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22C::TestTrackPlayingPropertyChanged);
    iTestTrackPlaying = new PropertyBool("TestTrackPlaying", functor);
    AddProperty(iTestTrackPlaying);
}

CpProxyLinnCoUkExakt22C::~CpProxyLinnCoUkExakt22C()
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
    delete iActionGetTestTrackPlaying;
}

void CpProxyLinnCoUkExakt22C::SyncGetDeviceList(Brh& aList)
{
    SyncGetDeviceListLinnCoUkExakt22C sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyLinnCoUkExakt22C::SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt22C sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt22C::EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyLinnCoUkExakt22C::SyncGetSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt22C sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt22C::SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt22C sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq)
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

void CpProxyLinnCoUkExakt22C::SyncUpdate(const Brx& aManifest)
{
    SyncUpdateLinnCoUkExakt22C sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncUpdateBlocking(const Brx& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt22C sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncGetUpdateStatus(Brh& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt22C sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus)
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

void CpProxyLinnCoUkExakt22C::SyncGetChannelMap(Brh& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt22C sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyLinnCoUkExakt22C::SyncGetAudioChannels(Brh& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt22C sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyLinnCoUkExakt22C::SyncGetVersion(TUint& aVersion)
{
    SyncGetVersionLinnCoUkExakt22C sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetVersion(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkExakt22C::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt22C sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApplyUpdate, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndApplyUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt22C sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlayTestTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayTestTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndPlayTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt22C sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearTestTrack, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndClearTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22C sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt22C::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22C sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22C::SyncGetTestTrackPlaying(TBool& aTestTrackPlaying)
{
    SyncGetTestTrackPlayingLinnCoUkExakt22C sync(*this, aTestTrackPlaying);
    BeginGetTestTrackPlaying(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22C::BeginGetTestTrackPlaying(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetTestTrackPlaying, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTestTrackPlaying->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22C::EndGetTestTrackPlaying(IAsync& aAsync, TBool& aTestTrackPlaying)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetTestTrackPlaying"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aTestTrackPlaying = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt22C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChannelsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::SetPropertyTestTrackPlayingChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTestTrackPlayingChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt22C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt22C::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt22C::PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsChangedSeq.Set(iSettingsChangedSeq->Value());
}

void CpProxyLinnCoUkExakt22C::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt22C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt22C::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt22C::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt22C::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt22C::PropertyTestTrackPlaying(TBool& aTestTrackPlaying) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTestTrackPlaying = iTestTrackPlaying->Value();
}

void CpProxyLinnCoUkExakt22C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt22C::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt22C::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt22C::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt22C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt22C::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt22C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt22C::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}

void CpProxyLinnCoUkExakt22C::TestTrackPlayingPropertyChanged()
{
    ReportEvent(iTestTrackPlayingChanged);
}


THandle STDCALL CpProxyLinnCoUkExakt22Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkExakt22C(aDevice);
}

void STDCALL CpProxyLinnCoUkExakt22Destroy(THandle aHandle)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetDeviceList(THandle aHandle, char** aList)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceList(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetSettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetSettingsAvailable(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSettingsAvailable(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetSettingsAvailable(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSettingsAvailable)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetSettingsChangedSeq(THandle aHandle, char** aSettingsChangedSeq)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetSettingsChangedSeq(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSettingsChangedSeq(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetSettingsChangedSeq(THandle aHandle, OhNetHandleAsync aAsync, char** aSettingsChangedSeq)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncUpdate(THandle aHandle, const char* aManifest)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginUpdate(THandle aHandle, const char* aManifest, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdate(buf_aManifest, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncUpdateBlocking(THandle aHandle, const char* aManifest)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginUpdateBlocking(THandle aHandle, const char* aManifest, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifest(aManifest);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdateBlocking(buf_aManifest, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndUpdateBlocking(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetUpdateStatus(THandle aHandle, char** aUpdateStatus)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetUpdateStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetUpdateStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aUpdateStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetChannelMap(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetAudioChannels(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAudioChannels(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetAudioChannels(THandle aHandle, OhNetHandleAsync aAsync, char** aAudioChannels)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetVersion(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncApplyUpdate(THandle aHandle)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginApplyUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApplyUpdate(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndApplyUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncPlayTestTrack(THandle aHandle, const char* aChannelMap, const char* aUri, const char* aMetadata)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginPlayTestTrack(THandle aHandle, const char* aChannelMap, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlayTestTrack(buf_aChannelMap, buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndPlayTestTrack(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncClearTestTrack(THandle aHandle)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginClearTestTrack(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearTestTrack(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndClearTestTrack(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginGetIntegratedDevicesPresent(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetIntegratedDevicesPresent(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetIntegratedDevicesPresent(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aIntegratedDevicesPresent)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncBootIntegratedDevicesToFallback(THandle aHandle)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt22BeginBootIntegratedDevicesToFallback(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootIntegratedDevicesToFallback(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndBootIntegratedDevicesToFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22SyncGetTestTrackPlaying(THandle aHandle, uint32_t* aTestTrackPlaying)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool TestTrackPlaying;
    int32_t err = 0;
    try {
        proxyC->SyncGetTestTrackPlaying(TestTrackPlaying);
        *aTestTrackPlaying = TestTrackPlaying? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aTestTrackPlaying = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt22BeginGetTestTrackPlaying(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetTestTrackPlaying(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22EndGetTestTrackPlaying(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aTestTrackPlaying)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool TestTrackPlaying;
    try {
        proxyC->EndGetTestTrackPlaying(*async, TestTrackPlaying);
        *aTestTrackPlaying = TestTrackPlaying? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertySettingsAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsAvailableChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertySettingsChangedSeqChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsChangedSeqChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyUpdateStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyAudioChannelsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChannelsChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyIntegratedDevicesPresentChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIntegratedDevicesPresentChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt22SetPropertyTestTrackPlayingChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTestTrackPlayingChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertySettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertySettingsChangedSeq(THandle aHandle, char** aSettingsChangedSeq)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyUpdateStatus(THandle aHandle, char** aUpdateStatus)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVersion(*aVersion);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyIntegratedDevicesPresent(THandle aHandle, uint32_t* aIntegratedDevicesPresent)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt22PropertyTestTrackPlaying(THandle aHandle, uint32_t* aTestTrackPlaying)
{
    CpProxyLinnCoUkExakt22C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt22C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool TestTrackPlaying;
    try {
        proxyC->PropertyTestTrackPlaying(TestTrackPlaying);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aTestTrackPlaying = TestTrackPlaying? 1 : 0;
    return 0;
}

