#include "DvLinnCoUkExakt1.h"
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

class DvProviderLinnCoUkExakt1C : public DvProvider
{
public:
    DvProviderLinnCoUkExakt1C(DvDeviceC aDevice);
    TBool SetPropertyDeviceList(const Brx& aValue);
    void GetPropertyDeviceList(Brhz& aValue);
    TBool SetPropertySettingsAvailable(TBool aValue);
    void GetPropertySettingsAvailable(TBool& aValue);
    TBool SetPropertySettingsChangedCount(TUint aValue);
    void GetPropertySettingsChangedCount(TUint& aValue);
    TBool SetPropertyUpdateStatus(const Brx& aValue);
    void GetPropertyUpdateStatus(Brhz& aValue);
    TBool SetPropertyUpdateTotalPercentage(TUint aValue);
    void GetPropertyUpdateTotalPercentage(TUint& aValue);
    TBool SetPropertyUpdateTotalJobs(TUint aValue);
    void GetPropertyUpdateTotalJobs(TUint& aValue);
    TBool SetPropertyUpdateJob(TUint aValue);
    void GetPropertyUpdateJob(TUint& aValue);
    TBool SetPropertyUpdateJobPercentage(TUint aValue);
    void GetPropertyUpdateJobPercentage(TUint& aValue);
    TBool SetPropertyUpdateJobDescription(const Brx& aValue);
    void GetPropertyUpdateJobDescription(Brhz& aValue);
    TBool SetPropertyChannelMap(const Brx& aValue);
    void GetPropertyChannelMap(Brhz& aValue);
    TBool SetPropertyAudioChannels(const Brx& aValue);
    void GetPropertyAudioChannels(Brhz& aValue);
    TBool SetPropertyVersion(TUint aValue);
    void GetPropertyVersion(TUint& aValue);
    void EnablePropertyDeviceList();
    void EnablePropertySettingsAvailable();
    void EnablePropertySettingsChangedCount();
    void EnablePropertyUpdateStatus();
    void EnablePropertyUpdateTotalPercentage();
    void EnablePropertyUpdateTotalJobs();
    void EnablePropertyUpdateJob();
    void EnablePropertyUpdateJobPercentage();
    void EnablePropertyUpdateJobDescription();
    void EnablePropertyChannelMap();
    void EnablePropertyAudioChannels();
    void EnablePropertyVersion();
    void EnableActionDeviceList(CallbackExakt1DeviceList aCallback, void* aPtr);
    void EnableActionDeviceSettings(CallbackExakt1DeviceSettings aCallback, void* aPtr);
    void EnableActionSettingsAvailable(CallbackExakt1SettingsAvailable aCallback, void* aPtr);
    void EnableActionSettingsChangedCount(CallbackExakt1SettingsChangedCount aCallback, void* aPtr);
    void EnableActionUpdate(CallbackExakt1Update aCallback, void* aPtr);
    void EnableActionUpdateBlocking(CallbackExakt1UpdateBlocking aCallback, void* aPtr);
    void EnableActionGetUpdateStatus(CallbackExakt1GetUpdateStatus aCallback, void* aPtr);
    void EnableActionChannelMap(CallbackExakt1ChannelMap aCallback, void* aPtr);
    void EnableActionSetChannelMap(CallbackExakt1SetChannelMap aCallback, void* aPtr);
    void EnableActionAudioChannels(CallbackExakt1AudioChannels aCallback, void* aPtr);
    void EnableActionSetAudioChannels(CallbackExakt1SetAudioChannels aCallback, void* aPtr);
    void EnableActionVersion(CallbackExakt1Version aCallback, void* aPtr);
private:
    void DoDeviceList(IDviInvocation& aInvocation);
    void DoDeviceSettings(IDviInvocation& aInvocation);
    void DoSettingsAvailable(IDviInvocation& aInvocation);
    void DoSettingsChangedCount(IDviInvocation& aInvocation);
    void DoUpdate(IDviInvocation& aInvocation);
    void DoUpdateBlocking(IDviInvocation& aInvocation);
    void DoGetUpdateStatus(IDviInvocation& aInvocation);
    void DoChannelMap(IDviInvocation& aInvocation);
    void DoSetChannelMap(IDviInvocation& aInvocation);
    void DoAudioChannels(IDviInvocation& aInvocation);
    void DoSetAudioChannels(IDviInvocation& aInvocation);
    void DoVersion(IDviInvocation& aInvocation);
private:
    CallbackExakt1DeviceList iCallbackDeviceList;
    void* iPtrDeviceList;
    CallbackExakt1DeviceSettings iCallbackDeviceSettings;
    void* iPtrDeviceSettings;
    CallbackExakt1SettingsAvailable iCallbackSettingsAvailable;
    void* iPtrSettingsAvailable;
    CallbackExakt1SettingsChangedCount iCallbackSettingsChangedCount;
    void* iPtrSettingsChangedCount;
    CallbackExakt1Update iCallbackUpdate;
    void* iPtrUpdate;
    CallbackExakt1UpdateBlocking iCallbackUpdateBlocking;
    void* iPtrUpdateBlocking;
    CallbackExakt1GetUpdateStatus iCallbackGetUpdateStatus;
    void* iPtrGetUpdateStatus;
    CallbackExakt1ChannelMap iCallbackChannelMap;
    void* iPtrChannelMap;
    CallbackExakt1SetChannelMap iCallbackSetChannelMap;
    void* iPtrSetChannelMap;
    CallbackExakt1AudioChannels iCallbackAudioChannels;
    void* iPtrAudioChannels;
    CallbackExakt1SetAudioChannels iCallbackSetAudioChannels;
    void* iPtrSetAudioChannels;
    CallbackExakt1Version iCallbackVersion;
    void* iPtrVersion;
    PropertyString* iPropertyDeviceList;
    PropertyBool* iPropertySettingsAvailable;
    PropertyUint* iPropertySettingsChangedCount;
    PropertyString* iPropertyUpdateStatus;
    PropertyUint* iPropertyUpdateTotalPercentage;
    PropertyUint* iPropertyUpdateTotalJobs;
    PropertyUint* iPropertyUpdateJob;
    PropertyUint* iPropertyUpdateJobPercentage;
    PropertyString* iPropertyUpdateJobDescription;
    PropertyString* iPropertyChannelMap;
    PropertyString* iPropertyAudioChannels;
    PropertyUint* iPropertyVersion;
};

