#include "CpLinnCoUkExakt21.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncGetDeviceListLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetDeviceListLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iList;
};

class SyncGetDeviceSettingsLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetDeviceSettingsLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iSettings;
};

class SyncGetSettingsAvailableLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetSettingsAvailableLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TBool& aSettingsAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    TBool& iSettingsAvailable;
};

class SyncGetSettingsChangedSeqLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetSettingsChangedSeqLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aSettingsChangedSeq);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iSettingsChangedSeq;
};

class SyncUpdateLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

class SyncUpdateBlockingLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncUpdateBlockingLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

class SyncGetUpdateStatusLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetUpdateStatusLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aUpdateStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iUpdateStatus;
};

class SyncGetChannelMapLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetChannelMapLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iChannelMap;
};

class SyncGetAudioChannelsLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetAudioChannelsLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aAudioChannels);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    Brh& iAudioChannels;
};

class SyncGetVersionLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetVersionLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    TUint& iVersion;
};

class SyncApplyUpdateLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncApplyUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

class SyncPlayTestTrackLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncPlayTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

class SyncClearTestTrackLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncClearTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

class SyncGetIntegratedDevicesPresentLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TBool& aIntegratedDevicesPresent);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
    TBool& iIntegratedDevicesPresent;
};

class SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 : public SyncProxyAction
{
public:
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyLinnCoUkExakt21& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncGetDeviceListLinnCoUkExakt21

SyncGetDeviceListLinnCoUkExakt21::SyncGetDeviceListLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncGetDeviceListLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceList(aAsync, iList);
}

// SyncGetDeviceSettingsLinnCoUkExakt21

SyncGetDeviceSettingsLinnCoUkExakt21::SyncGetDeviceSettingsLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncGetDeviceSettingsLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetDeviceSettings(aAsync, iSettings);
}

// SyncGetSettingsAvailableLinnCoUkExakt21

SyncGetSettingsAvailableLinnCoUkExakt21::SyncGetSettingsAvailableLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TBool& aSettingsAvailable)
    : iService(aProxy)
    , iSettingsAvailable(aSettingsAvailable)
{
}

void SyncGetSettingsAvailableLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsAvailable(aAsync, iSettingsAvailable);
}

// SyncGetSettingsChangedSeqLinnCoUkExakt21

SyncGetSettingsChangedSeqLinnCoUkExakt21::SyncGetSettingsChangedSeqLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aSettingsChangedSeq)
    : iService(aProxy)
    , iSettingsChangedSeq(aSettingsChangedSeq)
{
}

void SyncGetSettingsChangedSeqLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSettingsChangedSeq(aAsync, iSettingsChangedSeq);
}

// SyncUpdateLinnCoUkExakt21

SyncUpdateLinnCoUkExakt21::SyncUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdate(aAsync);
}

// SyncUpdateBlockingLinnCoUkExakt21

SyncUpdateBlockingLinnCoUkExakt21::SyncUpdateBlockingLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncUpdateBlockingLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateBlocking(aAsync);
}

// SyncGetUpdateStatusLinnCoUkExakt21

SyncGetUpdateStatusLinnCoUkExakt21::SyncGetUpdateStatusLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aUpdateStatus)
    : iService(aProxy)
    , iUpdateStatus(aUpdateStatus)
{
}

void SyncGetUpdateStatusLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateStatus(aAsync, iUpdateStatus);
}

// SyncGetChannelMapLinnCoUkExakt21

SyncGetChannelMapLinnCoUkExakt21::SyncGetChannelMapLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncGetChannelMapLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetChannelMap(aAsync, iChannelMap);
}

// SyncGetAudioChannelsLinnCoUkExakt21

SyncGetAudioChannelsLinnCoUkExakt21::SyncGetAudioChannelsLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, Brh& aAudioChannels)
    : iService(aProxy)
    , iAudioChannels(aAudioChannels)
{
}

void SyncGetAudioChannelsLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAudioChannels(aAsync, iAudioChannels);
}

// SyncGetVersionLinnCoUkExakt21

SyncGetVersionLinnCoUkExakt21::SyncGetVersionLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetVersionLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetVersion(aAsync, iVersion);
}

// SyncApplyUpdateLinnCoUkExakt21

SyncApplyUpdateLinnCoUkExakt21::SyncApplyUpdateLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncApplyUpdateLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndApplyUpdate(aAsync);
}

// SyncPlayTestTrackLinnCoUkExakt21

SyncPlayTestTrackLinnCoUkExakt21::SyncPlayTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncPlayTestTrackLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayTestTrack(aAsync);
}

// SyncClearTestTrackLinnCoUkExakt21

