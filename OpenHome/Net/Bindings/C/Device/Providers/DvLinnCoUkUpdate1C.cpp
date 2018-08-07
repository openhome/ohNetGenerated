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
    TBool SetPropertyUpdateTopic(const Brx& aValue);
    void GetPropertyUpdateTopic(Brhz& aValue);
    TBool SetPropertyUpdateChannel(const Brx& aValue);
    void GetPropertyUpdateChannel(Brhz& aValue);
    void EnablePropertySoftwareStatus();
    void EnablePropertyExecutorStatus();
    void EnablePropertyUpdateTopic();
    void EnablePropertyUpdateChannel();
    void EnableActionPushManifest(CallbackUpdate1PushManifest aCallback, void* aPtr);
    void EnableActionSetUpdateFeedParams(CallbackUpdate1SetUpdateFeedParams aCallback, void* aPtr);
    void EnableActionGetUpdateFeedParams(CallbackUpdate1GetUpdateFeedParams aCallback, void* aPtr);
    void EnableActionGetSoftwareStatus(CallbackUpdate1GetSoftwareStatus aCallback, void* aPtr);
    void EnableActionGetExecutorStatus(CallbackUpdate1GetExecutorStatus aCallback, void* aPtr);
    void EnableActionApply(CallbackUpdate1Apply aCallback, void* aPtr);
    void EnableActionRestore(CallbackUpdate1Restore aCallback, void* aPtr);
private:
    void DoPushManifest(IDviInvocation& aInvocation);
    void DoSetUpdateFeedParams(IDviInvocation& aInvocation);
    void DoGetUpdateFeedParams(IDviInvocation& aInvocation);
    void DoGetSoftwareStatus(IDviInvocation& aInvocation);
    void DoGetExecutorStatus(IDviInvocation& aInvocation);
    void DoApply(IDviInvocation& aInvocation);
    void DoRestore(IDviInvocation& aInvocation);
private:
    CallbackUpdate1PushManifest iCallbackPushManifest;
    void* iPtrPushManifest;
    CallbackUpdate1SetUpdateFeedParams iCallbackSetUpdateFeedParams;
    void* iPtrSetUpdateFeedParams;
    CallbackUpdate1GetUpdateFeedParams iCallbackGetUpdateFeedParams;
    void* iPtrGetUpdateFeedParams;
    CallbackUpdate1GetSoftwareStatus iCallbackGetSoftwareStatus;
    void* iPtrGetSoftwareStatus;
    CallbackUpdate1GetExecutorStatus iCallbackGetExecutorStatus;
    void* iPtrGetExecutorStatus;
    CallbackUpdate1Apply iCallbackApply;
    void* iPtrApply;
    CallbackUpdate1Restore iCallbackRestore;
    void* iPtrRestore;
    PropertyString* iPropertySoftwareStatus;
    PropertyString* iPropertyExecutorStatus;
    PropertyString* iPropertyUpdateTopic;
    PropertyString* iPropertyUpdateChannel;
};

DvProviderLinnCoUkUpdate1C::DvProviderLinnCoUkUpdate1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Update", 1)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyUpdateTopic = NULL;
    iPropertyUpdateChannel = NULL;
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

TBool DvProviderLinnCoUkUpdate1C::SetPropertyUpdateTopic(const Brx& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    return SetPropertyString(*iPropertyUpdateTopic, aValue);
}

void DvProviderLinnCoUkUpdate1C::GetPropertyUpdateTopic(Brhz& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    aValue.Set(iPropertyUpdateTopic->Value());
}

TBool DvProviderLinnCoUkUpdate1C::SetPropertyUpdateChannel(const Brx& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    return SetPropertyString(*iPropertyUpdateChannel, aValue);
}

