#include "DvLinnCoUkUpdate1.h"
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

class DvProviderLinnCoUkUpdate1C : public DvProvider
{
public:
    DvProviderLinnCoUkUpdate1C(DvDeviceC aDevice);
    TBool SetPropertySoftwareStatus(const Brx& aValue);
    void GetPropertySoftwareStatus(Brhz& aValue);
    TBool SetPropertyExecutorStatus(const Brx& aValue);
    void GetPropertyExecutorStatus(Brhz& aValue);
    void EnablePropertySoftwareStatus();
    void EnablePropertyExecutorStatus();
    void EnableActionPushManifest(CallbackUpdate1PushManifest aCallback, void* aPtr);
    void EnableActionGetSoftwareStatus(CallbackUpdate1GetSoftwareStatus aCallback, void* aPtr);
    void EnableActionGetExecutorStatus(CallbackUpdate1GetExecutorStatus aCallback, void* aPtr);
    void EnableActionApply(CallbackUpdate1Apply aCallback, void* aPtr);
    void EnableActionRecover(CallbackUpdate1Recover aCallback, void* aPtr);
    void EnableActionCheckNow(CallbackUpdate1CheckNow aCallback, void* aPtr);
private:
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoRecover(IDviInvocation& aInvocation);
    void DoCheckNow(IDviInvocation& aInvocation);
private:
    CallbackUpdate1PushManifest iCallbackPushManifest;
    void* iPtrPushManifest;
    CallbackUpdate1GetSoftwareStatus iCallbackGetSoftwareStatus;
    void* iPtrGetSoftwareStatus;
    CallbackUpdate1GetExecutorStatus iCallbackGetExecutorStatus;
    void* iPtrGetExecutorStatus;
    CallbackUpdate1Apply iCallbackApply;
    void* iPtrApply;
    CallbackUpdate1Recover iCallbackRecover;
    void* iPtrRecover;
    CallbackUpdate1CheckNow iCallbackCheckNow;
    void* iPtrCheckNow;
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
};

DvProviderLinnCoUkUpdate1C::DvProviderLinnCoUkUpdate1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Update", 1)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
}

TBool DvProviderLinnCoUkUpdate1C::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate1C::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate1C::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate1C::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

void DvProviderLinnCoUkUpdate1C::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1C::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1C::EnableActionPushManifest(CallbackUpdate1PushManifest aCallback, void* aPtr)
{
    iCallbackPushManifest = aCallback;
    iPtrPushManifest = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionGetSoftwareStatus(CallbackUpdate1GetSoftwareStatus aCallback, void* aPtr)
{
    iCallbackGetSoftwareStatus = aCallback;
    iPtrGetSoftwareStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionGetExecutorStatus(CallbackUpdate1GetExecutorStatus aCallback, void* aPtr)
{
    iCallbackGetExecutorStatus = aCallback;
    iPtrGetExecutorStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionApply(CallbackUpdate1Apply aCallback, void* aPtr)
{
    iCallbackApply = aCallback;
    iPtrApply = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionRecover(CallbackUpdate1Recover aCallback, void* aPtr)
{
    iCallbackRecover = aCallback;
    iPtrRecover = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionCheckNow(CallbackUpdate1CheckNow aCallback, void* aPtr)
{
    iCallbackCheckNow = aCallback;
    iPtrCheckNow = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::DoPushManifest(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate1C::DoGetSoftwareStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate1C::DoGetExecutorStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate1C::DoApply(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate1C::DoRecover(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate1C::DoCheckNow(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkUpdate1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkUpdate1C(aDevice);
}

void STDCALL DvProviderLinnCoUkUpdate1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionPushManifest(THandle aProvider, CallbackUpdate1PushManifest aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionPushManifest(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetSoftwareStatus(THandle aProvider, CallbackUpdate1GetSoftwareStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionGetSoftwareStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetExecutorStatus(THandle aProvider, CallbackUpdate1GetExecutorStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionGetExecutorStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionApply(THandle aProvider, CallbackUpdate1Apply aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionApply(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionRecover(THandle aProvider, CallbackUpdate1Recover aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionRecover(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionCheckNow(THandle aProvider, CallbackUpdate1CheckNow aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionCheckNow(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertySoftwareStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->SetPropertySoftwareStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate1GetPropertySoftwareStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->GetPropertySoftwareStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyExecutorStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->SetPropertyExecutorStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate1GetPropertyExecutorStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->GetPropertyExecutorStatus(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkUpdate1EnablePropertySoftwareStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnablePropertySoftwareStatus();
}

void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyExecutorStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnablePropertyExecutorStatus();
}

