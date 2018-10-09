#include "CpLinnCoUkExakt21.h"
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


class SyncGetDeviceListLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceListLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iList;
};

SyncGetDeviceListLinnCoUkExakt21Cpp::SyncGetDeviceListLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}


class SyncGetDeviceSettingsLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetDeviceSettingsLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iSettings;
};

SyncGetDeviceSettingsLinnCoUkExakt21Cpp::SyncGetDeviceSettingsLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}


class SyncGetSettingsAvailableLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, bool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsAvailableLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    bool& iSettingsAvailable;
};

SyncGetSettingsAvailableLinnCoUkExakt21Cpp::SyncGetSettingsAvailableLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, bool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}


class SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iSettingsChangedSeq;
};

SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp::SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}


class SyncUpdateLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncUpdateLinnCoUkExakt21Cpp::SyncUpdateLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}


class SyncUpdateBlockingLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateBlockingLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncUpdateBlockingLinnCoUkExakt21Cpp::SyncUpdateBlockingLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}


class SyncGetUpdateStatusLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateStatusLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iUpdateStatus;
};

SyncGetUpdateStatusLinnCoUkExakt21Cpp::SyncGetUpdateStatusLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}


class SyncGetChannelMapLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetChannelMapLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iChannelMap;
};

SyncGetChannelMapLinnCoUkExakt21Cpp::SyncGetChannelMapLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}


class SyncGetAudioChannelsLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAudioChannelsLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    std::string& iAudioChannels;
};

SyncGetAudioChannelsLinnCoUkExakt21Cpp::SyncGetAudioChannelsLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, std::string& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}


class SyncGetVersionLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, uint32_t& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetVersionLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    uint32_t& iVersion;
};

SyncGetVersionLinnCoUkExakt21Cpp::SyncGetVersionLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, uint32_t& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}


class SyncApplyUpdateLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyUpdateLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncApplyUpdateLinnCoUkExakt21Cpp::SyncApplyUpdateLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}


class SyncPlayTestTrackLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayTestTrackLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncPlayTestTrackLinnCoUkExakt21Cpp::SyncPlayTestTrackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}


class SyncClearTestTrackLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearTestTrackLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncClearTestTrackLinnCoUkExakt21Cpp::SyncClearTestTrackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}


class SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, bool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
    bool& iIntegratedDevicesPresent;
};

SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp::SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy, bool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}


class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp() {}
private:
    CpProxyLinnCoUkExakt21Cpp& iService;
};

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp(CpProxyLinnCoUkExakt21Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


CpProxyLinnCoUkExakt21Cpp::CpProxyLinnCoUkExakt21Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Exakt2", 1, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21Cpp::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyLinnCoUkExakt21Cpp::~CpProxyLinnCoUkExakt21Cpp()
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetDeviceList(std::string& aList)
{
    SyncGetDeviceListLinnCoUkExakt21Cpp sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetDeviceList(IAsync& aAsync, std::string& aList)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetDeviceSettings(const std::string& aDeviceId, std::string& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt21Cpp sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetDeviceSettings(const std::string& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt21Cpp::EndGetDeviceSettings(IAsync& aAsync, std::string& aSettings)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetSettingsAvailable(bool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt21Cpp sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetSettingsAvailable(IAsync& aAsync, bool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetSettingsChangedSeq(std::string& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt21Cpp sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetSettingsChangedSeq(IAsync& aAsync, std::string& aSettingsChangedSeq)
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

void CpProxyLinnCoUkExakt21Cpp::SyncUpdate(const std::string& aManifest)
{
    SyncUpdateLinnCoUkExakt21Cpp sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginUpdate(const std::string& aManifest, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt21Cpp::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SyncUpdateBlocking(const std::string& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt21Cpp sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginUpdateBlocking(const std::string& aManifest, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt21Cpp::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetUpdateStatus(std::string& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt21Cpp sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetUpdateStatus(IAsync& aAsync, std::string& aUpdateStatus)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetChannelMap(std::string& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt21Cpp sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetChannelMap(IAsync& aAsync, std::string& aChannelMap)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetAudioChannels(std::string& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt21Cpp sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetAudioChannels(IAsync& aAsync, std::string& aAudioChannels)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetVersion(uint32_t& aVersion)
{
    SyncGetVersionLinnCoUkExakt21Cpp sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetVersion(IAsync& aAsync, uint32_t& aVersion)
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

void CpProxyLinnCoUkExakt21Cpp::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt21Cpp sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApplyUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndApplyUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SyncPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt21Cpp sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginPlayTestTrack(const std::string& aChannelMap, const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt21Cpp::EndPlayTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt21Cpp sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearTestTrack, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndClearTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SyncGetIntegratedDevicesPresent(bool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21Cpp sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndGetIntegratedDevicesPresent(IAsync& aAsync, bool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt21Cpp::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21Cpp sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21Cpp::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21Cpp::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21Cpp::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21Cpp::PropertyDeviceList(std::string& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceList->Value();
    aDeviceList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt21Cpp::PropertySettingsAvailable(bool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt21Cpp::PropertySettingsChangedSeq(std::string& aSettingsChangedSeq) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSettingsChangedSeq->Value();
    aSettingsChangedSeq.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt21Cpp::PropertyUpdateStatus(std::string& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUpdateStatus->Value();
    aUpdateStatus.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt21Cpp::PropertyChannelMap(std::string& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iChannelMap->Value();
    aChannelMap.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt21Cpp::PropertyAudioChannels(std::string& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAudioChannels->Value();
    aAudioChannels.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkExakt21Cpp::PropertyVersion(uint32_t& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt21Cpp::PropertyIntegratedDevicesPresent(bool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt21Cpp::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt21Cpp::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt21Cpp::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt21Cpp::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt21Cpp::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt21Cpp::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt21Cpp::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt21Cpp::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}

void CpProxyLinnCoUkExakt21Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt21Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt21Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt21Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt21Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt21Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt21Cpp::Version() const
{
  return iCpProxy.Version();
}

