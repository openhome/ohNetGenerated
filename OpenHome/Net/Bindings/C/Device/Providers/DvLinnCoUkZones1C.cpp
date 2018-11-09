#include "DvLinnCoUkZones1.h"
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

class DvProviderLinnCoUkZones1C : public DvProvider
{
public:
    DvProviderLinnCoUkZones1C(DvDeviceC aDevice);
    TBool SetPropertyInputs(const Brx& aValue);
    void GetPropertyInputs(Brhz& aValue);
    TBool SetPropertyOutputs(const Brx& aValue);
    void GetPropertyOutputs(Brhz& aValue);
    TBool SetPropertyMappings(const Brx& aValue);
    void GetPropertyMappings(Brhz& aValue);
    void EnablePropertyInputs();
    void EnablePropertyOutputs();
    void EnablePropertyMappings();
    void EnableActionGetInputs(CallbackZones1GetInputs aCallback, void* aPtr);
    void EnableActionGetOutputs(CallbackZones1GetOutputs aCallback, void* aPtr);
    void EnableActionGetMappings(CallbackZones1GetMappings aCallback, void* aPtr);
    void EnableActionSetMappings(CallbackZones1SetMappings aCallback, void* aPtr);
private:
    void DoGetInputs(IDviInvocation& aInvocation);
    void DoGetOutputs(IDviInvocation& aInvocation);
    void DoGetMappings(IDviInvocation& aInvocation);
    void DoSetMappings(IDviInvocation& aInvocation);
private:
    CallbackZones1GetInputs iCallbackGetInputs;
    void* iPtrGetInputs;
    CallbackZones1GetOutputs iCallbackGetOutputs;
    void* iPtrGetOutputs;
    CallbackZones1GetMappings iCallbackGetMappings;
    void* iPtrGetMappings;
    CallbackZones1SetMappings iCallbackSetMappings;
    void* iPtrSetMappings;
    PropertyString* iPropertyInputs;
    PropertyString* iPropertyOutputs;
    PropertyString* iPropertyMappings;
};

DvProviderLinnCoUkZones1C::DvProviderLinnCoUkZones1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Zones", 1)
{
    iPropertyInputs = NULL;
    iPropertyOutputs = NULL;
    iPropertyMappings = NULL;
}

TBool DvProviderLinnCoUkZones1C::SetPropertyInputs(const Brx& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    return SetPropertyString(*iPropertyInputs, aValue);
}

void DvProviderLinnCoUkZones1C::GetPropertyInputs(Brhz& aValue)
{
    ASSERT(iPropertyInputs != NULL);
    aValue.Set(iPropertyInputs->Value());
}

TBool DvProviderLinnCoUkZones1C::SetPropertyOutputs(const Brx& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    return SetPropertyString(*iPropertyOutputs, aValue);
}

void DvProviderLinnCoUkZones1C::GetPropertyOutputs(Brhz& aValue)
{
    ASSERT(iPropertyOutputs != NULL);
    aValue.Set(iPropertyOutputs->Value());
}

TBool DvProviderLinnCoUkZones1C::SetPropertyMappings(const Brx& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    return SetPropertyString(*iPropertyMappings, aValue);
}

void DvProviderLinnCoUkZones1C::GetPropertyMappings(Brhz& aValue)
{
    ASSERT(iPropertyMappings != NULL);
    aValue.Set(iPropertyMappings->Value());
}

void DvProviderLinnCoUkZones1C::EnablePropertyInputs()
{
    iPropertyInputs = new PropertyString(new ParameterString("Inputs"));
    iService->AddProperty(iPropertyInputs); // passes ownership
}

void DvProviderLinnCoUkZones1C::EnablePropertyOutputs()
{
    iPropertyOutputs = new PropertyString(new ParameterString("Outputs"));
    iService->AddProperty(iPropertyOutputs); // passes ownership
}

void DvProviderLinnCoUkZones1C::EnablePropertyMappings()
{
    iPropertyMappings = new PropertyString(new ParameterString("Mappings"));
    iService->AddProperty(iPropertyMappings); // passes ownership
}

