#include "CpAvOpenhomeOrgVolume4.h"
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


class SyncCharacteristicsAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncCharacteristicsAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCharacteristicsAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    uint32_t& iVolumeMax;
    uint32_t& iVolumeUnity;
    uint32_t& iVolumeSteps;
    uint32_t& iVolumeMilliDbPerStep;
    uint32_t& iBalanceMax;
    uint32_t& iFadeMax;
};

SyncCharacteristicsAvOpenhomeOrgVolume4Cpp::SyncCharacteristicsAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
    : iService(aProxy)
    , iVolumeMax(aVolumeMax)
    , iVolumeUnity(aVolumeUnity)
    , iVolumeSteps(aVolumeSteps)
    , iVolumeMilliDbPerStep(aVolumeMilliDbPerStep)
    , iBalanceMax(aBalanceMax)
    , iFadeMax(aFadeMax)
{
}

void SyncCharacteristicsAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCharacteristics(aAsync, iVolumeMax, iVolumeUnity, iVolumeSteps, iVolumeMilliDbPerStep, iBalanceMax, iFadeMax);
}


class SyncSetVolumeAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetVolumeAvOpenhomeOrgVolume4Cpp::SyncSetVolumeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolume(aAsync);
}


class SyncVolumeIncAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncVolumeIncAvOpenhomeOrgVolume4Cpp::SyncVolumeIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeInc(aAsync);
}


class SyncVolumeDecAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncVolumeDecAvOpenhomeOrgVolume4Cpp::SyncVolumeDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDec(aAsync);
}


class SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp::SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeNoUnmute(aAsync);
}


class SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp::SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeIncNoUnmute(aAsync);
}


class SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp::SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeDecNoUnmute(aAsync);
}


class SyncVolumeAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeAvOpenhomeOrgVolume4Cpp::SyncVolumeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolume(aAsync, iValue);
}


class SyncSetBalanceAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetBalanceAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBalanceAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetBalanceAvOpenhomeOrgVolume4Cpp::SyncSetBalanceAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBalanceAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBalance(aAsync);
}


class SyncBalanceIncAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncBalanceIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceIncAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncBalanceIncAvOpenhomeOrgVolume4Cpp::SyncBalanceIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceIncAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceInc(aAsync);
}


class SyncBalanceDecAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncBalanceDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceDecAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncBalanceDecAvOpenhomeOrgVolume4Cpp::SyncBalanceDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncBalanceDecAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalanceDec(aAsync);
}


class SyncBalanceAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncBalanceAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBalanceAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    int32_t& iValue;
};

SyncBalanceAvOpenhomeOrgVolume4Cpp::SyncBalanceAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBalanceAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBalance(aAsync, iValue);
}


class SyncSetFadeAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetFadeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetFadeAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetFadeAvOpenhomeOrgVolume4Cpp::SyncSetFadeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetFadeAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetFade(aAsync);
}


class SyncFadeIncAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncFadeIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeIncAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncFadeIncAvOpenhomeOrgVolume4Cpp::SyncFadeIncAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeIncAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeInc(aAsync);
}


class SyncFadeDecAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncFadeDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeDecAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncFadeDecAvOpenhomeOrgVolume4Cpp::SyncFadeDecAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncFadeDecAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFadeDec(aAsync);
}


class SyncFadeAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncFadeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncFadeAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    int32_t& iValue;
};

SyncFadeAvOpenhomeOrgVolume4Cpp::SyncFadeAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncFadeAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndFade(aAsync, iValue);
}


class SyncSetMuteAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetMuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMuteAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetMuteAvOpenhomeOrgVolume4Cpp::SyncSetMuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetMuteAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMute(aAsync);
}


class SyncMuteAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncMuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMuteAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    bool& iValue;
};

SyncMuteAvOpenhomeOrgVolume4Cpp::SyncMuteAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncMuteAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMute(aAsync, iValue);
}


class SyncVolumeLimitAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeLimitAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeLimitAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    uint32_t& iValue;
};

SyncVolumeLimitAvOpenhomeOrgVolume4Cpp::SyncVolumeLimitAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncVolumeLimitAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeLimit(aAsync, iValue);
}


class SyncUnityGainAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncUnityGainAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUnityGainAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    bool& iValue;
};

SyncUnityGainAvOpenhomeOrgVolume4Cpp::SyncUnityGainAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUnityGainAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUnityGain(aAsync, iValue);
}


class SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aVolumeOffsetBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    int32_t& iVolumeOffsetBinaryMilliDb;
};

SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp::SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aVolumeOffsetBinaryMilliDb)
    : iService(aProxy)
    , iVolumeOffsetBinaryMilliDb(aVolumeOffsetBinaryMilliDb)
{
}

void SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndVolumeOffset(aAsync, iVolumeOffsetBinaryMilliDb);
}


class SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp::SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetVolumeOffset(aAsync);
}


class SyncTrimAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncTrimAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aTrimBinaryMilliDb);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTrimAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
    int32_t& iTrimBinaryMilliDb;
};

SyncTrimAvOpenhomeOrgVolume4Cpp::SyncTrimAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy, int32_t& aTrimBinaryMilliDb)
    : iService(aProxy)
    , iTrimBinaryMilliDb(aTrimBinaryMilliDb)
{
}

void SyncTrimAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTrim(aAsync, iTrimBinaryMilliDb);
}


class SyncSetTrimAvOpenhomeOrgVolume4Cpp : public SyncProxyAction
{
public:
    SyncSetTrimAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetTrimAvOpenhomeOrgVolume4Cpp() {}
private:
    CpProxyAvOpenhomeOrgVolume4Cpp& iService;
};

SyncSetTrimAvOpenhomeOrgVolume4Cpp::SyncSetTrimAvOpenhomeOrgVolume4Cpp(CpProxyAvOpenhomeOrgVolume4Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetTrimAvOpenhomeOrgVolume4Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetTrim(aAsync);
}


CpProxyAvOpenhomeOrgVolume4Cpp::CpProxyAvOpenhomeOrgVolume4Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumePropertyChanged);
    iVolume = new PropertyUint("Volume", functor);
    AddProperty(iVolume);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::MutePropertyChanged);
    iMute = new PropertyBool("Mute", functor);
    AddProperty(iMute);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::BalancePropertyChanged);
    iBalance = new PropertyInt("Balance", functor);
    AddProperty(iBalance);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::FadePropertyChanged);
    iFade = new PropertyInt("Fade", functor);
    AddProperty(iFade);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeLimitPropertyChanged);
    iVolumeLimit = new PropertyUint("VolumeLimit", functor);
    AddProperty(iVolumeLimit);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeMaxPropertyChanged);
    iVolumeMax = new PropertyUint("VolumeMax", functor);
    AddProperty(iVolumeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeUnityPropertyChanged);
    iVolumeUnity = new PropertyUint("VolumeUnity", functor);
    AddProperty(iVolumeUnity);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeStepsPropertyChanged);
    iVolumeSteps = new PropertyUint("VolumeSteps", functor);
    AddProperty(iVolumeSteps);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeMilliDbPerStepPropertyChanged);
    iVolumeMilliDbPerStep = new PropertyUint("VolumeMilliDbPerStep", functor);
    AddProperty(iVolumeMilliDbPerStep);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::BalanceMaxPropertyChanged);
    iBalanceMax = new PropertyUint("BalanceMax", functor);
    AddProperty(iBalanceMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::FadeMaxPropertyChanged);
    iFadeMax = new PropertyUint("FadeMax", functor);
    AddProperty(iFadeMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::UnityGainPropertyChanged);
    iUnityGain = new PropertyBool("UnityGain", functor);
    AddProperty(iUnityGain);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeOffsetsPropertyChanged);
    iVolumeOffsets = new PropertyString("VolumeOffsets", functor);
    AddProperty(iVolumeOffsets);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::VolumeOffsetMaxPropertyChanged);
    iVolumeOffsetMax = new PropertyUint("VolumeOffsetMax", functor);
    AddProperty(iVolumeOffsetMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgVolume4Cpp::TrimPropertyChanged);
    iTrim = new PropertyString("Trim", functor);
    AddProperty(iTrim);
}

