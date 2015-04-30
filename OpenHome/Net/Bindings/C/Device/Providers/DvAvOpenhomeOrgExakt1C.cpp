#include "DvAvOpenhomeOrgExakt1.h"
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

class DvProviderAvOpenhomeOrgExakt1C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgExakt1C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertyConnectionStatus(const Brx& aValue);
    void GetPropertyConnectionStatus(Brhz& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertyConnectionStatus();
    void EnableActionDeviceList(CallbackExakt1DeviceList aCallback, void* aPtr);
    void EnableActionDeviceSettings(CallbackExakt1DeviceSettings aCallback, void* aPtr);
    void EnableActionConnectionStatus(CallbackExakt1ConnectionStatus aCallback, void* aPtr);
    void EnableActionSet(CallbackExakt1Set aCallback, void* aPtr);
    void EnableActionReprogram(CallbackExakt1Reprogram aCallback, void* aPtr);
    void EnableActionReprogramFallback(CallbackExakt1ReprogramFallback aCallback, void* aPtr);
private:
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
private:
    CallbackExakt1DeviceList iCallbackDeviceList;
    void* iPtrDeviceList;
    CallbackExakt1DeviceSettings iCallbackDeviceSettings;
    void* iPtrDeviceSettings;
    CallbackExakt1ConnectionStatus iCallbackConnectionStatus;
    void* iPtrConnectionStatus;
    CallbackExakt1Set iCallbackSet;
    void* iPtrSet;
    CallbackExakt1Reprogram iCallbackReprogram;
    void* iPtrReprogram;
    CallbackExakt1ReprogramFallback iCallbackReprogramFallback;
    void* iPtrReprogramFallback;
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
};

DvProviderAvOpenhomeOrgExakt1C::DvProviderAvOpenhomeOrgExakt1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Exakt", 1)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
}

TBool DvProviderAvOpenhomeOrgExakt1C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt1C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt1C::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt1C::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

void DvProviderAvOpenhomeOrgExakt1C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt1C::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionDeviceList(CallbackExakt1DeviceList aCallback, void* aPtr)
{
    iCallbackDeviceList = aCallback;
    iPtrDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionDeviceSettings(CallbackExakt1DeviceSettings aCallback, void* aPtr)
{
    iCallbackDeviceSettings = aCallback;
    iPtrDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionConnectionStatus(CallbackExakt1ConnectionStatus aCallback, void* aPtr)
{
    iCallbackConnectionStatus = aCallback;
    iPtrConnectionStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionSet(CallbackExakt1Set aCallback, void* aPtr)
{
    iCallbackSet = aCallback;
    iPtrSet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionReprogram(CallbackExakt1Reprogram aCallback, void* aPtr)
{
    iCallbackReprogram = aCallback;
    iPtrReprogram = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::EnableActionReprogramFallback(CallbackExakt1ReprogramFallback aCallback, void* aPtr)
{
    iCallbackReprogramFallback = aCallback;
    iPtrReprogramFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1C::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1C::DoDeviceList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* List;
    ASSERT(iCallbackDeviceList != NULL);
    if (0 != iCallbackDeviceList(iPtrDeviceList, invocationC, invocationCPtr, &List)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respList(aInvocation, "List");
    invocation.StartResponse();
    Brhz bufList((const TChar*)List);
    OhNetFreeExternal(List);
    respList.Write(bufList);
    respList.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt1C::DoDeviceSettings(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Settings;
    ASSERT(iCallbackDeviceSettings != NULL);
    if (0 != iCallbackDeviceSettings(iPtrDeviceSettings, invocationC, invocationCPtr, (const char*)DeviceId.Ptr(), &Settings)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    invocation.StartResponse();
    Brhz bufSettings((const TChar*)Settings);
    OhNetFreeExternal(Settings);
    respSettings.Write(bufSettings);
    respSettings.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt1C::DoConnectionStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ConnectionStatus;
    ASSERT(iCallbackConnectionStatus != NULL);
    if (0 != iCallbackConnectionStatus(iPtrConnectionStatus, invocationC, invocationCPtr, &ConnectionStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respConnectionStatus(aInvocation, "ConnectionStatus");
    invocation.StartResponse();
    Brhz bufConnectionStatus((const TChar*)ConnectionStatus);
    OhNetFreeExternal(ConnectionStatus);
    respConnectionStatus.Write(bufConnectionStatus);
    respConnectionStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt1C::DoSet(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    TUint BankId = aInvocation.InvocationReadUint("BankId");
    Brhz FileUri;
    aInvocation.InvocationReadString("FileUri", FileUri);
    TBool Mute = aInvocation.InvocationReadBool("Mute");
    TBool Persist = aInvocation.InvocationReadBool("Persist");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSet != NULL);
    if (0 != iCallbackSet(iPtrSet, invocationC, invocationCPtr, (const char*)DeviceId.Ptr(), BankId, (const char*)FileUri.Ptr(), Mute, Persist)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt1C::DoReprogram(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    Brhz FileUri;
    aInvocation.InvocationReadString("FileUri", FileUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackReprogram != NULL);
    if (0 != iCallbackReprogram(iPtrReprogram, invocationC, invocationCPtr, (const char*)DeviceId.Ptr(), (const char*)FileUri.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt1C::DoReprogramFallback(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    Brhz FileUri;
    aInvocation.InvocationReadString("FileUri", FileUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackReprogramFallback != NULL);
    if (0 != iCallbackReprogramFallback(iPtrReprogramFallback, invocationC, invocationCPtr, (const char*)DeviceId.Ptr(), (const char*)FileUri.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgExakt1Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgExakt1C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionDeviceList(THandle aProvider, CallbackExakt1DeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionDeviceSettings(THandle aProvider, CallbackExakt1DeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionConnectionStatus(THandle aProvider, CallbackExakt1ConnectionStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionConnectionStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionSet(THandle aProvider, CallbackExakt1Set aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionSet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionReprogram(THandle aProvider, CallbackExakt1Reprogram aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionReprogram(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnableActionReprogramFallback(THandle aProvider, CallbackExakt1ReprogramFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnableActionReprogramFallback(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt1SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt1GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt1SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->SetPropertyConnectionStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt1GetPropertyConnectionStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->GetPropertyConnectionStatus(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderAvOpenhomeOrgExakt1EnablePropertyConnectionStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt1C*>(aProvider)->EnablePropertyConnectionStatus();
}

