#include "CpUpnpOrgDimming1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncSetLoadLevelTargetUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncSetLoadLevelTargetUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncGetLoadLevelTargetUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetLoadLevelTargetUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aGetLoadlevelTarget);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TUint& iGetLoadlevelTarget;
};

class SyncGetLoadLevelStatusUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetLoadLevelStatusUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretLoadlevelStatus);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TUint& iretLoadlevelStatus;
};

class SyncSetOnEffectLevelUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncSetOnEffectLevelUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncSetOnEffectUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncSetOnEffectUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncGetOnEffectParametersUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetOnEffectParametersUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, Brh& aretOnEffect, TUint& aretOnEffectLevel);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    Brh& iretOnEffect;
    TUint& iretOnEffectLevel;
};

class SyncStepUpUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStepUpUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncStepDownUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStepDownUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncStartRampUpUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStartRampUpUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncStartRampDownUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStartRampDownUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncStopRampUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStopRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncStartRampToLevelUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncStartRampToLevelUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncSetStepDeltaUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncSetStepDeltaUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncGetStepDeltaUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetStepDeltaUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretStepDelta);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TUint& iretStepDelta;
};

class SyncSetRampRateUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncSetRampRateUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncGetRampRateUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetRampRateUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretRampRate);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TUint& iretRampRate;
};

class SyncPauseRampUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncPauseRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncResumeRampUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncResumeRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
};

class SyncGetIsRampingUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetIsRampingUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TBool& aretIsRamping);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TBool& iretIsRamping;
};

class SyncGetRampPausedUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetRampPausedUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TBool& aretRampPaused);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TBool& iretRampPaused;
};

class SyncGetRampTimeUpnpOrgDimming1 : public SyncProxyAction
{
public:
    SyncGetRampTimeUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretRampTime);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyUpnpOrgDimming1& iService;
    TUint& iretRampTime;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncSetLoadLevelTargetUpnpOrgDimming1

SyncSetLoadLevelTargetUpnpOrgDimming1::SyncSetLoadLevelTargetUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncSetLoadLevelTargetUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetLoadLevelTarget(aAsync);
}

// SyncGetLoadLevelTargetUpnpOrgDimming1

SyncGetLoadLevelTargetUpnpOrgDimming1::SyncGetLoadLevelTargetUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aGetLoadlevelTarget)
    : iService(aProxy)
    , iGetLoadlevelTarget(aGetLoadlevelTarget)
{
}

void SyncGetLoadLevelTargetUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLoadLevelTarget(aAsync, iGetLoadlevelTarget);
}

// SyncGetLoadLevelStatusUpnpOrgDimming1

SyncGetLoadLevelStatusUpnpOrgDimming1::SyncGetLoadLevelStatusUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretLoadlevelStatus)
    : iService(aProxy)
    , iretLoadlevelStatus(aretLoadlevelStatus)
{
}

void SyncGetLoadLevelStatusUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLoadLevelStatus(aAsync, iretLoadlevelStatus);
}

// SyncSetOnEffectLevelUpnpOrgDimming1

SyncSetOnEffectLevelUpnpOrgDimming1::SyncSetOnEffectLevelUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncSetOnEffectLevelUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOnEffectLevel(aAsync);
}

// SyncSetOnEffectUpnpOrgDimming1

SyncSetOnEffectUpnpOrgDimming1::SyncSetOnEffectUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncSetOnEffectUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetOnEffect(aAsync);
}

// SyncGetOnEffectParametersUpnpOrgDimming1

SyncGetOnEffectParametersUpnpOrgDimming1::SyncGetOnEffectParametersUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, Brh& aretOnEffect, TUint& aretOnEffectLevel)
    : iService(aProxy)
    , iretOnEffect(aretOnEffect)
    , iretOnEffectLevel(aretOnEffectLevel)
{
}

void SyncGetOnEffectParametersUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOnEffectParameters(aAsync, iretOnEffect, iretOnEffectLevel);
}

// SyncStepUpUpnpOrgDimming1

SyncStepUpUpnpOrgDimming1::SyncStepUpUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStepUpUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStepUp(aAsync);
}

// SyncStepDownUpnpOrgDimming1

SyncStepDownUpnpOrgDimming1::SyncStepDownUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStepDownUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStepDown(aAsync);
}

// SyncStartRampUpUpnpOrgDimming1

SyncStartRampUpUpnpOrgDimming1::SyncStartRampUpUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStartRampUpUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStartRampUp(aAsync);
}

// SyncStartRampDownUpnpOrgDimming1

