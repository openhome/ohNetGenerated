#include "CpAvOpenhomeOrgTransport1.h"
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


class SyncPlayAsAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncPlayAsAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAsAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncPlayAsAvOpenhomeOrgTransport1Cpp::SyncPlayAsAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAsAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayAs(aAsync);
}


class SyncPlayAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncPlayAvOpenhomeOrgTransport1Cpp::SyncPlayAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncPauseAvOpenhomeOrgTransport1Cpp::SyncPauseAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncStopAvOpenhomeOrgTransport1Cpp::SyncStopAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncSkipNextAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSkipNextAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSkipNextAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSkipNextAvOpenhomeOrgTransport1Cpp::SyncSkipNextAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSkipNextAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSkipNext(aAsync);
}


class SyncSkipPreviousAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSkipPreviousAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSkipPreviousAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSkipPreviousAvOpenhomeOrgTransport1Cpp::SyncSkipPreviousAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSkipPreviousAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSkipPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSetRepeatAvOpenhomeOrgTransport1Cpp::SyncSetRepeatAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncSetShuffleAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSetShuffleAvOpenhomeOrgTransport1Cpp::SyncSetShuffleAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp::SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, std::string& aState);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    std::string& iState;
};

SyncTransportStateAvOpenhomeOrgTransport1Cpp::SyncTransportStateAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, std::string& aState)
    : iService(aProxy)
    , iState(aState)
{
}

void SyncTransportStateAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iState);
}


class SyncModesAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncModesAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, std::string& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModesAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    std::string& iModes;
};

SyncModesAvOpenhomeOrgTransport1Cpp::SyncModesAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, std::string& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncModesAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModes(aAsync, iModes);
}


class SyncModeInfoAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncModeInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModeInfoAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    bool& iCanSkipNext;
    bool& iCanSkipPrevious;
    bool& iCanRepeat;
    bool& iCanShuffle;
};

SyncModeInfoAvOpenhomeOrgTransport1Cpp::SyncModeInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle)
    : iService(aProxy)
    , iCanSkipNext(aCanSkipNext)
    , iCanSkipPrevious(aCanSkipPrevious)
    , iCanRepeat(aCanRepeat)
    , iCanShuffle(aCanShuffle)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iCanSkipNext, iCanSkipPrevious, iCanRepeat, iCanShuffle);
}


class SyncStreamInfoAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncStreamInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStreamInfoAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    uint32_t& iStreamId;
    bool& iCanSeek;
    bool& iCanPause;
};

SyncStreamInfoAvOpenhomeOrgTransport1Cpp::SyncStreamInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause)
    : iService(aProxy)
    , iStreamId(aStreamId)
    , iCanSeek(aCanSeek)
    , iCanPause(aCanPause)
{
}

void SyncStreamInfoAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamInfo(aAsync, iStreamId, iCanSeek, iCanPause);
}


class SyncStreamIdAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncStreamIdAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStreamIdAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    uint32_t& iStreamId;
};

SyncStreamIdAvOpenhomeOrgTransport1Cpp::SyncStreamIdAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId)
    : iService(aProxy)
    , iStreamId(aStreamId)
{
}

void SyncStreamIdAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamId(aAsync, iStreamId);
}


class SyncRepeatAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aRepeat);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    bool& iRepeat;
};

SyncRepeatAvOpenhomeOrgTransport1Cpp::SyncRepeatAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aRepeat)
    : iService(aProxy)
    , iRepeat(aRepeat)
{
}

void SyncRepeatAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iRepeat);
}


class SyncShuffleAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aShuffle);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    bool& iShuffle;
};

SyncShuffleAvOpenhomeOrgTransport1Cpp::SyncShuffleAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aShuffle)
    : iService(aProxy)
    , iShuffle(aShuffle)
{
}

void SyncShuffleAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iShuffle);
}


