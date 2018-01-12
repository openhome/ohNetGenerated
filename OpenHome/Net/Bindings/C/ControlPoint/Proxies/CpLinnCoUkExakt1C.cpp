#include "CpLinnCoUkExakt1.h"
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

class CpProxyLinnCoUkExakt1C : public CpProxyC
{
public:
    CpProxyLinnCoUkExakt1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkExakt1C();
    //CpProxyLinnCoUkExakt1* Proxy() { return static_cast<CpProxyLinnCoUkExakt1*>(iProxy); }

    void SyncDeviceList(Brh& aList);
    void BeginDeviceList(FunctorAsync& aFunctor);
    void EndDeviceList(IAsync& aAsync, Brh& aList);

    void SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
    void BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    void EndDeviceSettings(IAsync& aAsync, Brh& aSettings);

    void SyncSettingsAvailable(TBool& aSettingsAvailable);
    void BeginSettingsAvailable(FunctorAsync& aFunctor);
    void EndSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable);

    void SyncSettingsChangedCount(TUint& aSettingsChangedCount);
    void BeginSettingsChangedCount(FunctorAsync& aFunctor);
    void EndSettingsChangedCount(IAsync& aAsync, TUint& aSettingsChangedCount);

    void SyncUpdate(const Brx& aManifestUri);
    void BeginUpdate(const Brx& aManifestUri, FunctorAsync& aFunctor);
    void EndUpdate(IAsync& aAsync);

    void SyncUpdateBlocking(const Brx& aManifestUri);
    void BeginUpdateBlocking(const Brx& aManifestUri, FunctorAsync& aFunctor);
    void EndUpdateBlocking(IAsync& aAsync);

    void SyncGetUpdateStatus(Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription);
    void BeginGetUpdateStatus(FunctorAsync& aFunctor);
    void EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription);

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

    void SyncVersion(TUint& aVersion);
    void BeginVersion(FunctorAsync& aFunctor);
    void EndVersion(IAsync& aAsync, TUint& aVersion);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertySettingsAvailableChanged(Functor& aFunctor);
    void SetPropertySettingsChangedCountChanged(Functor& aFunctor);
    void SetPropertyUpdateStatusChanged(Functor& aFunctor);
    void SetPropertyUpdateTotalPercentageChanged(Functor& aFunctor);
    void SetPropertyUpdateTotalJobsChanged(Functor& aFunctor);
    void SetPropertyUpdateJobChanged(Functor& aFunctor);
    void SetPropertyUpdateJobPercentageChanged(Functor& aFunctor);
    void SetPropertyUpdateJobDescriptionChanged(Functor& aFunctor);
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    void SetPropertyAudioChannelsChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertySettingsAvailable(TBool& aSettingsAvailable) const;
    void PropertySettingsChangedCount(TUint& aSettingsChangedCount) const;
    void PropertyUpdateStatus(Brhz& aUpdateStatus) const;
    void PropertyUpdateTotalPercentage(TUint& aUpdateTotalPercentage) const;
    void PropertyUpdateTotalJobs(TUint& aUpdateTotalJobs) const;
    void PropertyUpdateJob(TUint& aUpdateJob) const;
    void PropertyUpdateJobPercentage(TUint& aUpdateJobPercentage) const;
    void PropertyUpdateJobDescription(Brhz& aUpdateJobDescription) const;
    void PropertyChannelMap(Brhz& aChannelMap) const;
    void PropertyAudioChannels(Brhz& aAudioChannels) const;
    void PropertyVersion(TUint& aVersion) const;
