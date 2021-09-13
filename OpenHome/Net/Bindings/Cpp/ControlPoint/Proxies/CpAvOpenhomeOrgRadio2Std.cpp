#include "CpAvOpenhomeOrgRadio2.h"
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


class SyncPlayAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncPlayAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPlayAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncPlayAvOpenhomeOrgRadio2Cpp::SyncPlayAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPlayAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPlay(aAsync);
}


class SyncPauseAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncPauseAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPauseAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncPauseAvOpenhomeOrgRadio2Cpp::SyncPauseAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncPauseAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndPause(aAsync);
}


class SyncStopAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncStopAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStopAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncStopAvOpenhomeOrgRadio2Cpp::SyncStopAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncStopAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStop(aAsync);
}


class SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp::SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondAbsolute(aAsync);
}


class SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp::SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSeekSecondRelative(aAsync);
}


class SyncChannelAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncChannelAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aUri, std::string& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    std::string& iUri;
    std::string& iMetadata;
};

SyncChannelAvOpenhomeOrgRadio2Cpp::SyncChannelAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aUri, std::string& aMetadata)
    : iService(aProxy)
    , iUri(aUri)
    , iMetadata(aMetadata)
{
}

void SyncChannelAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannel(aAsync, iUri, iMetadata);
}


class SyncSetChannelAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncSetChannelAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncSetChannelAvOpenhomeOrgRadio2Cpp::SyncSetChannelAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannel(aAsync);
}


class SyncTransportStateAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncTransportStateAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncTransportStateAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    std::string& iValue;
};

SyncTransportStateAvOpenhomeOrgRadio2Cpp::SyncTransportStateAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncTransportStateAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndTransportState(aAsync, iValue);
}


class SyncIdAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncIdAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    uint32_t& iValue;
};

SyncIdAvOpenhomeOrgRadio2Cpp::SyncIdAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndId(aAsync, iValue);
}


class SyncSetIdAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncSetIdAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetIdAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncSetIdAvOpenhomeOrgRadio2Cpp::SyncSetIdAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetIdAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetId(aAsync);
}


class SyncReadAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncReadAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aMetadata);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    std::string& iMetadata;
};

SyncReadAvOpenhomeOrgRadio2Cpp::SyncReadAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aMetadata)
    : iService(aProxy)
    , iMetadata(aMetadata)
{
}

void SyncReadAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRead(aAsync, iMetadata);
}


class SyncReadListAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncReadListAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aChannelList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReadListAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    std::string& iChannelList;
};

SyncReadListAvOpenhomeOrgRadio2Cpp::SyncReadListAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aChannelList)
    : iService(aProxy)
    , iChannelList(aChannelList)
{
}

void SyncReadListAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReadList(aAsync, iChannelList);
}


class SyncIdArrayAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncIdArrayAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aToken, std::string& aArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    uint32_t& iToken;
    std::string& iArray;
};

SyncIdArrayAvOpenhomeOrgRadio2Cpp::SyncIdArrayAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aToken, std::string& aArray)
    : iService(aProxy)
    , iToken(aToken)
    , iArray(aArray)
{
}

void SyncIdArrayAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArray(aAsync, iToken, iArray);
}


class SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    bool& iValue;
};

SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp::SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIdArrayChanged(aAsync, iValue);
}


class SyncChannelsMaxAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncChannelsMaxAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelsMaxAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    uint32_t& iValue;
};

SyncChannelsMaxAvOpenhomeOrgRadio2Cpp::SyncChannelsMaxAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncChannelsMaxAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelsMax(aAsync, iValue);
}


class SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
};

SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp::SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndRefreshPresets(aAsync);
}


class SyncProtocolInfoAvOpenhomeOrgRadio2Cpp : public SyncProxyAction
{
public:
    SyncProtocolInfoAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProtocolInfoAvOpenhomeOrgRadio2Cpp() {}
private:
    CpProxyAvOpenhomeOrgRadio2Cpp& iService;
    std::string& iValue;
};