SyncStartRampDownUpnpOrgDimming1::SyncStartRampDownUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStartRampDownUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStartRampDown(aAsync);
}

// SyncStopRampUpnpOrgDimming1

SyncStopRampUpnpOrgDimming1::SyncStopRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStopRampUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStopRamp(aAsync);
}

// SyncStartRampToLevelUpnpOrgDimming1

SyncStartRampToLevelUpnpOrgDimming1::SyncStartRampToLevelUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncStartRampToLevelUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStartRampToLevel(aAsync);
}

// SyncSetStepDeltaUpnpOrgDimming1

SyncSetStepDeltaUpnpOrgDimming1::SyncSetStepDeltaUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncSetStepDeltaUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStepDelta(aAsync);
}

// SyncGetStepDeltaUpnpOrgDimming1

SyncGetStepDeltaUpnpOrgDimming1::SyncGetStepDeltaUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretStepDelta)
    : iService(aProxy)
    , iretStepDelta(aretStepDelta)
{
}

void SyncGetStepDeltaUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetStepDelta(aAsync, iretStepDelta);
}

// SyncSetRampRateUpnpOrgDimming1

SyncSetRampRateUpnpOrgDimming1::SyncSetRampRateUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRampRateUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRampRate(aAsync);
}

// SyncGetRampRateUpnpOrgDimming1

SyncGetRampRateUpnpOrgDimming1::SyncGetRampRateUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretRampRate)
    : iService(aProxy)
    , iretRampRate(aretRampRate)
{
}

void SyncGetRampRateUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRampRate(aAsync, iretRampRate);
}

// SyncPauseRampUpnpOrgDimming1

SyncPauseRampUpnpOrgDimming1::SyncPauseRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseRampUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPauseRamp(aAsync);
}

// SyncResumeRampUpnpOrgDimming1

SyncResumeRampUpnpOrgDimming1::SyncResumeRampUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy)
    : iService(aProxy)
{
}

void SyncResumeRampUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndResumeRamp(aAsync);
}

// SyncGetIsRampingUpnpOrgDimming1

SyncGetIsRampingUpnpOrgDimming1::SyncGetIsRampingUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TBool& aretIsRamping)
    : iService(aProxy)
    , iretIsRamping(aretIsRamping)
{
}

void SyncGetIsRampingUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetIsRamping(aAsync, iretIsRamping);
}

// SyncGetRampPausedUpnpOrgDimming1

SyncGetRampPausedUpnpOrgDimming1::SyncGetRampPausedUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TBool& aretRampPaused)
    : iService(aProxy)
    , iretRampPaused(aretRampPaused)
{
}

void SyncGetRampPausedUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRampPaused(aAsync, iretRampPaused);
}

// SyncGetRampTimeUpnpOrgDimming1

SyncGetRampTimeUpnpOrgDimming1::SyncGetRampTimeUpnpOrgDimming1(CpProxyUpnpOrgDimming1& aProxy, TUint& aretRampTime)
    : iService(aProxy)
    , iretRampTime(aretRampTime)
{
}

void SyncGetRampTimeUpnpOrgDimming1::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRampTime(aAsync, iretRampTime);
}


// CpProxyUpnpOrgDimming1

