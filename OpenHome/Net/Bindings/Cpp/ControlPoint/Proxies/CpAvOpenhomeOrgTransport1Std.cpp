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


class SyncNextAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncNextAvOpenhomeOrgTransport1Cpp::SyncNextAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPrevAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncPrevAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPrevAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncPrevAvOpenhomeOrgTransport1Cpp::SyncPrevAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPrevAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrev(aAsync);
}


class SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp::SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsAbsolute(aAsync);
}


class SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
};

SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp::SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsRelative(aAsync);
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
    SyncModeInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aNextAvailable, bool& aPrevAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModeInfoAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    bool& iNextAvailable;
    bool& iPrevAvailable;
};

SyncModeInfoAvOpenhomeOrgTransport1Cpp::SyncModeInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, bool& aNextAvailable, bool& aPrevAvailable)
    : iService(aProxy)
    , iNextAvailable(aNextAvailable)
    , iPrevAvailable(aPrevAvailable)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iNextAvailable, iPrevAvailable);
}


class SyncStreamInfoAvOpenhomeOrgTransport1Cpp : public SyncProxyAction
{
public:
    SyncStreamInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId, bool& aSeekable, bool& aPausable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStreamInfoAvOpenhomeOrgTransport1Cpp() {}
private:
    CpProxyAvOpenhomeOrgTransport1Cpp& iService;
    uint32_t& iStreamId;
    bool& iSeekable;
    bool& iPausable;
};

SyncStreamInfoAvOpenhomeOrgTransport1Cpp::SyncStreamInfoAvOpenhomeOrgTransport1Cpp(CpProxyAvOpenhomeOrgTransport1Cpp& aProxy, uint32_t& aStreamId, bool& aSeekable, bool& aPausable)
    : iService(aProxy)
    , iStreamId(aStreamId)
    , iSeekable(aSeekable)
    , iPausable(aPausable)
{
}

void SyncStreamInfoAvOpenhomeOrgTransport1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamInfo(aAsync, iStreamId, iSeekable, iPausable);
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

    iActionNext = new Action("Next");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionNext->AddInputParameter(param);

    iActionPrev = new Action("Prev");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionPrev->AddInputParameter(param);

    iActionSeekSecondsAbsolute = new Action("SeekSecondsAbsolute");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionSeekSecondsAbsolute->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("SecondsAbsolute");
    iActionSeekSecondsAbsolute->AddInputParameter(param);

    iActionSeekSecondsRelative = new Action("SeekSecondsRelative");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionSeekSecondsRelative->AddInputParameter(param);
    param = new OpenHome::Net::ParameterInt("SecondsRelative");
    iActionSeekSecondsRelative->AddInputParameter(param);

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
    param = new OpenHome::Net::ParameterBool("NextAvailable");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("PrevAvailable");
    iActionModeInfo->AddOutputParameter(param);

    iActionStreamInfo = new Action("StreamInfo");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionStreamInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("Seekable");
    iActionStreamInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("Pausable");
    iActionStreamInfo->AddOutputParameter(param);

    iActionStreamId = new Action("StreamId");
    param = new OpenHome::Net::ParameterUint("StreamId");
    iActionStreamId->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::NextAvailablePropertyChanged);
    iNextAvailable = new PropertyBool("NextAvailable", functor);
    AddProperty(iNextAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::PrevAvailablePropertyChanged);
    iPrevAvailable = new PropertyBool("PrevAvailable", functor);
    AddProperty(iPrevAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::StreamIdPropertyChanged);
    iStreamId = new PropertyUint("StreamId", functor);
    AddProperty(iStreamId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::SeekablePropertyChanged);
    iSeekable = new PropertyBool("Seekable", functor);
    AddProperty(iSeekable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::PausablePropertyChanged);
    iPausable = new PropertyBool("Pausable", functor);
    AddProperty(iPausable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgTransport1Cpp::~CpProxyAvOpenhomeOrgTransport1Cpp()
{
    DestroyService();
    delete iActionPlayAs;
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrev;
    delete iActionSeekSecondsAbsolute;
    delete iActionSeekSecondsRelative;
    delete iActionTransportState;
    delete iActionModes;
    delete iActionModeInfo;
    delete iActionStreamInfo;
    delete iActionStreamId;
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncNext(uint32_t aStreamId)
{
    SyncNextAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginNext(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginNext(uint32_t aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionNext->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndNext(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Next"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncPrev(uint32_t aStreamId)
{
    SyncPrevAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginPrev(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginPrev(uint32_t aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrev, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPrev->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndPrev(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Prev"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSeekSecondsAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute)
{
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSeekSecondsAbsolute(uint32_t aStreamId, uint32_t aSecondsAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondsAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondsAbsolute));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSeekSecondsAbsolute(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondsAbsolute"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncSeekSecondsRelative(uint32_t aStreamId, int32_t aSecondsRelative)
{
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1Cpp sync(*this);
    BeginSeekSecondsRelative(aStreamId, aSecondsRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::BeginSeekSecondsRelative(uint32_t aStreamId, int32_t aSecondsRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondsRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondsRelative));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndSeekSecondsRelative(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SeekSecondsRelative"));

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

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncModeInfo(bool& aNextAvailable, bool& aPrevAvailable)
{
    SyncModeInfoAvOpenhomeOrgTransport1Cpp sync(*this, aNextAvailable, aPrevAvailable);
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
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::EndModeInfo(IAsync& aAsync, bool& aNextAvailable, bool& aPrevAvailable)
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
    aNextAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aPrevAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SyncStreamInfo(uint32_t& aStreamId, bool& aSeekable, bool& aPausable)
{
    SyncStreamInfoAvOpenhomeOrgTransport1Cpp sync(*this, aStreamId, aSeekable, aPausable);
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

void CpProxyAvOpenhomeOrgTransport1Cpp::EndStreamInfo(IAsync& aAsync, uint32_t& aStreamId, bool& aSeekable, bool& aPausable)
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
    aSeekable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aPausable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
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

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyNextAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNextAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyPrevAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPrevAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyStreamIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStreamIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertySeekableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSeekableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyPausableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPausableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
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

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyNextAvailable(bool& aNextAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aNextAvailable = iNextAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyPrevAvailable(bool& aPrevAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPrevAvailable = iPrevAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyStreamId(uint32_t& aStreamId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStreamId = iStreamId->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertySeekable(bool& aSeekable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSeekable = iSeekable->Value();
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PropertyPausable(bool& aPausable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPausable = iPausable->Value();
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

void CpProxyAvOpenhomeOrgTransport1Cpp::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::NextAvailablePropertyChanged()
{
    ReportEvent(iNextAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PrevAvailablePropertyChanged()
{
    ReportEvent(iPrevAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::StreamIdPropertyChanged()
{
    ReportEvent(iStreamIdChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::SeekablePropertyChanged()
{
    ReportEvent(iSeekableChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::PausablePropertyChanged()
{
    ReportEvent(iPausableChanged);
}

void CpProxyAvOpenhomeOrgTransport1Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
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

