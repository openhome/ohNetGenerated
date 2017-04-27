#include "DvAvOpenhomeOrgSender2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyPresentationUrl(const std::string& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyPresentationUrl, buf);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyPresentationUrl(std::string& aValue)
{
    ASSERT(iPropertyPresentationUrl != NULL);
    const Brx& val = iPropertyPresentationUrl->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyMetadata(const std::string& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyMetadata, buf);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyMetadata(std::string& aValue)
{
    ASSERT(iPropertyMetadata != NULL);
    const Brx& val = iPropertyMetadata->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyAudio(bool aValue)
{
    ASSERT(iPropertyAudio != NULL);
    return SetPropertyBool(*iPropertyAudio, aValue);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyAudio(bool& aValue)
{
    ASSERT(iPropertyAudio != NULL);
    aValue = iPropertyAudio->Value();
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyStatus(const std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyStatus, buf);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyStatus(std::string& aValue)
{
    ASSERT(iPropertyStatus != NULL);
    const Brx& val = iPropertyStatus->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyStatus2(const std::string& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyStatus2, buf);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyStatus2(std::string& aValue)
{
    ASSERT(iPropertyStatus2 != NULL);
    const Brx& val = iPropertyStatus2->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyEnabled(bool aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    return SetPropertyBool(*iPropertyEnabled, aValue);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyEnabled(bool& aValue)
{
    ASSERT(iPropertyEnabled != NULL);
    aValue = iPropertyEnabled->Value();
}

bool DvProviderAvOpenhomeOrgSender2Cpp::SetPropertyAttributes(const std::string& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAttributes, buf);
}

void DvProviderAvOpenhomeOrgSender2Cpp::GetPropertyAttributes(std::string& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    const Brx& val = iPropertyAttributes->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgSender2Cpp::DvProviderAvOpenhomeOrgSender2Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Sender", 2)
{
    iPropertyPresentationUrl = NULL;
    iPropertyMetadata = NULL;
    iPropertyAudio = NULL;
    iPropertyStatus = NULL;
    iPropertyStatus2 = NULL;
    iPropertyEnabled = NULL;
    iPropertyAttributes = NULL;
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyPresentationUrl()
{
    iPropertyPresentationUrl = new PropertyString(new ParameterString("PresentationUrl"));
    iService->AddProperty(iPropertyPresentationUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyMetadata()
{
    iPropertyMetadata = new PropertyString(new ParameterString("Metadata"));
    iService->AddProperty(iPropertyMetadata); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyAudio()
{
    iPropertyAudio = new PropertyBool(new ParameterBool("Audio"));
    iService->AddProperty(iPropertyAudio); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyStatus()
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

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyStatus2()
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

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyEnabled()
{
    iPropertyEnabled = new PropertyBool(new ParameterBool("Enabled"));
    iService->AddProperty(iPropertyEnabled); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionPresentationUrl()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("PresentationUrl");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyPresentationUrl));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoPresentationUrl);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionMetadata()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Metadata");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyMetadata));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoMetadata);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionAudio()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Audio");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAudio));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoAudio);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionStatus()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoStatus);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionStatus2()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Status2");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStatus2));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoStatus2);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionEnabled()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Enabled");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyEnabled));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoEnabled);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::EnableActionAttributes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgSender2Cpp::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoPresentationUrl(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    PresentationUrl(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoMetadata(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    Metadata(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoAudio(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    Audio(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoStatus(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    Status(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoStatus2(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    Status2(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoEnabled(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    Enabled(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::DoAttributes(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    Attributes(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgSender2Cpp::PresentationUrl(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Metadata(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Audio(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Status(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Status2(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Enabled(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgSender2Cpp::Attributes(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

