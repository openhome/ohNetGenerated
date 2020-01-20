#include "DvLinnCoUkUpdate3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkUpdate3::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate3::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate3::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate3::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

TBool DvProviderLinnCoUkUpdate3::SetPropertyRecoverSupported(TBool aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    return SetPropertyBool(*iPropertyRecoverSupported, aValue);
}

void DvProviderLinnCoUkUpdate3::GetPropertyRecoverSupported(TBool& aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    aValue = iPropertyRecoverSupported->Value();
}

DvProviderLinnCoUkUpdate3::DvProviderLinnCoUkUpdate3(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 3)
{
    Construct();
}

DvProviderLinnCoUkUpdate3::DvProviderLinnCoUkUpdate3(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Update", 3)
{
    Construct();
}

void DvProviderLinnCoUkUpdate3::Construct()
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
    iPropertyRecoverSupported = NULL;
}

void DvProviderLinnCoUkUpdate3::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate3::EnablePropertyRecoverSupported()
{
    iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
    iService->AddProperty(iPropertyRecoverSupported); // passes ownership
}

void DvProviderLinnCoUkUpdate3::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionPushManifest2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionApply2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionRecover2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::EnableActionGetRecoverSupported()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecoverSupported");
    action->AddOutputParameter(new ParameterRelated("RecoverSupported", *iPropertyRecoverSupported));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate3::DoGetRecoverSupported);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate3::DoPushManifest(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PushManifest(invocation, Uri);
}

void DvProviderLinnCoUkUpdate3::DoPushManifest2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    PushManifest2(invocation, Uri, respId);
}

void DvProviderLinnCoUkUpdate3::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSoftwareStatus(aInvocation, "SoftwareStatus");
    GetSoftwareStatus(invocation, respSoftwareStatus);
}

void DvProviderLinnCoUkUpdate3::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respExecutorStatus(aInvocation, "ExecutorStatus");
    GetExecutorStatus(invocation, respExecutorStatus);
}

void DvProviderLinnCoUkUpdate3::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobStatus(aInvocation, "JobStatus");
    GetJobStatus(invocation, respJobStatus);
}

void DvProviderLinnCoUkUpdate3::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Apply(invocation);
}

void DvProviderLinnCoUkUpdate3::DoApply2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Apply2(invocation, respId);
}

void DvProviderLinnCoUkUpdate3::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Recover(invocation);
}

void DvProviderLinnCoUkUpdate3::DoRecover2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Recover2(invocation, respId);
}

void DvProviderLinnCoUkUpdate3::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    CheckNow(invocation);
}

void DvProviderLinnCoUkUpdate3::DoGetRecoverSupported(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respRecoverSupported(aInvocation, "RecoverSupported");
    GetRecoverSupported(invocation, respRecoverSupported);
}

void DvProviderLinnCoUkUpdate3::PushManifest(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::PushManifest2(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::GetSoftwareStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::GetExecutorStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::GetJobStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJobStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::Apply(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::Apply2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::Recover(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::Recover2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::CheckNow(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate3::GetRecoverSupported(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aRecoverSupported*/)
{
    ASSERTS();
}

