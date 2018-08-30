#include "DvAvOpenhomeOrgConfigApp1.h"
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

class DvProviderAvOpenhomeOrgConfigApp1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgConfigApp1C(DvDeviceC aDevice);
    TBool SetPropertyKeys(const Brx& aValue);
    void GetPropertyKeys(Brhz& aValue);
    void EnablePropertyKeys();
    void EnableActionGetKeys(CallbackConfigApp1GetKeys aCallback, void* aPtr);
    void EnableActionSetValue(CallbackConfigApp1SetValue aCallback, void* aPtr);
    void EnableActionGetValue(CallbackConfigApp1GetValue aCallback, void* aPtr);
    void EnableActionResetAll(CallbackConfigApp1ResetAll aCallback, void* aPtr);
private:
    void DoGetKeys(IDviInvocation& aInvocation);
    void DoSetValue(IDviInvocation& aInvocation);
    void DoGetValue(IDviInvocation& aInvocation);
    void DoResetAll(IDviInvocation& aInvocation);
private:
    CallbackConfigApp1GetKeys iCallbackGetKeys;
    void* iPtrGetKeys;
    CallbackConfigApp1SetValue iCallbackSetValue;
    void* iPtrSetValue;
    CallbackConfigApp1GetValue iCallbackGetValue;
    void* iPtrGetValue;
    CallbackConfigApp1ResetAll iCallbackResetAll;
    void* iPtrResetAll;
    PropertyString* iPropertyKeys;
};

DvProviderAvOpenhomeOrgConfigApp1C::DvProviderAvOpenhomeOrgConfigApp1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "ConfigApp", 1)
{
    iPropertyKeys = NULL;
}

TBool DvProviderAvOpenhomeOrgConfigApp1C::SetPropertyKeys(const Brx& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    return SetPropertyString(*iPropertyKeys, aValue);
}

void DvProviderAvOpenhomeOrgConfigApp1C::GetPropertyKeys(Brhz& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    aValue.Set(iPropertyKeys->Value());
}

void DvProviderAvOpenhomeOrgConfigApp1C::EnablePropertyKeys()
{
    iPropertyKeys = new PropertyString(new ParameterString("Keys"));
    iService->AddProperty(iPropertyKeys); // passes ownership
}

void DvProviderAvOpenhomeOrgConfigApp1C::EnableActionGetKeys(CallbackConfigApp1GetKeys aCallback, void* aPtr)
{
    iCallbackGetKeys = aCallback;
    iPtrGetKeys = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetKeys");
    action->AddOutputParameter(new ParameterRelated("Keys", *iPropertyKeys));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1C::DoGetKeys);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1C::EnableActionSetValue(CallbackConfigApp1SetValue aCallback, void* aPtr)
{
    iCallbackSetValue = aCallback;
    iPtrSetValue = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1C::DoSetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1C::EnableActionGetValue(CallbackConfigApp1GetValue aCallback, void* aPtr)
{
    iCallbackGetValue = aCallback;
    iPtrGetValue = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddOutputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1C::DoGetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1C::EnableActionResetAll(CallbackConfigApp1ResetAll aCallback, void* aPtr)
{
    iCallbackResetAll = aCallback;
    iPtrResetAll = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetAll");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1C::DoResetAll);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1C::DoGetKeys(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Keys;
    ASSERT(iCallbackGetKeys != NULL);
    if (0 != iCallbackGetKeys(iPtrGetKeys, invocationC, invocationCPtr, &Keys)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respKeys(aInvocation, "Keys");
    invocation.StartResponse();
    Brhz bufKeys((const TChar*)Keys);
    OhNetFreeExternal(Keys);
    respKeys.Write(bufKeys);
    respKeys.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgConfigApp1C::DoSetValue(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Key;
    aInvocation.InvocationReadString("Key", Key);
    Brhz Value;
    aInvocation.InvocationReadString("Value", Value);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetValue != NULL);
    if (0 != iCallbackSetValue(iPtrSetValue, invocationC, invocationCPtr, (const char*)Key.Ptr(), (const char*)Value.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgConfigApp1C::DoGetValue(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Key;
    aInvocation.InvocationReadString("Key", Key);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackGetValue != NULL);
    if (0 != iCallbackGetValue(iPtrGetValue, invocationC, invocationCPtr, (const char*)Key.Ptr(), &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgConfigApp1C::DoResetAll(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackResetAll != NULL);
    if (0 != iCallbackResetAll(iPtrResetAll, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgConfigApp1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgConfigApp1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionGetKeys(THandle aProvider, CallbackConfigApp1GetKeys aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->EnableActionGetKeys(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionSetValue(THandle aProvider, CallbackConfigApp1SetValue aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->EnableActionSetValue(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionGetValue(THandle aProvider, CallbackConfigApp1GetValue aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->EnableActionGetValue(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnableActionResetAll(THandle aProvider, CallbackConfigApp1ResetAll aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->EnableActionResetAll(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgConfigApp1SetPropertyKeys(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->SetPropertyKeys(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1GetPropertyKeys(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->GetPropertyKeys(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgConfigApp1EnablePropertyKeys(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgConfigApp1C*>(aProvider)->EnablePropertyKeys();
}

