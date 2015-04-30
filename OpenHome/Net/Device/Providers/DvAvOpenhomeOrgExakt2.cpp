#include "DvAvOpenhomeOrgExakt2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgExakt2::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt2::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt2::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt2::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

TBool DvProviderAvOpenhomeOrgExakt2::SetPropertyVersion(const Brx& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    return SetPropertyString(*iPropertyVersion, aValue);
}

void DvProviderAvOpenhomeOrgExakt2::GetPropertyVersion(Brhz& aValue)
{
    ASSERT(iPropertyVersion != NULL);
    aValue.Set(iPropertyVersion->Value());
}

DvProviderAvOpenhomeOrgExakt2::DvProviderAvOpenhomeOrgExakt2(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 2)
{
    Construct();
}

DvProviderAvOpenhomeOrgExakt2::DvProviderAvOpenhomeOrgExakt2(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Exakt", 2)
{
    Construct();
}

void DvProviderAvOpenhomeOrgExakt2::Construct()
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
    iPropertyVersion = NULL;
}

void DvProviderAvOpenhomeOrgExakt2::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2::EnablePropertyVersion()
{
    iPropertyVersion = new PropertyString(new ParameterString("Version"));
    iService->AddProperty(iPropertyVersion); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::EnableActionVersion()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Version");
    action->AddOutputParameter(new ParameterRelated("Version", *iPropertyVersion));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt2::DoVersion);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt2::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    DeviceList(invocation, respList);
}

void DvProviderAvOpenhomeOrgExakt2::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    DeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderAvOpenhomeOrgExakt2::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respConnectionStatus(aInvocation, "ConnectionStatus");
    ConnectionStatus(invocation, respConnectionStatus);
}

void DvProviderAvOpenhomeOrgExakt2::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt2::DoVersion(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respVersion(aInvocation, "Version");
    Version(invocation, respVersion);
}

void DvProviderAvOpenhomeOrgExakt2::DeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::DeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::ConnectionStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::Set(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, TUint /*aBankId*/, const Brx& /*aFileUri*/, TBool /*aMute*/, TBool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::Reprogram(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::ReprogramFallback(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt2::Version(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aVersion*/)
{
    ASSERTS();
}

