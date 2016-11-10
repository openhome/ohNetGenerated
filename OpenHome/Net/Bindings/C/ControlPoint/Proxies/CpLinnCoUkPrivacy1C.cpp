#include "CpLinnCoUkPrivacy1.h"
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

class CpProxyLinnCoUkPrivacy1C : public CpProxyC
{
public:
    CpProxyLinnCoUkPrivacy1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkPrivacy1C();
    //CpProxyLinnCoUkPrivacy1* Proxy() { return static_cast<CpProxyLinnCoUkPrivacy1*>(iProxy); }

    void SyncGetPolicyVersion(TUint& aVersion);
    void BeginGetPolicyVersion(FunctorAsync& aFunctor);
    void EndGetPolicyVersion(IAsync& aAsync, TUint& aVersion);

    void SyncGetPolicyAgreed(TUint& aVersion);
    void BeginGetPolicyAgreed(FunctorAsync& aFunctor);
    void EndGetPolicyAgreed(IAsync& aAsync, TUint& aVersion);

    void SyncGetPolicyDetails(Brh& aDetails);
    void BeginGetPolicyDetails(FunctorAsync& aFunctor);
    void EndGetPolicyDetails(IAsync& aAsync, Brh& aDetails);

    void SyncSetPolicyDetails(const Brx& aDetails);
    void BeginSetPolicyDetails(const Brx& aDetails, FunctorAsync& aFunctor);
    void EndSetPolicyDetails(IAsync& aAsync);

    void SetPropertyPolicyVersionChanged(Functor& aFunctor);
    void SetPropertyPolicyAgreedChanged(Functor& aFunctor);
    void SetPropertyPolicyDetailsChanged(Functor& aFunctor);

    void PropertyPolicyVersion(TUint& aPolicyVersion) const;
    void PropertyPolicyAgreed(TUint& aPolicyAgreed) const;
    void PropertyPolicyDetails(Brhz& aPolicyDetails) const;
private:
    void PolicyVersionPropertyChanged();
    void PolicyAgreedPropertyChanged();
    void PolicyDetailsPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetPolicyVersion;
    Action* iActionGetPolicyAgreed;
    Action* iActionGetPolicyDetails;
    Action* iActionSetPolicyDetails;
    PropertyUint* iPolicyVersion;
    PropertyUint* iPolicyAgreed;
    PropertyString* iPolicyDetails;
    Functor iPolicyVersionChanged;
    Functor iPolicyAgreedChanged;
    Functor iPolicyDetailsChanged;
};


class SyncGetPolicyVersionLinnCoUkPrivacy1C : public SyncProxyAction
{
public:
    SyncGetPolicyVersionLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyVersionLinnCoUkPrivacy1C() {};
private:
    CpProxyLinnCoUkPrivacy1C& iService;
    TUint& iVersion;
};

SyncGetPolicyVersionLinnCoUkPrivacy1C::SyncGetPolicyVersionLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyVersionLinnCoUkPrivacy1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyVersion(aAsync, iVersion);
}


class SyncGetPolicyAgreedLinnCoUkPrivacy1C : public SyncProxyAction
{
public:
    SyncGetPolicyAgreedLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, TUint& aVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyAgreedLinnCoUkPrivacy1C() {};
private:
    CpProxyLinnCoUkPrivacy1C& iService;
    TUint& iVersion;
};

SyncGetPolicyAgreedLinnCoUkPrivacy1C::SyncGetPolicyAgreedLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, TUint& aVersion)
    : iService(aProxy)
    , iVersion(aVersion)
{
}

void SyncGetPolicyAgreedLinnCoUkPrivacy1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyAgreed(aAsync, iVersion);
}


class SyncGetPolicyDetailsLinnCoUkPrivacy1C : public SyncProxyAction
{
public:
    SyncGetPolicyDetailsLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, Brh& aDetails);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetPolicyDetailsLinnCoUkPrivacy1C() {};
private:
    CpProxyLinnCoUkPrivacy1C& iService;
    Brh& iDetails;
};

