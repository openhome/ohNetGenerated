#include "CpAvOpenhomeOrgTransport1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncPlayAsAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncPlayAsAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncPlayAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncPauseAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncStopAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSkipNextAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSkipNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSkipPreviousAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSkipPreviousAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSetRepeatAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSetShuffleAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSeekSecondRelativeAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncTransportStateAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, Brh& aState);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    Brh& iState;
};

class SyncModesAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncModesAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, Brh& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    Brh& iModes;
};

class SyncModeInfoAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aCanSkipNext, TBool& aCanSkipPrevious, TBool& aCanRepeat, TBool& aCanShuffle);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TBool& iCanSkipNext;
    TBool& iCanSkipPrevious;
    TBool& iCanRepeat;
    TBool& iCanShuffle;
};

class SyncStreamInfoAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId, TBool& aCanSeek, TBool& aCanPause);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TUint& iStreamId;
    TBool& iCanSeek;
    TBool& iCanPause;
};

class SyncStreamIdAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncStreamIdAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TUint& iStreamId;
};

class SyncRepeatAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aRepeat);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TBool& iRepeat;
};

class SyncShuffleAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aShuffle);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TBool& iShuffle;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncPlayAsAvOpenhomeOrgTransport1

SyncPlayAsAvOpenhomeOrgTransport1::SyncPlayAsAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAsAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayAs(aAsync);
}

// SyncPlayAvOpenhomeOrgTransport1

SyncPlayAvOpenhomeOrgTransport1::SyncPlayAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}

// SyncPauseAvOpenhomeOrgTransport1

SyncPauseAvOpenhomeOrgTransport1::SyncPauseAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}

// SyncStopAvOpenhomeOrgTransport1

SyncStopAvOpenhomeOrgTransport1::SyncStopAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}

// SyncSkipNextAvOpenhomeOrgTransport1

SyncSkipNextAvOpenhomeOrgTransport1::SyncSkipNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSkipNextAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSkipNext(aAsync);
}

// SyncSkipPreviousAvOpenhomeOrgTransport1

SyncSkipPreviousAvOpenhomeOrgTransport1::SyncSkipPreviousAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSkipPreviousAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSkipPrevious(aAsync);
}

// SyncSetRepeatAvOpenhomeOrgTransport1

SyncSetRepeatAvOpenhomeOrgTransport1::SyncSetRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}

// SyncSetShuffleAvOpenhomeOrgTransport1

SyncSetShuffleAvOpenhomeOrgTransport1::SyncSetShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}

// SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1

SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1::SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}

// SyncSeekSecondRelativeAvOpenhomeOrgTransport1

SyncSeekSecondRelativeAvOpenhomeOrgTransport1::SyncSeekSecondRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}

// SyncTransportStateAvOpenhomeOrgTransport1

SyncTransportStateAvOpenhomeOrgTransport1::SyncTransportStateAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, Brh& aState)
    : iService(aProxy)
    , iState(aState)
{
}

void SyncTransportStateAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iState);
}

// SyncModesAvOpenhomeOrgTransport1

SyncModesAvOpenhomeOrgTransport1::SyncModesAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, Brh& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncModesAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndModes(aAsync, iModes);
}

// SyncModeInfoAvOpenhomeOrgTransport1

SyncModeInfoAvOpenhomeOrgTransport1::SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aCanSkipNext, TBool& aCanSkipPrevious, TBool& aCanRepeat, TBool& aCanShuffle)
    : iService(aProxy)
    , iCanSkipNext(aCanSkipNext)
    , iCanSkipPrevious(aCanSkipPrevious)
    , iCanRepeat(aCanRepeat)
    , iCanShuffle(aCanShuffle)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iCanSkipNext, iCanSkipPrevious, iCanRepeat, iCanShuffle);
}

// SyncStreamInfoAvOpenhomeOrgTransport1

SyncStreamInfoAvOpenhomeOrgTransport1::SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId, TBool& aCanSeek, TBool& aCanPause)
    : iService(aProxy)
    , iStreamId(aStreamId)
    , iCanSeek(aCanSeek)
    , iCanPause(aCanPause)
{
}

void SyncStreamInfoAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamInfo(aAsync, iStreamId, iCanSeek, iCanPause);
}

// SyncStreamIdAvOpenhomeOrgTransport1

SyncStreamIdAvOpenhomeOrgTransport1::SyncStreamIdAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId)
    : iService(aProxy)
    , iStreamId(aStreamId)
{
}

void SyncStreamIdAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamId(aAsync, iStreamId);
}

// SyncRepeatAvOpenhomeOrgTransport1

SyncRepeatAvOpenhomeOrgTransport1::SyncRepeatAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aRepeat)
    : iService(aProxy)
    , iRepeat(aRepeat)
{
}

void SyncRepeatAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iRepeat);
}

// SyncShuffleAvOpenhomeOrgTransport1

SyncShuffleAvOpenhomeOrgTransport1::SyncShuffleAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aShuffle)
    : iService(aProxy)
    , iShuffle(aShuffle)
{
}

void SyncShuffleAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iShuffle);
}


