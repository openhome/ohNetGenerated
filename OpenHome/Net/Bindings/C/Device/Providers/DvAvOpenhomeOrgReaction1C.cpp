#include "DvAvOpenhomeOrgReaction1.h"
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

class DvProviderAvOpenhomeOrgReaction1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgReaction1C(DvDeviceC aDevice);
    TBool SetPropertyCanReact(TBool aValue);
    void GetPropertyCanReact(TBool& aValue);
    TBool SetPropertyCurrentReaction(const Brx& aValue);
    void GetPropertyCurrentReaction(Brhz& aValue);
    TBool SetPropertyAvailableReactions(const Brx& aValue);
    void GetPropertyAvailableReactions(Brhz& aValue);
    void EnablePropertyCanReact();
    void EnablePropertyCurrentReaction();
    void EnablePropertyAvailableReactions();
    void EnableActionGetCanReact(CallbackReaction1GetCanReact aCallback, void* aPtr);
    void EnableActionGetCurrentReaction(CallbackReaction1GetCurrentReaction aCallback, void* aPtr);
    void EnableActionGetAvailableReactions(CallbackReaction1GetAvailableReactions aCallback, void* aPtr);
    void EnableActionSetReaction(CallbackReaction1SetReaction aCallback, void* aPtr);
    void EnableActionClearReaction(CallbackReaction1ClearReaction aCallback, void* aPtr);
private:
    void DoGetCanReact(IDviInvocation& aInvocation);
    void DoGetCurrentReaction(IDviInvocation& aInvocation);
    void DoGetAvailableReactions(IDviInvocation& aInvocation);
    void DoSetReaction(IDviInvocation& aInvocation);
    void DoClearReaction(IDviInvocation& aInvocation);
private:
    CallbackReaction1GetCanReact iCallbackGetCanReact;
    void* iPtrGetCanReact;
    CallbackReaction1GetCurrentReaction iCallbackGetCurrentReaction;
    void* iPtrGetCurrentReaction;
    CallbackReaction1GetAvailableReactions iCallbackGetAvailableReactions;
    void* iPtrGetAvailableReactions;
    CallbackReaction1SetReaction iCallbackSetReaction;
    void* iPtrSetReaction;
    CallbackReaction1ClearReaction iCallbackClearReaction;
    void* iPtrClearReaction;
    PropertyBool* iPropertyCanReact;
    PropertyString* iPropertyCurrentReaction;
    PropertyString* iPropertyAvailableReactions;
};

DvProviderAvOpenhomeOrgReaction1C::DvProviderAvOpenhomeOrgReaction1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Reaction", 1)
{
    iPropertyCanReact = NULL;
    iPropertyCurrentReaction = NULL;
    iPropertyAvailableReactions = NULL;
}

TBool DvProviderAvOpenhomeOrgReaction1C::SetPropertyCanReact(TBool aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    return SetPropertyBool(*iPropertyCanReact, aValue);
}

void DvProviderAvOpenhomeOrgReaction1C::GetPropertyCanReact(TBool& aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    aValue = iPropertyCanReact->Value();
}

TBool DvProviderAvOpenhomeOrgReaction1C::SetPropertyCurrentReaction(const Brx& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    return SetPropertyString(*iPropertyCurrentReaction, aValue);
}

void DvProviderAvOpenhomeOrgReaction1C::GetPropertyCurrentReaction(Brhz& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    aValue.Set(iPropertyCurrentReaction->Value());
}

TBool DvProviderAvOpenhomeOrgReaction1C::SetPropertyAvailableReactions(const Brx& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    return SetPropertyString(*iPropertyAvailableReactions, aValue);
}

void DvProviderAvOpenhomeOrgReaction1C::GetPropertyAvailableReactions(Brhz& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    aValue.Set(iPropertyAvailableReactions->Value());
}

