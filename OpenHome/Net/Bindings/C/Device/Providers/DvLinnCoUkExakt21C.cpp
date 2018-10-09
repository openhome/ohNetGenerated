#include "DvLinnCoUkExakt21.h"
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

class DvProviderLinnCoUkExakt21C : public DvProvider
{
public:
    DvProviderLinnCoUkExakt21C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertySettingsAvailable(TBool aValue);
    void GetPropertySettingsAvailable(TBool& aValue);
    TBool SetPropertySettingsChangedSeq(const Brx& aValue);
    void GetPropertySettingsChangedSeq(Brhz& aValue);
    TBool SetPropertyUpdateStatus(const Brx& aValue);
    void GetPropertyUpdateStatus(Brhz& aValue);
    TBool SetPropertyChannelMap(const Brx& aValue);
    void GetPropertyChannelMap(Brhz& aValue);
    TBool SetPropertyAudioChannels(const Brx& aValue);
    void GetPropertyAudioChannels(Brhz& aValue);
    TBool SetPropertyVersion(TUint aValue);
    void GetPropertyVersion(TUint& aValue);
    TBool SetPropertyIntegratedDevicesPresent(TBool aValue);
    void GetPropertyIntegratedDevicesPresent(TBool& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertySettingsAvailable();
    void EnablePropertySettingsChangedSeq();
    void EnablePropertyUpdateStatus();
    void EnablePropertyChannelMap();
    void EnablePropertyAudioChannels();
    void EnablePropertyVersion();
    void EnablePropertyIntegratedDevicesPresent();
    void EnableActionGetDeviceList(CallbackExakt21GetDeviceList aCallback, void* aPtr);
    void EnableActionGetDeviceSettings(CallbackExakt21GetDeviceSettings aCallback, void* aPtr);
    void EnableActionGetSettingsAvailable(CallbackExakt21GetSettingsAvailable aCallback, void* aPtr);
    void EnableActionGetSettingsChangedSeq(CallbackExakt21GetSettingsChangedSeq aCallback, void* aPtr);
    void EnableActionUpdate(CallbackExakt21Update aCallback, void* aPtr);
    void EnableActionUpdateBlocking(CallbackExakt21UpdateBlocking aCallback, void* aPtr);
    void EnableActionGetUpdateStatus(CallbackExakt21GetUpdateStatus aCallback, void* aPtr);
    void EnableActionGetChannelMap(CallbackExakt21GetChannelMap aCallback, void* aPtr);
    void EnableActionGetAudioChannels(CallbackExakt21GetAudioChannels aCallback, void* aPtr);
    void EnableActionGetVersion(CallbackExakt21GetVersion aCallback, void* aPtr);
    void EnableActionApplyUpdate(CallbackExakt21ApplyUpdate aCallback, void* aPtr);
    void EnableActionPlayTestTrack(CallbackExakt21PlayTestTrack aCallback, void* aPtr);
    void EnableActionClearTestTrack(CallbackExakt21ClearTestTrack aCallback, void* aPtr);
    void EnableActionGetIntegratedDevicesPresent(CallbackExakt21GetIntegratedDevicesPresent aCallback, void* aPtr);
    void EnableActionBootIntegratedDevicesToFallback(CallbackExakt21BootIntegratedDevicesToFallback aCallback, void* aPtr);
private:
    void DoGetDeviceList(IDviInvocation& aInvocation);
    void DoGetDeviceSettings(IDviInvocation& aInvocation);
    void DoGetSettingsAvailable(IDviInvocation& aInvocation);
    void DoGetSettingsChangedSeq(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoUpdateBlocking(IDviInvocation& aInvocation);
    void DoGetUpdateStatus(IDviInvocation& aInvocation);
    void DoGetChannelMap(IDviInvocation& aInvocation);
    void DoGetAudioChannels(IDviInvocation& aInvocation);
    void DoGetVersion(IDviInvocation& aInvocation);
    void DoApplyUpdate(IDviInvocation& aInvocation);
    void DoPlayTestTrack(IDviInvocation& aInvocation);
    void DoClearTestTrack(IDviInvocation& aInvocation);
    void DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation);
    void DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation);
private:
    CallbackExakt21GetDeviceList iCallbackGetDeviceList;
    void* iPtrGetDeviceList;
    CallbackExakt21GetDeviceSettings iCallbackGetDeviceSettings;
    void* iPtrGetDeviceSettings;
    CallbackExakt21GetSettingsAvailable iCallbackGetSettingsAvailable;
    void* iPtrGetSettingsAvailable;
    CallbackExakt21GetSettingsChangedSeq iCallbackGetSettingsChangedSeq;
    void* iPtrGetSettingsChangedSeq;
    CallbackExakt21Update iCallbackUpdate;
    void* iPtrUpdate;
    CallbackExakt21UpdateBlocking iCallbackUpdateBlocking;
    void* iPtrUpdateBlocking;
    CallbackExakt21GetUpdateStatus iCallbackGetUpdateStatus;
    void* iPtrGetUpdateStatus;
    CallbackExakt21GetChannelMap iCallbackGetChannelMap;
    void* iPtrGetChannelMap;
    CallbackExakt21GetAudioChannels iCallbackGetAudioChannels;
    void* iPtrGetAudioChannels;
    CallbackExakt21GetVersion iCallbackGetVersion;
    void* iPtrGetVersion;
    CallbackExakt21ApplyUpdate iCallbackApplyUpdate;
    void* iPtrApplyUpdate;
    CallbackExakt21PlayTestTrack iCallbackPlayTestTrack;
    void* iPtrPlayTestTrack;
    CallbackExakt21ClearTestTrack iCallbackClearTestTrack;
    void* iPtrClearTestTrack;
    CallbackExakt21GetIntegratedDevicesPresent iCallbackGetIntegratedDevicesPresent;
    void* iPtrGetIntegratedDevicesPresent;
    CallbackExakt21BootIntegratedDevicesToFallback iCallbackBootIntegratedDevicesToFallback;
    void* iPtrBootIntegratedDevicesToFallback;
    PropertyString* iPropertyDeviceList;
    PropertyBool* iPropertySettingsAvailable;
    PropertyString* iPropertySettingsChangedSeq;
    PropertyString* iPropertyUpdateStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyUint* iPropertyVersion;
    PropertyBool* iPropertyIntegratedDevicesPresent;
};

