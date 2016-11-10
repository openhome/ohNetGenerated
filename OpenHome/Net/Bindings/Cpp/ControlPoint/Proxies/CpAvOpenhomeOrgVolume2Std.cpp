#include "CpAvOpenhomeOrgVolume2.h"
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


class SyncCharacteristicsAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    uint32_t& iVolumeMax;
    uint32_t& iVolumeUnity;
    uint32_t& iVolumeSteps;
    uint32_t& iVolumeMilliDbPerStep;
    uint32_t& iBalanceMax;
    uint32_t& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume2Cpp::SyncCharacteristicsAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume2Cpp::SyncSetVolumeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume2Cpp::SyncVolumeIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume2Cpp::SyncVolumeDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeAvOpenhomeOrgVolume2Cpp::SyncVolumeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume2Cpp::SyncSetBalanceAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume2Cpp::SyncBalanceIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume2Cpp::SyncBalanceDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    int32_t& iValue;
};

SyncBalanceAvOpenhomeOrgVolume2Cpp::SyncBalanceAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncSetFadeAvOpenhomeOrgVolume2Cpp::SyncSetFadeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncFadeIncAvOpenhomeOrgVolume2Cpp::SyncFadeIncAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncFadeDecAvOpenhomeOrgVolume2Cpp::SyncFadeDecAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    int32_t& iValue;
};

SyncFadeAvOpenhomeOrgVolume2Cpp::SyncFadeAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
};

SyncSetMuteAvOpenhomeOrgVolume2Cpp::SyncSetMuteAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    bool& iValue;
};

SyncMuteAvOpenhomeOrgVolume2Cpp::SyncMuteAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume2Cpp::SyncVolumeLimitAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume2Cpp : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume2Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume2Cpp& iService;
    bool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume2Cpp::SyncUnityGainAvOpenhomeOrgVolume2Cpp(CpProxyAvOpenhomeOrgVolume2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}


CpProxyAvOpenhomeOrgVolume2Cpp::CpProxyAvOpenhomeOrgVolume2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Volume", 2, aDevice.Device())
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2Cpp::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
}

CpProxyAvOpenhomeOrgVolume2Cpp::~CpProxyAvOpenhomeOrgVolume2Cpp()
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
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume2Cpp sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncSetVolume(uint32_t aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncVolume(uint32_t& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndVolume(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncSetBalance(int32_t aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncBalance(int32_t& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndBalance(IAsync& aAsync, int32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncSetFade(int32_t aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginSetFade(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncFade(int32_t& aValue)
{
    SyncFadeAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndFade(IAsync& aAsync, int32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncSetMute(bool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume2Cpp sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginSetMute(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncMute(bool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndMute(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncVolumeLimit(uint32_t& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndVolumeLimit(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SyncUnityGain(bool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume2Cpp sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::EndUnityGain(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUnityGainChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolume(uint32_t& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyMute(bool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyBalance(int32_t& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyFade(int32_t& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolumeLimit(uint32_t& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolumeMax(uint32_t& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolumeUnity(uint32_t& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolumeSteps(uint32_t& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyBalanceMax(uint32_t& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyFadeMax(uint32_t& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::PropertyUnityGain(bool& aUnityGain) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume2Cpp::Version() const
{
  return iCpProxy.Version();
}

