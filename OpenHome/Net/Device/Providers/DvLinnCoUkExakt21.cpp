#include "DvLinnCoUkExakt21.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkExakt21::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderLinnCoUkExakt21::SetPropertySettingsAvailable(TBool aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    return SetPropertyBool(*iPropertySettingsAvailable, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertySettingsAvailable(TBool& aValue)
{
    ASSERT(iPropertySettingsAvailable != NULL);
    aValue = iPropertySettingsAvailable->Value();
}

TBool DvProviderLinnCoUkExakt21::SetPropertySettingsChangedSeq(const Brx& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    return SetPropertyString(*iPropertySettingsChangedSeq, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertySettingsChangedSeq(Brhz& aValue)
{
    ASSERT(iPropertySettingsChangedSeq != NULL);
    aValue.Set(iPropertySettingsChangedSeq->Value());
}

TBool DvProviderLinnCoUkExakt21::SetPropertyUpdateStatus(const Brx& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    return SetPropertyString(*iPropertyUpdateStatus, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyUpdateStatus(Brhz& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    aValue.Set(iPropertyUpdateStatus->Value());
}

TBool DvProviderLinnCoUkExakt21::SetPropertyChannelMap(const Brx& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    return SetPropertyString(*iPropertyChannelMap, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyChannelMap(Brhz& aValue)
{
    ASSERT(iPropertyChannelMap != NULL);
    aValue.Set(iPropertyChannelMap->Value());
}

TBool DvProviderLinnCoUkExakt21::SetPropertyAudioChannels(const Brx& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    return SetPropertyString(*iPropertyAudioChannels, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyAudioChannels(Brhz& aValue)
{
    ASSERT(iPropertyAudioChannels != NULL);
    aValue.Set(iPropertyAudioChannels->Value());
}

TBool DvProviderLinnCoUkExakt21::SetPropertyVersion(TUint aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyUint(*iPropertyVersion, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyVersion(TUint& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue = iPropertyVersion->Value();
}

TBool DvProviderLinnCoUkExakt21::SetPropertyIntegratedDevicesPresent(TBool aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    return SetPropertyBool(*iPropertyIntegratedDevicesPresent, aValue);
}

void DvProviderLinnCoUkExakt21::GetPropertyIntegratedDevicesPresent(TBool& aValue)
{
    ASSERT(iPropertyIntegratedDevicesPresent != NULL);
    aValue = iPropertyIntegratedDevicesPresent->Value();
}

DvProviderLinnCoUkExakt21::DvProviderLinnCoUkExakt21(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Exakt2", 1)
{
    Construct();
}

DvProviderLinnCoUkExakt21::DvProviderLinnCoUkExakt21(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Exakt2", 1)
{
    Construct();
}

void DvProviderLinnCoUkExakt21::Construct()
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

void DvProviderLinnCoUkExakt21::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertySettingsAvailable()
{
    iPropertySettingsAvailable = new PropertyBool(new ParameterBool("SettingsAvailable"));
    iService->AddProperty(iPropertySettingsAvailable); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertySettingsChangedSeq()
{
    iPropertySettingsChangedSeq = new PropertyString(new ParameterString("SettingsChangedSeq"));
    iService->AddProperty(iPropertySettingsChangedSeq); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertyChannelMap()
{
    iPropertyChannelMap = new PropertyString(new ParameterString("ChannelMap"));
    iService->AddProperty(iPropertyChannelMap); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertyAudioChannels()
{
    iPropertyAudioChannels = new PropertyString(new ParameterString("AudioChannels"));
    iService->AddProperty(iPropertyAudioChannels); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyUint(new ParameterUint("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnablePropertyIntegratedDevicesPresent()
{
    iPropertyIntegratedDevicesPresent = new PropertyBool(new ParameterBool("IntegratedDevicesPresent"));
    iService->AddProperty(iPropertyIntegratedDevicesPresent); // passes ownership
}

void DvProviderLinnCoUkExakt21::EnableActionGetDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetDeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetSettingsAvailable()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsAvailable");
    action->AddOutputParameter(new ParameterRelated("SettingsAvailable", *iPropertySettingsAvailable));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetSettingsAvailable);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetSettingsChangedSeq()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSettingsChangedSeq");
    action->AddOutputParameter(new ParameterRelated("SettingsChangedSeq", *iPropertySettingsChangedSeq));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetSettingsChangedSeq);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Update");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionUpdateBlocking()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("UpdateBlocking");
    action->AddInputParameter(new ParameterString("Manifest"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoUpdateBlocking);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetChannelMap()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetChannelMap");
    action->AddOutputParameter(new ParameterRelated("ChannelMap", *iPropertyChannelMap));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetChannelMap);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetAudioChannels()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAudioChannels");
    action->AddOutputParameter(new ParameterRelated("AudioChannels", *iPropertyAudioChannels));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetAudioChannels);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetVersion");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetVersion);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionApplyUpdate()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ApplyUpdate");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoApplyUpdate);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionPlayTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PlayTestTrack");
    action->AddInputParameter(new ParameterString("ChannelMap"));
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddInputParameter(new ParameterString("Metadata"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoPlayTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionClearTestTrack()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearTestTrack");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoClearTestTrack);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionGetIntegratedDevicesPresent()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetIntegratedDevicesPresent");
    action->AddOutputParameter(new ParameterRelated("IntegratedDevicesPresent", *iPropertyIntegratedDevicesPresent));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoGetIntegratedDevicesPresent);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::EnableActionBootIntegratedDevicesToFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("BootIntegratedDevicesToFallback");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkExakt21::DoBootIntegratedDevicesToFallback);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkExakt21::DoGetDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    GetDeviceList(invocation, respList);
}

void DvProviderLinnCoUkExakt21::DoGetDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    GetDeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderLinnCoUkExakt21::DoGetSettingsAvailable(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respSettingsAvailable(aInvocation, "SettingsAvailable");
    GetSettingsAvailable(invocation, respSettingsAvailable);
}

void DvProviderLinnCoUkExakt21::DoGetSettingsChangedSeq(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettingsChangedSeq(aInvocation, "SettingsChangedSeq");
    GetSettingsChangedSeq(invocation, respSettingsChangedSeq);
}

void DvProviderLinnCoUkExakt21::DoUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Update(invocation, Manifest);
}

void DvProviderLinnCoUkExakt21::DoUpdateBlocking(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Manifest;
    aInvocation.InvocationReadString("Manifest", Manifest);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    UpdateBlocking(invocation, Manifest);
}

void DvProviderLinnCoUkExakt21::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respUpdateStatus(aInvocation, "UpdateStatus");
    GetUpdateStatus(invocation, respUpdateStatus);
}

void DvProviderLinnCoUkExakt21::DoGetChannelMap(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respChannelMap(aInvocation, "ChannelMap");
    GetChannelMap(invocation, respChannelMap);
}

void DvProviderLinnCoUkExakt21::DoGetAudioChannels(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAudioChannels(aInvocation, "AudioChannels");
    GetAudioChannels(invocation, respAudioChannels);
}

void DvProviderLinnCoUkExakt21::DoGetVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respVersion(aInvocation, "Version");
    GetVersion(invocation, respVersion);
}

void DvProviderLinnCoUkExakt21::DoApplyUpdate(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ApplyUpdate(invocation);
}

void DvProviderLinnCoUkExakt21::DoPlayTestTrack(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkExakt21::DoClearTestTrack(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearTestTrack(invocation);
}

void DvProviderLinnCoUkExakt21::DoGetIntegratedDevicesPresent(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respIntegratedDevicesPresent(aInvocation, "IntegratedDevicesPresent");
    GetIntegratedDevicesPresent(invocation, respIntegratedDevicesPresent);
}

void DvProviderLinnCoUkExakt21::DoBootIntegratedDevicesToFallback(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    BootIntegratedDevicesToFallback(invocation);
}

void DvProviderLinnCoUkExakt21::GetDeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetDeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetSettingsAvailable(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aSettingsAvailable*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetSettingsChangedSeq(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSettingsChangedSeq*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::Update(IDvInvocation& /*aResponse*/, const Brx& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::UpdateBlocking(IDvInvocation& /*aResponse*/, const Brx& /*aManifest*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetUpdateStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aUpdateStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetChannelMap(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aChannelMap*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetAudioChannels(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAudioChannels*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetVersion(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aVersion*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::ApplyUpdate(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::PlayTestTrack(IDvInvocation& /*aResponse*/, const Brx& /*aChannelMap*/, const Brx& /*aUri*/, const Brx& /*aMetadata*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::ClearTestTrack(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::GetIntegratedDevicesPresent(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aIntegratedDevicesPresent*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkExakt21::BootIntegratedDevicesToFallback(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

