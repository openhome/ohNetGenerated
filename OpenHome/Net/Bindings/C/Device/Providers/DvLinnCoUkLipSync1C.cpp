#include "DvLinnCoUkLipSync1.h"
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

class DvProviderLinnCoUkLipSync1C : public DvProvider
{
public:
    DvProviderLinnCoUkLipSync1C(DvDeviceC aDevice);
    TBool SetPropertyDelay(TUint aValue);
    void GetPropertyDelay(TUint& aValue);
    TBool SetPropertyDelayMinimum(TUint aValue);
    void GetPropertyDelayMinimum(TUint& aValue);
    TBool SetPropertyDelayMaximum(TUint aValue);
    void GetPropertyDelayMaximum(TUint& aValue);
    void EnablePropertyDelay();
    void EnablePropertyDelayMinimum();
    void EnablePropertyDelayMaximum();
    void EnableActionSetDelay(CallbackLipSync1SetDelay aCallback, void* aPtr);
    void EnableActionDelay(CallbackLipSync1Delay aCallback, void* aPtr);
    void EnableActionDelayMinimum(CallbackLipSync1DelayMinimum aCallback, void* aPtr);
    void EnableActionDelayMaximum(CallbackLipSync1DelayMaximum aCallback, void* aPtr);
private:
    void DoSetDelay(IDviInvocation& aInvocation);
    void DoDelay(IDviInvocation& aInvocation);
    void DoDelayMinimum(IDviInvocation& aInvocation);
    void DoDelayMaximum(IDviInvocation& aInvocation);
private:
    CallbackLipSync1SetDelay iCallbackSetDelay;
    void* iPtrSetDelay;
    CallbackLipSync1Delay iCallbackDelay;
    void* iPtrDelay;
    CallbackLipSync1DelayMinimum iCallbackDelayMinimum;
    void* iPtrDelayMinimum;
    CallbackLipSync1DelayMaximum iCallbackDelayMaximum;
    void* iPtrDelayMaximum;
    PropertyUint* iPropertyDelay;
    PropertyUint* iPropertyDelayMinimum;
    PropertyUint* iPropertyDelayMaximum;
};

DvProviderLinnCoUkLipSync1C::DvProviderLinnCoUkLipSync1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "LipSync", 1)
{
    iPropertyDelay = NULL;
    iPropertyDelayMinimum = NULL;
    iPropertyDelayMaximum = NULL;
}

TBool DvProviderLinnCoUkLipSync1C::SetPropertyDelay(TUint aValue)
{
    ASSERT(iPropertyDelay != NULL);
    return SetPropertyUint(*iPropertyDelay, aValue);
}

void DvProviderLinnCoUkLipSync1C::GetPropertyDelay(TUint& aValue)
{
    ASSERT(iPropertyDelay != NULL);
    aValue = iPropertyDelay->Value();
}

TBool DvProviderLinnCoUkLipSync1C::SetPropertyDelayMinimum(TUint aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    return SetPropertyUint(*iPropertyDelayMinimum, aValue);
}

void DvProviderLinnCoUkLipSync1C::GetPropertyDelayMinimum(TUint& aValue)
{
    ASSERT(iPropertyDelayMinimum != NULL);
    aValue = iPropertyDelayMinimum->Value();
}

TBool DvProviderLinnCoUkLipSync1C::SetPropertyDelayMaximum(TUint aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    return SetPropertyUint(*iPropertyDelayMaximum, aValue);
}

void DvProviderLinnCoUkLipSync1C::GetPropertyDelayMaximum(TUint& aValue)
{
    ASSERT(iPropertyDelayMaximum != NULL);
    aValue = iPropertyDelayMaximum->Value();
}

void DvProviderLinnCoUkLipSync1C::EnablePropertyDelay()
{
    iPropertyDelay = new PropertyUint(new ParameterUint("Delay"));
    iService->AddProperty(iPropertyDelay); // passes ownership
}

void DvProviderLinnCoUkLipSync1C::EnablePropertyDelayMinimum()
{
    iPropertyDelayMinimum = new PropertyUint(new ParameterUint("DelayMinimum"));
    iService->AddProperty(iPropertyDelayMinimum); // passes ownership
}

