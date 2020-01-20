#include "DvLinnCoUkExakt22.h"
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

class DvProviderLinnCoUkExakt22C : public DvProvider
{
public:
    DvProviderLinnCoUkExakt22C(DvDeviceC aDevice);
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
    TBool SetPropertyTestTrackPlaying(TBool aValue);
    void GetPropertyTestTrackPlaying(TBool& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertySettingsAvailable();
    void EnablePropertySettingsChangedSeq();
    void EnablePropertyUpdateStatus();
    void EnablePropertyChannelMap();
    void EnablePropertyAudioChannels();
    void EnablePropertyVersion();
    void EnablePropertyIntegratedDevicesPresent();
    void EnablePropertyTestTrackPlaying();
    void EnableActionGetDeviceList(CallbackExakt22GetDeviceList aCallback, void* aPtr);
    void EnableActionGetDeviceSettings(CallbackExakt22GetDeviceSettings aCallback, void* aPtr);
    void EnableActionGetSettingsAvailable(CallbackExakt22GetSettingsAvailable aCallback, void* aPtr);
    void EnableActionGetSettingsChangedSeq(CallbackExakt22GetSettingsChangedSeq aCallback, void* aPtr);
    void EnableActionUpdate(CallbackExakt22Update aCallback, void* aPtr);
    void EnableActionUpdateBlocking(CallbackExakt22UpdateBlocking aCallback, void* aPtr);
    void EnableActionGetUpdateStatus(CallbackExakt22GetUpdateStatus aCallback, void* aPtr);
    void EnableActionGetChannelMap(CallbackExakt22GetChannelMap aCallback, void* aPtr);
    void EnableActionGetAudioChannels(CallbackExakt22GetAudioChannels aCallback, void* aPtr);
    void EnableActionGetVersion(CallbackExakt22GetVersion aCallback, void* aPtr);
    void EnableActionApplyUpdate(CallbackExakt22ApplyUpdate aCallback, void* aPtr);
    void EnableActionPlayTestTrack(CallbackExakt22PlayTestTrack aCallback, void* aPtr);
    void EnableActionClearTestTrack(CallbackExakt22ClearTestTrack aCallback, void* aPtr);
    void EnableActionGetIntegratedDevicesPresent(CallbackExakt22GetIntegratedDevicesPresent aCallback, void* aPtr);
    void EnableActionBootIntegratedDevicesToFallback(CallbackExakt22BootIntegratedDevicesToFallback aCallback, void* aPtr);
    void EnableActionGetTestTrackPlaying(CallbackExakt22GetTestTrackPlaying aCallback, void* aPtr);
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
    void DoGetTestTrackPlaying(IDviInvocation& aInvocation);
private:
    CallbackExakt22GetDeviceList iCallbackGetDeviceList;
    void* iPtrGetDeviceList;
    CallbackExakt22GetDeviceSettings iCallbackGetDeviceSettings;
    void* iPtrGetDeviceSettings;
    CallbackExakt22GetSettingsAvailable iCallbackGetSettingsAvailable;
    void* iPtrGetSettingsAvailable;
    CallbackExakt22GetSettingsChangedSeq iCallbackGetSettingsChangedSeq;
    void* iPtrGetSettingsChangedSeq;
    CallbackExakt22Update iCallbackUpdate;
    void* iPtrUpdate;
    CallbackExakt22UpdateBlocking iCallbackUpdateBlocking;
    void* iPtrUpdateBlocking;
    CallbackExakt22GetUpdateStatus iCallbackGetUpdateStatus;
    void* iPtrGetUpdateStatus;
    CallbackExakt22GetChannelMap iCallbackGetChannelMap;
    void* iPtrGetChannelMap;
    CallbackExakt22GetAudioChannels iCallbackGetAudioChannels;
    void* iPtrGetAudioChannels;
    CallbackExakt22GetVersion iCallbackGetVersion;
    void* iPtrGetVersion;
    CallbackExakt22ApplyUpdate iCallbackApplyUpdate;
    void* iPtrApplyUpdate;
    CallbackExakt22PlayTestTrack iCallbackPlayTestTrack;
    void* iPtrPlayTestTrack;
    CallbackExakt22ClearTestTrack iCallbackClearTestTrack;
    void* iPtrClearTestTrack;
    CallbackExakt22GetIntegratedDevicesPresent iCallbackGetIntegratedDevicesPresent;
    void* iPtrGetIntegratedDevicesPresent;
    CallbackExakt22BootIntegratedDevicesToFallback iCallbackBootIntegratedDevicesToFallback;
    void* iPtrBootIntegratedDevicesToFallback;
    CallbackExakt22GetTestTrackPlaying iCallbackGetTestTrackPlaying;
    void* iPtrGetTestTrackPlaying;
    PropertyString* iPropertyDeviceList;
    PropertyBool* iPropertySettingsAvailable;
    PropertyString* iPropertySettingsChangedSeq;
    PropertyString* iPropertyUpdateStatus;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyUint* iPropertyVersion;
    PropertyBool* iPropertyIntegratedDevicesPresent;
    PropertyBool* iPropertyTestTrackPlaying;
};

DvProviderLinnCoUkExakt22C::DvProviderLinnCoUkExakt22C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Exakt2", 2)
{
    iPropertyDeviceList = NULL;
    iPropertySettingsAvailable = NULL;
    iPropertySettingsChangedSeq = NULL;
    iPropertyUpdateStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
    iPropertyIntegratedDevicesPresent = NULL;
    iPropertyTestTrackPlaying = NULL;
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt22C::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt22C::SetPropertySettingsChangedSeq(const Brx& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    return SetPropertyString(*iPropertySettingsChangedSeq, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertySettingsChangedSeq(Brhz& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    aValue.Set(iPropertySettingsChangedSeq->Value());
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

TBool DvProviderLinnCoUkExakt22C::SetPropertyTestTrackPlaying(TBool aValue)
{
    ASSERT(iPropertyTestTrackPlaying != NULL);
    return SetPropertyBool(*iPropertyTestTrackPlaying, aValue);
}

void DvProviderLinnCoUkExakt22C::GetPropertyTestTrackPlaying(TBool& aValue)
{
    ASSERT(iPropertyTestTrackPlaying != NULL);
    aValue = iPropertyTestTrackPlaying->Value();
}

void DvProviderLinnCoUkExakt22C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertySettingsChangedSeq()
{
    iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq"));
    iService->AddProperty(iPropertySettingsChangedSeq); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnablePropertyTestTrackPlaying()
{
    iPropertyTestTrackPlaying = new PropertyBool(new ParameterBool("TestTrackPlaying"));
    iService->AddProperty(iPropertyTestTrackPlaying); // passes ownership
}

void DvProviderLinnCoUkExakt22C::EnableActionGetDeviceList(CallbackExakt22GetDeviceList aCallback, void* aPtr)
{
    iCallbackGetDeviceList = aCallback;
    iPtrGetDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetDeviceSettings(CallbackExakt22GetDeviceSettings aCallback, void* aPtr)
{
    iCallbackGetDeviceSettings = aCallback;
    iPtrGetDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetSettingsAvailable(CallbackExakt22GetSettingsAvailable aCallback, void* aPtr)
{
    iCallbackGetSettingsAvailable = aCallback;
    iPtrGetSettingsAvailable = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetSettingsChangedSeq(CallbackExakt22GetSettingsChangedSeq aCallback, void* aPtr)
{
    iCallbackGetSettingsChangedSeq = aCallback;
    iPtrGetSettingsChangedSeq = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsChangedSeq");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedSeq", *iPropertySettingsChangedSeq));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetSettingsChangedSeq);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionUpdate(CallbackExakt22Update aCallback, void* aPtr)
{
    iCallbackUpdate = aCallback;
    iPtrUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionUpdateBlocking(CallbackExakt22UpdateBlocking aCallback, void* aPtr)
{
    iCallbackUpdateBlocking = aCallback;
    iPtrUpdateBlocking = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetUpdateStatus(CallbackExakt22GetUpdateStatus aCallback, void* aPtr)
{
    iCallbackGetUpdateStatus = aCallback;
    iPtrGetUpdateStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetChannelMap(CallbackExakt22GetChannelMap aCallback, void* aPtr)
{
    iCallbackGetChannelMap = aCallback;
    iPtrGetChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetAudioChannels(CallbackExakt22GetAudioChannels aCallback, void* aPtr)
{
    iCallbackGetAudioChannels = aCallback;
    iPtrGetAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetVersion(CallbackExakt22GetVersion aCallback, void* aPtr)
{
    iCallbackGetVersion = aCallback;
    iPtrGetVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionApplyUpdate(CallbackExakt22ApplyUpdate aCallback, void* aPtr)
{
    iCallbackApplyUpdate = aCallback;
    iPtrApplyUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ApplyUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoApplyUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionPlayTestTrack(CallbackExakt22PlayTestTrack aCallback, void* aPtr)
{
    iCallbackPlayTestTrack = aCallback;
    iPtrPlayTestTrack = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayTestTrack");
    action->AddInputParameter(new ParameterString("ChannelMap"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoPlayTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionClearTestTrack(CallbackExakt22ClearTestTrack aCallback, void* aPtr)
{
    iCallbackClearTestTrack = aCallback;
    iPtrClearTestTrack = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearTestTrack");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoClearTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetIntegratedDevicesPresent(CallbackExakt22GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    iCallbackGetIntegratedDevicesPresent = aCallback;
    iPtrGetIntegratedDevicesPresent = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionBootIntegratedDevicesToFallback(CallbackExakt22BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    iCallbackBootIntegratedDevicesToFallback = aCallback;
    iPtrBootIntegratedDevicesToFallback = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::EnableActionGetTestTrackPlaying(CallbackExakt22GetTestTrackPlaying aCallback, void* aPtr)
{
    iCallbackGetTestTrackPlaying = aCallback;
    iPtrGetTestTrackPlaying = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTestTrackPlaying");
    action->AddOutputParameter(new ParameterRelated("TestTrackPlaying", *iPropertyTestTrackPlaying));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22C::DoGetTestTrackPlaying);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22C::DoGetDeviceList(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetSettingsAvailable(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetSettingsChangedSeq(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoUpdate(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoUpdateBlocking(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetUpdateStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetChannelMap(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetAudioChannels(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetVersion(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoApplyUpdate(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoPlayTestTrack(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoClearTestTrack(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt22C::DoGetTestTrackPlaying(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t TestTrackPlaying;
    ASSERT(iCallbackGetTestTrackPlaying != NULL);
    if (0 != iCallbackGetTestTrackPlaying(iPtrGetTestTrackPlaying, invocationC, invocationCPtr, &TestTrackPlaying)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respTestTrackPlaying(aInvocation, "TestTrackPlaying");
    invocation.StartResponse();
    respTestTrackPlaying.Write((TestTrackPlaying!=0));
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkExakt22Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkExakt22C(aDevice);
}

void STDCALL DvProviderLinnCoUkExakt22Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetDeviceList(THandle aProvider, CallbackExakt22GetDeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetDeviceSettings(THandle aProvider, CallbackExakt22GetDeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetSettingsAvailable(THandle aProvider, CallbackExakt22GetSettingsAvailable aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetSettingsAvailable(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetSettingsChangedSeq(THandle aProvider, CallbackExakt22GetSettingsChangedSeq aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetSettingsChangedSeq(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionUpdate(THandle aProvider, CallbackExakt22Update aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionUpdateBlocking(THandle aProvider, CallbackExakt22UpdateBlocking aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionUpdateBlocking(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt22GetUpdateStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetUpdateStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetChannelMap(THandle aProvider, CallbackExakt22GetChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetAudioChannels(THandle aProvider, CallbackExakt22GetAudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetVersion(THandle aProvider, CallbackExakt22GetVersion aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetVersion(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionApplyUpdate(THandle aProvider, CallbackExakt22ApplyUpdate aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionApplyUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionPlayTestTrack(THandle aProvider, CallbackExakt22PlayTestTrack aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionPlayTestTrack(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionClearTestTrack(THandle aProvider, CallbackExakt22ClearTestTrack aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionClearTestTrack(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetIntegratedDevicesPresent(THandle aProvider, CallbackExakt22GetIntegratedDevicesPresent aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetIntegratedDevicesPresent(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionBootIntegratedDevicesToFallback(THandle aProvider, CallbackExakt22BootIntegratedDevicesToFallback aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionBootIntegratedDevicesToFallback(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt22EnableActionGetTestTrackPlaying(THandle aProvider, CallbackExakt22GetTestTrackPlaying aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnableActionGetTestTrackPlaying(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertySettingsAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertySettingsAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertySettingsChangedSeq(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertySettingsChangedSeq(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertySettingsChangedSeq(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertySettingsChangedSeq(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyUpdateStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyUpdateStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyUpdateStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyChannelMap(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyChannelMap(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyChannelMap(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyAudioChannels(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyAudioChannels(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyAudioChannels(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyVersion(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyVersion(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyVersion(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyIntegratedDevicesPresent((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyIntegratedDevicesPresent(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyIntegratedDevicesPresent(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkExakt22SetPropertyTestTrackPlaying(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->SetPropertyTestTrackPlaying((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt22GetPropertyTestTrackPlaying(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->GetPropertyTestTrackPlaying(val);
    *aValue = (val? 1 : 0);
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertySettingsAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertySettingsAvailable();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertySettingsChangedSeq(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertySettingsChangedSeq();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyUpdateStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyUpdateStatus();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyChannelMap(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyChannelMap();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyAudioChannels(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyAudioChannels();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyVersion();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyIntegratedDevicesPresent(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyIntegratedDevicesPresent();
}

void STDCALL DvProviderLinnCoUkExakt22EnablePropertyTestTrackPlaying(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt22C*>(aProvider)->EnablePropertyTestTrackPlaying();
}

