#include "DvAvOpenhomeOrgExakt2.h"
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

class DvProviderAvOpenhomeOrgExakt2C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgExakt2C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertyConnectionStatus(const Brx& aValue);
    void GetPropertyConnectionStatus(Brhz& aValue);
    TBool SetPropertyVersion(const Brx& aValue);
    void GetPropertyVersion(Brhz& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertyConnectionStatus();
    void EnablePropertyVersion();
    void EnableActionDeviceList(CallbackExakt2DeviceList aCallback, void* aPtr);
    void EnableActionDeviceSettings(CallbackExakt2DeviceSettings aCallback, void* aPtr);
    void EnableActionConnectionStatus(CallbackExakt2ConnectionStatus aCallback, void* aPtr);
    void EnableActionSet(CallbackExakt2Set aCallback, void* aPtr);
    void EnableActionReprogram(CallbackExakt2Reprogram aCallback, void* aPtr);
    void EnableActionReprogramFallback(CallbackExakt2ReprogramFallback aCallback, void* aPtr);
    void EnableActionVersion(CallbackExakt2Version aCallback, void* aPtr);
private:
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
private:
    CallbackExakt2DeviceList iCallbackDeviceList;
    void* iPtrDeviceList;
    CallbackExakt2DeviceSettings iCallbackDeviceSettings;
    void* iPtrDeviceSettings;
    CallbackExakt2ConnectionStatus iCallbackConnectionStatus;
    void* iPtrConnectionStatus;
    CallbackExakt2Set iCallbackSet;
    void* iPtrSet;
    CallbackExakt2Reprogram iCallbackReprogram;
    void* iPtrReprogram;
    CallbackExakt2ReprogramFallback iCallbackReprogramFallback;
    void* iPtrReprogramFallback;
    CallbackExakt2Version iCallbackVersion;
    void* iPtrVersion;
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
    PropertyString* iPropertyVersion;
};

DvProviderAvOpenhomeOrgExakt2C::DvProviderAvOpenhomeOrgExakt2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Exakt", 2)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyVersion = NULL;
}

TBool DvProviderAvOpenhomeOrgExakt2C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt2C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt2C::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt2C::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt2C::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt2C::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

void DvProviderAvOpenhomeOrgExakt2C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(iDvStack.Env(), new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2C::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(iDvStack.Env(), new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(iDvStack.Env(), new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionDeviceList(CallbackExakt2DeviceList aCallback, void* aPtr)
{
    iCallbackDeviceList = aCallback;
    iPtrDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionDeviceSettings(CallbackExakt2DeviceSettings aCallback, void* aPtr)
{
    iCallbackDeviceSettings = aCallback;
    iPtrDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionConnectionStatus(CallbackExakt2ConnectionStatus aCallback, void* aPtr)
{
    iCallbackConnectionStatus = aCallback;
    iPtrConnectionStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionSet(CallbackExakt2Set aCallback, void* aPtr)
{
    iCallbackSet = aCallback;
    iPtrSet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionReprogram(CallbackExakt2Reprogram aCallback, void* aPtr)
{
    iCallbackReprogram = aCallback;
    iPtrReprogram = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionReprogramFallback(CallbackExakt2ReprogramFallback aCallback, void* aPtr)
{
    iCallbackReprogramFallback = aCallback;
    iPtrReprogramFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::EnableActionVersion(CallbackExakt2Version aCallback, void* aPtr)
{
    iCallbackVersion = aCallback;
    iPtrVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2C::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2C::DoDeviceList(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoConnectionStatus(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2C::DoVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Version;
    ASSERT(iCallbackVersion != NULL);
    if (0 != iCallbackVersion(iPtrVersion, invocationC, invocationCPtr, &Version)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respVersion(aInvocation, "Version");
    invocation.StartResponse();
    Brhz bufVersion((const TChar*)Version);
    OhNetFreeExternal(Version);
    respVersion.Write(bufVersion);
    respVersion.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgExakt2Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgExakt2C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionDeviceList(THandle aProvider, CallbackExakt2DeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionDeviceSettings(THandle aProvider, CallbackExakt2DeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionConnectionStatus(THandle aProvider, CallbackExakt2ConnectionStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionConnectionStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionSet(THandle aProvider, CallbackExakt2Set aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionSet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionReprogram(THandle aProvider, CallbackExakt2Reprogram aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionReprogram(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionReprogramFallback(THandle aProvider, CallbackExakt2ReprogramFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionReprogramFallback(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnableActionVersion(THandle aProvider, CallbackExakt2Version aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnableActionVersion(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->SetPropertyConnectionStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyConnectionStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->GetPropertyConnectionStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt2SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->SetPropertyVersion(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt2GetPropertyVersion(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->GetPropertyVersion(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyConnectionStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnablePropertyConnectionStatus();
}

void STDCALL DvProviderAvOpenhomeOrgExakt2EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt2C*>(aProvider)->EnablePropertyVersion();
}

