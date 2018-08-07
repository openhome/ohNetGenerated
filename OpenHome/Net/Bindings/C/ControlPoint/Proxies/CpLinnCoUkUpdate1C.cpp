#include "CpLinnCoUkUpdate1.h"
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

class CpProxyLinnCoUkUpdate1C : public CpProxyC
{
public:
    CpProxyLinnCoUkUpdate1C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkUpdate1C();
    //CpProxyLinnCoUkUpdate1* Proxy() { return static_cast<CpProxyLinnCoUkUpdate1*>(iProxy); }

    void SyncPushManifest(const Brx& aUri);
    void BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor);
    void EndPushManifest(IAsync& aAsync);

    void SyncSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel);
    void BeginSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel, FunctorAsync& aFunctor);
    void EndSetUpdateFeedParams(IAsync& aAsync);

    void SyncGetUpdateFeedParams(Brh& aTopic, Brh& aChannel);
    void BeginGetUpdateFeedParams(FunctorAsync& aFunctor);
    void EndGetUpdateFeedParams(IAsync& aAsync, Brh& aTopic, Brh& aChannel);

    void SyncGetSoftwareStatus(Brh& aSoftwareStatus);
    void BeginGetSoftwareStatus(FunctorAsync& aFunctor);
    void EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus);

    void SyncGetExecutorStatus(Brh& aExecutorStatus);
    void BeginGetExecutorStatus(FunctorAsync& aFunctor);
    void EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus);

    void SyncApply();
    void BeginApply(FunctorAsync& aFunctor);
    void EndApply(IAsync& aAsync);

    void SyncRestore();
    void BeginRestore(FunctorAsync& aFunctor);
    void EndRestore(IAsync& aAsync);

    void SetPropertySoftwareStatusChanged(Functor& aFunctor);
    void SetPropertyExecutorStatusChanged(Functor& aFunctor);
    void SetPropertyUpdateTopicChanged(Functor& aFunctor);
    void SetPropertyUpdateChannelChanged(Functor& aFunctor);

    void PropertySoftwareStatus(Brhz& aSoftwareStatus) const;
    void PropertyExecutorStatus(Brhz& aExecutorStatus) const;
    void PropertyUpdateTopic(Brhz& aUpdateTopic) const;
    void PropertyUpdateChannel(Brhz& aUpdateChannel) const;
private:
    void SoftwareStatusPropertyChanged();
    void ExecutorStatusPropertyChanged();
    void UpdateTopicPropertyChanged();
    void UpdateChannelPropertyChanged();
private:
    Mutex iLock;
    Action* iActionPushManifest;
    Action* iActionSetUpdateFeedParams;
    Action* iActionGetUpdateFeedParams;
    Action* iActionGetSoftwareStatus;
    Action* iActionGetExecutorStatus;
    Action* iActionApply;
    Action* iActionRestore;
    PropertyString* iSoftwareStatus;
    PropertyString* iExecutorStatus;
    PropertyString* iUpdateTopic;
    PropertyString* iUpdateChannel;
    Functor iSoftwareStatusChanged;
    Functor iExecutorStatusChanged;
    Functor iUpdateTopicChanged;
    Functor iUpdateChannelChanged;
};


class SyncPushManifestLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncPushManifestLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncPushManifestLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
};

SyncPushManifestLinnCoUkUpdate1C::SyncPushManifestLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy)
    : iService(aProxy)
{
}

void SyncPushManifestLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndPushManifest(aAsync);
}


class SyncSetUpdateFeedParamsLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncSetUpdateFeedParamsLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetUpdateFeedParamsLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
};

SyncSetUpdateFeedParamsLinnCoUkUpdate1C::SyncSetUpdateFeedParamsLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy)
    : iService(aProxy)
{
}

void SyncSetUpdateFeedParamsLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetUpdateFeedParams(aAsync);
}


class SyncGetUpdateFeedParamsLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncGetUpdateFeedParamsLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aTopic, Brh& aChannel);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetUpdateFeedParamsLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
    Brh& iTopic;
    Brh& iChannel;
};

SyncGetUpdateFeedParamsLinnCoUkUpdate1C::SyncGetUpdateFeedParamsLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aTopic, Brh& aChannel)
    : iService(aProxy)
    , iTopic(aTopic)
    , iChannel(aChannel)
{
}

void SyncGetUpdateFeedParamsLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetUpdateFeedParams(aAsync, iTopic, iChannel);
}


class SyncGetSoftwareStatusLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncGetSoftwareStatusLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aSoftwareStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetSoftwareStatusLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
    Brh& iSoftwareStatus;
};