CpProxyUpnpOrgDimming1::CpProxyUpnpOrgDimming1(CpDevice& aDevice)
    : iCpProxy("schemas-upnp-org", "Dimming", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionSetLoadLevelTarget = new Action("SetLoadLevelTarget");
    param = new OpenHome::Net::ParameterUint("newLoadlevelTarget", 0, 100);
    iActionSetLoadLevelTarget->AddInputParameter(param);

    iActionGetLoadLevelTarget = new Action("GetLoadLevelTarget");
    param = new OpenHome::Net::ParameterUint("GetLoadlevelTarget", 0, 100);
    iActionGetLoadLevelTarget->AddOutputParameter(param);

    iActionGetLoadLevelStatus = new Action("GetLoadLevelStatus");
    param = new OpenHome::Net::ParameterUint("retLoadlevelStatus", 0, 100);
    iActionGetLoadLevelStatus->AddOutputParameter(param);

    iActionSetOnEffectLevel = new Action("SetOnEffectLevel");
    param = new OpenHome::Net::ParameterUint("newOnEffectLevel", 0, 100);
    iActionSetOnEffectLevel->AddInputParameter(param);

    iActionSetOnEffect = new Action("SetOnEffect");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"OnEffectLevel";
    allowedValues[index++] = (TChar*)"LastSetting";
    allowedValues[index++] = (TChar*)"Default";
    param = new OpenHome::Net::ParameterString("newOnEffect", allowedValues, 3);
    iActionSetOnEffect->AddInputParameter(param);
    delete[] allowedValues;

    iActionGetOnEffectParameters = new Action("GetOnEffectParameters");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"OnEffectLevel";
    allowedValues[index++] = (TChar*)"LastSetting";
    allowedValues[index++] = (TChar*)"Default";
    param = new OpenHome::Net::ParameterString("retOnEffect", allowedValues, 3);
    iActionGetOnEffectParameters->AddOutputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterUint("retOnEffectLevel", 0, 100);
    iActionGetOnEffectParameters->AddOutputParameter(param);

    iActionStepUp = new Action("StepUp");

    iActionStepDown = new Action("StepDown");

    iActionStartRampUp = new Action("StartRampUp");

    iActionStartRampDown = new Action("StartRampDown");

    iActionStopRamp = new Action("StopRamp");

    iActionStartRampToLevel = new Action("StartRampToLevel");
    param = new OpenHome::Net::ParameterUint("newLoadLevelTarget", 0, 100);
    iActionStartRampToLevel->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("newRampTime");
    iActionStartRampToLevel->AddInputParameter(param);

    iActionSetStepDelta = new Action("SetStepDelta");
    param = new OpenHome::Net::ParameterUint("newStepDelta", 1, 100);
    iActionSetStepDelta->AddInputParameter(param);

    iActionGetStepDelta = new Action("GetStepDelta");
    param = new OpenHome::Net::ParameterUint("retStepDelta", 1, 100);
    iActionGetStepDelta->AddOutputParameter(param);

    iActionSetRampRate = new Action("SetRampRate");
    param = new OpenHome::Net::ParameterUint("newRampRate", 0, 100);
    iActionSetRampRate->AddInputParameter(param);

    iActionGetRampRate = new Action("GetRampRate");
    param = new OpenHome::Net::ParameterUint("retRampRate", 0, 100);
    iActionGetRampRate->AddOutputParameter(param);

    iActionPauseRamp = new Action("PauseRamp");

    iActionResumeRamp = new Action("ResumeRamp");

    iActionGetIsRamping = new Action("GetIsRamping");
    param = new OpenHome::Net::ParameterBool("retIsRamping");
    iActionGetIsRamping->AddOutputParameter(param);

    iActionGetRampPaused = new Action("GetRampPaused");
    param = new OpenHome::Net::ParameterBool("retRampPaused");
    iActionGetRampPaused->AddOutputParameter(param);

    iActionGetRampTime = new Action("GetRampTime");
    param = new OpenHome::Net::ParameterUint("retRampTime");
    iActionGetRampTime->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyUpnpOrgDimming1::LoadLevelStatusPropertyChanged);
    iLoadLevelStatus = new PropertyUint("LoadLevelStatus", functor);
    AddProperty(iLoadLevelStatus);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgDimming1::StepDeltaPropertyChanged);
    iStepDelta = new PropertyUint("StepDelta", functor);
    AddProperty(iStepDelta);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgDimming1::RampRatePropertyChanged);
    iRampRate = new PropertyUint("RampRate", functor);
    AddProperty(iRampRate);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgDimming1::IsRampingPropertyChanged);
    iIsRamping = new PropertyBool("IsRamping", functor);
    AddProperty(iIsRamping);
    functor = MakeFunctor(*this, &CpProxyUpnpOrgDimming1::RampPausedPropertyChanged);
    iRampPaused = new PropertyBool("RampPaused", functor);
    AddProperty(iRampPaused);
}

CpProxyUpnpOrgDimming1::~CpProxyUpnpOrgDimming1()
{
    DestroyService();
    delete iActionSetLoadLevelTarget;
    delete iActionGetLoadLevelTarget;
    delete iActionGetLoadLevelStatus;
    delete iActionSetOnEffectLevel;
    delete iActionSetOnEffect;
    delete iActionGetOnEffectParameters;
    delete iActionStepUp;
    delete iActionStepDown;
    delete iActionStartRampUp;
    delete iActionStartRampDown;
    delete iActionStopRamp;
    delete iActionStartRampToLevel;
    delete iActionSetStepDelta;
    delete iActionGetStepDelta;
    delete iActionSetRampRate;
    delete iActionGetRampRate;
    delete iActionPauseRamp;
    delete iActionResumeRamp;
    delete iActionGetIsRamping;
    delete iActionGetRampPaused;
    delete iActionGetRampTime;
}

