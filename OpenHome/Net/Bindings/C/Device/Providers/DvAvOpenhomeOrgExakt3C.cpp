#include "DvAvOpenhomeOrgExakt3.h"
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

class DvProviderAvOpenhomeOrgExakt3C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgExakt3C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertyConnectionStatus(const Brx& aValue);
    void GetPropertyConnectionStatus(Brhz& aValue);
    TBool SetPropertyChannelMap(const Brx& aValue);
    void GetPropertyChannelMap(Brhz& aValue);
    TBool SetPropertyVersion(const Brx& aValue);
    void GetPropertyVersion(Brhz& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertyConnectionStatus();
    void EnablePropertyChannelMap();
    void EnablePropertyVersion();
    void EnableActionDeviceList(CallbackExakt3DeviceList aCallback, void* aPtr);
    void EnableActionDeviceSettings(CallbackExakt3DeviceSettings aCallback, void* aPtr);
    void EnableActionConnectionStatus(CallbackExakt3ConnectionStatus aCallback, void* aPtr);
    void EnableActionSet(CallbackExakt3Set aCallback, void* aPtr);
    void EnableActionReprogram(CallbackExakt3Reprogram aCallback, void* aPtr);
    void EnableActionReprogramFallback(CallbackExakt3ReprogramFallback aCallback, void* aPtr);
    void EnableActionChannelMap(CallbackExakt3ChannelMap aCallback, void* aPtr);
    void EnableActionSetChannelMap(CallbackExakt3SetChannelMap aCallback, void* aPtr);
    void EnableActionVersion(CallbackExakt3Version aCallback, void* aPtr);
private:
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
    void DoChannelMap(IDviInvocation& aInvocation);
    void DoSetChannelMap(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
private:
    CallbackExakt3DeviceList iCallbackDeviceList;
    void* iPtrDeviceList;
    CallbackExakt3DeviceSettings iCallbackDeviceSettings;
    void* iPtrDeviceSettings;
    CallbackExakt3ConnectionStatus iCallbackConnectionStatus;
    void* iPtrConnectionStatus;
    CallbackExakt3Set iCallbackSet;
    void* iPtrSet;
    CallbackExakt3Reprogram iCallbackReprogram;
    void* iPtrReprogram;
    CallbackExakt3ReprogramFallback iCallbackReprogramFallback;
    void* iPtrReprogramFallback;
    CallbackExakt3ChannelMap iCallbackChannelMap;
    void* iPtrChannelMap;
    CallbackExakt3SetChannelMap iCallbackSetChannelMap;
    void* iPtrSetChannelMap;
    CallbackExakt3Version iCallbackVersion;
    void* iPtrVersion;
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyVersion;
};

DvProviderAvOpenhomeOrgExakt3C::DvProviderAvOpenhomeOrgExakt3C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Exakt", 3)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyVersion = NULL;
}

TBool DvProviderAvOpenhomeOrgExakt3C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt3C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3C::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt3C::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3C::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderAvOpenhomeOrgExakt3C::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3C::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt3C::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

void DvProviderAvOpenhomeOrgExakt3C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3C::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3C::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionDeviceList(CallbackExakt3DeviceList aCallback, void* aPtr)
{
    iCallbackDeviceList = aCallback;
    iPtrDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionDeviceSettings(CallbackExakt3DeviceSettings aCallback, void* aPtr)
{
    iCallbackDeviceSettings = aCallback;
    iPtrDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionConnectionStatus(CallbackExakt3ConnectionStatus aCallback, void* aPtr)
{
    iCallbackConnectionStatus = aCallback;
    iPtrConnectionStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionSet(CallbackExakt3Set aCallback, void* aPtr)
{
    iCallbackSet = aCallback;
    iPtrSet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionReprogram(CallbackExakt3Reprogram aCallback, void* aPtr)
{
    iCallbackReprogram = aCallback;
    iPtrReprogram = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionReprogramFallback(CallbackExakt3ReprogramFallback aCallback, void* aPtr)
{
    iCallbackReprogramFallback = aCallback;
    iPtrReprogramFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionChannelMap(CallbackExakt3ChannelMap aCallback, void* aPtr)
{
    iCallbackChannelMap = aCallback;
    iPtrChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionSetChannelMap(CallbackExakt3SetChannelMap aCallback, void* aPtr)
{
    iCallbackSetChannelMap = aCallback;
    iPtrSetChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::EnableActionVersion(CallbackExakt3Version aCallback, void* aPtr)
{
    iCallbackVersion = aCallback;
    iPtrVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3C::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3C::DoDeviceList(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoConnectionStatus(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3C::DoChannelMap(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ChannelMap;
    ASSERT(iCallbackChannelMap != NULL);
    if (0 != iCallbackChannelMap(iPtrChannelMap, invocationC, invocationCPtr, &ChannelMap)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    invocation.StartResponse();
    Brhz bufChannelMap((const TChar*)ChannelMap);
    OhNetFreeExternal(ChannelMap);
    respChannelMap.Write(bufChannelMap);
    respChannelMap.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt3C::DoSetChannelMap(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetChannelMap != NULL);
    if (0 != iCallbackSetChannelMap(iPtrSetChannelMap, invocationC, invocationCPtr, (const char*)ChannelMap.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt3C::DoVersion(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgExakt3Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgExakt3C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionDeviceList(THandle aProvider, CallbackExakt3DeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionDeviceSettings(THandle aProvider, CallbackExakt3DeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionConnectionStatus(THandle aProvider, CallbackExakt3ConnectionStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionConnectionStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionSet(THandle aProvider, CallbackExakt3Set aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionSet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionReprogram(THandle aProvider, CallbackExakt3Reprogram aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionReprogram(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionReprogramFallback(THandle aProvider, CallbackExakt3ReprogramFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionReprogramFallback(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionChannelMap(THandle aProvider, CallbackExakt3ChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionSetChannelMap(THandle aProvider, CallbackExakt3SetChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionSetChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnableActionVersion(THandle aProvider, CallbackExakt3Version aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnableActionVersion(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->SetPropertyConnectionStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyConnectionStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->GetPropertyConnectionStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->SetPropertyChannelMap(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyChannelMap(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->GetPropertyChannelMap(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt3SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->SetPropertyVersion(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt3GetPropertyVersion(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->GetPropertyVersion(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyConnectionStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnablePropertyConnectionStatus();
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyChannelMap(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnablePropertyChannelMap();
}

void STDCALL DvProviderAvOpenhomeOrgExakt3EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt3C*>(aProvider)->EnablePropertyVersion();
}

