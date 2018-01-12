#include "CpLinnCoUkExakt1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncDeviceListLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncDeviceListLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    Brh& iList;
};

class SyncDeviceSettingsLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncDeviceSettingsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    Brh& iSettings;
};

class SyncSettingsAvailableLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncSettingsAvailableLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    TBool& iSettingsAvailable;
};

class SyncSettingsChangedCountLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncSettingsChangedCountLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TUint& aSettingsChangedCount);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    TUint& iSettingsChangedCount;
};

class SyncUpdateLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
};

class SyncUpdateBlockingLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
};

class SyncGetUpdateStatusLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    Brh& iUpdateStatus;
    TUint& iUpdateTotalPercentage;
    TUint& iUpdateTotalJobs;
    TUint& iUpdateJob;
    TUint& iUpdateJobPercentage;
    Brh& iUpdateJobDescription;
};

class SyncChannelMapLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    Brh& iChannelMap;
};

class SyncSetChannelMapLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncSetChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
};

class SyncAudioChannelsLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    Brh& iAudioChannels;
};

class SyncSetAudioChannelsLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncSetAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
};

class SyncVersionLinnCoUkExakt1 : public SyncProxyAction
{
public:
    SyncVersionLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt1& iService;
    TUint& iVersion;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncDeviceListLinnCoUkExakt1

SyncDeviceListLinnCoUkExakt1::SyncDeviceListLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}

// SyncDeviceSettingsLinnCoUkExakt1

SyncDeviceSettingsLinnCoUkExakt1::SyncDeviceSettingsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}

// SyncSettingsAvailableLinnCoUkExakt1

SyncSettingsAvailableLinnCoUkExakt1::SyncSettingsAvailableLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncSettingsAvailableLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsAvailable(aAsync, iSettingsAvailable);
}

// SyncSettingsChangedCountLinnCoUkExakt1

SyncSettingsChangedCountLinnCoUkExakt1::SyncSettingsChangedCountLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TUint& aSettingsChangedCount)
    : iService(aProxy)
    , iSettingsChangedCount(aSettingsChangedCount)
{
}

void SyncSettingsChangedCountLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsChangedCount(aAsync, iSettingsChangedCount);
}

// SyncUpdateLinnCoUkExakt1

SyncUpdateLinnCoUkExakt1::SyncUpdateLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}

// SyncUpdateBlockingLinnCoUkExakt1

SyncUpdateBlockingLinnCoUkExakt1::SyncUpdateBlockingLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}

// SyncGetUpdateStatusLinnCoUkExakt1

SyncGetUpdateStatusLinnCoUkExakt1::SyncGetUpdateStatusLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
    , iUpdateTotalPercentage(aUpdateTotalPercentage)
    , iUpdateTotalJobs(aUpdateTotalJobs)
    , iUpdateJob(aUpdateJob)
    , iUpdateJobPercentage(aUpdateJobPercentage)
    , iUpdateJobDescription(aUpdateJobDescription)
{
}

void SyncGetUpdateStatusLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus, iUpdateTotalPercentage, iUpdateTotalJobs, iUpdateJob, iUpdateJobPercentage, iUpdateJobDescription);
}

// SyncChannelMapLinnCoUkExakt1

SyncChannelMapLinnCoUkExakt1::SyncChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}

// SyncSetChannelMapLinnCoUkExakt1

SyncSetChannelMapLinnCoUkExakt1::SyncSetChannelMapLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}

// SyncAudioChannelsLinnCoUkExakt1

SyncAudioChannelsLinnCoUkExakt1::SyncAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}

// SyncSetAudioChannelsLinnCoUkExakt1

SyncSetAudioChannelsLinnCoUkExakt1::SyncSetAudioChannelsLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}

// SyncVersionLinnCoUkExakt1

SyncVersionLinnCoUkExakt1::SyncVersionLinnCoUkExakt1(CpProxyLinnCoUkExakt1& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionLinnCoUkExakt1::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


// CpProxyLinnCoUkExakt1

CpProxyLinnCoUkExakt1::CpProxyLinnCoUkExakt1(CpDevice& aDevice)
    : iCpProxy("linn-co-uk", "Exakt", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::SettingsChangedCountPropertyChanged);
    iSettingsChangedCount = new PropertyUint("SettingsChangedCount", functor);
    AddProperty(iSettingsChangedCount);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateTotalPercentagePropertyChanged);
    iUpdateTotalPercentage = new PropertyUint("UpdateTotalPercentage", functor);
    AddProperty(iUpdateTotalPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateTotalJobsPropertyChanged);
    iUpdateTotalJobs = new PropertyUint("UpdateTotalJobs", functor);
    AddProperty(iUpdateTotalJobs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateJobPropertyChanged);
    iUpdateJob = new PropertyUint("UpdateJob", functor);
    AddProperty(iUpdateJob);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateJobPercentagePropertyChanged);
    iUpdateJobPercentage = new PropertyUint("UpdateJobPercentage", functor);
    AddProperty(iUpdateJobPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::UpdateJobDescriptionPropertyChanged);
    iUpdateJobDescription = new PropertyString("UpdateJobDescription", functor);
    AddProperty(iUpdateJobDescription);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
}