SyncGetSoftwareStatusLinnCoUkUpdate1C::SyncGetSoftwareStatusLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aSoftwareStatus)
    : iService(aProxy)
    , iSoftwareStatus(aSoftwareStatus)
{
}

void SyncGetSoftwareStatusLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetSoftwareStatus(aAsync, iSoftwareStatus);
}


class SyncGetExecutorStatusLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncGetExecutorStatusLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aExecutorStatus);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetExecutorStatusLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
    Brh& iExecutorStatus;
};

SyncGetExecutorStatusLinnCoUkUpdate1C::SyncGetExecutorStatusLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy, Brh& aExecutorStatus)
    : iService(aProxy)
    , iExecutorStatus(aExecutorStatus)
{
}

void SyncGetExecutorStatusLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetExecutorStatus(aAsync, iExecutorStatus);
}


class SyncApplyLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncApplyLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncApplyLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
};

SyncApplyLinnCoUkUpdate1C::SyncApplyLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy)
    : iService(aProxy)
{
}

void SyncApplyLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndApply(aAsync);
}


class SyncRestoreLinnCoUkUpdate1C : public SyncProxyAction
{
public:
    SyncRestoreLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRestoreLinnCoUkUpdate1C() {};
private:
    CpProxyLinnCoUkUpdate1C& iService;
};

SyncRestoreLinnCoUkUpdate1C::SyncRestoreLinnCoUkUpdate1C(CpProxyLinnCoUkUpdate1C& aProxy)
    : iService(aProxy)
{
}

void SyncRestoreLinnCoUkUpdate1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndRestore(aAsync);
}

CpProxyLinnCoUkUpdate1C::CpProxyLinnCoUkUpdate1C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Update", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionPushManifest = new Action("PushManifest");
    param = new OpenHome::Net::ParameterString("Uri");
    iActionPushManifest->AddInputParameter(param);

    iActionSetUpdateFeedParams = new Action("SetUpdateFeedParams");
    param = new OpenHome::Net::ParameterString("Topic");
    iActionSetUpdateFeedParams->AddInputParameter(param);
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    param = new OpenHome::Net::ParameterString("Channel", allowedValues, 4);
    iActionSetUpdateFeedParams->AddInputParameter(param);
    delete[] allowedValues;

    iActionGetUpdateFeedParams = new Action("GetUpdateFeedParams");
    param = new OpenHome::Net::ParameterString("Topic");
    iActionGetUpdateFeedParams->AddOutputParameter(param);
    index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    param = new OpenHome::Net::ParameterString("Channel", allowedValues, 4);
    iActionGetUpdateFeedParams->AddOutputParameter(param);
    delete[] allowedValues;

    iActionGetSoftwareStatus = new Action("GetSoftwareStatus");
    param = new OpenHome::Net::ParameterString("SoftwareStatus");
    iActionGetSoftwareStatus->AddOutputParameter(param);

    iActionGetExecutorStatus = new Action("GetExecutorStatus");
    param = new OpenHome::Net::ParameterString("ExecutorStatus");
    iActionGetExecutorStatus->AddOutputParameter(param);

    iActionApply = new Action("Apply");

    iActionRestore = new Action("Restore");

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1C::SoftwareStatusPropertyChanged);
    iSoftwareStatus = new PropertyString("SoftwareStatus", functor);
    AddProperty(iSoftwareStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1C::ExecutorStatusPropertyChanged);
    iExecutorStatus = new PropertyString("ExecutorStatus", functor);
    AddProperty(iExecutorStatus);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1C::UpdateTopicPropertyChanged);
    iUpdateTopic = new PropertyString("UpdateTopic", functor);
    AddProperty(iUpdateTopic);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkUpdate1C::UpdateChannelPropertyChanged);
    iUpdateChannel = new PropertyString("UpdateChannel", functor);
    AddProperty(iUpdateChannel);
}

CpProxyLinnCoUkUpdate1C::~CpProxyLinnCoUkUpdate1C()
{
    DestroyService();
    delete iActionPushManifest;
    delete iActionSetUpdateFeedParams;
    delete iActionGetUpdateFeedParams;
    delete iActionGetSoftwareStatus;
    delete iActionGetExecutorStatus;
    delete iActionApply;
    delete iActionRestore;
}

