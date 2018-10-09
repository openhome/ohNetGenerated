#include "CpAvOpenhomeOrgConfigApp1.h"
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

class CpProxyAvOpenhomeOrgConfigApp1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgConfigApp1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgConfigApp1C();
    //CpProxyAvOpenhomeOrgConfigApp1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgConfigApp1*>(iProxy); }

    void SyncGetKeys(Brh& aKeys);
    void BeginGetKeys(FunctorAsync& aFunctor);
    void EndGetKeys(IAsync& aAsync, Brh& aKeys);

    void SyncSetValue(const Brx& aKey, const Brx& aValue);
    void BeginSetValue(const Brx& aKey, const Brx& aValue, FunctorAsync& aFunctor);
    void EndSetValue(IAsync& aAsync);

    void SyncGetValue(const Brx& aKey, Brh& aValue);
    void BeginGetValue(const Brx& aKey, FunctorAsync& aFunctor);
    void EndGetValue(IAsync& aAsync, Brh& aValue);

    void SyncResetAll();
    void BeginResetAll(FunctorAsync& aFunctor);
    void EndResetAll(IAsync& aAsync);

    void SetPropertyKeysChanged(Functor& aFunctor);

    void PropertyKeys(Brhz& aKeys) const;
private:
    void KeysPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetKeys;
    Action* iActionSetValue;
    Action* iActionGetValue;
    Action* iActionResetAll;
    PropertyString* iKeys;
    Functor iKeysChanged;
};


class SyncGetKeysAvOpenhomeOrgConfigApp1C : public SyncProxyAction
{
public:
    SyncGetKeysAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy, Brh& aKeys);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetKeysAvOpenhomeOrgConfigApp1C() {};
private:
    CpProxyAvOpenhomeOrgConfigApp1C& iService;
    Brh& iKeys;
};

SyncGetKeysAvOpenhomeOrgConfigApp1C::SyncGetKeysAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy, Brh& aKeys)
    : iService(aProxy)
    , iKeys(aKeys)
{
}

void SyncGetKeysAvOpenhomeOrgConfigApp1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetKeys(aAsync, iKeys);
}


class SyncSetValueAvOpenhomeOrgConfigApp1C : public SyncProxyAction
{
public:
    SyncSetValueAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetValueAvOpenhomeOrgConfigApp1C() {};
private:
    CpProxyAvOpenhomeOrgConfigApp1C& iService;
};

SyncSetValueAvOpenhomeOrgConfigApp1C::SyncSetValueAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetValueAvOpenhomeOrgConfigApp1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetValue(aAsync);
}


class SyncGetValueAvOpenhomeOrgConfigApp1C : public SyncProxyAction
{
public:
    SyncGetValueAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetValueAvOpenhomeOrgConfigApp1C() {};
private:
    CpProxyAvOpenhomeOrgConfigApp1C& iService;
    Brh& iValue;
};

SyncGetValueAvOpenhomeOrgConfigApp1C::SyncGetValueAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncGetValueAvOpenhomeOrgConfigApp1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetValue(aAsync, iValue);
}


class SyncResetAllAvOpenhomeOrgConfigApp1C : public SyncProxyAction
{
public:
    SyncResetAllAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncResetAllAvOpenhomeOrgConfigApp1C() {};
private:
    CpProxyAvOpenhomeOrgConfigApp1C& iService;
};

SyncResetAllAvOpenhomeOrgConfigApp1C::SyncResetAllAvOpenhomeOrgConfigApp1C(CpProxyAvOpenhomeOrgConfigApp1C& aProxy)
    : iService(aProxy)
{
}

void SyncResetAllAvOpenhomeOrgConfigApp1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndResetAll(aAsync);
}

CpProxyAvOpenhomeOrgConfigApp1C::CpProxyAvOpenhomeOrgConfigApp1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "ConfigApp", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetKeys = new Action("GetKeys");
    param = new OpenHome::Net::ParameterString("Keys");
    iActionGetKeys->AddOutputParameter(param);

    iActionSetValue = new Action("SetValue");
    param = new OpenHome::Net::ParameterString("Key");
    iActionSetValue->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Value");
    iActionSetValue->AddInputParameter(param);

    iActionGetValue = new Action("GetValue");
    param = new OpenHome::Net::ParameterString("Key");
    iActionGetValue->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Value");
    iActionGetValue->AddOutputParameter(param);

    iActionResetAll = new Action("ResetAll");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgConfigApp1C::KeysPropertyChanged);
    iKeys = new PropertyString("Keys", functor);
    AddProperty(iKeys);
}

