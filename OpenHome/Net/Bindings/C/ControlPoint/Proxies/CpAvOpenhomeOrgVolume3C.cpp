#include "CpAvOpenhomeOrgVolume3.h"
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

class CpProxyAvOpenhomeOrgVolume3C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgVolume3C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgVolume3C();
    //CpProxyAvOpenhomeOrgVolume3* Proxy() { return static_cast<CpProxyAvOpenhomeOrgVolume3*>(iProxy); }

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


class SyncCharacteristicsAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TUint& iVolumeMax;
    TUint& iVolumeUnity;
    TUint& iVolumeSteps;
    TUint& iVolumeMilliDbPerStep;
    TUint& iBalanceMax;
    TUint& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume3C::SyncCharacteristicsAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume3C::SyncSetVolumeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume3C::SyncVolumeIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume3C::SyncVolumeDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TUint& iValue;
};

SyncVolumeAvOpenhomeOrgVolume3C::SyncVolumeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume3C::SyncSetBalanceAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume3C::SyncBalanceIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume3C::SyncBalanceDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TInt& iValue;
};

SyncBalanceAvOpenhomeOrgVolume3C::SyncBalanceAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetFadeAvOpenhomeOrgVolume3C::SyncSetFadeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncFadeIncAvOpenhomeOrgVolume3C::SyncFadeIncAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncFadeDecAvOpenhomeOrgVolume3C::SyncFadeDecAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TInt& iValue;
};

SyncFadeAvOpenhomeOrgVolume3C::SyncFadeAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetMuteAvOpenhomeOrgVolume3C::SyncSetMuteAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TBool& iValue;
};

SyncMuteAvOpenhomeOrgVolume3C::SyncMuteAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TUint& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume3C::SyncVolumeLimitAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TBool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume3C::SyncUnityGainAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}


class SyncVolumeOffsetAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeOffsetAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TInt& iVolumeOffsetBinaryMilliDb;
};

SyncVolumeOffsetAvOpenhomeOrgVolume3C::SyncVolumeOffsetAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}


class SyncSetVolumeOffsetAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeOffsetAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetVolumeOffsetAvOpenhomeOrgVolume3C::SyncSetVolumeOffsetAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}


class SyncTrimAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncTrimAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aTrimBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTrimAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
    TInt& iTrimBinaryMilliDb;
};

SyncTrimAvOpenhomeOrgVolume3C::SyncTrimAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy, TInt& aTrimBinaryMilliDb)
    : iService(aProxy)
    , iTrimBinaryMilliDb(aTrimBinaryMilliDb)
{
}

void SyncTrimAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTrim(aAsync, iTrimBinaryMilliDb);
}


class SyncSetTrimAvOpenhomeOrgVolume3C : public SyncProxyAction
{
public:
    SyncSetTrimAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTrimAvOpenhomeOrgVolume3C() {};
private:
    CpProxyAvOpenhomeOrgVolume3C& iService;
};

SyncSetTrimAvOpenhomeOrgVolume3C::SyncSetTrimAvOpenhomeOrgVolume3C(CpProxyAvOpenhomeOrgVolume3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetTrimAvOpenhomeOrgVolume3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTrim(aAsync);
}

CpProxyAvOpenhomeOrgVolume3C::CpProxyAvOpenhomeOrgVolume3C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Volume", 3, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume3C::TrimPropertyChanged);
    iTrim = new PropertyString("Trim", functor);
    AddProperty(iTrim);
}

CpProxyAvOpenhomeOrgVolume3C::~CpProxyAvOpenhomeOrgVolume3C()
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
    delete iActionTrim;
    delete iActionSetTrim;
}

