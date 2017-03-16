#include "CpLinnCoUkExaktInputs1.h"
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

class CpProxyLinnCoUkExaktInputs1C : public CpProxyC
{
public:
    CpProxyLinnCoUkExaktInputs1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkExaktInputs1C();
    //CpProxyLinnCoUkExaktInputs1* Proxy() { return static_cast<CpProxyLinnCoUkExaktInputs1*>(iProxy); }

    void SyncGetAssociation(TUint aInputIndex, Brh& aDeviceId);
    void BeginGetAssociation(TUint aInputIndex, FunctorAsync& aFunctor);
    void EndGetAssociation(IAsync& aAsync, Brh& aDeviceId);

    void SyncSetAssociation(TUint aInputIndex, const Brx& aDeviceId);
    void BeginSetAssociation(TUint aInputIndex, const Brx& aDeviceId, FunctorAsync& aFunctor);
    void EndSetAssociation(IAsync& aAsync);

    void SyncClearAssociation(TUint aInputIndex);
    void BeginClearAssociation(TUint aInputIndex, FunctorAsync& aFunctor);
    void EndClearAssociation(IAsync& aAsync);

    void SyncInputCount(TUint& aInputCount);
    void BeginInputCount(FunctorAsync& aFunctor);
    void EndInputCount(IAsync& aAsync, TUint& aInputCount);

    void SetPropertyAssociationsChanged(Functor& aFunctor);

    void PropertyAssociations(Brhz& aAssociations) const;
private:
    void AssociationsPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetAssociation;
    Action* iActionSetAssociation;
    Action* iActionClearAssociation;
    Action* iActionInputCount;
    PropertyString* iAssociations;
    Functor iAssociationsChanged;
};


class SyncGetAssociationLinnCoUkExaktInputs1C : public SyncProxyAction
{
public:
    SyncGetAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy, Brh& aDeviceId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetAssociationLinnCoUkExaktInputs1C() {};
private:
    CpProxyLinnCoUkExaktInputs1C& iService;
    Brh& iDeviceId;
};

SyncGetAssociationLinnCoUkExaktInputs1C::SyncGetAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy, Brh& aDeviceId)
    : iService(aProxy)
    , iDeviceId(aDeviceId)
{
}

void SyncGetAssociationLinnCoUkExaktInputs1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetAssociation(aAsync, iDeviceId);
}


class SyncSetAssociationLinnCoUkExaktInputs1C : public SyncProxyAction
{
public:
    SyncSetAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetAssociationLinnCoUkExaktInputs1C() {};
private:
    CpProxyLinnCoUkExaktInputs1C& iService;
};

SyncSetAssociationLinnCoUkExaktInputs1C::SyncSetAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetAssociationLinnCoUkExaktInputs1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetAssociation(aAsync);
}


class SyncClearAssociationLinnCoUkExaktInputs1C : public SyncProxyAction
{
public:
    SyncClearAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncClearAssociationLinnCoUkExaktInputs1C() {};
private:
    CpProxyLinnCoUkExaktInputs1C& iService;
};

SyncClearAssociationLinnCoUkExaktInputs1C::SyncClearAssociationLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy)
    : iService(aProxy)
{
}

void SyncClearAssociationLinnCoUkExaktInputs1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndClearAssociation(aAsync);
}


class SyncInputCountLinnCoUkExaktInputs1C : public SyncProxyAction
{
public:
    SyncInputCountLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy, TUint& aInputCount);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncInputCountLinnCoUkExaktInputs1C() {};
private:
    CpProxyLinnCoUkExaktInputs1C& iService;
    TUint& iInputCount;
};

SyncInputCountLinnCoUkExaktInputs1C::SyncInputCountLinnCoUkExaktInputs1C(CpProxyLinnCoUkExaktInputs1C& aProxy, TUint& aInputCount)
    : iService(aProxy)
    , iInputCount(aInputCount)
{
}

void SyncInputCountLinnCoUkExaktInputs1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndInputCount(aAsync, iInputCount);
}

CpProxyLinnCoUkExaktInputs1C::CpProxyLinnCoUkExaktInputs1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "ExaktInputs", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetAssociation = new Action("GetAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionGetAssociation->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionGetAssociation->AddOutputParameter(param);

    iActionSetAssociation = new Action("SetAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionSetAssociation->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("DeviceId");
    iActionSetAssociation->AddInputParameter(param);

    iActionClearAssociation = new Action("ClearAssociation");
    param = new OpenHome::Net::ParameterUint("InputIndex");
    iActionClearAssociation->AddInputParameter(param);

    iActionInputCount = new Action("InputCount");
    param = new OpenHome::Net::ParameterUint("InputCount");
    iActionInputCount->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkExaktInputs1C::AssociationsPropertyChanged);
    iAssociations = new PropertyString("Associations", functor);
    AddProperty(iAssociations);
}

