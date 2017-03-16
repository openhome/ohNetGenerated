#include "DvLinnCoUkExaktInputs1.h"
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

class DvProviderLinnCoUkExaktInputs1C : public DvProvider
{
public:
    DvProviderLinnCoUkExaktInputs1C(DvDeviceC aDevice);
    TBool SetPropertyAssociations(const Brx& aValue);
    void GetPropertyAssociations(Brhz& aValue);
    void EnablePropertyAssociations();
    void EnableActionGetAssociation(CallbackExaktInputs1GetAssociation aCallback, void* aPtr);
    void EnableActionSetAssociation(CallbackExaktInputs1SetAssociation aCallback, void* aPtr);
    void EnableActionClearAssociation(CallbackExaktInputs1ClearAssociation aCallback, void* aPtr);
    void EnableActionInputCount(CallbackExaktInputs1InputCount aCallback, void* aPtr);
private:
    void DoGetAssociation(IDviInvocation& aInvocation);
    void DoSetAssociation(IDviInvocation& aInvocation);
    void DoClearAssociation(IDviInvocation& aInvocation);
    void DoInputCount(IDviInvocation& aInvocation);
private:
    CallbackExaktInputs1GetAssociation iCallbackGetAssociation;
    void* iPtrGetAssociation;
    CallbackExaktInputs1SetAssociation iCallbackSetAssociation;
    void* iPtrSetAssociation;
    CallbackExaktInputs1ClearAssociation iCallbackClearAssociation;
    void* iPtrClearAssociation;
    CallbackExaktInputs1InputCount iCallbackInputCount;
    void* iPtrInputCount;
    PropertyString* iPropertyAssociations;
};

DvProviderLinnCoUkExaktInputs1C::DvProviderLinnCoUkExaktInputs1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "ExaktInputs", 1)
{
    iPropertyAssociations = NULL;
}

TBool DvProviderLinnCoUkExaktInputs1C::SetPropertyAssociations(const Brx& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    return SetPropertyString(*iPropertyAssociations, aValue);
}

void DvProviderLinnCoUkExaktInputs1C::GetPropertyAssociations(Brhz& aValue)
{
    ASSERT(iPropertyAssociations != NULL);
    aValue.Set(iPropertyAssociations->Value());
}

void DvProviderLinnCoUkExaktInputs1C::EnablePropertyAssociations()
{
    iPropertyAssociations = new PropertyString(new ParameterString("Associations"));
    iService->AddProperty(iPropertyAssociations); // passes ownership
}

void DvProviderLinnCoUkExaktInputs1C::EnableActionGetAssociation(CallbackExaktInputs1GetAssociation aCallback, void* aPtr)
{
    iCallbackGetAssociation = aCallback;
    iPtrGetAssociation = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddOutputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1C::DoGetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1C::EnableActionSetAssociation(CallbackExaktInputs1SetAssociation aCallback, void* aPtr)
{
    iCallbackSetAssociation = aCallback;
    iPtrSetAssociation = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    action->AddInputParameter(new ParameterString("DeviceId"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1C::DoSetAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1C::EnableActionClearAssociation(CallbackExaktInputs1ClearAssociation aCallback, void* aPtr)
{
    iCallbackClearAssociation = aCallback;
    iPtrClearAssociation = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearAssociation");
    action->AddInputParameter(new ParameterUint("InputIndex"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1C::DoClearAssociation);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1C::EnableActionInputCount(CallbackExaktInputs1InputCount aCallback, void* aPtr)
{
    iCallbackInputCount = aCallback;
    iPtrInputCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("InputCount");
    action->AddOutputParameter(new ParameterUint("InputCount"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExaktInputs1C::DoInputCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExaktInputs1C::DoGetAssociation(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* DeviceId;
    ASSERT(iCallbackGetAssociation != NULL);
    if (0 != iCallbackGetAssociation(iPtrGetAssociation, invocationC, invocationCPtr, InputIndex, &DeviceId)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respDeviceId(aInvocation, "DeviceId");
    invocation.StartResponse();
    Brhz bufDeviceId((const TChar*)DeviceId);
    OhNetFreeExternal(DeviceId);
    respDeviceId.Write(bufDeviceId);
    respDeviceId.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExaktInputs1C::DoSetAssociation(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetAssociation != NULL);
    if (0 != iCallbackSetAssociation(iPtrSetAssociation, invocationC, invocationCPtr, InputIndex, (const char*)DeviceId.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExaktInputs1C::DoClearAssociation(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint InputIndex = aInvocation.InvocationReadUint("InputIndex");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearAssociation != NULL);
    if (0 != iCallbackClearAssociation(iPtrClearAssociation, invocationC, invocationCPtr, InputIndex)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExaktInputs1C::DoInputCount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t InputCount;
    ASSERT(iCallbackInputCount != NULL);
    if (0 != iCallbackInputCount(iPtrInputCount, invocationC, invocationCPtr, &InputCount)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respInputCount(aInvocation, "InputCount");
    invocation.StartResponse();
    respInputCount.Write(InputCount);
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkExaktInputs1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkExaktInputs1C(aDevice);
}

void STDCALL DvProviderLinnCoUkExaktInputs1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionGetAssociation(THandle aProvider, CallbackExaktInputs1GetAssociation aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->EnableActionGetAssociation(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionSetAssociation(THandle aProvider, CallbackExaktInputs1SetAssociation aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->EnableActionSetAssociation(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionClearAssociation(THandle aProvider, CallbackExaktInputs1ClearAssociation aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->EnableActionClearAssociation(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExaktInputs1EnableActionInputCount(THandle aProvider, CallbackExaktInputs1InputCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->EnableActionInputCount(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkExaktInputs1SetPropertyAssociations(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->SetPropertyAssociations(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExaktInputs1GetPropertyAssociations(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->GetPropertyAssociations(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkExaktInputs1EnablePropertyAssociations(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExaktInputs1C*>(aProvider)->EnablePropertyAssociations();
}