void CpProxyAvOpenhomeOrgVolume3C::SyncCharacteristics(TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume3C sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume3C::EndCharacteristics(IAsync& aAsync, TUint& aVolumeMax, TUint& aVolumeUnity, TUint& aVolumeSteps, TUint& aVolumeMilliDbPerStep, TUint& aBalanceMax, TUint& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetVolume(TUint aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume3C sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetVolume(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume3C sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume3C sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncVolume(TUint& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndVolume(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetBalance(TInt aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume3C sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetBalance(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume3C sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume3C sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalanceDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncBalance(TInt& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndBalance(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetFade(TInt aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume3C sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetFade(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume3C sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeInc, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume3C sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFadeDec, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncFade(TInt& aValue)
{
    SyncFadeAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndFade(IAsync& aAsync, TInt& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetMute(TBool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume3C sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetMute(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncMute(TBool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndMute(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncVolumeLimit(TUint& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndVolumeLimit(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncUnityGain(TBool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume3C sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndUnityGain(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncVolumeOffset(const Brx& aChannel, TInt& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume3C sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginVolumeOffset(const Brx& aChannel, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume3C::EndVolumeOffset(IAsync& aAsync, TInt& aVolumeOffsetBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume3C sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetVolumeOffset(const Brx& aChannel, TInt aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetVolumeOffset, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeOffset->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aVolumeOffsetBinaryMilliDb));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetVolumeOffset(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncTrim(const Brx& aChannel, TInt& aTrimBinaryMilliDb)
{
    SyncTrimAvOpenhomeOrgVolume3C sync(*this, aTrimBinaryMilliDb);
    BeginTrim(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginTrim(const Brx& aChannel, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume3C::EndTrim(IAsync& aAsync, TInt& aTrimBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume3C::SyncSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb)
{
    SyncSetTrimAvOpenhomeOrgVolume3C sync(*this);
    BeginSetTrim(aChannel, aTrimBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume3C::BeginSetTrim(const Brx& aChannel, TInt aTrimBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTrim->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aTrimBinaryMilliDb));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume3C::EndSetTrim(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyMuteChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMuteChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyFadeChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeLimitChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeUnityChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeStepsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBalanceMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iFadeMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUnityGainChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeOffsetsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::SetPropertyTrimChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTrimChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolume(TUint& aVolume) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyMute(TBool& aMute) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyBalance(TInt& aBalance) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyFade(TInt& aFade) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeLimit(TUint& aVolumeLimit) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeMax(TUint& aVolumeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeUnity(TUint& aVolumeUnity) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeSteps(TUint& aVolumeSteps) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeMilliDbPerStep(TUint& aVolumeMilliDbPerStep) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyBalanceMax(TUint& aBalanceMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyFadeMax(TUint& aFadeMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyUnityGain(TBool& aUnityGain) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeOffsets(Brhz& aVolumeOffsets) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeOffsets.Set(iVolumeOffsets->Value());
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyVolumeOffsetMax(TUint& aVolumeOffsetMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume3C::PropertyTrim(Brhz& aTrim) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTrim.Set(iTrim->Value());
}

void CpProxyAvOpenhomeOrgVolume3C::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume3C::TrimPropertyChanged()
{
    ReportEvent(iTrimChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgVolume3Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgVolume3C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncCharacteristics(THandle aHandle, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginCharacteristics(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCharacteristics(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndCharacteristics(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVolumeMax, uint32_t* aVolumeUnity, uint32_t* aVolumeSteps, uint32_t* aVolumeMilliDbPerStep, uint32_t* aBalanceMax, uint32_t* aFadeMax)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetVolume(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetVolume(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolume(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetVolume(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncVolumeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginVolumeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndVolumeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncVolumeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginVolumeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndVolumeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncVolume(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginVolume(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolume(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndVolume(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetBalance(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetBalance(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBalance(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetBalance(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncBalanceInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginBalanceInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndBalanceInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncBalanceDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginBalanceDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalanceDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndBalanceDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncBalance(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginBalance(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBalance(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndBalance(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetFade(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetFade(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetFade(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetFade(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncFadeInc(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginFadeInc(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeInc(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndFadeInc(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncFadeDec(THandle aHandle)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginFadeDec(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFadeDec(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndFadeDec(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncFade(THandle aHandle, int32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginFade(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginFade(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndFade(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetMute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetMute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetMute((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetMute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncMute(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginMute(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMute(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndMute(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncVolumeLimit(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginVolumeLimit(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeLimit(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndVolumeLimit(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncUnityGain(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginUnityGain(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUnityGain(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndUnityGain(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncVolumeOffset(THandle aHandle, const char* aChannel, int32_t* aVolumeOffsetBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginVolumeOffset(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVolumeOffset(buf_aChannel, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndVolumeOffset(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aVolumeOffsetBinaryMilliDb)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetVolumeOffset(THandle aHandle, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetVolumeOffset(THandle aHandle, const char* aChannel, int32_t aVolumeOffsetBinaryMilliDb, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetVolumeOffset(buf_aChannel, aVolumeOffsetBinaryMilliDb, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetVolumeOffset(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncTrim(THandle aHandle, const char* aChannel, int32_t* aTrimBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginTrim(THandle aHandle, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTrim(buf_aChannel, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndTrim(THandle aHandle, OhNetHandleAsync aAsync, int32_t* aTrimBinaryMilliDb)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3SyncSetTrim(THandle aHandle, const char* aChannel, int32_t aTrimBinaryMilliDb)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3BeginSetTrim(THandle aHandle, const char* aChannel, int32_t aTrimBinaryMilliDb, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetTrim(buf_aChannel, aTrimBinaryMilliDb, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3EndSetTrim(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyMuteChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMuteChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyBalanceChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyFadeChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeLimitChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeLimitChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeUnityChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeUnityChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeStepsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeStepsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeMilliDbPerStepChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeMilliDbPerStepChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyBalanceMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBalanceMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyFadeMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyFadeMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyUnityGainChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUnityGainChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeOffsetsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeOffsetsChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyVolumeOffsetMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVolumeOffsetMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgVolume3SetPropertyTrimChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTrimChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolume(THandle aHandle, uint32_t* aVolume)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolume(*aVolume);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyMute(THandle aHandle, uint32_t* aMute)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyBalance(THandle aHandle, int32_t* aBalance)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyBalance(*aBalance);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyFade(THandle aHandle, int32_t* aFade)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyFade(*aFade);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeLimit(THandle aHandle, uint32_t* aVolumeLimit)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeLimit(*aVolumeLimit);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeMax(THandle aHandle, uint32_t* aVolumeMax)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeMax(*aVolumeMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeUnity(THandle aHandle, uint32_t* aVolumeUnity)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeUnity(*aVolumeUnity);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeSteps(THandle aHandle, uint32_t* aVolumeSteps)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeSteps(*aVolumeSteps);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeMilliDbPerStep(THandle aHandle, uint32_t* aVolumeMilliDbPerStep)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeMilliDbPerStep(*aVolumeMilliDbPerStep);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyBalanceMax(THandle aHandle, uint32_t* aBalanceMax)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyBalanceMax(*aBalanceMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyFadeMax(THandle aHandle, uint32_t* aFadeMax)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyFadeMax(*aFadeMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyUnityGain(THandle aHandle, uint32_t* aUnityGain)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeOffsets(THandle aHandle, char** aVolumeOffsets)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyVolumeOffsetMax(THandle aHandle, uint32_t* aVolumeOffsetMax)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyVolumeOffsetMax(*aVolumeOffsetMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgVolume3PropertyTrim(THandle aHandle, char** aTrim)
{
    CpProxyAvOpenhomeOrgVolume3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgVolume3C*>(aHandle);
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

