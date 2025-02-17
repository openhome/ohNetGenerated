#include "DvAvOpenhomeOrgReaction1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgReaction1::SetPropertyCanReact(TBool aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    return SetPropertyBool(*iPropertyCanReact, aValue);
}

void DvProviderAvOpenhomeOrgReaction1::GetPropertyCanReact(TBool& aValue)
{
    ASSERT(iPropertyCanReact != NULL);
    aValue = iPropertyCanReact->Value();
}

TBool DvProviderAvOpenhomeOrgReaction1::SetPropertyCurrentReaction(const Brx& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    return SetPropertyString(*iPropertyCurrentReaction, aValue);
}

void DvProviderAvOpenhomeOrgReaction1::GetPropertyCurrentReaction(Brhz& aValue)
{
    ASSERT(iPropertyCurrentReaction != NULL);
    aValue.Set(iPropertyCurrentReaction->Value());
}

TBool DvProviderAvOpenhomeOrgReaction1::SetPropertyAvailableReactions(const Brx& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    return SetPropertyString(*iPropertyAvailableReactions, aValue);
}

void DvProviderAvOpenhomeOrgReaction1::GetPropertyAvailableReactions(Brhz& aValue)
{
    ASSERT(iPropertyAvailableReactions != NULL);
    aValue.Set(iPropertyAvailableReactions->Value());
}

DvProviderAvOpenhomeOrgReaction1::DvProviderAvOpenhomeOrgReaction1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Reaction", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgReaction1::DvProviderAvOpenhomeOrgReaction1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Reaction", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgReaction1::Construct()
{
    iPropertyCanReact = NULL;
    iPropertyCurrentReaction = NULL;
    iPropertyAvailableReactions = NULL;
}

void DvProviderAvOpenhomeOrgReaction1::EnablePropertyCanReact()
{
    iPropertyCanReact = new PropertyBool(new ParameterBool("CanReact"));
    iService->AddProperty(iPropertyCanReact); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1::EnablePropertyCurrentReaction()
{
    iPropertyCurrentReaction = new PropertyString(new ParameterString("CurrentReaction"));
    iService->AddProperty(iPropertyCurrentReaction); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1::EnablePropertyAvailableReactions()
{
    iPropertyAvailableReactions = new PropertyString(new ParameterString("AvailableReactions"));
    iService->AddProperty(iPropertyAvailableReactions); // passes ownership
}

void DvProviderAvOpenhomeOrgReaction1::EnableActionGetCanReact()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCanReact");
    action->AddOutputParameter(new ParameterBool("CanReact"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1::DoGetCanReact);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1::EnableActionGetCurrentReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetCurrentReaction");
    action->AddOutputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1::DoGetCurrentReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1::EnableActionGetAvailableReactions()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetAvailableReactions");
    action->AddOutputParameter(new ParameterString("AvailableReactions"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1::DoGetAvailableReactions);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1::EnableActionSetReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetReaction");
    action->AddInputParameter(new ParameterString("Reaction"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1::DoSetReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1::EnableActionClearReaction()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ClearReaction");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgReaction1::DoClearReaction);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgReaction1::DoGetCanReact(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respCanReact(aInvocation, "CanReact");
    GetCanReact(invocation, respCanReact);
}

void DvProviderAvOpenhomeOrgReaction1::DoGetCurrentReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respReaction(aInvocation, "Reaction");
    GetCurrentReaction(invocation, respReaction);
}

void DvProviderAvOpenhomeOrgReaction1::DoGetAvailableReactions(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respAvailableReactions(aInvocation, "AvailableReactions");
    GetAvailableReactions(invocation, respAvailableReactions);
}

void DvProviderAvOpenhomeOrgReaction1::DoSetReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Reaction;
    aInvocation.InvocationReadString("Reaction", Reaction);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetReaction(invocation, Reaction);
}

void DvProviderAvOpenhomeOrgReaction1::DoClearReaction(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ClearReaction(invocation);
}

void DvProviderAvOpenhomeOrgReaction1::GetCanReact(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aCanReact*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1::GetCurrentReaction(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aReaction*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1::GetAvailableReactions(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aAvailableReactions*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1::SetReaction(IDvInvocation& /*aResponse*/, const Brx& /*aReaction*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgReaction1::ClearReaction(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

