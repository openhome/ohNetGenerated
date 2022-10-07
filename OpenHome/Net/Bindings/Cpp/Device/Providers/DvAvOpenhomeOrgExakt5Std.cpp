#include "DvAvOpenhomeOrgExakt5.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyDeviceList(const std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyDeviceList, buf);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyDeviceList(std::string& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    const Brx& val = iPropertyDeviceList->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyConnectionStatus(const std::string& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyConnectionStatus, buf);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyConnectionStatus(std::string& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    const Brx& val = iPropertyConnectionStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyChannelMap(const std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyChannelMap, buf);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyChannelMap(std::string& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    const Brx& val = iPropertyChannelMap->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyAudioChannels(const std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAudioChannels, buf);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyAudioChannels(std::string& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    const Brx& val = iPropertyAudioChannels->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyVersion(const std::string& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyVersion, buf);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyVersion(std::string& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    const Brx& val = iPropertyVersion->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgExakt5Cpp::SetPropertyIntegratedDevicesPresent(bool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetPropertyIntegratedDevicesPresent(bool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

DvProviderAvOpenhomeOrgExakt5Cpp::DvProviderAvOpenhomeOrgExakt5Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 5)
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
    iPropertyIntegratedDevicesPresent = NULL;
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionSetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionSetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionGetIntegratedDevicesPresent()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionBootIntegratedDevicesToFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::EnableActionReboot()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reboot");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt5Cpp::DoReboot);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoDeviceList(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoDeviceSettings(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respConnectionStatus;
    DvInvocationStd invocation(aInvocation);
    ConnectionStatus(invocation, respConnectionStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterConnectionStatus(aInvocation, "ConnectionStatus");
    Brn buf_ConnectionStatus((const TByte*)respConnectionStatus.c_str(), (TUint)respConnectionStatus.length());
    respWriterConnectionStatus.Write(buf_ConnectionStatus);
    aInvocation.InvocationWriteStringEnd("ConnectionStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoSet(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    uint32_t BankId = aInvocation.InvocationReadUint("BankId");
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    bool Mute = aInvocation.InvocationReadBool("Mute");
    bool Persist = aInvocation.InvocationReadBool("Persist");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Set(invocation, DeviceId, BankId, FileUri, Mute, Persist);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoReprogram(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Reprogram(invocation, DeviceId, FileUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoReprogramFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_DeviceId;
    aInvocation.InvocationReadString("DeviceId", buf_DeviceId);
    std::string DeviceId((const char*)buf_DeviceId.Ptr(), buf_DeviceId.Bytes());
    Brhz buf_FileUri;
    aInvocation.InvocationReadString("FileUri", buf_FileUri);
    std::string FileUri((const char*)buf_FileUri.Ptr(), buf_FileUri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ReprogramFallback(invocation, DeviceId, FileUri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoChannelMap(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoSetChannelMap(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoAudioChannels(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoSetAudioChannels(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respVersion;
    DvInvocationStd invocation(aInvocation);
    Version(invocation, respVersion);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterVersion(aInvocation, "Version");
    Brn buf_Version((const TByte*)respVersion.c_str(), (TUint)respVersion.length());
    respWriterVersion.Write(buf_Version);
    aInvocation.InvocationWriteStringEnd("Version");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt5Cpp::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    BootIntegratedDevicesToFallback(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DoReboot(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Reboot(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DeviceList(IDvInvocationStd& /*aInvocation*/, std::string& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::DeviceSettings(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, std::string& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::ConnectionStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::Set(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, uint32_t /*aBankId*/, const std::string& /*aFileUri*/, bool /*aMute*/, bool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::Reprogram(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, const std::string& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::ReprogramFallback(IDvInvocationStd& /*aInvocation*/, const std::string& /*aDeviceId*/, const std::string& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::ChannelMap(IDvInvocationStd& /*aInvocation*/, std::string& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::SetChannelMap(IDvInvocationStd& /*aInvocation*/, const std::string& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::AudioChannels(IDvInvocationStd& /*aInvocation*/, std::string& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::SetAudioChannels(IDvInvocationStd& /*aInvocation*/, const std::string& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::Version(IDvInvocationStd& /*aInvocation*/, std::string& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::GetIntegratedDevicesPresent(IDvInvocationStd& /*aInvocation*/, bool& /*aIntegratedDevicesPresent*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::BootIntegratedDevicesToFallback(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt5Cpp::Reboot(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

