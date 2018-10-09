#include "DvLinnCoUkExakt21.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyDeviceList(const std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceList, buf);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyDeviceList(std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    const Brx& val = iPropertyDeviceList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertySettingsAvailable(bool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertySettingsAvailable(bool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertySettingsChangedSeq(const std::string& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySettingsChangedSeq, buf);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertySettingsChangedSeq(std::string& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    const Brx& val = iPropertySettingsChangedSeq->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyUpdateStatus(const std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateStatus, buf);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyUpdateStatus(std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    const Brx& val = iPropertyUpdateStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyChannelMap(const std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyChannelMap, buf);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyChannelMap(std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    const Brx& val = iPropertyChannelMap->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyAudioChannels(const std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAudioChannels, buf);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyAudioChannels(std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    const Brx& val = iPropertyAudioChannels->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyVersion(uint32_t aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyVersion(uint32_t& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

bool DvProviderLinnCoUkExakt21Cpp::SetPropertyIntegratedDevicesPresent(bool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderLinnCoUkExakt21Cpp::GetPropertyIntegratedDevicesPresent(bool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

DvProviderLinnCoUkExakt21Cpp::DvProviderLinnCoUkExakt21Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Exakt2", 1)
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

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertySettingsChangedSeq()
{
    iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq"));
    iService->AddProperty(iPropertySettingsChangedSeq); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetSettingsAvailable()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetSettingsChangedSeq()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsChangedSeq");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedSeq", *iPropertySettingsChangedSeq));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetSettingsChangedSeq);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionUpdateBlocking()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionApplyUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ApplyUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoApplyUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionPlayTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayTestTrack");
    action->AddInputParameter(new ParameterString("ChannelMap"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoPlayTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionClearTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearTestTrack");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoClearTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionGetIntegratedDevicesPresent()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::EnableActionBootIntegratedDevicesToFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21Cpp::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21Cpp::DoGetDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respList;
    DvInvocationStd invocation(aInvocation);
    GetDeviceList(invocation, respList);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterList(aInvocation, "List");
    Brn buf_List((const TByte*)respList.c_str(), (TUint)respList.length());
    respWriterList.Write(buf_List);
    aInvocation.InvocationWriteStringEnd("List");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respSettings;
    DvInvocationStd invocation(aInvocation);
    GetDeviceSettings(invocation, DeviceId, respSettings);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSettings(aInvocation, "Settings");
    Brn buf_Settings((const TByte*)respSettings.c_str(), (TUint)respSettings.length());
    respWriterSettings.Write(buf_Settings);
    aInvocation.InvocationWriteStringEnd("Settings");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetSettingsAvailable(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respSettingsAvailable;
    DvInvocationStd invocation(aInvocation);
    GetSettingsAvailable(invocation, respSettingsAvailable);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterSettingsAvailable(aInvocation, "SettingsAvailable");
    respWriterSettingsAvailable.Write(respSettingsAvailable);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetSettingsChangedSeq(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSettingsChangedSeq;
    DvInvocationStd invocation(aInvocation);
    GetSettingsChangedSeq(invocation, respSettingsChangedSeq);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSettingsChangedSeq(aInvocation, "SettingsChangedSeq");
    Brn buf_SettingsChangedSeq((const TByte*)respSettingsChangedSeq.c_str(), (TUint)respSettingsChangedSeq.length());
    respWriterSettingsChangedSeq.Write(buf_SettingsChangedSeq);
    aInvocation.InvocationWriteStringEnd("SettingsChangedSeq");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Manifest;
    aInvocation.InvocationReadString("Manifest", buf_Manifest);
    std::string Manifest((const char*)buf_Manifest.Ptr(), buf_Manifest.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Update(invocation, Manifest);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Manifest;
    aInvocation.InvocationReadString("Manifest", buf_Manifest);
    std::string Manifest((const char*)buf_Manifest.Ptr(), buf_Manifest.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    UpdateBlocking(invocation, Manifest);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respUpdateStatus;
    DvInvocationStd invocation(aInvocation);
    GetUpdateStatus(invocation, respUpdateStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterUpdateStatus(aInvocation, "UpdateStatus");
    Brn buf_UpdateStatus((const TByte*)respUpdateStatus.c_str(), (TUint)respUpdateStatus.length());
    respWriterUpdateStatus.Write(buf_UpdateStatus);
    aInvocation.InvocationWriteStringEnd("UpdateStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respChannelMap;
    DvInvocationStd invocation(aInvocation);
    GetChannelMap(invocation, respChannelMap);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterChannelMap(aInvocation, "ChannelMap");
    Brn buf_ChannelMap((const TByte*)respChannelMap.c_str(), (TUint)respChannelMap.length());
    respWriterChannelMap.Write(buf_ChannelMap);
    aInvocation.InvocationWriteStringEnd("ChannelMap");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respAudioChannels;
    DvInvocationStd invocation(aInvocation);
    GetAudioChannels(invocation, respAudioChannels);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterAudioChannels(aInvocation, "AudioChannels");
    Brn buf_AudioChannels((const TByte*)respAudioChannels.c_str(), (TUint)respAudioChannels.length());
    respWriterAudioChannels.Write(buf_AudioChannels);
    aInvocation.InvocationWriteStringEnd("AudioChannels");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respVersion;
    DvInvocationStd invocation(aInvocation);
    GetVersion(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterVersion(aInvocation, "Version");
    respWriterVersion.Write(respVersion);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoApplyUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ApplyUpdate(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoPlayTestTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", buf_ChannelMap);
    std::string ChannelMap((const char*)buf_ChannelMap.Ptr(), buf_ChannelMap.Bytes());
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    Brhz buf_Metadata;
    aInvocation.InvocationReadString("Metadata", buf_Metadata);
    std::string Metadata((const char*)buf_Metadata.Ptr(), buf_Metadata.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    PlayTestTrack(invocation, ChannelMap, Uri, Metadata);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoClearTestTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearTestTrack(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respIntegratedDevicesPresent;
    DvInvocationStd invocation(aInvocation);
    GetIntegratedDevicesPresent(invocation, respIntegratedDevicesPresent);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterIntegratedDevicesPresent(aInvocation, "IntegratedDevicesPresent");
    respWriterIntegratedDevicesPresent.Write(respIntegratedDevicesPresent);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BootIntegratedDevicesToFallback(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkExakt21Cpp::GetDeviceList(IDvInvocationStd& /*aInvocation*/, std::string& /*aList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetDeviceSettings(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, std::string& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetSettingsAvailable(IDvInvocationStd& /*aInvocation*/, bool& /*aSettingsAvailable*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetSettingsChangedSeq(IDvInvocationStd& /*aInvocation*/, std::string& /*aSettingsChangedSeq*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::Update(IDvInvocationStd& /*aInvocation*/, const std::string& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::UpdateBlocking(IDvInvocationStd& /*aInvocation*/, const std::string& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetUpdateStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aUpdateStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetChannelMap(IDvInvocationStd& /*aInvocation*/, std::string& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetAudioChannels(IDvInvocationStd& /*aInvocation*/, std::string& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetVersion(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::ApplyUpdate(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::PlayTestTrack(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannelMap*/, const std::string& /*aUri*/, const std::string& /*aMetadata*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::ClearTestTrack(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::GetIntegratedDevicesPresent(IDvInvocationStd& /*aInvocation*/, bool& /*aIntegratedDevicesPresent*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21Cpp::BootIntegratedDevicesToFallback(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

