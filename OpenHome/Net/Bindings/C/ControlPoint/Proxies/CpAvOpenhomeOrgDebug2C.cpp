#include "CpAvOpenhomeOrgDebug2.h"
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

class CpProxyAvOpenhomeOrgDebug2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgDebug2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgDebug2C();
    //CpProxyAvOpenhomeOrgDebug2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgDebug2*>(iProxy); }

    void SyncGetLog(Brh& aLog);
    void BeginGetLog(FunctorAsync& aFunctor);
    void EndGetLog(IAsync& aAsync, Brh& aLog);

    void SyncSendLog(const Brx& aData);
    void BeginSendLog(const Brx& aData, FunctorAsync& aFunctor);
    void EndSendLog(IAsync& aAsync);

    void SyncSendDeviceAnnouncements();
    void BeginSendDeviceAnnouncements(FunctorAsync& aFunctor);
    void EndSendDeviceAnnouncements(IAsync& aAsync);

    void SyncGetRecentMSearches(Brh& aJsonArray);
    void BeginGetRecentMSearches(FunctorAsync& aFunctor);
    void EndGetRecentMSearches(IAsync& aAsync, Brh& aJsonArray);


private:
private:
    Mutex iLock;
    Action* iActionGetLog;
    Action* iActionSendLog;
    Action* iActionSendDeviceAnnouncements;
    Action* iActionGetRecentMSearches;
};


class SyncGetLogAvOpenhomeOrgDebug2C : public SyncProxyAction
{
public:
    SyncGetLogAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy, Brh& aLog);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetLogAvOpenhomeOrgDebug2C() {};
private:
    CpProxyAvOpenhomeOrgDebug2C& iService;
    Brh& iLog;
};

SyncGetLogAvOpenhomeOrgDebug2C::SyncGetLogAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy, Brh& aLog)
    : iService(aProxy)
    , iLog(aLog)
{
}

void SyncGetLogAvOpenhomeOrgDebug2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetLog(aAsync, iLog);
}


class SyncSendLogAvOpenhomeOrgDebug2C : public SyncProxyAction
{
public:
    SyncSendLogAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSendLogAvOpenhomeOrgDebug2C() {};
private:
    CpProxyAvOpenhomeOrgDebug2C& iService;
};

SyncSendLogAvOpenhomeOrgDebug2C::SyncSendLogAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy)
    : iService(aProxy)
{
}

void SyncSendLogAvOpenhomeOrgDebug2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendLog(aAsync);
}


class SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C : public SyncProxyAction
{
public:
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C() {};
private:
    CpProxyAvOpenhomeOrgDebug2C& iService;
};

SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C::SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy)
    : iService(aProxy)
{
}

void SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSendDeviceAnnouncements(aAsync);
}


class SyncGetRecentMSearchesAvOpenhomeOrgDebug2C : public SyncProxyAction
{
public:
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy, Brh& aJsonArray);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetRecentMSearchesAvOpenhomeOrgDebug2C() {};
private:
    CpProxyAvOpenhomeOrgDebug2C& iService;
    Brh& iJsonArray;
};

SyncGetRecentMSearchesAvOpenhomeOrgDebug2C::SyncGetRecentMSearchesAvOpenhomeOrgDebug2C(CpProxyAvOpenhomeOrgDebug2C& aProxy, Brh& aJsonArray)
    : iService(aProxy)
    , iJsonArray(aJsonArray)
{
}

void SyncGetRecentMSearchesAvOpenhomeOrgDebug2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetRecentMSearches(aAsync, iJsonArray);
}