void DvProviderLinnCoUkZones1C::EnableActionGetInputs(CallbackZones1GetInputs aCallback, void* aPtr)
{
    iCallbackGetInputs = aCallback;
    iPtrGetInputs = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetInputs");
    action->AddOutputParameter(new ParameterRelated("Inputs", *iPropertyInputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1C::DoGetInputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1C::EnableActionGetOutputs(CallbackZones1GetOutputs aCallback, void* aPtr)
{
    iCallbackGetOutputs = aCallback;
    iPtrGetOutputs = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetOutputs");
    action->AddOutputParameter(new ParameterRelated("Outputs", *iPropertyOutputs));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1C::DoGetOutputs);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1C::EnableActionGetMappings(CallbackZones1GetMappings aCallback, void* aPtr)
{
    iCallbackGetMappings = aCallback;
    iPtrGetMappings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetMappings");
    action->AddOutputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1C::DoGetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1C::EnableActionSetMappings(CallbackZones1SetMappings aCallback, void* aPtr)
{
    iCallbackSetMappings = aCallback;
    iPtrSetMappings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetMappings");
    action->AddInputParameter(new ParameterRelated("Mappings", *iPropertyMappings));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZones1C::DoSetMappings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZones1C::DoGetInputs(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Inputs;
    ASSERT(iCallbackGetInputs != NULL);
    if (0 != iCallbackGetInputs(iPtrGetInputs, invocationC, invocationCPtr, &Inputs)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respInputs(aInvocation, "Inputs");
    invocation.StartResponse();
    Brhz bufInputs((const TChar*)Inputs);
    OhNetFreeExternal(Inputs);
    respInputs.Write(bufInputs);
    respInputs.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkZones1C::DoGetOutputs(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Outputs;
    ASSERT(iCallbackGetOutputs != NULL);
    if (0 != iCallbackGetOutputs(iPtrGetOutputs, invocationC, invocationCPtr, &Outputs)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respOutputs(aInvocation, "Outputs");
    invocation.StartResponse();
    Brhz bufOutputs((const TChar*)Outputs);
    OhNetFreeExternal(Outputs);
    respOutputs.Write(bufOutputs);
    respOutputs.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkZones1C::DoGetMappings(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Mappings;
    ASSERT(iCallbackGetMappings != NULL);
    if (0 != iCallbackGetMappings(iPtrGetMappings, invocationC, invocationCPtr, &Mappings)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respMappings(aInvocation, "Mappings");
    invocation.StartResponse();
    Brhz bufMappings((const TChar*)Mappings);
    OhNetFreeExternal(Mappings);
    respMappings.Write(bufMappings);
    respMappings.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkZones1C::DoSetMappings(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Mappings;
    aInvocation.InvocationReadString("Mappings", Mappings);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetMappings != NULL);
    if (0 != iCallbackSetMappings(iPtrSetMappings, invocationC, invocationCPtr, (const char*)Mappings.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkZones1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkZones1C(aDevice);
}

void STDCALL DvProviderLinnCoUkZones1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkZones1EnableActionGetInputs(THandle aProvider, CallbackZones1GetInputs aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnableActionGetInputs(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkZones1EnableActionGetOutputs(THandle aProvider, CallbackZones1GetOutputs aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnableActionGetOutputs(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkZones1EnableActionGetMappings(THandle aProvider, CallbackZones1GetMappings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnableActionGetMappings(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkZones1EnableActionSetMappings(THandle aProvider, CallbackZones1SetMappings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnableActionSetMappings(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyInputs(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->SetPropertyInputs(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkZones1GetPropertyInputs(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->GetPropertyInputs(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyOutputs(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->SetPropertyOutputs(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkZones1GetPropertyOutputs(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->GetPropertyOutputs(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkZones1SetPropertyMappings(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->SetPropertyMappings(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkZones1GetPropertyMappings(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->GetPropertyMappings(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderLinnCoUkZones1EnablePropertyInputs(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnablePropertyInputs();
}

void STDCALL DvProviderLinnCoUkZones1EnablePropertyOutputs(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnablePropertyOutputs();
}

void STDCALL DvProviderLinnCoUkZones1EnablePropertyMappings(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkZones1C*>(aProvider)->EnablePropertyMappings();
}

