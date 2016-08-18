#include "CpAvOpenhomeOrgVolume2.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgVolume2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgVolume2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgVolume2C();
    //CpProxyAvOpenhomeOrgVolume2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgVolume2*>(iProxy); }

    void SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    void BeginCharacteristics(FunctorAsync& aFunctor);
    void EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);

    void SyncSetVolume(TUint aValue);
    void BeginSetVolume(TUint aValue, FunctorAsync& aFunctor);
    void EndSetVolume(IAsync& aAsync);

    void SyncVolumeInc();
    void BeginVolumeInc(FunctorAsync& aFunctor);
    void EndVolumeInc(IAsync& aAsync);

    void SyncVolumeDec();
    void BeginVolumeDec(FunctorAsync& aFunctor);
    void EndVolumeDec(IAsync& aAsync);

    void SyncVolume(TUint& aValue);
    void BeginVolume(FunctorAsync& aFunctor);
    void EndVolume(IAsync& aAsync, TUint& aValue);

    void SyncSetBalance(TInt aValue);
    void BeginSetBalance(TInt aValue, FunctorAsync& aFunctor);
    void EndSetBalance(IAsync& aAsync);

    void SyncBalanceInc();
    void BeginBalanceInc(FunctorAsync& aFunctor);
    void EndBalanceInc(IAsync& aAsync);

    void SyncBalanceDec();
    void BeginBalanceDec(FunctorAsync& aFunctor);
    void EndBalanceDec(IAsync& aAsync);

    void SyncBalance(TInt& aValue);
    void BeginBalance(FunctorAsync& aFunctor);
    void EndBalance(IAsync& aAsync, TInt& aValue);

    void SyncSetFade(TInt aValue);
    void BeginSetFade(TInt aValue, FunctorAsync& aFunctor);
    void EndSetFade(IAsync& aAsync);

    void SyncFadeInc();
    void BeginFadeInc(FunctorAsync& aFunctor);
    void EndFadeInc(IAsync& aAsync);

    void SyncFadeDec();
    void BeginFadeDec(FunctorAsync& aFunctor);
    void EndFadeDec(IAsync& aAsync);

    void SyncFade(TInt& aValue);
    void BeginFade(FunctorAsync& aFunctor);
    void EndFade(IAsync& aAsync, TInt& aValue);

    void SyncSetMute(TBool aValue);
    void BeginSetMute(TBool aValue, FunctorAsync& aFunctor);
    void EndSetMute(IAsync& aAsync);

    void SyncMute(TBool& aValue);
    void BeginMute(FunctorAsync& aFunctor);
    void EndMute(IAsync& aAsync, TBool& aValue);

    void SyncVolumeLimit(TUint& aValue);
    void BeginVolumeLimit(FunctorAsync& aFunctor);
    void EndVolumeLimit(IAsync& aAsync, TUint& aValue);

    void SyncUnityGain(TBool& aValue);
    void BeginUnityGain(FunctorAsync& aFunctor);
    void EndUnityGain(IAsync& aAsync, TBool& aValue);

    void SetPropertyVolumeChanged(Functor& aFunctor);
    void SetPropertyMuteChanged(Functor& aFunctor);
    void SetPropertyBalanceChanged(Functor& aFunctor);
    void SetPropertyFadeChanged(Functor& aFunctor);
    void SetPropertyVolumeLimitChanged(Functor& aFunctor);
    void SetPropertyVolumeMaxChanged(Functor& aFunctor);
    void SetPropertyVolumeUnityChanged(Functor& aFunctor);
    void SetPropertyVolumeStepsChanged(Functor& aFunctor);
    void SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor);
    void SetPropertyBalanceMaxChanged(Functor& aFunctor);
    void SetPropertyFadeMaxChanged(Functor& aFunctor);
    void SetPropertyUnityGainChanged(Functor& aFunctor);

    void PropertyVolume(TUint& aVolume) const;
    void PropertyMute(TBool& aMute) const;
    void PropertyBalance(TInt& aBalance) const;
    void PropertyFade(TInt& aFade) const;
    void PropertyVolumeLimit(TUint& aVolumeLimit) const;
    void PropertyVolumeMax(TUint& aVolumeMax) const;
    void PropertyVolumeUnity(TUint& aVolumeUnity) const;
    void PropertyVolumeSteps(TUint& aVolumeSteps) const;
    void PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const;
    void PropertyBalanceMax(TUint& aBalanceMax) const;
    void PropertyFadeMax(TUint& aFadeMax) const;
    void PropertyUnityGain(TBool& aUnityGain) const;
