#include "CpLinnCoUkCloud1.h"
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

class CpProxyLinnCoUkCloud1C : public CpProxyC
{
public:
    CpProxyLinnCoUkCloud1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkCloud1C();
    //CpProxyLinnCoUkCloud1* Proxy() { return static_cast<CpProxyLinnCoUkCloud1*>(iProxy); }

    void SyncSetAssociated(const Brx& aTokenEncrypted, TBool aAssociated);
    void BeginSetAssociated(const Brx& aTokenEncrypted, TBool aAssociated, FunctorAsync& aFunctor);
    void EndSetAssociated(IAsync& aAsync);

    void SyncSetControlEnabled(TBool aEnabled);
    void BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor);
    void EndSetControlEnabled(IAsync& aAsync);

    void SyncGetControlEnabled(TBool& aEnabled);
    void BeginGetControlEnabled(FunctorAsync& aFunctor);
    void EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled);

    void SyncGetConnected(TBool& aConnected);
    void BeginGetConnected(FunctorAsync& aFunctor);
    void EndGetConnected(IAsync& aAsync, TBool& aConnected);

    void SyncGetPublicKey(Brh& aPublicKey);
    void BeginGetPublicKey(FunctorAsync& aFunctor);
    void EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey);

    void SetPropertyAssociationStatusChanged(Functor& aFunctor);
    void SetPropertyControlEnabledChanged(Functor& aFunctor);
    void SetPropertyConnectedChanged(Functor& aFunctor);
    void SetPropertyPublicKeyChanged(Functor& aFunctor);

    void PropertyAssociationStatus(Brhz& aAssociationStatus) const;
    void PropertyControlEnabled(TBool& aControlEnabled) const;
    void PropertyConnected(TBool& aConnected) const;
    void PropertyPublicKey(Brhz& aPublicKey) const;
private:
    void AssociationStatusPropertyChanged();
    void ControlEnabledPropertyChanged();
    void ConnectedPropertyChanged();
    void PublicKeyPropertyChanged();
private:
    Mutex iLock;
    Action* iActionSetAssociated;
    Action* iActionSetControlEnabled;
    Action* iActionGetControlEnabled;
    Action* iActionGetConnected;
    Action* iActionGetPublicKey;
    PropertyString* iAssociationStatus;
    PropertyBool* iControlEnabled;
    PropertyBool* iConnected;
    PropertyString* iPublicKey;
    Functor iAssociationStatusChanged;
    Functor iControlEnabledChanged;
    Functor iConnectedChanged;
    Functor iPublicKeyChanged;
};


class SyncSetAssociatedLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncSetAssociatedLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociatedLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
};

SyncSetAssociatedLinnCoUkCloud1C::SyncSetAssociatedLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociatedLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociated(aAsync);
}


class SyncSetControlEnabledLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncSetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetControlEnabledLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
};

SyncSetControlEnabledLinnCoUkCloud1C::SyncSetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetControlEnabledLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetControlEnabled(aAsync);
}


class SyncGetControlEnabledLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncGetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aEnabled);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetControlEnabledLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
    TBool& iEnabled;
};

SyncGetControlEnabledLinnCoUkCloud1C::SyncGetControlEnabledLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aEnabled)
    : iService(aProxy)
    , iEnabled(aEnabled)
{
}

void SyncGetControlEnabledLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetControlEnabled(aAsync, iEnabled);
}


class SyncGetConnectedLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncGetConnectedLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aConnected);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetConnectedLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
    TBool& iConnected;
};

SyncGetConnectedLinnCoUkCloud1C::SyncGetConnectedLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, TBool& aConnected)
    : iService(aProxy)
    , iConnected(aConnected)
{
}

void SyncGetConnectedLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetConnected(aAsync, iConnected);
}


class SyncGetPublicKeyLinnCoUkCloud1C : public SyncProxyAction
{
public:
    SyncGetPublicKeyLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, Brh& aPublicKey);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPublicKeyLinnCoUkCloud1C() {};
private:
    CpProxyLinnCoUkCloud1C& iService;
    Brh& iPublicKey;
};

SyncGetPublicKeyLinnCoUkCloud1C::SyncGetPublicKeyLinnCoUkCloud1C(CpProxyLinnCoUkCloud1C& aProxy, Brh& aPublicKey)
    : iService(aProxy)
    , iPublicKey(aPublicKey)
{
}

void SyncGetPublicKeyLinnCoUkCloud1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPublicKey(aAsync, iPublicKey);
}

