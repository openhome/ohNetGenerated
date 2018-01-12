#include "CpLinnCoUkExakt1.h"
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


class SyncDeviceListLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncDeviceListLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    std::string& iList;
};

SyncDeviceListLinnCoUkExakt1Cpp::SyncDeviceListLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncDeviceSettingsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    std::string& iSettings;
};

SyncDeviceSettingsLinnCoUkExakt1Cpp::SyncDeviceSettingsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncSettingsAvailableLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncSettingsAvailableLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, bool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSettingsAvailableLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    bool& iSettingsAvailable;
};

SyncSettingsAvailableLinnCoUkExakt1Cpp::SyncSettingsAvailableLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, bool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncSettingsAvailableLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncSettingsChangedCountLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncSettingsChangedCountLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, uint32_t& aSettingsChangedCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSettingsChangedCountLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    uint32_t& iSettingsChangedCount;
};

SyncSettingsChangedCountLinnCoUkExakt1Cpp::SyncSettingsChangedCountLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, uint32_t& aSettingsChangedCount)
    : iService(aProxy)
    , iSettingsChangedCount(aSettingsChangedCount)
{
}

void SyncSettingsChangedCountLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSettingsChangedCount(aAsync, iSettingsChangedCount);
}


class SyncUpdateLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
};

SyncUpdateLinnCoUkExakt1Cpp::SyncUpdateLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
};

SyncUpdateBlockingLinnCoUkExakt1Cpp::SyncUpdateBlockingLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    std::string& iUpdateStatus;
    uint32_t& iUpdateTotalPercentage;
    uint32_t& iUpdateTotalJobs;
    uint32_t& iUpdateJob;
    uint32_t& iUpdateJobPercentage;
    std::string& iUpdateJobDescription;
};

SyncGetUpdateStatusLinnCoUkExakt1Cpp::SyncGetUpdateStatusLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
    , iUpdateTotalPercentage(aUpdateTotalPercentage)
    , iUpdateTotalJobs(aUpdateTotalJobs)
    , iUpdateJob(aUpdateJob)
    , iUpdateJobPercentage(aUpdateJobPercentage)
    , iUpdateJobDescription(aUpdateJobDescription)
{
}

void SyncGetUpdateStatusLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus, iUpdateTotalPercentage, iUpdateTotalJobs, iUpdateJob, iUpdateJobPercentage, iUpdateJobDescription);
}


class SyncChannelMapLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncChannelMapLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    std::string& iChannelMap;
};

SyncChannelMapLinnCoUkExakt1Cpp::SyncChannelMapLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncSetChannelMapLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
};

SyncSetChannelMapLinnCoUkExakt1Cpp::SyncSetChannelMapLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncAudioChannelsLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncAudioChannelsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAudioChannelsLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    std::string& iAudioChannels;
};

SyncAudioChannelsLinnCoUkExakt1Cpp::SyncAudioChannelsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, std::string& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncAudioChannelsLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAudioChannels(aAsync, iAudioChannels);
}


class SyncSetAudioChannelsLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncSetAudioChannelsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAudioChannelsLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
};

SyncSetAudioChannelsLinnCoUkExakt1Cpp::SyncSetAudioChannelsLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetAudioChannelsLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAudioChannels(aAsync);
}


class SyncVersionLinnCoUkExakt1Cpp : public SyncProxyAction
{
public:
    SyncVersionLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, uint32_t& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionLinnCoUkExakt1Cpp() {}
private:
    CpProxyLinnCoUkExakt1Cpp& iService;
    uint32_t& iVersion;
};

SyncVersionLinnCoUkExakt1Cpp::SyncVersionLinnCoUkExakt1Cpp(CpProxyLinnCoUkExakt1Cpp& aProxy, uint32_t& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionLinnCoUkExakt1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}


CpProxyLinnCoUkExakt1Cpp::CpProxyLinnCoUkExakt1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::SettingsChangedCountPropertyChanged);
    iSettingsChangedCount = new PropertyUint("SettingsChangedCount", functor);
    AddProperty(iSettingsChangedCount);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateTotalPercentagePropertyChanged);
    iUpdateTotalPercentage = new PropertyUint("UpdateTotalPercentage", functor);
    AddProperty(iUpdateTotalPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateTotalJobsPropertyChanged);
    iUpdateTotalJobs = new PropertyUint("UpdateTotalJobs", functor);
    AddProperty(iUpdateTotalJobs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateJobPropertyChanged);
    iUpdateJob = new PropertyUint("UpdateJob", functor);
    AddProperty(iUpdateJob);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateJobPercentagePropertyChanged);
    iUpdateJobPercentage = new PropertyUint("UpdateJobPercentage", functor);
    AddProperty(iUpdateJobPercentage);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::UpdateJobDescriptionPropertyChanged);
    iUpdateJobDescription = new PropertyString("UpdateJobDescription", functor);
    AddProperty(iUpdateJobDescription);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt1Cpp::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
}

CpProxyLinnCoUkExakt1Cpp::~CpProxyLinnCoUkExakt1Cpp()
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

