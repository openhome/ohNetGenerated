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

    void SyncNext();
    void BeginNext(FunctorAsync& aFunctor);
    void EndNext(IAsync& aAsync);

    void SyncPrevious();
    void BeginPrevious(FunctorAsync& aFunctor);
    void EndPrevious(IAsync& aAsync);

    void SyncSetRepeat(TUint aRepeat);
    void BeginSetRepeat(TUint aRepeat, FunctorAsync& aFunctor);
    void EndSetRepeat(IAsync& aAsync);

    void SyncSetShuffle(TUint aShuffle);
    void BeginSetShuffle(TUint aShuffle, FunctorAsync& aFunctor);
    void EndSetShuffle(IAsync& aAsync);

    void SyncSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute);
    void BeginSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncSeekSecondRelative(TUint aStreamId, TInt aSecondRelative);
    void BeginSeekSecondRelative(TUint aStreamId, TInt aSecondRelative, FunctorAsync& aFunctor);
    void EndSeekSecondRelative(IAsync& aAsync);

    void SyncTransportState(Brh& aState);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aState);

    void SyncModes(Brh& aModes);
    void BeginModes(FunctorAsync& aFunctor);
    void EndModes(IAsync& aAsync, Brh& aModes);

    void SyncModeInfo(TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable);
    void BeginModeInfo(FunctorAsync& aFunctor);
    void EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable);

    void SyncStreamInfo(TUint& aStreamId, TBool& aSeekable, TBool& aPausable);
    void BeginStreamInfo(FunctorAsync& aFunctor);
    void EndStreamInfo(IAsync& aAsync, TUint& aStreamId, TBool& aSeekable, TBool& aPausable);

    void SyncStreamId(TUint& aStreamId);
    void BeginStreamId(FunctorAsync& aFunctor);
    void EndStreamId(IAsync& aAsync, TUint& aStreamId);

    void SyncRepeat(TUint& aRepeat);
    void BeginRepeat(FunctorAsync& aFunctor);
    void EndRepeat(IAsync& aAsync, TUint& aRepeat);

    void SyncShuffle(TUint& aShuffle);
    void BeginShuffle(FunctorAsync& aFunctor);
    void EndShuffle(IAsync& aAsync, TUint& aShuffle);

    void SetPropertyModesChanged(Functor& aFunctor);
    void SetPropertyNextAvailableChanged(Functor& aFunctor);
    void SetPropertyPreviousAvailableChanged(Functor& aFunctor);
    void SetPropertyRepeatAvailableChanged(Functor& aFunctor);
    void SetPropertyShuffleAvailableChanged(Functor& aFunctor);
    void SetPropertyStreamIdChanged(Functor& aFunctor);
    void SetPropertySeekableChanged(Functor& aFunctor);
    void SetPropertyPausableChanged(Functor& aFunctor);
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyRepeatChanged(Functor& aFunctor);
    void SetPropertyShuffleChanged(Functor& aFunctor);

    void PropertyModes(Brhz& aModes) const;
    void PropertyNextAvailable(TBool& aNextAvailable) const;
    void PropertyPreviousAvailable(TBool& aPreviousAvailable) const;
    void PropertyRepeatAvailable(TBool& aRepeatAvailable) const;
    void PropertyShuffleAvailable(TBool& aShuffleAvailable) const;
    void PropertyStreamId(TUint& aStreamId) const;
    void PropertySeekable(TBool& aSeekable) const;
    void PropertyPausable(TBool& aPausable) const;
    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyRepeat(TUint& aRepeat) const;
    void PropertyShuffle(TUint& aShuffle) const;
private:
    void ModesPropertyChanged();
    void NextAvailablePropertyChanged();
    void PreviousAvailablePropertyChanged();
    void RepeatAvailablePropertyChanged();
    void ShuffleAvailablePropertyChanged();
    void StreamIdPropertyChanged();
    void SeekablePropertyChanged();
    void PausablePropertyChanged();
    void TransportStatePropertyChanged();
    void RepeatPropertyChanged();
    void ShufflePropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlayAs;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionNext;
    Action* iActionPrevious;
    Action* iActionSetRepeat;
    Action* iActionSetShuffle;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionTransportState;
    Action* iActionModes;
    Action* iActionModeInfo;
    Action* iActionStreamInfo;
    Action* iActionStreamId;
    Action* iActionRepeat;
    Action* iActionShuffle;
    PropertyString* iModes;
    PropertyBool* iNextAvailable;
    PropertyBool* iPreviousAvailable;
    PropertyBool* iRepeatAvailable;
    PropertyBool* iShuffleAvailable;
    PropertyUint* iStreamId;
    PropertyBool* iSeekable;
    PropertyBool* iPausable;
    PropertyString* iTransportState;
    PropertyUint* iRepeat;
    PropertyUint* iShuffle;
    Functor iModesChanged;
    Functor iNextAvailableChanged;
    Functor iPreviousAvailableChanged;
    Functor iRepeatAvailableChanged;
    Functor iShuffleAvailableChanged;
    Functor iStreamIdChanged;
    Functor iSeekableChanged;
    Functor iPausableChanged;
    Functor iTransportStateChanged;
    Functor iRepeatChanged;
    Functor iShuffleChanged;
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


class SyncPreviousAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncPreviousAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPreviousAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncPreviousAvOpenhomeOrgTransport1C::SyncPreviousAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncPreviousAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPrevious(aAsync);
}


class SyncSetRepeatAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSetRepeatAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetRepeatAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSetRepeatAvOpenhomeOrgTransport1C::SyncSetRepeatAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetRepeatAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetRepeat(aAsync);
}


class SyncSetShuffleAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSetShuffleAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetShuffleAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSetShuffleAvOpenhomeOrgTransport1C::SyncSetShuffleAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetShuffleAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetShuffle(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C::SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgTransport1C::SyncSeekSecondRelativeAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
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
    SyncModeInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModeInfoAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TBool& iNextAvailable;
    TBool& iPreviousAvailable;
    TBool& iRepeatAvailable;
    TBool& iShuffleAvailable;
};

SyncModeInfoAvOpenhomeOrgTransport1C::SyncModeInfoAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable)
    : iService(aProxy)
    , iNextAvailable(aNextAvailable)
    , iPreviousAvailable(aPreviousAvailable)
    , iRepeatAvailable(aRepeatAvailable)
    , iShuffleAvailable(aShuffleAvailable)
{
}

void SyncModeInfoAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModeInfo(aAsync, iNextAvailable, iPreviousAvailable, iRepeatAvailable, iShuffleAvailable);
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


class SyncRepeatAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncRepeatAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aRepeat);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRepeatAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TUint& iRepeat;
};

SyncRepeatAvOpenhomeOrgTransport1C::SyncRepeatAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aRepeat)
    : iService(aProxy)
    , iRepeat(aRepeat)
{
}

void SyncRepeatAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRepeat(aAsync, iRepeat);
}


class SyncShuffleAvOpenhomeOrgTransport1C : public SyncProxyAction
{
public:
    SyncShuffleAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aShuffle);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncShuffleAvOpenhomeOrgTransport1C() {};
private:
    CpProxyAvOpenhomeOrgTransport1C& iService;
    TUint& iShuffle;
};

SyncShuffleAvOpenhomeOrgTransport1C::SyncShuffleAvOpenhomeOrgTransport1C(CpProxyAvOpenhomeOrgTransport1C& aProxy, TUint& aShuffle)
    : iService(aProxy)
    , iShuffle(aShuffle)
{
}

void SyncShuffleAvOpenhomeOrgTransport1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndShuffle(aAsync, iShuffle);
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

    iActionPrevious = new Action("Previous");

    iActionSetRepeat = new Action("SetRepeat");
    param = new OpenHome::Net::ParameterUint("Repeat");
    iActionSetRepeat->AddInputParameter(param);

    iActionSetShuffle = new Action("SetShuffle");
    param = new OpenHome::Net::ParameterUint("Shuffle");
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
    param = new OpenHome::Net::ParameterBool("NextAvailable");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("PreviousAvailable");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("RepeatAvailable");
    iActionModeInfo->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("ShuffleAvailable");
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

    iActionRepeat = new Action("Repeat");
    param = new OpenHome::Net::ParameterUint("Repeat");
    iActionRepeat->AddOutputParameter(param);

    iActionShuffle = new Action("Shuffle");
    param = new OpenHome::Net::ParameterUint("Shuffle");
    iActionShuffle->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::ModesPropertyChanged);
    iModes = new PropertyString("Modes", functor);
    AddProperty(iModes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::NextAvailablePropertyChanged);
    iNextAvailable = new PropertyBool("NextAvailable", functor);
    AddProperty(iNextAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::PreviousAvailablePropertyChanged);
    iPreviousAvailable = new PropertyBool("PreviousAvailable", functor);
    AddProperty(iPreviousAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::RepeatAvailablePropertyChanged);
    iRepeatAvailable = new PropertyBool("RepeatAvailable", functor);
    AddProperty(iRepeatAvailable);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::ShuffleAvailablePropertyChanged);
    iShuffleAvailable = new PropertyBool("ShuffleAvailable", functor);
    AddProperty(iShuffleAvailable);
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::RepeatPropertyChanged);
    iRepeat = new PropertyUint("Repeat", functor);
    AddProperty(iRepeat);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgTransport1C::ShufflePropertyChanged);
    iShuffle = new PropertyUint("Shuffle", functor);
    AddProperty(iShuffle);
}