CpProxyLinnCoUkCloud1C::CpProxyLinnCoUkCloud1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Cloud", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionSetAssociated = new Action("SetAssociated");
    param = new OpenHome::Net::ParameterString("TokenEncrypted");
    iActionSetAssociated->AddInputParameter(param);
    param = new OpenHome::Net::ParameterBool("Associated");
    iActionSetAssociated->AddInputParameter(param);

    iActionSetControlEnabled = new Action("SetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionSetControlEnabled->AddInputParameter(param);

    iActionGetControlEnabled = new Action("GetControlEnabled");
    param = new OpenHome::Net::ParameterBool("Enabled");
    iActionGetControlEnabled->AddOutputParameter(param);

    iActionGetConnected = new Action("GetConnected");
    param = new OpenHome::Net::ParameterBool("Connected");
    iActionGetConnected->AddOutputParameter(param);

    iActionGetPublicKey = new Action("GetPublicKey");
    param = new OpenHome::Net::ParameterString("PublicKey");
    iActionGetPublicKey->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1C::AssociationStatusPropertyChanged);
    iAssociationStatus = new PropertyString("AssociationStatus", functor);
    AddProperty(iAssociationStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1C::ControlEnabledPropertyChanged);
    iControlEnabled = new PropertyBool("ControlEnabled", functor);
    AddProperty(iControlEnabled);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1C::ConnectedPropertyChanged);
    iConnected = new PropertyBool("Connected", functor);
    AddProperty(iConnected);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkCloud1C::PublicKeyPropertyChanged);
    iPublicKey = new PropertyString("PublicKey", functor);
    AddProperty(iPublicKey);
}

CpProxyLinnCoUkCloud1C::~CpProxyLinnCoUkCloud1C()
{
    DestroyService();
    delete iActionSetAssociated;
    delete iActionSetControlEnabled;
    delete iActionGetControlEnabled;
    delete iActionGetConnected;
    delete iActionGetPublicKey;
}

