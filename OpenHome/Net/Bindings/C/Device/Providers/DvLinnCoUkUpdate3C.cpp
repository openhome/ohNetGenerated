#include "DvLinnCoUkUpdate3.h"
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

class DvProviderLinnCoUkUpdate3C : public DvProvider
{
public:
    DvProviderLinnCoUkUpdate3C(DvDeviceC aDevice);
    TBool SetPropertySoftwareStatus(const Brx& aValue);
    void GetPropertySoftwareStatus(Brhz& aValue);
    TBool SetPropertyExecutorStatus(const Brx& aValue);
    void GetPropertyExecutorStatus(Brhz& aValue);
    TBool SetPropertyJobStatus(const Brx& aValue);
    void GetPropertyJobStatus(Brhz& aValue);
    TBool SetPropertyRecoverSupported(TBool aValue);
    void GetPropertyRecoverSupported(TBool& aValue);
    void EnablePropertySoftwareStatus();
    void EnablePropertyExecutorStatus();
    void EnablePropertyJobStatus();
    void EnablePropertyRecoverSupported();
    void EnableActionPushManifest(CallbackUpdate3PushManifest aCallback, void* aPtr);
    void EnableActionPushManifest2(CallbackUpdate3PushManifest2 aCallback, void* aPtr);
    void EnableActionGetSoftwareStatus(CallbackUpdate3GetSoftwareStatus aCallback, void* aPtr);
    void EnableActionGetExecutorStatus(CallbackUpdate3GetExecutorStatus aCallback, void* aPtr);
    void EnableActionGetJobStatus(CallbackUpdate3GetJobStatus aCallback, void* aPtr);
    void EnableActionApply(CallbackUpdate3Apply aCallback, void* aPtr);
    void EnableActionApply2(CallbackUpdate3Apply2 aCallback, void* aPtr);
    void EnableActionRecover(CallbackUpdate3Recover aCallback, void* aPtr);
    void EnableActionRecover2(CallbackUpdate3Recover2 aCallback, void* aPtr);
    void EnableActionCheckNow(CallbackUpdate3CheckNow aCallback, void* aPtr);
    void EnableActionGetRecoverSupported(CallbackUpdate3GetRecoverSupported aCallback, void* aPtr);
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
    void DoGetRecoverSupported(IDviInvocation& aInvocation);
private:
    CallbackUpdate3PushManifest iCallbackPushManifest;
    void* iPtrPushManifest;
    CallbackUpdate3PushManifest2 iCallbackPushManifest2;
    void* iPtrPushManifest2;
    CallbackUpdate3GetSoftwareStatus iCallbackGetSoftwareStatus;
    void* iPtrGetSoftwareStatus;
    CallbackUpdate3GetExecutorStatus iCallbackGetExecutorStatus;
    void* iPtrGetExecutorStatus;
    CallbackUpdate3GetJobStatus iCallbackGetJobStatus;
    void* iPtrGetJobStatus;
    CallbackUpdate3Apply iCallbackApply;
    void* iPtrApply;
    CallbackUpdate3Apply2 iCallbackApply2;
    void* iPtrApply2;
    CallbackUpdate3Recover iCallbackRecover;
    void* iPtrRecover;
    CallbackUpdate3Recover2 iCallbackRecover2;
    void* iPtrRecover2;
    CallbackUpdate3CheckNow iCallbackCheckNow;
    void* iPtrCheckNow;
    CallbackUpdate3GetRecoverSupported iCallbackGetRecoverSupported;
    void* iPtrGetRecoverSupported;
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyJobStatus;
    PropertyBool* iPropertyRecoverSupported;
};

DvProviderLinnCoUkUpdate3C::DvProviderLinnCoUkUpdate3C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Update", 3)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
    iPropertyRecoverSupported = NULL;
}

TBool DvProviderLinnCoUkUpdate3C::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate3C::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3C::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate3C::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3C::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate3C::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3C::SetPropertyRecoverSupported(TBool aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    return SetPropertyBool(*iPropertyRecoverSupported, aValue);
}

void DvProviderLinnCoUkUpdate3C::GetPropertyRecoverSupported(TBool& aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    aValue = iPropertyRecoverSupported->Value();
}

void DvProviderLinnCoUkUpdate3C::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3C::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3C::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3C::EnablePropertyRecoverSupported()
{
    iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
    iService->AddProperty(iPropertyRecoverSupported); // passes ownership
}