DvProviderLinnCoUkExakt1C::DvProviderLinnCoUkExakt1C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "linn.co.uk", "Exakt", 1)
{
    iPropertyDeviceList = NULL;
    iPropertySettingsAvailable = NULL;
    iPropertySettingsChangedCount = NULL;
    iPropertyUpdateStatus = NULL;
    iPropertyUpdateTotalPercentage = NULL;
    iPropertyUpdateTotalJobs = NULL;
    iPropertyUpdateJob = NULL;
    iPropertyUpdateJobPercentage = NULL;
    iPropertyUpdateJobDescription = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt1C::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertySettingsChangedCount(TUint aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    return SetPropertyUint(*iPropertySettingsChangedCount, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertySettingsChangedCount(TUint& aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    aValue = iPropertySettingsChangedCount->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateTotalPercentage(TUint aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalPercentage, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateTotalPercentage(TUint& aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    aValue = iPropertyUpdateTotalPercentage->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateTotalJobs(TUint aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalJobs, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateTotalJobs(TUint& aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    aValue = iPropertyUpdateTotalJobs->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateJob(TUint aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    return SetPropertyUint(*iPropertyUpdateJob, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateJob(TUint& aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    aValue = iPropertyUpdateJob->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateJobPercentage(TUint aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateJobPercentage, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateJobPercentage(TUint& aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    aValue = iPropertyUpdateJobPercentage->Value();
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyUpdateJobDescription(const Brx& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    return SetPropertyString(*iPropertyUpdateJobDescription, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyUpdateJobDescription(Brhz& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    aValue.Set(iPropertyUpdateJobDescription->Value());
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt1C::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt1C::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

void DvProviderLinnCoUkExakt1C::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertySettingsChangedCount()
{
    iPropertySettingsChangedCount = new PropertyUint(new ParameterUint("SettingsChangedCount"));
    iService->AddProperty(iPropertySettingsChangedCount); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateTotalPercentage()
{
    iPropertyUpdateTotalPercentage = new PropertyUint(new ParameterUint("UpdateTotalPercentage"));
    iService->AddProperty(iPropertyUpdateTotalPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateTotalJobs()
{
    iPropertyUpdateTotalJobs = new PropertyUint(new ParameterUint("UpdateTotalJobs"));
    iService->AddProperty(iPropertyUpdateTotalJobs); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateJob()
{
    iPropertyUpdateJob = new PropertyUint(new ParameterUint("UpdateJob"));
    iService->AddProperty(iPropertyUpdateJob); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateJobPercentage()
{
    iPropertyUpdateJobPercentage = new PropertyUint(new ParameterUint("UpdateJobPercentage"));
    iService->AddProperty(iPropertyUpdateJobPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyUpdateJobDescription()
{
    iPropertyUpdateJobDescription = new PropertyString(new ParameterString("UpdateJobDescription"));
    iService->AddProperty(iPropertyUpdateJobDescription); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt1C::EnableActionDeviceList(CallbackExakt1DeviceList aCallback, void* aPtr)
{
    iCallbackDeviceList = aCallback;
    iPtrDeviceList = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionDeviceSettings(CallbackExakt1DeviceSettings aCallback, void* aPtr)
{
    iCallbackDeviceSettings = aCallback;
    iPtrDeviceSettings = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionSettingsAvailable(CallbackExakt1SettingsAvailable aCallback, void* aPtr)
{
    iCallbackSettingsAvailable = aCallback;
    iPtrSettingsAvailable = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionSettingsChangedCount(CallbackExakt1SettingsChangedCount aCallback, void* aPtr)
{
    iCallbackSettingsChangedCount = aCallback;
    iPtrSettingsChangedCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsChangedCount");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedCount", *iPropertySettingsChangedCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoSettingsChangedCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionUpdate(CallbackExakt1Update aCallback, void* aPtr)
{
    iCallbackUpdate = aCallback;
    iPtrUpdate = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionUpdateBlocking(CallbackExakt1UpdateBlocking aCallback, void* aPtr)
{
    iCallbackUpdateBlocking = aCallback;
    iPtrUpdateBlocking = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionGetUpdateStatus(CallbackExakt1GetUpdateStatus aCallback, void* aPtr)
{
    iCallbackGetUpdateStatus = aCallback;
    iPtrGetUpdateStatus = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalPercentage", *iPropertyUpdateTotalPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalJobs", *iPropertyUpdateTotalJobs));
    action->AddOutputParameter(new ParameterRelated("UpdateJob", *iPropertyUpdateJob));
    action->AddOutputParameter(new ParameterRelated("UpdateJobPercentage", *iPropertyUpdateJobPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateJobDescription", *iPropertyUpdateJobDescription));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionChannelMap(CallbackExakt1ChannelMap aCallback, void* aPtr)
{
    iCallbackChannelMap = aCallback;
    iPtrChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionSetChannelMap(CallbackExakt1SetChannelMap aCallback, void* aPtr)
{
    iCallbackSetChannelMap = aCallback;
    iPtrSetChannelMap = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionAudioChannels(CallbackExakt1AudioChannels aCallback, void* aPtr)
{
    iCallbackAudioChannels = aCallback;
    iPtrAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionSetAudioChannels(CallbackExakt1SetAudioChannels aCallback, void* aPtr)
{
    iCallbackSetAudioChannels = aCallback;
    iPtrSetAudioChannels = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::EnableActionVersion(CallbackExakt1Version aCallback, void* aPtr)
{
    iCallbackVersion = aCallback;
    iPtrVersion = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1C::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1C::DoDeviceList(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoSettingsAvailable(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SettingsAvailable;
    ASSERT(iCallbackSettingsAvailable != NULL);
    if (0 != iCallbackSettingsAvailable(iPtrSettingsAvailable, invocationC, invocationCPtr, &SettingsAvailable)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respSettingsAvailable(aInvocation, "SettingsAvailable");
    invocation.StartResponse();
    respSettingsAvailable.Write((SettingsAvailable!=0));
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt1C::DoSettingsChangedCount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t SettingsChangedCount;
    ASSERT(iCallbackSettingsChangedCount != NULL);
    if (0 != iCallbackSettingsChangedCount(iPtrSettingsChangedCount, invocationC, invocationCPtr, &SettingsChangedCount)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respSettingsChangedCount(aInvocation, "SettingsChangedCount");
    invocation.StartResponse();
    respSettingsChangedCount.Write(SettingsChangedCount);
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt1C::DoUpdate(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", ManifestUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUpdate != NULL);
    if (0 != iCallbackUpdate(iPtrUpdate, invocationC, invocationCPtr, (const char*)ManifestUri.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt1C::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", ManifestUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackUpdateBlocking != NULL);
    if (0 != iCallbackUpdateBlocking(iPtrUpdateBlocking, invocationC, invocationCPtr, (const char*)ManifestUri.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt1C::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* UpdateStatus;
    uint32_t UpdateTotalPercentage;
    uint32_t UpdateTotalJobs;
    uint32_t UpdateJob;
    uint32_t UpdateJobPercentage;
    char* UpdateJobDescription;
    ASSERT(iCallbackGetUpdateStatus != NULL);
    if (0 != iCallbackGetUpdateStatus(iPtrGetUpdateStatus, invocationC, invocationCPtr, &UpdateStatus, &UpdateTotalPercentage, &UpdateTotalJobs, &UpdateJob, &UpdateJobPercentage, &UpdateJobDescription)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respUpdateStatus(aInvocation, "UpdateStatus");
    DviInvocationResponseUint respUpdateTotalPercentage(aInvocation, "UpdateTotalPercentage");
    DviInvocationResponseUint respUpdateTotalJobs(aInvocation, "UpdateTotalJobs");
    DviInvocationResponseUint respUpdateJob(aInvocation, "UpdateJob");
    DviInvocationResponseUint respUpdateJobPercentage(aInvocation, "UpdateJobPercentage");
    DviInvocationResponseString respUpdateJobDescription(aInvocation, "UpdateJobDescription");
    invocation.StartResponse();
    Brhz bufUpdateStatus((const TChar*)UpdateStatus);
    OhNetFreeExternal(UpdateStatus);
    respUpdateStatus.Write(bufUpdateStatus);
    respUpdateStatus.WriteFlush();
    respUpdateTotalPercentage.Write(UpdateTotalPercentage);
    respUpdateTotalJobs.Write(UpdateTotalJobs);
    respUpdateJob.Write(UpdateJob);
    respUpdateJobPercentage.Write(UpdateJobPercentage);
    Brhz bufUpdateJobDescription((const TChar*)UpdateJobDescription);
    OhNetFreeExternal(UpdateJobDescription);
    respUpdateJobDescription.Write(bufUpdateJobDescription);
    respUpdateJobDescription.WriteFlush();
    invocation.EndResponse();
}

void DvProviderLinnCoUkExakt1C::DoChannelMap(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoSetChannelMap(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoAudioChannels(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoSetAudioChannels(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt1C::DoVersion(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Version;
    ASSERT(iCallbackVersion != NULL);
    if (0 != iCallbackVersion(iPtrVersion, invocationC, invocationCPtr, &Version)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    invocation.StartResponse();
    respVersion.Write(Version);
    invocation.EndResponse();
}



THandle STDCALL DvProviderLinnCoUkExakt1Create(DvDeviceC aDevice)
{
    return new DvProviderLinnCoUkExakt1C(aDevice);
}

void STDCALL DvProviderLinnCoUkExakt1Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionDeviceList(THandle aProvider, CallbackExakt1DeviceList aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionDeviceList(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionDeviceSettings(THandle aProvider, CallbackExakt1DeviceSettings aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionDeviceSettings(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionSettingsAvailable(THandle aProvider, CallbackExakt1SettingsAvailable aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionSettingsAvailable(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionSettingsChangedCount(THandle aProvider, CallbackExakt1SettingsChangedCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionSettingsChangedCount(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionUpdate(THandle aProvider, CallbackExakt1Update aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionUpdate(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionUpdateBlocking(THandle aProvider, CallbackExakt1UpdateBlocking aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionUpdateBlocking(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionGetUpdateStatus(THandle aProvider, CallbackExakt1GetUpdateStatus aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionGetUpdateStatus(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionChannelMap(THandle aProvider, CallbackExakt1ChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionSetChannelMap(THandle aProvider, CallbackExakt1SetChannelMap aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionSetChannelMap(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionAudioChannels(THandle aProvider, CallbackExakt1AudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionSetAudioChannels(THandle aProvider, CallbackExakt1SetAudioChannels aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionSetAudioChannels(aCallback, aPtr);
}

void STDCALL DvProviderLinnCoUkExakt1EnableActionVersion(THandle aProvider, CallbackExakt1Version aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnableActionVersion(aCallback, aPtr);
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyDeviceList(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyDeviceList(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyDeviceList(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyDeviceList(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertySettingsAvailable(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertySettingsAvailable((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertySettingsAvailable(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertySettingsAvailable(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertySettingsChangedCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertySettingsChangedCount(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertySettingsChangedCount(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertySettingsChangedCount(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateStatus(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateStatus(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateStatus(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateStatus(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateTotalPercentage(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateTotalPercentage(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateTotalPercentage(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateTotalPercentage(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateTotalJobs(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateTotalJobs(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateTotalJobs(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateTotalJobs(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJob(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateJob(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJob(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateJob(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJobPercentage(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateJobPercentage(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJobPercentage(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateJobPercentage(val);
    *aValue = val;
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyUpdateJobDescription(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyUpdateJobDescription(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyUpdateJobDescription(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyUpdateJobDescription(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyChannelMap(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyChannelMap(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyChannelMap(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyChannelMap(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyAudioChannels(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyAudioChannels(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyAudioChannels(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyAudioChannels(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderLinnCoUkExakt1SetPropertyVersion(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->SetPropertyVersion(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderLinnCoUkExakt1GetPropertyVersion(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->GetPropertyVersion(val);
    *aValue = val;
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyDeviceList(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyDeviceList();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertySettingsAvailable(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertySettingsAvailable();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertySettingsChangedCount(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertySettingsChangedCount();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateStatus(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateStatus();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalPercentage(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateTotalPercentage();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateTotalJobs(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateTotalJobs();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJob(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateJob();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJobPercentage(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateJobPercentage();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyUpdateJobDescription(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyUpdateJobDescription();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyChannelMap(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyChannelMap();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyAudioChannels(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyAudioChannels();
}

void STDCALL DvProviderLinnCoUkExakt1EnablePropertyVersion(THandle aProvider)
{
    reinterpret_cast<DvProviderLinnCoUkExakt1C*>(aProvider)->EnablePropertyVersion();
}

