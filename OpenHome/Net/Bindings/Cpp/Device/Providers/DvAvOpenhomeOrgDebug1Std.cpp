#include "DvAvOpenhomeOrgDebug1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgDebug1Cpp::DvProviderAvOpenhomeOrgDebug1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Debug", 1)
{
}

void DvProviderAvOpenhomeOrgDebug1Cpp::EnableActionGetLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug1Cpp::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug1Cpp::DoGetLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respLog;
    DvInvocationStd invocation(aInvocation);
    GetLog(invocation, respLog);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterLog(aInvocation, "Log");
    Brn buf_Log((const TByte*)respLog.c_str(), (TUint)respLog.length());
    respWriterLog.Write(buf_Log);
    aInvocation.InvocationWriteStringEnd("Log");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDebug1Cpp::GetLog(IDvInvocationStd& /*aInvocation*/, std::string& /*aLog*/)
{
    ASSERTS();
}

