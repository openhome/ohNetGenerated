#include "DvAvOpenhomeOrgExakt1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgExakt1::SetPropertyDeviceList(const Brx& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    return SetPropertyString(*iPropertyDeviceList, aValue);
}

void DvProviderAvOpenhomeOrgExakt1::GetPropertyDeviceList(Brhz& aValue)
{
    ASSERT(iPropertyDeviceList != NULL);
    aValue.Set(iPropertyDeviceList->Value());
}

TBool DvProviderAvOpenhomeOrgExakt1::SetPropertyConnectionStatus(const Brx& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    return SetPropertyString(*iPropertyConnectionStatus, aValue);
}

void DvProviderAvOpenhomeOrgExakt1::GetPropertyConnectionStatus(Brhz& aValue)
{
    ASSERT(iPropertyConnectionStatus != NULL);
    aValue.Set(iPropertyConnectionStatus->Value());
}

DvProviderAvOpenhomeOrgExakt1::DvProviderAvOpenhomeOrgExakt1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Exakt", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgExakt1::DvProviderAvOpenhomeOrgExakt1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Exakt", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgExakt1::Construct()
{
    iPropertyDeviceList = NULL;
    iPropertyConnectionStatus = NULL;
}

void DvProviderAvOpenhomeOrgExakt1::EnablePropertyDeviceList()
{
    iPropertyDeviceList = new PropertyString(new ParameterString("DeviceList"));
    iService->AddProperty(iPropertyDeviceList); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt1::EnablePropertyConnectionStatus()
{
    iPropertyConnectionStatus = new PropertyString(new ParameterString("ConnectionStatus"));
    iService->AddProperty(iPropertyConnectionStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionDeviceList()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceList");
    action->AddOutputParameter(new ParameterRelated("List", *iPropertyDeviceList));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoDeviceList);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionDeviceSettings()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("DeviceSettings");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddOutputParameter(new ParameterString("Settings"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoDeviceSettings);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionConnectionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConnectionStatus");
    action->AddOutputParameter(new ParameterRelated("ConnectionStatus", *iPropertyConnectionStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoConnectionStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionSet()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Set");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterUint("BankId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    action->AddInputParameter(new ParameterBool("Mute"));
    action->AddInputParameter(new ParameterBool("Persist"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoSet);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionReprogram()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Reprogram");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoReprogram);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::EnableActionReprogramFallback()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ReprogramFallback");
    action->AddInputParameter(new ParameterString("DeviceId"));
    action->AddInputParameter(new ParameterString("FileUri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgExakt1::DoReprogramFallback);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgExakt1::DoDeviceList(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respList(aInvocation, "List");
    DeviceList(invocation, respList);
}

void DvProviderAvOpenhomeOrgExakt1::DoDeviceSettings(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz DeviceId;
    aInvocation.InvocationReadString("DeviceId", DeviceId);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSettings(aInvocation, "Settings");
    DeviceSettings(invocation, DeviceId, respSettings);
}

void DvProviderAvOpenhomeOrgExakt1::DoConnectionStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respConnectionStatus(aInvocation, "ConnectionStatus");
    ConnectionStatus(invocation, respConnectionStatus);
}

void DvProviderAvOpenhomeOrgExakt1::DoSet(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt1::DoReprogram(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt1::DoReprogramFallback(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgExakt1::DeviceList(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aList*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt1::DeviceSettings(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, IDvInvocationResponseString& /*aSettings*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt1::ConnectionStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aConnectionStatus*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt1::Set(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, TUint /*aBankId*/, const Brx& /*aFileUri*/, TBool /*aMute*/, TBool /*aPersist*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt1::Reprogram(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgExakt1::ReprogramFallback(IDvInvocation& /*aResponse*/, const Brx& /*aDeviceId*/, const Brx& /*aFileUri*/)
{
    ASSERTS();
}

