#include "CpLinnCoUkZones1.h"
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

class CpProxyLinnCoUkZones1C : public CpProxyC
{
public:
    CpProxyLinnCoUkZones1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkZones1C();
    //CpProxyLinnCoUkZones1* Proxy() { return static_cast<CpProxyLinnCoUkZones1*>(iProxy); }

    void SyncGetInputs(Brh& aInputs);
    void BeginGetInputs(FunctorAsync& aFunctor);
    void EndGetInputs(IAsync& aAsync, Brh& aInputs);

    void SyncGetOutputs(Brh& aOutputs);
    void BeginGetOutputs(FunctorAsync& aFunctor);
    void EndGetOutputs(IAsync& aAsync, Brh& aOutputs);

    void SyncGetMappings(Brh& aMappings);
    void BeginGetMappings(FunctorAsync& aFunctor);
    void EndGetMappings(IAsync& aAsync, Brh& aMappings);

    void SyncSetMappings(const Brx& aMappings);
    void BeginSetMappings(const Brx& aMappings, FunctorAsync& aFunctor);
    void EndSetMappings(IAsync& aAsync);

    void SyncSetMapping(const Brx& aOutput, const Brx& aInput);
    void BeginSetMapping(const Brx& aOutput, const Brx& aInput, FunctorAsync& aFunctor);
    void EndSetMapping(IAsync& aAsync);

    void SetPropertyInputsChanged(Functor& aFunctor);
    void SetPropertyOutputsChanged(Functor& aFunctor);
    void SetPropertyMappingsChanged(Functor& aFunctor);

    void PropertyInputs(Brhz& aInputs) const;
    void PropertyOutputs(Brhz& aOutputs) const;
    void PropertyMappings(Brhz& aMappings) const;
private:
    void InputsPropertyChanged();
    void OutputsPropertyChanged();
    void MappingsPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetInputs;
    Action* iActionGetOutputs;
    Action* iActionGetMappings;
    Action* iActionSetMappings;
    Action* iActionSetMapping;
    PropertyString* iInputs;
    PropertyString* iOutputs;
    PropertyString* iMappings;
    Functor iInputsChanged;
    Functor iOutputsChanged;
    Functor iMappingsChanged;
};


class SyncGetInputsLinnCoUkZones1C : public SyncProxyAction
{
public:
    SyncGetInputsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aInputs);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetInputsLinnCoUkZones1C() {};
private:
    CpProxyLinnCoUkZones1C& iService;
    Brh& iInputs;
};

SyncGetInputsLinnCoUkZones1C::SyncGetInputsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aInputs)
    : iService(aProxy)
    , iInputs(aInputs)
{
}

void SyncGetInputsLinnCoUkZones1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetInputs(aAsync, iInputs);
}


class SyncGetOutputsLinnCoUkZones1C : public SyncProxyAction
{
public:
    SyncGetOutputsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aOutputs);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetOutputsLinnCoUkZones1C() {};
private:
    CpProxyLinnCoUkZones1C& iService;
    Brh& iOutputs;
};

SyncGetOutputsLinnCoUkZones1C::SyncGetOutputsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aOutputs)
    : iService(aProxy)
    , iOutputs(aOutputs)
{
}

void SyncGetOutputsLinnCoUkZones1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetOutputs(aAsync, iOutputs);
}


class SyncGetMappingsLinnCoUkZones1C : public SyncProxyAction
{
public:
    SyncGetMappingsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aMappings);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetMappingsLinnCoUkZones1C() {};
private:
    CpProxyLinnCoUkZones1C& iService;
    Brh& iMappings;
};

SyncGetMappingsLinnCoUkZones1C::SyncGetMappingsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy, Brh& aMappings)
    : iService(aProxy)
    , iMappings(aMappings)
{
}

void SyncGetMappingsLinnCoUkZones1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetMappings(aAsync, iMappings);
}


class SyncSetMappingsLinnCoUkZones1C : public SyncProxyAction
{
public:
    SyncSetMappingsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMappingsLinnCoUkZones1C() {};
private:
    CpProxyLinnCoUkZones1C& iService;
};

SyncSetMappingsLinnCoUkZones1C::SyncSetMappingsLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetMappingsLinnCoUkZones1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMappings(aAsync);
}


