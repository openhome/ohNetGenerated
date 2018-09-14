#include "DvLinnCoUkZoneReceiver1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkZoneReceiver1::SetPropertySender(const Brx& aValue)
{
    ASSERT(iPropertySender != NULL);
    return SetPropertyString(*iPropertySender, aValue);
}

void DvProviderLinnCoUkZoneReceiver1::GetPropertySender(Brhz& aValue)
{
    ASSERT(iPropertySender != NULL);
    aValue.Set(iPropertySender->Value());
}

DvProviderLinnCoUkZoneReceiver1::DvProviderLinnCoUkZoneReceiver1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "ZoneReceiver", 1)
{
    Construct();
}

DvProviderLinnCoUkZoneReceiver1::DvProviderLinnCoUkZoneReceiver1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "ZoneReceiver", 1)
{
    Construct();
}

void DvProviderLinnCoUkZoneReceiver1::Construct()
{
    iPropertySender = NULL;
}

void DvProviderLinnCoUkZoneReceiver1::EnablePropertySender()
{
    iPropertySender = new PropertyString(new ParameterString("Sender"));
    iService->AddProperty(iPropertySender); // passes ownership
}

void DvProviderLinnCoUkZoneReceiver1::EnableActionGetSender()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSender");
    action->AddOutputParameter(new ParameterRelated("Sender", *iPropertySender));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZoneReceiver1::DoGetSender);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZoneReceiver1::DoGetSender(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respSender(aInvocation, "Sender");
    GetSender(invocation, respSender);
}

void DvProviderLinnCoUkZoneReceiver1::GetSender(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aSender*/)
{
    ASSERTS();
}

