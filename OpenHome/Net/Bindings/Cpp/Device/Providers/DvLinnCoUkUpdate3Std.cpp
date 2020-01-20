#include "DvLinnCoUkUpdate3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkUpdate3Cpp::SetPropertySoftwareStatus(const std::string& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySoftwareStatus, buf);
}

void DvProviderLinnCoUkUpdate3Cpp::GetPropertySoftwareStatus(std::string& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    const Brx& val = iPropertySoftwareStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate3Cpp::SetPropertyExecutorStatus(const std::string& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyExecutorStatus, buf);
}

void DvProviderLinnCoUkUpdate3Cpp::GetPropertyExecutorStatus(std::string& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    const Brx& val = iPropertyExecutorStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate3Cpp::SetPropertyJobStatus(const std::string& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyJobStatus, buf);
}

void DvProviderLinnCoUkUpdate3Cpp::GetPropertyJobStatus(std::string& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    const Brx& val = iPropertyJobStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate3Cpp::SetPropertyRecoverSupported(bool aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    return SetPropertyBool(*iPropertyRecoverSupported, aValue);
}

void DvProviderLinnCoUkUpdate3Cpp::GetPropertyRecoverSupported(bool& aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    aValue = iPropertyRecoverSupported->Value();
}

DvProviderLinnCoUkUpdate3Cpp::DvProviderLinnCoUkUpdate3Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 3)
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
    iPropertyRecoverSupported = NULL;
}

void DvProviderLinnCoUkUpdate3Cpp::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3Cpp::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3Cpp::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3Cpp::EnablePropertyRecoverSupported()
{
    iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
    iService->AddProperty(iPropertyRecoverSupported); // passes ownership
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionPushManifest2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionApply2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionRecover2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::EnableActionGetRecoverSupported()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecoverSupported");
    action->AddOutputParameter(new ParameterRelated("RecoverSupported", *iPropertyRecoverSupported));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3Cpp::DoGetRecoverSupported);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3Cpp::DoPushManifest(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3Cpp::DoPushManifest2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Uri;
    aInvocation.InvocationReadString("Uri", buf_Uri);
    std::string Uri((const char*)buf_Uri.Ptr(), buf_Uri.Bytes());
    aInvocation.InvocationReadEnd();
    uint32_t respId;
    DvInvocationStd invocation(aInvocation);
    PushManifest2(invocation, Uri, respId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterId(aInvocation, "Id");
    respWriterId.Write(respId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoGetSoftwareStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3Cpp::DoGetExecutorStatus(IDviInvocation& aInvocation)
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

void DvProviderLinnCoUkUpdate3Cpp::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respJobStatus;
    DvInvocationStd invocation(aInvocation);
    GetJobStatus(invocation, respJobStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterJobStatus(aInvocation, "JobStatus");
    Brn buf_JobStatus((const TByte*)respJobStatus.c_str(), (TUint)respJobStatus.length());
    respWriterJobStatus.Write(buf_JobStatus);
    aInvocation.InvocationWriteStringEnd("JobStatus");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Apply(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoApply2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respId;
    DvInvocationStd invocation(aInvocation);
    Apply2(invocation, respId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterId(aInvocation, "Id");
    respWriterId.Write(respId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Recover(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoRecover2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respId;
    DvInvocationStd invocation(aInvocation);
    Recover2(invocation, respId);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterId(aInvocation, "Id");
    respWriterId.Write(respId);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    CheckNow(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::DoGetRecoverSupported(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respRecoverSupported;
    DvInvocationStd invocation(aInvocation);
    GetRecoverSupported(invocation, respRecoverSupported);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterRecoverSupported(aInvocation, "RecoverSupported");
    respWriterRecoverSupported.Write(respRecoverSupported);
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate3Cpp::PushManifest(IDvInvocationStd& /*aInvocation*/, const std::string& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::PushManifest2(IDvInvocationStd& /*aInvocation*/, const std::string& /*aUri*/, uint32_t& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::GetSoftwareStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::GetExecutorStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::GetJobStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aJobStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::Apply(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::Apply2(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::Recover(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::Recover2(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::CheckNow(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3Cpp::GetRecoverSupported(IDvInvocationStd& /*aInvocation*/, bool& /*aRecoverSupported*/)
{
    ASSERTS();
}

