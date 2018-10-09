#include "DvLinnCoUkUpdate1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkUpdate1::SetPropertySoftwareStatus(const Brx& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    return SetPropertyString(*iPropertySoftwareStatus, aValue);
}

void DvProviderLinnCoUkUpdate1::GetPropertySoftwareStatus(Brhz& aValue)
{
    ASSERT(iPropertySoftwareStatus != NULL);
    aValue.Set(iPropertySoftwareStatus->Value());
}

TBool DvProviderLinnCoUkUpdate1::SetPropertyExecutorStatus(const Brx& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    return SetPropertyString(*iPropertyExecutorStatus, aValue);
}

void DvProviderLinnCoUkUpdate1::GetPropertyExecutorStatus(Brhz& aValue)
{
    ASSERT(iPropertyExecutorStatus != NULL);
    aValue.Set(iPropertyExecutorStatus->Value());
}

DvProviderLinnCoUkUpdate1::DvProviderLinnCoUkUpdate1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 1)
{
    Construct();
}

DvProviderLinnCoUkUpdate1::DvProviderLinnCoUkUpdate1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Update", 1)
{
    Construct();
}

void DvProviderLinnCoUkUpdate1::Construct()
{
    iPropertySoftwareStatus = NULL;
    iPropertyExecutorStatus = NULL;
}

void DvProviderLinnCoUkUpdate1::EnablePropertySoftwareStatus()
{
    iPropertySoftwareStatus = new PropertyString(new ParameterString("SoftwareStatus"));
    iService->AddProperty(iPropertySoftwareStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1::EnablePropertyExecutorStatus()
{
    iPropertyExecutorStatus = new PropertyString(new ParameterString("ExecutorStatus"));
    iService->AddProperty(iPropertyExecutorStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionGetSoftwareStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSoftwareStatus");
    action->AddOutputParameter(new ParameterRelated("SoftwareStatus", *iPropertySoftwareStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoGetSoftwareStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionGetExecutorStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetExecutorStatus");
    action->AddOutputParameter(new ParameterRelated("ExecutorStatus", *iPropertyExecutorStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoGetExecutorStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionRecover()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Recover");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoRecover);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionCheckNow()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("CheckNow");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoCheckNow);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::DoPushManifest(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Uri;
    aInvocation.InvocationReadString("Uri", Uri);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    PushManifest(invocation, Uri);
}

void DvProviderLinnCoUkUpdate1::DoGetSoftwareStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSoftwareStatus(aInvocation, "SoftwareStatus");
    GetSoftwareStatus(invocation, respSoftwareStatus);
}

void DvProviderLinnCoUkUpdate1::DoGetExecutorStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respExecutorStatus(aInvocation, "ExecutorStatus");
    GetExecutorStatus(invocation, respExecutorStatus);
}

void DvProviderLinnCoUkUpdate1::DoApply(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Apply(invocation);
}

void DvProviderLinnCoUkUpdate1::DoRecover(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Recover(invocation);
}

void DvProviderLinnCoUkUpdate1::DoCheckNow(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    CheckNow(invocation);
}

void DvProviderLinnCoUkUpdate1::PushManifest(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::GetSoftwareStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSoftwareStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::GetExecutorStatus(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aExecutorStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::Apply(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::Recover(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::CheckNow(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

