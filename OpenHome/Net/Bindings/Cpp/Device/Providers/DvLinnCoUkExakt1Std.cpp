#include "DvLinnCoUkExakt1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyDeviceList(const std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceList, buf);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyDeviceList(std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    const Brx& val = iPropertyDeviceList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertySettingsAvailable(bool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertySettingsAvailable(bool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertySettingsChangedCount(uint32_t aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    return SetPropertyUint(*iPropertySettingsChangedCount, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertySettingsChangedCount(uint32_t& aValue)
{
    ASSERT(iPropertySettingsChangedCount != NULL);
    aValue = iPropertySettingsChangedCount->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateStatus(const std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateStatus, buf);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateStatus(std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    const Brx& val = iPropertyUpdateStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateTotalPercentage(uint32_t aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalPercentage, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateTotalPercentage(uint32_t& aValue)
{
    ASSERT(iPropertyUpdateTotalPercentage != NULL);
    aValue = iPropertyUpdateTotalPercentage->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateTotalJobs(uint32_t aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    return SetPropertyUint(*iPropertyUpdateTotalJobs, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateTotalJobs(uint32_t& aValue)
{
    ASSERT(iPropertyUpdateTotalJobs != NULL);
    aValue = iPropertyUpdateTotalJobs->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateJob(uint32_t aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    return SetPropertyUint(*iPropertyUpdateJob, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateJob(uint32_t& aValue)
{
    ASSERT(iPropertyUpdateJob != NULL);
    aValue = iPropertyUpdateJob->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateJobPercentage(uint32_t aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    return SetPropertyUint(*iPropertyUpdateJobPercentage, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateJobPercentage(uint32_t& aValue)
{
    ASSERT(iPropertyUpdateJobPercentage != NULL);
    aValue = iPropertyUpdateJobPercentage->Value();
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyUpdateJobDescription(const std::string& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateJobDescription, buf);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyUpdateJobDescription(std::string& aValue)
{
    ASSERT(iPropertyUpdateJobDescription != NULL);
    const Brx& val = iPropertyUpdateJobDescription->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyChannelMap(const std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyChannelMap, buf);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyChannelMap(std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    const Brx& val = iPropertyChannelMap->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyAudioChannels(const std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAudioChannels, buf);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyAudioChannels(std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    const Brx& val = iPropertyAudioChannels->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt1Cpp::SetPropertyVersion(uint32_t aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt1Cpp::GetPropertyVersion(uint32_t& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

DvProviderLinnCoUkExakt1Cpp::DvProviderLinnCoUkExakt1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Exakt", 1)
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

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertySettingsChangedCount()
{
    iPropertySettingsChangedCount = new PropertyUint(new ParameterUint("SettingsChangedCount"));
    iService->AddProperty(iPropertySettingsChangedCount); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateTotalPercentage()
{
    iPropertyUpdateTotalPercentage = new PropertyUint(new ParameterUint("UpdateTotalPercentage"));
    iService->AddProperty(iPropertyUpdateTotalPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateTotalJobs()
{
    iPropertyUpdateTotalJobs = new PropertyUint(new ParameterUint("UpdateTotalJobs"));
    iService->AddProperty(iPropertyUpdateTotalJobs); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateJob()
{
    iPropertyUpdateJob = new PropertyUint(new ParameterUint("UpdateJob"));
    iService->AddProperty(iPropertyUpdateJob); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateJobPercentage()
{
    iPropertyUpdateJobPercentage = new PropertyUint(new ParameterUint("UpdateJobPercentage"));
    iService->AddProperty(iPropertyUpdateJobPercentage); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyUpdateJobDescription()
{
    iPropertyUpdateJobDescription = new PropertyString(new ParameterString("UpdateJobDescription"));
    iService->AddProperty(iPropertyUpdateJobDescription); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionSettingsAvailable()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionSettingsChangedCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SettingsChangedCount");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedCount", *iPropertySettingsChangedCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoSettingsChangedCount);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionUpdateBlocking()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("ManifestUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalPercentage", *iPropertyUpdateTotalPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateTotalJobs", *iPropertyUpdateTotalJobs));
    action->AddOutputParameter(new ParameterRelated("UpdateJob", *iPropertyUpdateJob));
    action->AddOutputParameter(new ParameterRelated("UpdateJobPercentage", *iPropertyUpdateJobPercentage));
    action->AddOutputParameter(new ParameterRelated("UpdateJobDescription", *iPropertyUpdateJobDescription));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionSetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionSetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt1Cpp::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt1Cpp::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respList;
    DvInvocationStd invocation(aInvocation);
    DeviceList(invocation, respList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterList(aInvocation, "List");
    Brn buf_List((const TByte*)respList.c_str(), (TUint)respList.length());
    respWriterList.Write(buf_List);
    aInvocation.InvocationWriteStringEnd("List");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respSettings;
    DvInvocationStd invocation(aInvocation);
    DeviceSettings(invocation, DeviceId, respSettings);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSettings(aInvocation, "Settings");
    Brn buf_Settings((const TByte*)respSettings.c_str(), (TUint)respSettings.length());
    respWriterSettings.Write(buf_Settings);
    aInvocation.InvocationWriteStringEnd("Settings");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoSettingsAvailable(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respSettingsAvailable;
    DvInvocationStd invocation(aInvocation);
    SettingsAvailable(invocation, respSettingsAvailable);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterSettingsAvailable(aInvocation, "SettingsAvailable");
    respWriterSettingsAvailable.Write(respSettingsAvailable);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoSettingsChangedCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respSettingsChangedCount;
    DvInvocationStd invocation(aInvocation);
    SettingsChangedCount(invocation, respSettingsChangedCount);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterSettingsChangedCount(aInvocation, "SettingsChangedCount");
    respWriterSettingsChangedCount.Write(respSettingsChangedCount);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", buf_ManifestUri);
    std::string ManifestUri((const char*)buf_ManifestUri.Ptr(), buf_ManifestUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Update(invocation, ManifestUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ManifestUri;
    aInvocation.InvocationReadString("ManifestUri", buf_ManifestUri);
    std::string ManifestUri((const char*)buf_ManifestUri.Ptr(), buf_ManifestUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    UpdateBlocking(invocation, ManifestUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respUpdateStatus;
    uint32_t respUpdateTotalPercentage;
    uint32_t respUpdateTotalJobs;
    uint32_t respUpdateJob;
    uint32_t respUpdateJobPercentage;
    std::string respUpdateJobDescription;
    DvInvocationStd invocation(aInvocation);
    GetUpdateStatus(invocation, respUpdateStatus, respUpdateTotalPercentage, respUpdateTotalJobs, respUpdateJob, respUpdateJobPercentage, respUpdateJobDescription);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterUpdateStatus(aInvocation, "UpdateStatus");
    Brn buf_UpdateStatus((const TByte*)respUpdateStatus.c_str(), (TUint)respUpdateStatus.length());
    respWriterUpdateStatus.Write(buf_UpdateStatus);
    aInvocation.InvocationWriteStringEnd("UpdateStatus");
    DviInvocationResponseUint respWriterUpdateTotalPercentage(aInvocation, "UpdateTotalPercentage");
    respWriterUpdateTotalPercentage.Write(respUpdateTotalPercentage);
    DviInvocationResponseUint respWriterUpdateTotalJobs(aInvocation, "UpdateTotalJobs");
    respWriterUpdateTotalJobs.Write(respUpdateTotalJobs);
    DviInvocationResponseUint respWriterUpdateJob(aInvocation, "UpdateJob");
    respWriterUpdateJob.Write(respUpdateJob);
    DviInvocationResponseUint respWriterUpdateJobPercentage(aInvocation, "UpdateJobPercentage");
    respWriterUpdateJobPercentage.Write(respUpdateJobPercentage);
    DviInvocationResponseString respWriterUpdateJobDescription(aInvocation, "UpdateJobDescription");
    Brn buf_UpdateJobDescription((const TByte*)respUpdateJobDescription.c_str(), (TUint)respUpdateJobDescription.length());
    respWriterUpdateJobDescription.Write(buf_UpdateJobDescription);
    aInvocation.InvocationWriteStringEnd("UpdateJobDescription");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respChannelMap;
    DvInvocationStd invocation(aInvocation);
    ChannelMap(invocation, respChannelMap);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterChannelMap(aInvocation, "ChannelMap");
    Brn buf_ChannelMap((const TByte*)respChannelMap.c_str(), (TUint)respChannelMap.length());
    respWriterChannelMap.Write(buf_ChannelMap);
    aInvocation.InvocationWriteStringEnd("ChannelMap");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoSetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", buf_ChannelMap);
    std::string ChannelMap((const char*)buf_ChannelMap.Ptr(), buf_ChannelMap.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetChannelMap(invocation, ChannelMap);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respAudioChannels;
    DvInvocationStd invocation(aInvocation);
    AudioChannels(invocation, respAudioChannels);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterAudioChannels(aInvocation, "AudioChannels");
    Brn buf_AudioChannels((const TByte*)respAudioChannels.c_str(), (TUint)respAudioChannels.length());
    respWriterAudioChannels.Write(buf_AudioChannels);
    aInvocation.InvocationWriteStringEnd("AudioChannels");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoSetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_AudioChannels;
    aInvocation.InvocationReadString("AudioChannels", buf_AudioChannels);
    std::string AudioChannels((const char*)buf_AudioChannels.Ptr(), buf_AudioChannels.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetAudioChannels(invocation, AudioChannels);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respVersion;
    DvInvocationStd invocation(aInvocation);
    Version(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterVersion(aInvocation, "Version");
    respWriterVersion.Write(respVersion);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt1Cpp::DeviceList(IDvInvocationStd& /*aInvocation*/, std::string& /*aList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::DeviceSettings(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, std::string& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::SettingsAvailable(IDvInvocationStd& /*aInvocation*/, bool& /*aSettingsAvailable*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::SettingsChangedCount(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aSettingsChangedCount*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::Update(IDvInvocationStd& /*aInvocation*/, const std::string& /*aManifestUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::UpdateBlocking(IDvInvocationStd& /*aInvocation*/, const std::string& /*aManifestUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::GetUpdateStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aUpdateStatus*/, uint32_t& /*aUpdateTotalPercentage*/, uint32_t& /*aUpdateTotalJobs*/, uint32_t& /*aUpdateJob*/, uint32_t& /*aUpdateJobPercentage*/, std::string& /*aUpdateJobDescription*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::ChannelMap(IDvInvocationStd& /*aInvocation*/, std::string& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::SetChannelMap(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::AudioChannels(IDvInvocationStd& /*aInvocation*/, std::string& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::SetAudioChannels(IDvInvocationStd& /*aInvocation*/, const std::string& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt1Cpp::Version(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVersion*/)
{
    ASSERTS();
}

