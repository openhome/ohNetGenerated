#include "CpAvOpenhomeOrgTransport1.h"
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

class CpProxyAvOpenhomeOrgTransport1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgTransport1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgTransport1C();
    //CpProxyAvOpenhomeOrgTransport1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgTransport1*>(iProxy); }

    void SyncPlayAs(const Brx& aMode, const Brx& aCommand);
    void BeginPlayAs(const Brx& aMode, const Brx& aCommand, FunctorAsync& aFunctor);
    void EndPlayAs(IAsync& aAsync);

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncStop();
    void BeginStop(FunctorAsync& aFunctor);
    void EndStop(IAsync& aAsync);

    void SyncNext(TUint aStreamId);
    void BeginNext(TUint aStreamId, FunctorAsync& aFunctor);
    void EndNext(IAsync& aAsync);

    void SyncPrev(TUint aStreamId);
    void BeginPrev(TUint aStreamId, FunctorAsync& aFunctor);
    void EndPrev(IAsync& aAsync);

    void SyncSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute);
    void BeginSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute, FunctorAsync& aFunctor);
    void EndSeekSecondsAbsolute(IAsync& aAsync);

    void SyncSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative);
    void BeginSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative, FunctorAsync& aFunctor);
    void EndSeekSecondsRelative(IAsync& aAsync);

    void SyncTransportState(Brh& aState);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aState);

    void SyncModes(Brh& aModes);
    void BeginModes(FunctorAsync& aFunctor);
    void EndModes(IAsync& aAsync, Brh& aModes);

    void SyncModeInfo(TBool& aNextAvailable, TBool& aPrevAvailable);
    void BeginModeInfo(FunctorAsync& aFunctor);
    void EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPrevAvailable);

    void SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable);
    void BeginStreamInfo(FunctorAsync& aFunctor);
    void EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable);

    void SyncStreamId(TUint& aStreamId);
    void BeginStreamId(FunctorAsync& aFunctor);
    void EndStreamId(IAsync& aAsync, TUint& aStreamId);

    void SetPropertyModesChanged(Functor& aFunctor);
    void SetPropertyNextAvailableChanged(Functor& aFunctor);
    void SetPropertyPrevAvailableChanged(Functor& aFunctor);
    void SetPropertyStreamIdChanged(Functor& aFunctor);
    void SetPropertySeekableChanged(Functor& aFunctor);
    void SetPropertyPausableChanged(Functor& aFunctor);
    void SetPropertyTransportStateChanged(Functor& aFunctor);

    void PropertyModes(Brhz& aModes) const;
    void PropertyNextAvailable(TBool& aNextAvailable) const;
    void PropertyPrevAvailable(TBool& aPrevAvailable) const;
    void PropertyStreamId(TUint& aStreamId) const;
    void PropertySeekable(TBool& aSeekable) const;
    void PropertyPausable(TBool& aPausable) const;
    void PropertyTransportState(Brhz& aTransportState) const;
private:
    void ModesPropertyChanged();
    void NextAvailablePropertyChanged();
    void PrevAvailablePropertyChanged();
    void StreamIdPropertyChanged();
    void SeekablePropertyChanged();
    void PausablePropertyChanged();
    void TransportStatePropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlayAs;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrev;
    Action* iActionSeekSecondsAbsolute;
    Action* iActionSeekSecondsRelative;
    Action* iActionTransportState;
    Action* iActionModes;
    Action* iActionModeInfo;
    Action* iActionStreamInfo;
    Action* iActionStreamId;
    PropertyString* iModes;
    PropertyBool* iNextAvailable;
    PropertyBool* iPrevAvailable;
    PropertyUint* iStreamId;
    PropertyBool* iSeekable;
    PropertyBool* iPausable;
    PropertyString* iTransportState;
    Functor iModesChanged;
    Functor iNextAvailableChanged;
    Functor iPrevAvailableChanged;
    Functor iStreamIdChanged;
    Functor iSeekableChanged;
    Functor iPausableChanged;
    Functor iTransportStateChanged;
};


class SyncPlayAsAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncPlayAsAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAsAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncPlayAsAvOpenhomeOrgTransport1C::SyncPlayAsAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAsAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlayAs(aAsync);
}


class SyncPlayAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncPlayAvOpenhomeOrgTransport1C::SyncPlayAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncPauseAvOpenhomeOrgTransport1C::SyncPauseAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncStopAvOpenhomeOrgTransport1C::SyncStopAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncNextAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncNextAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncNextAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncNextAvOpenhomeOrgTransport1C::SyncNextAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncNextAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndNext(aAsync);
}


class SyncPrevAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncPrevAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPrevAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncPrevAvOpenhomeOrgTransport1C::SyncPrevAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncPrevAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrev(aAsync);
}


class SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C::SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsAbsolute(aAsync);
}


class SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C::SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondsRelative(aAsync);
}


class SyncTransportStateAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, Brh& aState);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    Brh& iState;
};

SyncTransportStateAvOpenhomeOrgTransport1C::SyncTransportStateAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, Brh& aState)
    : iService(aProxy)
    , iState(aState)
{
}

void SyncTransportStateAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iState);
}


class SyncModesAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncModesAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, Brh& aModes);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModesAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    Brh& iModes;
};

SyncModesAvOpenhomeOrgTransport1C::SyncModesAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, Brh& aModes)
    : iService(aProxy)
    , iModes(aModes)
{
}

void SyncModesAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModes(aAsync, iModes);
}


class SyncModeInfoAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncModeInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TBool& aNextAvailable, TBool& aPrevAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModeInfoAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TBool& iNextAvailable;
    TBool& iPrevAvailable;
};

SyncModeInfoAvOpenhomeOrgTransport1C::SyncModeInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TBool& aNextAvailable, TBool& aPrevAvailable)
    : iService(aProxy)
    , iNextAvailable(aNextAvailable)
    , iPrevAvailable(aPrevAvailable)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iNextAvailable, iPrevAvailable);
}


class SyncStreamInfoAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncStreamInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aStreamId, TBool& aSeekable, TBool& aPausable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStreamInfoAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TUint& iStreamId;
    TBool& iSeekable;
    TBool& iPausable;
};

SyncStreamInfoAvOpenhomeOrgTransport1C::SyncStreamInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
    : iService(aProxy)
    , iStreamId(aStreamId)
    , iSeekable(aSeekable)
    , iPausable(aPausable)
{
}

void SyncStreamInfoAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamInfo(aAsync, iStreamId, iSeekable, iPausable);
}


class SyncStreamIdAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncStreamIdAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aStreamId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStreamIdAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TUint& iStreamId;
};

SyncStreamIdAvOpenhomeOrgTransport1C::SyncStreamIdAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aStreamId)
    : iService(aProxy)
    , iStreamId(aStreamId)
{
}

void SyncStreamIdAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStreamId(aAsync, iStreamId);
}

CpProxyAvOpenhomeOrgTransport1C::CpProxyAvOpenhomeOrgTransport1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Transport", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::NextAvailablePropertyChanged);
    iNextAvailable = new PropertyBool("NextAvailable", functor);
    AddProperty(iNextAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::PrevAvailablePropertyChanged);
    iPrevAvailable = new PropertyBool("PrevAvailable", functor);
    AddProperty(iPrevAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::StreamIdPropertyChanged);
    iStreamId = new PropertyUint("StreamId", functor);
    AddProperty(iStreamId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::SeekablePropertyChanged);
    iSeekable = new PropertyBool("Seekable", functor);
    AddProperty(iSeekable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::PausablePropertyChanged);
    iPausable = new PropertyBool("Pausable", functor);
    AddProperty(iPausable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
}

CpProxyAvOpenhomeOrgTransport1C::~CpProxyAvOpenhomeOrgTransport1C()
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

