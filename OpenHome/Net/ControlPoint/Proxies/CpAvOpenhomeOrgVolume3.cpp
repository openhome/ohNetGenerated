#include "CpAvOpenhomeOrgVolume3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncCharacteristicsAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TUint& iVolumeMax;
    TUint& iVolumeUnity;
    TUint& iVolumeSteps;
    TUint& iVolumeMilliDbPerStep;
    TUint& iBalanceMax;
    TUint& iFadeMax;
};

class SyncSetVolumeAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncVolumeIncAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncVolumeDecAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncVolumeAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TUint& iValue;
};

class SyncSetBalanceAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncBalanceIncAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncBalanceDecAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncBalanceAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TInt& iValue;
};

class SyncSetFadeAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncFadeIncAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncFadeDecAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncFadeAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TInt& iValue;
};

class SyncSetMuteAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

class SyncMuteAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TBool& iValue;
};

class SyncVolumeLimitAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TUint& iValue;
};

class SyncUnityGainAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TBool& iValue;
};

class SyncVolumeOffsetAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
    TInt& iVolumeOffsetBinaryMilliDb;
};

class SyncSetVolumeOffsetAvOpenhomeOrgVolume3 : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume3& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncCharacteristicsAvOpenhomeOrgVolume3

SyncCharacteristicsAvOpenhomeOrgVolume3::SyncCharacteristicsAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}

// SyncSetVolumeAvOpenhomeOrgVolume3

SyncSetVolumeAvOpenhomeOrgVolume3::SyncSetVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}

// SyncVolumeIncAvOpenhomeOrgVolume3

SyncVolumeIncAvOpenhomeOrgVolume3::SyncVolumeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}

// SyncVolumeDecAvOpenhomeOrgVolume3

SyncVolumeDecAvOpenhomeOrgVolume3::SyncVolumeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}

// SyncVolumeAvOpenhomeOrgVolume3

SyncVolumeAvOpenhomeOrgVolume3::SyncVolumeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}

// SyncSetBalanceAvOpenhomeOrgVolume3

SyncSetBalanceAvOpenhomeOrgVolume3::SyncSetBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}

// SyncBalanceIncAvOpenhomeOrgVolume3

SyncBalanceIncAvOpenhomeOrgVolume3::SyncBalanceIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}

// SyncBalanceDecAvOpenhomeOrgVolume3

SyncBalanceDecAvOpenhomeOrgVolume3::SyncBalanceDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}

// SyncBalanceAvOpenhomeOrgVolume3

SyncBalanceAvOpenhomeOrgVolume3::SyncBalanceAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}

// SyncSetFadeAvOpenhomeOrgVolume3

SyncSetFadeAvOpenhomeOrgVolume3::SyncSetFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}

// SyncFadeIncAvOpenhomeOrgVolume3

SyncFadeIncAvOpenhomeOrgVolume3::SyncFadeIncAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}

// SyncFadeDecAvOpenhomeOrgVolume3

SyncFadeDecAvOpenhomeOrgVolume3::SyncFadeDecAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}

// SyncFadeAvOpenhomeOrgVolume3

SyncFadeAvOpenhomeOrgVolume3::SyncFadeAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}

// SyncSetMuteAvOpenhomeOrgVolume3

SyncSetMuteAvOpenhomeOrgVolume3::SyncSetMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}

// SyncMuteAvOpenhomeOrgVolume3

SyncMuteAvOpenhomeOrgVolume3::SyncMuteAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}

// SyncVolumeLimitAvOpenhomeOrgVolume3

SyncVolumeLimitAvOpenhomeOrgVolume3::SyncVolumeLimitAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}

// SyncUnityGainAvOpenhomeOrgVolume3

SyncUnityGainAvOpenhomeOrgVolume3::SyncUnityGainAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}

// SyncVolumeOffsetAvOpenhomeOrgVolume3

SyncVolumeOffsetAvOpenhomeOrgVolume3::SyncVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy, TInt& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}

// SyncSetVolumeOffsetAvOpenhomeOrgVolume3

SyncSetVolumeOffsetAvOpenhomeOrgVolume3::SyncSetVolumeOffsetAvOpenhomeOrgVolume3(CpProxyAvOpenhomeOrgVolume3& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}


// CpProxyAvOpenhomeOrgVolume3

CpProxyAvOpenhomeOrgVolume3::CpProxyAvOpenhomeOrgVolume3(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
}

CpProxyAvOpenhomeOrgVolume3::~CpProxyAvOpenhomeOrgVolume3()
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

void CpProxyAvOpenhomeOrgVolume3::SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume3 sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume3::EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume3::SyncSetVolume(TUint aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume3 sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginSetVolume(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume3 sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume3 sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncVolume(TUint& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndVolume(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncSetBalance(TInt aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume3 sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginSetBalance(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume3 sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume3 sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncBalance(TInt& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndBalance(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncSetFade(TInt aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume3 sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginSetFade(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume3 sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume3 sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncFade(TInt& aValue)
{
    SyncFadeAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndFade(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncSetMute(TBool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume3 sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginSetMute(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SyncMute(TBool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndMute(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncVolumeLimit(TUint& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndVolumeLimit(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncUnityGain(TBool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume3 sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndUnityGain(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume3::SyncVolumeOffset(const Brx& aChannel, TInt& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume3 sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginVolumeOffset(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeOffset->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndVolumeOffset(IAsync& aAsync, TInt& aVolumeOffsetBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume3::SyncSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3 sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3::BeginSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aVolumeOffsetBinaryMilliDb));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3::EndSetVolumeOffset(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUnityGainChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolume(TUint& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyMute(TBool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyBalance(TInt& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyFade(TInt& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeLimit(TUint& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeMax(TUint& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeUnity(TUint& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeSteps(TUint& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyBalanceMax(TUint& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyFadeMax(TUint& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyUnityGain(TBool& aUnityGain) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeOffsets(Brhz& aVolumeOffsets) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsets.Set(iVolumeOffsets->Value());
}

void CpProxyAvOpenhomeOrgVolume3::PropertyVolumeOffsetMax(TUint& aVolumeOffsetMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume3::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume3::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume3::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume3::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume3::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}


void CpProxyAvOpenhomeOrgVolume3::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume3::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume3::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume3::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume3::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume3::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume3::Version() const
{
  return iCpProxy.Version();
}