private:
    void VolumePropertyChanged();
    void MutePropertyChanged();
    void BalancePropertyChanged();
    void FadePropertyChanged();
    void VolumeLimitPropertyChanged();
    void VolumeMaxPropertyChanged();
    void VolumeUnityPropertyChanged();
    void VolumeStepsPropertyChanged();
    void VolumeMilliDbPerStepPropertyChanged();
    void BalanceMaxPropertyChanged();
    void FadeMaxPropertyChanged();
    void UnityGainPropertyChanged();
private:
    Mutex iLock;
    Action* iActionCharacteristics;
    Action* iActionSetVolume;
    Action* iActionVolumeInc;
    Action* iActionVolumeDec;
    Action* iActionVolume;
    Action* iActionSetBalance;
    Action* iActionBalanceInc;
    Action* iActionBalanceDec;
    Action* iActionBalance;
    Action* iActionSetFade;
    Action* iActionFadeInc;
    Action* iActionFadeDec;
    Action* iActionFade;
    Action* iActionSetMute;
    Action* iActionMute;
    Action* iActionVolumeLimit;
    Action* iActionUnityGain;
    PropertyUint* iVolume;
    PropertyBool* iMute;
    PropertyInt* iBalance;
    PropertyInt* iFade;
    PropertyUint* iVolumeLimit;
    PropertyUint* iVolumeMax;
    PropertyUint* iVolumeUnity;
    PropertyUint* iVolumeSteps;
    PropertyUint* iVolumeMilliDbPerStep;
    PropertyUint* iBalanceMax;
    PropertyUint* iFadeMax;
    PropertyBool* iUnityGain;
    Functor iVolumeChanged;
    Functor iMuteChanged;
    Functor iBalanceChanged;
    Functor iFadeChanged;
    Functor iVolumeLimitChanged;
    Functor iVolumeMaxChanged;
    Functor iVolumeUnityChanged;
    Functor iVolumeStepsChanged;
    Functor iVolumeMilliDbPerStepChanged;
    Functor iBalanceMaxChanged;
    Functor iFadeMaxChanged;
    Functor iUnityGainChanged;
};


class SyncCharacteristicsAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TUint& iVolumeMax;
    TUint& iVolumeUnity;
    TUint& iVolumeSteps;
    TUint& iVolumeMilliDbPerStep;
    TUint& iBalanceMax;
    TUint& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume2C::SyncCharacteristicsAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume2C::SyncSetVolumeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume2C::SyncVolumeIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume2C::SyncVolumeDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TUint& iValue;
};

SyncVolumeAvOpenhomeOrgVolume2C::SyncVolumeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume2C::SyncSetBalanceAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume2C::SyncBalanceIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume2C::SyncBalanceDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TInt& iValue;
};

SyncBalanceAvOpenhomeOrgVolume2C::SyncBalanceAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncSetFadeAvOpenhomeOrgVolume2C::SyncSetFadeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncFadeIncAvOpenhomeOrgVolume2C::SyncFadeIncAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncFadeDecAvOpenhomeOrgVolume2C::SyncFadeDecAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TInt& iValue;
};

SyncFadeAvOpenhomeOrgVolume2C::SyncFadeAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
};

SyncSetMuteAvOpenhomeOrgVolume2C::SyncSetMuteAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TBool& iValue;
};

SyncMuteAvOpenhomeOrgVolume2C::SyncMuteAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TUint& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume2C::SyncVolumeLimitAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume2C : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume2C() {};
private:
    CpProxyAvOpenhomeOrgVolume2C& iService;
    TBool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume2C::SyncUnityGainAvOpenhomeOrgVolume2C(CpProxyAvOpenhomeOrgVolume2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}

CpProxyAvOpenhomeOrgVolume2C::CpProxyAvOpenhomeOrgVolume2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Volume", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume2C::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
}

CpProxyAvOpenhomeOrgVolume2C::~CpProxyAvOpenhomeOrgVolume2C()
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

