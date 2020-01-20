#include "CpLinnCoUkExakt22.h"
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


class SyncGetDeviceListLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceListLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iList;
};

SyncGetDeviceListLinnCoUkExakt22Cpp::SyncGetDeviceListLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}


class SyncGetDeviceSettingsLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceSettingsLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iSettings;
};

SyncGetDeviceSettingsLinnCoUkExakt22Cpp::SyncGetDeviceSettingsLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}


class SyncGetSettingsAvailableLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsAvailableLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    bool& iSettingsAvailable;
};

SyncGetSettingsAvailableLinnCoUkExakt22Cpp::SyncGetSettingsAvailableLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iSettingsChangedSeq;
};

SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp::SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}


class SyncUpdateLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncUpdateLinnCoUkExakt22Cpp::SyncUpdateLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncUpdateBlockingLinnCoUkExakt22Cpp::SyncUpdateBlockingLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iUpdateStatus;
};

SyncGetUpdateStatusLinnCoUkExakt22Cpp::SyncGetUpdateStatusLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}


class SyncGetChannelMapLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChannelMapLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iChannelMap;
};

SyncGetChannelMapLinnCoUkExakt22Cpp::SyncGetChannelMapLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}


class SyncGetAudioChannelsLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAudioChannelsLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    std::string& iAudioChannels;
};

SyncGetAudioChannelsLinnCoUkExakt22Cpp::SyncGetAudioChannelsLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, std::string& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}


class SyncGetVersionLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, uint32_t& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVersionLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    uint32_t& iVersion;
};

SyncGetVersionLinnCoUkExakt22Cpp::SyncGetVersionLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, uint32_t& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}


class SyncApplyUpdateLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyUpdateLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncApplyUpdateLinnCoUkExakt22Cpp::SyncApplyUpdateLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}


class SyncPlayTestTrackLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayTestTrackLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncPlayTestTrackLinnCoUkExakt22Cpp::SyncPlayTestTrackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}


class SyncClearTestTrackLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTestTrackLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncClearTestTrackLinnCoUkExakt22Cpp::SyncClearTestTrackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}


class SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    bool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp::SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
};

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


class SyncGetTestTrackPlayingLinnCoUkExakt22Cpp : public SyncProxyAction
{
public:
    SyncGetTestTrackPlayingLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aTestTrackPlaying);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetTestTrackPlayingLinnCoUkExakt22Cpp() {}
private:
    CpProxyLinnCoUkExakt22Cpp& iService;
    bool& iTestTrackPlaying;
};

SyncGetTestTrackPlayingLinnCoUkExakt22Cpp::SyncGetTestTrackPlayingLinnCoUkExakt22Cpp(CpProxyLinnCoUkExakt22Cpp& aProxy, bool& aTestTrackPlaying)
    : iService(aProxy)
    , iTestTrackPlaying(aTestTrackPlaying)
{
}

void SyncGetTestTrackPlayingLinnCoUkExakt22Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTestTrackPlaying(aAsync, iTestTrackPlaying);
}


CpProxyLinnCoUkExakt22Cpp::CpProxyLinnCoUkExakt22Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Exakt2", 2, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22Cpp::TestTrackPlayingPropertyChanged);
    iTestTrackPlaying = new PropertyBool("TestTrackPlaying", functor);
    AddProperty(iTestTrackPlaying);
}

CpProxyLinnCoUkExakt22Cpp::~CpProxyLinnCoUkExakt22Cpp()
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