SyncGetPolicyDetailsLinnCoUkPrivacy1C::SyncGetPolicyDetailsLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy, Brh& aDetails)
    : iService(aProxy)
    , iDetails(aDetails)
{
}

void SyncGetPolicyDetailsLinnCoUkPrivacy1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetPolicyDetails(aAsync, iDetails);
}


class SyncSetPolicyDetailsLinnCoUkPrivacy1C : public SyncProxyAction
{
public:
    SyncSetPolicyDetailsLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetPolicyDetailsLinnCoUkPrivacy1C() {};
private:
    CpProxyLinnCoUkPrivacy1C& iService;
};

SyncSetPolicyDetailsLinnCoUkPrivacy1C::SyncSetPolicyDetailsLinnCoUkPrivacy1C(CpProxyLinnCoUkPrivacy1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetPolicyDetailsLinnCoUkPrivacy1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetPolicyDetails(aAsync);
}

CpProxyLinnCoUkPrivacy1C::CpProxyLinnCoUkPrivacy1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Privacy", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetPolicyVersion = new Action("GetPolicyVersion");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyVersion->AddOutputParameter(param);

    iActionGetPolicyAgreed = new Action("GetPolicyAgreed");
    param = new OpenHome::Net::ParameterUint("Version");
    iActionGetPolicyAgreed->AddOutputParameter(param);

    iActionGetPolicyDetails = new Action("GetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionGetPolicyDetails->AddOutputParameter(param);

    iActionSetPolicyDetails = new Action("SetPolicyDetails");
    param = new OpenHome::Net::ParameterString("Details");
    iActionSetPolicyDetails->AddInputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1C::PolicyVersionPropertyChanged);
    iPolicyVersion = new PropertyUint("PolicyVersion", functor);
    AddProperty(iPolicyVersion);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1C::PolicyAgreedPropertyChanged);
    iPolicyAgreed = new PropertyUint("PolicyAgreed", functor);
    AddProperty(iPolicyAgreed);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkPrivacy1C::PolicyDetailsPropertyChanged);
    iPolicyDetails = new PropertyString("PolicyDetails", functor);
    AddProperty(iPolicyDetails);
}

CpProxyLinnCoUkPrivacy1C::~CpProxyLinnCoUkPrivacy1C()
{
    DestroyService();
    delete iActionGetPolicyVersion;
    delete iActionGetPolicyAgreed;
    delete iActionGetPolicyDetails;
    delete iActionSetPolicyDetails;
}