SyncClearTestTrackLinnCoUkExakt21::SyncClearTestTrackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncClearTestTrackLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearTestTrack(aAsync);
}

// SyncGetIntegratedDevicesPresentLinnCoUkExakt21

SyncGetIntegratedDevicesPresentLinnCoUkExakt21::SyncGetIntegratedDevicesPresentLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy, TBool& aIntegratedDevicesPresent)
    : iService(aProxy)
    , iIntegratedDevicesPresent(aIntegratedDevicesPresent)
{
}

void SyncGetIntegratedDevicesPresentLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIntegratedDevicesPresent(aAsync, iIntegratedDevicesPresent);
}

// SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21

SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21::SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21(CpProxyLinnCoUkExakt21& aProxy)
    : iService(aProxy)
{
}

void SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootIntegratedDevicesToFallback(aAsync);
}


// CpProxyLinnCoUkExakt21

CpProxyLinnCoUkExakt21::CpProxyLinnCoUkExakt21(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::SettingsAvailablePropertyChanged);
    iSettingsAvailable = new PropertyBool("SettingsAvailable", functor);
    AddProperty(iSettingsAvailable);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::SettingsChangedSeqPropertyChanged);
    iSettingsChangedSeq = new PropertyString("SettingsChangedSeq", functor);
    AddProperty(iSettingsChangedSeq);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::UpdateStatusPropertyChanged);
    iUpdateStatus = new PropertyString("UpdateStatus", functor);
    AddProperty(iUpdateStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::AudioChannelsPropertyChanged);
    iAudioChannels = new PropertyString("AudioChannels", functor);
    AddProperty(iAudioChannels);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::VersionPropertyChanged);
    iVersion = new PropertyUint("Version", functor);
    AddProperty(iVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExakt21::IntegratedDevicesPresentPropertyChanged);
    iIntegratedDevicesPresent = new PropertyBool("IntegratedDevicesPresent", functor);
    AddProperty(iIntegratedDevicesPresent);
}

CpProxyLinnCoUkExakt21::~CpProxyLinnCoUkExakt21()
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

