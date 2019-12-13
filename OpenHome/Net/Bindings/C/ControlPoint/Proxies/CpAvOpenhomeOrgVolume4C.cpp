#include "CpAvOpenhomeOrgVolume4.h"
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

class CpProxyAvOpenhomeOrgVolume4C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgVolume4C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgVolume4C();
    //CpProxyAvOpenhomeOrgVolume4* Proxy() { return static_cast<CpProxyAvOpenhomeOrgVolume4*>(iProxy); }

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

    void SyncSetVolumeNoUnmute(TUint aValue);
    void BeginSetVolumeNoUnmute(TUint aValue, FunctorAsync& aFunctor);
    void EndSetVolumeNoUnmute(IAsync& aAsync);

    void SyncVolumeIncNoUnmute();
    void BeginVolumeIncNoUnmute(FunctorAsync& aFunctor);
    void EndVolumeIncNoUnmute(IAsync& aAsync);

    void SyncVolumeDecNoUnmute();
    void BeginVolumeDecNoUnmute(FunctorAsync& aFunctor);
    void EndVolumeDecNoUnmute(IAsync& aAsync);

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

    void SyncVolumeOffset(const Brx& aChannel, TInt& aVolumeOffsetBinaryMilliDb);
    void BeginVolumeOffset(const Brx& aChannel, FunctorAsync& aFunctor);
    void EndVolumeOffset(IAsync& aAsync, TInt& aVolumeOffsetBinaryMilliDb);

    void SyncSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb);
    void BeginSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor);
    void EndSetVolumeOffset(IAsync& aAsync);

    void SyncTrim(const Brx& aChannel, TInt& aTrimBinaryMilliDb);
    void BeginTrim(const Brx& aChannel, FunctorAsync& aFunctor);
    void EndTrim(IAsync& aAsync, TInt& aTrimBinaryMilliDb);

    void SyncSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb);
    void BeginSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb, FunctorAsync& aFunctor);
    void EndSetTrim(IAsync& aAsync);

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
    void SetPropertyVolumeOffsetsChanged(Functor& aFunctor);
    void SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor);
    void SetPropertyTrimChanged(Functor& aFunctor);

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
    void PropertyVolumeOffsets(Brhz& aVolumeOffsets) const;
    void PropertyVolumeOffsetMax(TUint& aVolumeOffsetMax) const;
    void PropertyTrim(Brhz& aTrim) const;
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
    void VolumeOffsetsPropertyChanged();
    void VolumeOffsetMaxPropertyChanged();
    void TrimPropertyChanged();
private:
    Mutex iLock;
    Action* iActionCharacteristics;
    Action* iActionSetVolume;
    Action* iActionVolumeInc;
    Action* iActionVolumeDec;
    Action* iActionSetVolumeNoUnmute;
    Action* iActionVolumeIncNoUnmute;
    Action* iActionVolumeDecNoUnmute;
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
    Action* iActionVolumeOffset;
    Action* iActionSetVolumeOffset;
    Action* iActionTrim;
    Action* iActionSetTrim;
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
    PropertyString* iVolumeOffsets;
    PropertyUint* iVolumeOffsetMax;
    PropertyString* iTrim;
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
    Functor iVolumeOffsetsChanged;
    Functor iVolumeOffsetMaxChanged;
    Functor iTrimChanged;
};


class SyncCharacteristicsAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TUint& iVolumeMax;
    TUint& iVolumeUnity;
    TUint& iVolumeSteps;
    TUint& iVolumeMilliDbPerStep;
    TUint& iBalanceMax;
    TUint& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume4C::SyncCharacteristicsAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume4C::SyncSetVolumeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume4C::SyncVolumeIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume4C::SyncVolumeDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C::SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeNoUnmute(aAsync);
}


class SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C::SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeIncNoUnmute(aAsync);
}


class SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C::SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDecNoUnmute(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TUint& iValue;
};

SyncVolumeAvOpenhomeOrgVolume4C::SyncVolumeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume4C::SyncSetBalanceAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume4C::SyncBalanceIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume4C::SyncBalanceDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TInt& iValue;
};

SyncBalanceAvOpenhomeOrgVolume4C::SyncBalanceAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetFadeAvOpenhomeOrgVolume4C::SyncSetFadeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncFadeIncAvOpenhomeOrgVolume4C::SyncFadeIncAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncFadeDecAvOpenhomeOrgVolume4C::SyncFadeDecAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TInt& iValue;
};

SyncFadeAvOpenhomeOrgVolume4C::SyncFadeAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetMuteAvOpenhomeOrgVolume4C::SyncSetMuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TBool& iValue;
};

SyncMuteAvOpenhomeOrgVolume4C::SyncMuteAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TUint& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume4C::SyncVolumeLimitAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TBool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume4C::SyncUnityGainAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}


class SyncVolumeOffsetAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeOffsetAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TInt& iVolumeOffsetBinaryMilliDb;
};

SyncVolumeOffsetAvOpenhomeOrgVolume4C::SyncVolumeOffsetAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}


class SyncSetVolumeOffsetAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeOffsetAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetVolumeOffsetAvOpenhomeOrgVolume4C::SyncSetVolumeOffsetAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}


class SyncTrimAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncTrimAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aTrimBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTrimAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
    TInt& iTrimBinaryMilliDb;
};

SyncTrimAvOpenhomeOrgVolume4C::SyncTrimAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy, TInt& aTrimBinaryMilliDb)
    : iService(aProxy)
    , iTrimBinaryMilliDb(aTrimBinaryMilliDb)
{
}

void SyncTrimAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTrim(aAsync, iTrimBinaryMilliDb);
}


class SyncSetTrimAvOpenhomeOrgVolume4C : public SyncProxyAction
{
public:
    SyncSetTrimAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTrimAvOpenhomeOrgVolume4C() {};
private:
    CpProxyAvOpenhomeOrgVolume4C& iService;
};

SyncSetTrimAvOpenhomeOrgVolume4C::SyncSetTrimAvOpenhomeOrgVolume4C(CpProxyAvOpenhomeOrgVolume4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTrimAvOpenhomeOrgVolume4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTrim(aAsync);
}

CpProxyAvOpenhomeOrgVolume4C::CpProxyAvOpenhomeOrgVolume4C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Volume", 4, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4C::TrimPropertyChanged);
    iTrim = new PropertyString("Trim", functor);
    AddProperty(iTrim);
}

CpProxyAvOpenhomeOrgVolume4C::~CpProxyAvOpenhomeOrgVolume4C()
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