void DvProviderLinnCoUkLipSync1C::EnablePropertyDelayMaximum()
{
    iPropertyDelayMaximum = new PropertyUint(new ParameterUint("DelayMaximum"));
    iService->AddProperty(iPropertyDelayMaximum); // passes ownership
}

void DvProviderLinnCoUkLipSync1C::EnableActionSetDelay(CallbackLipSync1SetDelay aCallback, void* aPtr)
{
    iCallbackSetDelay = aCallback;
    iPtrSetDelay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetDelay");
    action->AddInputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1C::DoSetDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1C::EnableActionDelay(CallbackLipSync1Delay aCallback, void* aPtr)
{
    iCallbackDelay = aCallback;
    iPtrDelay = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Delay");
    action->AddOutputParameter(new ParameterRelated("Delay", *iPropertyDelay));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1C::DoDelay);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1C::EnableActionDelayMinimum(CallbackLipSync1DelayMinimum aCallback, void* aPtr)
{
    iCallbackDelayMinimum = aCallback;
    iPtrDelayMinimum = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMinimum");
    action->AddOutputParameter(new ParameterRelated("Min", *iPropertyDelayMinimum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1C::DoDelayMinimum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1C::EnableActionDelayMaximum(CallbackLipSync1DelayMaximum aCallback, void* aPtr)
{
    iCallbackDelayMaximum = aCallback;
    iPtrDelayMaximum = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DelayMaximum");
    action->AddOutputParameter(new ParameterRelated("Max", *iPropertyDelayMaximum));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkLipSync1C::DoDelayMaximum);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkLipSync1C::DoSetDelay(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Delay = aInvocation.InvocationReadUint("Delay");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetDelay != NULL);
    if (0 != iCallbackSetDelay(iPtrSetDelay, invocationC, invocationCPtr, Delay)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkLipSync1C::DoDelay(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Delay;
    ASSERT(iCallbackDelay != NULL);
    if (0 != iCallbackDelay(iPtrDelay, invocationC, invocationCPtr, &Delay)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respDelay(aInvocation, "Delay");
    invocation.StartResponse();
    respDelay.Write(Delay);
    invocation.EndResponse();
}

void DvProviderLinnCoUkLipSync1C::DoDelayMinimum(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Min;
    ASSERT(iCallbackDelayMinimum != NULL);
    if (0 != iCallbackDelayMinimum(iPtrDelayMinimum, invocationC, invocationCPtr, &Min)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respMin(aInvocation, "Min");
    invocation.StartResponse();
    respMin.Write(Min);
    invocation.EndResponse();
}

void DvProviderLinnCoUkLipSync1C::DoDelayMaximum(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Max;
    ASSERT(iCallbackDelayMaximum != NULL);
    if (0 != iCallbackDelayMaximum(iPtrDelayMaximum, invocationC, invocationCPtr, &Max)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respMax(aInvocation, "Max");
    invocation.StartResponse();
    respMax.Write(Max);
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkLipSync1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkLipSync1C(aDevice);
}

void STDCALL DvProviderLinnCoUkLipSync1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkLipSync1EnableActionSetDelay(THandle aProvider, CallbackLipSync1SetDelay aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnableActionSetDelay(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelay(THandle aProvider, CallbackLipSync1Delay aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnableActionDelay(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelayMinimum(THandle aProvider, CallbackLipSync1DelayMinimum aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnableActionDelayMinimum(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkLipSync1EnableActionDelayMaximum(THandle aProvider, CallbackLipSync1DelayMaximum aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnableActionDelayMaximum(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelay(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->SetPropertyDelay(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelay(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->GetPropertyDelay(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelayMinimum(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->SetPropertyDelayMinimum(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelayMinimum(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->GetPropertyDelayMinimum(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkLipSync1SetPropertyDelayMaximum(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->SetPropertyDelayMaximum(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkLipSync1GetPropertyDelayMaximum(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->GetPropertyDelayMaximum(val);
    *aValue = val;
}

void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelay(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnablePropertyDelay();
}

void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelayMinimum(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnablePropertyDelayMinimum();
}

void STDCALL DvProviderLinnCoUkLipSync1EnablePropertyDelayMaximum(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkLipSync1C*>(aProvider)->EnablePropertyDelayMaximum();
}

