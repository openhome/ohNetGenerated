#include "CpAvOpenhomeOrgRadio2.h"
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

class CpProxyAvOpenhomeOrgRadio2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgRadio2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgRadio2C();
    //CpProxyAvOpenhomeOrgRadio2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgRadio2*>(iProxy); }

    void SyncPlay();
    void BeginPlay(FunctorAsync& aFunctor);
    void EndPlay(IAsync& aAsync);

    void SyncPause();
    void BeginPause(FunctorAsync& aFunctor);
    void EndPause(IAsync& aAsync);

    void SyncStop();
    void BeginStop(FunctorAsync& aFunctor);
    void EndStop(IAsync& aAsync);

    void SyncSeekSecondAbsolute(TUint aValue);
    void BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor);
    void EndSeekSecondAbsolute(IAsync& aAsync);

    void SyncSeekSecondRelative(TInt aValue);
    void BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor);
    void EndSeekSecondRelative(IAsync& aAsync);

    void SyncChannel(Brh& aUri, Brh& aMetadata);
    void BeginChannel(FunctorAsync& aFunctor);
    void EndChannel(IAsync& aAsync, Brh& aUri, Brh& aMetadata);

    void SyncSetChannel(const Brx& aUri, const Brx& aMetadata);
    void BeginSetChannel(const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor);
    void EndSetChannel(IAsync& aAsync);

    void SyncTransportState(Brh& aValue);
    void BeginTransportState(FunctorAsync& aFunctor);
    void EndTransportState(IAsync& aAsync, Brh& aValue);

    void SyncId(TUint& aValue);
    void BeginId(FunctorAsync& aFunctor);
    void EndId(IAsync& aAsync, TUint& aValue);

    void SyncSetId(TUint aValue, const Brx& aUri);
    void BeginSetId(TUint aValue, const Brx& aUri, FunctorAsync& aFunctor);
    void EndSetId(IAsync& aAsync);

    void SyncRead(TUint aId, Brh& aMetadata);
    void BeginRead(TUint aId, FunctorAsync& aFunctor);
    void EndRead(IAsync& aAsync, Brh& aMetadata);

    void SyncReadList(const Brx& aIdList, Brh& aChannelList);
    void BeginReadList(const Brx& aIdList, FunctorAsync& aFunctor);
    void EndReadList(IAsync& aAsync, Brh& aChannelList);

    void SyncIdArray(TUint& aToken, Brh& aArray);
    void BeginIdArray(FunctorAsync& aFunctor);
    void EndIdArray(IAsync& aAsync, TUint& aToken, Brh& aArray);

    void SyncIdArrayChanged(TUint aToken, TBool& aValue);
    void BeginIdArrayChanged(TUint aToken, FunctorAsync& aFunctor);
    void EndIdArrayChanged(IAsync& aAsync, TBool& aValue);

    void SyncChannelsMax(TUint& aValue);
    void BeginChannelsMax(FunctorAsync& aFunctor);
    void EndChannelsMax(IAsync& aAsync, TUint& aValue);

    void SyncRefreshPresets();
    void BeginRefreshPresets(FunctorAsync& aFunctor);
    void EndRefreshPresets(IAsync& aAsync);

    void SyncProtocolInfo(Brh& aValue);
    void BeginProtocolInfo(FunctorAsync& aFunctor);
    void EndProtocolInfo(IAsync& aAsync, Brh& aValue);

    void SetPropertyUriChanged(Functor& aFunctor);
    void SetPropertyMetadataChanged(Functor& aFunctor);
    void SetPropertyTransportStateChanged(Functor& aFunctor);
    void SetPropertyIdChanged(Functor& aFunctor);
    void SetPropertyIdArrayChanged(Functor& aFunctor);
    void SetPropertyChannelsMaxChanged(Functor& aFunctor);
    void SetPropertyProtocolInfoChanged(Functor& aFunctor);

    void PropertyUri(Brhz& aUri) const;
    void PropertyMetadata(Brhz& aMetadata) const;
    void PropertyTransportState(Brhz& aTransportState) const;
    void PropertyId(TUint& aId) const;
    void PropertyIdArray(Brh& aIdArray) const;
    void PropertyChannelsMax(TUint& aChannelsMax) const;
    void PropertyProtocolInfo(Brhz& aProtocolInfo) const;
