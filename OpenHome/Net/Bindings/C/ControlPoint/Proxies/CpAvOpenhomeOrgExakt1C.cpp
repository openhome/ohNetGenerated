#include "CpAvOpenhomeOrgExakt1.h"
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

class CpProxyAvOpenhomeOrgExakt1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgExakt1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgExakt1C();
    //CpProxyAvOpenhomeOrgExakt1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgExakt1*>(iProxy); }

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

    void SetPropertyDeviceListChanged(Functor& aFunctor);
    void SetPropertyConnectionStatusChanged(Functor& aFunctor);

    void PropertyDeviceList(Brhz& aDeviceList) const;
    void PropertyConnectionStatus(Brhz& aConnectionStatus) const;
private:
    void DeviceListPropertyChanged();
    void ConnectionStatusPropertyChanged();
private:
    Mutex iLock;
    Action* iActionDeviceList;
    Action* iActionDeviceSettings;
    Action* iActionConnectionStatus;
    Action* iActionSet;
    Action* iActionReprogram;
    Action* iActionReprogramFallback;
    PropertyString* iDeviceList;
    PropertyString* iConnectionStatus;
    Functor iDeviceListChanged;
    Functor iConnectionStatusChanged;
};


class SyncDeviceListAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncDeviceListAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceListAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
    Brh& iList;
};

SyncDeviceListAvOpenhomeOrgExakt1C::SyncDeviceListAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aList)
    : iService(aProxy)
    , iList(aList)
{
}

void SyncDeviceListAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceList(aAsync, iList);
}


class SyncDeviceSettingsAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncDeviceSettingsAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aSettings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceSettingsAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
    Brh& iSettings;
};

SyncDeviceSettingsAvOpenhomeOrgExakt1C::SyncDeviceSettingsAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aSettings)
    : iService(aProxy)
    , iSettings(aSettings)
{
}

void SyncDeviceSettingsAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceSettings(aAsync, iSettings);
}


class SyncConnectionStatusAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncConnectionStatusAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aConnectionStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncConnectionStatusAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
    Brh& iConnectionStatus;
};

SyncConnectionStatusAvOpenhomeOrgExakt1C::SyncConnectionStatusAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy, Brh& aConnectionStatus)
    : iService(aProxy)
    , iConnectionStatus(aConnectionStatus)
{
}

void SyncConnectionStatusAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndConnectionStatus(aAsync, iConnectionStatus);
}


class SyncSetAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncSetAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
};

SyncSetAvOpenhomeOrgExakt1C::SyncSetAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSet(aAsync);
}


class SyncReprogramAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncReprogramAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
};

SyncReprogramAvOpenhomeOrgExakt1C::SyncReprogramAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogram(aAsync);
}


class SyncReprogramFallbackAvOpenhomeOrgExakt1C : public SyncProxyAction
{
public:
    SyncReprogramFallbackAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncReprogramFallbackAvOpenhomeOrgExakt1C() {};
private:
    CpProxyAvOpenhomeOrgExakt1C& iService;
};

SyncReprogramFallbackAvOpenhomeOrgExakt1C::SyncReprogramFallbackAvOpenhomeOrgExakt1C(CpProxyAvOpenhomeOrgExakt1C& aProxy)
    : iService(aProxy)
{
}

void SyncReprogramFallbackAvOpenhomeOrgExakt1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReprogramFallback(aAsync);
}

CpProxyAvOpenhomeOrgExakt1C::CpProxyAvOpenhomeOrgExakt1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Exakt", 1, *reinterpret_cast<CpiDevice*>(aDevice))
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

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt1C::DeviceListPropertyChanged);
    iDeviceList = new PropertyString("DeviceList", functor);
    AddProperty(iDeviceList);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgExakt1C::ConnectionStatusPropertyChanged);
    iConnectionStatus = new PropertyString("ConnectionStatus", functor);
    AddProperty(iConnectionStatus);
}

CpProxyAvOpenhomeOrgExakt1C::~CpProxyAvOpenhomeOrgExakt1C()
{
    DestroyService();
    delete iActionDeviceList;
    delete iActionDeviceSettings;
    delete iActionConnectionStatus;
    delete iActionSet;
    delete iActionReprogram;
    delete iActionReprogramFallback;
}

