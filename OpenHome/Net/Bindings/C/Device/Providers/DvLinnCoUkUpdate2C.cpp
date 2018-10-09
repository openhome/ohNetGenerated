#include "DvLinnCoUkUpdate2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderLinnCoUkUpdate2C : public DvProvider
{
public:
    DvProviderLinnCoUkUpdate2C(DvDeviceC aDevice);
    TBool SetPropertySoftwareStatus(const Brx& aValue);
    void GetPropertySoftwareStatus(Brhz& aValue);
    TBool SetPropertyExecutorStatus(const Brx& aValue);
    void GetPropertyExecutorStatus(Brhz& aValue);
    TBool SetPropertyJobStatus(const Brx& aValue);
    void GetPropertyJobStatus(Brhz& aValue);
    void EnablePropertySoftwareStatus();
    void EnablePropertyExecutorStatus();
    void EnablePropertyJobStatus();
    void EnableActionPushManifest(CallbackUpdate2PushManifest aCallback, void* aPtr);
    void EnableActionPushManifest2(CallbackUpdate2PushManifest2 aCallback, void* aPtr);
    void EnableActionGetSoftwareStatus(CallbackUpdate2GetSoftwareStatus aCallback, void* aPtr);
    void EnableActionGetExecutorStatus(CallbackUpdate2GetExecutorStatus aCallback, void* aPtr);
    void EnableActionGetJobStatus(CallbackUpdate2GetJobStatus aCallback, void* aPtr);
    void EnableActionApply(CallbackUpdate2Apply aCallback, void* aPtr);
    void EnableActionApply2(CallbackUpdate2Apply2 aCallback, void* aPtr);
    void EnableActionRecover(CallbackUpdate2Recover aCallback, void* aPtr);
    void EnableActionRecover2(CallbackUpdate2Recover2 aCallback, void* aPtr);
    void EnableActionCheckNow(CallbackUpdate2CheckNow aCallback, void* aPtr);
private:
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoPushManifest2(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoGetJobStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoApply2(IDviInvocation& aInvocation);
    void DoRecover(IDviInvocation& aInvocation);
    void DoRecover2(IDviInvocation& aInvocation);
    void DoCheckNow(IDviInvocation& aInvocation);
private:
    CallbackUpdate2PushManifest iCallbackPushManifest;
    void* iPtrPushManifest;
    CallbackUpdate2PushManifest2 iCallbackPushManifest2;
    void* iPtrPushManifest2;
    CallbackUpdate2GetSoftwareStatus iCallbackGetSoftwareStatus;
    void* iPtrGetSoftwareStatus;
    CallbackUpdate2GetExecutorStatus iCallbackGetExecutorStatus;
    void* iPtrGetExecutorStatus;
    CallbackUpdate2GetJobStatus iCallbackGetJobStatus;
    void* iPtrGetJobStatus;
    CallbackUpdate2Apply iCallbackApply;
    void* iPtrApply;
    CallbackUpdate2Apply2 iCallbackApply2;
    void* iPtrApply2;
    CallbackUpdate2Recover iCallbackRecover;
    void* iPtrRecover;
    CallbackUpdate2Recover2 iCallbackRecover2;
    void* iPtrRecover2;
    CallbackUpdate2CheckNow iCallbackCheckNow;
    void* iPtrCheckNow;
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyJobStatus;
};

DvProviderLinnCoUkUpdate2C::DvProviderLinnCoUkUpdate2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Update", 2)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
}

TBool DvProviderLinnCoUkUpdate2C::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate2C::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate2C::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate2C::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate2C::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate2C::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