private:
    void UriPropertyChanged();
    void MetadataPropertyChanged();
    void TransportStatePropertyChanged();
    void IdPropertyChanged();
    void IdArrayPropertyChanged();
    void ChannelsMaxPropertyChanged();
    void ProtocolInfoPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPlay;
    Action* iActionPause;
    Action* iActionStop;
    Action* iActionSeekSecondAbsolute;
    Action* iActionSeekSecondRelative;
    Action* iActionChannel;
    Action* iActionSetChannel;
    Action* iActionTransportState;
    Action* iActionId;
    Action* iActionSetId;
    Action* iActionRead;
    Action* iActionReadList;
    Action* iActionIdArray;
    Action* iActionIdArrayChanged;
    Action* iActionChannelsMax;
    Action* iActionRefreshPresets;
    Action* iActionProtocolInfo;
    PropertyString* iUri;
    PropertyString* iMetadata;
    PropertyString* iTransportState;
    PropertyUint* iId;
    PropertyBinary* iIdArray;
    PropertyUint* iChannelsMax;
    PropertyString* iProtocolInfo;
    Functor iUriChanged;
    Functor iMetadataChanged;
    Functor iTransportStateChanged;
    Functor iIdChanged;
    Functor iIdArrayChanged;
    Functor iChannelsMaxChanged;
    Functor iProtocolInfoChanged;
};


class SyncPlayAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncPlayAvOpenhomeOrgRadio2C::SyncPlayAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncPauseAvOpenhomeOrgRadio2C::SyncPauseAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncStopAvOpenhomeOrgRadio2C::SyncStopAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C::SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgRadio2C::SyncSeekSecondRelativeAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncChannelAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncChannelAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aUri, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    Brh& iUri;
    Brh& iMetadata;
};

SyncChannelAvOpenhomeOrgRadio2C::SyncChannelAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aUri, Brh& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncChannelAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannel(aAsync, iUri, iMetadata);
}


class SyncSetChannelAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncSetChannelAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncSetChannelAvOpenhomeOrgRadio2C::SyncSetChannelAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannel(aAsync);
}


class SyncTransportStateAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    Brh& iValue;
};

SyncTransportStateAvOpenhomeOrgRadio2C::SyncTransportStateAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncIdAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncIdAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    TUint& iValue;
};

SyncIdAvOpenhomeOrgRadio2C::SyncIdAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndId(aAsync, iValue);
}


class SyncSetIdAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncSetIdAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetIdAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncSetIdAvOpenhomeOrgRadio2C::SyncSetIdAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetIdAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetId(aAsync);
}


class SyncReadAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    Brh& iMetadata;
};

SyncReadAvOpenhomeOrgRadio2C::SyncReadAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aMetadata)
    : iService(aProxy)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iMetadata);
}


class SyncReadListAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aChannelList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    Brh& iChannelList;
};

SyncReadListAvOpenhomeOrgRadio2C::SyncReadListAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aChannelList)
    : iService(aProxy)
    , iChannelList(aChannelList)
{
}

void SyncReadListAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iChannelList);
}


class SyncIdArrayAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncIdArrayAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aToken, Brh& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    TUint& iToken;
    Brh& iArray;
};

SyncIdArrayAvOpenhomeOrgRadio2C::SyncIdArrayAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aToken, Brh& aArray)
    : iService(aProxy)
    , iToken(aToken)
    , iArray(aArray)
{
}

void SyncIdArrayAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArray(aAsync, iToken, iArray);
}


class SyncIdArrayChangedAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncIdArrayChangedAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayChangedAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    TBool& iValue;
};

SyncIdArrayChangedAvOpenhomeOrgRadio2C::SyncIdArrayChangedAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdArrayChangedAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArrayChanged(aAsync, iValue);
}


class SyncChannelsMaxAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncChannelsMaxAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelsMaxAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    TUint& iValue;
};

