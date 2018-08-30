#include "DvAvOpenhomeOrgConfigApp1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgConfigApp1Cpp::SetPropertyKeys(const std::string& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyKeys, buf);
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::GetPropertyKeys(std::string& aValue)
{
    ASSERT(iPropertyKeys != NULL);
    const Brx& val = iPropertyKeys->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgConfigApp1Cpp::DvProviderAvOpenhomeOrgConfigApp1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "ConfigApp", 1)
{
    iPropertyKeys = NULL;
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::EnablePropertyKeys()
{
    iPropertyKeys = new PropertyString(new ParameterString("Keys"));
    iService->AddProperty(iPropertyKeys); // passes ownership
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::EnableActionGetKeys()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetKeys");
    action->AddOutputParameter(new ParameterRelated("Keys", *iPropertyKeys));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1Cpp::DoGetKeys);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::EnableActionSetValue()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1Cpp::DoSetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::EnableActionGetValue()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetValue");
    action->AddInputParameter(new ParameterString("Key"));
    action->AddOutputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1Cpp::DoGetValue);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::EnableActionResetAll()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ResetAll");
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgConfigApp1Cpp::DoResetAll);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::DoGetKeys(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respKeys;
    DvInvocationStd invocation(aInvocation);
    GetKeys(invocation, respKeys);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterKeys(aInvocation, "Keys");
    Brn buf_Keys((const TByte*)respKeys.c_str(), (TUint)respKeys.length());
    respWriterKeys.Write(buf_Keys);
    aInvocation.InvocationWriteStringEnd("Keys");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::DoSetValue(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Key;
    aInvocation.InvocationReadString("Key", buf_Key);
    std::string Key((const char*)buf_Key.Ptr(), buf_Key.Bytes());
    Brhz buf_Value;
    aInvocation.InvocationReadString("Value", buf_Value);
    std::string Value((const char*)buf_Value.Ptr(), buf_Value.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetValue(invocation, Key, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::DoGetValue(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Key;
    aInvocation.InvocationReadString("Key", buf_Key);
    std::string Key((const char*)buf_Key.Ptr(), buf_Key.Bytes());
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    GetValue(invocation, Key, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::DoResetAll(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    ResetAll(invocation);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::GetKeys(IDvInvocationStd& /*aInvocation*/, std::string& /*aKeys*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::SetValue(IDvInvocationStd& /*aInvocation*/, const std::string& /*aKey*/, const std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::GetValue(IDvInvocationStd& /*aInvocation*/, const std::string& /*aKey*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgConfigApp1Cpp::ResetAll(IDvInvocationStd& /*aInvocation*/)
{
    ASSERTS();
}