void DvProviderLinnCoUkUpdate2C::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2C::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2C::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2C::EnableActionPushManifest(CallbackUpdate2PushManifest aCallback, void* aPtr)
{
    iCallbackPushManifest = aCallback;
    iPtrPushManifest = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionPushManifest2(CallbackUpdate2PushManifest2 aCallback, void* aPtr)
{
    iCallbackPushManifest2 = aCallback;
    iPtrPushManifest2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionGetSoftwareStatus(CallbackUpdate2GetSoftwareStatus aCallback, void* aPtr)
{
    iCallbackGetSoftwareStatus = aCallback;
    iPtrGetSoftwareStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionGetExecutorStatus(CallbackUpdate2GetExecutorStatus aCallback, void* aPtr)
{
    iCallbackGetExecutorStatus = aCallback;
    iPtrGetExecutorStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionGetJobStatus(CallbackUpdate2GetJobStatus aCallback, void* aPtr)
{
    iCallbackGetJobStatus = aCallback;
    iPtrGetJobStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionApply(CallbackUpdate2Apply aCallback, void* aPtr)
{
    iCallbackApply = aCallback;
    iPtrApply = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionApply2(CallbackUpdate2Apply2 aCallback, void* aPtr)
{
    iCallbackApply2 = aCallback;
    iPtrApply2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionRecover(CallbackUpdate2Recover aCallback, void* aPtr)
{
    iCallbackRecover = aCallback;
    iPtrRecover = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionRecover2(CallbackUpdate2Recover2 aCallback, void* aPtr)
{
    iCallbackRecover2 = aCallback;
    iPtrRecover2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::EnableActionCheckNow(CallbackUpdate2CheckNow aCallback, void* aPtr)
{
    iCallbackCheckNow = aCallback;
    iPtrCheckNow = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2C::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2C::DoPushManifest(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPushManifest != NULL);
    if (0 != iCallbackPushManifest(iPtrPushManifest, invocationC, invocationCPtr, (const char*)Uri.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoPushManifest2(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Id;
    ASSERT(iCallbackPushManifest2 != NULL);
    if (0 != iCallbackPushManifest2(iPtrPushManifest2, invocationC, invocationCPtr, (const char*)Uri.Ptr(), &Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respId(aInvocation, "Id");
    invocation.StartResponse();
    respId.Write(Id);
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SoftwareStatus;
    ASSERT(iCallbackGetSoftwareStatus != NULL);
    if (0 != iCallbackGetSoftwareStatus(iPtrGetSoftwareStatus, invocationC, invocationCPtr, &SoftwareStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSoftwareStatus(aInvocation, "SoftwareStatus");
    invocation.StartResponse();
    Brhz bufSoftwareStatus((const TChar*)SoftwareStatus);
    OhNetFreeExternal(SoftwareStatus);
    respSoftwareStatus.Write(bufSoftwareStatus);
    respSoftwareStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ExecutorStatus;
    ASSERT(iCallbackGetExecutorStatus != NULL);
    if (0 != iCallbackGetExecutorStatus(iPtrGetExecutorStatus, invocationC, invocationCPtr, &ExecutorStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respExecutorStatus(aInvocation, "ExecutorStatus");
    invocation.StartResponse();
    Brhz bufExecutorStatus((const TChar*)ExecutorStatus);
    OhNetFreeExternal(ExecutorStatus);
    respExecutorStatus.Write(bufExecutorStatus);
    respExecutorStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoGetJobStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* JobStatus;
    ASSERT(iCallbackGetJobStatus != NULL);
    if (0 != iCallbackGetJobStatus(iPtrGetJobStatus, invocationC, invocationCPtr, &JobStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respJobStatus(aInvocation, "JobStatus");
    invocation.StartResponse();
    Brhz bufJobStatus((const TChar*)JobStatus);
    OhNetFreeExternal(JobStatus);
    respJobStatus.Write(bufJobStatus);
    respJobStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoApply(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackApply != NULL);
    if (0 != iCallbackApply(iPtrApply, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoApply2(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Id;
    ASSERT(iCallbackApply2 != NULL);
    if (0 != iCallbackApply2(iPtrApply2, invocationC, invocationCPtr, &Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respId(aInvocation, "Id");
    invocation.StartResponse();
    respId.Write(Id);
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoRecover(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackRecover != NULL);
    if (0 != iCallbackRecover(iPtrRecover, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoRecover2(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Id;
    ASSERT(iCallbackRecover2 != NULL);
    if (0 != iCallbackRecover2(iPtrRecover2, invocationC, invocationCPtr, &Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respId(aInvocation, "Id");
    invocation.StartResponse();
    respId.Write(Id);
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate2C::DoCheckNow(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackCheckNow != NULL);
    if (0 != iCallbackCheckNow(iPtrCheckNow, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkUpdate2Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkUpdate2C(aDevice);
}

void STDCALL DvProviderLinnCoUkUpdate2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionPushManifest(THandle aProvider, CallbackUpdate2PushManifest aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionPushManifest(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionPushManifest2(THandle aProvider, CallbackUpdate2PushManifest2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionPushManifest2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate2GetSoftwareStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionGetSoftwareStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate2GetExecutorStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionGetExecutorStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionGetJobStatus(THandle aProvider, CallbackUpdate2GetJobStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionGetJobStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionApply(THandle aProvider, CallbackUpdate2Apply aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionApply(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionApply2(THandle aProvider, CallbackUpdate2Apply2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionApply2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionRecover(THandle aProvider, CallbackUpdate2Recover aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionRecover(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionRecover2(THandle aProvider, CallbackUpdate2Recover2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionRecover2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate2EnableActionCheckNow(THandle aProvider, CallbackUpdate2CheckNow aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnableActionCheckNow(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->SetPropertySoftwareStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate2GetPropertySoftwareStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->GetPropertySoftwareStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->SetPropertyExecutorStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate2GetPropertyExecutorStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->GetPropertyExecutorStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate2SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->SetPropertyJobStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate2GetPropertyJobStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->GetPropertyJobStatus(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkUpdate2EnablePropertySoftwareStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnablePropertySoftwareStatus();
}

void STDCALL DvProviderLinnCoUkUpdate2EnablePropertyExecutorStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnablePropertyExecutorStatus();
}

void STDCALL DvProviderLinnCoUkUpdate2EnablePropertyJobStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate2C*>(aProvider)->EnablePropertyJobStatus();
}

