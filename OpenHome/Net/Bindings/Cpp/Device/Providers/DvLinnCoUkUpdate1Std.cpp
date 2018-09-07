#include "DvLinnCoUkUpdate1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkUpdate1Cpp::SetPropertySoftwareStatus(const std::string& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySoftwareStatus, buf);
}

void DvProviderLinnCoUkUpdate1Cpp::GetPropertySoftwareStatus(std::string& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    const Brx& val = iPropertySoftwareStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate1Cpp::SetPropertyExecutorStatus(const std::string& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyExecutorStatus, buf);
}

void DvProviderLinnCoUkUpdate1Cpp::GetPropertyExecutorStatus(std::string& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    const Brx& val = iPropertyExecutorStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkUpdate1Cpp::DvProviderLinnCoUkUpdate1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 1)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
}

void DvProviderLinnCoUkUpdate1Cpp::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1Cpp::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::DoPushManifest(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    PushManifest(invocation, Uri);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSoftwareStatus;
    DvInvocationStd invocation(aInvocation);
    GetSoftwareStatus(invocation, respSoftwareStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSoftwareStatus(aInvocation, "SoftwareStatus");
    Brn buf_SoftwareStatus((const TByte*)respSoftwareStatus.c_str(), (TUint)respSoftwareStatus.length());
    respWriterSoftwareStatus.Write(buf_SoftwareStatus);
    aInvocation.InvocationWriteStringEnd("SoftwareStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respExecutorStatus;
    DvInvocationStd invocation(aInvocation);
    GetExecutorStatus(invocation, respExecutorStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterExecutorStatus(aInvocation, "ExecutorStatus");
    Brn buf_ExecutorStatus((const TByte*)respExecutorStatus.c_str(), (TUint)respExecutorStatus.length());
    respWriterExecutorStatus.Write(buf_ExecutorStatus);
    aInvocation.InvocationWriteStringEnd("ExecutorStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Apply(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Recover(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    CheckNow(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::PushManifest(IDvInvocationStd& /*aInvocation*/, const std::string& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::GetSoftwareStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::GetExecutorStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::Apply(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::Recover(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::CheckNow(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