void CpProxyLinnCoUkExakt22Cpp::SyncGetDeviceList(std::string& aList)
{
    SyncGetDeviceListLinnCoUkExakt22Cpp sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetDeviceList(IAsync& aAsync, std::string& aList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt22Cpp::SyncGetDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt22Cpp sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetDeviceSettings->InputParameters();
    {
        Brn buf((const TByte*)aDeviceId.c_str(), (TUint)aDeviceId.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetDeviceSettings(IAsync& aAsync, std::string& aSettings)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSettings.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt22Cpp::SyncGetSettingsAvailable(bool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt22Cpp sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt22Cpp::SyncGetSettingsChangedSeq(std::string& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt22Cpp sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetSettingsChangedSeq(IAsync& aAsync, std::string& aSettingsChangedSeq)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSettingsChangedSeq.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt22Cpp::SyncUpdate(const std::string& aManifest)
{
    SyncUpdateLinnCoUkExakt22Cpp sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginUpdate(const std::string& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    {
        Brn buf((const TByte*)aManifest.c_str(), (TUint)aManifest.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncUpdateBlocking(const std::string& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt22Cpp sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginUpdateBlocking(const std::string& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    {
        Brn buf((const TByte*)aManifest.c_str(), (TUint)aManifest.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncGetUpdateStatus(std::string& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt22Cpp sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus)
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
}

void CpProxyLinnCoUkExakt22Cpp::SyncGetChannelMap(std::string& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt22Cpp sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetChannelMap(IAsync& aAsync, std::string& aChannelMap)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt22Cpp::SyncGetAudioChannels(std::string& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt22Cpp sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetAudioChannels(IAsync& aAsync, std::string& aAudioChannels)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkExakt22Cpp::SyncGetVersion(uint32_t& aVersion)
{
    SyncGetVersionLinnCoUkExakt22Cpp sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetVersion(IAsync& aAsync, uint32_t& aVersion)
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

void CpProxyLinnCoUkExakt22Cpp::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt22Cpp sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApplyUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndApplyUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt22Cpp sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayTestTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayTestTrack->InputParameters();
    {
        Brn buf((const TByte*)aChannelMap.c_str(), (TUint)aChannelMap.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMetadata.c_str(), (TUint)aMetadata.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndPlayTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt22Cpp sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearTestTrack, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndClearTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncGetIntegratedDevicesPresent(bool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22Cpp sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetIntegratedDevicesPresent(IAsync& aAsync, bool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt22Cpp::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22Cpp sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22Cpp::SyncGetTestTrackPlaying(bool& aTestTrackPlaying)
{
    SyncGetTestTrackPlayingLinnCoUkExakt22Cpp sync(*this, aTestTrackPlaying);
    BeginGetTestTrackPlaying(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22Cpp::BeginGetTestTrackPlaying(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTestTrackPlaying, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTestTrackPlaying->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22Cpp::EndGetTestTrackPlaying(IAsync& aAsync, bool& aTestTrackPlaying)
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

void CpProxyLinnCoUkExakt22Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyTestTrackPlayingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTestTrackPlayingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt22Cpp::PropertySettingsAvailable(bool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt22Cpp::PropertySettingsChangedSeq(std::string& aSettingsChangedSeq) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSettingsChangedSeq->Value();
    aSettingsChangedSeq.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt22Cpp::PropertyUpdateStatus(std::string& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateStatus->Value();
    aUpdateStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt22Cpp::PropertyChannelMap(std::string& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannelMap->Value();
    aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt22Cpp::PropertyAudioChannels(std::string& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAudioChannels->Value();
    aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt22Cpp::PropertyVersion(uint32_t& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt22Cpp::PropertyIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt22Cpp::PropertyTestTrackPlaying(bool& aTestTrackPlaying) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTestTrackPlaying = iTestTrackPlaying->Value();
}

void CpProxyLinnCoUkExakt22Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt22Cpp::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt22Cpp::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt22Cpp::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt22Cpp::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt22Cpp::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt22Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt22Cpp::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}

void CpProxyLinnCoUkExakt22Cpp::TestTrackPlayingPropertyChanged()
{
    ReportEvent(iTestTrackPlayingChanged);
}

void CpProxyLinnCoUkExakt22Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt22Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt22Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt22Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt22Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt22Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt22Cpp::Version() const
{
  return iCpProxy.Version();
}

