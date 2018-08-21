#include "DvAvOpenhomeOrgExakt4.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

TBool DvProviderAvOpenhomeOrgExakt4::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderAvOpenhomeOrgExakt4::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

DvProviderAvOpenhomeOrgExakt4::DvProviderAvOpenhomeOrgExakt4(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 4)
{
    Construct();
}

DvProviderAvOpenhomeOrgExakt4::DvProviderAvOpenhomeOrgExakt4(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Exakt", 4)
{
    Construct();
}

void DvProviderAvOpenhomeOrgExakt4::Construct()
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
    iPropertyIntegratedDevicesPresent = NULL;
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionSetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionSetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionGetIntegratedDevicesPresent()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::EnableActionBootIntegratedDevicesToFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt4::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt4::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    DeviceList(invocation, respList);
}

void DvProviderAvOpenhomeOrgExakt4::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    DeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderAvOpenhomeOrgExakt4::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respConnectionStatus(aInvocation, "ConnectionStatus");
    ConnectionStatus(invocation, respConnectionStatus);
}

void DvProviderAvOpenhomeOrgExakt4::DoSet(IDviInvocation& aInvocation)
{
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
    Set(invocation, DeviceId, BankId, FileUri, Mute, Persist);
}

void DvProviderAvOpenhomeOrgExakt4::DoReprogram(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    Brhz FileUri;
    aInvocation.InvocationReadString("FileUri", FileUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Reprogram(invocation, DeviceId, FileUri);
}

void DvProviderAvOpenhomeOrgExakt4::DoReprogramFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    Brhz FileUri;
    aInvocation.InvocationReadString("FileUri", FileUri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ReprogramFallback(invocation, DeviceId, FileUri);
}

void DvProviderAvOpenhomeOrgExakt4::DoChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    ChannelMap(invocation, respChannelMap);
}

void DvProviderAvOpenhomeOrgExakt4::DoSetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetChannelMap(invocation, ChannelMap);
}

void DvProviderAvOpenhomeOrgExakt4::DoAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    AudioChannels(invocation, respAudioChannels);
}

void DvProviderAvOpenhomeOrgExakt4::DoSetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz AudioChannels;
    aInvocation.InvocationReadString("AudioChannels", AudioChannels);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAudioChannels(invocation, AudioChannels);
}

void DvProviderAvOpenhomeOrgExakt4::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respVersion(aInvocation, "Version");
    Version(invocation, respVersion);
}

void DvProviderAvOpenhomeOrgExakt4::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respIntegratedDevicesPresent(aInvocation, "IntegratedDevicesPresent");
    GetIntegratedDevicesPresent(invocation, respIntegratedDevicesPresent);
}

void DvProviderAvOpenhomeOrgExakt4::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    BootIntegratedDevicesToFallback(invocation);
}

void DvProviderAvOpenhomeOrgExakt4::DeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::DeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::ConnectionStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::Set(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, TUint /*aBankId*/, const Brx& /*aFileUri*/, TBool /*aMute*/, TBool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::Reprogram(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::ReprogramFallback(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::ChannelMap(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::SetChannelMap(IDvInvocation& /*aResponse*/, const Brx& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::AudioChannels(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::SetAudioChannels(IDvInvocation& /*aResponse*/, const Brx& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::Version(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::GetIntegratedDevicesPresent(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aIntegratedDevicesPresent*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt4::BootIntegratedDevicesToFallback(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

