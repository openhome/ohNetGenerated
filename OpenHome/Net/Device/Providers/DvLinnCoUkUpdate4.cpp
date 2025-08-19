#include "DvLinnCoUkUpdate4.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkUpdate4::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate4::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate4::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4::SetPropertyJobStatus(const Brx& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    return SetPropertyString(*iPropertyJobStatus, aValue);
}

void DvProviderLinnCoUkUpdate4::GetPropertyJobStatus(Brhz& aValue)
{
    ASSERT(iPropertyJobStatus != NULL);
    aValue.Set(iPropertyJobStatus->Value());
}

TBool DvProviderLinnCoUkUpdate4::SetPropertyRecoverSupported(TBool aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    return SetPropertyBool(*iPropertyRecoverSupported, aValue);
}

void DvProviderLinnCoUkUpdate4::GetPropertyRecoverSupported(TBool& aValue)
{
    ASSERT(iPropertyRecoverSupported != NULL);
    aValue = iPropertyRecoverSupported->Value();
}

DvProviderLinnCoUkUpdate4::DvProviderLinnCoUkUpdate4(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 4)
{
    Construct();
}

DvProviderLinnCoUkUpdate4::DvProviderLinnCoUkUpdate4(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Update", 4)
{
    Construct();
}

void DvProviderLinnCoUkUpdate4::Construct()
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
    iPropertyJobStatus = NULL;
    iPropertyRecoverSupported = NULL;
}

void DvProviderLinnCoUkUpdate4::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4::EnablePropertyJobStatus()
{
    iPropertyJobStatus = new PropertyString(new ParameterString("JobStatus"));
    iService->AddProperty(iPropertyJobStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate4::EnablePropertyRecoverSupported()
{
    iPropertyRecoverSupported = new PropertyBool(new ParameterBool("RecoverSupported"));
    iService->AddProperty(iPropertyRecoverSupported); // passes ownership
}

void DvProviderLinnCoUkUpdate4::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionPushManifest2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest2");
    action->AddInputParameter(new ParameterString("Uri"));
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoPushManifest2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionGetJobStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetJobStatus");
    action->AddOutputParameter(new ParameterRelated("JobStatus", *iPropertyJobStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoGetJobStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionApply2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoApply2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionRecover2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoRecover2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionRecoverKeepStore()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RecoverKeepStore");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoRecoverKeepStore);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionRecoverKeepStore2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("RecoverKeepStore2");
    action->AddOutputParameter(new ParameterUint("Id"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoRecoverKeepStore2);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::EnableActionGetRecoverSupported()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetRecoverSupported");
    action->AddOutputParameter(new ParameterRelated("RecoverSupported", *iPropertyRecoverSupported));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate4::DoGetRecoverSupported);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate4::DoPushManifest(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PushManifest(invocation, Uri);
}

void DvProviderLinnCoUkUpdate4::DoPushManifest2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    PushManifest2(invocation, Uri, respId);
}

void DvProviderLinnCoUkUpdate4::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSoftwareStatus(aInvocation, "SoftwareStatus");
    GetSoftwareStatus(invocation, respSoftwareStatus);
}

void DvProviderLinnCoUkUpdate4::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respExecutorStatus(aInvocation, "ExecutorStatus");
    GetExecutorStatus(invocation, respExecutorStatus);
}

void DvProviderLinnCoUkUpdate4::DoGetJobStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respJobStatus(aInvocation, "JobStatus");
    GetJobStatus(invocation, respJobStatus);
}

void DvProviderLinnCoUkUpdate4::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Apply(invocation);
}

void DvProviderLinnCoUkUpdate4::DoApply2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Apply2(invocation, respId);
}

void DvProviderLinnCoUkUpdate4::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Recover(invocation);
}

void DvProviderLinnCoUkUpdate4::DoRecover2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    Recover2(invocation, respId);
}

void DvProviderLinnCoUkUpdate4::DoRecoverKeepStore(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    RecoverKeepStore(invocation);
}

void DvProviderLinnCoUkUpdate4::DoRecoverKeepStore2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseUint respId(aInvocation, "Id");
    RecoverKeepStore2(invocation, respId);
}

void DvProviderLinnCoUkUpdate4::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    CheckNow(invocation);
}

void DvProviderLinnCoUkUpdate4::DoGetRecoverSupported(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respRecoverSupported(aInvocation, "RecoverSupported");
    GetRecoverSupported(invocation, respRecoverSupported);
}

void DvProviderLinnCoUkUpdate4::PushManifest(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::PushManifest2(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::GetSoftwareStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::GetExecutorStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::GetJobStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aJobStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::Apply(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::Apply2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::Recover(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::Recover2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::RecoverKeepStore(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::RecoverKeepStore2(IDvInvocation& /*aResponse*/, IDvInvocationResponseUint& /*aId*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::CheckNow(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate4::GetRecoverSupported(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aRecoverSupported*/)
{
    ASSERTS();
}