CpProxyAvOpenhomeOrgTransport1C::~CpProxyAvOpenhomeOrgTransport1C()
{
    DestroyService();
    delete iActionPlayAs;
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionNext;
    delete iActionPrevious;
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

void CpProxyAvOpenhomeOrgTransport1C::SyncNext()
{
    SyncNextAvOpenhomeOrgTransport1C sync(*this);
    BeginNext(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginNext(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionNext, aFunctor);
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

void CpProxyAvOpenhomeOrgTransport1C::SyncPrevious()
{
    SyncPreviousAvOpenhomeOrgTransport1C sync(*this);
    BeginPrevious(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginPrevious(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPrevious, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndPrevious(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Previous"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgTransport1C::SyncSetRepeat(TUint aRepeat)
{
    SyncSetRepeatAvOpenhomeOrgTransport1C sync(*this);
    BeginSetRepeat(aRepeat, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSetRepeat(TUint aRepeat, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetRepeat, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetRepeat->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aRepeat));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSetRepeat(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncSetShuffle(TUint aShuffle)
{
    SyncSetShuffleAvOpenhomeOrgTransport1C sync(*this);
    BeginSetShuffle(aShuffle, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSetShuffle(TUint aShuffle, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetShuffle, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetShuffle->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aShuffle));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSetShuffle(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgTransport1C sync(*this);
    BeginSeekSecondAbsolute(aStreamId, aSecondAbsolute, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSeekSecondAbsolute(TUint aStreamId, TUint aSecondAbsolute, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aSecondAbsolute));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncSeekSecondRelative(TUint aStreamId, TInt aSecondRelative)
{
    SyncSeekSecondRelativeAvOpenhomeOrgTransport1C sync(*this);
    BeginSeekSecondRelative(aStreamId, aSecondRelative, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginSeekSecondRelative(TUint aStreamId, TInt aSecondRelative, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aStreamId));
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aSecondRelative));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgTransport1C::SyncModeInfo(TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable)
{
    SyncModeInfoAvOpenhomeOrgTransport1C sync(*this, aNextAvailable, aPreviousAvailable, aRepeatAvailable, aShuffleAvailable);
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
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndModeInfo(IAsync& aAsync, TBool& aNextAvailable, TBool& aPreviousAvailable, TBool& aRepeatAvailable, TBool& aShuffleAvailable)
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
    aPreviousAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aRepeatAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    aShuffleAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
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

void CpProxyAvOpenhomeOrgTransport1C::SyncRepeat(TUint& aRepeat)
{
    SyncRepeatAvOpenhomeOrgTransport1C sync(*this, aRepeat);
    BeginRepeat(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginRepeat(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRepeat, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRepeat->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndRepeat(IAsync& aAsync, TUint& aRepeat)
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
    aRepeat = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::SyncShuffle(TUint& aShuffle)
{
    SyncShuffleAvOpenhomeOrgTransport1C sync(*this, aShuffle);
    BeginShuffle(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgTransport1C::BeginShuffle(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionShuffle, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionShuffle->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgTransport1C::EndShuffle(IAsync& aAsync, TUint& aShuffle)
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
    aShuffle = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
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

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyPreviousAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPreviousAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyRepeatAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatAvailableChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyShuffleAvailableChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleAvailableChanged = aFunctor;
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

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyRepeatChanged(Functor& aFunctor)
{
    iLock.Wait();
    iRepeatChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgTransport1C::SetPropertyShuffleChanged(Functor& aFunctor)
{
    iLock.Wait();
    iShuffleChanged = aFunctor;
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

void CpProxyAvOpenhomeOrgTransport1C::PropertyPreviousAvailable(TBool& aPreviousAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPreviousAvailable = iPreviousAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyRepeatAvailable(TBool& aRepeatAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeatAvailable = iRepeatAvailable->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyShuffleAvailable(TBool& aShuffleAvailable) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffleAvailable = iShuffleAvailable->Value();
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

void CpProxyAvOpenhomeOrgTransport1C::PropertyRepeat(TUint& aRepeat) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aRepeat = iRepeat->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::PropertyShuffle(TUint& aShuffle) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aShuffle = iShuffle->Value();
}

void CpProxyAvOpenhomeOrgTransport1C::ModesPropertyChanged()
{
    ReportEvent(iModesChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::NextAvailablePropertyChanged()
{
    ReportEvent(iNextAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::PreviousAvailablePropertyChanged()
{
    ReportEvent(iPreviousAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::RepeatAvailablePropertyChanged()
{
    ReportEvent(iRepeatAvailableChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::ShuffleAvailablePropertyChanged()
{
    ReportEvent(iShuffleAvailableChanged);
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

void CpProxyAvOpenhomeOrgTransport1C::RepeatPropertyChanged()
{
    ReportEvent(iRepeatChanged);
}

void CpProxyAvOpenhomeOrgTransport1C::ShufflePropertyChanged()
{
    ReportEvent(iShuffleChanged);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncNext(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncNext();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginNext(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginNext(functor);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncPrevious(THandle aHandle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncPrevious();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginPrevious(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPrevious(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndPrevious(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPrevious(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSetRepeat(THandle aHandle, uint32_t aRepeat)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetRepeat(aRepeat);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSetRepeat(THandle aHandle, uint32_t aRepeat, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetRepeat(aRepeat, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSetRepeat(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetRepeat(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSetShuffle(THandle aHandle, uint32_t aShuffle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetShuffle(aShuffle);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSetShuffle(THandle aHandle, uint32_t aShuffle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetShuffle(aShuffle, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSetShuffle(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetShuffle(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSeekSecondAbsolute(THandle aHandle, uint32_t aStreamId, uint32_t aSecondAbsolute)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondAbsolute(aStreamId, aSecondAbsolute);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSeekSecondAbsolute(THandle aHandle, uint32_t aStreamId, uint32_t aSecondAbsolute, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aStreamId, aSecondAbsolute, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondAbsolute(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncSeekSecondRelative(THandle aHandle, uint32_t aStreamId, int32_t aSecondRelative)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondRelative(aStreamId, aSecondRelative);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginSeekSecondRelative(THandle aHandle, uint32_t aStreamId, int32_t aSecondRelative, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aStreamId, aSecondRelative, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSeekSecondRelative(*async);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncModeInfo(THandle aHandle, uint32_t* aNextAvailable, uint32_t* aPreviousAvailable, uint32_t* aRepeatAvailable, uint32_t* aShuffleAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool NextAvailable;
    TBool PreviousAvailable;
    TBool RepeatAvailable;
    TBool ShuffleAvailable;
    int32_t err = 0;
    try {
        proxyC->SyncModeInfo(NextAvailable, PreviousAvailable, RepeatAvailable, ShuffleAvailable);
        *aNextAvailable = NextAvailable? 1 : 0;
        *aPreviousAvailable = PreviousAvailable? 1 : 0;
        *aRepeatAvailable = RepeatAvailable? 1 : 0;
        *aShuffleAvailable = ShuffleAvailable? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aNextAvailable = false;
        *aPreviousAvailable = false;
        *aRepeatAvailable = false;
        *aShuffleAvailable = false;
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndModeInfo(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aNextAvailable, uint32_t* aPreviousAvailable, uint32_t* aRepeatAvailable, uint32_t* aShuffleAvailable)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool NextAvailable;
    TBool PreviousAvailable;
    TBool RepeatAvailable;
    TBool ShuffleAvailable;
    try {
        proxyC->EndModeInfo(*async, NextAvailable, PreviousAvailable, RepeatAvailable, ShuffleAvailable);
        *aNextAvailable = NextAvailable? 1 : 0;
        *aPreviousAvailable = PreviousAvailable? 1 : 0;
        *aRepeatAvailable = RepeatAvailable? 1 : 0;
        *aShuffleAvailable = ShuffleAvailable? 1 : 0;
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRepeat(*aRepeat);
    }
    catch (ProxyError& ) {
        err = -1;
        *aRepeat = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginRepeat(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRepeat(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndRepeat(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aRepeat)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRepeat(*async, *aRepeat);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1SyncShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncShuffle(*aShuffle);
    }
    catch (ProxyError& ) {
        err = -1;
        *aShuffle = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgTransport1BeginShuffle(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginShuffle(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1EndShuffle(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aShuffle)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndShuffle(*async, *aShuffle);
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

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyPreviousAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPreviousAvailableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyRepeatAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatAvailableChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyShuffleAvailableChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleAvailableChanged(functor);
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

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyRepeatChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyRepeatChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgTransport1SetPropertyShuffleChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyShuffleChanged(functor);
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyPreviousAvailable(THandle aHandle, uint32_t* aPreviousAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool PreviousAvailable;
    try {
        proxyC->PropertyPreviousAvailable(PreviousAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPreviousAvailable = PreviousAvailable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyRepeatAvailable(THandle aHandle, uint32_t* aRepeatAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool RepeatAvailable;
    try {
        proxyC->PropertyRepeatAvailable(RepeatAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aRepeatAvailable = RepeatAvailable? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyShuffleAvailable(THandle aHandle, uint32_t* aShuffleAvailable)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool ShuffleAvailable;
    try {
        proxyC->PropertyShuffleAvailable(ShuffleAvailable);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aShuffleAvailable = ShuffleAvailable? 1 : 0;
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

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyRepeat(THandle aHandle, uint32_t* aRepeat)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyRepeat(*aRepeat);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgTransport1PropertyShuffle(THandle aHandle, uint32_t* aShuffle)
{
    CpProxyAvOpenhomeOrgTransport1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgTransport1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyShuffle(*aShuffle);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

