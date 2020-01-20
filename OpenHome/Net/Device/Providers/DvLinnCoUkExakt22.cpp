#include "DvLinnCoUkExakt22.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkExakt22::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt22::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt22::SetPropertySettingsChangedSeq(const Brx& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    return SetPropertyString(*iPropertySettingsChangedSeq, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertySettingsChangedSeq(Brhz& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    aValue.Set(iPropertySettingsChangedSeq->Value());
}

TBool DvProviderLinnCoUkExakt22::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt22::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt22::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt22::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

TBool DvProviderLinnCoUkExakt22::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

TBool DvProviderLinnCoUkExakt22::SetPropertyTestTrackPlaying(TBool aValue)
{
    ASSERT(iPropertyTestTrackPlaying != NULL);
    return SetPropertyBool(*iPropertyTestTrackPlaying, aValue);
}

void DvProviderLinnCoUkExakt22::GetPropertyTestTrackPlaying(TBool& aValue)
{
    ASSERT(iPropertyTestTrackPlaying != NULL);
    aValue = iPropertyTestTrackPlaying->Value();
}

DvProviderLinnCoUkExakt22::DvProviderLinnCoUkExakt22(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Exakt2", 2)
{
    Construct();
}

DvProviderLinnCoUkExakt22::DvProviderLinnCoUkExakt22(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Exakt2", 2)
{
    Construct();
}

void DvProviderLinnCoUkExakt22::Construct()
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

void DvProviderLinnCoUkExakt22::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertySettingsChangedSeq()
{
    iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq"));
    iService->AddProperty(iPropertySettingsChangedSeq); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnablePropertyTestTrackPlaying()
{
    iPropertyTestTrackPlaying = new PropertyBool(new ParameterBool("TestTrackPlaying"));
    iService->AddProperty(iPropertyTestTrackPlaying); // passes ownership
}

void DvProviderLinnCoUkExakt22::EnableActionGetDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetSettingsAvailable()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetSettingsChangedSeq()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsChangedSeq");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedSeq", *iPropertySettingsChangedSeq));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetSettingsChangedSeq);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionUpdateBlocking()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionApplyUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ApplyUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoApplyUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionPlayTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayTestTrack");
    action->AddInputParameter(new ParameterString("ChannelMap"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoPlayTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionClearTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearTestTrack");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoClearTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetIntegratedDevicesPresent()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionBootIntegratedDevicesToFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::EnableActionGetTestTrackPlaying()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetTestTrackPlaying");
    action->AddOutputParameter(new ParameterRelated("TestTrackPlaying", *iPropertyTestTrackPlaying));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt22::DoGetTestTrackPlaying);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt22::DoGetDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    GetDeviceList(invocation, respList);
}

void DvProviderLinnCoUkExakt22::DoGetDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    GetDeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderLinnCoUkExakt22::DoGetSettingsAvailable(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respSettingsAvailable(aInvocation, "SettingsAvailable");
    GetSettingsAvailable(invocation, respSettingsAvailable);
}

void DvProviderLinnCoUkExakt22::DoGetSettingsChangedSeq(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettingsChangedSeq(aInvocation, "SettingsChangedSeq");
    GetSettingsChangedSeq(invocation, respSettingsChangedSeq);
}

void DvProviderLinnCoUkExakt22::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Update(invocation, Manifest);
}

void DvProviderLinnCoUkExakt22::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    UpdateBlocking(invocation, Manifest);
}

void DvProviderLinnCoUkExakt22::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respUpdateStatus(aInvocation, "UpdateStatus");
    GetUpdateStatus(invocation, respUpdateStatus);
}

void DvProviderLinnCoUkExakt22::DoGetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    GetChannelMap(invocation, respChannelMap);
}

void DvProviderLinnCoUkExakt22::DoGetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    GetAudioChannels(invocation, respAudioChannels);
}

void DvProviderLinnCoUkExakt22::DoGetVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    GetVersion(invocation, respVersion);
}

void DvProviderLinnCoUkExakt22::DoApplyUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ApplyUpdate(invocation);
}

void DvProviderLinnCoUkExakt22::DoPlayTestTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz ChannelMap;
    aInvocation.InvocationReadString("ChannelMap", ChannelMap);
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    Brhz Metadata;
    aInvocation.InvocationReadString("Metadata", Metadata);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PlayTestTrack(invocation, ChannelMap, Uri, Metadata);
}

void DvProviderLinnCoUkExakt22::DoClearTestTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearTestTrack(invocation);
}

void DvProviderLinnCoUkExakt22::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respIntegratedDevicesPresent(aInvocation, "IntegratedDevicesPresent");
    GetIntegratedDevicesPresent(invocation, respIntegratedDevicesPresent);
}

void DvProviderLinnCoUkExakt22::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    BootIntegratedDevicesToFallback(invocation);
}

void DvProviderLinnCoUkExakt22::DoGetTestTrackPlaying(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respTestTrackPlaying(aInvocation, "TestTrackPlaying");
    GetTestTrackPlaying(invocation, respTestTrackPlaying);
}

void DvProviderLinnCoUkExakt22::GetDeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetDeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetSettingsAvailable(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aSettingsAvailable*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetSettingsChangedSeq(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSettingsChangedSeq*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::Update(IDvInvocation& /*aResponse*/, const Brx& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::UpdateBlocking(IDvInvocation& /*aResponse*/, const Brx& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetUpdateStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aUpdateStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetChannelMap(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetAudioChannels(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::ApplyUpdate(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::PlayTestTrack(IDvInvocation& /*aResponse*/, const Brx& /*aChannelMap*/, const Brx& /*aUri*/, const Brx& /*aMetadata*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::ClearTestTrack(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetIntegratedDevicesPresent(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aIntegratedDevicesPresent*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::BootIntegratedDevicesToFallback(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt22::GetTestTrackPlaying(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aTestTrackPlaying*/)
{
    ASSERTS();
}