void CpProxyAvOpenhomeOrgTransport1C::SyncPlayAs(const Brx& aMode, const Brx& aCommand)
{
    SyncPlayAsAvOpenhomeOrgTransport1C sync(*this);
    BeginPlayAs(aMode, aCommand, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginPlayAs(const Brx& aMode, const Brx& aCommand, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlayAs, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPlayAs->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMode));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aCommand));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndPlayAs(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgTransport1C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncPause()
{
    SyncPauseAvOpenhomeOrgTransport1C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncStop()
{
    SyncStopAvOpenhomeOrgTransport1C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncNext(TUint aStreamId)
{
    SyncNextAvOpenhomeOrgTransport1C sync(*this);
    BeginNext(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginNext(TUint aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionNext->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndNext(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncPrev(TUint aStreamId)
{
    SyncPrevAvOpenhomeOrgTransport1C sync(*this);
    BeginPrev(aStreamId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginPrev(TUint aStreamId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrev, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPrev->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndPrev(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute)
{
    SyncSeekSecondsAbsoluteAvOpenhomeOrgTransport1C sync(*this);
    BeginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSeekSecondsAbsolute(TUint aStreamId, TUint aSecondsAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondsAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondsAbsolute));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSeekSecondsAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative)
{
    SyncSeekSecondsRelativeAvOpenhomeOrgTransport1C sync(*this);
    BeginSeekSecondsRelative(aStreamId, aSecondsRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSeekSecondsRelative(TUint aStreamId, TInt aSecondsRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondsRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondsRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondsRelative));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSeekSecondsRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncTransportState(Brh& aState)
{
    SyncTransportStateAvOpenhomeOrgTransport1C sync(*this, aState);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndTransportState(IAsync& aAsync, Brh& aState)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncModes(Brh& aModes)
{
    SyncModesAvOpenhomeOrgTransport1C sync(*this, aModes);
    BeginModes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginModes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionModes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndModes(IAsync& aAsync, Brh& aModes)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncModeInfo(TBool& aNextAvailable, TBool& aPrevAvailable)
{
    SyncModeInfoAvOpenhomeOrgTransport1C sync(*this, aNextAvailable, aPrevAvailable);
    BeginModeInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginModeInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionModeInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModeInfo->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPrevAvailable)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
{
    SyncStreamInfoAvOpenhomeOrgTransport1C sync(*this, aStreamId, aSeekable, aPausable);
    BeginStreamInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginStreamInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStreamInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamInfo->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncStreamId(TUint& aStreamId)
{
    SyncStreamIdAvOpenhomeOrgTransport1C sync(*this, aStreamId);
    BeginStreamId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginStreamId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStreamId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStreamId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndStreamId(IAsync& aAsync, TUint& aStreamId)
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

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyModesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyNextAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iNextAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyPrevAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPrevAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyStreamIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStreamIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertySeekableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSeekableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyPausableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPausableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyModes(Brhz& aModes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModes.Set(iModes->Value());
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyNextAvailable(TBool& aNextAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aNextAvailable = iNextAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyPrevAvailable(TBool& aPrevAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPrevAvailable = iPrevAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyStreamId(TUint& aStreamId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStreamId = iStreamId->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertySeekable(TBool& aSeekable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSeekable = iSeekable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyPausable(TBool& aPausable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPausable = iPausable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgTransport1C::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::NextAvailablePropertyChanged()
{
    ReportEvent(iNextAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::PrevAvailablePropertyChanged()
{
    ReportEvent(iPrevAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::StreamIdPropertyChanged()
{
    ReportEvent(iStreamIdChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::SeekablePropertyChanged()
{
    ReportEvent(iSeekableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::PausablePropertyChanged()
{
    ReportEvent(iPausableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgTransport1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgTransport1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncPlayAs(THandle aHandle, const char* aMode, const char* aCommand)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aCommand(aCommand);
    int32_t err = 0;
    try {
        proxyC->SyncPlayAs(buf_aMode, buf_aCommand);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginPlayAs(THandle aHandle, const char* aMode, const char* aCommand, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMode(aMode);
    Brh buf_aCommand(aCommand);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlayAs(buf_aMode, buf_aCommand, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndPlayAs(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlayAs(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPlay();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPlay(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPause();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPause(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncStop();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndStop(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncNext(THandle aHandle, uint32_t aStreamId)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncNext(aStreamId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginNext(THandle aHandle, uint32_t aStreamId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(aStreamId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndNext(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndNext(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncPrev(THandle aHandle, uint32_t aStreamId)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPrev(aStreamId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginPrev(THandle aHandle, uint32_t aStreamId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrev(aStreamId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndPrev(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPrev(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSeekSecondsAbsolute(THandle aHandle, uint32_t aStreamId, uint32_t aSecondsAbsolute)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondsAbsolute(aStreamId, aSecondsAbsolute);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSeekSecondsAbsolute(THandle aHandle, uint32_t aStreamId, uint32_t aSecondsAbsolute, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondsAbsolute(aStreamId, aSecondsAbsolute, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSeekSecondsAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondsAbsolute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSeekSecondsRelative(THandle aHandle, uint32_t aStreamId, int32_t aSecondsRelative)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondsRelative(aStreamId, aSecondsRelative);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSeekSecondsRelative(THandle aHandle, uint32_t aStreamId, int32_t aSecondsRelative, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondsRelative(aStreamId, aSecondsRelative, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSeekSecondsRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondsRelative(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncTransportState(THandle aHandle, char** aState)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aState;
    int32_t err = 0;
    try {
        proxyC->SyncTransportState(buf_aState);
        *aState = buf_aState.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aState = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aState)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aState;
    *aState = NULL;
    try {
        proxyC->EndTransportState(*async, buf_aState);
        *aState = buf_aState.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncModes(THandle aHandle, char** aModes)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aModes;
    int32_t err = 0;
    try {
        proxyC->SyncModes(buf_aModes);
        *aModes = buf_aModes.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aModes = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginModes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndModes(THandle aHandle, OhNetHandleAsync aAsync, char** aModes)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aModes;
    *aModes = NULL;
    try {
        proxyC->EndModes(*async, buf_aModes);
        *aModes = buf_aModes.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncModeInfo(THandle aHandle, uint32_t* aNextAvailable, uint32_t* aPrevAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool NextAvailable;
    TBool PrevAvailable;
    int32_t err = 0;
    try {
        proxyC->SyncModeInfo(NextAvailable, PrevAvailable);
        *aNextAvailable = NextAvailable? 1 : 0;
        *aPrevAvailable = PrevAvailable? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aNextAvailable = false;
        *aPrevAvailable = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginModeInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModeInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndModeInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNextAvailable, uint32_t* aPrevAvailable)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool NextAvailable;
    TBool PrevAvailable;
    try {
        proxyC->EndModeInfo(*async, NextAvailable, PrevAvailable);
        *aNextAvailable = NextAvailable? 1 : 0;
        *aPrevAvailable = PrevAvailable? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncStreamInfo(THandle aHandle, uint32_t* aStreamId, uint32_t* aSeekable, uint32_t* aPausable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Seekable;
    TBool Pausable;
    int32_t err = 0;
    try {
        proxyC->SyncStreamInfo(*aStreamId, Seekable, Pausable);
        *aSeekable = Seekable? 1 : 0;
        *aPausable = Pausable? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aStreamId = 0;
        *aSeekable = false;
        *aPausable = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginStreamInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStreamInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndStreamInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aStreamId, uint32_t* aSeekable, uint32_t* aPausable)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Seekable;
    TBool Pausable;
    try {
        proxyC->EndStreamInfo(*async, *aStreamId, Seekable, Pausable);
        *aSeekable = Seekable? 1 : 0;
        *aPausable = Pausable? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncStreamId(THandle aHandle, uint32_t* aStreamId)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncStreamId(*aStreamId);
    }
    catch (ProxyError& ) {
        err = -1;
        *aStreamId = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginStreamId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStreamId(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndStreamId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aStreamId)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndStreamId(*async, *aStreamId);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyModesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModesChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyNextAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyNextAvailableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyPrevAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPrevAvailableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyStreamIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStreamIdChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertySeekableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySeekableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyPausableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPausableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyModes(THandle aHandle, char** aModes)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModes;
    try {
        proxyC->PropertyModes(buf_aModes);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModes = buf_aModes.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyNextAvailable(THandle aHandle, uint32_t* aNextAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool NextAvailable;
    try {
        proxyC->PropertyNextAvailable(NextAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aNextAvailable = NextAvailable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyPrevAvailable(THandle aHandle, uint32_t* aPrevAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool PrevAvailable;
    try {
        proxyC->PropertyPrevAvailable(PrevAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPrevAvailable = PrevAvailable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyStreamId(THandle aHandle, uint32_t* aStreamId)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyStreamId(*aStreamId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertySeekable(THandle aHandle, uint32_t* aSeekable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Seekable;
    try {
        proxyC->PropertySeekable(Seekable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSeekable = Seekable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyPausable(THandle aHandle, uint32_t* aPausable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Pausable;
    try {
        proxyC->PropertyPausable(Pausable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPausable = Pausable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aTransportState;
    try {
        proxyC->PropertyTransportState(buf_aTransportState);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aTransportState = buf_aTransportState.Transfer();
    return 0;
}