void DvProviderLinnCoUkUpdate1C::GetPropertyUpdateChannel(Brhz& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    aValue.Set(iPropertyUpdateChannel->Value());
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

void DvProviderLinnCoUkUpdate1C::EnablePropertyUpdateTopic()
{
    iPropertyUpdateTopic = new PropertyString(new ParameterString("UpdateTopic"));
    iService->AddProperty(iPropertyUpdateTopic); // passes ownership
}

void DvProviderLinnCoUkUpdate1C::EnablePropertyUpdateChannel()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    iPropertyUpdateChannel = new PropertyString(new ParameterString("UpdateChannel", allowedValues, 4));
    delete[] allowedValues;
    iService->AddProperty(iPropertyUpdateChannel); // passes ownership
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

void DvProviderLinnCoUkUpdate1C::EnableActionSetUpdateFeedParams(CallbackUpdate1SetUpdateFeedParams aCallback, void* aPtr)
{
    iCallbackSetUpdateFeedParams = aCallback;
    iPtrSetUpdateFeedParams = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpdateFeedParams");
    action->AddInputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoSetUpdateFeedParams);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1C::EnableActionGetUpdateFeedParams(CallbackUpdate1GetUpdateFeedParams aCallback, void* aPtr)
{
    iCallbackGetUpdateFeedParams = aCallback;
    iPtrGetUpdateFeedParams = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateFeedParams");
    action->AddOutputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddOutputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoGetUpdateFeedParams);
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

void DvProviderLinnCoUkUpdate1C::EnableActionRestore(CallbackUpdate1Restore aCallback, void* aPtr)
{
    iCallbackRestore = aCallback;
    iPtrRestore = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Restore");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1C::DoRestore);
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

void DvProviderLinnCoUkUpdate1C::DoSetUpdateFeedParams(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Topic;
    aInvocation.InvocationReadString("Topic", Topic);
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetUpdateFeedParams != NULL);
    if (0 != iCallbackSetUpdateFeedParams(iPtrSetUpdateFeedParams, invocationC, invocationCPtr, (const char*)Topic.Ptr(), (const char*)Channel.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkUpdate1C::DoGetUpdateFeedParams(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Topic;
    char* Channel;
    ASSERT(iCallbackGetUpdateFeedParams != NULL);
    if (0 != iCallbackGetUpdateFeedParams(iPtrGetUpdateFeedParams, invocationC, invocationCPtr, &Topic, &Channel)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respTopic(aInvocation, "Topic");
    DviInvocationResponseString respChannel(aInvocation, "Channel");
    invocation.StartResponse();
    Brhz bufTopic((const TChar*)Topic);
    OhNetFreeExternal(Topic);
    respTopic.Write(bufTopic);
    respTopic.WriteFlush();
    Brhz bufChannel((const TChar*)Channel);
    OhNetFreeExternal(Channel);
    respChannel.Write(bufChannel);
    respChannel.WriteFlush();
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

void DvProviderLinnCoUkUpdate1C::DoRestore(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackRestore != NULL);
    if (0 != iCallbackRestore(iPtrRestore, invocationC, invocationCPtr)) {
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

void STDCALL DvProviderLinnCoUkUpdate1EnableActionSetUpdateFeedParams(THandle aProvider, CallbackUpdate1SetUpdateFeedParams aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionSetUpdateFeedParams(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkUpdate1EnableActionGetUpdateFeedParams(THandle aProvider, CallbackUpdate1GetUpdateFeedParams aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionGetUpdateFeedParams(aCallback, aPtr);
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

void STDCALL DvProviderLinnCoUkUpdate1EnableActionRestore(THandle aProvider, CallbackUpdate1Restore aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnableActionRestore(aCallback, aPtr);
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

int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyUpdateTopic(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->SetPropertyUpdateTopic(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate1GetPropertyUpdateTopic(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->GetPropertyUpdateTopic(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkUpdate1SetPropertyUpdateChannel(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->SetPropertyUpdateChannel(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkUpdate1GetPropertyUpdateChannel(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->GetPropertyUpdateChannel(buf);
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

void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyUpdateTopic(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnablePropertyUpdateTopic();
}

void STDCALL DvProviderLinnCoUkUpdate1EnablePropertyUpdateChannel(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkUpdate1C*>(aProvider)->EnablePropertyUpdateChannel();
}

