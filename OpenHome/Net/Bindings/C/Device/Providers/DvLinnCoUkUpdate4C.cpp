#include "DvLinnCoUkUpdate4.h"
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

class DvProviderLinnCoUkUpdate4C : public DvProvider
{
public:
    DvProviderLinnCoUkUpdate4C(DvDeviceC aDevice);
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
    void EnableActionPushManifest(CallbackUpdate4PushManifest aCallback, void* aPtr);
    void EnableActionPushManifest2(CallbackUpdate4PushManifest2 aCallback, void* aPtr);
    void EnableActionGetSoftwareStatus(CallbackUpdate4GetSoftwareStatus aCallback, void* aPtr);
    void EnableActionGetExecutorStatus(CallbackUpdate4GetExecutorStatus aCallback, void* aPtr);
    void EnableActionGetJobStatus(CallbackUpdate4GetJobStatus aCallback, void* aPtr);
    void EnableActionApply(CallbackUpdate4Apply aCallback, void* aPtr);
    void EnableActionApply2(CallbackUpdate4Apply2 aCallback, void* aPtr);
    void EnableActionRecover(CallbackUpdate4Recover aCallback, void* aPtr);
    void EnableActionRecover2(CallbackUpdate4Recover2 aCallback, void* aPtr);
    void EnableActionRecoverKeepStore(CallbackUpdate4RecoverKeepStore aCallback, void* aPtr);
    void EnableActionRecoverKeepStore2(CallbackUpdate4RecoverKeepStore2 aCallback, void* aPtr);
    void EnableActionCheckNow(CallbackUpdate4CheckNow aCallback, void* aPtr);
    void EnableActionGetRecoverSupported(CallbackUpdate4GetRecoverSupported aCallback, void* aPtr);
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
    void DoRecoverKeepStore(IDviInvocation& aInvocation);
    void DoRecoverKeepStore2(IDviInvocation& aInvocation);
    void DoCheckNow(IDviInvocation& aInvocation);
    void DoGetRecoverSupported(IDviInvocation& aInvocation);
private:
    CallbackUpdate4PushManifest iCallbackPushManifest;
    void* iPtrPushManifest;
    CallbackUpdate4PushManifest2 iCallbackPushManifest2;
    void* iPtrPushManifest2;
    CallbackUpdate4GetSoftwareStatus iCallbackGetSoftwareStatus;
    void* iPtrGetSoftwareStatus;
    CallbackUpdate4GetExecutorStatus iCallbackGetExecutorStatus;
    void* iPtrGetExecutorStatus;
    CallbackUpdate4GetJobStatus iCallbackGetJobStatus;
    void* iPtrGetJobStatus;
    CallbackUpdate4Apply iCallbackApply;
    void* iPtrApply;
    CallbackUpdate4Apply2 iCallbackApply2;
    void* iPtrApply2;
    CallbackUpdate4Recover iCallbackRecover;
    void* iPtrRecover;
    CallbackUpdate4Recover2 iCallbackRecover2;
    void* iPtrRecover2;
    CallbackUpdate4RecoverKeepStore iCallbackRecoverKeepStore;
    void* iPtrRecoverKeepStore;
    CallbackUpdate4RecoverKeepStore2 iCallbackRecoverKeepStore2;
    void* iPtrRecoverKeepStore2;
    CallbackUpdate4CheckNow iCallbackCheckNow;
    void* iPtrCheckNow;
    CallbackUpdate4GetRecoverSupported iCallbackGetRecoverSupported;
    void* iPtrGetRecoverSupported;
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyJobStatus;
    PropertyBool* iPropertyRecoverSupported;
};

DvProviderLinnCoUkUpdate4C::DvProviderLinnCoUkUpdate4C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Update", 4)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
    iPropertyRecoverSupported = NULL;
}

TBool DvProviderLinnCoUkUpdate4C::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate4C::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4C::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate4C::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4C::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate4C::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4C::SetPropertyRecoverSupported(TBool aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    return SetPropertyBool(*iPropertyRecoverSupported, aValue);
}

void DvProviderLinnCoUkUpdate4C::GetPropertyRecoverSupported(TBool& aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    aValue = iPropertyRecoverSupported->Value();
}

void DvProviderLinnCoUkUpdate4C::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4C::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4C::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4C::EnablePropertyRecoverSupported()
{
    iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
    iService->AddProperty(iPropertyRecoverSupported); // passes ownership
}