void CpProxyLinnCoUkExakt1Cpp::SyncDeviceList(std::string& aList)
{
    SyncDeviceListLinnCoUkExakt1Cpp sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndDeviceList(IAsync& aAsync, std::string& aList)
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

void CpProxyLinnCoUkExakt1Cpp::SyncDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncDeviceSettingsLinnCoUkExakt1Cpp sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1Cpp::EndDeviceSettings(IAsync& aAsync, std::string& aSettings)
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

void CpProxyLinnCoUkExakt1Cpp::SyncSettingsAvailable(bool& aSettingsAvailable)
{
    SyncSettingsAvailableLinnCoUkExakt1Cpp sync(*this, aSettingsAvailable);
    BeginSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt1Cpp::SyncSettingsChangedCount(uint32_t& aSettingsChangedCount)
{
    SyncSettingsChangedCountLinnCoUkExakt1Cpp sync(*this, aSettingsChangedCount);
    BeginSettingsChangedCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginSettingsChangedCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSettingsChangedCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSettingsChangedCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndSettingsChangedCount(IAsync& aAsync, uint32_t& aSettingsChangedCount)
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

void CpProxyLinnCoUkExakt1Cpp::SyncUpdate(const std::string& aManifestUri)
{
    SyncUpdateLinnCoUkExakt1Cpp sync(*this);
    BeginUpdate(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginUpdate(const std::string& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    {
        Brn buf((const TByte*)aManifestUri.c_str(), (TUint)aManifestUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1Cpp::SyncUpdateBlocking(const std::string& aManifestUri)
{
    SyncUpdateBlockingLinnCoUkExakt1Cpp sync(*this);
    BeginUpdateBlocking(aManifestUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginUpdateBlocking(const std::string& aManifestUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    {
        Brn buf((const TByte*)aManifestUri.c_str(), (TUint)aManifestUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1Cpp::SyncGetUpdateStatus(std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription)
{
    SyncGetUpdateStatusLinnCoUkExakt1Cpp sync(*this, aUpdateStatus, aUpdateTotalPercentage, aUpdateTotalJobs, aUpdateJob, aUpdateJobPercentage, aUpdateJobDescription);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginGetUpdateStatus(FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1Cpp::EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus, uint32_t& aUpdateTotalPercentage, uint32_t& aUpdateTotalJobs, uint32_t& aUpdateJob, uint32_t& aUpdateJobPercentage, std::string& aUpdateJobDescription)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUpdateStatus.assign((const char*)val.Ptr(), val.Bytes());
    }
    aUpdateTotalPercentage = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateTotalJobs = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateJob = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aUpdateJobPercentage = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUpdateJobDescription.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt1Cpp::SyncChannelMap(std::string& aChannelMap)
{
    SyncChannelMapLinnCoUkExakt1Cpp sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndChannelMap(IAsync& aAsync, std::string& aChannelMap)
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

void CpProxyLinnCoUkExakt1Cpp::SyncSetChannelMap(const std::string& aChannelMap)
{
    SyncSetChannelMapLinnCoUkExakt1Cpp sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginSetChannelMap(const std::string& aChannelMap, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1Cpp::EndSetChannelMap(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1Cpp::SyncAudioChannels(std::string& aAudioChannels)
{
    SyncAudioChannelsLinnCoUkExakt1Cpp sync(*this, aAudioChannels);
    BeginAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndAudioChannels(IAsync& aAsync, std::string& aAudioChannels)
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

void CpProxyLinnCoUkExakt1Cpp::SyncSetAudioChannels(const std::string& aAudioChannels)
{
    SyncSetAudioChannelsLinnCoUkExakt1Cpp sync(*this);
    BeginSetAudioChannels(aAudioChannels, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginSetAudioChannels(const std::string& aAudioChannels, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt1Cpp::EndSetAudioChannels(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt1Cpp::SyncVersion(uint32_t& aVersion)
{
    SyncVersionLinnCoUkExakt1Cpp sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt1Cpp::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt1Cpp::EndVersion(IAsync& aAsync, uint32_t& aVersion)
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

void CpProxyLinnCoUkExakt1Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertySettingsChangedCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateTotalPercentageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTotalPercentageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateTotalJobsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateTotalJobsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateJobChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateJobPercentageChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobPercentageChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyUpdateJobDescriptionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateJobDescriptionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt1Cpp::PropertySettingsAvailable(bool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertySettingsChangedCount(uint32_t& aSettingsChangedCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsChangedCount = iSettingsChangedCount->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateStatus(std::string& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateStatus->Value();
    aUpdateStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateTotalPercentage(uint32_t& aUpdateTotalPercentage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateTotalPercentage = iUpdateTotalPercentage->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateTotalJobs(uint32_t& aUpdateTotalJobs) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateTotalJobs = iUpdateTotalJobs->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateJob(uint32_t& aUpdateJob) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateJob = iUpdateJob->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateJobPercentage(uint32_t& aUpdateJobPercentage) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateJobPercentage = iUpdateJobPercentage->Value();
}

void CpProxyLinnCoUkExakt1Cpp::PropertyUpdateJobDescription(std::string& aUpdateJobDescription) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateJobDescription->Value();
    aUpdateJobDescription.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt1Cpp::PropertyChannelMap(std::string& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannelMap->Value();
    aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt1Cpp::PropertyAudioChannels(std::string& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAudioChannels->Value();
    aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt1Cpp::PropertyVersion(uint32_t& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt1Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt1Cpp::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt1Cpp::SettingsChangedCountPropertyChanged()
{
    ReportEvent(iSettingsChangedCountChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateTotalPercentagePropertyChanged()
{
    ReportEvent(iUpdateTotalPercentageChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateTotalJobsPropertyChanged()
{
    ReportEvent(iUpdateTotalJobsChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateJobPropertyChanged()
{
    ReportEvent(iUpdateJobChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateJobPercentagePropertyChanged()
{
    ReportEvent(iUpdateJobPercentageChanged);
}

void CpProxyLinnCoUkExakt1Cpp::UpdateJobDescriptionPropertyChanged()
{
    ReportEvent(iUpdateJobDescriptionChanged);
}

void CpProxyLinnCoUkExakt1Cpp::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt1Cpp::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt1Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt1Cpp::Version() const
{
  return iCpProxy.Version();
}

