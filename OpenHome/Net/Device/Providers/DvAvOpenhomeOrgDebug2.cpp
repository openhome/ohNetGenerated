#include "DvAvOpenhomeOrgDebug2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgDebug2::DvProviderAvOpenhomeOrgDebug2(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Debug", 2)
{
    Construct();
}

DvProviderAvOpenhomeOrgDebug2::DvProviderAvOpenhomeOrgDebug2(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Debug", 2)
{
    Construct();
}

void DvProviderAvOpenhomeOrgDebug2::Construct()
{
}

void DvProviderAvOpenhomeOrgDebug2::EnableActionGetLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2::EnableActionSendLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendLog");
    action->AddInputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2::DoSendLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2::EnableActionSendDeviceAnnouncements()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendDeviceAnnouncements");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2::DoSendDeviceAnnouncements);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2::EnableActionGetRecentMSearches()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecentMSearches");
    action->AddOutputParameter(new ParameterString("JsonArray"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2::DoGetRecentMSearches);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2::DoGetLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respLog(aInvocation, "Log");
    GetLog(invocation, respLog);
}

void DvProviderAvOpenhomeOrgDebug2::DoSendLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Data;
    aInvocation.InvocationReadString("Data", Data);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SendLog(invocation, Data);
}

void DvProviderAvOpenhomeOrgDebug2::DoSendDeviceAnnouncements(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SendDeviceAnnouncements(invocation);
}

void DvProviderAvOpenhomeOrgDebug2::DoGetRecentMSearches(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJsonArray(aInvocation, "JsonArray");
    GetRecentMSearches(invocation, respJsonArray);
}

void DvProviderAvOpenhomeOrgDebug2::GetLog(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aLog*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2::SendLog(IDvInvocation& /*aResponse*/, const Brx& /*aData*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2::SendDeviceAnnouncements(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2::GetRecentMSearches(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJsonArray*/)
{
    ASSERTS();
}