SyncChannelsMaxAvOpenhomeOrgRadio2C::SyncChannelsMaxAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncChannelsMaxAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelsMax(aAsync, iValue);
}


class SyncRefreshPresetsAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncRefreshPresetsAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRefreshPresetsAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
};

SyncRefreshPresetsAvOpenhomeOrgRadio2C::SyncRefreshPresetsAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy)
    : iService(aProxy)
{
}

void SyncRefreshPresetsAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRefreshPresets(aAsync);
}


class SyncProtocolInfoAvOpenhomeOrgRadio2C : public SyncProxyAction
{
public:
    SyncProtocolInfoAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProtocolInfoAvOpenhomeOrgRadio2C() {};
private:
    CpProxyAvOpenhomeOrgRadio2C& iService;
    Brh& iValue;
};

SyncProtocolInfoAvOpenhomeOrgRadio2C::SyncProtocolInfoAvOpenhomeOrgRadio2C(CpProxyAvOpenhomeOrgRadio2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncProtocolInfoAvOpenhomeOrgRadio2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProtocolInfo(aAsync, iValue);
}

CpProxyAvOpenhomeOrgRadio2C::CpProxyAvOpenhomeOrgRadio2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Radio", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPlay = new Action("Play");

    iActionPause = new Action("Pause");

    iActionStop = new Action("Stop");

    iActionSeekSecondAbsolute = new Action("SeekSecondAbsolute");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSeekSecondAbsolute->AddInputParameter(param);

    iActionSeekSecondRelative = new Action("SeekSecondRelative");
    param = new OpenHome::Net::ParameterInt("Value");
    iActionSeekSecondRelative->AddInputParameter(param);

    iActionChannel = new Action("Channel");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionChannel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionChannel->AddOutputParameter(param);

    iActionSetChannel = new Action("SetChannel");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetChannel->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionSetChannel->AddInputParameter(param);

    iActionTransportState = new Action("TransportState");
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"Stopped";
    allowedValues[index++] = (TChar*)"Playing";
    allowedValues[index++] = (TChar*)"Paused";
    allowedValues[index++] = (TChar*)"Buffering";
    param = new OpenHome::Net::ParameterString("Value", allowedValues, 4);
    iActionTransportState->AddOutputParameter(param);
    delete[] allowedValues;

    iActionId = new Action("Id");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionId->AddOutputParameter(param);

    iActionSetId = new Action("SetId");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSetId->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Uri");
    iActionSetId->AddInputParameter(param);

    iActionRead = new Action("Read");
    param = new OpenHome::Net::ParameterUint("Id");
    iActionRead->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Metadata");
    iActionRead->AddOutputParameter(param);

    iActionReadList = new Action("ReadList");
    param = new OpenHome::Net::ParameterString("IdList");
    iActionReadList->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("ChannelList");
    iActionReadList->AddOutputParameter(param);

    iActionIdArray = new Action("IdArray");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionIdArray->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBinary("Array");
    iActionIdArray->AddOutputParameter(param);

    iActionIdArrayChanged = new Action("IdArrayChanged");
    param = new OpenHome::Net::ParameterUint("Token");
    iActionIdArrayChanged->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Value");
    iActionIdArrayChanged->AddOutputParameter(param);

    iActionChannelsMax = new Action("ChannelsMax");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionChannelsMax->AddOutputParameter(param);

    iActionRefreshPresets = new Action("RefreshPresets");

    iActionProtocolInfo = new Action("ProtocolInfo");
    param = new OpenHome::Net::ParameterString("Value");
    iActionProtocolInfo->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::UriPropertyChanged);
    iUri = new PropertyString("Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::ChannelsMaxPropertyChanged);
    iChannelsMax = new PropertyUint("ChannelsMax", functor);
    AddProperty(iChannelsMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2C::ProtocolInfoPropertyChanged);
    iProtocolInfo = new PropertyString("ProtocolInfo", functor);
    AddProperty(iProtocolInfo);
}