void CpProxyAvOpenhomeOrgVolume4C::SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume4C sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4C::EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetVolume(TUint aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume4C sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetVolume(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume4C sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume4C sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetVolumeNoUnmute(TUint aValue)
{
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4C sync(*this);
    BeginSetVolumeNoUnmute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetVolumeNoUnmute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolumeNoUnmute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeNoUnmute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetVolumeNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeIncNoUnmute()
{
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4C sync(*this);
    BeginVolumeIncNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeIncNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeIncNoUnmute, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeIncNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeDecNoUnmute()
{
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4C sync(*this);
    BeginVolumeDecNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeDecNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeDecNoUnmute, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeDecNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolume(TUint& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolume(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetBalance(TInt aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume4C sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetBalance(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume4C sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume4C sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncBalance(TInt& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndBalance(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetFade(TInt aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume4C sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetFade(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume4C sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume4C sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncFade(TInt& aValue)
{
    SyncFadeAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndFade(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetMute(TBool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume4C sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetMute(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncMute(TBool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndMute(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeLimit(TUint& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeLimit(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncUnityGain(TBool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume4C sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndUnityGain(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncVolumeOffset(const Brx& aChannel, TInt& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume4C sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginVolumeOffset(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeOffset->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndVolumeOffset(IAsync& aAsync, TInt& aVolumeOffsetBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4C sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aVolumeOffsetBinaryMilliDb));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetVolumeOffset(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncTrim(const Brx& aChannel, TInt& aTrimBinaryMilliDb)
{
    SyncTrimAvOpenhomeOrgVolume4C sync(*this, aTrimBinaryMilliDb);
    BeginTrim(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginTrim(const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionTrim->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTrim->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndTrim(IAsync& aAsync, TInt& aTrimBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume4C::SyncSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb)
{
    SyncSetTrimAvOpenhomeOrgVolume4C sync(*this);
    BeginSetTrim(aChannel, aTrimBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4C::BeginSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTrim->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aTrimBinaryMilliDb));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4C::EndSetTrim(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyMuteChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMuteChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyFadeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeLimitChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeUnityChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeStepsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUnityGainChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeOffsetsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::SetPropertyTrimChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTrimChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolume(TUint& aVolume) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyMute(TBool& aMute) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyBalance(TInt& aBalance) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyFade(TInt& aFade) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeLimit(TUint& aVolumeLimit) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeMax(TUint& aVolumeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeUnity(TUint& aVolumeUnity) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeSteps(TUint& aVolumeSteps) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyBalanceMax(TUint& aBalanceMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyFadeMax(TUint& aFadeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyUnityGain(TBool& aUnityGain) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeOffsets(Brhz& aVolumeOffsets) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeOffsets.Set(iVolumeOffsets->Value());
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyVolumeOffsetMax(TUint& aVolumeOffsetMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4C::PropertyTrim(Brhz& aTrim) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTrim.Set(iTrim->Value());
}

void CpProxyAvOpenhomeOrgVolume4C::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4C::TrimPropertyChanged()
{
    ReportEvent(iTrimChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgVolume4Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgVolume4C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncCharacteristics(THandle aHandle, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginCharacteristics(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCharacteristics(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndCharacteristics(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetVolume(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetVolume(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolume(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetVolume(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetVolumeNoUnmute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetVolumeNoUnmute(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetVolumeNoUnmute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolumeNoUnmute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetVolumeNoUnmute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetVolumeNoUnmute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeIncNoUnmute(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeIncNoUnmute();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeIncNoUnmute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeIncNoUnmute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeIncNoUnmute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeIncNoUnmute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeDecNoUnmute(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeDecNoUnmute();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeDecNoUnmute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeDecNoUnmute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeDecNoUnmute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeDecNoUnmute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolume(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolume(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolume(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolume(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetBalance(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetBalance(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBalance(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetBalance(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncBalanceInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginBalanceInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndBalanceInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncBalanceDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginBalanceDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndBalanceDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncBalance(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginBalance(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalance(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndBalance(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetFade(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetFade(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetFade(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetFade(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncFadeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginFadeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndFadeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncFadeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginFadeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndFadeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncFade(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginFade(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFade(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndFade(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetMute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetMute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetMute((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetMute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncMute(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginMute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndMute(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeLimit(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeLimit(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeLimit(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeLimit(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncUnityGain(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginUnityGain(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUnityGain(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndUnityGain(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncVolumeOffset(THandle aHandle, const char* aChannel, int32_t* aVolumeOffsetBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncVolumeOffset(buf_aChannel, *aVolumeOffsetBinaryMilliDb);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVolumeOffsetBinaryMilliDb = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginVolumeOffset(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeOffset(buf_aChannel, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndVolumeOffset(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aVolumeOffsetBinaryMilliDb)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndVolumeOffset(*async, *aVolumeOffsetBinaryMilliDb);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetVolumeOffset(THandle aHandle, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncSetVolumeOffset(buf_aChannel, aVolumeOffsetBinaryMilliDb);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetVolumeOffset(THandle aHandle, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolumeOffset(buf_aChannel, aVolumeOffsetBinaryMilliDb, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetVolumeOffset(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetVolumeOffset(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncTrim(THandle aHandle, const char* aChannel, int32_t* aTrimBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncTrim(buf_aChannel, *aTrimBinaryMilliDb);
    }
    catch (ProxyError& ) {
        err = -1;
        *aTrimBinaryMilliDb = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginTrim(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTrim(buf_aChannel, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndTrim(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aTrimBinaryMilliDb)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndTrim(*async, *aTrimBinaryMilliDb);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4SyncSetTrim(THandle aHandle, const char* aChannel, int32_t aTrimBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncSetTrim(buf_aChannel, aTrimBinaryMilliDb);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4BeginSetTrim(THandle aHandle, const char* aChannel, int32_t aTrimBinaryMilliDb, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetTrim(buf_aChannel, aTrimBinaryMilliDb, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4EndSetTrim(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetTrim(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyMuteChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMuteChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyBalanceChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyFadeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeLimitChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeLimitChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeUnityChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeUnityChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeStepsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeStepsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeMilliDbPerStepChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMilliDbPerStepChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyBalanceMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyFadeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyUnityGainChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUnityGainChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeOffsetsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeOffsetsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyVolumeOffsetMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeOffsetMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume4SetPropertyTrimChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTrimChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolume(THandle aHandle, uint32_t* aVolume)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolume(*aVolume);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyMute(THandle aHandle, uint32_t* aMute)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Mute;
    try {
        proxyC->PropertyMute(Mute);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMute = Mute? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyBalance(THandle aHandle, int32_t* aBalance)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyBalance(*aBalance);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyFade(THandle aHandle, int32_t* aFade)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyFade(*aFade);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeLimit(THandle aHandle, uint32_t* aVolumeLimit)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeLimit(*aVolumeLimit);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeMax(THandle aHandle, uint32_t* aVolumeMax)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeMax(*aVolumeMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeUnity(THandle aHandle, uint32_t* aVolumeUnity)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeUnity(*aVolumeUnity);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeSteps(THandle aHandle, uint32_t* aVolumeSteps)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeSteps(*aVolumeSteps);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeMilliDbPerStep(THandle aHandle, uint32_t* aVolumeMilliDbPerStep)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeMilliDbPerStep(*aVolumeMilliDbPerStep);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyBalanceMax(THandle aHandle, uint32_t* aBalanceMax)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyBalanceMax(*aBalanceMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyFadeMax(THandle aHandle, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyFadeMax(*aFadeMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyUnityGain(THandle aHandle, uint32_t* aUnityGain)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool UnityGain;
    try {
        proxyC->PropertyUnityGain(UnityGain);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUnityGain = UnityGain? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeOffsets(THandle aHandle, char** aVolumeOffsets)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aVolumeOffsets;
    try {
        proxyC->PropertyVolumeOffsets(buf_aVolumeOffsets);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aVolumeOffsets = buf_aVolumeOffsets.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyVolumeOffsetMax(THandle aHandle, uint32_t* aVolumeOffsetMax)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeOffsetMax(*aVolumeOffsetMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume4PropertyTrim(THandle aHandle, char** aTrim)
{
    CpProxyAvOpenhomeOrgVolume4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTrim;
    try {
        proxyC->PropertyTrim(buf_aTrim);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aTrim = buf_aTrim.Transfer();
    return 0;
}

