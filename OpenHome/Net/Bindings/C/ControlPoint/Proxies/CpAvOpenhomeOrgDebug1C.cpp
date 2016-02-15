#include "CpAvOpenhomeOrgDebug1.h"
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

class CpProxyAvOpenhomeOrgDebug1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgDebug1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgDebug1C();
    //CpProxyAvOpenhomeOrgDebug1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgDebug1*>(iProxy); }

    void SyncGetLog(Brh& aLog);
    void BeginGetLog(FunctorAsync& aFunctor);
    void EndGetLog(IAsync& aAsync, Brh& aLog);


private:
private:
    Mutex iLock;
    Action* iActionGetLog;
};


class SyncGetLogAvOpenhomeOrgDebug1C : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug1C(CpProxyAvOpenhomeOrgDebug1C& aProxy, Brh& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetLogAvOpenhomeOrgDebug1C() {};
private:
    CpProxyAvOpenhomeOrgDebug1C& iService;
    Brh& iLog;
};

SyncGetLogAvOpenhomeOrgDebug1C::SyncGetLogAvOpenhomeOrgDebug1C(CpProxyAvOpenhomeOrgDebug1C& aProxy, Brh& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}

CpProxyAvOpenhomeOrgDebug1C::CpProxyAvOpenhomeOrgDebug1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Debug", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgDebug1C::~CpProxyAvOpenhomeOrgDebug1C()
{
    DestroyService();
    delete iActionGetLog;
}

void CpProxyAvOpenhomeOrgDebug1C::SyncGetLog(Brh& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug1C sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug1C::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug1C::EndGetLog(IAsync& aAsync, Brh& aLog)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetLog"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aLog);
}


THandle STDCALL CpProxyAvOpenhomeOrgDebug1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgDebug1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgDebug1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgDebug1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug1SyncGetLog(THandle aHandle, char** aLog)
{
    CpProxyAvOpenhomeOrgDebug1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aLog;
    int32_t err = 0;
    try {
        proxyC->SyncGetLog(buf_aLog);
        *aLog = buf_aLog.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aLog = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDebug1BeginGetLog(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDebug1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetLog(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug1EndGetLog(THandle aHandle, OhNetHandleAsync aAsync, char** aLog)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDebug1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aLog;
    *aLog = NULL;
    try {
        proxyC->EndGetLog(*async, buf_aLog);
        *aLog = buf_aLog.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