CpProxyAvOpenhomeOrgConfigApp1C::~CpProxyAvOpenhomeOrgConfigApp1C()
{
    DestroyService();
    delete iActionGetKeys;
    delete iActionSetValue;
    delete iActionGetValue;
    delete iActionResetAll;
}

void CpProxyAvOpenhomeOrgConfigApp1C::SyncGetKeys(Brh& aKeys)
{
    SyncGetKeysAvOpenhomeOrgConfigApp1C sync(*this, aKeys);
    BeginGetKeys(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1C::BeginGetKeys(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetKeys, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetKeys->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1C::EndGetKeys(IAsync& aAsync, Brh& aKeys)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetKeys"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aKeys);
}

void CpProxyAvOpenhomeOrgConfigApp1C::SyncSetValue(const Brx& aKey, const Brx& aValue)
{
    SyncSetValueAvOpenhomeOrgConfigApp1C sync(*this);
    BeginSetValue(aKey, aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1C::BeginSetValue(const Brx& aKey, const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetValue->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1C::EndSetValue(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetValue"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgConfigApp1C::SyncGetValue(const Brx& aKey, Brh& aValue)
{
    SyncGetValueAvOpenhomeOrgConfigApp1C sync(*this, aValue);
    BeginGetValue(aKey, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1C::BeginGetValue(const Brx& aKey, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetValue, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetValue->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aKey));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetValue->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1C::EndGetValue(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetValue"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgConfigApp1C::SyncResetAll()
{
    SyncResetAllAvOpenhomeOrgConfigApp1C sync(*this);
    BeginResetAll(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgConfigApp1C::BeginResetAll(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionResetAll, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgConfigApp1C::EndResetAll(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ResetAll"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgConfigApp1C::SetPropertyKeysChanged(Functor& aFunctor)
{
    iLock.Wait();
    iKeysChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgConfigApp1C::PropertyKeys(Brhz& aKeys) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aKeys.Set(iKeys->Value());
}

void CpProxyAvOpenhomeOrgConfigApp1C::KeysPropertyChanged()
{
    ReportEvent(iKeysChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgConfigApp1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgConfigApp1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1SyncGetKeys(THandle aHandle, char** aKeys)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aKeys;
    int32_t err = 0;
    try {
        proxyC->SyncGetKeys(buf_aKeys);
        *aKeys = buf_aKeys.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aKeys = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1BeginGetKeys(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetKeys(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1EndGetKeys(THandle aHandle, OhNetHandleAsync aAsync, char** aKeys)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aKeys;
    *aKeys = NULL;
    try {
        proxyC->EndGetKeys(*async, buf_aKeys);
        *aKeys = buf_aKeys.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1SyncSetValue(THandle aHandle, const char* aKey, const char* aValue)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aKey(aKey);
    Brh buf_aValue(aValue);
    int32_t err = 0;
    try {
        proxyC->SyncSetValue(buf_aKey, buf_aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1BeginSetValue(THandle aHandle, const char* aKey, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aKey(aKey);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetValue(buf_aKey, buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1EndSetValue(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetValue(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1SyncGetValue(THandle aHandle, const char* aKey, char** aValue)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aKey(aKey);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncGetValue(buf_aKey, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1BeginGetValue(THandle aHandle, const char* aKey, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aKey(aKey);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetValue(buf_aKey, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1EndGetValue(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndGetValue(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1SyncResetAll(THandle aHandle)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncResetAll();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1BeginResetAll(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginResetAll(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1EndResetAll(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndResetAll(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgConfigApp1SetPropertyKeysChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyKeysChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgConfigApp1PropertyKeys(THandle aHandle, char** aKeys)
{
    CpProxyAvOpenhomeOrgConfigApp1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgConfigApp1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aKeys;
    try {
        proxyC->PropertyKeys(buf_aKeys);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aKeys = buf_aKeys.Transfer();
    return 0;
}