private:
    void DeviceListPropertyChanged();
    void SettingsAvailablePropertyChanged();
    void SettingsChangedCountPropertyChanged();
    void UpdateStatusPropertyChanged();
    void UpdateTotalPercentagePropertyChanged();
    void UpdateTotalJobsPropertyChanged();
    void UpdateJobPropertyChanged();
    void UpdateJobPercentagePropertyChanged();
    void UpdateJobDescriptionPropertyChanged();
    void ChannelMapPropertyChanged();
    void AudioChannelsPropertyChanged();
    void VersionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionSettingsAvailable;
    Action* iActionSettingsChangedCount;
    Action* iActionUpdate;
    Action* iActionUpdateBlocking;
    Action* iActionGetUpdateStatus;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionAudioChannels;
    Action* iActionSetAudioChannels;
    Action* iActionVersion;
    PropertyString* iDeviceList;
    PropertyBool* iSettingsAvailable;
    PropertyUint* iSettingsChangedCount;
    PropertyString* iUpdateStatus;
    PropertyUint* iUpdateTotalPercentage;
    PropertyUint* iUpdateTotalJobs;
    PropertyUint* iUpdateJob;
    PropertyUint* iUpdateJobPercentage;
    PropertyString* iUpdateJobDescription;
    PropertyString* iChannelMap;
    PropertyString* iAudioChannels;
    PropertyUint* iVersion;
    Functor iDeviceListChanged;
    Functor iSettingsAvailableChanged;
    Functor iSettingsChangedCountChanged;
    Functor iUpdateStatusChanged;
    Functor iUpdateTotalPercentageChanged;
    Functor iUpdateTotalJobsChanged;
    Functor iUpdateJobChanged;
    Functor iUpdateJobPercentageChanged;
    Functor iUpdateJobDescriptionChanged;
    Functor iChannelMapChanged;
    Functor iAudioChannelsChanged;
    Functor iVersionChanged;
};


class SyncDeviceListLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncDeviceListLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    Brh& iList;
};

SyncDeviceListLinnCoUkExakt1C::SyncDeviceListLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncDeviceSettingsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsLinnCoUkExakt1C::SyncDeviceSettingsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncSettingsAvailableLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncSettingsAvailableLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSettingsAvailableLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    TBool& iSettingsAvailable;
};

SyncSettingsAvailableLinnCoUkExakt1C::SyncSettingsAvailableLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncSettingsAvailableLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncSettingsChangedCountLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncSettingsChangedCountLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TUint& aSettingsChangedCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSettingsChangedCountLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    TUint& iSettingsChangedCount;
};

SyncSettingsChangedCountLinnCoUkExakt1C::SyncSettingsChangedCountLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TUint& aSettingsChangedCount)
    : iService(aProxy)
    , iSettingsChangedCount(aSettingsChangedCount)
{
}

void SyncSettingsChangedCountLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsChangedCount(aAsync, iSettingsChangedCount);
}


class SyncUpdateLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
};

SyncUpdateLinnCoUkExakt1C::SyncUpdateLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
};

SyncUpdateBlockingLinnCoUkExakt1C::SyncUpdateBlockingLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    Brh& iUpdateStatus;
    TUint& iUpdateTotalPercentage;
    TUint& iUpdateTotalJobs;
    TUint& iUpdateJob;
    TUint& iUpdateJobPercentage;
    Brh& iUpdateJobDescription;
};

SyncGetUpdateStatusLinnCoUkExakt1C::SyncGetUpdateStatusLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
    , iUpdateTotalPercentage(aUpdateTotalPercentage)
    , iUpdateTotalJobs(aUpdateTotalJobs)
    , iUpdateJob(aUpdateJob)
    , iUpdateJobPercentage(aUpdateJobPercentage)
    , iUpdateJobDescription(aUpdateJobDescription)
{
}

void SyncGetUpdateStatusLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus, iUpdateTotalPercentage, iUpdateTotalJobs, iUpdateJob, iUpdateJobPercentage, iUpdateJobDescription);
}


class SyncChannelMapLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncChannelMapLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    Brh& iChannelMap;
};

SyncChannelMapLinnCoUkExakt1C::SyncChannelMapLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncSetChannelMapLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
};

SyncSetChannelMapLinnCoUkExakt1C::SyncSetChannelMapLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncAudioChannelsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    Brh& iAudioChannels;
};

SyncAudioChannelsLinnCoUkExakt1C::SyncAudioChannelsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncSetAudioChannelsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
};

SyncSetAudioChannelsLinnCoUkExakt1C::SyncSetAudioChannelsLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionLinnCoUkExakt1C : public SyncProxyAction
{
public:
    SyncVersionLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionLinnCoUkExakt1C() {};
private:
    CpProxyLinnCoUkExakt1C& iService;
    TUint& iVersion;
};

SyncVersionLinnCoUkExakt1C::SyncVersionLinnCoUkExakt1C(CpProxyLinnCoUkExakt1C& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionLinnCoUkExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}

