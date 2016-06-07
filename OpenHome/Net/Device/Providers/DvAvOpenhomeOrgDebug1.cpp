#include "DvAvOpenhomeOrgDebug1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgDebug1::DvProviderAvOpenhomeOrgDebug1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Debug", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgDebug1::DvProviderAvOpenhomeOrgDebug1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Debug", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgDebug1::Construct()
{
}

void DvProviderAvOpenhomeOrgDebug1::EnableActionGetLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug1::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug1::EnableActionSendLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendLog");
    action->AddInputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug1::DoSendLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug1::DoGetLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respLog(aInvocation, "Log");
    GetLog(invocation, respLog);
}

void DvProviderAvOpenhomeOrgDebug1::DoSendLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Data;
    aInvocation.InvocationReadString("Data", Data);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SendLog(invocation, Data);
}

void DvProviderAvOpenhomeOrgDebug1::GetLog(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aLog*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug1::SendLog(IDvInvocation& /*aResponse*/, const Brx& /*aData*/)
{
    ASSERTS();
}