void CpProxyAvOpenhomeOrgExakt1C::SyncDeviceList(Brh& aList)
{
    SyncDeviceListAvOpenhomeOrgExakt1C sync(*this, aList);
    BeginDeviceList(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginDeviceList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1C::EndDeviceList(IAsync& aAsync, Brh& aList)
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

void CpProxyAvOpenhomeOrgExakt1C::SyncDeviceSettings(const Brx& aDeviceId, Brh& aSettings)
{
    SyncDeviceSettingsAvOpenhomeOrgExakt1C sync(*this, aSettings);
    BeginDeviceSettings(aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginDeviceSettings(const Brx& aDeviceId, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt1C::EndDeviceSettings(IAsync& aAsync, Brh& aSettings)
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

void CpProxyAvOpenhomeOrgExakt1C::SyncConnectionStatus(Brh& aConnectionStatus)
{
    SyncConnectionStatusAvOpenhomeOrgExakt1C sync(*this, aConnectionStatus);
    BeginConnectionStatus(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginConnectionStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionConnectionStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionConnectionStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1C::EndConnectionStatus(IAsync& aAsync, Brh& aConnectionStatus)
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

void CpProxyAvOpenhomeOrgExakt1C::SyncSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist)
{
    SyncSetAvOpenhomeOrgExakt1C sync(*this);
    BeginSet(aDeviceId, aBankId, aFileUri, aMute, aPersist, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginSet(const Brx& aDeviceId, TUint aBankId, const Brx& aFileUri, TBool aMute, TBool aPersist, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgExakt1C::EndSet(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1C::SyncReprogram(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramAvOpenhomeOrgExakt1C sync(*this);
    BeginReprogram(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginReprogram(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogram, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogram->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1C::EndReprogram(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1C::SyncReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri)
{
    SyncReprogramFallbackAvOpenhomeOrgExakt1C sync(*this);
    BeginReprogramFallback(aDeviceId, aFileUri, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgExakt1C::BeginReprogramFallback(const Brx& aDeviceId, const Brx& aFileUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReprogramFallback, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionReprogramFallback->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aFileUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgExakt1C::EndReprogramFallback(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgExakt1C::SetPropertyDeviceListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt1C::SetPropertyConnectionStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectionStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgExakt1C::PropertyDeviceList(Brhz& aDeviceList) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aDeviceList.Set(iDeviceList->Value());
}

void CpProxyAvOpenhomeOrgExakt1C::PropertyConnectionStatus(Brhz& aConnectionStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aConnectionStatus.Set(iConnectionStatus->Value());
}

void CpProxyAvOpenhomeOrgExakt1C::DeviceListPropertyChanged()
{
    ReportEvent(iDeviceListChanged);
}

void CpProxyAvOpenhomeOrgExakt1C::ConnectionStatusPropertyChanged()
{
    ReportEvent(iConnectionStatusChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgExakt1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgExakt1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgExakt1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncDeviceList(THandle aHandle, char** aList)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginDeviceList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceList(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndDeviceList(THandle aHandle, OhNetHandleAsync aAsync, char** aList)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncDeviceSettings(THandle aHandle, const char* aDeviceId, char** aSettings)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginDeviceSettings(THandle aHandle, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceSettings(buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndDeviceSettings(THandle aHandle, OhNetHandleAsync aAsync, char** aSettings)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginConnectionStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginConnectionStatus(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndConnectionStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aConnectionStatus)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginSet(THandle aHandle, const char* aDeviceId, uint32_t aBankId, const char* aFileUri, uint32_t aMute, uint32_t aPersist, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSet(buf_aDeviceId, aBankId, buf_aFileUri, (aMute==0? false : true), (aPersist==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndSet(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginReprogram(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogram(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndReprogram(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1SyncReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1BeginReprogramFallback(THandle aHandle, const char* aDeviceId, const char* aFileUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    Brh buf_aFileUri(aFileUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReprogramFallback(buf_aDeviceId, buf_aFileUri, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgExakt1EndReprogramFallback(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgExakt1SetPropertyDeviceListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceListChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt1SetPropertyConnectionStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectionStatusChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgExakt1PropertyDeviceList(THandle aHandle, char** aDeviceList)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceList;
    proxyC->PropertyDeviceList(buf_aDeviceList);
    *aDeviceList = buf_aDeviceList.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgExakt1PropertyConnectionStatus(THandle aHandle, char** aConnectionStatus)
{
    CpProxyAvOpenhomeOrgExakt1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgExakt1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aConnectionStatus;
    proxyC->PropertyConnectionStatus(buf_aConnectionStatus);
    *aConnectionStatus = buf_aConnectionStatus.Transfer();
}

