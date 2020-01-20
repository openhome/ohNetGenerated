#include "DvAvOpenhomeOrgDebug2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

DvProviderAvOpenhomeOrgDebug2Cpp::DvProviderAvOpenhomeOrgDebug2Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Debug", 2)
{
}

void DvProviderAvOpenhomeOrgDebug2Cpp::EnableActionGetLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetLog");
    action->AddOutputParameter(new ParameterString("Log"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2Cpp::DoGetLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2Cpp::EnableActionSendLog()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendLog");
    action->AddInputParameter(new ParameterString("Data"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2Cpp::DoSendLog);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2Cpp::EnableActionSendDeviceAnnouncements()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SendDeviceAnnouncements");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2Cpp::DoSendDeviceAnnouncements);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2Cpp::EnableActionGetRecentMSearches()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecentMSearches");
    action->AddOutputParameter(new ParameterString("JsonArray"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgDebug2Cpp::DoGetRecentMSearches);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgDebug2Cpp::DoGetLog(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgDebug2Cpp::DoSendLog(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Data;
    aInvocation.InvocationReadString("Data", buf_Data);
    std::string Data((const char*)buf_Data.Ptr(), buf_Data.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SendLog(invocation, Data);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::DoSendDeviceAnnouncements(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SendDeviceAnnouncements(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::DoGetRecentMSearches(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respJsonArray;
    DvInvocationStd invocation(aInvocation);
    GetRecentMSearches(invocation, respJsonArray);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterJsonArray(aInvocation, "JsonArray");
    Brn buf_JsonArray((const TByte*)respJsonArray.c_str(), (TUint)respJsonArray.length());
    respWriterJsonArray.Write(buf_JsonArray);
    aInvocation.InvocationWriteStringEnd("JsonArray");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::GetLog(IDvInvocationStd& /*aInvocation*/, std::string& /*aLog*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::SendLog(IDvInvocationStd& /*aInvocation*/, const std::string& /*aData*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::SendDeviceAnnouncements(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgDebug2Cpp::GetRecentMSearches(IDvInvocationStd& /*aInvocation*/, std::string& /*aJsonArray*/)
{
    ASSERTS();
}

