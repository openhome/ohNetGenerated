#include "CpAvOpenhomeOrgExakt3.h"
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

class CpProxyAvOpenhomeOrgExakt3C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgExakt3C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgExakt3C();
    //CpProxyAvOpenhomeOrgExakt3* Proxy() { return static_cast<CpProxyAvOpenhomeOrgExakt3*>(iProxy); }

    void SyncDeviceList(Brh& aList);
    void BeginDeviceList(FunctorAsync& aFunctor);
    void EndDeviceList(IAsync& aAsync, Brh& aList);

    void SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings);
    void BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor);
    void EndDeviceSettings(IAsync& aAsync, Brh& aSettings);

    void SyncConnectionStatus(Brh& aConnectionStatus);
    void BeginConnectionStatus(FunctorAsync& aFunctor);
    void EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus);

    void SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist);
    void BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor);
    void EndSet(IAsync& aAsync);

    void SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri);
    void BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    void EndReprogram(IAsync& aAsync);

    void SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri);
    void BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor);
    void EndReprogramFallback(IAsync& aAsync);

    void SyncChannelMap(Brh& aChannelMap);
    void BeginChannelMap(FunctorAsync& aFunctor);
    void EndChannelMap(IAsync& aAsync, Brh& aChannelMap);

    void SyncSetChannelMap(const Brx& aChannelMap);
    void BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor);
    void EndSetChannelMap(IAsync& aAsync);

    void SyncVersion(Brh& aVersion);
    void BeginVersion(FunctorAsync& aFunctor);
    void EndVersion(IAsync& aAsync, Brh& aVersion);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);
    void SetPropertyChannelMapChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertyConnectionStatus(Brhz& aConnectionStatus) const;
    void PropertyChannelMap(Brhz& aChannelMap) const;
    void PropertyVersion(Brhz& aVersion) const;
private:
    void DeviceListPropertyChanged();
    void ConnectionStatusPropertyChanged();
    void ChannelMapPropertyChanged();
    void VersionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    Action* iActionChannelMap;
    Action* iActionSetChannelMap;
    Action* iActionVersion;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    PropertyString* iChannelMap;
    PropertyString* iVersion;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
    Functor iChannelMapChanged;
    Functor iVersionChanged;
};


class SyncDeviceListAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
    Brh& iList;
};

SyncDeviceListAvOpenhomeOrgExakt3C::SyncDeviceListAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt3C::SyncDeviceSettingsAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
    Brh& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt3C::SyncConnectionStatusAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
};

SyncSetAvOpenhomeOrgExakt3C::SyncSetAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
};

SyncReprogramAvOpenhomeOrgExakt3C::SyncReprogramAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt3C::SyncReprogramFallbackAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncChannelMapAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncChannelMapAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aChannelMap);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncChannelMapAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
    Brh& iChannelMap;
};

SyncChannelMapAvOpenhomeOrgExakt3C::SyncChannelMapAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aChannelMap)
    : iService(aProxy)
    , iChannelMap(aChannelMap)
{
}

void SyncChannelMapAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndChannelMap(aAsync, iChannelMap);
}


class SyncSetChannelMapAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncSetChannelMapAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetChannelMapAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
};

SyncSetChannelMapAvOpenhomeOrgExakt3C::SyncSetChannelMapAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetChannelMapAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetChannelMap(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt3C : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt3C() {};
private:
    CpProxyAvOpenhomeOrgExakt3C& iService;
    Brh& iVersion;
};

SyncVersionAvOpenhomeOrgExakt3C::SyncVersionAvOpenhomeOrgExakt3C(CpProxyAvOpenhomeOrgExakt3C& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}

CpProxyAvOpenhomeOrgExakt3C::CpProxyAvOpenhomeOrgExakt3C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Exakt", 3, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionDeviceList = new Action("DeviceList");
    param = new OpenHome::Net::ParameterString("List");
    iActionDeviceList->AddOutputParameter(param);

    iActionDeviceSettings = new Action("DeviceSettings");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionDeviceSettings->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Settings");
    iActionDeviceSettings->AddOutputParameter(param);

    iActionConnectionStatus = new Action("ConnectionStatus");
    param = new OpenHome::Net::ParameterString("ConnectionStatus");
    iActionConnectionStatus->AddOutputParameter(param);

    iActionSet = new Action("Set");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterUint("BankId");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Mute");
    iActionSet->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Persist");
    iActionSet->AddInputParameter(param);

    iActionReprogram = new Action("Reprogram");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionReprogram->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionReprogram->AddInputParameter(param);

    iActionReprogramFallback = new Action("ReprogramFallback");
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionReprogramFallback->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("FileUri");
    iActionReprogramFallback->AddInputParameter(param);

    iActionChannelMap = new Action("ChannelMap");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionChannelMap->AddOutputParameter(param);

    iActionSetChannelMap = new Action("SetChannelMap");
    param = new OpenHome::Net::ParameterString("ChannelMap");
    iActionSetChannelMap->AddInputParameter(param);

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3C::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3C::ChannelMapPropertyChanged);
    iChannelMap = new PropertyString("ChannelMap", functor);
    AddProperty(iChannelMap);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt3C::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt3C::~CpProxyAvOpenhomeOrgExakt3C()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
    delete iActionChannelMap;
    delete iActionSetChannelMap;
    delete iActionVersion;
}

void CpProxyAvOpenhomeOrgExakt3C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt3C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndDeviceList(IAsync& aAsync, Brh& aList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeviceList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aList);
}

