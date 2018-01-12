#include "DvLinnCoUkConfiguration1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderLinnCoUkConfiguration1Cpp::SetPropertyConfigurationXml(const std::string& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyConfigurationXml, buf);
}

void DvProviderLinnCoUkConfiguration1Cpp::GetPropertyConfigurationXml(std::string& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    const Brx& val = iPropertyConfigurationXml->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderLinnCoUkConfiguration1Cpp::SetPropertyParameterXml(const std::string& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyParameterXml, buf);
}

void DvProviderLinnCoUkConfiguration1Cpp::GetPropertyParameterXml(std::string& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    const Brx& val = iPropertyParameterXml->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderLinnCoUkConfiguration1Cpp::DvProviderLinnCoUkConfiguration1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Configuration", 1)
{
    iPropertyConfigurationXml = NULL;
    iPropertyParameterXml = NULL;
}

void DvProviderLinnCoUkConfiguration1Cpp::EnablePropertyConfigurationXml()
{
    iPropertyConfigurationXml = new PropertyString(new ParameterString("ConfigurationXml"));
    iService->AddProperty(iPropertyConfigurationXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1Cpp::EnablePropertyParameterXml()
{
    iPropertyParameterXml = new PropertyString(new ParameterString("ParameterXml"));
    iService->AddProperty(iPropertyParameterXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1Cpp::EnableActionConfigurationXml()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConfigurationXml");
    action->AddOutputParameter(new ParameterRelated("aConfigurationXml", *iPropertyConfigurationXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1Cpp::DoConfigurationXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1Cpp::EnableActionParameterXml()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ParameterXml");
    action->AddOutputParameter(new ParameterRelated("aParameterXml", *iPropertyParameterXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1Cpp::DoParameterXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1Cpp::EnableActionSetParameter()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetParameter");
    action->AddInputParameter(new ParameterString("aTarget"));
    action->AddInputParameter(new ParameterString("aName"));
    action->AddInputParameter(new ParameterString("aValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1Cpp::DoSetParameter);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1Cpp::DoConfigurationXml(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaConfigurationXml;
    DvInvocationStd invocation(aInvocation);
    ConfigurationXml(invocation, respaConfigurationXml);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraConfigurationXml(aInvocation, "aConfigurationXml");
    Brn buf_aConfigurationXml((const TByte*)respaConfigurationXml.c_str(), (TUint)respaConfigurationXml.length());
    respWriteraConfigurationXml.Write(buf_aConfigurationXml);
    aInvocation.InvocationWriteStringEnd("aConfigurationXml");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkConfiguration1Cpp::DoParameterXml(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respaParameterXml;
    DvInvocationStd invocation(aInvocation);
    ParameterXml(invocation, respaParameterXml);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriteraParameterXml(aInvocation, "aParameterXml");
    Brn buf_aParameterXml((const TByte*)respaParameterXml.c_str(), (TUint)respaParameterXml.length());
    respWriteraParameterXml.Write(buf_aParameterXml);
    aInvocation.InvocationWriteStringEnd("aParameterXml");
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkConfiguration1Cpp::DoSetParameter(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_aTarget;
    aInvocation.InvocationReadString("aTarget", buf_aTarget);
    std::string aTarget((const char*)buf_aTarget.Ptr(), buf_aTarget.Bytes());
    Brhz buf_aName;
    aInvocation.InvocationReadString("aName", buf_aName);
    std::string aName((const char*)buf_aName.Ptr(), buf_aName.Bytes());
    Brhz buf_aValue;
    aInvocation.InvocationReadString("aValue", buf_aValue);
    std::string aValue((const char*)buf_aValue.Ptr(), buf_aValue.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetParameter(invocation, aTarget, aName, aValue);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderLinnCoUkConfiguration1Cpp::ConfigurationXml(IDvInvocationStd& /*aInvocation*/, std::string& /*aaConfigurationXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkConfiguration1Cpp::ParameterXml(IDvInvocationStd& /*aInvocation*/, std::string& /*aaParameterXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkConfiguration1Cpp::SetParameter(IDvInvocationStd& /*aInvocation*/, const std::string& /*aaTarget*/, const std::string& /*aaName*/, const std::string& /*aaValue*/)
{
    ASSERTS();
}