CpProxyAvOpenhomeOrgVolume4Cpp::~CpProxyAvOpenhomeOrgVolume4Cpp()
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncCharacteristics(uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
{
    SyncCharacteristicsAvOpenhomeOrgVolume4Cpp sync(*this, aVolumeMax, aVolumeUnity, aVolumeSteps, aVolumeMilliDbPerStep, aBalanceMax, aFadeMax);
    BeginCharacteristics(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginCharacteristics(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::EndCharacteristics(IAsync& aAsync, uint32_t& aVolumeMax, uint32_t& aVolumeUnity, uint32_t& aVolumeSteps, uint32_t& aVolumeMilliDbPerStep, uint32_t& aBalanceMax, uint32_t& aFadeMax)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetVolume(uint32_t aValue)
{
    SyncSetVolumeAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetVolume(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetVolume(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolume, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolume->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetVolume(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeInc()
{
    SyncVolumeIncAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginVolumeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeDec()
{
    SyncVolumeDecAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginVolumeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetVolumeNoUnmute(uint32_t aValue)
{
    SyncSetVolumeNoUnmuteAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetVolumeNoUnmute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetVolumeNoUnmute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetVolumeNoUnmute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetVolumeNoUnmute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetVolumeNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeIncNoUnmute()
{
    SyncVolumeIncNoUnmuteAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginVolumeIncNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeIncNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeIncNoUnmute, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeIncNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeDecNoUnmute()
{
    SyncVolumeDecNoUnmuteAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginVolumeDecNoUnmute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeDecNoUnmute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeDecNoUnmute, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeDecNoUnmute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolume(uint32_t& aValue)
{
    SyncVolumeAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginVolume(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolume(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolume, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolume->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolume(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetBalance(int32_t aValue)
{
    SyncSetBalanceAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetBalance(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetBalance(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBalance, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBalance->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetBalance(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncBalanceInc()
{
    SyncBalanceIncAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginBalanceInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginBalanceInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndBalanceInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncBalanceDec()
{
    SyncBalanceDecAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginBalanceDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginBalanceDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalanceDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndBalanceDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncBalance(int32_t& aValue)
{
    SyncBalanceAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginBalance(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginBalance(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBalance, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBalance->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndBalance(IAsync& aAsync, int32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetFade(int32_t aValue)
{
    SyncSetFadeAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetFade(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetFade(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetFade, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetFade->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetFade(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncFadeInc()
{
    SyncFadeIncAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginFadeInc(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginFadeInc(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeInc, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndFadeInc(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncFadeDec()
{
    SyncFadeDecAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginFadeDec(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginFadeDec(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFadeDec, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndFadeDec(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncFade(int32_t& aValue)
{
    SyncFadeAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginFade(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginFade(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionFade, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionFade->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndFade(IAsync& aAsync, int32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetMute(bool aValue)
{
    SyncSetMuteAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetMute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetMute(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetMute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMute->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetMute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncMute(bool& aValue)
{
    SyncMuteAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginMute(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginMute(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMute, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMute->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndMute(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeLimit(uint32_t& aValue)
{
    SyncVolumeLimitAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginVolumeLimit(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeLimit(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionVolumeLimit, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVolumeLimit->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeLimit(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncUnityGain(bool& aValue)
{
    SyncUnityGainAvOpenhomeOrgVolume4Cpp sync(*this, aValue);
    BeginUnityGain(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginUnityGain(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUnityGain, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUnityGain->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndUnityGain(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncVolumeOffset(const std::string& aChannel, int32_t& aVolumeOffsetBinaryMilliDb)
{
    SyncVolumeOffsetAvOpenhomeOrgVolume4Cpp sync(*this, aVolumeOffsetBinaryMilliDb);
    BeginVolumeOffset(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginVolumeOffset(const std::string& aChannel, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::EndVolumeOffset(IAsync& aAsync, int32_t& aVolumeOffsetBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb)
{
    SyncSetVolumeOffsetAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetVolumeOffset(aChannel, aVolumeOffsetBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetVolumeOffset(const std::string& aChannel, int32_t aVolumeOffsetBinaryMilliDb, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetVolumeOffset(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncTrim(const std::string& aChannel, int32_t& aTrimBinaryMilliDb)
{
    SyncTrimAvOpenhomeOrgVolume4Cpp sync(*this, aTrimBinaryMilliDb);
    BeginTrim(aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginTrim(const std::string& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionTrim->InputParameters();
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTrim->OutputParameters();
    invocation->AddOutput(new ArgumentInt(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndTrim(IAsync& aAsync, int32_t& aTrimBinaryMilliDb)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SyncSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb)
{
    SyncSetTrimAvOpenhomeOrgVolume4Cpp sync(*this);
    BeginSetTrim(aChannel, aTrimBinaryMilliDb, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BeginSetTrim(const std::string& aChannel, int32_t aTrimBinaryMilliDb, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetTrim, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetTrim->InputParameters();
    {
        Brn buf((const TByte*)aChannel.c_str(), (TUint)aChannel.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aTrimBinaryMilliDb));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::EndSetTrim(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyMuteChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMuteChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyBalanceChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyFadeChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeLimitChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeLimitChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeUnityChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeUnityChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeStepsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeStepsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeMilliDbPerStepChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeMilliDbPerStepChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyBalanceMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBalanceMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyFadeMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iFadeMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyUnityGainChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUnityGainChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeOffsetsChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetsChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyVolumeOffsetMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iVolumeOffsetMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyTrimChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTrimChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolume(uint32_t& aVolume) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolume = iVolume->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyMute(bool& aMute) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aMute = iMute->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyBalance(int32_t& aBalance) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalance = iBalance->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyFade(int32_t& aFade) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFade = iFade->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeLimit(uint32_t& aVolumeLimit) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeLimit = iVolumeLimit->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeMax(uint32_t& aVolumeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMax = iVolumeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeUnity(uint32_t& aVolumeUnity) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeUnity = iVolumeUnity->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeSteps(uint32_t& aVolumeSteps) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeSteps = iVolumeSteps->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeMilliDbPerStep(uint32_t& aVolumeMilliDbPerStep) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeMilliDbPerStep = iVolumeMilliDbPerStep->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyBalanceMax(uint32_t& aBalanceMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBalanceMax = iBalanceMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyFadeMax(uint32_t& aFadeMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aFadeMax = iFadeMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyUnityGain(bool& aUnityGain) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUnityGain = iUnityGain->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeOffsets(std::string& aVolumeOffsets) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iVolumeOffsets->Value();
    aVolumeOffsets.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyVolumeOffsetMax(uint32_t& aVolumeOffsetMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aVolumeOffsetMax = iVolumeOffsetMax->Value();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::PropertyTrim(std::string& aTrim) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTrim->Value();
    aTrim.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumePropertyChanged()
{
    ReportEvent(iVolumeChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::MutePropertyChanged()
{
    ReportEvent(iMuteChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BalancePropertyChanged()
{
    ReportEvent(iBalanceChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::FadePropertyChanged()
{
    ReportEvent(iFadeChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeLimitPropertyChanged()
{
    ReportEvent(iVolumeLimitChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeMaxPropertyChanged()
{
    ReportEvent(iVolumeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeUnityPropertyChanged()
{
    ReportEvent(iVolumeUnityChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeStepsPropertyChanged()
{
    ReportEvent(iVolumeStepsChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeMilliDbPerStepPropertyChanged()
{
    ReportEvent(iVolumeMilliDbPerStepChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::BalanceMaxPropertyChanged()
{
    ReportEvent(iBalanceMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::FadeMaxPropertyChanged()
{
    ReportEvent(iFadeMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::UnityGainPropertyChanged()
{
    ReportEvent(iUnityGainChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeOffsetsPropertyChanged()
{
    ReportEvent(iVolumeOffsetsChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::VolumeOffsetMaxPropertyChanged()
{
    ReportEvent(iVolumeOffsetMaxChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::TrimPropertyChanged()
{
    ReportEvent(iTrimChanged);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgVolume4Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgVolume4Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgVolume4Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgVolume4Cpp::Version() const
{
  return iCpProxy.Version();
}