void CpProxyLinnCoUkPrivacy1C::SyncGetPolicyVersion(TUint& aVersion)
{
    SyncGetPolicyVersionLinnCoUkPrivacy1C sync(*this, aVersion);
    BeginGetPolicyVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1C::BeginGetPolicyVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPolicyVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyVersion->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1C::EndGetPolicyVersion(IAsync& aAsync, TUint& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkPrivacy1C::SyncGetPolicyAgreed(TUint& aVersion)
{
    SyncGetPolicyAgreedLinnCoUkPrivacy1C sync(*this, aVersion);
    BeginGetPolicyAgreed(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1C::BeginGetPolicyAgreed(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPolicyAgreed, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyAgreed->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1C::EndGetPolicyAgreed(IAsync& aAsync, TUint& aVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyAgreed"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aVersion = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkPrivacy1C::SyncGetPolicyDetails(Brh& aDetails)
{
    SyncGetPolicyDetailsLinnCoUkPrivacy1C sync(*this, aDetails);
    BeginGetPolicyDetails(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1C::BeginGetPolicyDetails(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetPolicyDetails, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetPolicyDetails->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1C::EndGetPolicyDetails(IAsync& aAsync, Brh& aDetails)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetPolicyDetails"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDetails);
}

void CpProxyLinnCoUkPrivacy1C::SyncSetPolicyDetails(const Brx& aDetails)
{
    SyncSetPolicyDetailsLinnCoUkPrivacy1C sync(*this);
    BeginSetPolicyDetails(aDetails, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkPrivacy1C::BeginSetPolicyDetails(const Brx& aDetails, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetPolicyDetails, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetPolicyDetails->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDetails));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkPrivacy1C::EndSetPolicyDetails(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetPolicyDetails"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkPrivacy1C::SetPropertyPolicyVersionChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPolicyVersionChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkPrivacy1C::SetPropertyPolicyAgreedChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPolicyAgreedChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkPrivacy1C::SetPropertyPolicyDetailsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iPolicyDetailsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkPrivacy1C::PropertyPolicyVersion(TUint& aPolicyVersion) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPolicyVersion = iPolicyVersion->Value();
}

void CpProxyLinnCoUkPrivacy1C::PropertyPolicyAgreed(TUint& aPolicyAgreed) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPolicyAgreed = iPolicyAgreed->Value();
}

void CpProxyLinnCoUkPrivacy1C::PropertyPolicyDetails(Brhz& aPolicyDetails) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aPolicyDetails.Set(iPolicyDetails->Value());
}

void CpProxyLinnCoUkPrivacy1C::PolicyVersionPropertyChanged()
{
    ReportEvent(iPolicyVersionChanged);
}

void CpProxyLinnCoUkPrivacy1C::PolicyAgreedPropertyChanged()
{
    ReportEvent(iPolicyAgreedChanged);
}

void CpProxyLinnCoUkPrivacy1C::PolicyDetailsPropertyChanged()
{
    ReportEvent(iPolicyDetailsChanged);
}


THandle STDCALL CpProxyLinnCoUkPrivacy1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkPrivacy1C(aDevice);
}

void STDCALL CpProxyLinnCoUkPrivacy1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyVersion(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetPolicyVersion(*aVersion);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPolicyVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyVersion(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetPolicyVersion(*async, *aVersion);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyAgreed(THandle aHandle, uint32_t* aVersion)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncGetPolicyAgreed(*aVersion);
    }
    catch (ProxyError& ) {
        err = -1;
        *aVersion = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyAgreed(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPolicyAgreed(functor);
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyAgreed(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndGetPolicyAgreed(*async, *aVersion);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncGetPolicyDetails(THandle aHandle, char** aDetails)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDetails;
    int32_t err = 0;
    try {
        proxyC->SyncGetPolicyDetails(buf_aDetails);
        *aDetails = buf_aDetails.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aDetails = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkPrivacy1BeginGetPolicyDetails(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetPolicyDetails(functor);
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1EndGetPolicyDetails(THandle aHandle, OhNetHandleAsync aAsync, char** aDetails)
{
    int32_t err = 0;
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aDetails;
    *aDetails = NULL;
    try {
        proxyC->EndGetPolicyDetails(*async, buf_aDetails);
        *aDetails = buf_aDetails.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1SyncSetPolicyDetails(THandle aHandle, const char* aDetails)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDetails(aDetails);
    int32_t err = 0;
    try {
        proxyC->SyncSetPolicyDetails(buf_aDetails);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkPrivacy1BeginSetPolicyDetails(THandle aHandle, const char* aDetails, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDetails(aDetails);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetPolicyDetails(buf_aDetails, functor);
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1EndSetPolicyDetails(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetPolicyDetails(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyVersionChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPolicyVersionChanged(functor);
}

void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyAgreedChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPolicyAgreedChanged(functor);
}

void STDCALL CpProxyLinnCoUkPrivacy1SetPropertyPolicyDetailsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyPolicyDetailsChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyVersion(THandle aHandle, uint32_t* aPolicyVersion)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyPolicyVersion(*aPolicyVersion);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyAgreed(THandle aHandle, uint32_t* aPolicyAgreed)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyPolicyAgreed(*aPolicyAgreed);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkPrivacy1PropertyPolicyDetails(THandle aHandle, char** aPolicyDetails)
{
    CpProxyLinnCoUkPrivacy1C* proxyC = reinterpret_cast<CpProxyLinnCoUkPrivacy1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aPolicyDetails;
    try {
        proxyC->PropertyPolicyDetails(buf_aPolicyDetails);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aPolicyDetails = buf_aPolicyDetails.Transfer();
    return 0;
}

