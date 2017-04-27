#include "DvAvOpenhomeOrgSender2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyPresentationUrl(const Brx& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    return SetPropertyString(*iPropertyPresentationUrl, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyPresentationUrl(Brhz& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    aValue.Set(iPropertyPresentationUrl->Value());
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyMetadata(const Brx& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    return SetPropertyString(*iPropertyMetadata, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyMetadata(Brhz& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    aValue.Set(iPropertyMetadata->Value());
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyAudio(TBool aValue)
{
    ASSERT(iPropertyAudio != NULL);
    return SetPropertyBool(*iPropertyAudio, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyAudio(TBool& aValue)
{
    ASSERT(iPropertyAudio != NULL);
    aValue = iPropertyAudio->Value();
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyStatus(const Brx& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    return SetPropertyString(*iPropertyStatus, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyStatus(Brhz& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    aValue.Set(iPropertyStatus->Value());
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyStatus2(const Brx& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    return SetPropertyString(*iPropertyStatus2, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyStatus2(Brhz& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    aValue.Set(iPropertyStatus2->Value());
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyEnabled(TBool aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    return SetPropertyBool(*iPropertyEnabled, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyEnabled(TBool& aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    aValue = iPropertyEnabled->Value();
}

TBool DvProviderAvOpenhomeOrgSender2::SetPropertyAttributes(const Brx& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgSender2::GetPropertyAttributes(Brhz& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    aValue.Set(iPropertyAttributes->Value());
}

DvProviderAvOpenhomeOrgSender2::DvProviderAvOpenhomeOrgSender2(DvDevice& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Sender", 2)
{
    Construct();
}

DvProviderAvOpenhomeOrgSender2::DvProviderAvOpenhomeOrgSender2(DviDevice& aDevice)
    : DvProvider(aDevice, "av.openhome.org", "Sender", 2)
{
    Construct();
}

void DvProviderAvOpenhomeOrgSender2::Construct()
{
    iPropertyPresentationUrl = NULL;
    iPropertyMetadata = NULL;
    iPropertyAudio = NULL;
    iPropertyStatus = NULL;
    iPropertyStatus2 = NULL;
    iPropertyEnabled = NULL;
    iPropertyAttributes = NULL;
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyPresentationUrl()
{
    iPropertyPresentationUrl = new PropertyString(new ParameterString("PresentationUrl"));
    iService->AddProperty(iPropertyPresentationUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyMetadata()
{
    iPropertyMetadata = new PropertyString(new ParameterString("Metadata"));
    iService->AddProperty(iPropertyMetadata); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyAudio()
{
    iPropertyAudio = new PropertyBool(new ParameterBool("Audio"));
    iService->AddProperty(iPropertyAudio); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyStatus()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Enabled";
    allowedValues[index++] = (TChar*)"Disabled";
    allowedValues[index++] = (TChar*)"Blocked";
    iPropertyStatus = new PropertyString(new ParameterString("Status", allowedValues, 3));
    delete[] allowedValues;
    iService->AddProperty(iPropertyStatus); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyStatus2()
{
    TChar** allowedValues;
    TUint index = 0;
    allowedValues = new TChar*[5];
    allowedValues[index++] = (TChar*)"Sending";
    allowedValues[index++] = (TChar*)"Ready";
    allowedValues[index++] = (TChar*)"Blocked";
    allowedValues[index++] = (TChar*)"Inactive";
    allowedValues[index++] = (TChar*)"Disabled";
    iPropertyStatus2 = new PropertyString(new ParameterString("Status2", allowedValues, 5));
    delete[] allowedValues;
    iService->AddProperty(iPropertyStatus2); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyEnabled()
{
    iPropertyEnabled = new PropertyBool(new ParameterBool("Enabled"));
    iService->AddProperty(iPropertyEnabled); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2::EnableActionPresentationUrl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PresentationUrl");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyPresentationUrl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoPresentationUrl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionMetadata()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Metadata");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMetadata));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoMetadata);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionAudio()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Audio");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAudio));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoAudio);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionStatus2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status2");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus2));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoStatus2);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Enabled");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::EnableActionAttributes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2::DoPresentationUrl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    PresentationUrl(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoMetadata(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    Metadata(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoAudio(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    Audio(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    Status(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoStatus2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    Status2(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseBool respValue(aInvocation, "Value");
    Enabled(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::DoAttributes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    DviInvocationResponseString respValue(aInvocation, "Value");
    Attributes(invocation, respValue);
}

void DvProviderAvOpenhomeOrgSender2::PresentationUrl(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Metadata(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Audio(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Status(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Status2(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Enabled(IDvInvocation& /*aResponse*/, IDvInvocationResponseBool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2::Attributes(IDvInvocation& /*aResponse*/, IDvInvocationResponseString& /*aValue*/)
{
    ASSERTS();
}

