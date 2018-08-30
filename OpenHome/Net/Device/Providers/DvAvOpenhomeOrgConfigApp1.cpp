#include "DvAvOpenhomeOrgConfigApp1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgConfigApp1::SetPropertyKeys(const Brx& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    return SetPropertyString(*iPropertyKeys, aValue);
}

void DvProviderAvOpenhomeOrgConfigApp1::GetPropertyKeys(Brhz& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    aValue.Set(iPropertyKeys->Value());
}

DvProviderAvOpenhomeOrgConfigApp1::DvProviderAvOpenhomeOrgConfigApp1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "ConfigApp", 1)
{
    Construct();
}

DvProviderAvOpenhomeOrgConfigApp1::DvProviderAvOpenhomeOrgConfigApp1(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "ConfigApp", 1)
{
    Construct();
}

void DvProviderAvOpenhomeOrgConfigApp1::Construct()
{
    iPropertyKeys = NULL;
}

void DvProviderAvOpenhomeOrgConfigApp1::EnablePropertyKeys()
{
    iPropertyKeys = new PropertyString(new ParameterString("Keys"));
    iService->AddProperty(iPropertyKeys); // passes ownership
}

void DvProviderAvOpenhomeOrgConfigApp1::EnableActionGetKeys()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetKeys");
    action->AddOutputParameter(new ParameterRelated("Keys", *iPropertyKeys));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1::DoGetKeys);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1::EnableActionSetValue()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1::DoSetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1::EnableActionGetValue()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddOutputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1::DoGetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1::EnableActionResetAll()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetAll");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1::DoResetAll);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1::DoGetKeys(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respKeys(aInvocation, "Keys");
    GetKeys(invocation, respKeys);
}

void DvProviderAvOpenhomeOrgConfigApp1::DoSetValue(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Key;
    aInvocation.InvocationReadString("Key", Key);
    Brhz Value;
    aInvocation.InvocationReadString("Value", Value);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetValue(invocation, Key, Value);
}

void DvProviderAvOpenhomeOrgConfigApp1::DoGetValue(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz Key;
    aInvocation.InvocationReadString("Key", Key);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    GetValue(invocation, Key, respValue);
}

void DvProviderAvOpenhomeOrgConfigApp1::DoResetAll(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ResetAll(invocation);
}

void DvProviderAvOpenhomeOrgConfigApp1::GetKeys(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aKeys*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1::SetValue(IDvInvocation& /*aResponse*/, const Brx& /*aKey*/, const Brx& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1::GetValue(IDvInvocation& /*aResponse*/, const Brx& /*aKey*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1::ResetAll(IDvInvocation& /*aResponse*/)
{
    ASSERTS();
}