// CpProxyAvOpenhomeOrgTransport1

CpProxyAvOpenhomeOrgTransport1::CpProxyAvOpenhomeOrgTransport1(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Transport", 1, aDevice.Device())
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlayAs = new Action("PlayAs");
    param = new OpenHome::Net::ParameterString("Mode");
    iActionPlayAs->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Command");
    iActionPlayAs->AddInputParameter(param);

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionSkipNext = new Action("SkipNext");

    iActionSkipPrevious = new Action("SkipPrevious");

    iActionSetRepeat = new Action("SetRepeat");
    param = new OpenHome::Net::ParameterBool("Repeat");
    iActionSetRepeat->AddInputParameter(param);

    iActionSetShuffle = new Action("SetShuffle");
    param = new OpenHome::Net::ParameterBool("Shuffle");
    iActionSetShuffle->AddInputParameter(param);

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionSeekSecondAbsolute->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("SecondAbsolute");
    iActionSeekSecondAbsolute->AddInputParameter(param);

    iActionSeekSecondRelative = new Action("SeekSecondRelative");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionSeekSecondRelative->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("SecondRelative");
    iActionSeekSecondRelative->AddInputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[5];
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Buffering";
    allowedValues[index++] = (TChar*)"Waiting";
    param = new OpenHome::Net::ParameterString("State", allowedValues, 5);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    iActionModes = new Action("Modes");
    param = new OpenHome::Net::ParameterString("Modes");
    iActionModes->AddOutputParameter(param);

    iActionModeInfo = new Action("ModeInfo");
    param = new OpenHome::Net::ParameterBool("CanSkipNext");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("CanSkipPrevious");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("CanRepeat");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("CanShuffle");
    iActionModeInfo->AddOutputParameter(param);

    iActionStreamInfo = new Action("StreamInfo");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionStreamInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("CanSeek");
    iActionStreamInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("CanPause");
    iActionStreamInfo->AddOutputParameter(param);

    iActionStreamId = new Action("StreamId");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionStreamId->AddOutputParameter(param);

    iActionRepeat = new Action("Repeat");
    param = new OpenHome::Net::ParameterBool("Repeat");
    iActionRepeat->AddOutputParameter(param);

    iActionShuffle = new Action("Shuffle");
    param = new OpenHome::Net::ParameterBool("Shuffle");
    iActionShuffle->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanSkipNextPropertyChanged);
    iCanSkipNext = new PropertyBool("CanSkipNext", functor);
    AddProperty(iCanSkipNext);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanSkipPreviousPropertyChanged);
    iCanSkipPrevious = new PropertyBool("CanSkipPrevious", functor);
    AddProperty(iCanSkipPrevious);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanRepeatPropertyChanged);
    iCanRepeat = new PropertyBool("CanRepeat", functor);
    AddProperty(iCanRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanShufflePropertyChanged);
    iCanShuffle = new PropertyBool("CanShuffle", functor);
    AddProperty(iCanShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::StreamIdPropertyChanged);
    iStreamId = new PropertyUint("StreamId", functor);
    AddProperty(iStreamId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanSeekPropertyChanged);
    iCanSeek = new PropertyBool("CanSeek", functor);
    AddProperty(iCanSeek);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::CanPausePropertyChanged);
    iCanPause = new PropertyBool("CanPause", functor);
    AddProperty(iCanPause);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgTransport1::~CpProxyAvOpenhomeOrgTransport1()
{
    DestroyService();
    delete iActionPlayAs;
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionSkipNext;
    delete iActionSkipPrevious;
    delete iActionSetRepeat;
    delete iActionSetShuffle;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionTransportState;
    delete iActionModes;
    delete iActionModeInfo;
    delete iActionStreamInfo;
    delete iActionStreamId;
    delete iActionRepeat;
    delete iActionShuffle;
}