class SyncSetMappingLinnCoUkZones1C : public SyncProxyAction
{
public:
    SyncSetMappingLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetMappingLinnCoUkZones1C() {};
private:
    CpProxyLinnCoUkZones1C& iService;
};

SyncSetMappingLinnCoUkZones1C::SyncSetMappingLinnCoUkZones1C(CpProxyLinnCoUkZones1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetMappingLinnCoUkZones1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetMapping(aAsync);
}

CpProxyLinnCoUkZones1C::CpProxyLinnCoUkZones1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Zones", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetInputs = new Action("GetInputs");
    param = new OpenHome::Net::ParameterString("Inputs");
    iActionGetInputs->AddOutputParameter(param);

    iActionGetOutputs = new Action("GetOutputs");
    param = new OpenHome::Net::ParameterString("Outputs");
    iActionGetOutputs->AddOutputParameter(param);

    iActionGetMappings = new Action("GetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionGetMappings->AddOutputParameter(param);

    iActionSetMappings = new Action("SetMappings");
    param = new OpenHome::Net::ParameterString("Mappings");
    iActionSetMappings->AddInputParameter(param);

    iActionSetMapping = new Action("SetMapping");
    param = new OpenHome::Net::ParameterString("Output");
    iActionSetMapping->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("Input");
    iActionSetMapping->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1C::InputsPropertyChanged);
    iInputs = new PropertyString("Inputs", functor);
    AddProperty(iInputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1C::OutputsPropertyChanged);
    iOutputs = new PropertyString("Outputs", functor);
    AddProperty(iOutputs);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZones1C::MappingsPropertyChanged);
    iMappings = new PropertyString("Mappings", functor);
    AddProperty(iMappings);
}

CpProxyLinnCoUkZones1C::~CpProxyLinnCoUkZones1C()
{
    DestroyService();
    delete iActionGetInputs;
    delete iActionGetOutputs;
    delete iActionGetMappings;
    delete iActionSetMappings;
    delete iActionSetMapping;
}

void CpProxyLinnCoUkZones1C::SyncGetInputs(Brh& aInputs)
{
    SyncGetInputsLinnCoUkZones1C sync(*this, aInputs);
    BeginGetInputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1C::BeginGetInputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetInputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetInputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1C::EndGetInputs(IAsync& aAsync, Brh& aInputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetInputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInputs);
}