CpProxyAvOpenhomeOrgRadio2C::~CpProxyAvOpenhomeOrgRadio2C()
{
    DestroyService();
    delete iActionPlay;
    delete iActionPause;
    delete iActionStop;
    delete iActionSeekSecondAbsolute;
    delete iActionSeekSecondRelative;
    delete iActionChannel;
    delete iActionSetChannel;
    delete iActionTransportState;
    delete iActionId;
    delete iActionSetId;
    delete iActionRead;
    delete iActionReadList;
    delete iActionIdArray;
    delete iActionIdArrayChanged;
    delete iActionChannelsMax;
    delete iActionRefreshPresets;
    delete iActionProtocolInfo;
}

void CpProxyAvOpenhomeOrgRadio2C::SyncPlay()
{
    SyncPlayAvOpenhomeOrgRadio2C sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPlay, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2C::SyncPause()
{
    SyncPauseAvOpenhomeOrgRadio2C sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPause, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2C::SyncStop()
{
    SyncStopAvOpenhomeOrgRadio2C sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStop, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2C::SyncSeekSecondAbsolute(TUint aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2C sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginSeekSecondAbsolute(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2C::SyncSeekSecondRelative(TInt aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgRadio2C sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginSeekSecondRelative(TInt aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2C::SyncChannel(Brh& aUri, Brh& aMetadata)
{
    SyncChannelAvOpenhomeOrgRadio2C sync(*this, aUri, aMetadata);
    BeginChannel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginChannel(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannel->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndChannel(IAsync& aAsync, Brh& aUri, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Channel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUri);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgRadio2C::SyncSetChannel(const Brx& aUri, const Brx& aMetadata)
{
    SyncSetChannelAvOpenhomeOrgRadio2C sync(*this);
    BeginSetChannel(aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginSetChannel(const Brx& aUri, const Brx& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannel->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMetadata));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndSetChannel(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetChannel"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRadio2C::SyncTransportState(Brh& aValue)
{
    SyncTransportStateAvOpenhomeOrgRadio2C sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndTransportState(IAsync& aAsync, Brh& aValue)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgRadio2C::SyncId(TUint& aValue)
{
    SyncIdAvOpenhomeOrgRadio2C sync(*this, aValue);
    BeginId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndId(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Id"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgRadio2C::SyncSetId(TUint aValue, const Brx& aUri)
{
    SyncSetIdAvOpenhomeOrgRadio2C sync(*this);
    BeginSetId(aValue, aUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginSetId(TUint aValue, const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndSetId(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRadio2C::SyncRead(TUint aId, Brh& aMetadata)
{
    SyncReadAvOpenhomeOrgRadio2C sync(*this, aMetadata);
    BeginRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginRead(TUint aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndRead(IAsync& aAsync, Brh& aMetadata)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Read"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMetadata);
}

void CpProxyAvOpenhomeOrgRadio2C::SyncReadList(const Brx& aIdList, Brh& aChannelList)
{
    SyncReadListAvOpenhomeOrgRadio2C sync(*this, aChannelList);
    BeginReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginReadList(const Brx& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aIdList));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndReadList(IAsync& aAsync, Brh& aChannelList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReadList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannelList);
}

void CpProxyAvOpenhomeOrgRadio2C::SyncIdArray(TUint& aToken, Brh& aArray)
{
    SyncIdArrayAvOpenhomeOrgRadio2C sync(*this, aToken, aArray);
    BeginIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndIdArray(IAsync& aAsync, TUint& aToken, Brh& aArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IdArray"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aToken = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentBinary*)invocation.OutputArguments()[index++])->TransferTo(aArray);
}

void CpProxyAvOpenhomeOrgRadio2C::SyncIdArrayChanged(TUint aToken, TBool& aValue)
{
    SyncIdArrayChangedAvOpenhomeOrgRadio2C sync(*this, aValue);
    BeginIdArrayChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginIdArrayChanged(TUint aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIdArrayChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionIdArrayChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArrayChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndIdArrayChanged(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IdArrayChanged"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgRadio2C::SyncChannelsMax(TUint& aValue)
{
    SyncChannelsMaxAvOpenhomeOrgRadio2C sync(*this, aValue);
    BeginChannelsMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginChannelsMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannelsMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelsMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndChannelsMax(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ChannelsMax"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgRadio2C::SyncRefreshPresets()
{
    SyncRefreshPresetsAvOpenhomeOrgRadio2C sync(*this);
    BeginRefreshPresets(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginRefreshPresets(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRefreshPresets, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndRefreshPresets(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("RefreshPresets"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgRadio2C::SyncProtocolInfo(Brh& aValue)
{
    SyncProtocolInfoAvOpenhomeOrgRadio2C sync(*this, aValue);
    BeginProtocolInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2C::BeginProtocolInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProtocolInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProtocolInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2C::EndProtocolInfo(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ProtocolInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMetadataChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iLock.Wait();
    iTransportStateChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIdArrayChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyChannelsMaxChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelsMaxChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::SetPropertyProtocolInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProtocolInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyUri(Brhz& aUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUri.Set(iUri->Value());
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyMetadata(Brhz& aMetadata) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMetadata.Set(iMetadata->Value());
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyTransportState(Brhz& aTransportState) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aTransportState.Set(iTransportState->Value());
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyId(TUint& aId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyIdArray(Brh& aIdArray) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIdArray.Set(iIdArray->Value());
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyChannelsMax(TUint& aChannelsMax) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aChannelsMax = iChannelsMax->Value();
}

void CpProxyAvOpenhomeOrgRadio2C::PropertyProtocolInfo(Brhz& aProtocolInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProtocolInfo.Set(iProtocolInfo->Value());
}

void CpProxyAvOpenhomeOrgRadio2C::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::ChannelsMaxPropertyChanged()
{
    ReportEvent(iChannelsMaxChanged);
}

void CpProxyAvOpenhomeOrgRadio2C::ProtocolInfoPropertyChanged()
{
    ReportEvent(iProtocolInfoChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgRadio2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgRadio2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncPlay(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginPlay(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPlay(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndPlay(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncPause(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginPause(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPause(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndPause(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncStop(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginStop(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStop(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndStop(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncSeekSecondAbsolute(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondAbsolute(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginSeekSecondAbsolute(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondAbsolute(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndSeekSecondAbsolute(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncSeekSecondRelative(THandle aHandle, int32_t aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSeekSecondRelative(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginSeekSecondRelative(THandle aHandle, int32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSeekSecondRelative(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndSeekSecondRelative(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncChannel(THandle aHandle, char** aUri, char** aMetadata)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri;
    Brh buf_aMetadata;
    int32_t err = 0;
    try {
        proxyC->SyncChannel(buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aUri = NULL;
        *aMetadata = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginChannel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndChannel(THandle aHandle, OhNetHandleAsync aAsync, char** aUri, char** aMetadata)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aUri;
    *aUri = NULL;
    Brh buf_aMetadata;
    *aMetadata = NULL;
    try {
        proxyC->EndChannel(*async, buf_aUri, buf_aMetadata);
        *aUri = buf_aUri.Extract();
        *aMetadata = buf_aMetadata.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncSetChannel(THandle aHandle, const char* aUri, const char* aMetadata)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    int32_t err = 0;
    try {
        proxyC->SyncSetChannel(buf_aUri, buf_aMetadata);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginSetChannel(THandle aHandle, const char* aUri, const char* aMetadata, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    Brh buf_aMetadata(aMetadata);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetChannel(buf_aUri, buf_aMetadata, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndSetChannel(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetChannel(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncTransportState(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncTransportState(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginTransportState(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginTransportState(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndTransportState(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndTransportState(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncId(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncId(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginId(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndId(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndId(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncSetId(THandle aHandle, uint32_t aValue, const char* aUri)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    int32_t err = 0;
    try {
        proxyC->SyncSetId(aValue, buf_aUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginSetId(THandle aHandle, uint32_t aValue, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetId(aValue, buf_aUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndSetId(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetId(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncRead(THandle aHandle, uint32_t aId, char** aMetadata)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMetadata;
    int32_t err = 0;
    try {
        proxyC->SyncRead(aId, buf_aMetadata);
        *aMetadata = buf_aMetadata.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aMetadata = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginRead(THandle aHandle, uint32_t aId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRead(aId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndRead(THandle aHandle, OhNetHandleAsync aAsync, char** aMetadata)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aMetadata;
    *aMetadata = NULL;
    try {
        proxyC->EndRead(*async, buf_aMetadata);
        *aMetadata = buf_aMetadata.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncReadList(THandle aHandle, const char* aIdList, char** aChannelList)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdList(aIdList);
    Brh buf_aChannelList;
    int32_t err = 0;
    try {
        proxyC->SyncReadList(buf_aIdList, buf_aChannelList);
        *aChannelList = buf_aChannelList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aChannelList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginReadList(THandle aHandle, const char* aIdList, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdList(aIdList);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReadList(buf_aIdList, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndReadList(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aChannelList;
    *aChannelList = NULL;
    try {
        proxyC->EndReadList(*async, buf_aChannelList);
        *aChannelList = buf_aChannelList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncIdArray(THandle aHandle, uint32_t* aToken, char** aArray, uint32_t* aArrayLen)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aArray;
    int32_t err = 0;
    try {
        proxyC->SyncIdArray(*aToken, buf_aArray);
        *aArrayLen = buf_aArray.Bytes();
        *aArray = buf_aArray.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aToken = 0;
        *aArrayLen = 0;
        *aArray = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginIdArray(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIdArray(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndIdArray(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aToken, char** aArray, uint32_t* aArrayLen)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aArray;
    *aArray = NULL;
    *aArrayLen = 0;
    try {
        proxyC->EndIdArray(*async, *aToken, buf_aArray);
        *aArrayLen = buf_aArray.Bytes();
        *aArray = buf_aArray.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncIdArrayChanged(THandle aHandle, uint32_t aToken, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncIdArrayChanged(aToken, Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginIdArrayChanged(THandle aHandle, uint32_t aToken, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIdArrayChanged(aToken, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndIdArrayChanged(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndIdArrayChanged(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncChannelsMax(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncChannelsMax(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginChannelsMax(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannelsMax(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndChannelsMax(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndChannelsMax(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncRefreshPresets(THandle aHandle)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRefreshPresets();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginRefreshPresets(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRefreshPresets(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndRefreshPresets(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRefreshPresets(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2SyncProtocolInfo(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncProtocolInfo(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2BeginProtocolInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProtocolInfo(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2EndProtocolInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndProtocolInfo(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyMetadataChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMetadataChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyTransportStateChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyTransportStateChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyIdArrayChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIdArrayChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyChannelsMaxChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelsMaxChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgRadio2SetPropertyProtocolInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProtocolInfoChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyUri(THandle aHandle, char** aUri)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUri;
    try {
        proxyC->PropertyUri(buf_aUri);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUri = buf_aUri.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyMetadata(THandle aHandle, char** aMetadata)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMetadata;
    try {
        proxyC->PropertyMetadata(buf_aMetadata);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMetadata = buf_aMetadata.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyTransportState(THandle aHandle, char** aTransportState)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyId(THandle aHandle, uint32_t* aId)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyId(*aId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyIdArray(THandle aHandle, char** aIdArray, uint32_t* aLen)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aIdArray;
    try {
        proxyC->PropertyIdArray(buf_aIdArray);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aLen = buf_aIdArray.Bytes();
    *aIdArray = buf_aIdArray.Extract();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyChannelsMax(THandle aHandle, uint32_t* aChannelsMax)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyChannelsMax(*aChannelsMax);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgRadio2PropertyProtocolInfo(THandle aHandle, char** aProtocolInfo)
{
    CpProxyAvOpenhomeOrgRadio2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgRadio2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProtocolInfo;
    try {
        proxyC->PropertyProtocolInfo(buf_aProtocolInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProtocolInfo = buf_aProtocolInfo.Transfer();
    return 0;
}

