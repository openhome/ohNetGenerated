#include "CpAvOpenhomeOrgExakt2.h"
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

class CpProxyAvOpenhomeOrgExakt2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgExakt2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgExakt2C();
    //CpProxyAvOpenhomeOrgExakt2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgExakt2*>(iProxy); }

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

    void SyncVersion(Brh& aVersion);
    void BeginVersion(FunctorAsync& aFunctor);
    void EndVersion(IAsync& aAsync, Brh& aVersion);

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);
    void SetPropertyVersionChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertyConnectionStatus(Brhz& aConnectionStatus) const;
    void PropertyVersion(Brhz& aVersion) const;
private:
    void DeviceListPropertyChanged();
    void ConnectionStatusPropertyChanged();
    void VersionPropertyChanged();
private:
    Mutex iLock;
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    Action* iActionVersion;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    PropertyString* iVersion;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
    Functor iVersionChanged;
};


class SyncDeviceListAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
    Brh& iList;
};

SyncDeviceListAvOpenhomeOrgExakt2C::SyncDeviceListAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt2C::SyncDeviceSettingsAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
    Brh& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt2C::SyncConnectionStatusAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
};

SyncSetAvOpenhomeOrgExakt2C::SyncSetAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
};

SyncReprogramAvOpenhomeOrgExakt2C::SyncReprogramAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt2C::SyncReprogramFallbackAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}


class SyncVersionAvOpenhomeOrgExakt2C : public SyncProxyAction
{
public:
    SyncVersionAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncVersionAvOpenhomeOrgExakt2C() {};
private:
    CpProxyAvOpenhomeOrgExakt2C& iService;
    Brh& iVersion;
};

SyncVersionAvOpenhomeOrgExakt2C::SyncVersionAvOpenhomeOrgExakt2C(CpProxyAvOpenhomeOrgExakt2C& aProxy, Brh& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncVersionAvOpenhomeOrgExakt2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndVersion(aAsync, iVersion);
}

CpProxyAvOpenhomeOrgExakt2C::CpProxyAvOpenhomeOrgExakt2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Exakt", 2, *reinterpret_cast<CpiDevice*>(aDevice))
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

    iActionVersion = new Action("Version");
    param = new OpenHome::Net::ParameterString("Version");
    iActionVersion->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2C::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt2C::VersionPropertyChanged);
    iVersion = new PropertyString("Version", functor);
    AddProperty(iVersion);
}

CpProxyAvOpenhomeOrgExakt2C::~CpProxyAvOpenhomeOrgExakt2C()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
    delete iActionVersion;
}

void CpProxyAvOpenhomeOrgExakt2C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt2C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2C::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt2C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt2C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt2C sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2C::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt2C sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt2C::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt2C sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2C::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt2C sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2C::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt2C::SyncVersion(Brh& aVersion)
{
    SyncVersionAvOpenhomeOrgExakt2C sync(*this, aVersion);
    BeginVersion(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt2C::BeginVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt2C::EndVersion(IAsync& aAsync, Brh& aVersion)
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

void CpProxyAvOpenhomeOrgExakt2C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt2C::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectionStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt2C::SetPropertyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt2C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt2C::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt2C::PropertyVersion(Brhz& aVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aVersion.Set(iVersion->Value());
}

void CpProxyAvOpenhomeOrgExakt2C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt2C::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}

void CpProxyAvOpenhomeOrgExakt2C::VersionPropertyChanged()
{
    ReportEvent(iVersionChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgExakt2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgExakt2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgExakt2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginConnectionStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginConnectionStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndConnectionStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aConnectionStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogram(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndReprogram(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogramFallback(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndReprogramFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2SyncVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2BeginVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginVersion(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt2EndVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aVersion)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt2SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt2SetPropertyConnectionStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectionStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt2SetPropertyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyVersionChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt2PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceList;
    proxyC->PropertyDeviceList(buf_aDeviceList);
    *aDeviceList = buf_aDeviceList.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt2PropertyConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aConnectionStatus;
    proxyC->PropertyConnectionStatus(buf_aConnectionStatus);
    *aConnectionStatus = buf_aConnectionStatus.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt2PropertyVersion(THandle aHandle, char** aVersion)
{
    CpProxyAvOpenhomeOrgExakt2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aVersion;
    proxyC->PropertyVersion(buf_aVersion);
    *aVersion = buf_aVersion.Transfer();
}

