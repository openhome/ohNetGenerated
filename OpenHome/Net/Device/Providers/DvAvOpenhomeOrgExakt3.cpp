#include "DvAvOpenhomeOrgExakt3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgExakt3::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt3::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt3::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderAvOpenhomeOrgExakt3::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderAvOpenhomeOrgExakt3::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderAvOpenhomeOrgExakt3::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt3::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

DvProviderAvOpenhomeOrgExakt3::DvProviderAvOpenhomeOrgExakt3(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 3)
{
    Construct();
}

DvProviderAvOpenhomeOrgExakt3::DvProviderAvOpenhomeOrgExakt3(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Exakt", 3)
{
    Construct();
}

void DvProviderAvOpenhomeOrgExakt3::Construct()
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyChannelMap = NULL;
    iPropertyAudioChannels = NULL;
    iPropertyVersion = NULL;
}

void DvProviderAvOpenhomeOrgExakt3::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionSetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetChannelMap");
    action->AddInputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoSetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("AudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionSetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetAudioChannels");
    action->AddInputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoSetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt3::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt3::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    DeviceList(invocation, respList);
}

void DvProviderAvOpenhomeOrgExakt3::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    DeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderAvOpenhomeOrgExakt3::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respConnectionStatus(aInvocation, "ConnectionStatus");
    ConnectionStatus(invocation, respConnectionStatus);
}

void DvProviderAvOpenhomeOrgExakt3::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt3::DoChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    ChannelMap(invocation, respChannelMap);
}

void DvProviderAvOpenhomeOrgExakt3::DoSetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetChannelMap(invocation, ChannelMap);
}

void DvProviderAvOpenhomeOrgExakt3::DoAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    AudioChannels(invocation, respAudioChannels);
}

void DvProviderAvOpenhomeOrgExakt3::DoSetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz AudioChannels;
    aInvocation.InvocationReadString("AudioChannels", AudioChannels);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetAudioChannels(invocation, AudioChannels);
}

void DvProviderAvOpenhomeOrgExakt3::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respVersion(aInvocation, "Version");
    Version(invocation, respVersion);
}

void DvProviderAvOpenhomeOrgExakt3::DeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::DeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::ConnectionStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::Set(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, TUint /*aBankId*/, const Brx& /*aFileUri*/, TBool /*aMute*/, TBool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::Reprogram(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::ReprogramFallback(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::ChannelMap(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::SetChannelMap(IDvInvocation& /*aResponse*/, const Brx& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::AudioChannels(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::SetAudioChannels(IDvInvocation& /*aResponse*/, const Brx& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt3::Version(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aVersion*/)
{
    ASSERTS();
}