void CpProxyAvOpenhomeOrgExakt3C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt3C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceSettings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionDeviceSettings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceSettings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeviceSettings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSettings);
}

void CpProxyAvOpenhomeOrgExakt3C::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt3C sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ConnectionStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aConnectionStatus);
}

void CpProxyAvOpenhomeOrgExakt3C::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt3C sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSet, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSet->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aBankId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aMute));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aPersist));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndSet(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Set"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt3C::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt3C sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndReprogram(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Reprogram"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt3C::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt3C sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndReprogramFallback(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ReprogramFallback"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt3C::SyncChannelMap(Brh& aChannelMap)
{
    SyncChannelMapAvOpenhomeOrgExakt3C sync(*this, aChannelMap);
    BeginChannelMap(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginChannelMap(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionChannelMap, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionChannelMap->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndChannelMap(IAsync& aAsync, Brh& aChannelMap)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ChannelMap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannelMap);
}

void CpProxyAvOpenhomeOrgExakt3C::SyncSetChannelMap(const Brx& aChannelMap)
{
    SyncSetChannelMapAvOpenhomeOrgExakt3C sync(*this);
    BeginSetChannelMap(aChannelMap, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginSetChannelMap(const Brx& aChannelMap, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetChannelMap, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetChannelMap->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannelMap));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndSetChannelMap(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetChannelMap"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgExakt3C::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt3C sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt3C::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt3C::EndVersion(IAsync& aAsync, Brh& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Version"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aVersion);
}

void CpProxyAvOpenhomeOrgExakt3C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt3C::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectionStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt3C::SetPropertyChannelMapChanged(Functor& aFunctor)
{
    iLock.Wait();
    iChannelMapChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt3C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt3C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt3C::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt3C::PropertyChannelMap(Brhz& aChannelMap) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aChannelMap.Set(iChannelMap->Value());
}

void CpProxyAvOpenhomeOrgExakt3C::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt3C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt3C::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt3C::ChannelMapPropertyChanged()
{
    ReportEvent(iChannelMapChanged);
}

void CpProxyAvOpenhomeOrgExakt3C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgExakt3Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgExakt3C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgExakt3Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aList;
    int32_t err = 0;
    try {
        proxyC->SyncDeviceList(buf_aList);
        *aList = buf_aList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aList = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aList;
    *aList = NULL;
    try {
        proxyC->EndDeviceList(*async, buf_aList);
        *aList = buf_aList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aSettings;
    int32_t err = 0;
    try {
        proxyC->SyncDeviceSettings(buf_aDeviceId, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSettings = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSettings;
    *aSettings = NULL;
    try {
        proxyC->EndDeviceSettings(*async, buf_aSettings);
        *aSettings = buf_aSettings.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aConnectionStatus;
    int32_t err = 0;
    try {
        proxyC->SyncConnectionStatus(buf_aConnectionStatus);
        *aConnectionStatus = buf_aConnectionStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aConnectionStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginConnectionStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginConnectionStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndConnectionStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aConnectionStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aConnectionStatus;
    *aConnectionStatus = NULL;
    try {
        proxyC->EndConnectionStatus(*async, buf_aConnectionStatus);
        *aConnectionStatus = buf_aConnectionStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSet(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncReprogram(buf_aDeviceId, buf_aFileUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogram(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndReprogram(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReprogram(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    int32_t err = 0;
    try {
        proxyC->SyncReprogramFallback(buf_aDeviceId, buf_aFileUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogramFallback(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndReprogramFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReprogramFallback(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap;
    int32_t err = 0;
    try {
        proxyC->SyncChannelMap(buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aChannelMap = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginChannelMap(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginChannelMap(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndChannelMap(THandle aHandle, OhNetHandleAsync aAsync, char** aChannelMap)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aChannelMap;
    *aChannelMap = NULL;
    try {
        proxyC->EndChannelMap(*async, buf_aChannelMap);
        *aChannelMap = buf_aChannelMap.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncSetChannelMap(THandle aHandle, const char* aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    int32_t err = 0;
    try {
        proxyC->SyncSetChannelMap(buf_aChannelMap);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginSetChannelMap(THandle aHandle, const char* aChannelMap, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aChannelMap(aChannelMap);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetChannelMap(buf_aChannelMap, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndSetChannelMap(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetChannelMap(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3SyncVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aVersion;
    int32_t err = 0;
    try {
        proxyC->SyncVersion(buf_aVersion);
        *aVersion = buf_aVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3BeginVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt3EndVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aVersion;
    *aVersion = NULL;
    try {
        proxyC->EndVersion(*async, buf_aVersion);
        *aVersion = buf_aVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgExakt3SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt3SetPropertyConnectionStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectionStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt3SetPropertyChannelMapChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyChannelMapChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt3SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt3PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceList;
    proxyC->PropertyDeviceList(buf_aDeviceList);
    *aDeviceList = buf_aDeviceList.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt3PropertyConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aConnectionStatus;
    proxyC->PropertyConnectionStatus(buf_aConnectionStatus);
    *aConnectionStatus = buf_aConnectionStatus.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt3PropertyChannelMap(THandle aHandle, char** aChannelMap)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aChannelMap;
    proxyC->PropertyChannelMap(buf_aChannelMap);
    *aChannelMap = buf_aChannelMap.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt3PropertyVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aVersion;
    proxyC->PropertyVersion(buf_aVersion);
    *aVersion = buf_aVersion.Transfer();
}