CpProxyLinnCoUkExaktInputs1C::~CpProxyLinnCoUkExaktInputs1C()
{
    DestroyService();
    delete iActionGetAssociation;
    delete iActionSetAssociation;
    delete iActionClearAssociation;
    delete iActionInputCount;
}

void CpProxyLinnCoUkExaktInputs1C::SyncGetAssociation(TUint aInputIndex, Brh& aDeviceId)
{
    SyncGetAssociationLinnCoUkExaktInputs1C sync(*this, aDeviceId);
    BeginGetAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1C::BeginGetAssociation(TUint aInputIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetAssociation->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1C::EndGetAssociation(IAsync& aAsync, Brh& aDeviceId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aDeviceId);
}

void CpProxyLinnCoUkExaktInputs1C::SyncSetAssociation(TUint aInputIndex, const Brx& aDeviceId)
{
    SyncSetAssociationLinnCoUkExaktInputs1C sync(*this);
    BeginSetAssociation(aInputIndex, aDeviceId, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1C::BeginSetAssociation(TUint aInputIndex, const Brx& aDeviceId, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aDeviceId));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1C::EndSetAssociation(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExaktInputs1C::SyncClearAssociation(TUint aInputIndex)
{
    SyncClearAssociationLinnCoUkExaktInputs1C sync(*this);
    BeginClearAssociation(aInputIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1C::BeginClearAssociation(TUint aInputIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionClearAssociation, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionClearAssociation->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aInputIndex));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1C::EndClearAssociation(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ClearAssociation"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkExaktInputs1C::SyncInputCount(TUint& aInputCount)
{
    SyncInputCountLinnCoUkExaktInputs1C sync(*this, aInputCount);
    BeginInputCount(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkExaktInputs1C::BeginInputCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionInputCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionInputCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkExaktInputs1C::EndInputCount(IAsync& aAsync, TUint& aInputCount)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("InputCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aInputCount = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkExaktInputs1C::SetPropertyAssociationsChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAssociationsChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkExaktInputs1C::PropertyAssociations(Brhz& aAssociations) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAssociations.Set(iAssociations->Value());
}

void CpProxyLinnCoUkExaktInputs1C::AssociationsPropertyChanged()
{
    ReportEvent(iAssociationsChanged);
}


THandle STDCALL CpProxyLinnCoUkExaktInputs1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkExaktInputs1C(aDevice);
}

void STDCALL CpProxyLinnCoUkExaktInputs1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1SyncGetAssociation(THandle aHandle, uint32_t aInputIndex, char** aDeviceId)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId;
    int32_t err = 0;
    try {
        proxyC->SyncGetAssociation(aInputIndex, buf_aDeviceId);
        *aDeviceId = buf_aDeviceId.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aDeviceId = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExaktInputs1BeginGetAssociation(THandle aHandle, uint32_t aInputIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetAssociation(aInputIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1EndGetAssociation(THandle aHandle, OhNetHandleAsync aAsync, char** aDeviceId)
{
    int32_t err = 0;
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aDeviceId;
    *aDeviceId = NULL;
    try {
        proxyC->EndGetAssociation(*async, buf_aDeviceId);
        *aDeviceId = buf_aDeviceId.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1SyncSetAssociation(THandle aHandle, uint32_t aInputIndex, const char* aDeviceId)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    int32_t err = 0;
    try {
        proxyC->SyncSetAssociation(aInputIndex, buf_aDeviceId);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExaktInputs1BeginSetAssociation(THandle aHandle, uint32_t aInputIndex, const char* aDeviceId, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aDeviceId(aDeviceId);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetAssociation(aInputIndex, buf_aDeviceId, functor);
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1EndSetAssociation(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetAssociation(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1SyncClearAssociation(THandle aHandle, uint32_t aInputIndex)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncClearAssociation(aInputIndex);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExaktInputs1BeginClearAssociation(THandle aHandle, uint32_t aInputIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginClearAssociation(aInputIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1EndClearAssociation(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndClearAssociation(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1SyncInputCount(THandle aHandle, uint32_t* aInputCount)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncInputCount(*aInputCount);
    }
    catch (ProxyError& ) {
        err = -1;
        *aInputCount = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExaktInputs1BeginInputCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginInputCount(functor);
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1EndInputCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aInputCount)
{
    int32_t err = 0;
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndInputCount(*async, *aInputCount);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkExaktInputs1SetPropertyAssociationsChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAssociationsChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkExaktInputs1PropertyAssociations(THandle aHandle, char** aAssociations)
{
    CpProxyLinnCoUkExaktInputs1C* proxyC = reinterpret_cast<CpProxyLinnCoUkExaktInputs1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAssociations;
    try {
        proxyC->PropertyAssociations(buf_aAssociations);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAssociations = buf_aAssociations.Transfer();
    return 0;
}