CpProxyAvOpenhomeOrgDebug2C::CpProxyAvOpenhomeOrgDebug2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Debug", 2, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;

    iActionGetLog = new Action("GetLog");
    param = new OpenHome::Net::ParameterString("Log");
    iActionGetLog->AddOutputParameter(param);

    iActionSendLog = new Action("SendLog");
    param = new OpenHome::Net::ParameterString("Data");
    iActionSendLog->AddInputParameter(param);

    iActionSendDeviceAnnouncements = new Action("SendDeviceAnnouncements");

    iActionGetRecentMSearches = new Action("GetRecentMSearches");
    param = new OpenHome::Net::ParameterString("JsonArray");
    iActionGetRecentMSearches->AddOutputParameter(param);
}

CpProxyAvOpenhomeOrgDebug2C::~CpProxyAvOpenhomeOrgDebug2C()
{
    DestroyService();
    delete iActionGetLog;
    delete iActionSendLog;
    delete iActionSendDeviceAnnouncements;
    delete iActionGetRecentMSearches;
}

void CpProxyAvOpenhomeOrgDebug2C::SyncGetLog(Brh& aLog)
{
    SyncGetLogAvOpenhomeOrgDebug2C sync(*this, aLog);
    BeginGetLog(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2C::BeginGetLog(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetLog, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetLog->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2C::EndGetLog(IAsync& aAsync, Brh& aLog)
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

void CpProxyAvOpenhomeOrgDebug2C::SyncSendLog(const Brx& aData)
{
    SyncSendLogAvOpenhomeOrgDebug2C sync(*this);
    BeginSendLog(aData, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2C::BeginSendLog(const Brx& aData, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSendLog, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSendLog->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aData));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2C::EndSendLog(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SendLog"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDebug2C::SyncSendDeviceAnnouncements()
{
    SyncSendDeviceAnnouncementsAvOpenhomeOrgDebug2C sync(*this);
    BeginSendDeviceAnnouncements(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2C::BeginSendDeviceAnnouncements(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSendDeviceAnnouncements, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2C::EndSendDeviceAnnouncements(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SendDeviceAnnouncements"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgDebug2C::SyncGetRecentMSearches(Brh& aJsonArray)
{
    SyncGetRecentMSearchesAvOpenhomeOrgDebug2C sync(*this, aJsonArray);
    BeginGetRecentMSearches(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgDebug2C::BeginGetRecentMSearches(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetRecentMSearches, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetRecentMSearches->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgDebug2C::EndGetRecentMSearches(IAsync& aAsync, Brh& aJsonArray)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetRecentMSearches"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aJsonArray);
}


THandle STDCALL CpProxyAvOpenhomeOrgDebug2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgDebug2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgDebug2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2SyncGetLog(THandle aHandle, char** aLog)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgDebug2BeginGetLog(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetLog(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2EndGetLog(THandle aHandle, OhNetHandleAsync aAsync, char** aLog)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2SyncSendLog(THandle aHandle, const char* aData)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aData(aData);
    int32_t err = 0;
    try {
        proxyC->SyncSendLog(buf_aData);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDebug2BeginSendLog(THandle aHandle, const char* aData, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aData(aData);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSendLog(buf_aData, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2EndSendLog(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSendLog(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2SyncSendDeviceAnnouncements(THandle aHandle)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSendDeviceAnnouncements();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDebug2BeginSendDeviceAnnouncements(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSendDeviceAnnouncements(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2EndSendDeviceAnnouncements(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSendDeviceAnnouncements(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2SyncGetRecentMSearches(THandle aHandle, char** aJsonArray)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aJsonArray;
    int32_t err = 0;
    try {
        proxyC->SyncGetRecentMSearches(buf_aJsonArray);
        *aJsonArray = buf_aJsonArray.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aJsonArray = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgDebug2BeginGetRecentMSearches(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetRecentMSearches(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgDebug2EndGetRecentMSearches(THandle aHandle, OhNetHandleAsync aAsync, char** aJsonArray)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgDebug2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgDebug2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aJsonArray;
    *aJsonArray = NULL;
    try {
        proxyC->EndGetRecentMSearches(*async, buf_aJsonArray);
        *aJsonArray = buf_aJsonArray.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