void DvProviderAvOpenhomeOrgReaction1C::EnablePropertyCanReact()
{
    iPropertyCanReact = new PropertyBool(new ParameterBool("CanReact"));
    iService->AddProperty(iPropertyCanReact); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1C::EnablePropertyCurrentReaction()
{
    iPropertyCurrentReaction = new PropertyString(new ParameterString("CurrentReaction"));
    iService->AddProperty(iPropertyCurrentReaction); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1C::EnablePropertyAvailableReactions()
{
    iPropertyAvailableReactions = new PropertyString(new ParameterString("AvailableReactions"));
    iService->AddProperty(iPropertyAvailableReactions); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1C::EnableActionGetCanReact(CallbackReaction1GetCanReact aCallback, void* aPtr)
{
    iCallbackGetCanReact = aCallback;
    iPtrGetCanReact = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCanReact");
    action->AddOutputParameter(new ParameterBool("CanReact"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1C::DoGetCanReact);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1C::EnableActionGetCurrentReaction(CallbackReaction1GetCurrentReaction aCallback, void* aPtr)
{
    iCallbackGetCurrentReaction = aCallback;
    iPtrGetCurrentReaction = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCurrentReaction");
    action->AddOutputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1C::DoGetCurrentReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1C::EnableActionGetAvailableReactions(CallbackReaction1GetAvailableReactions aCallback, void* aPtr)
{
    iCallbackGetAvailableReactions = aCallback;
    iPtrGetAvailableReactions = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAvailableReactions");
    action->AddOutputParameter(new ParameterString("AvailableReactions"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1C::DoGetAvailableReactions);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1C::EnableActionSetReaction(CallbackReaction1SetReaction aCallback, void* aPtr)
{
    iCallbackSetReaction = aCallback;
    iPtrSetReaction = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetReaction");
    action->AddInputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1C::DoSetReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1C::EnableActionClearReaction(CallbackReaction1ClearReaction aCallback, void* aPtr)
{
    iCallbackClearReaction = aCallback;
    iPtrClearReaction = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearReaction");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1C::DoClearReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1C::DoGetCanReact(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t CanReact;
    ASSERT(iCallbackGetCanReact != NULL);
    if (0 != iCallbackGetCanReact(iPtrGetCanReact, invocationC, invocationCPtr, &CanReact)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respCanReact(aInvocation, "CanReact");
    invocation.StartResponse();
    respCanReact.Write((CanReact!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgReaction1C::DoGetCurrentReaction(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Reaction;
    ASSERT(iCallbackGetCurrentReaction != NULL);
    if (0 != iCallbackGetCurrentReaction(iPtrGetCurrentReaction, invocationC, invocationCPtr, &Reaction)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respReaction(aInvocation, "Reaction");
    invocation.StartResponse();
    Brhz bufReaction((const TChar*)Reaction);
    OhNetFreeExternal(Reaction);
    respReaction.Write(bufReaction);
    respReaction.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgReaction1C::DoGetAvailableReactions(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* AvailableReactions;
    ASSERT(iCallbackGetAvailableReactions != NULL);
    if (0 != iCallbackGetAvailableReactions(iPtrGetAvailableReactions, invocationC, invocationCPtr, &AvailableReactions)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respAvailableReactions(aInvocation, "AvailableReactions");
    invocation.StartResponse();
    Brhz bufAvailableReactions((const TChar*)AvailableReactions);
    OhNetFreeExternal(AvailableReactions);
    respAvailableReactions.Write(bufAvailableReactions);
    respAvailableReactions.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgReaction1C::DoSetReaction(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Reaction;
    aInvocation.InvocationReadString("Reaction", Reaction);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetReaction != NULL);
    if (0 != iCallbackSetReaction(iPtrSetReaction, invocationC, invocationCPtr, (const char*)Reaction.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgReaction1C::DoClearReaction(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearReaction != NULL);
    if (0 != iCallbackClearReaction(iPtrClearReaction, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgReaction1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgReaction1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetCanReact(THandle aProvider, CallbackReaction1GetCanReact aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnableActionGetCanReact(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetCurrentReaction(THandle aProvider, CallbackReaction1GetCurrentReaction aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnableActionGetCurrentReaction(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionGetAvailableReactions(THandle aProvider, CallbackReaction1GetAvailableReactions aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnableActionGetAvailableReactions(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionSetReaction(THandle aProvider, CallbackReaction1SetReaction aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnableActionSetReaction(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnableActionClearReaction(THandle aProvider, CallbackReaction1ClearReaction aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnableActionClearReaction(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyCanReact(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->SetPropertyCanReact((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyCanReact(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->GetPropertyCanReact(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyCurrentReaction(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->SetPropertyCurrentReaction(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyCurrentReaction(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->GetPropertyCurrentReaction(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgReaction1SetPropertyAvailableReactions(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->SetPropertyAvailableReactions(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgReaction1GetPropertyAvailableReactions(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->GetPropertyAvailableReactions(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyCanReact(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnablePropertyCanReact();
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyCurrentReaction(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnablePropertyCurrentReaction();
}

void STDCALL DvProviderAvOpenhomeOrgReaction1EnablePropertyAvailableReactions(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgReaction1C*>(aProvider)->EnablePropertyAvailableReactions();
}

