#include "CpAvOpenhomeOrgVolume3.h"
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


class SyncCharacteristicsAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    uint32_t& iVolumeMax;
    uint32_t& iVolumeUnity;
    uint32_t& iVolumeSteps;
    uint32_t& iVolumeMilliDbPerStep;
    uint32_t& iBalanceMax;
    uint32_t& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume3Cpp::SyncCharacteristicsAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume3Cpp::SyncSetVolumeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume3Cpp::SyncVolumeIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume3Cpp::SyncVolumeDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeAvOpenhomeOrgVolume3Cpp::SyncVolumeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume3Cpp::SyncSetBalanceAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume3Cpp::SyncBalanceIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume3Cpp::SyncBalanceDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    int32_t& iValue;
};

SyncBalanceAvOpenhomeOrgVolume3Cpp::SyncBalanceAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncSetFadeAvOpenhomeOrgVolume3Cpp::SyncSetFadeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncFadeIncAvOpenhomeOrgVolume3Cpp::SyncFadeIncAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncFadeDecAvOpenhomeOrgVolume3Cpp::SyncFadeDecAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    int32_t& iValue;
};

SyncFadeAvOpenhomeOrgVolume3Cpp::SyncFadeAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncSetMuteAvOpenhomeOrgVolume3Cpp::SyncSetMuteAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    bool& iValue;
};

SyncMuteAvOpenhomeOrgVolume3Cpp::SyncMuteAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume3Cpp::SyncVolumeLimitAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    bool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume3Cpp::SyncUnityGainAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}


class SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
    int32_t& iVolumeOffsetBinaryMilliDb;
};

SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp::SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy, int32_t& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}


class SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume3Cpp& iService;
};

SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp::SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp(CpProxyAvOpenhomeOrgVolume3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}


CpProxyAvOpenhomeOrgVolume3Cpp::CpProxyAvOpenhomeOrgVolume3Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Volume", 3, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionCharacteristics = new Action("Characteristics");
    param = new OpenHome::Net::ParameterUint("VolumeMax");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeUnity");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeSteps");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("VolumeMilliDbPerStep");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("BalanceMax");
    iActionCharacteristics->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterUint("FadeMax");
    iActionCharacteristics->AddOutputParameter(param);

    iActionSetVolume = new Action("SetVolume");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSetVolume->AddInputParameter(param);

    iActionVolumeInc = new Action("VolumeInc");

    iActionVolumeDec = new Action("VolumeDec");

    iActionVolume = new Action("Volume");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionVolume->AddOutputParameter(param);

    iActionSetBalance = new Action("SetBalance");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSetBalance->AddInputParameter(param);

    iActionBalanceInc = new Action("BalanceInc");

    iActionBalanceDec = new Action("BalanceDec");

    iActionBalance = new Action("Balance");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionBalance->AddOutputParameter(param);

    iActionSetFade = new Action("SetFade");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSetFade->AddInputParameter(param);

    iActionFadeInc = new Action("FadeInc");

    iActionFadeDec = new Action("FadeDec");

    iActionFade = new Action("Fade");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionFade->AddOutputParameter(param);

    iActionSetMute = new Action("SetMute");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetMute->AddInputParameter(param);

    iActionMute = new Action("Mute");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionMute->AddOutputParameter(param);

    iActionVolumeLimit = new Action("VolumeLimit");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionVolumeLimit->AddOutputParameter(param);

    iActionUnityGain = new Action("UnityGain");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionUnityGain->AddOutputParameter(param);

    iActionVolumeOffset = new Action("VolumeOffset");
    param = new OpenHome::Net::ParameterString("Channel");
    iActionVolumeOffset->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("VolumeOffsetBinaryMilliDb");
    iActionVolumeOffset->AddOutputParameter(param);

    iActionSetVolumeOffset = new Action("SetVolumeOffset");
    param = new OpenHome::Net::ParameterString("Channel");
    iActionSetVolumeOffset->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("VolumeOffsetBinaryMilliDb");
    iActionSetVolumeOffset->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3Cpp::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
}

CpProxyAvOpenhomeOrgVolume3Cpp::~CpProxyAvOpenhomeOrgVolume3Cpp()
{
    DestroyService();
    delete iActionCharacteristics;
    delete iActionSetVolume;
    delete iActionVolumeInc;
    delete iActionVolumeDec;
    delete iActionVolume;
    delete iActionSetBalance;
    delete iActionBalanceInc;
    delete iActionBalanceDec;
    delete iActionBalance;
    delete iActionSetFade;
    delete iActionFadeInc;
    delete iActionFadeDec;
    delete iActionFade;
    delete iActionSetMute;
    delete iActionMute;
    delete iActionVolumeLimit;
    delete iActionUnityGain;
    delete iActionVolumeOffset;
    delete iActionSetVolumeOffset;
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume3Cpp sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginCharacteristics(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCharacteristics, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCharacteristics->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Characteristics"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVolumeMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeUnity = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeSteps = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aVolumeMilliDbPerStep = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aBalanceMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aFadeMax = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncSetVolume(uint32_t aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndSetVolume(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetVolume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndVolumeInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndVolumeDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncVolume(uint32_t& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndVolume(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Volume"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncSetBalance(int32_t aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndSetBalance(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetBalance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndBalanceInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BalanceInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndBalanceDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BalanceDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncBalance(int32_t& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndBalance(IAsync& aAsync, int32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Balance"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncSetFade(int32_t aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginSetFade(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndSetFade(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetFade"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndFadeInc(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("FadeInc"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndFadeDec(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("FadeDec"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncFade(int32_t& aValue)
{
    SyncFadeAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndFade(IAsync& aAsync, int32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Fade"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncSetMute(bool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginSetMute(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndSetMute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncMute(bool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndMute(IAsync& aAsync, bool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Mute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncVolumeLimit(uint32_t& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndVolumeLimit(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeLimit"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncUnityGain(bool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume3Cpp sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndUnityGain(IAsync& aAsync, bool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("UnityGain"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncVolumeOffset(const std::string& aChannel, int32_t& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume3Cpp sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginVolumeOffset(const std::string& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionVolumeOffset->InputParameters();
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeOffset->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndVolumeOffset(IAsync& aAsync, int32_t& aVolumeOffsetBinaryMilliDb)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeOffset"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVolumeOffsetBinaryMilliDb = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SyncSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3Cpp sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BeginSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeOffset->InputParameters();
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aVolumeOffsetBinaryMilliDb));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::EndSetVolumeOffset(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetVolumeOffset"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUnityGainChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolume(uint32_t& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyMute(bool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyBalance(int32_t& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyFade(int32_t& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeLimit(uint32_t& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeMax(uint32_t& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeUnity(uint32_t& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeSteps(uint32_t& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyBalanceMax(uint32_t& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyFadeMax(uint32_t& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyUnityGain(bool& aUnityGain) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeOffsets(std::string& aVolumeOffsets) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iVolumeOffsets->Value();
    aVolumeOffsets.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgVolume3Cpp::PropertyVolumeOffsetMax(uint32_t& aVolumeOffsetMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume3Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume3Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume3Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume3Cpp::Version() const
{
  return iCpProxy.Version();
}