CpProxyAvOpenhomeOrgTransport1Cpp::CpProxyAvOpenhomeOrgTransport1Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanSkipNextPropertyChanged);
    iCanSkipNext = new PropertyBool("CanSkipNext", functor);
    AddProperty(iCanSkipNext);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanSkipPreviousPropertyChanged);
    iCanSkipPrevious = new PropertyBool("CanSkipPrevious", functor);
    AddProperty(iCanSkipPrevious);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanRepeatPropertyChanged);
    iCanRepeat = new PropertyBool("CanRepeat", functor);
    AddProperty(iCanRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanShufflePropertyChanged);
    iCanShuffle = new PropertyBool("CanShuffle", functor);
    AddProperty(iCanShuffle);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::StreamIdPropertyChanged);
    iStreamId = new PropertyUint("StreamId", functor);
    AddProperty(iStreamId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanSeekPropertyChanged);
    iCanSeek = new PropertyBool("CanSeek", functor);
    AddProperty(iCanSeek);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::CanPausePropertyChanged);
    iCanPause = new PropertyBool("CanPause", functor);
    AddProperty(iCanPause);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::RepeatPropertyChanged);
    iRepeat = new PropertyBool("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::ShufflePropertyChanged);
    iShuffle = new PropertyBool("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgTransport1Cpp::~CpProxyAvOpenhomeOrgTransport1Cpp()
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncPlayAs(const std::string& aMode, const std::string& aCommand)
{
    SyncPlayAsAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginPlayAs(aMode, aCommand, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginPlayAs(const std::string& aMode, const std::string& aCommand, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlayAs, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayAs->InputParameters();
    {
        Brn buf((const TByte*)aMode.c_str(), (TUint)aMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aCommand.c_str(), (TUint)aCommand.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndPlayAs(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSkipNext()
{
    SyncSkipNextAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSkipNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSkipNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSkipNext, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSkipNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSkipPrevious()
{
    SyncSkipPreviousAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSkipPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSkipPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSkipPrevious, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSkipPrevious(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSetRepeat(bool aRepeat)
{
    SyncSetRepeatAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSetRepeat(aRepeat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSetRepeat(bool aRepeat, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aRepeat));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSetShuffle(bool aShuffle)
{
    SyncSetShuffleAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSetShuffle(aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSetShuffle(bool aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aShuffle));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSeekSecondAbsolute(aStreamId, aSecondAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSeekSecondAbsolute(uint32_t aStreamId, uint32_t aSecondAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondAbsolute));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative)
{
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSeekSecondRelative(aStreamId, aSecondRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSeekSecondRelative(uint32_t aStreamId, int32_t aSecondRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondRelative));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncTransportState(std::string& aState)
{
    SyncTransportStateAvOpenhomeOrgTransport1Cpp sync(*this, aState);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndTransportState(IAsync& aAsync, std::string& aState)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aState.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncModes(std::string& aModes)
{
    SyncModesAvOpenhomeOrgTransport1Cpp sync(*this, aModes);
    BeginModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndModes(IAsync& aAsync, std::string& aModes)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aModes.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncModeInfo(bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle)
{
    SyncModeInfoAvOpenhomeOrgTransport1Cpp sync(*this, aCanSkipNext, aCanSkipPrevious, aCanRepeat, aCanShuffle);
    BeginModeInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginModeInfo(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::EndModeInfo(IAsync& aAsync, bool& aCanSkipNext, bool& aCanSkipPrevious, bool& aCanRepeat, bool& aCanShuffle)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncStreamInfo(uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause)
{
    SyncStreamInfoAvOpenhomeOrgTransport1Cpp sync(*this, aStreamId, aCanSeek, aCanPause);
    BeginStreamInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginStreamInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStreamInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamInfo->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aCanSeek, bool& aCanPause)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncStreamId(uint32_t& aStreamId)
{
    SyncStreamIdAvOpenhomeOrgTransport1Cpp sync(*this, aStreamId);
    BeginStreamId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginStreamId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStreamId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndStreamId(IAsync& aAsync, uint32_t& aStreamId)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncRepeat(bool& aRepeat)
{
    SyncRepeatAvOpenhomeOrgTransport1Cpp sync(*this, aRepeat);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndRepeat(IAsync& aAsync, bool& aRepeat)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncShuffle(bool& aShuffle)
{
    SyncShuffleAvOpenhomeOrgTransport1Cpp sync(*this, aShuffle);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndShuffle(IAsync& aAsync, bool& aShuffle)
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanSkipNextChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSkipNextChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanSkipPreviousChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSkipPreviousChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyStreamIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStreamIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanSeekChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanSeekChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyCanPauseChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCanPauseChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iRepeatChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iShuffleChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyModes(std::string& aModes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModes->Value();
    aModes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanSkipNext(bool& aCanSkipNext) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSkipNext = iCanSkipNext->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanSkipPrevious(bool& aCanSkipPrevious) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSkipPrevious = iCanSkipPrevious->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanRepeat(bool& aCanRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanRepeat = iCanRepeat->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanShuffle(bool& aCanShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanShuffle = iCanShuffle->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyStreamId(uint32_t& aStreamId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStreamId = iStreamId->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanSeek(bool& aCanSeek) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanSeek = iCanSeek->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyCanPause(bool& aCanPause) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aCanPause = iCanPause->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyRepeat(bool& aRepeat) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyShuffle(bool& aShuffle) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanSkipNextPropertyChanged()
{
    ReportEvent(iCanSkipNextChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanSkipPreviousPropertyChanged()
{
    ReportEvent(iCanSkipPreviousChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanRepeatPropertyChanged()
{
    ReportEvent(iCanRepeatChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanShufflePropertyChanged()
{
    ReportEvent(iCanShuffleChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::StreamIdPropertyChanged()
{
    ReportEvent(iStreamIdChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanSeekPropertyChanged()
{
    ReportEvent(iCanSeekChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::CanPausePropertyChanged()
{
    ReportEvent(iCanPauseChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgTransport1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgTransport1Cpp::Version() const
{
  return iCpProxy.Version();
}