void CpProxyUpnpOrgDimming1::SyncSetLoadLevelTarget(TUint anewLoadlevelTarget)
{
    SyncSetLoadLevelTargetUpnpOrgDimming1 sync(*this);
    BeginSetLoadLevelTarget(anewLoadlevelTarget, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginSetLoadLevelTarget(TUint anewLoadlevelTarget, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetLoadLevelTarget, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetLoadLevelTarget->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewLoadlevelTarget));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndSetLoadLevelTarget(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetLoadLevelTarget"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncGetLoadLevelTarget(TUint& aGetLoadlevelTarget)
{
    SyncGetLoadLevelTargetUpnpOrgDimming1 sync(*this, aGetLoadlevelTarget);
    BeginGetLoadLevelTarget(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetLoadLevelTarget(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLoadLevelTarget, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLoadLevelTarget->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetLoadLevelTarget(IAsync& aAsync, TUint& aGetLoadlevelTarget)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetLoadLevelTarget"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aGetLoadlevelTarget = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncGetLoadLevelStatus(TUint& aretLoadlevelStatus)
{
    SyncGetLoadLevelStatusUpnpOrgDimming1 sync(*this, aretLoadlevelStatus);
    BeginGetLoadLevelStatus(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetLoadLevelStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetLoadLevelStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLoadLevelStatus->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetLoadLevelStatus(IAsync& aAsync, TUint& aretLoadlevelStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetLoadLevelStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretLoadlevelStatus = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncSetOnEffectLevel(TUint anewOnEffectLevel)
{
    SyncSetOnEffectLevelUpnpOrgDimming1 sync(*this);
    BeginSetOnEffectLevel(anewOnEffectLevel, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginSetOnEffectLevel(TUint anewOnEffectLevel, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetOnEffectLevel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOnEffectLevel->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewOnEffectLevel));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndSetOnEffectLevel(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetOnEffectLevel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncSetOnEffect(const Brx& anewOnEffect)
{
    SyncSetOnEffectUpnpOrgDimming1 sync(*this);
    BeginSetOnEffect(anewOnEffect, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginSetOnEffect(const Brx& anewOnEffect, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetOnEffect, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetOnEffect->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], anewOnEffect));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndSetOnEffect(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetOnEffect"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncGetOnEffectParameters(Brh& aretOnEffect, TUint& aretOnEffectLevel)
{
    SyncGetOnEffectParametersUpnpOrgDimming1 sync(*this, aretOnEffect, aretOnEffectLevel);
    BeginGetOnEffectParameters(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetOnEffectParameters(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetOnEffectParameters, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOnEffectParameters->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetOnEffectParameters(IAsync& aAsync, Brh& aretOnEffect, TUint& aretOnEffectLevel)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetOnEffectParameters"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aretOnEffect);
    aretOnEffectLevel = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncStepUp()
{
    SyncStepUpUpnpOrgDimming1 sync(*this);
    BeginStepUp(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStepUp(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStepUp, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStepUp(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StepUp"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncStepDown()
{
    SyncStepDownUpnpOrgDimming1 sync(*this);
    BeginStepDown(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStepDown(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStepDown, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStepDown(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StepDown"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncStartRampUp()
{
    SyncStartRampUpUpnpOrgDimming1 sync(*this);
    BeginStartRampUp(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStartRampUp(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStartRampUp, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStartRampUp(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StartRampUp"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncStartRampDown()
{
    SyncStartRampDownUpnpOrgDimming1 sync(*this);
    BeginStartRampDown(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStartRampDown(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStartRampDown, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStartRampDown(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StartRampDown"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncStopRamp()
{
    SyncStopRampUpnpOrgDimming1 sync(*this);
    BeginStopRamp(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStopRamp(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStopRamp, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStopRamp(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StopRamp"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime)
{
    SyncStartRampToLevelUpnpOrgDimming1 sync(*this);
    BeginStartRampToLevel(anewLoadLevelTarget, anewRampTime, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginStartRampToLevel(TUint anewLoadLevelTarget, TUint anewRampTime, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStartRampToLevel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionStartRampToLevel->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewLoadLevelTarget));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewRampTime));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndStartRampToLevel(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StartRampToLevel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncSetStepDelta(TUint anewStepDelta)
{
    SyncSetStepDeltaUpnpOrgDimming1 sync(*this);
    BeginSetStepDelta(anewStepDelta, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginSetStepDelta(TUint anewStepDelta, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetStepDelta, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStepDelta->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewStepDelta));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndSetStepDelta(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetStepDelta"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncGetStepDelta(TUint& aretStepDelta)
{
    SyncGetStepDeltaUpnpOrgDimming1 sync(*this, aretStepDelta);
    BeginGetStepDelta(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetStepDelta(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetStepDelta, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetStepDelta->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetStepDelta(IAsync& aAsync, TUint& aretStepDelta)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetStepDelta"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretStepDelta = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncSetRampRate(TUint anewRampRate)
{
    SyncSetRampRateUpnpOrgDimming1 sync(*this);
    BeginSetRampRate(anewRampRate, sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginSetRampRate(TUint anewRampRate, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRampRate, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRampRate->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], anewRampRate));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndSetRampRate(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRampRate"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncGetRampRate(TUint& aretRampRate)
{
    SyncGetRampRateUpnpOrgDimming1 sync(*this, aretRampRate);
    BeginGetRampRate(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetRampRate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRampRate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRampRate->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetRampRate(IAsync& aAsync, TUint& aretRampRate)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRampRate"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretRampRate = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncPauseRamp()
{
    SyncPauseRampUpnpOrgDimming1 sync(*this);
    BeginPauseRamp(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginPauseRamp(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPauseRamp, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndPauseRamp(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PauseRamp"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncResumeRamp()
{
    SyncResumeRampUpnpOrgDimming1 sync(*this);
    BeginResumeRamp(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginResumeRamp(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionResumeRamp, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndResumeRamp(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ResumeRamp"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyUpnpOrgDimming1::SyncGetIsRamping(TBool& aretIsRamping)
{
    SyncGetIsRampingUpnpOrgDimming1 sync(*this, aretIsRamping);
    BeginGetIsRamping(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetIsRamping(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetIsRamping, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetIsRamping->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetIsRamping(IAsync& aAsync, TBool& aretIsRamping)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetIsRamping"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretIsRamping = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncGetRampPaused(TBool& aretRampPaused)
{
    SyncGetRampPausedUpnpOrgDimming1 sync(*this, aretRampPaused);
    BeginGetRampPaused(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetRampPaused(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRampPaused, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRampPaused->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetRampPaused(IAsync& aAsync, TBool& aretRampPaused)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRampPaused"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretRampPaused = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SyncGetRampTime(TUint& aretRampTime)
{
    SyncGetRampTimeUpnpOrgDimming1 sync(*this, aretRampTime);
    BeginGetRampTime(sync.Functor());
    sync.Wait();
}

void CpProxyUpnpOrgDimming1::BeginGetRampTime(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionGetRampTime, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRampTime->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyUpnpOrgDimming1::EndGetRampTime(IAsync& aAsync, TUint& aretRampTime)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRampTime"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aretRampTime = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyUpnpOrgDimming1::SetPropertyLoadLevelStatusChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iLoadLevelStatusChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgDimming1::SetPropertyStepDeltaChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStepDeltaChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgDimming1::SetPropertyRampRateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRampRateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgDimming1::SetPropertyIsRampingChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIsRampingChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgDimming1::SetPropertyRampPausedChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRampPausedChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyUpnpOrgDimming1::PropertyLoadLevelStatus(TUint& aLoadLevelStatus) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aLoadLevelStatus = iLoadLevelStatus->Value();
}

void CpProxyUpnpOrgDimming1::PropertyStepDelta(TUint& aStepDelta) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStepDelta = iStepDelta->Value();
}

void CpProxyUpnpOrgDimming1::PropertyRampRate(TUint& aRampRate) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRampRate = iRampRate->Value();
}

void CpProxyUpnpOrgDimming1::PropertyIsRamping(TBool& aIsRamping) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aIsRamping = iIsRamping->Value();
}

void CpProxyUpnpOrgDimming1::PropertyRampPaused(TBool& aRampPaused) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRampPaused = iRampPaused->Value();
}

void CpProxyUpnpOrgDimming1::LoadLevelStatusPropertyChanged()
{
    ReportEvent(iLoadLevelStatusChanged);
}

void CpProxyUpnpOrgDimming1::StepDeltaPropertyChanged()
{
    ReportEvent(iStepDeltaChanged);
}

void CpProxyUpnpOrgDimming1::RampRatePropertyChanged()
{
    ReportEvent(iRampRateChanged);
}

void CpProxyUpnpOrgDimming1::IsRampingPropertyChanged()
{
    ReportEvent(iIsRampingChanged);
}

void CpProxyUpnpOrgDimming1::RampPausedPropertyChanged()
{
    ReportEvent(iRampPausedChanged);
}


void CpProxyUpnpOrgDimming1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyUpnpOrgDimming1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyUpnpOrgDimming1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyUpnpOrgDimming1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyUpnpOrgDimming1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyUpnpOrgDimming1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyUpnpOrgDimming1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyUpnpOrgDimming1::Version() const
{
  return iCpProxy.Version();
}


