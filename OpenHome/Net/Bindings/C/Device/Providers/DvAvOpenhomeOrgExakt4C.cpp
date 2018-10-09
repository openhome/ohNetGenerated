#include "DvAvOpenhomeOrgExakt4.h"
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

class DvProviderAvOpenhomeOrgExakt4C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgExakt4C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertyConnectionStatus(const Brx& aValue);
    void GetPropertyConnectionStatus(Brhz& aValue);
    TBool SetPropertyChannelMap(const Brx& aValue);
    void GetPropertyChannelMap(Brhz& aValue);
    TBool SetPropertyAudioChannels(const Brx& aValue);
    void GetPropertyAudioChannels(Brhz& aValue);
    TBool SetPropertyVersion(const Brx& aValue);
    void GetPropertyVersion(Brhz& aValue);
    TBool SetPropertyIntegratedDevicesPresent(TBool aValue);
    void GetPropertyIntegratedDevicesPresent(TBool& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertyConnectionStatus();
    void EnablePropertyChannelMap();
    void EnablePropertyAudioChannels();
    void EnablePropertyVersion();
    void EnablePropertyIntegratedDevicesPresent();
    void EnableActionDeviceList(CallbackExakt4DeviceList aCallback, void* aPtr);
    void EnableActionDeviceSettings(CallbackExakt4DeviceSettings aCallback, void* aPtr);
    void EnableActionConnectionStatus(CallbackExakt4ConnectionStatus aCallback, void* aPtr);
    void EnableActionSet(CallbackExakt4Set aCallback, void* aPtr);
    void EnableActionReprogram(CallbackExakt4Reprogram aCallback, void* aPtr);
    void EnableActionReprogramFallback(CallbackExakt4ReprogramFallback aCallback, void* aPtr);
    void EnableActionChannelMap(CallbackExakt4ChannelMap aCallback, void* aPtr);
    void EnableActionSetChannelMap(CallbackExakt4SetChannelMap aCallback, void* aPtr);
    void EnableActionAudioChannels(CallbackExakt4AudioChannels aCallback, void* aPtr);
    void EnableActionSetAudioChannels(CallbackExakt4SetAudioChannels aCallback, void* aPtr);
    void EnableActionVersion(CallbackExakt4Version aCallback, void* aPtr);
    void EnableActionGetIntegratedDevicesPresent(CallbackExakt4GetIntegratedDevicesPresent aCallback, void* aPtr);
    void EnableActionBootIntegratedDevicesToFallback(CallbackExakt4BootIntegratedDevicesToFallback aCallback, void* aPtr);
private:
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoConnectionStatus(IDviInvocation& aInvocation);
    void DoSet(IDviInvocation& aInvocation);
    void DoReprogram(IDviInvocation& aInvocation);
    void DoReprogramFallback(IDviInvocation& aInvocation);
    void DoChannelMap(IDviInvocation& aInvocation);
    void DoSetChannelMap(IDviInvocation& aInvocation);
    void DoAudioChannels(IDviInvocation& aInvocation);
    void DoSetAudioChannels(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
    void DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation);
    void DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation);
private:
    CallbackExakt4DeviceList iCallbackDeviceList;
    void* iPtrDeviceList;
    CallbackExakt4DeviceSettings iCallbackDeviceSettings;
    void* iPtrDeviceSettings;
    CallbackExakt4ConnectionStatus iCallbackConnectionStatus;
    void* iPtrConnectionStatus;
    CallbackExakt4Set iCallbackSet;
    void* iPtrSet;
    CallbackExakt4Reprogram iCallbackReprogram;
    void* iPtrReprogram;
    CallbackExakt4ReprogramFallback iCallbackReprogramFallback;
    void* iPtrReprogramFallback;
    CallbackExakt4ChannelMap iCallbackChannelMap;
    void* iPtrChannelMap;
    CallbackExakt4SetChannelMap iCallbackSetChannelMap;
    void* iPtrSetChannelMap;
    CallbackExakt4AudioChannels iCallbackAudioChannels;
    void* iPtrAudioChannels;
    CallbackExakt4SetAudioChannels iCallbackSetAudioChannels;
    void* iPtrSetAudioChannels;
    CallbackExakt4Version iCallbackVersion;
    void* iPtrVersion;
    CallbackExakt4GetIntegratedDevicesPresent iCallbackGetIntegratedDevicesPresent;
    void* iPtrGetIntegratedDevicesPresent;
    CallbackExakt4BootIntegratedDevicesToFallback iCallbackBootIntegratedDevicesToFallback;
    void* iPtrBootIntegratedDevicesToFallback;
    PropertyString* iPropertyDeviceList;
    PropertyString* iPropertyConnectionStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyString* iPropertyVersion;
    PropertyBool* iPropertyIntegratedDevicesPresent;
};