SyncProtocolInfoAvOpenhomeOrgRadio2Cpp::SyncProtocolInfoAvOpenhomeOrgRadio2Cpp(CpProxyAvOpenhomeOrgRadio2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncProtocolInfoAvOpenhomeOrgRadio2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProtocolInfo(aAsync, iValue);
}


CpProxyAvOpenhomeOrgRadio2Cpp::CpProxyAvOpenhomeOrgRadio2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Radio", 2, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::UriPropertyChanged);
    iUri = new PropertyString("Uri", functor);
    AddProperty(iUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::MetadataPropertyChanged);
    iMetadata = new PropertyString("Metadata", functor);
    AddProperty(iMetadata);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::TransportStatePropertyChanged);
    iTransportState = new PropertyString("TransportState", functor);
    AddProperty(iTransportState);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::IdPropertyChanged);
    iId = new PropertyUint("Id", functor);
    AddProperty(iId);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::IdArrayPropertyChanged);
    iIdArray = new PropertyBinary("IdArray", functor);
    AddProperty(iIdArray);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::ChannelsMaxPropertyChanged);
    iChannelsMax = new PropertyUint("ChannelsMax", functor);
    AddProperty(iChannelsMax);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgRadio2Cpp::ProtocolInfoPropertyChanged);
    iProtocolInfo = new PropertyString("ProtocolInfo", functor);
    AddProperty(iProtocolInfo);
}