void DvProviderLinnCoUkUpdate4C::EnableActionPushManifest(CallbackUpdate4PushManifest aCallback, void* aPtr)
{
    iCallbackPushManifest = aCallback;
    iPtrPushManifest = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionPushManifest2(CallbackUpdate4PushManifest2 aCallback, void* aPtr)
{
    iCallbackPushManifest2 = aCallback;
    iPtrPushManifest2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionGetSoftwareStatus(CallbackUpdate4GetSoftwareStatus aCallback, void* aPtr)
{
    iCallbackGetSoftwareStatus = aCallback;
    iPtrGetSoftwareStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionGetExecutorStatus(CallbackUpdate4GetExecutorStatus aCallback, void* aPtr)
{
    iCallbackGetExecutorStatus = aCallback;
    iPtrGetExecutorStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionGetJobStatus(CallbackUpdate4GetJobStatus aCallback, void* aPtr)
{
    iCallbackGetJobStatus = aCallback;
    iPtrGetJobStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionApply(CallbackUpdate4Apply aCallback, void* aPtr)
{
    iCallbackApply = aCallback;
    iPtrApply = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionApply2(CallbackUpdate4Apply2 aCallback, void* aPtr)
{
    iCallbackApply2 = aCallback;
    iPtrApply2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionRecover(CallbackUpdate4Recover aCallback, void* aPtr)
{
    iCallbackRecover = aCallback;
    iPtrRecover = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionRecover2(CallbackUpdate4Recover2 aCallback, void* aPtr)
{
    iCallbackRecover2 = aCallback;
    iPtrRecover2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionRecoverKeepStore(CallbackUpdate4RecoverKeepStore aCallback, void* aPtr)
{
    iCallbackRecoverKeepStore = aCallback;
    iPtrRecoverKeepStore = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RecoverKeepStore");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoRecoverKeepStore);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionRecoverKeepStore2(CallbackUpdate4RecoverKeepStore2 aCallback, void* aPtr)
{
    iCallbackRecoverKeepStore2 = aCallback;
    iPtrRecoverKeepStore2 = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RecoverKeepStore2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoRecoverKeepStore2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionCheckNow(CallbackUpdate4CheckNow aCallback, void* aPtr)
{
    iCallbackCheckNow = aCallback;
    iPtrCheckNow = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::EnableActionGetRecoverSupported(CallbackUpdate4GetRecoverSupported aCallback, void* aPtr)
{
    iCallbackGetRecoverSupported = aCallback;
    iPtrGetRecoverSupported = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecoverSupported");
    action->AddOutputParameter(new ParameterRelated("RecoverSupported", *iPropertyRecoverSupported));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4C::DoGetRecoverSupported);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4C::DoPushManifest(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoPushManifest2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoGetSoftwareStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoGetExecutorStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoGetJobStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoApply(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoApply2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoRecover(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoRecover2(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoRecoverKeepStore(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackRecoverKeepStore != NULL);
    if (0 != iCallbackRecoverKeepStore(iPtrRecoverKeepStore, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate4C::DoRecoverKeepStore2(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Id;
    ASSERT(iCallbackRecoverKeepStore2 != NULL);
    if (0 != iCallbackRecoverKeepStore2(iPtrRecoverKeepStore2, invocationC, invocationCPtr, &Id)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respId(aInvocation, "Id");
    invocation.StartResponse();
    respId.Write(Id);
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate4C::DoCheckNow(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate4C::DoGetRecoverSupported(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkUpdate4Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkUpdate4C(aDevice);
}

void STDCALL DvProviderLinnCoUkUpdate4Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionPushManifest(THandle aProvider, CallbackUpdate4PushManifest aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionPushManifest(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionPushManifest2(THandle aProvider, CallbackUpdate4PushManifest2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionPushManifest2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate4GetSoftwareStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionGetSoftwareStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate4GetExecutorStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionGetExecutorStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetJobStatus(THandle aProvider, CallbackUpdate4GetJobStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionGetJobStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionApply(THandle aProvider, CallbackUpdate4Apply aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionApply(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionApply2(THandle aProvider, CallbackUpdate4Apply2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionApply2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecover(THandle aProvider, CallbackUpdate4Recover aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionRecover(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecover2(THandle aProvider, CallbackUpdate4Recover2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionRecover2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore(THandle aProvider, CallbackUpdate4RecoverKeepStore aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionRecoverKeepStore(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionRecoverKeepStore2(THandle aProvider, CallbackUpdate4RecoverKeepStore2 aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionRecoverKeepStore2(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionCheckNow(THandle aProvider, CallbackUpdate4CheckNow aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionCheckNow(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate4EnableActionGetRecoverSupported(THandle aProvider, CallbackUpdate4GetRecoverSupported aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnableActionGetRecoverSupported(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->SetPropertySoftwareStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate4GetPropertySoftwareStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->GetPropertySoftwareStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->SetPropertyExecutorStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate4GetPropertyExecutorStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->GetPropertyExecutorStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyJobStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->SetPropertyJobStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate4GetPropertyJobStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->GetPropertyJobStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate4SetPropertyRecoverSupported(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->SetPropertyRecoverSupported((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate4GetPropertyRecoverSupported(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->GetPropertyRecoverSupported(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderLinnCoUkUpdate4EnablePropertySoftwareStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnablePropertySoftwareStatus();
}

void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyExecutorStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnablePropertyExecutorStatus();
}

void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyJobStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnablePropertyJobStatus();
}

void STDCALL DvProviderLinnCoUkUpdate4EnablePropertyRecoverSupported(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate4C*>(aProvider)->EnablePropertyRecoverSupported();
}

