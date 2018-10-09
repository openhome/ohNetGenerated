#include "CpLinnCoUkZoneReceiver1.h"
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

class CpProxyLinnCoUkZoneReceiver1C : public CpProxyC
{
public:
    CpProxyLinnCoUkZoneReceiver1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkZoneReceiver1C();
    //CpProxyLinnCoUkZoneReceiver1* Proxy() { return static_cast<CpProxyLinnCoUkZoneReceiver1*>(iProxy); }

    void SyncGetSender(Brh& aSender);
    void BeginGetSender(FunctorAsync& aFunctor);
    void EndGetSender(IAsync& aAsync, Brh& aSender);

    void SetPropertySenderChanged(Functor& aFunctor);

    void PropertySender(Brhz& aSender) const;
private:
    void SenderPropertyChanged();
private:
    Mutex iLock;
    Action* iActionGetSender;
    PropertyString* iSender;
    Functor iSenderChanged;
};


class SyncGetSenderLinnCoUkZoneReceiver1C : public SyncProxyAction
{
public:
    SyncGetSenderLinnCoUkZoneReceiver1C(CpProxyLinnCoUkZoneReceiver1C& aProxy, Brh& aSender);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSenderLinnCoUkZoneReceiver1C() {};
private:
    CpProxyLinnCoUkZoneReceiver1C& iService;
    Brh& iSender;
};

SyncGetSenderLinnCoUkZoneReceiver1C::SyncGetSenderLinnCoUkZoneReceiver1C(CpProxyLinnCoUkZoneReceiver1C& aProxy, Brh& aSender)
    : iService(aProxy)
    , iSender(aSender)
{
}

void SyncGetSenderLinnCoUkZoneReceiver1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSender(aAsync, iSender);
}

CpProxyLinnCoUkZoneReceiver1C::CpProxyLinnCoUkZoneReceiver1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "ZoneReceiver", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetSender = new Action("GetSender");
    param = new OpenHome::Net::ParameterString("Sender");
    iActionGetSender->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkZoneReceiver1C::SenderPropertyChanged);
    iSender = new PropertyString("Sender", functor);
    AddProperty(iSender);
}

CpProxyLinnCoUkZoneReceiver1C::~CpProxyLinnCoUkZoneReceiver1C()
{
    DestroyService();
    delete iActionGetSender;
}

void CpProxyLinnCoUkZoneReceiver1C::SyncGetSender(Brh& aSender)
{
    SyncGetSenderLinnCoUkZoneReceiver1C sync(*this, aSender);
    BeginGetSender(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkZoneReceiver1C::BeginGetSender(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSender, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSender->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkZoneReceiver1C::EndGetSender(IAsync& aAsync, Brh& aSender)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSender"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSender);
}

void CpProxyLinnCoUkZoneReceiver1C::SetPropertySenderChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSenderChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkZoneReceiver1C::PropertySender(Brhz& aSender) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSender.Set(iSender->Value());
}

void CpProxyLinnCoUkZoneReceiver1C::SenderPropertyChanged()
{
    ReportEvent(iSenderChanged);
}


THandle STDCALL CpProxyLinnCoUkZoneReceiver1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkZoneReceiver1C(aDevice);
}

void STDCALL CpProxyLinnCoUkZoneReceiver1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkZoneReceiver1SyncGetSender(THandle aHandle, char** aSender)
{
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSender;
    int32_t err = 0;
    try {
        proxyC->SyncGetSender(buf_aSender);
        *aSender = buf_aSender.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSender = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZoneReceiver1BeginGetSender(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSender(functor);
}

int32_t STDCALL CpProxyLinnCoUkZoneReceiver1EndGetSender(THandle aHandle, OhNetHandleAsync aAsync, char** aSender)
{
    int32_t err = 0;
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSender;
    *aSender = NULL;
    try {
        proxyC->EndGetSender(*async, buf_aSender);
        *aSender = buf_aSender.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkZoneReceiver1SetPropertySenderChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySenderChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkZoneReceiver1PropertySender(THandle aHandle, char** aSender)
{
    CpProxyLinnCoUkZoneReceiver1C* proxyC = reinterpret_cast<CpProxyLinnCoUkZoneReceiver1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSender;
    try {
        proxyC->PropertySender(buf_aSender);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSender = buf_aSender.Transfer();
    return 0;
}