CpProxyLinnCoUkExakt1C::CpProxyLinnCoUkExakt1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Exakt", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionSettingsAvailable = new Action("SettingsAvailable");
    param = new OpenHome::Net::ParameterBool("SettingsAvailable");
    iActionSettingsAvailable->AddOutputParameter(param);

    iActionSettingsChangedCount = new Action("SettingsChangedCount");
    param = new OpenHome::Net::ParameterUint("SettingsChangedCount");
    iActionSettingsChangedCount->AddOutputParameter(param);

    iActionUpdate = new Action("Update");
    param = new OpenHome::Net::ParameterString("ManifestUri");
    iActionUpdate->AddInputParameter(param);

    iActionUpdateBlocking = new Action("UpdateBlocking");
    param = new OpenHome::Net::ParameterString("ManifestUri");
    iActionUpdateBlocking->AddInputParameter(param);

    iActionGetUpdateStatus = new Action("GetUpdateStatus");
    param = new OpenHome::Net::ParameterString("UpdateStatus");
    iActionGetUpdateStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateTotalPercentage");
    iActionGetUpdateStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateTotalJobs");
    iActionGetUpdateStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateJob");
    iActionGetUpdateStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("UpdateJobPercentage");
    iActionGetUpdateStatus->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("UpdateJobDescription");
    iActionGetUpdateStatus->AddOutputParameter(param);

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
    param = new OpenHome::Net::ParameterUint("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::SettingsChangedCountPropertyChanged);
    iSettingsChangedCount = new PropertyUint("SettingsChangedCount", functor);
    AddProperty(iSettingsChangedCount);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateTotalPercentagePropertyChanged);
    iUpdateTotalPercentage = new PropertyUint("UpdateTotalPercentage", functor);
    AddProperty(iUpdateTotalPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateTotalJobsPropertyChanged);
    iUpdateTotalJobs = new PropertyUint("UpdateTotalJobs", functor);
    AddProperty(iUpdateTotalJobs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateJobPropertyChanged);
    iUpdateJob = new PropertyUint("UpdateJob", functor);
    AddProperty(iUpdateJob);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateJobPercentagePropertyChanged);
    iUpdateJobPercentage = new PropertyUint("UpdateJobPercentage", functor);
    AddProperty(iUpdateJobPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::UpdateJobDescriptionPropertyChanged);
    iUpdateJobDescription = new PropertyString("UpdateJobDescription", functor);
    AddProperty(iUpdateJobDescription);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1C::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
}

CpProxyLinnCoUkExakt1C::~CpProxyLinnCoUkExakt1C()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionSettingsAvailable;
    delete iActionSettingsChangedCount;
    delete iActionUpdate;
    delete iActionUpdateBlocking;
    delete iActionGetUpdateStatus;
    delete iActionChannelMap;
    delete iActionSetChannelMap;
    delete iActionAudioChannels;
    delete iActionSetAudioChannels;
    delete iActionVersion;
}