CpProxyAvOpenhomeOrgRadio2Cpp::~CpProxyAvOpenhomeOrgRadio2Cpp()
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncPlay()
{
    SyncPlayAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginPlay(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginPlay(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPlay, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndPlay(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncPause()
{
    SyncPauseAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginPause(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginPause(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionPause, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndPause(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncStop()
{
    SyncStopAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginStop(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginStop(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStop, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndStop(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncSeekSecondAbsolute(uint32_t aValue)
{
    SyncSeekSecondAbsoluteAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginSeekSecondAbsolute(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginSeekSecondAbsolute(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondAbsolute, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondAbsolute->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndSeekSecondAbsolute(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncSeekSecondRelative(int32_t aValue)
{
    SyncSeekSecondRelativeAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginSeekSecondRelative(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginSeekSecondRelative(int32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSeekSecondRelative, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSeekSecondRelative->InputParameters();
    invocation->AddInput(new ArgumentInt(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndSeekSecondRelative(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncChannel(std::string& aUri, std::string& aMetadata)
{
    SyncChannelAvOpenhomeOrgRadio2Cpp sync(*this, aUri, aMetadata);
    BeginChannel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginChannel(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannel->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndChannel(IAsync& aAsync, std::string& aUri, std::string& aMetadata)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUri.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMetadata.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncSetChannel(const std::string& aUri, const std::string& aMetadata)
{
    SyncSetChannelAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginSetChannel(aUri, aMetadata, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginSetChannel(const std::string& aUri, const std::string& aMetadata, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetChannel, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannel->InputParameters();
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    {
        Brn buf((const TByte*)aMetadata.c_str(), (TUint)aMetadata.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndSetChannel(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncTransportState(std::string& aValue)
{
    SyncTransportStateAvOpenhomeOrgRadio2Cpp sync(*this, aValue);
    BeginTransportState(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginTransportState(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionTransportState, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionTransportState->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndTransportState(IAsync& aAsync, std::string& aValue)
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
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncId(uint32_t& aValue)
{
    SyncIdAvOpenhomeOrgRadio2Cpp sync(*this, aValue);
    BeginId(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionId->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndId(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncSetId(uint32_t aValue, const std::string& aUri)
{
    SyncSetIdAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginSetId(aValue, aUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginSetId(uint32_t aValue, const std::string& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    {
        Brn buf((const TByte*)aUri.c_str(), (TUint)aUri.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndSetId(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncRead(uint32_t aId, std::string& aMetadata)
{
    SyncReadAvOpenhomeOrgRadio2Cpp sync(*this, aMetadata);
    BeginRead(aId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginRead(uint32_t aId, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRead, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionRead->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionRead->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndRead(IAsync& aAsync, std::string& aMetadata)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aMetadata.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncReadList(const std::string& aIdList, std::string& aChannelList)
{
    SyncReadListAvOpenhomeOrgRadio2Cpp sync(*this, aChannelList);
    BeginReadList(aIdList, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginReadList(const std::string& aIdList, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReadList, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReadList->InputParameters();
    {
        Brn buf((const TByte*)aIdList.c_str(), (TUint)aIdList.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionReadList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndReadList(IAsync& aAsync, std::string& aChannelList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aChannelList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncIdArray(uint32_t& aToken, std::string& aArray)
{
    SyncIdArrayAvOpenhomeOrgRadio2Cpp sync(*this, aToken, aArray);
    BeginIdArray(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginIdArray(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIdArray, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArray->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBinary(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndIdArray(IAsync& aAsync, uint32_t& aToken, std::string& aArray)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aArray.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncIdArrayChanged(uint32_t aToken, bool& aValue)
{
    SyncIdArrayChangedAvOpenhomeOrgRadio2Cpp sync(*this, aValue);
    BeginIdArrayChanged(aToken, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginIdArrayChanged(uint32_t aToken, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIdArrayChanged, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionIdArrayChanged->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aToken));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIdArrayChanged->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndIdArrayChanged(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncChannelsMax(uint32_t& aValue)
{
    SyncChannelsMaxAvOpenhomeOrgRadio2Cpp sync(*this, aValue);
    BeginChannelsMax(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginChannelsMax(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionChannelsMax, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelsMax->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndChannelsMax(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncRefreshPresets()
{
    SyncRefreshPresetsAvOpenhomeOrgRadio2Cpp sync(*this);
    BeginRefreshPresets(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginRefreshPresets(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionRefreshPresets, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndRefreshPresets(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgRadio2Cpp::SyncProtocolInfo(std::string& aValue)
{
    SyncProtocolInfoAvOpenhomeOrgRadio2Cpp sync(*this, aValue);
    BeginProtocolInfo(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::BeginProtocolInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProtocolInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProtocolInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::EndProtocolInfo(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyMetadataChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMetadataChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyTransportStateChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iTransportStateChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyIdArrayChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIdArrayChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyChannelsMaxChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iChannelsMaxChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyProtocolInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProtocolInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyUri(std::string& aUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iUri->Value();
    aUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyMetadata(std::string& aMetadata) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMetadata->Value();
    aMetadata.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyTransportState(std::string& aTransportState) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iTransportState->Value();
    aTransportState.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyId(uint32_t& aId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aId = iId->Value();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyIdArray(std::string& aIdArray) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIdArray->Value();
    aIdArray.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyChannelsMax(uint32_t& aChannelsMax) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aChannelsMax = iChannelsMax->Value();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::PropertyProtocolInfo(std::string& aProtocolInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProtocolInfo->Value();
    aProtocolInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgRadio2Cpp::UriPropertyChanged()
{
    ReportEvent(iUriChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::MetadataPropertyChanged()
{
    ReportEvent(iMetadataChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::TransportStatePropertyChanged()
{
    ReportEvent(iTransportStateChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::IdPropertyChanged()
{
    ReportEvent(iIdChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::IdArrayPropertyChanged()
{
    ReportEvent(iIdArrayChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::ChannelsMaxPropertyChanged()
{
    ReportEvent(iChannelsMaxChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::ProtocolInfoPropertyChanged()
{
    ReportEvent(iProtocolInfoChanged);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgRadio2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgRadio2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgRadio2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgRadio2Cpp::Version() const
{
  return iCpProxy.Version();
}

