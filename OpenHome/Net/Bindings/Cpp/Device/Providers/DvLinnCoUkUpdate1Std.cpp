#include "DvLinnCoUkUpdate1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkUpdate1Cpp::SetPropertyUpdateStatus(const std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateStatus, buf);
}

void DvProviderLinnCoUkUpdate1Cpp::GetPropertyUpdateStatus(std::string& aValue)
{
    ASSERT(iPropertyUpdateStatus != NULL);
    const Brx& val = iPropertyUpdateStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate1Cpp::SetPropertyUpdateTopic(const std::string& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateTopic, buf);
}

void DvProviderLinnCoUkUpdate1Cpp::GetPropertyUpdateTopic(std::string& aValue)
{
    ASSERT(iPropertyUpdateTopic != NULL);
    const Brx& val = iPropertyUpdateTopic->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkUpdate1Cpp::SetPropertyUpdateChannel(const std::string& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyUpdateChannel, buf);
}

void DvProviderLinnCoUkUpdate1Cpp::GetPropertyUpdateChannel(std::string& aValue)
{
    ASSERT(iPropertyUpdateChannel != NULL);
    const Brx& val = iPropertyUpdateChannel->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkUpdate1Cpp::DvProviderLinnCoUkUpdate1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Update", 1)
{
    iPropertyUpdateStatus = NULL;
    iPropertyUpdateTopic = NULL;
    iPropertyUpdateChannel = NULL;
}

void DvProviderLinnCoUkUpdate1Cpp::EnablePropertyUpdateStatus()
{
    iPropertyUpdateStatus = new PropertyString(new ParameterString("UpdateStatus"));
    iService->AddProperty(iPropertyUpdateStatus); // passes ownership
}

void DvProviderLinnCoUkUpdate1Cpp::EnablePropertyUpdateTopic()
{
    iPropertyUpdateTopic = new PropertyString(new ParameterString("UpdateTopic"));
    iService->AddProperty(iPropertyUpdateTopic); // passes ownership
}

void DvProviderLinnCoUkUpdate1Cpp::EnablePropertyUpdateChannel()
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

void DvProviderLinnCoUkUpdate1Cpp::EnableActionPushManifest()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PushManifest");
    action->AddInputParameter(new ParameterString("Uri"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoPushManifest);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionSetUpdateFeedParams()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetUpdateFeedParams");
    action->AddInputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddInputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoSetUpdateFeedParams);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionGetUpdateFeedParams()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateFeedParams");
    action->AddOutputParameter(new ParameterRelated("Topic", *iPropertyUpdateTopic));
    action->AddOutputParameter(new ParameterRelated("Channel", *iPropertyUpdateChannel));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoGetUpdateFeedParams);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionGetUpdateStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetUpdateStatus");
    action->AddOutputParameter(new ParameterRelated("UpdateStatus", *iPropertyUpdateStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoGetUpdateStatus);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionApply()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Apply");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoApply);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkUpdate1Cpp::EnableActionRestore()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Restore");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkUpdate1Cpp::DoRestore);
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

void DvProviderLinnCoUkUpdate1Cpp::DoSetUpdateFeedParams(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Topic;
    aInvocation.InvocationReadString("Topic", buf_Topic);
    std::string Topic((const char*)buf_Topic.Ptr(), buf_Topic.Bytes());
    Brhz buf_Channel;
    aInvocation.InvocationReadString("Channel", buf_Channel);
    std::string Channel((const char*)buf_Channel.Ptr(), buf_Channel.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetUpdateFeedParams(invocation, Topic, Channel);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoGetUpdateFeedParams(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respTopic;
    std::string respChannel;
    DvInvocationStd invocation(aInvocation);
    GetUpdateFeedParams(invocation, respTopic, respChannel);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterTopic(aInvocation, "Topic");
    Brn buf_Topic((const TByte*)respTopic.c_str(), (TUint)respTopic.length());
    respWriterTopic.Write(buf_Topic);
    aInvocation.InvocationWriteStringEnd("Topic");
    DviInvocationResponseString respWriterChannel(aInvocation, "Channel");
    Brn buf_Channel((const TByte*)respChannel.c_str(), (TUint)respChannel.length());
    respWriterChannel.Write(buf_Channel);
    aInvocation.InvocationWriteStringEnd("Channel");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::DoGetUpdateStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respUpdateStatus;
    DvInvocationStd invocation(aInvocation);
    GetUpdateStatus(invocation, respUpdateStatus);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterUpdateStatus(aInvocation, "UpdateStatus");
    Brn buf_UpdateStatus((const TByte*)respUpdateStatus.c_str(), (TUint)respUpdateStatus.length());
    respWriterUpdateStatus.Write(buf_UpdateStatus);
    aInvocation.InvocationWriteStringEnd("UpdateStatus");
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

void DvProviderLinnCoUkUpdate1Cpp::DoRestore(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    Restore(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkUpdate1Cpp::PushManifest(IDvInvocationStd& /*aInvocation*/, const std::string& /*aUri*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::SetUpdateFeedParams(IDvInvocationStd& /*aInvocation*/, const std::string& /*aTopic*/, const std::string& /*aChannel*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::GetUpdateFeedParams(IDvInvocationStd& /*aInvocation*/, std::string& /*aTopic*/, std::string& /*aChannel*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::GetUpdateStatus(IDvInvocationStd& /*aInvocation*/, std::string& /*aUpdateStatus*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::Apply(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkUpdate1Cpp::Restore(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

