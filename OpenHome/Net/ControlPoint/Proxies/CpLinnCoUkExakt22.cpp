#include "CpLinnCoUkExakt22.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetDeviceListLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iList;
};

class SyncGetDeviceSettingsLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iSettings;
};

class SyncGetSettingsAvailableLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    TBool& iSettingsAvailable;
};

class SyncGetSettingsChangedSeqLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iSettingsChangedSeq;
};

class SyncUpdateLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncUpdateBlockingLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncGetUpdateStatusLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iUpdateStatus;
};

class SyncGetChannelMapLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iChannelMap;
};

class SyncGetAudioChannelsLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    Brh& iAudioChannels;
};

class SyncGetVersionLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    TUint& iVersion;
};

class SyncApplyUpdateLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncPlayTestTrackLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncClearTestTrackLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncGetIntegratedDevicesPresentLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    TBool& iIntegratedDevicesPresent;
};

class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
};

class SyncGetTestTrackPlayingLinnCoUkExakt22 : public SyncProxyAction
{
public:
    SyncGetTestTrackPlayingLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aTestTrackPlaying);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt22& iService;
    TBool& iTestTrackPlaying;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetDeviceListLinnCoUkExakt22

SyncGetDeviceListLinnCoUkExakt22::SyncGetDeviceListLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}

// SyncGetDeviceSettingsLinnCoUkExakt22

SyncGetDeviceSettingsLinnCoUkExakt22::SyncGetDeviceSettingsLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}

// SyncGetSettingsAvailableLinnCoUkExakt22

SyncGetSettingsAvailableLinnCoUkExakt22::SyncGetSettingsAvailableLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}

// SyncGetSettingsChangedSeqLinnCoUkExakt22

SyncGetSettingsChangedSeqLinnCoUkExakt22::SyncGetSettingsChangedSeqLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}

// SyncUpdateLinnCoUkExakt22

SyncUpdateLinnCoUkExakt22::SyncUpdateLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}

// SyncUpdateBlockingLinnCoUkExakt22

SyncUpdateBlockingLinnCoUkExakt22::SyncUpdateBlockingLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}

// SyncGetUpdateStatusLinnCoUkExakt22

SyncGetUpdateStatusLinnCoUkExakt22::SyncGetUpdateStatusLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}

// SyncGetChannelMapLinnCoUkExakt22

SyncGetChannelMapLinnCoUkExakt22::SyncGetChannelMapLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}

// SyncGetAudioChannelsLinnCoUkExakt22

SyncGetAudioChannelsLinnCoUkExakt22::SyncGetAudioChannelsLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}

// SyncGetVersionLinnCoUkExakt22

SyncGetVersionLinnCoUkExakt22::SyncGetVersionLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}

// SyncApplyUpdateLinnCoUkExakt22

SyncApplyUpdateLinnCoUkExakt22::SyncApplyUpdateLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}

// SyncPlayTestTrackLinnCoUkExakt22

SyncPlayTestTrackLinnCoUkExakt22::SyncPlayTestTrackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}

// SyncClearTestTrackLinnCoUkExakt22

SyncClearTestTrackLinnCoUkExakt22::SyncClearTestTrackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}

// SyncGetIntegratedDevicesPresentLinnCoUkExakt22

SyncGetIntegratedDevicesPresentLinnCoUkExakt22::SyncGetIntegratedDevicesPresentLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}

// SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}

// SyncGetTestTrackPlayingLinnCoUkExakt22

SyncGetTestTrackPlayingLinnCoUkExakt22::SyncGetTestTrackPlayingLinnCoUkExakt22(CpProxyLinnCoUkExakt22& aProxy, TBool& aTestTrackPlaying)
    : iService(aProxy)
    , iTestTrackPlaying(aTestTrackPlaying)
{
}

void SyncGetTestTrackPlayingLinnCoUkExakt22::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetTestTrackPlaying(aAsync, iTestTrackPlaying);
}


// CpProxyLinnCoUkExakt22

CpProxyLinnCoUkExakt22::CpProxyLinnCoUkExakt22(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt22::TestTrackPlayingPropertyChanged);
    iTestTrackPlaying = new PropertyBool("TestTrackPlaying", functor);
    AddProperty(iTestTrackPlaying);
}

CpProxyLinnCoUkExakt22::~CpProxyLinnCoUkExakt22()
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

void CpProxyLinnCoUkExakt22::SyncGetDeviceList(Brh& aList)
{
    SyncGetDeviceListLinnCoUkExakt22 sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyLinnCoUkExakt22::SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt22 sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetDeviceSettings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyLinnCoUkExakt22::SyncGetSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt22 sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt22::SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt22 sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq)
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

void CpProxyLinnCoUkExakt22::SyncUpdate(const Brx& aManifest)
{
    SyncUpdateLinnCoUkExakt22 sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncUpdateBlocking(const Brx& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt22 sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncGetUpdateStatus(Brh& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt22 sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus)
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

void CpProxyLinnCoUkExakt22::SyncGetChannelMap(Brh& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt22 sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyLinnCoUkExakt22::SyncGetAudioChannels(Brh& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt22 sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyLinnCoUkExakt22::SyncGetVersion(TUint& aVersion)
{
    SyncGetVersionLinnCoUkExakt22 sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetVersion(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkExakt22::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt22 sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApplyUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndApplyUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt22 sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayTestTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayTestTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndPlayTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt22 sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearTestTrack, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndClearTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt22 sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt22::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt22 sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt22::SyncGetTestTrackPlaying(TBool& aTestTrackPlaying)
{
    SyncGetTestTrackPlayingLinnCoUkExakt22 sync(*this, aTestTrackPlaying);
    BeginGetTestTrackPlaying(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt22::BeginGetTestTrackPlaying(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetTestTrackPlaying, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetTestTrackPlaying->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt22::EndGetTestTrackPlaying(IAsync& aAsync, TBool& aTestTrackPlaying)
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

void CpProxyLinnCoUkExakt22::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::SetPropertyTestTrackPlayingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTestTrackPlayingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt22::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt22::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt22::PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsChangedSeq.Set(iSettingsChangedSeq->Value());
}

void CpProxyLinnCoUkExakt22::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt22::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt22::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt22::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt22::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt22::PropertyTestTrackPlaying(TBool& aTestTrackPlaying) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTestTrackPlaying = iTestTrackPlaying->Value();
}

void CpProxyLinnCoUkExakt22::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt22::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt22::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt22::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt22::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt22::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt22::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt22::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}

void CpProxyLinnCoUkExakt22::TestTrackPlayingPropertyChanged()
{
    ReportEvent(iTestTrackPlayingChanged);
}


void CpProxyLinnCoUkExakt22::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt22::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt22::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt22::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt22::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt22::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt22::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt22::Version() const
{
  return iCpProxy.Version();
}