void DvProviderLinnCoUkUpdate3C::EnableActionPushManifest(CallbackUpdate3PushManifest aCallback, void* aPtr)
{
    iCallbackPushManifest = aCallback;
    iPtrPushManifest = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionPushManifest2(CallbackUpdate3PushManifest2 aCallback, void* aPtr)
{
    iCallbackPushManifest2 = aCallback;
    iPtrPushManifest2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionGetSoftwareStatus(CallbackUpdate3GetSoftwareStatus aCallback, void* aPtr)
{
    iCallbackGetSoftwareStatus = aCallback;
    iPtrGetSoftwareStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionGetExecutorStatus(CallbackUpdate3GetExecutorStatus aCallback, void* aPtr)
{
    iCallbackGetExecutorStatus = aCallback;
    iPtrGetExecutorStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionGetJobStatus(CallbackUpdate3GetJobStatus aCallback, void* aPtr)
{
    iCallbackGetJobStatus = aCallback;
    iPtrGetJobStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionApply(CallbackUpdate3Apply aCallback, void* aPtr)
{
    iCallbackApply = aCallback;
    iPtrApply = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionApply2(CallbackUpdate3Apply2 aCallback, void* aPtr)
{
    iCallbackApply2 = aCallback;
    iPtrApply2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionRecover(CallbackUpdate3Recover aCallback, void* aPtr)
{
    iCallbackRecover = aCallback;
    iPtrRecover = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionRecover2(CallbackUpdate3Recover2 aCallback, void* aPtr)
{
    iCallbackRecover2 = aCallback;
    iPtrRecover2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionCheckNow(CallbackUpdate3CheckNow aCallback, void* aPtr)
{
    iCallbackCheckNow = aCallback;
    iPtrCheckNow = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::EnableActionGetRecoverSupported(CallbackUpdate3GetRecoverSupported aCallback, void* aPtr)
{
    iCallbackGetRecoverSupported = aCallback;
    iPtrGetRecoverSupported = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecoverSupported");
    action->AddOutputParameter(new ParameterRelated("RecoverSupported", *iPropertyRecoverSupported));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3C::DoGetRecoverSupported);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3C::DoPushManifest(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoPushManifest2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoGetSoftwareStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoGetExecutorStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoGetJobStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoApply(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoApply2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoRecover(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoRecover2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoCheckNow(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3C::DoGetRecoverSupported(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t RecoverSupported;
    ASSERT(iCallbackGetRecoverSupported != NULL);
    if (0 != iCallbackGetRecoverSupported(iPtrGetRecoverSupported, invocationC, invocationCPtr, &RecoverSupported)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respRecoverSupported(aInvocation, "RecoverSupported");
    invocation.StartResponse();
    respRecoverSupported.Write((RecoverSupported!=0));
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkUpdate3Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkUpdate3C(aDevice);
}

void STDCALL DvProviderLinnCoUkUpdate3Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionPushManifest(THandle aProvider, CallbackUpdate3PushManifest aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionPushManifest(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionPushManifest2(THandle aProvider, CallbackUpdate3PushManifest2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionPushManifest2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate3GetSoftwareStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionGetSoftwareStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate3GetExecutorStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionGetExecutorStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetJobStatus(THandle aProvider, CallbackUpdate3GetJobStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionGetJobStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionApply(THandle aProvider, CallbackUpdate3Apply aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionApply(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionApply2(THandle aProvider, CallbackUpdate3Apply2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionApply2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionRecover(THandle aProvider, CallbackUpdate3Recover aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionRecover(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionRecover2(THandle aProvider, CallbackUpdate3Recover2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionRecover2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionCheckNow(THandle aProvider, CallbackUpdate3CheckNow aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionCheckNow(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate3EnableActionGetRecoverSupported(THandle aProvider, CallbackUpdate3GetRecoverSupported aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnableActionGetRecoverSupported(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->SetPropertySoftwareStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate3GetPropertySoftwareStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->GetPropertySoftwareStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->SetPropertyExecutorStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate3GetPropertyExecutorStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->GetPropertyExecutorStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->SetPropertyJobStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate3GetPropertyJobStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->GetPropertyJobStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate3SetPropertyRecoverSupported(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->SetPropertyRecoverSupported((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate3GetPropertyRecoverSupported(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->GetPropertyRecoverSupported(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderLinnCoUkUpdate3EnablePropertySoftwareStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnablePropertySoftwareStatus();
}

void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyExecutorStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnablePropertyExecutorStatus();
}

void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyJobStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnablePropertyJobStatus();
}

void STDCALL DvProviderLinnCoUkUpdate3EnablePropertyRecoverSupported(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate3C*>(aProvider)->EnablePropertyRecoverSupported();
}

