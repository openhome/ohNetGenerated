#include "DvAvOpenhomeOrgReaction1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgReaction1Cpp::SetPropertyCanReact(bool aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    return SetPropertyBool(*iPropertyCanReact, aValue);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetPropertyCanReact(bool& aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    aValue = iPropertyCanReact->Value();
}

bool DvProviderAvOpenhomeOrgReaction1Cpp::SetPropertyCurrentReaction(const std::string& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyCurrentReaction, buf);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetPropertyCurrentReaction(std::string& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    const Brx& val = iPropertyCurrentReaction->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgReaction1Cpp::SetPropertyAvailableReactions(const std::string& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAvailableReactions, buf);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetPropertyAvailableReactions(std::string& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    const Brx& val = iPropertyAvailableReactions->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgReaction1Cpp::DvProviderAvOpenhomeOrgReaction1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Reaction", 1)
{
    iPropertyCanReact = NULL;
    iPropertyCurrentReaction = NULL;
    iPropertyAvailableReactions = NULL;
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnablePropertyCanReact()
{
    iPropertyCanReact = new PropertyBool(new ParameterBool("CanReact"));
    iService->AddProperty(iPropertyCanReact); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnablePropertyCurrentReaction()
{
    iPropertyCurrentReaction = new PropertyString(new ParameterString("CurrentReaction"));
    iService->AddProperty(iPropertyCurrentReaction); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnablePropertyAvailableReactions()
{
    iPropertyAvailableReactions = new PropertyString(new ParameterString("AvailableReactions"));
    iService->AddProperty(iPropertyAvailableReactions); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnableActionGetCanReact()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCanReact");
    action->AddOutputParameter(new ParameterBool("CanReact"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1Cpp::DoGetCanReact);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnableActionGetCurrentReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCurrentReaction");
    action->AddOutputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1Cpp::DoGetCurrentReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnableActionGetAvailableReactions()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAvailableReactions");
    action->AddOutputParameter(new ParameterString("AvailableReactions"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1Cpp::DoGetAvailableReactions);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnableActionSetReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetReaction");
    action->AddInputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1Cpp::DoSetReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::EnableActionClearReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearReaction");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1Cpp::DoClearReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1Cpp::DoGetCanReact(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respCanReact;
    DvInvocationStd invocation(aInvocation);
    GetCanReact(invocation, respCanReact);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterCanReact(aInvocation, "CanReact");
    respWriterCanReact.Write(respCanReact);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::DoGetCurrentReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respReaction;
    DvInvocationStd invocation(aInvocation);
    GetCurrentReaction(invocation, respReaction);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterReaction(aInvocation, "Reaction");
    Brn buf_Reaction((const TByte*)respReaction.c_str(), (TUint)respReaction.length());
    respWriterReaction.Write(buf_Reaction);
    aInvocation.InvocationWriteStringEnd("Reaction");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::DoGetAvailableReactions(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respAvailableReactions;
    DvInvocationStd invocation(aInvocation);
    GetAvailableReactions(invocation, respAvailableReactions);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterAvailableReactions(aInvocation, "AvailableReactions");
    Brn buf_AvailableReactions((const TByte*)respAvailableReactions.c_str(), (TUint)respAvailableReactions.length());
    respWriterAvailableReactions.Write(buf_AvailableReactions);
    aInvocation.InvocationWriteStringEnd("AvailableReactions");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::DoSetReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Reaction;
    aInvocation.InvocationReadString("Reaction", buf_Reaction);
    std::string Reaction((const char*)buf_Reaction.Ptr(), buf_Reaction.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetReaction(invocation, Reaction);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::DoClearReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ClearReaction(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetCanReact(IDvInvocationStd& /*aInvocation*/, bool& /*aCanReact*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetCurrentReaction(IDvInvocationStd& /*aInvocation*/, std::string& /*aReaction*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::GetAvailableReactions(IDvInvocationStd& /*aInvocation*/, std::string& /*aAvailableReactions*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::SetReaction(IDvInvocationStd& /*aInvocation*/, const std::string& /*aReaction*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1Cpp::ClearReaction(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

