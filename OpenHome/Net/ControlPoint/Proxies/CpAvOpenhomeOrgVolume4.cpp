#include "CpAvOpenhomeOrgVolume4.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncCharacteristicsAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TUint& iVolumeMax;
    TUint& iVolumeUnity;
    TUint& iVolumeSteps;
    TUint& iVolumeMilliDbPerStep;
    TUint& iBalanceMax;
    TUint& iFadeMax;
};

class SyncSetVolumeAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncVolumeIncAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncVolumeDecAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncVolumeAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TUint& iValue;
};

class SyncSetBalanceAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncBalanceIncAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncBalanceDecAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncBalanceAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TInt& iValue;
};

class SyncSetFadeAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncFadeIncAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncFadeDecAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncFadeAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TInt& iValue;
};

class SyncSetMuteAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncMuteAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TBool& iValue;
};

class SyncVolumeLimitAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TUint& iValue;
};

class SyncUnityGainAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TBool& iValue;
};

class SyncVolumeOffsetAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TInt& iVolumeOffsetBinaryMilliDb;
};

class SyncSetVolumeOffsetAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

class SyncTrimAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aTrimBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
    TInt& iTrimBinaryMilliDb;
};

class SyncSetTrimAvOpenhomeOrgVolume4 : public SyncProxyAction
{
public:
    SyncSetTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgVolume4& iService;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncCharacteristicsAvOpenhomeOrgVolume4

SyncCharacteristicsAvOpenhomeOrgVolume4::SyncCharacteristicsAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}

// SyncSetVolumeAvOpenhomeOrgVolume4

SyncSetVolumeAvOpenhomeOrgVolume4::SyncSetVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}

// SyncVolumeIncAvOpenhomeOrgVolume4

SyncVolumeIncAvOpenhomeOrgVolume4::SyncVolumeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}

// SyncVolumeDecAvOpenhomeOrgVolume4

SyncVolumeDecAvOpenhomeOrgVolume4::SyncVolumeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}

// SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4

SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4::SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeNoUnmute(aAsync);
}

// SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4

SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4::SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeIncNoUnmute(aAsync);
}

// SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4

SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4::SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDecNoUnmute(aAsync);
}

// SyncVolumeAvOpenhomeOrgVolume4

SyncVolumeAvOpenhomeOrgVolume4::SyncVolumeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}

// SyncSetBalanceAvOpenhomeOrgVolume4

SyncSetBalanceAvOpenhomeOrgVolume4::SyncSetBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}

// SyncBalanceIncAvOpenhomeOrgVolume4

SyncBalanceIncAvOpenhomeOrgVolume4::SyncBalanceIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}

// SyncBalanceDecAvOpenhomeOrgVolume4

SyncBalanceDecAvOpenhomeOrgVolume4::SyncBalanceDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}

// SyncBalanceAvOpenhomeOrgVolume4

SyncBalanceAvOpenhomeOrgVolume4::SyncBalanceAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}

// SyncSetFadeAvOpenhomeOrgVolume4

SyncSetFadeAvOpenhomeOrgVolume4::SyncSetFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}

// SyncFadeIncAvOpenhomeOrgVolume4

SyncFadeIncAvOpenhomeOrgVolume4::SyncFadeIncAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}

// SyncFadeDecAvOpenhomeOrgVolume4

SyncFadeDecAvOpenhomeOrgVolume4::SyncFadeDecAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}

// SyncFadeAvOpenhomeOrgVolume4

SyncFadeAvOpenhomeOrgVolume4::SyncFadeAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}

// SyncSetMuteAvOpenhomeOrgVolume4

SyncSetMuteAvOpenhomeOrgVolume4::SyncSetMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}

// SyncMuteAvOpenhomeOrgVolume4

SyncMuteAvOpenhomeOrgVolume4::SyncMuteAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}

// SyncVolumeLimitAvOpenhomeOrgVolume4

SyncVolumeLimitAvOpenhomeOrgVolume4::SyncVolumeLimitAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}

// SyncUnityGainAvOpenhomeOrgVolume4

SyncUnityGainAvOpenhomeOrgVolume4::SyncUnityGainAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}

// SyncVolumeOffsetAvOpenhomeOrgVolume4

SyncVolumeOffsetAvOpenhomeOrgVolume4::SyncVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}

// SyncSetVolumeOffsetAvOpenhomeOrgVolume4

SyncSetVolumeOffsetAvOpenhomeOrgVolume4::SyncSetVolumeOffsetAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}

// SyncTrimAvOpenhomeOrgVolume4

SyncTrimAvOpenhomeOrgVolume4::SyncTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy, TInt& aTrimBinaryMilliDb)
    : iService(aProxy)
    , iTrimBinaryMilliDb(aTrimBinaryMilliDb)
{
}

void SyncTrimAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndTrim(aAsync, iTrimBinaryMilliDb);
}

// SyncSetTrimAvOpenhomeOrgVolume4

SyncSetTrimAvOpenhomeOrgVolume4::SyncSetTrimAvOpenhomeOrgVolume4(CpProxyAvOpenhomeOrgVolume4& aProxy)
    : iService(aProxy)
{
}