DvProviderAvOpenhomeOrgExakt4C::DvProviderAvOpenhomeOrgExakt4C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Exakt", 4)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
    iPropertyIntegratedDevicesPresent = NULL;
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4C::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderAvOpenhomeOrgExakt4C::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionDeviceList(CallbackExakt4DeviceList aCallback, void* aPtr)
{
    iCallbackDeviceList = aCallback;
    iPtrDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionDeviceSettings(CallbackExakt4DeviceSettings aCallback, void* aPtr)
{
    iCallbackDeviceSettings = aCallback;
    iPtrDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionConnectionStatus(CallbackExakt4ConnectionStatus aCallback, void* aPtr)
{
    iCallbackConnectionStatus = aCallback;
    iPtrConnectionStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionSet(CallbackExakt4Set aCallback, void* aPtr)
{
    iCallbackSet = aCallback;
    iPtrSet = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionReprogram(CallbackExakt4Reprogram aCallback, void* aPtr)
{
    iCallbackReprogram = aCallback;
    iPtrReprogram = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionReprogramFallback(CallbackExakt4ReprogramFallback aCallback, void* aPtr)
{
    iCallbackReprogramFallback = aCallback;
    iPtrReprogramFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionChannelMap(CallbackExakt4ChannelMap aCallback, void* aPtr)
{
    iCallbackChannelMap = aCallback;
    iPtrChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionSetChannelMap(CallbackExakt4SetChannelMap aCallback, void* aPtr)
{
    iCallbackSetChannelMap = aCallback;
    iPtrSetChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionAudioChannels(CallbackExakt4AudioChannels aCallback, void* aPtr)
{
    iCallbackAudioChannels = aCallback;
    iPtrAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionSetAudioChannels(CallbackExakt4SetAudioChannels aCallback, void* aPtr)
{
    iCallbackSetAudioChannels = aCallback;
    iPtrSetAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionVersion(CallbackExakt4Version aCallback, void* aPtr)
{
    iCallbackVersion = aCallback;
    iPtrVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionGetIntegratedDevicesPresent(CallbackExakt4GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    iCallbackGetIntegratedDevicesPresent = aCallback;
    iPtrGetIntegratedDevicesPresent = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::EnableActionBootIntegratedDevicesToFallback(CallbackExakt4BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    iCallbackBootIntegratedDevicesToFallback = aCallback;
    iPtrBootIntegratedDevicesToFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4C::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4C::DoDeviceList(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoConnectionStatus(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoChannelMap(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoSetChannelMap(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoAudioChannels(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* AudioChannels;
    ASSERT(iCallbackAudioChannels != NULL);
    if (0 != iCallbackAudioChannels(iPtrAudioChannels, invocationC, invocationCPtr, &AudioChannels)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    invocation.StartResponse();
    Brhz bufAudioChannels((const TChar*)AudioChannels);
    OhNetFreeExternal(AudioChannels);
    respAudioChannels.Write(bufAudioChannels);
    respAudioChannels.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt4C::DoSetAudioChannels(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz AudioChannels;
    aInvocation.InvocationReadString("AudioChannels", AudioChannels);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetAudioChannels != NULL);
    if (0 != iCallbackSetAudioChannels(iPtrSetAudioChannels, invocationC, invocationCPtr, (const char*)AudioChannels.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt4C::DoVersion(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt4C::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t IntegratedDevicesPresent;
    ASSERT(iCallbackGetIntegratedDevicesPresent != NULL);
    if (0 != iCallbackGetIntegratedDevicesPresent(iPtrGetIntegratedDevicesPresent, invocationC, invocationCPtr, &IntegratedDevicesPresent)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respIntegratedDevicesPresent(aInvocation, "IntegratedDevicesPresent");
    invocation.StartResponse();
    respIntegratedDevicesPresent.Write((IntegratedDevicesPresent!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgExakt4C::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackBootIntegratedDevicesToFallback != NULL);
    if (0 != iCallbackBootIntegratedDevicesToFallback(iPtrBootIntegratedDevicesToFallback, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgExakt4Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgExakt4C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionDeviceList(THandle aProvider, CallbackExakt4DeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionDeviceSettings(THandle aProvider, CallbackExakt4DeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionConnectionStatus(THandle aProvider, CallbackExakt4ConnectionStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionConnectionStatus(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSet(THandle aProvider, CallbackExakt4Set aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionSet(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionReprogram(THandle aProvider, CallbackExakt4Reprogram aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionReprogram(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionReprogramFallback(THandle aProvider, CallbackExakt4ReprogramFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionReprogramFallback(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionChannelMap(THandle aProvider, CallbackExakt4ChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSetChannelMap(THandle aProvider, CallbackExakt4SetChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionSetChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionAudioChannels(THandle aProvider, CallbackExakt4AudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionSetAudioChannels(THandle aProvider, CallbackExakt4SetAudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionSetAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionVersion(THandle aProvider, CallbackExakt4Version aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionVersion(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt4GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionGetIntegratedDevicesPresent(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt4BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnableActionBootIntegratedDevicesToFallback(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyConnectionStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyConnectionStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyConnectionStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyConnectionStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyChannelMap(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyChannelMap(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyChannelMap(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyAudioChannels(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyAudioChannels(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyAudioChannels(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyVersion(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyVersion(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyVersion(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyVersion(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgExakt4SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->SetPropertyIntegratedDevicesPresent((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgExakt4GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->GetPropertyIntegratedDevicesPresent(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyConnectionStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyConnectionStatus();
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyChannelMap(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyChannelMap();
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyAudioChannels(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyAudioChannels();
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyVersion();
}

void STDCALL DvProviderAvOpenhomeOrgExakt4EnablePropertyIntegratedDevicesPresent(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgExakt4C*>(aProvider)->EnablePropertyIntegratedDevicesPresent();
}