void CpProxyAvOpenhomeOrgVolume2C::SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume2C sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginCharacteristics(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCharacteristics, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCharacteristics->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncSetVolume(TUint aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume2C sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginSetVolume(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume2C sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume2C sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncVolume(TUint& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndVolume(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncSetBalance(TInt aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume2C sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginSetBalance(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume2C sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume2C sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncBalance(TInt& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndBalance(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncSetFade(TInt aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume2C sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginSetFade(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume2C sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume2C sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncFade(TInt& aValue)
{
    SyncFadeAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndFade(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncSetMute(TBool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume2C sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginSetMute(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncMute(TBool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndMute(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncVolumeLimit(TUint& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndVolumeLimit(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SyncUnityGain(TBool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume2C sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume2C::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume2C::EndUnityGain(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyMuteChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMuteChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyFadeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeLimitChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeUnityChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeStepsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUnityGainChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolume(TUint& aVolume) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyMute(TBool& aMute) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyBalance(TInt& aBalance) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyFade(TInt& aFade) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolumeLimit(TUint& aVolumeLimit) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolumeMax(TUint& aVolumeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolumeUnity(TUint& aVolumeUnity) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolumeSteps(TUint& aVolumeSteps) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyBalanceMax(TUint& aBalanceMax) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyFadeMax(TUint& aFadeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::PropertyUnityGain(TBool& aUnityGain) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume2C::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume2C::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgVolume2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgVolume2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncCharacteristics(THandle aHandle, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncCharacteristics(*aVolumeMax, *aVolumeUnity, *aVolumeSteps, *aVolumeMilliDbPerStep, *aBalanceMax, *aFadeMax);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVolumeMax = 0;
        *aVolumeUnity = 0;
        *aVolumeSteps = 0;
        *aVolumeMilliDbPerStep = 0;
        *aBalanceMax = 0;
        *aFadeMax = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginCharacteristics(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCharacteristics(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndCharacteristics(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndCharacteristics(*async, *aVolumeMax, *aVolumeUnity, *aVolumeSteps, *aVolumeMilliDbPerStep, *aBalanceMax, *aFadeMax);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncSetVolume(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetVolume(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginSetVolume(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolume(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndSetVolume(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetVolume(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncVolumeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeInc();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginVolumeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndVolumeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeInc(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncVolumeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeDec();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginVolumeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndVolumeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeDec(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncVolume(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolume(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginVolume(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolume(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndVolume(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolume(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncSetBalance(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetBalance(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginSetBalance(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBalance(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndSetBalance(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetBalance(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncBalanceInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncBalanceInc();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginBalanceInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndBalanceInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndBalanceInc(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncBalanceDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncBalanceDec();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginBalanceDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndBalanceDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndBalanceDec(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncBalance(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncBalance(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginBalance(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalance(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndBalance(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndBalance(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncSetFade(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetFade(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginSetFade(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetFade(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndSetFade(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetFade(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncFadeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncFadeInc();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginFadeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndFadeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndFadeInc(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncFadeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncFadeDec();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginFadeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndFadeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndFadeDec(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncFade(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncFade(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginFade(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFade(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndFade(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndFade(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncSetMute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetMute((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginSetMute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetMute((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndSetMute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetMute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncMute(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncMute(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginMute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndMute(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndMute(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncVolumeLimit(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeLimit(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginVolumeLimit(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeLimit(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndVolumeLimit(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeLimit(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2SyncUnityGain(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncUnityGain(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2BeginUnityGain(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUnityGain(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume2EndUnityGain(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndUnityGain(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyMuteChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMuteChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyBalanceChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyFadeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeLimitChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeLimitChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeUnityChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeUnityChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeStepsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeStepsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyVolumeMilliDbPerStepChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMilliDbPerStepChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyBalanceMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyFadeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2SetPropertyUnityGainChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUnityGainChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolume(THandle aHandle, uint32_t* aVolume)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolume(*aVolume);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyMute(THandle aHandle, uint32_t* aMute)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Mute;
    proxyC->PropertyMute(Mute);
    *aMute = Mute? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyBalance(THandle aHandle, int32_t* aBalance)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyBalance(*aBalance);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyFade(THandle aHandle, int32_t* aFade)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyFade(*aFade);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolumeLimit(THandle aHandle, uint32_t* aVolumeLimit)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolumeLimit(*aVolumeLimit);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolumeMax(THandle aHandle, uint32_t* aVolumeMax)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolumeMax(*aVolumeMax);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolumeUnity(THandle aHandle, uint32_t* aVolumeUnity)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolumeUnity(*aVolumeUnity);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolumeSteps(THandle aHandle, uint32_t* aVolumeSteps)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolumeSteps(*aVolumeSteps);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyVolumeMilliDbPerStep(THandle aHandle, uint32_t* aVolumeMilliDbPerStep)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyVolumeMilliDbPerStep(*aVolumeMilliDbPerStep);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyBalanceMax(THandle aHandle, uint32_t* aBalanceMax)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyBalanceMax(*aBalanceMax);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyFadeMax(THandle aHandle, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertyFadeMax(*aFadeMax);
}

void STDCALL CpProxyAvOpenhomeOrgVolume2PropertyUnityGain(THandle aHandle, uint32_t* aUnityGain)
{
    CpProxyAvOpenhomeOrgVolume2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool UnityGain;
    proxyC->PropertyUnityGain(UnityGain);
    *aUnityGain = UnityGain? 1 : 0;
}