void CpProxyLinnCoUkExakt1C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListLinnCoUkExakt1C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyLinnCoUkExakt1C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsLinnCoUkExakt1C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyLinnCoUkExakt1C::SyncSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncSettingsAvailableLinnCoUkExakt1C sync(*this, aSettingsAvailable);
    BeginSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SettingsAvailable"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSettingsAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt1C::SyncSettingsChangedCount(TUint& aSettingsChangedCount)
{
    SyncSettingsChangedCountLinnCoUkExakt1C sync(*this, aSettingsChangedCount);
    BeginSettingsChangedCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginSettingsChangedCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSettingsChangedCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsChangedCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndSettingsChangedCount(IAsync& aAsync, TUint& aSettingsChangedCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SettingsChangedCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aSettingsChangedCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt1C::SyncUpdate(const Brx& aManifestUri)
{
    SyncUpdateLinnCoUkExakt1C sync(*this);
    BeginUpdate(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginUpdate(const Brx& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifestUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1C::SyncUpdateBlocking(const Brx& aManifestUri)
{
    SyncUpdateBlockingLinnCoUkExakt1C sync(*this);
    BeginUpdateBlocking(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginUpdateBlocking(const Brx& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifestUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1C::SyncGetUpdateStatus(Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
{
    SyncGetUpdateStatusLinnCoUkExakt1C sync(*this, aUpdateStatus, aUpdateTotalPercentage, aUpdateTotalJobs, aUpdateJob, aUpdateJobPercentage, aUpdateJobDescription);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
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
    aUpdateTotalPercentage = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateTotalJobs = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateJob = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateJobPercentage = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUpdateJobDescription);
}

void CpProxyLinnCoUkExakt1C::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapLinnCoUkExakt1C sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyLinnCoUkExakt1C::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapLinnCoUkExakt1C sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1C::SyncAudioChannels(Brh& aAudioChannels)
{
    SyncAudioChannelsLinnCoUkExakt1C sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyLinnCoUkExakt1C::SyncSetAudioChannels(const Brx& aAudioChannels)
{
    SyncSetAudioChannelsLinnCoUkExakt1C sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAudioChannels));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1C::SyncVersion(TUint& aVersion)
{
    SyncVersionLinnCoUkExakt1C sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1C::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1C::EndVersion(IAsync& aAsync, TUint& aVersion)
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
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExakt1C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertySettingsChangedCountChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSettingsChangedCountChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateTotalPercentageChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateTotalPercentageChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateTotalJobsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateTotalJobsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateJobChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateJobChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateJobPercentageChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateJobPercentageChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyUpdateJobDescriptionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateJobDescriptionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAudioChannelsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExakt1C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt1C::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt1C::PropertySettingsChangedCount(TUint& aSettingsChangedCount) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSettingsChangedCount = iSettingsChangedCount->Value();
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateTotalPercentage(TUint& aUpdateTotalPercentage) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateTotalPercentage = iUpdateTotalPercentage->Value();
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateTotalJobs(TUint& aUpdateTotalJobs) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateTotalJobs = iUpdateTotalJobs->Value();
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateJob(TUint& aUpdateJob) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateJob = iUpdateJob->Value();
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateJobPercentage(TUint& aUpdateJobPercentage) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateJobPercentage = iUpdateJobPercentage->Value();
}

void CpProxyLinnCoUkExakt1C::PropertyUpdateJobDescription(Brhz& aUpdateJobDescription) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateJobDescription.Set(iUpdateJobDescription->Value());
}

void CpProxyLinnCoUkExakt1C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt1C::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt1C::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt1C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt1C::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt1C::SettingsChangedCountPropertyChanged()
{
    ReportEvent(iSettingsChangedCountChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateTotalPercentagePropertyChanged()
{
    ReportEvent(iUpdateTotalPercentageChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateTotalJobsPropertyChanged()
{
    ReportEvent(iUpdateTotalJobsChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateJobPropertyChanged()
{
    ReportEvent(iUpdateJobChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateJobPercentagePropertyChanged()
{
    ReportEvent(iUpdateJobPercentageChanged);
}

void CpProxyLinnCoUkExakt1C::UpdateJobDescriptionPropertyChanged()
{
    ReportEvent(iUpdateJobDescriptionChanged);
}

void CpProxyLinnCoUkExakt1C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt1C::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt1C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


THandle STDCALL CpProxyLinnCoUkExakt1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkExakt1C(aDevice);
}

void STDCALL CpProxyLinnCoUkExakt1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkExakt1SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncSettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool SettingsAvailable;
    int32_t err = 0;
    try {
        proxyC->SyncSettingsAvailable(SettingsAvailable);
        *aSettingsAvailable = SettingsAvailable? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettingsAvailable = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginSettingsAvailable(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSettingsAvailable(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndSettingsAvailable(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSettingsAvailable)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool SettingsAvailable;
    try {
        proxyC->EndSettingsAvailable(*async, SettingsAvailable);
        *aSettingsAvailable = SettingsAvailable? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt1SyncSettingsChangedCount(THandle aHandle, uint32_t* aSettingsChangedCount)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSettingsChangedCount(*aSettingsChangedCount);
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettingsChangedCount = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginSettingsChangedCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSettingsChangedCount(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndSettingsChangedCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aSettingsChangedCount)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSettingsChangedCount(*async, *aSettingsChangedCount);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt1SyncUpdate(THandle aHandle, const char* aManifestUri)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifestUri(aManifestUri);
    int32_t err = 0;
    try {
        proxyC->SyncUpdate(buf_aManifestUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginUpdate(THandle aHandle, const char* aManifestUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifestUri(aManifestUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdate(buf_aManifestUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndUpdate(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncUpdateBlocking(THandle aHandle, const char* aManifestUri)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifestUri(aManifestUri);
    int32_t err = 0;
    try {
        proxyC->SyncUpdateBlocking(buf_aManifestUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginUpdateBlocking(THandle aHandle, const char* aManifestUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aManifestUri(aManifestUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdateBlocking(buf_aManifestUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndUpdateBlocking(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncGetUpdateStatus(THandle aHandle, char** aUpdateStatus, uint32_t* aUpdateTotalPercentage, uint32_t* aUpdateTotalJobs, uint32_t* aUpdateJob, uint32_t* aUpdateJobPercentage, char** aUpdateJobDescription)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUpdateStatus;
    Brh buf_aUpdateJobDescription;
    int32_t err = 0;
    try {
        proxyC->SyncGetUpdateStatus(buf_aUpdateStatus, *aUpdateTotalPercentage, *aUpdateTotalJobs, *aUpdateJob, *aUpdateJobPercentage, buf_aUpdateJobDescription);
        *aUpdateStatus = buf_aUpdateStatus.Extract();
        *aUpdateJobDescription = buf_aUpdateJobDescription.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUpdateStatus = NULL;
        *aUpdateTotalPercentage = 0;
        *aUpdateTotalJobs = 0;
        *aUpdateJob = 0;
        *aUpdateJobPercentage = 0;
        *aUpdateJobDescription = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginGetUpdateStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndGetUpdateStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aUpdateStatus, uint32_t* aUpdateTotalPercentage, uint32_t* aUpdateTotalJobs, uint32_t* aUpdateJob, uint32_t* aUpdateJobPercentage, char** aUpdateJobDescription)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUpdateStatus;
    *aUpdateStatus = NULL;
    Brh buf_aUpdateJobDescription;
    *aUpdateJobDescription = NULL;
    try {
        proxyC->EndGetUpdateStatus(*async, buf_aUpdateStatus, *aUpdateTotalPercentage, *aUpdateTotalJobs, *aUpdateJob, *aUpdateJobPercentage, buf_aUpdateJobDescription);
        *aUpdateStatus = buf_aUpdateStatus.Extract();
        *aUpdateJobDescription = buf_aUpdateJobDescription.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExakt1SyncChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannelMap(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncSetChannelMap(THandle aHandle, const char* aChannelMap)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginSetChannelMap(THandle aHandle, const char* aChannelMap, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetChannelMap(buf_aChannelMap, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndSetChannelMap(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginAudioChannels(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAudioChannels(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndAudioChannels(THandle aHandle, OhNetHandleAsync aAsync, char** aAudioChannels)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncSetAudioChannels(THandle aHandle, const char* aAudioChannels)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkExakt1BeginSetAudioChannels(THandle aHandle, const char* aAudioChannels, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aAudioChannels(aAudioChannels);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAudioChannels(buf_aAudioChannels, functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndSetAudioChannels(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1SyncVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVersion(*aVersion);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1BeginVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1EndVersion(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVersion(*async, *aVersion);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertySettingsAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsAvailableChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertySettingsChangedCountChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySettingsChangedCountChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateTotalPercentageChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateTotalPercentageChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateTotalJobsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateTotalJobsChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateJobChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateJobChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateJobPercentageChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateJobPercentageChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyUpdateJobDescriptionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateJobDescriptionChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyAudioChannelsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAudioChannelsChanged(functor);
}

void STDCALL CpProxyLinnCoUkExakt1SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1PropertySettingsAvailable(THandle aHandle, uint32_t* aSettingsAvailable)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1PropertySettingsChangedCount(THandle aHandle, uint32_t* aSettingsChangedCount)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySettingsChangedCount(*aSettingsChangedCount);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateStatus(THandle aHandle, char** aUpdateStatus)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateTotalPercentage(THandle aHandle, uint32_t* aUpdateTotalPercentage)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateTotalPercentage(*aUpdateTotalPercentage);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateTotalJobs(THandle aHandle, uint32_t* aUpdateTotalJobs)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateTotalJobs(*aUpdateTotalJobs);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateJob(THandle aHandle, uint32_t* aUpdateJob)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateJob(*aUpdateJob);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateJobPercentage(THandle aHandle, uint32_t* aUpdateJobPercentage)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateJobPercentage(*aUpdateJobPercentage);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyUpdateJobDescription(THandle aHandle, char** aUpdateJobDescription)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUpdateJobDescription;
    try {
        proxyC->PropertyUpdateJobDescription(buf_aUpdateJobDescription);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUpdateJobDescription = buf_aUpdateJobDescription.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyAudioChannels(THandle aHandle, char** aAudioChannels)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkExakt1PropertyVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkExakt1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVersion(*aVersion);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