void CpProxyAvOpenhomeOrgTransport1::SyncPlayAs(const Brx& aMode, const Brx& aCommand)
{
    SyncPlayAsAvOpenhomeOrgTransport1 sync(*this);
    BeginPlayAs(aMode, aCommand, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginPlayAs(const Brx& aMode, const Brx& aCommand, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayAs, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayAs->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCommand));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndPlayAs(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PlayAs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTransport1 sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndPlay(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Play"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncPause()
{
    SyncPauseAvOpenhomeOrgTransport1 sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndPause(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Pause"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncStop()
{
    SyncStopAvOpenhomeOrgTransport1 sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndStop(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Stop"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSkipNext()
{
    SyncSkipNextAvOpenhomeOrgTransport1 sync(*this);
    BeginSkipNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSkipNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSkipNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSkipNext(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SkipNext"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSkipPrevious()
{
    SyncSkipPreviousAvOpenhomeOrgTransport1 sync(*this);
    BeginSkipPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSkipPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSkipPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSkipPrevious(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SkipPrevious"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSetRepeat(TBool aRepeat)
{
    SyncSetRepeatAvOpenhomeOrgTransport1 sync(*this);
    BeginSetRepeat(aRepeat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSetRepeat(TBool aRepeat, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aRepeat));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSetRepeat(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetRepeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSetShuffle(TBool aShuffle)
{
    SyncSetShuffleAvOpenhomeOrgTransport1 sync(*this);
    BeginSetShuffle(aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSetShuffle(TBool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSetShuffle(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetShuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1 sync(*this);
    BeginSeekSecondAbsolute(aStreamId, aSecondAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondAbsolute));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSeekSecondAbsolute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondAbsolute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncSeekSecondRelative(TUint aStreamId, TInt aSecondRelative)
{
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1 sync(*this);
    BeginSeekSecondRelative(aStreamId, aSecondRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSeekSecondRelative(TUint aStreamId, TInt aSecondRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondRelative));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSeekSecondRelative(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondRelative"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1::SyncTransportState(Brh& aState)
{
    SyncTransportStateAvOpenhomeOrgTransport1 sync(*this, aState);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndTransportState(IAsync& aAsync, Brh& aState)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("TransportState"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aState);
}

void CpProxyAvOpenhomeOrgTransport1::SyncModes(Brh& aModes)
{
    SyncModesAvOpenhomeOrgTransport1 sync(*this, aModes);
    BeginModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndModes(IAsync& aAsync, Brh& aModes)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Modes"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aModes);
}

void CpProxyAvOpenhomeOrgTransport1::SyncModeInfo(TBool& aCanSkipNext, TBool& aCanSkipPrevious, TBool& aCanRepeat, TBool& aCanShuffle)
{
    SyncModeInfoAvOpenhomeOrgTransport1 sync(*this, aCanSkipNext, aCanSkipPrevious, aCanRepeat, aCanShuffle);
    BeginModeInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginModeInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionModeInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModeInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndModeInfo(IAsync& aAsync, TBool& aCanSkipNext, TBool& aCanSkipPrevious, TBool& aCanRepeat, TBool& aCanShuffle)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ModeInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aCanSkipNext = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aCanSkipPrevious = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aCanRepeat = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aCanShuffle = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1::SyncStreamInfo(TUint& aStreamId, TBool& aCanSeek, TBool& aCanPause)
{
    SyncStreamInfoAvOpenhomeOrgTransport1 sync(*this, aStreamId, aCanSeek, aCanPause);
    BeginStreamInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginStreamInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStreamInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamInfo->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aCanSeek, TBool& aCanPause)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StreamInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aStreamId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    aCanSeek = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aCanPause = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1::SyncStreamId(TUint& aStreamId)
{
    SyncStreamIdAvOpenhomeOrgTransport1 sync(*this, aStreamId);
    BeginStreamId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginStreamId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStreamId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndStreamId(IAsync& aAsync, TUint& aStreamId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StreamId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aStreamId = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1::SyncRepeat(TBool& aRepeat)
{
    SyncRepeatAvOpenhomeOrgTransport1 sync(*this, aRepeat);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndRepeat(IAsync& aAsync, TBool& aRepeat)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Repeat"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aRepeat = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1::SyncShuffle(TBool& aShuffle)
{
    SyncShuffleAvOpenhomeOrgTransport1 sync(*this, aShuffle);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndShuffle(IAsync& aAsync, TBool& aShuffle)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Shuffle"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aShuffle = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanSkipNextChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSkipNextChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanSkipPreviousChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSkipPreviousChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyStreamIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStreamIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanSeekChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSeekChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyCanPauseChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanPauseChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyModes(Brhz& aModes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModes.Set(iModes->Value());
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanSkipNext(TBool& aCanSkipNext) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSkipNext = iCanSkipNext->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanSkipPrevious(TBool& aCanSkipPrevious) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSkipPrevious = iCanSkipPrevious->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanRepeat(TBool& aCanRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanRepeat = iCanRepeat->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanShuffle(TBool& aCanShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanShuffle = iCanShuffle->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyStreamId(TUint& aStreamId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStreamId = iStreamId->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanSeek(TBool& aCanSeek) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSeek = iCanSeek->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyCanPause(TBool& aCanPause) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanPause = iCanPause->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgTransport1::PropertyRepeat(TBool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyShuffle(TBool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTransport1::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanSkipNextPropertyChanged()
{
    ReportEvent(iCanSkipNextChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanSkipPreviousPropertyChanged()
{
    ReportEvent(iCanSkipPreviousChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanRepeatPropertyChanged()
{
    ReportEvent(iCanRepeatChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanShufflePropertyChanged()
{
    ReportEvent(iCanShuffleChanged);
}

void CpProxyAvOpenhomeOrgTransport1::StreamIdPropertyChanged()
{
    ReportEvent(iStreamIdChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanSeekPropertyChanged()
{
    ReportEvent(iCanSeekChanged);
}

void CpProxyAvOpenhomeOrgTransport1::CanPausePropertyChanged()
{
    ReportEvent(iCanPauseChanged);
}

void CpProxyAvOpenhomeOrgTransport1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgTransport1::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTransport1::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}


void CpProxyAvOpenhomeOrgTransport1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgTransport1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgTransport1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgTransport1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgTransport1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgTransport1::Version() const
{
  return iCpProxy.Version();
}


