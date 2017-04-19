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

class SyncNextAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncPrevAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncPrevAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
};

class SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy);
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
    SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aNextAvailable, TBool& aPrevAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TBool& iNextAvailable;
    TBool& iPrevAvailable;
};

class SyncStreamInfoAvOpenhomeOrgTransport1 : public SyncProxyAction
{
public:
    SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId, TBool& aSeekable, TBool& aPausable);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgTransport1& iService;
    TUint& iStreamId;
    TBool& iSeekable;
    TBool& iPausable;
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

// SyncNextAvOpenhomeOrgTransport1

SyncNextAvOpenhomeOrgTransport1::SyncNextAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}

// SyncPrevAvOpenhomeOrgTransport1

SyncPrevAvOpenhomeOrgTransport1::SyncPrevAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncPrevAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrev(aAsync);
}

// SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1

SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1::SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsAbsolute(aAsync);
}

// SyncSeekSecondsRelativeAvOpenhomeOrgTransport1

SyncSeekSecondsRelativeAvOpenhomeOrgTransport1::SyncSeekSecondsRelativeAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsRelativeAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsRelative(aAsync);
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

SyncModeInfoAvOpenhomeOrgTransport1::SyncModeInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TBool& aNextAvailable, TBool& aPrevAvailable)
    : iService(aProxy)
    , iNextAvailable(aNextAvailable)
    , iPrevAvailable(aPrevAvailable)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iNextAvailable, iPrevAvailable);
}

// SyncStreamInfoAvOpenhomeOrgTransport1

SyncStreamInfoAvOpenhomeOrgTransport1::SyncStreamInfoAvOpenhomeOrgTransport1(CpProxyAvOpenhomeOrgTransport1& aProxy, TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
    : iService(aProxy)
    , iStreamId(aStreamId)
    , iSeekable(aSeekable)
    , iPausable(aPausable)
{
}

void SyncStreamInfoAvOpenhomeOrgTransport1::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamInfo(aAsync, iStreamId, iSeekable, iPausable);
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::NextAvailablePropertyChanged);
    iNextAvailable = new PropertyBool("NextAvailable", functor);
    AddProperty(iNextAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::PrevAvailablePropertyChanged);
    iPrevAvailable = new PropertyBool("PrevAvailable", functor);
    AddProperty(iPrevAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::StreamIdPropertyChanged);
    iStreamId = new PropertyUint("StreamId", functor);
    AddProperty(iStreamId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::SeekablePropertyChanged);
    iSeekable = new PropertyBool("Seekable", functor);
    AddProperty(iSeekable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::PausablePropertyChanged);
    iPausable = new PropertyBool("Pausable", functor);
    AddProperty(iPausable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgTransport1::~CpProxyAvOpenhomeOrgTransport1()
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

void CpProxyAvOpenhomeOrgTransport1::SyncNext(TUint aStreamId)
{
    SyncNextAvOpenhomeOrgTransport1 sync(*this);
    BeginNext(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginNext(TUint aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionNext, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionNext->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1::SyncPrev(TUint aStreamId)
{
    SyncPrevAvOpenhomeOrgTransport1 sync(*this);
    BeginPrev(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginPrev(TUint aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPrev, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPrev->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndPrev(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1::SyncSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute)
{
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1 sync(*this);
    BeginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondsAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondsAbsolute));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSeekSecondsAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1::SyncSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative)
{
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1 sync(*this);
    BeginSeekSecondsRelative(aStreamId, aSecondsRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1::BeginSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondsRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondsRelative));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndSeekSecondsRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1::SyncModeInfo(TBool& aNextAvailable, TBool& aPrevAvailable)
{
    SyncModeInfoAvOpenhomeOrgTransport1 sync(*this, aNextAvailable, aPrevAvailable);
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
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1::EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPrevAvailable)
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

void CpProxyAvOpenhomeOrgTransport1::SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
{
    SyncStreamInfoAvOpenhomeOrgTransport1 sync(*this, aStreamId, aSeekable, aPausable);
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

void CpProxyAvOpenhomeOrgTransport1::EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
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

void CpProxyAvOpenhomeOrgTransport1::SetPropertyModesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyNextAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iNextAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyPrevAvailableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPrevAvailableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyStreamIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStreamIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertySeekableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSeekableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyPausableChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iPausableChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgTransport1::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
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

void CpProxyAvOpenhomeOrgTransport1::PropertyNextAvailable(TBool& aNextAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aNextAvailable = iNextAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyPrevAvailable(TBool& aPrevAvailable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPrevAvailable = iPrevAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyStreamId(TUint& aStreamId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStreamId = iStreamId->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertySeekable(TBool& aSeekable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSeekable = iSeekable->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyPausable(TBool& aPausable) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aPausable = iPausable->Value();
}

void CpProxyAvOpenhomeOrgTransport1::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgTransport1::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1::NextAvailablePropertyChanged()
{
    ReportEvent(iNextAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1::PrevAvailablePropertyChanged()
{
    ReportEvent(iPrevAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1::StreamIdPropertyChanged()
{
    ReportEvent(iStreamIdChanged);
}

void CpProxyAvOpenhomeOrgTransport1::SeekablePropertyChanged()
{
    ReportEvent(iSeekableChanged);
}

void CpProxyAvOpenhomeOrgTransport1::PausablePropertyChanged()
{
    ReportEvent(iPausableChanged);
}

void CpProxyAvOpenhomeOrgTransport1::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
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