void CpProxyLinnCoUkCloud1C::SyncSetAssociated(const Brx& aTokenEncrypted, TBool aAssociated)
{
    SyncSetAssociatedLinnCoUkCloud1C sync(*this);
    BeginSetAssociated(aTokenEncrypted, aAssociated, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginSetAssociated(const Brx& aTokenEncrypted, TBool aAssociated, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAssociated, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociated->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTokenEncrypted));
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aAssociated));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndSetAssociated(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociated"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1C::SyncSetControlEnabled(TBool aEnabled)
{
    SyncSetControlEnabledLinnCoUkCloud1C sync(*this);
    BeginSetControlEnabled(aEnabled, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginSetControlEnabled(TBool aEnabled, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetControlEnabled, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetControlEnabled->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aEnabled));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndSetControlEnabled(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkCloud1C::SyncGetControlEnabled(TBool& aEnabled)
{
    SyncGetControlEnabledLinnCoUkCloud1C sync(*this, aEnabled);
    BeginGetControlEnabled(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginGetControlEnabled(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetControlEnabled, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetControlEnabled->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndGetControlEnabled(IAsync& aAsync, TBool& aEnabled)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetControlEnabled"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aEnabled = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1C::SyncGetConnected(TBool& aConnected)
{
    SyncGetConnectedLinnCoUkCloud1C sync(*this, aConnected);
    BeginGetConnected(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginGetConnected(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetConnected, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetConnected->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndGetConnected(IAsync& aAsync, TBool& aConnected)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetConnected"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aConnected = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkCloud1C::SyncGetPublicKey(Brh& aPublicKey)
{
    SyncGetPublicKeyLinnCoUkCloud1C sync(*this, aPublicKey);
    BeginGetPublicKey(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkCloud1C::BeginGetPublicKey(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPublicKey, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPublicKey->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkCloud1C::EndGetPublicKey(IAsync& aAsync, Brh& aPublicKey)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPublicKey"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aPublicKey);
}

void CpProxyLinnCoUkCloud1C::SetPropertyAssociationStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAssociationStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud1C::SetPropertyControlEnabledChanged(Functor& aFunctor)
{
    iLock.Wait();
    iControlEnabledChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud1C::SetPropertyConnectedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iConnectedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud1C::SetPropertyPublicKeyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPublicKeyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkCloud1C::PropertyAssociationStatus(Brhz& aAssociationStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAssociationStatus.Set(iAssociationStatus->Value());
}

void CpProxyLinnCoUkCloud1C::PropertyControlEnabled(TBool& aControlEnabled) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aControlEnabled = iControlEnabled->Value();
}

void CpProxyLinnCoUkCloud1C::PropertyConnected(TBool& aConnected) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aConnected = iConnected->Value();
}

void CpProxyLinnCoUkCloud1C::PropertyPublicKey(Brhz& aPublicKey) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPublicKey.Set(iPublicKey->Value());
}

void CpProxyLinnCoUkCloud1C::AssociationStatusPropertyChanged()
{
    ReportEvent(iAssociationStatusChanged);
}

void CpProxyLinnCoUkCloud1C::ControlEnabledPropertyChanged()
{
    ReportEvent(iControlEnabledChanged);
}

void CpProxyLinnCoUkCloud1C::ConnectedPropertyChanged()
{
    ReportEvent(iConnectedChanged);
}

void CpProxyLinnCoUkCloud1C::PublicKeyPropertyChanged()
{
    ReportEvent(iPublicKeyChanged);
}


THandle STDCALL CpProxyLinnCoUkCloud1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkCloud1C(aDevice);
}

void STDCALL CpProxyLinnCoUkCloud1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncSetAssociated(THandle aHandle, const char* aTokenEncrypted, uint32_t aAssociated)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTokenEncrypted(aTokenEncrypted);
    int32_t err = 0;
    try {
        proxyC->SyncSetAssociated(buf_aTokenEncrypted, (aAssociated==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginSetAssociated(THandle aHandle, const char* aTokenEncrypted, uint32_t aAssociated, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTokenEncrypted(aTokenEncrypted);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAssociated(buf_aTokenEncrypted, (aAssociated==0? false : true), functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndSetAssociated(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetAssociated(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncSetControlEnabled(THandle aHandle, uint32_t aEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetControlEnabled((aEnabled==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginSetControlEnabled(THandle aHandle, uint32_t aEnabled, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetControlEnabled((aEnabled==0? false : true), functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndSetControlEnabled(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetControlEnabled(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncGetControlEnabled(THandle aHandle, uint32_t* aEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Enabled;
    int32_t err = 0;
    try {
        proxyC->SyncGetControlEnabled(Enabled);
        *aEnabled = Enabled? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aEnabled = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginGetControlEnabled(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetControlEnabled(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndGetControlEnabled(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aEnabled)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Enabled;
    try {
        proxyC->EndGetControlEnabled(*async, Enabled);
        *aEnabled = Enabled? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncGetConnected(THandle aHandle, uint32_t* aConnected)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Connected;
    int32_t err = 0;
    try {
        proxyC->SyncGetConnected(Connected);
        *aConnected = Connected? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aConnected = false;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginGetConnected(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetConnected(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndGetConnected(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aConnected)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Connected;
    try {
        proxyC->EndGetConnected(*async, Connected);
        *aConnected = Connected? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkCloud1SyncGetPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aPublicKey;
    int32_t err = 0;
    try {
        proxyC->SyncGetPublicKey(buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aPublicKey = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1BeginGetPublicKey(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPublicKey(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1EndGetPublicKey(THandle aHandle, OhNetHandleAsync aAsync, char** aPublicKey)
{
    int32_t err = 0;
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aPublicKey;
    *aPublicKey = NULL;
    try {
        proxyC->EndGetPublicKey(*async, buf_aPublicKey);
        *aPublicKey = buf_aPublicKey.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkCloud1SetPropertyAssociationStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAssociationStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud1SetPropertyControlEnabledChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyControlEnabledChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud1SetPropertyConnectedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyConnectedChanged(functor);
}

void STDCALL CpProxyLinnCoUkCloud1SetPropertyPublicKeyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPublicKeyChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkCloud1PropertyAssociationStatus(THandle aHandle, char** aAssociationStatus)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAssociationStatus;
    try {
        proxyC->PropertyAssociationStatus(buf_aAssociationStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAssociationStatus = buf_aAssociationStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud1PropertyControlEnabled(THandle aHandle, uint32_t* aControlEnabled)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool ControlEnabled;
    try {
        proxyC->PropertyControlEnabled(ControlEnabled);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aControlEnabled = ControlEnabled? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud1PropertyConnected(THandle aHandle, uint32_t* aConnected)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Connected;
    try {
        proxyC->PropertyConnected(Connected);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aConnected = Connected? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkCloud1PropertyPublicKey(THandle aHandle, char** aPublicKey)
{
    CpProxyLinnCoUkCloud1C* proxyC = reinterpret_cast<CpProxyLinnCoUkCloud1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPublicKey;
    try {
        proxyC->PropertyPublicKey(buf_aPublicKey);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPublicKey = buf_aPublicKey.Transfer();
    return 0;
}