void CpProxyLinnCoUkUpdate1C::SyncPushManifest(const Brx& aUri)
{
    SyncPushManifestLinnCoUkUpdate1C sync(*this);
    BeginPushManifest(aUri, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginPushManifest(const Brx& aUri, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionPushManifest, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionPushManifest->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aUri));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndPushManifest(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("PushManifest"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1C::SyncSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel)
{
    SyncSetUpdateFeedParamsLinnCoUkUpdate1C sync(*this);
    BeginSetUpdateFeedParams(aTopic, aChannel, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginSetUpdateFeedParams(const Brx& aTopic, const Brx& aChannel, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetUpdateFeedParams, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetUpdateFeedParams->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aTopic));
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aChannel));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndSetUpdateFeedParams(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetUpdateFeedParams"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1C::SyncGetUpdateFeedParams(Brh& aTopic, Brh& aChannel)
{
    SyncGetUpdateFeedParamsLinnCoUkUpdate1C sync(*this, aTopic, aChannel);
    BeginGetUpdateFeedParams(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginGetUpdateFeedParams(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetUpdateFeedParams, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetUpdateFeedParams->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndGetUpdateFeedParams(IAsync& aAsync, Brh& aTopic, Brh& aChannel)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetUpdateFeedParams"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aTopic);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aChannel);
}

void CpProxyLinnCoUkUpdate1C::SyncGetSoftwareStatus(Brh& aSoftwareStatus)
{
    SyncGetSoftwareStatusLinnCoUkUpdate1C sync(*this, aSoftwareStatus);
    BeginGetSoftwareStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginGetSoftwareStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetSoftwareStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetSoftwareStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndGetSoftwareStatus(IAsync& aAsync, Brh& aSoftwareStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetSoftwareStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSoftwareStatus);
}

void CpProxyLinnCoUkUpdate1C::SyncGetExecutorStatus(Brh& aExecutorStatus)
{
    SyncGetExecutorStatusLinnCoUkUpdate1C sync(*this, aExecutorStatus);
    BeginGetExecutorStatus(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginGetExecutorStatus(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetExecutorStatus, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetExecutorStatus->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndGetExecutorStatus(IAsync& aAsync, Brh& aExecutorStatus)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetExecutorStatus"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aExecutorStatus);
}

void CpProxyLinnCoUkUpdate1C::SyncApply()
{
    SyncApplyLinnCoUkUpdate1C sync(*this);
    BeginApply(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginApply(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionApply, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndApply(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Apply"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1C::SyncRestore()
{
    SyncRestoreLinnCoUkUpdate1C sync(*this);
    BeginRestore(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkUpdate1C::BeginRestore(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionRestore, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkUpdate1C::EndRestore(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Restore"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkUpdate1C::SetPropertySoftwareStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSoftwareStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate1C::SetPropertyExecutorStatusChanged(Functor& aFunctor)
{
    iLock.Wait();
    iExecutorStatusChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate1C::SetPropertyUpdateTopicChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateTopicChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate1C::SetPropertyUpdateChannelChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateChannelChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkUpdate1C::PropertySoftwareStatus(Brhz& aSoftwareStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSoftwareStatus.Set(iSoftwareStatus->Value());
}

void CpProxyLinnCoUkUpdate1C::PropertyExecutorStatus(Brhz& aExecutorStatus) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aExecutorStatus.Set(iExecutorStatus->Value());
}

void CpProxyLinnCoUkUpdate1C::PropertyUpdateTopic(Brhz& aUpdateTopic) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateTopic.Set(iUpdateTopic->Value());
}

void CpProxyLinnCoUkUpdate1C::PropertyUpdateChannel(Brhz& aUpdateChannel) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateChannel.Set(iUpdateChannel->Value());
}

void CpProxyLinnCoUkUpdate1C::SoftwareStatusPropertyChanged()
{
    ReportEvent(iSoftwareStatusChanged);
}

void CpProxyLinnCoUkUpdate1C::ExecutorStatusPropertyChanged()
{
    ReportEvent(iExecutorStatusChanged);
}

void CpProxyLinnCoUkUpdate1C::UpdateTopicPropertyChanged()
{
    ReportEvent(iUpdateTopicChanged);
}

void CpProxyLinnCoUkUpdate1C::UpdateChannelPropertyChanged()
{
    ReportEvent(iUpdateChannelChanged);
}


THandle STDCALL CpProxyLinnCoUkUpdate1Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkUpdate1C(aDevice);
}

void STDCALL CpProxyLinnCoUkUpdate1Destroy(THandle aHandle)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncPushManifest(THandle aHandle, const char* aUri)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    int32_t err = 0;
    try {
        proxyC->SyncPushManifest(buf_aUri);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginPushManifest(THandle aHandle, const char* aUri, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aUri(aUri);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginPushManifest(buf_aUri, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndPushManifest(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndPushManifest(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncSetUpdateFeedParams(THandle aHandle, const char* aTopic, const char* aChannel)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTopic(aTopic);
    Brh buf_aChannel(aChannel);
    int32_t err = 0;
    try {
        proxyC->SyncSetUpdateFeedParams(buf_aTopic, buf_aChannel);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginSetUpdateFeedParams(THandle aHandle, const char* aTopic, const char* aChannel, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTopic(aTopic);
    Brh buf_aChannel(aChannel);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetUpdateFeedParams(buf_aTopic, buf_aChannel, functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndSetUpdateFeedParams(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetUpdateFeedParams(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncGetUpdateFeedParams(THandle aHandle, char** aTopic, char** aChannel)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aTopic;
    Brh buf_aChannel;
    int32_t err = 0;
    try {
        proxyC->SyncGetUpdateFeedParams(buf_aTopic, buf_aChannel);
        *aTopic = buf_aTopic.Extract();
        *aChannel = buf_aChannel.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aTopic = NULL;
        *aChannel = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginGetUpdateFeedParams(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetUpdateFeedParams(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndGetUpdateFeedParams(THandle aHandle, OhNetHandleAsync aAsync, char** aTopic, char** aChannel)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aTopic;
    *aTopic = NULL;
    Brh buf_aChannel;
    *aChannel = NULL;
    try {
        proxyC->EndGetUpdateFeedParams(*async, buf_aTopic, buf_aChannel);
        *aTopic = buf_aTopic.Extract();
        *aChannel = buf_aChannel.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncGetSoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSoftwareStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetSoftwareStatus(buf_aSoftwareStatus);
        *aSoftwareStatus = buf_aSoftwareStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aSoftwareStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginGetSoftwareStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetSoftwareStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndGetSoftwareStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aSoftwareStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSoftwareStatus;
    *aSoftwareStatus = NULL;
    try {
        proxyC->EndGetSoftwareStatus(*async, buf_aSoftwareStatus);
        *aSoftwareStatus = buf_aSoftwareStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncGetExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aExecutorStatus;
    int32_t err = 0;
    try {
        proxyC->SyncGetExecutorStatus(buf_aExecutorStatus);
        *aExecutorStatus = buf_aExecutorStatus.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aExecutorStatus = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginGetExecutorStatus(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetExecutorStatus(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndGetExecutorStatus(THandle aHandle, OhNetHandleAsync aAsync, char** aExecutorStatus)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aExecutorStatus;
    *aExecutorStatus = NULL;
    try {
        proxyC->EndGetExecutorStatus(*async, buf_aExecutorStatus);
        *aExecutorStatus = buf_aExecutorStatus.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncApply(THandle aHandle)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncApply();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginApply(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginApply(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndApply(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndApply(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1SyncRestore(THandle aHandle)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncRestore();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1BeginRestore(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginRestore(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1EndRestore(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndRestore(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkUpdate1SetPropertySoftwareStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySoftwareStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate1SetPropertyExecutorStatusChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyExecutorStatusChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate1SetPropertyUpdateTopicChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateTopicChanged(functor);
}

void STDCALL CpProxyLinnCoUkUpdate1SetPropertyUpdateChannelChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateChannelChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkUpdate1PropertySoftwareStatus(THandle aHandle, char** aSoftwareStatus)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSoftwareStatus;
    try {
        proxyC->PropertySoftwareStatus(buf_aSoftwareStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSoftwareStatus = buf_aSoftwareStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1PropertyExecutorStatus(THandle aHandle, char** aExecutorStatus)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aExecutorStatus;
    try {
        proxyC->PropertyExecutorStatus(buf_aExecutorStatus);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aExecutorStatus = buf_aExecutorStatus.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1PropertyUpdateTopic(THandle aHandle, char** aUpdateTopic)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUpdateTopic;
    try {
        proxyC->PropertyUpdateTopic(buf_aUpdateTopic);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUpdateTopic = buf_aUpdateTopic.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkUpdate1PropertyUpdateChannel(THandle aHandle, char** aUpdateChannel)
{
    CpProxyLinnCoUkUpdate1C* proxyC = reinterpret_cast<CpProxyLinnCoUkUpdate1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aUpdateChannel;
    try {
        proxyC->PropertyUpdateChannel(buf_aUpdateChannel);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aUpdateChannel = buf_aUpdateChannel.Transfer();
    return 0;
}