void SyncSetTrimAvOpenhomeOrgVolume4::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTrim(aAsync);
}


// CpProxyAvOpenhomeOrgVolume4

CpProxyAvOpenhomeOrgVolume4::CpProxyAvOpenhomeOrgVolume4(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Volume", 4, aDevice.Device())
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

    iActionSetVolumeNoUnmute = new Action("SetVolumeNoUnmute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSetVolumeNoUnmute->AddInputParameter(param);

    iActionVolumeIncNoUnmute = new Action("VolumeIncNoUnmute");

    iActionVolumeDecNoUnmute = new Action("VolumeDecNoUnmute");

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

    iActionTrim = new Action("Trim");
    param = new OpenHome::Net::ParameterString("Channel");
    iActionTrim->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("TrimBinaryMilliDb");
    iActionTrim->AddOutputParameter(param);

    iActionSetTrim = new Action("SetTrim");
    param = new OpenHome::Net::ParameterString("Channel");
    iActionSetTrim->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("TrimBinaryMilliDb");
    iActionSetTrim->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4::TrimPropertyChanged);
    iTrim = new PropertyString("Trim", functor);
    AddProperty(iTrim);
}

CpProxyAvOpenhomeOrgVolume4::~CpProxyAvOpenhomeOrgVolume4()
{
    DestroyService();
    delete iActionCharacteristics;
    delete iActionSetVolume;
    delete iActionVolumeInc;
    delete iActionVolumeDec;
    delete iActionSetVolumeNoUnmute;
    delete iActionVolumeIncNoUnmute;
    delete iActionVolumeDecNoUnmute;
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
    delete iActionTrim;
    delete iActionSetTrim;
}

void CpProxyAvOpenhomeOrgVolume4::SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume4 sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4::EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetVolume(TUint aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume4 sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetVolume(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume4 sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume4 sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetVolumeNoUnmute(TUint aValue)
{
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4 sync(*this);
    BeginSetVolumeNoUnmute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetVolumeNoUnmute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeNoUnmute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeNoUnmute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetVolumeNoUnmute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetVolumeNoUnmute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeIncNoUnmute()
{
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4 sync(*this);
    BeginVolumeIncNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeIncNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeIncNoUnmute, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolumeIncNoUnmute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeIncNoUnmute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeDecNoUnmute()
{
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4 sync(*this);
    BeginVolumeDecNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeDecNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDecNoUnmute, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolumeDecNoUnmute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("VolumeDecNoUnmute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume4::SyncVolume(TUint& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolume(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetBalance(TInt aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume4 sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetBalance(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume4 sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume4 sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncBalance(TInt& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndBalance(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetFade(TInt aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume4 sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetFade(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume4 sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume4 sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncFade(TInt& aValue)
{
    SyncFadeAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndFade(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetMute(TBool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume4 sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetMute(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncMute(TBool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndMute(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeLimit(TUint& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndVolumeLimit(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncUnityGain(TBool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume4 sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndUnityGain(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4::SyncVolumeOffset(const Brx& aChannel, TInt& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume4 sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginVolumeOffset(const Brx& aChannel, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4::EndVolumeOffset(IAsync& aAsync, TInt& aVolumeOffsetBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume4::SyncSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4 sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aVolumeOffsetBinaryMilliDb));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetVolumeOffset(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4::SyncTrim(const Brx& aChannel, TInt& aTrimBinaryMilliDb)
{
    SyncTrimAvOpenhomeOrgVolume4 sync(*this, aTrimBinaryMilliDb);
    BeginTrim(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginTrim(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionTrim->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTrim->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndTrim(IAsync& aAsync, TInt& aTrimBinaryMilliDb)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Trim"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aTrimBinaryMilliDb = ((ArgumentInt*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgVolume4::SyncSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb)
{
    SyncSetTrimAvOpenhomeOrgVolume4 sync(*this);
    BeginSetTrim(aChannel, aTrimBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4::BeginSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTrim->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aTrimBinaryMilliDb));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4::EndSetTrim(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetTrim"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUnityGainChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyTrimChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTrimChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolume(TUint& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyMute(TBool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyBalance(TInt& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyFade(TInt& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeLimit(TUint& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeMax(TUint& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeUnity(TUint& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeSteps(TUint& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyBalanceMax(TUint& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyFadeMax(TUint& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyUnityGain(TBool& aUnityGain) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeOffsets(Brhz& aVolumeOffsets) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsets.Set(iVolumeOffsets->Value());
}

void CpProxyAvOpenhomeOrgVolume4::PropertyVolumeOffsetMax(TUint& aVolumeOffsetMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4::PropertyTrim(Brhz& aTrim) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTrim.Set(iTrim->Value());
}

void CpProxyAvOpenhomeOrgVolume4::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume4::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume4::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume4::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume4::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume4::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4::TrimPropertyChanged()
{
    ReportEvent(iTrimChanged);
}


void CpProxyAvOpenhomeOrgVolume4::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume4::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume4::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume4::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume4::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume4::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume4::Version() const
{
  return iCpProxy.Version();
}