void CpProxyLinnCoUkExakt21::SyncGetDeviceList(Brh& aList)
{
    SyncGetDeviceListLinnCoUkExakt21 sync(*this, aList);
    BeginGetDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyLinnCoUkExakt21::SyncGetDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncGetDeviceSettingsLinnCoUkExakt21 sync(*this, aSettings);
    BeginGetDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkExakt21::EndGetDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyLinnCoUkExakt21::SyncGetSettingsAvailable(TBool& aSettingsAvailable)
{
    SyncGetSettingsAvailableLinnCoUkExakt21 sync(*this, aSettingsAvailable);
    BeginGetSettingsAvailable(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetSettingsAvailable(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsAvailable, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsAvailable->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetSettingsAvailable(IAsync& aAsync, TBool& aSettingsAvailable)
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

void CpProxyLinnCoUkExakt21::SyncGetSettingsChangedSeq(Brh& aSettingsChangedSeq)
{
    SyncGetSettingsChangedSeqLinnCoUkExakt21 sync(*this, aSettingsChangedSeq);
    BeginGetSettingsChangedSeq(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetSettingsChangedSeq(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetSettingsChangedSeq, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSettingsChangedSeq->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetSettingsChangedSeq(IAsync& aAsync, Brh& aSettingsChangedSeq)
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

void CpProxyLinnCoUkExakt21::SyncUpdate(const Brx& aManifest)
{
    SyncUpdateLinnCoUkExakt21 sync(*this);
    BeginUpdate(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginUpdate(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdate->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SyncUpdateBlocking(const Brx& aManifest)
{
    SyncUpdateBlockingLinnCoUkExakt21 sync(*this);
    BeginUpdateBlocking(aManifest, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginUpdateBlocking(const Brx& aManifest, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateBlocking, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionUpdateBlocking->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aManifest));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndUpdateBlocking(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SyncGetUpdateStatus(Brh& aUpdateStatus)
{
    SyncGetUpdateStatusLinnCoUkExakt21 sync(*this, aUpdateStatus);
    BeginGetUpdateStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetUpdateStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetUpdateStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetUpdateStatus(IAsync& aAsync, Brh& aUpdateStatus)
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

void CpProxyLinnCoUkExakt21::SyncGetChannelMap(Brh& aChannelMap)
{
    SyncGetChannelMapLinnCoUkExakt21 sync(*this, aChannelMap);
    BeginGetChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetChannelMap(IAsync& aAsync, Brh& aChannelMap)
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

void CpProxyLinnCoUkExakt21::SyncGetAudioChannels(Brh& aAudioChannels)
{
    SyncGetAudioChannelsLinnCoUkExakt21 sync(*this, aAudioChannels);
    BeginGetAudioChannels(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetAudioChannels(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetAudioChannels, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAudioChannels->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetAudioChannels(IAsync& aAsync, Brh& aAudioChannels)
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

void CpProxyLinnCoUkExakt21::SyncGetVersion(TUint& aVersion)
{
    SyncGetVersionLinnCoUkExakt21 sync(*this, aVersion);
    BeginGetVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetVersion(IAsync& aAsync, TUint& aVersion)
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

void CpProxyLinnCoUkExakt21::SyncApplyUpdate()
{
    SyncApplyUpdateLinnCoUkExakt21 sync(*this);
    BeginApplyUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginApplyUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionApplyUpdate, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndApplyUpdate(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SyncPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata)
{
    SyncPlayTestTrackLinnCoUkExakt21 sync(*this);
    BeginPlayTestTrack(aChannelMap, aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginPlayTestTrack(const Brx& aChannelMap, const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayTestTrack, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayTestTrack->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndPlayTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SyncClearTestTrack()
{
    SyncClearTestTrackLinnCoUkExakt21 sync(*this);
    BeginClearTestTrack(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginClearTestTrack(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionClearTestTrack, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndClearTestTrack(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SyncGetIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent)
{
    SyncGetIntegratedDevicesPresentLinnCoUkExakt21 sync(*this, aIntegratedDevicesPresent);
    BeginGetIntegratedDevicesPresent(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginGetIntegratedDevicesPresent(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIntegratedDevicesPresent, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIntegratedDevicesPresent->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndGetIntegratedDevicesPresent(IAsync& aAsync, TBool& aIntegratedDevicesPresent)
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

void CpProxyLinnCoUkExakt21::SyncBootIntegratedDevicesToFallback()
{
    SyncBootIntegratedDevicesToFallbackLinnCoUkExakt21 sync(*this);
    BeginBootIntegratedDevicesToFallback(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExakt21::BeginBootIntegratedDevicesToFallback(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootIntegratedDevicesToFallback, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExakt21::EndBootIntegratedDevicesToFallback(IAsync& aAsync)
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

void CpProxyLinnCoUkExakt21::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertySettingsAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertySettingsChangedSeqChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSettingsChangedSeqChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertyUpdateStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelMapChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertyAudioChannelsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAudioChannelsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertyVersionChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVersionChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::SetPropertyIntegratedDevicesPresentChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIntegratedDevicesPresentChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkExakt21::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyLinnCoUkExakt21::PropertySettingsAvailable(TBool& aSettingsAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsAvailable = iSettingsAvailable->Value();
}

void CpProxyLinnCoUkExakt21::PropertySettingsChangedSeq(Brhz& aSettingsChangedSeq) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSettingsChangedSeq.Set(iSettingsChangedSeq->Value());
}

void CpProxyLinnCoUkExakt21::PropertyUpdateStatus(Brhz& aUpdateStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateStatus.Set(iUpdateStatus->Value());
}

void CpProxyLinnCoUkExakt21::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyLinnCoUkExakt21::PropertyAudioChannels(Brhz& aAudioChannels) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAudioChannels.Set(iAudioChannels->Value());
}

void CpProxyLinnCoUkExakt21::PropertyVersion(TUint& aVersion) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVersion = iVersion->Value();
}

void CpProxyLinnCoUkExakt21::PropertyIntegratedDevicesPresent(TBool& aIntegratedDevicesPresent) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIntegratedDevicesPresent = iIntegratedDevicesPresent->Value();
}

void CpProxyLinnCoUkExakt21::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyLinnCoUkExakt21::SettingsAvailablePropertyChanged()
{
    ReportEvent(iSettingsAvailableChanged);
}

void CpProxyLinnCoUkExakt21::SettingsChangedSeqPropertyChanged()
{
    ReportEvent(iSettingsChangedSeqChanged);
}

void CpProxyLinnCoUkExakt21::UpdateStatusPropertyChanged()
{
    ReportEvent(iUpdateStatusChanged);
}

void CpProxyLinnCoUkExakt21::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyLinnCoUkExakt21::AudioChannelsPropertyChanged()
{
    ReportEvent(iAudioChannelsChanged);
}

void CpProxyLinnCoUkExakt21::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}

void CpProxyLinnCoUkExakt21::IntegratedDevicesPresentPropertyChanged()
{
    ReportEvent(iIntegratedDevicesPresentChanged);
}


void CpProxyLinnCoUkExakt21::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkExakt21::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkExakt21::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkExakt21::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkExakt21::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkExakt21::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkExakt21::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkExakt21::Version() const
{
  return iCpProxy.Version();
}


