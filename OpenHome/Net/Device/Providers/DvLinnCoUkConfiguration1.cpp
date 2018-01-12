#include "DvLinnCoUkConfiguration1.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderLinnCoUkConfiguration1::SetPropertyConfigurationXml(const Brx& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    return SetPropertyString(*iPropertyConfigurationXml, aValue);
}

void DvProviderLinnCoUkConfiguration1::GetPropertyConfigurationXml(Brhz& aValue)
{
    ASSERT(iPropertyConfigurationXml != NULL);
    aValue.Set(iPropertyConfigurationXml->Value());
}

TBool DvProviderLinnCoUkConfiguration1::SetPropertyParameterXml(const Brx& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    return SetPropertyString(*iPropertyParameterXml, aValue);
}

void DvProviderLinnCoUkConfiguration1::GetPropertyParameterXml(Brhz& aValue)
{
    ASSERT(iPropertyParameterXml != NULL);
    aValue.Set(iPropertyParameterXml->Value());
}

DvProviderLinnCoUkConfiguration1::DvProviderLinnCoUkConfiguration1(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "linn.co.uk", "Configuration", 1)
{
    Construct();
}

DvProviderLinnCoUkConfiguration1::DvProviderLinnCoUkConfiguration1(DviDevice& aDevice)
    : DvProvider(aDevice, "linn.co.uk", "Configuration", 1)
{
    Construct();
}

void DvProviderLinnCoUkConfiguration1::Construct()
{
    iPropertyConfigurationXml = NULL;
    iPropertyParameterXml = NULL;
}

void DvProviderLinnCoUkConfiguration1::EnablePropertyConfigurationXml()
{
    iPropertyConfigurationXml = new PropertyString(new ParameterString("ConfigurationXml"));
    iService->AddProperty(iPropertyConfigurationXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1::EnablePropertyParameterXml()
{
    iPropertyParameterXml = new PropertyString(new ParameterString("ParameterXml"));
    iService->AddProperty(iPropertyParameterXml); // passes ownership
}

void DvProviderLinnCoUkConfiguration1::EnableActionConfigurationXml()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ConfigurationXml");
    action->AddOutputParameter(new ParameterRelated("aConfigurationXml", *iPropertyConfigurationXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1::DoConfigurationXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1::EnableActionParameterXml()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("ParameterXml");
    action->AddOutputParameter(new ParameterRelated("aParameterXml", *iPropertyParameterXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1::DoParameterXml);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1::EnableActionSetParameter()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetParameter");
    action->AddInputParameter(new ParameterString("aTarget"));
    action->AddInputParameter(new ParameterString("aName"));
    action->AddInputParameter(new ParameterString("aValue"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderLinnCoUkConfiguration1::DoSetParameter);
    iService->AddAction(action, functor);
}

void DvProviderLinnCoUkConfiguration1::DoConfigurationXml(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaConfigurationXml(aInvocation, "aConfigurationXml");
    ConfigurationXml(invocation, respaConfigurationXml);
}

void DvProviderLinnCoUkConfiguration1::DoParameterXml(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respaParameterXml(aInvocation, "aParameterXml");
    ParameterXml(invocation, respaParameterXml);
}

void DvProviderLinnCoUkConfiguration1::DoSetParameter(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz aTarget;
    aInvocation.InvocationReadString("aTarget", aTarget);
    Brhz aName;
    aInvocation.InvocationReadString("aName", aName);
    Brhz aValue;
    aInvocation.InvocationReadString("aValue", aValue);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    SetParameter(invocation, aTarget, aName, aValue);
}

void DvProviderLinnCoUkConfiguration1::ConfigurationXml(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaConfigurationXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkConfiguration1::ParameterXml(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aaParameterXml*/)
{
    ASSERTS();
}

void DvProviderLinnCoUkConfiguration1::SetParameter(IDvInvocation& /*aResponse*/, const Brx& /*aaTarget*/, const Brx& /*aaName*/, const Brx& /*aaValue*/)
{
    ASSERTS();
}