CpProxyLinnCoUkExakt1::~CpProxyLinnCoUkExakt1()
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

void CpProxyLinnCoUkExakt1::SyncDeviceList(Brh& aList)
{
    SyncDeviceListLinnCoUkExakt1 sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyLinnCoUkExakt1::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsLinnCoUkExakt1 sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyLinnCoUkExakt1::SyncSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncSettingsAvailableLinnCoUkExakt1 sync(*this, aSettingsAvailable);
    BeginSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt1::SyncSettingsChangedCount(TUint& aSettingsChangedCount)
{
    SyncSettingsChangedCountLinnCoUkExakt1 sync(*this, aSettingsChangedCount);
    BeginSettingsChangedCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginSettingsChangedCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSettingsChangedCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsChangedCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndSettingsChangedCount(IAsync& aAsync, TUint& aSettingsChangedCount)
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

void CpProxyLinnCoUkExakt1::SyncUpdate(const Brx& aManifestUri)
{
    SyncUpdateLinnCoUkExakt1 sync(*this);
    BeginUpdate(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginUpdate(const Brx& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifestUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1::SyncUpdateBlocking(const Brx& aManifestUri)
{
    SyncUpdateBlockingLinnCoUkExakt1 sync(*this);
    BeginUpdateBlocking(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginUpdateBlocking(const Brx& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifestUri));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1::SyncGetUpdateStatus(Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
{
    SyncGetUpdateStatusLinnCoUkExakt1 sync(*this, aUpdateStatus, aUpdateTotalPercentage, aUpdateTotalJobs, aUpdateJob, aUpdateJobPercentage, aUpdateJobDescription);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus, TUint& aUpdateTotalPercentage, TUint& aUpdateTotalJobs, TUint& aUpdateJob, TUint& aUpdateJobPercentage, Brh& aUpdateJobDescription)
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

void CpProxyLinnCoUkExakt1::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapLinnCoUkExakt1 sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyLinnCoUkExakt1::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapLinnCoUkExakt1 sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1::SyncAudioChannels(Brh& aAudioChannels)
{
    SyncAudioChannelsLinnCoUkExakt1 sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyLinnCoUkExakt1::SyncSetAudioChannels(const Brx& aAudioChannels)
{
    SyncSetAudioChannelsLinnCoUkExakt1 sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginSetAudioChannels(const Brx& aAudioChannels, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetAudioChannels, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAudioChannels->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aAudioChannels));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1::SyncVersion(TUint& aVersion)
{
    SyncVersionLinnCoUkExakt1 sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1::EndVersion(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkExakt1::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertySettingsChangedCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateTotalPercentageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTotalPercentageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateTotalJobsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTotalJobsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateJobChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateJobPercentageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobPercentageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyUpdateJobDescriptionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobDescriptionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt1::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt1::PropertySettingsChangedCount(TUint& aSettingsChangedCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsChangedCount = iSettingsChangedCount->Value();
}

void CpProxyLinnCoUkExakt1::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt1::PropertyUpdateTotalPercentage(TUint& aUpdateTotalPercentage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateTotalPercentage = iUpdateTotalPercentage->Value();
}

void CpProxyLinnCoUkExakt1::PropertyUpdateTotalJobs(TUint& aUpdateTotalJobs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateTotalJobs = iUpdateTotalJobs->Value();
}

void CpProxyLinnCoUkExakt1::PropertyUpdateJob(TUint& aUpdateJob) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateJob = iUpdateJob->Value();
}

void CpProxyLinnCoUkExakt1::PropertyUpdateJobPercentage(TUint& aUpdateJobPercentage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateJobPercentage = iUpdateJobPercentage->Value();
}

void CpProxyLinnCoUkExakt1::PropertyUpdateJobDescription(Brhz& aUpdateJobDescription) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateJobDescription.Set(iUpdateJobDescription->Value());
}

void CpProxyLinnCoUkExakt1::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt1::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt1::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt1::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt1::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt1::SettingsChangedCountPropertyChanged()
{
    ReportEvent(iSettingsChangedCountChanged);
}

void CpProxyLinnCoUkExakt1::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt1::UpdateTotalPercentagePropertyChanged()
{
    ReportEvent(iUpdateTotalPercentageChanged);
}

void CpProxyLinnCoUkExakt1::UpdateTotalJobsPropertyChanged()
{
    ReportEvent(iUpdateTotalJobsChanged);
}

void CpProxyLinnCoUkExakt1::UpdateJobPropertyChanged()
{
    ReportEvent(iUpdateJobChanged);
}

void CpProxyLinnCoUkExakt1::UpdateJobPercentagePropertyChanged()
{
    ReportEvent(iUpdateJobPercentageChanged);
}

void CpProxyLinnCoUkExakt1::UpdateJobDescriptionPropertyChanged()
{
    ReportEvent(iUpdateJobDescriptionChanged);
}

void CpProxyLinnCoUkExakt1::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt1::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt1::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


void CpProxyLinnCoUkExakt1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt1::Version() const
{
  return iCpProxy.Version();
}


