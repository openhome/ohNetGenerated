#include "DvLinnCoUkZoneReceiver1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkZoneReceiver1Cpp::SetPropertySender(const std::string& aValue)
{
    ASSERT(iPropertySender != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySender, buf);
}

void DvProviderLinnCoUkZoneReceiver1Cpp::GetPropertySender(std::string& aValue)
{
    ASSERT(iPropertySender != NULL);
    const Brx& val = iPropertySender->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkZoneReceiver1Cpp::DvProviderLinnCoUkZoneReceiver1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "ZoneReceiver", 1)
{
    iPropertySender = NULL;
}

void DvProviderLinnCoUkZoneReceiver1Cpp::EnablePropertySender()
{
    iPropertySender = new PropertyString(new ParameterString("Sender"));
    iService->AddProperty(iPropertySender); // passes ownership
}

void DvProviderLinnCoUkZoneReceiver1Cpp::EnableActionGetSender()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetSender");
    action->AddOutputParameter(new ParameterRelated("Sender", *iPropertySender));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkZoneReceiver1Cpp::DoGetSender);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkZoneReceiver1Cpp::DoGetSender(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respSender;
    DvInvocationStd invocation(aInvocation);
    GetSender(invocation, respSender);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSender(aInvocation, "Sender");
    Brn buf_Sender((const TByte*)respSender.c_str(), (TUint)respSender.length());
    respWriterSender.Write(buf_Sender);
    aInvocation.InvocationWriteStringEnd("Sender");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkZoneReceiver1Cpp::GetSender(IDvInvocationStd& /*aInvocation*/, std::string& /*aSender*/)
{
    ASSERTS();
}

