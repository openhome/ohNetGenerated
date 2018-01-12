#include "DvLinnCoUkExakt1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkExakt1::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt1::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertySettingsChangedCount(TUint aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    return SetPropertyUint(*iPropertySettingsChangedCount, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertySettingsChangedCount(TUint& aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    aValue = iPropertySettingsChangedCount->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateTotalPercentage(TUint aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalPercentage, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateTotalPercentage(TUint& aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    aValue = iPropertyUpdateTotalPercentage->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateTotalJobs(TUint aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalJobs, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateTotalJobs(TUint& aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    aValue = iPropertyUpdateTotalJobs->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateJob(TUint aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    return SetPropertyUint(*iPropertyUpdateJob, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateJob(TUint& aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    aValue = iPropertyUpdateJob->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateJobPercentage(TUint aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateJobPercentage, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateJobPercentage(TUint& aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    aValue = iPropertyUpdateJobPercentage->Value();
}

TBool DvProviderLinnCoUkExakt1::SetPropertyUpdateJobDescription(const Brx& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    return SetPropertyString(*iPropertyUpdateJobDescription, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyUpdateJobDescription(Brhz& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    aValue.Set(iPropertyUpdateJobDescription->Value());
}

TBool DvProviderLinnCoUkExakt1::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt1::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt1::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt1::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

DvProviderLinnCoUkExakt1::DvProviderLinnCoUkExakt1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Exakt", 1)
{
    Construct();
}

DvProviderLinnCoUkExakt1::DvProviderLinnCoUkExakt1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Exakt", 1)
{
    Construct();
}

void DvProviderLinnCoUkExakt1::Construct()
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

void DvProviderLinnCoUkExakt1::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertySettingsChangedCount()
{
    iPropertySettingsChangedCount = new PropertyUint(new ParameterUint("SettingsChangedCount"));
    iService->AddProperty(iPropertySettingsChangedCount); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateTotalPercentage()
{
    iPropertyUpdateTotalPercentage = new PropertyUint(new ParameterUint("UpdateTotalPercentage"));
    iService->AddProperty(iPropertyUpdateTotalPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateTotalJobs()
{
    iPropertyUpdateTotalJobs = new PropertyUint(new ParameterUint("UpdateTotalJobs"));
    iService->AddProperty(iPropertyUpdateTotalJobs); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateJob()
{
    iPropertyUpdateJob = new PropertyUint(new ParameterUint("UpdateJob"));
    iService->AddProperty(iPropertyUpdateJob); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateJobPercentage()
{
    iPropertyUpdateJobPercentage = new PropertyUint(new ParameterUint("UpdateJobPercentage"));
    iService->AddProperty(iPropertyUpdateJobPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyUpdateJobDescription()
{
    iPropertyUpdateJobDescription = new PropertyString(new ParameterString("UpdateJobDescription"));
    iService->AddProperty(iPropertyUpdateJobDescription); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt1::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionSettingsAvailable()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionSettingsChangedCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsChangedCount");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedCount", *iPropertySettingsChangedCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoSettingsChangedCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionUpdateBlocking()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalPercentage", *iPropertyUpdateTotalPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalJobs", *iPropertyUpdateTotalJobs));
    action->AddOutputParameter(new ParameterRelated("UpdateJob", *iPropertyUpdateJob));
    action->AddOutputParameter(new ParameterRelated("UpdateJobPercentage", *iPropertyUpdateJobPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateJobDescription", *iPropertyUpdateJobDescription));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionSetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionSetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    DeviceList(invocation, respList);
}

void DvProviderLinnCoUkExakt1::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    DeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderLinnCoUkExakt1::DoSettingsAvailable(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respSettingsAvailable(aInvocation, "SettingsAvailable");
    SettingsAvailable(invocation, respSettingsAvailable);
}

void DvProviderLinnCoUkExakt1::DoSettingsChangedCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respSettingsChangedCount(aInvocation, "SettingsChangedCount");
    SettingsChangedCount(invocation, respSettingsChangedCount);
}

void DvProviderLinnCoUkExakt1::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", ManifestUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Update(invocation, ManifestUri);
}

void DvProviderLinnCoUkExakt1::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", ManifestUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    UpdateBlocking(invocation, ManifestUri);
}

void DvProviderLinnCoUkExakt1::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respUpdateStatus(aInvocation, "UpdateStatus");
    DviInvocationResponseUint respUpdateTotalPercentage(aInvocation, "UpdateTotalPercentage");
    DviInvocationResponseUint respUpdateTotalJobs(aInvocation, "UpdateTotalJobs");
    DviInvocationResponseUint respUpdateJob(aInvocation, "UpdateJob");
    DviInvocationResponseUint respUpdateJobPercentage(aInvocation, "UpdateJobPercentage");
    DviInvocationResponseString respUpdateJobDescription(aInvocation, "UpdateJobDescription");
    GetUpdateStatus(invocation, respUpdateStatus, respUpdateTotalPercentage, respUpdateTotalJobs, respUpdateJob, respUpdateJobPercentage, respUpdateJobDescription);
}

void DvProviderLinnCoUkExakt1::DoChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    ChannelMap(invocation, respChannelMap);
}

void DvProviderLinnCoUkExakt1::DoSetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetChannelMap(invocation, ChannelMap);
}

void DvProviderLinnCoUkExakt1::DoAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    AudioChannels(invocation, respAudioChannels);
}

void DvProviderLinnCoUkExakt1::DoSetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz AudioChannels;
    aInvocation.InvocationReadString("AudioChannels", AudioChannels);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAudioChannels(invocation, AudioChannels);
}

void DvProviderLinnCoUkExakt1::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    Version(invocation, respVersion);
}

void DvProviderLinnCoUkExakt1::DeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::DeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::SettingsAvailable(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aSettingsAvailable*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::SettingsChangedCount(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aSettingsChangedCount*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::Update(IDvInvocation& /*aResponse*/, const Brx& /*aManifestUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::UpdateBlocking(IDvInvocation& /*aResponse*/, const Brx& /*aManifestUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::GetUpdateStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aUpdateStatus*/, IDvInvocationResponseUint& /*aUpdateTotalPercentage*/, IDvInvocationResponseUint& /*aUpdateTotalJobs*/, IDvInvocationResponseUint& /*aUpdateJob*/, IDvInvocationResponseUint& /*aUpdateJobPercentage*/, IDvInvocationResponseString& /*aUpdateJobDescription*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::ChannelMap(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::SetChannelMap(IDvInvocation& /*aResponse*/, const Brx& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::AudioChannels(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::SetAudioChannels(IDvInvocation& /*aResponse*/, const Brx& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1::Version(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVersion*/)
{
    ASSERTS();
}