DvProviderLinnCoUkExakt21C::DvProviderLinnCoUkExakt21C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Exakt2", 1)
{
    iPropertyDeviceList = NULL;
    iPropertySettingsAvailable = NULL;
    iPropertySettingsChangedSeq = NULL;
    iPropertyUpdateStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
    iPropertyIntegratedDevicesPresent = NULL;
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt21C::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt21C::SetPropertySettingsChangedSeq(const Brx& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    return SetPropertyString(*iPropertySettingsChangedSeq, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertySettingsChangedSeq(Brhz& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    aValue.Set(iPropertySettingsChangedSeq->Value());
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

TBool DvProviderLinnCoUkExakt21C::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderLinnCoUkExakt21C::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

void DvProviderLinnCoUkExakt21C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertySettingsChangedSeq()
{
    iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq"));
    iService->AddProperty(iPropertySettingsChangedSeq); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderLinnCoUkExakt21C::EnableActionGetDeviceList(CallbackExakt21GetDeviceList aCallback, void* aPtr)
{
    iCallbackGetDeviceList = aCallback;
    iPtrGetDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetDeviceSettings(CallbackExakt21GetDeviceSettings aCallback, void* aPtr)
{
    iCallbackGetDeviceSettings = aCallback;
    iPtrGetDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetSettingsAvailable(CallbackExakt21GetSettingsAvailable aCallback, void* aPtr)
{
    iCallbackGetSettingsAvailable = aCallback;
    iPtrGetSettingsAvailable = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetSettingsChangedSeq(CallbackExakt21GetSettingsChangedSeq aCallback, void* aPtr)
{
    iCallbackGetSettingsChangedSeq = aCallback;
    iPtrGetSettingsChangedSeq = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsChangedSeq");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedSeq", *iPropertySettingsChangedSeq));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetSettingsChangedSeq);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionUpdate(CallbackExakt21Update aCallback, void* aPtr)
{
    iCallbackUpdate = aCallback;
    iPtrUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionUpdateBlocking(CallbackExakt21UpdateBlocking aCallback, void* aPtr)
{
    iCallbackUpdateBlocking = aCallback;
    iPtrUpdateBlocking = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetUpdateStatus(CallbackExakt21GetUpdateStatus aCallback, void* aPtr)
{
    iCallbackGetUpdateStatus = aCallback;
    iPtrGetUpdateStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetChannelMap(CallbackExakt21GetChannelMap aCallback, void* aPtr)
{
    iCallbackGetChannelMap = aCallback;
    iPtrGetChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetAudioChannels(CallbackExakt21GetAudioChannels aCallback, void* aPtr)
{
    iCallbackGetAudioChannels = aCallback;
    iPtrGetAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetVersion(CallbackExakt21GetVersion aCallback, void* aPtr)
{
    iCallbackGetVersion = aCallback;
    iPtrGetVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionApplyUpdate(CallbackExakt21ApplyUpdate aCallback, void* aPtr)
{
    iCallbackApplyUpdate = aCallback;
    iPtrApplyUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ApplyUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoApplyUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionPlayTestTrack(CallbackExakt21PlayTestTrack aCallback, void* aPtr)
{
    iCallbackPlayTestTrack = aCallback;
    iPtrPlayTestTrack = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayTestTrack");
    action->AddInputParameter(new ParameterString("ChannelMap"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoPlayTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionClearTestTrack(CallbackExakt21ClearTestTrack aCallback, void* aPtr)
{
    iCallbackClearTestTrack = aCallback;
    iPtrClearTestTrack = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearTestTrack");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoClearTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionGetIntegratedDevicesPresent(CallbackExakt21GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    iCallbackGetIntegratedDevicesPresent = aCallback;
    iPtrGetIntegratedDevicesPresent = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::EnableActionBootIntegratedDevicesToFallback(CallbackExakt21BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    iCallbackBootIntegratedDevicesToFallback = aCallback;
    iPtrBootIntegratedDevicesToFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21C::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21C::DoGetDeviceList(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* List;
    ASSERT(iCallbackGetDeviceList != NULL);
    if (0 != iCallbackGetDeviceList(iPtrGetDeviceList, invocationC, invocationCPtr, &List)) {
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

void DvProviderLinnCoUkExakt21C::DoGetDeviceSettings(IDviInvocation& aInvocation)
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
    ASSERT(iCallbackGetDeviceSettings != NULL);
    if (0 != iCallbackGetDeviceSettings(iPtrGetDeviceSettings, invocationC, invocationCPtr, (const char*)DeviceId.Ptr(), &Settings)) {
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

void DvProviderLinnCoUkExakt21C::DoGetSettingsAvailable(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SettingsAvailable;
    ASSERT(iCallbackGetSettingsAvailable != NULL);
    if (0 != iCallbackGetSettingsAvailable(iPtrGetSettingsAvailable, invocationC, invocationCPtr, &SettingsAvailable)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respSettingsAvailable(aInvocation, "SettingsAvailable");
    invocation.StartResponse();
    respSettingsAvailable.Write((SettingsAvailable!=0));
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoGetSettingsChangedSeq(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SettingsChangedSeq;
    ASSERT(iCallbackGetSettingsChangedSeq != NULL);
    if (0 != iCallbackGetSettingsChangedSeq(iPtrGetSettingsChangedSeq, invocationC, invocationCPtr, &SettingsChangedSeq)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSettingsChangedSeq(aInvocation, "SettingsChangedSeq");
    invocation.StartResponse();
    Brhz bufSettingsChangedSeq((const TChar*)SettingsChangedSeq);
    OhNetFreeExternal(SettingsChangedSeq);
    respSettingsChangedSeq.Write(bufSettingsChangedSeq);
    respSettingsChangedSeq.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUpdate != NULL);
    if (0 != iCallbackUpdate(iPtrUpdate, invocationC, invocationCPtr, (const char*)Manifest.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUpdateBlocking != NULL);
    if (0 != iCallbackUpdateBlocking(iPtrUpdateBlocking, invocationC, invocationCPtr, (const char*)Manifest.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* UpdateStatus;
    ASSERT(iCallbackGetUpdateStatus != NULL);
    if (0 != iCallbackGetUpdateStatus(iPtrGetUpdateStatus, invocationC, invocationCPtr, &UpdateStatus)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respUpdateStatus(aInvocation, "UpdateStatus");
    invocation.StartResponse();
    Brhz bufUpdateStatus((const TChar*)UpdateStatus);
    OhNetFreeExternal(UpdateStatus);
    respUpdateStatus.Write(bufUpdateStatus);
    respUpdateStatus.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoGetChannelMap(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ChannelMap;
    ASSERT(iCallbackGetChannelMap != NULL);
    if (0 != iCallbackGetChannelMap(iPtrGetChannelMap, invocationC, invocationCPtr, &ChannelMap)) {
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

void DvProviderLinnCoUkExakt21C::DoGetAudioChannels(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* AudioChannels;
    ASSERT(iCallbackGetAudioChannels != NULL);
    if (0 != iCallbackGetAudioChannels(iPtrGetAudioChannels, invocationC, invocationCPtr, &AudioChannels)) {
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

void DvProviderLinnCoUkExakt21C::DoGetVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Version;
    ASSERT(iCallbackGetVersion != NULL);
    if (0 != iCallbackGetVersion(iPtrGetVersion, invocationC, invocationCPtr, &Version)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    invocation.StartResponse();
    respVersion.Write(Version);
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoApplyUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackApplyUpdate != NULL);
    if (0 != iCallbackApplyUpdate(iPtrApplyUpdate, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoPlayTestTrack(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Metadata;
    aInvocation.InvocationReadString("Metadata", Metadata);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackPlayTestTrack != NULL);
    if (0 != iCallbackPlayTestTrack(iPtrPlayTestTrack, invocationC, invocationCPtr, (const char*)ChannelMap.Ptr(), (const char*)Uri.Ptr(), (const char*)Metadata.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoClearTestTrack(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackClearTestTrack != NULL);
    if (0 != iCallbackClearTestTrack(iPtrClearTestTrack, invocationC, invocationCPtr)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt21C::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt21C::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderLinnCoUkExakt21Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkExakt21C(aDevice);
}

void STDCALL DvProviderLinnCoUkExakt21Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetDeviceList(THandle aProvider, CallbackExakt21GetDeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetDeviceSettings(THandle aProvider, CallbackExakt21GetDeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetSettingsAvailable(THandle aProvider, CallbackExakt21GetSettingsAvailable aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetSettingsAvailable(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetSettingsChangedSeq(THandle aProvider, CallbackExakt21GetSettingsChangedSeq aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetSettingsChangedSeq(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionUpdate(THandle aProvider, CallbackExakt21Update aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionUpdateBlocking(THandle aProvider, CallbackExakt21UpdateBlocking aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionUpdateBlocking(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt21GetUpdateStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetUpdateStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetChannelMap(THandle aProvider, CallbackExakt21GetChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetAudioChannels(THandle aProvider, CallbackExakt21GetAudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetVersion(THandle aProvider, CallbackExakt21GetVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionApplyUpdate(THandle aProvider, CallbackExakt21ApplyUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionApplyUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionPlayTestTrack(THandle aProvider, CallbackExakt21PlayTestTrack aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionPlayTestTrack(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionClearTestTrack(THandle aProvider, CallbackExakt21ClearTestTrack aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionClearTestTrack(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt21GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionGetIntegratedDevicesPresent(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt21EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt21BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnableActionBootIntegratedDevicesToFallback(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertySettingsAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertySettingsAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertySettingsChangedSeq(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertySettingsChangedSeq(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertySettingsChangedSeq(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertySettingsChangedSeq(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyUpdateStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyUpdateStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyUpdateStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyChannelMap(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyChannelMap(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyChannelMap(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyAudioChannels(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyAudioChannels(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyAudioChannels(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyVersion(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyVersion(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyVersion(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt21SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->SetPropertyIntegratedDevicesPresent((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt21GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->GetPropertyIntegratedDevicesPresent(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertySettingsAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertySettingsAvailable();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertySettingsChangedSeq(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertySettingsChangedSeq();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyUpdateStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyUpdateStatus();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyChannelMap(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyChannelMap();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyAudioChannels(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyAudioChannels();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyVersion();
}

void STDCALL DvProviderLinnCoUkExakt21EnablePropertyIntegratedDevicesPresent(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt21C*>(aProvider)->EnablePropertyIntegratedDevicesPresent();
}