void CpProxyLinnCoUkZones1C::SyncGetOutputs(Brh& aOutputs)
{
    SyncGetOutputsLinnCoUkZones1C sync(*this, aOutputs);
    BeginGetOutputs(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1C::BeginGetOutputs(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetOutputs, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetOutputs->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1C::EndGetOutputs(IAsync& aAsync, Brh& aOutputs)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetOutputs"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aOutputs);
}

void CpProxyLinnCoUkZones1C::SyncGetMappings(Brh& aMappings)
{
    SyncGetMappingsLinnCoUkZones1C sync(*this, aMappings);
    BeginGetMappings(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1C::BeginGetMappings(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetMappings, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetMappings->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1C::EndGetMappings(IAsync& aAsync, Brh& aMappings)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aMappings);
}

void CpProxyLinnCoUkZones1C::SyncSetMappings(const Brx& aMappings)
{
    SyncSetMappingsLinnCoUkZones1C sync(*this);
    BeginSetMappings(aMappings, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1C::BeginSetMappings(const Brx& aMappings, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetMappings, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMappings->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aMappings));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1C::EndSetMappings(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMappings"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkZones1C::SyncSetMapping(const Brx& aOutput, const Brx& aInput)
{
    SyncSetMappingLinnCoUkZones1C sync(*this);
    BeginSetMapping(aOutput, aInput, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZones1C::BeginSetMapping(const Brx& aOutput, const Brx& aInput, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetMapping, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetMapping->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aOutput));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aInput));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZones1C::EndSetMapping(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetMapping"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkZones1C::SetPropertyInputsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iInputsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkZones1C::SetPropertyOutputsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iOutputsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkZones1C::SetPropertyMappingsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMappingsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkZones1C::PropertyInputs(Brhz& aInputs) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aInputs.Set(iInputs->Value());
}

void CpProxyLinnCoUkZones1C::PropertyOutputs(Brhz& aOutputs) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aOutputs.Set(iOutputs->Value());
}

void CpProxyLinnCoUkZones1C::PropertyMappings(Brhz& aMappings) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMappings.Set(iMappings->Value());
}

void CpProxyLinnCoUkZones1C::InputsPropertyChanged()
{
    ReportEvent(iInputsChanged);
}

void CpProxyLinnCoUkZones1C::OutputsPropertyChanged()
{
    ReportEvent(iOutputsChanged);
}

void CpProxyLinnCoUkZones1C::MappingsPropertyChanged()
{
    ReportEvent(iMappingsChanged);
}


THandle STDCALL CpProxyLinnCoUkZones1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkZones1C(aDevice);
}

void STDCALL CpProxyLinnCoUkZones1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkZones1SyncGetInputs(THandle aHandle, char** aInputs)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aInputs;
    int32_t err = 0;
    try {
        proxyC->SyncGetInputs(buf_aInputs);
        *aInputs = buf_aInputs.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aInputs = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1BeginGetInputs(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetInputs(functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1EndGetInputs(THandle aHandle, OhNetHandleAsync aAsync, char** aInputs)
{
    int32_t err = 0;
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aInputs;
    *aInputs = NULL;
    try {
        proxyC->EndGetInputs(*async, buf_aInputs);
        *aInputs = buf_aInputs.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkZones1SyncGetOutputs(THandle aHandle, char** aOutputs)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aOutputs;
    int32_t err = 0;
    try {
        proxyC->SyncGetOutputs(buf_aOutputs);
        *aOutputs = buf_aOutputs.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aOutputs = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1BeginGetOutputs(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetOutputs(functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1EndGetOutputs(THandle aHandle, OhNetHandleAsync aAsync, char** aOutputs)
{
    int32_t err = 0;
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aOutputs;
    *aOutputs = NULL;
    try {
        proxyC->EndGetOutputs(*async, buf_aOutputs);
        *aOutputs = buf_aOutputs.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkZones1SyncGetMappings(THandle aHandle, char** aMappings)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMappings;
    int32_t err = 0;
    try {
        proxyC->SyncGetMappings(buf_aMappings);
        *aMappings = buf_aMappings.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aMappings = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1BeginGetMappings(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetMappings(functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1EndGetMappings(THandle aHandle, OhNetHandleAsync aAsync, char** aMappings)
{
    int32_t err = 0;
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aMappings;
    *aMappings = NULL;
    try {
        proxyC->EndGetMappings(*async, buf_aMappings);
        *aMappings = buf_aMappings.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkZones1SyncSetMappings(THandle aHandle, const char* aMappings)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMappings(aMappings);
    int32_t err = 0;
    try {
        proxyC->SyncSetMappings(buf_aMappings);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1BeginSetMappings(THandle aHandle, const char* aMappings, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aMappings(aMappings);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetMappings(buf_aMappings, functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1EndSetMappings(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetMappings(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkZones1SyncSetMapping(THandle aHandle, const char* aOutput, const char* aInput)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aOutput(aOutput);
    Brh buf_aInput(aInput);
    int32_t err = 0;
    try {
        proxyC->SyncSetMapping(buf_aOutput, buf_aInput);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1BeginSetMapping(THandle aHandle, const char* aOutput, const char* aInput, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aOutput(aOutput);
    Brh buf_aInput(aInput);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetMapping(buf_aOutput, buf_aInput, functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1EndSetMapping(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetMapping(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZones1SetPropertyInputsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyInputsChanged(functor);
}

void STDCALL CpProxyLinnCoUkZones1SetPropertyOutputsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyOutputsChanged(functor);
}

void STDCALL CpProxyLinnCoUkZones1SetPropertyMappingsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMappingsChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkZones1PropertyInputs(THandle aHandle, char** aInputs)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aInputs;
    try {
        proxyC->PropertyInputs(buf_aInputs);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aInputs = buf_aInputs.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkZones1PropertyOutputs(THandle aHandle, char** aOutputs)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aOutputs;
    try {
        proxyC->PropertyOutputs(buf_aOutputs);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aOutputs = buf_aOutputs.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkZones1PropertyMappings(THandle aHandle, char** aMappings)
{
    CpProxyLinnCoUkZones1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZones1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMappings;
    try {
        proxyC->PropertyMappings(buf_aMappings);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMappings = buf_aMappings.Transfer();
    return 0;
}

