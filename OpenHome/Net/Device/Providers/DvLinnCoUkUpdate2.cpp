#include "DvLinnCoUkUpdate2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkUpdate2::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate2::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate2::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate2::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate2::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate2::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

DvProviderLinnCoUkUpdate2::DvProviderLinnCoUkUpdate2(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 2)
{
    Construct();
}

DvProviderLinnCoUkUpdate2::DvProviderLinnCoUkUpdate2(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Update", 2)
{
    Construct();
}

void DvProviderLinnCoUkUpdate2::Construct()
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
}

void DvProviderLinnCoUkUpdate2::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate2::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionPushManifest2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionApply2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionRecover2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate2::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate2::DoPushManifest(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PushManifest(invocation, Uri);
}

void DvProviderLinnCoUkUpdate2::DoPushManifest2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    PushManifest2(invocation, Uri, respId);
}

void DvProviderLinnCoUkUpdate2::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSoftwareStatus(aInvocation, "SoftwareStatus");
    GetSoftwareStatus(invocation, respSoftwareStatus);
}

void DvProviderLinnCoUkUpdate2::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respExecutorStatus(aInvocation, "ExecutorStatus");
    GetExecutorStatus(invocation, respExecutorStatus);
}

void DvProviderLinnCoUkUpdate2::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobStatus(aInvocation, "JobStatus");
    GetJobStatus(invocation, respJobStatus);
}

void DvProviderLinnCoUkUpdate2::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Apply(invocation);
}

void DvProviderLinnCoUkUpdate2::DoApply2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Apply2(invocation, respId);
}

void DvProviderLinnCoUkUpdate2::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Recover(invocation);
}

void DvProviderLinnCoUkUpdate2::DoRecover2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Recover2(invocation, respId);
}

void DvProviderLinnCoUkUpdate2::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    CheckNow(invocation);
}

void DvProviderLinnCoUkUpdate2::PushManifest(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::PushManifest2(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::GetSoftwareStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::GetExecutorStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::GetJobStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJobStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::Apply(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::Apply2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::Recover(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::Recover2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate2::CheckNow(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

