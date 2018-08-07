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

TBool DvProviderLinnCoUkUpdate1::SetPropertyUpdateTopic(const Brx& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    return SetPropertyString(*iPropertyUpdateTopic, aValue);
}

void DvProviderLinnCoUkUpdate1::GetPropertyUpdateTopic(Brhz& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    aValue.Set(iPropertyUpdateTopic->Value());
}

TBool DvProviderLinnCoUkUpdate1::SetPropertyUpdateChannel(const Brx& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    return SetPropertyString(*iPropertyUpdateChannel, aValue);
}

void DvProviderLinnCoUkUpdate1::GetPropertyUpdateChannel(Brhz& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    aValue.Set(iPropertyUpdateChannel->Value());
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
    iPropertyUpdateTopic = NULL;
    iPropertyUpdateChannel = NULL;
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

void DvProviderLinnCoUkUpdate1::EnablePropertyUpdateTopic()
{
    iPropertyUpdateTopic = new PropertyString(new ParameterString("UpdateTopic"));
    iService->AddProperty(iPropertyUpdateTopic); // passes ownership
}

void DvProviderLinnCoUkUpdate1::EnablePropertyUpdateChannel()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[4];
    allowedValues[index++] = (TChar*)"release";
    allowedValues[index++] = (TChar*)"beta";
    allowedValues[index++] = (TChar*)"development";
    allowedValues[index++] = (TChar*)"nightly";
    iPropertyUpdateChannel = new PropertyString(new ParameterString("UpdateChannel", allowedValues, 4));
    delete[] allowedValues;
    iService->AddProperty(iPropertyUpdateChannel); // passes ownership
}

void DvProviderLinnCoUkUpdate1::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionSetUpdateFeedParams()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpdateFeedParams");
    action->AddInputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoSetUpdateFeedParams);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1::EnableActionGetUpdateFeedParams()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateFeedParams");
    action->AddOutputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddOutputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoGetUpdateFeedParams);
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

void DvProviderLinnCoUkUpdate1::EnableActionRestore()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Restore");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1::DoRestore);
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

void DvProviderLinnCoUkUpdate1::DoSetUpdateFeedParams(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Topic;
    aInvocation.InvocationReadString("Topic", Topic);
    Brhz Channel;
    aInvocation.InvocationReadString("Channel", Channel);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetUpdateFeedParams(invocation, Topic, Channel);
}

void DvProviderLinnCoUkUpdate1::DoGetUpdateFeedParams(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respTopic(aInvocation, "Topic");
    DviInvocationResponseString respChannel(aInvocation, "Channel");
    GetUpdateFeedParams(invocation, respTopic, respChannel);
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

void DvProviderLinnCoUkUpdate1::DoRestore(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    Restore(invocation);
}

void DvProviderLinnCoUkUpdate1::PushManifest(IDvInvocation& /*aResponse*/, const Brx& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::SetUpdateFeedParams(IDvInvocation& /*aResponse*/, const Brx& /*aTopic*/, const Brx& /*aChannel*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1::GetUpdateFeedParams(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aTopic*/, IDvInvocationResponseString& /*aChannel*/)
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

void DvProviderLinnCoUkUpdate1::Restore(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

