#include "DvAvOpenhomeOrgProduct3.h"
#include <OpenHome/Types.h>
#include <OpenHome/Net/Private/DviService.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/Cpp/DvInvocation.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerName(const std::string& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyManufacturerName, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyManufacturerName(std::string& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    const Brx& val = iPropertyManufacturerName->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerInfo(const std::string& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyManufacturerInfo, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyManufacturerInfo(std::string& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    const Brx& val = iPropertyManufacturerInfo->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerUrl(const std::string& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyManufacturerUrl, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyManufacturerUrl(std::string& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    const Brx& val = iPropertyManufacturerUrl->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerImageUri(const std::string& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyManufacturerImageUri, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyManufacturerImageUri(std::string& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    const Brx& val = iPropertyManufacturerImageUri->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyModelName(const std::string& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModelName, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyModelName(std::string& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    const Brx& val = iPropertyModelName->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyModelInfo(const std::string& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModelInfo, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyModelInfo(std::string& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    const Brx& val = iPropertyModelInfo->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyModelUrl(const std::string& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModelUrl, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyModelUrl(std::string& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    const Brx& val = iPropertyModelUrl->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyModelImageUri(const std::string& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyModelImageUri, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyModelImageUri(std::string& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    const Brx& val = iPropertyModelImageUri->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyProductRoom(const std::string& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProductRoom, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyProductRoom(std::string& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    const Brx& val = iPropertyProductRoom->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyProductName(const std::string& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProductName, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyProductName(std::string& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    const Brx& val = iPropertyProductName->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyProductInfo(const std::string& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProductInfo, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyProductInfo(std::string& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    const Brx& val = iPropertyProductInfo->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyProductUrl(const std::string& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProductUrl, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyProductUrl(std::string& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    const Brx& val = iPropertyProductUrl->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyProductImageUri(const std::string& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyProductImageUri, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyProductImageUri(std::string& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    const Brx& val = iPropertyProductImageUri->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyStandby(bool aValue)
{
    ASSERT(iPropertyStandby != NULL);
    return SetPropertyBool(*iPropertyStandby, aValue);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyStandby(bool& aValue)
{
    ASSERT(iPropertyStandby != NULL);
    aValue = iPropertyStandby->Value();
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyStandbyTransitioning(bool aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    return SetPropertyBool(*iPropertyStandbyTransitioning, aValue);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyStandbyTransitioning(bool& aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    aValue = iPropertyStandbyTransitioning->Value();
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertySourceIndex(uint32_t aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    return SetPropertyUint(*iPropertySourceIndex, aValue);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertySourceIndex(uint32_t& aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    aValue = iPropertySourceIndex->Value();
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertySourceCount(uint32_t aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    return SetPropertyUint(*iPropertySourceCount, aValue);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertySourceCount(uint32_t& aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    aValue = iPropertySourceCount->Value();
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertySourceXml(const std::string& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertySourceXml, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertySourceXml(std::string& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    const Brx& val = iPropertySourceXml->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

bool DvProviderAvOpenhomeOrgProduct3Cpp::SetPropertyAttributes(const std::string& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
    return SetPropertyString(*iPropertyAttributes, buf);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::GetPropertyAttributes(std::string& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    const Brx& val = iPropertyAttributes->Value();
    aValue.assign((const char*)val.Ptr(), val.Bytes());
}

DvProviderAvOpenhomeOrgProduct3Cpp::DvProviderAvOpenhomeOrgProduct3Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "av.openhome.org", "Product", 3)
{
    iPropertyManufacturerName = NULL;
    iPropertyManufacturerInfo = NULL;
    iPropertyManufacturerUrl = NULL;
    iPropertyManufacturerImageUri = NULL;
    iPropertyModelName = NULL;
    iPropertyModelInfo = NULL;
    iPropertyModelUrl = NULL;
    iPropertyModelImageUri = NULL;
    iPropertyProductRoom = NULL;
    iPropertyProductName = NULL;
    iPropertyProductInfo = NULL;
    iPropertyProductUrl = NULL;
    iPropertyProductImageUri = NULL;
    iPropertyStandby = NULL;
    iPropertyStandbyTransitioning = NULL;
    iPropertySourceIndex = NULL;
    iPropertySourceCount = NULL;
    iPropertySourceXml = NULL;
    iPropertyAttributes = NULL;
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyManufacturerName()
{
    iPropertyManufacturerName = new PropertyString(new ParameterString("ManufacturerName"));
    iService->AddProperty(iPropertyManufacturerName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyManufacturerInfo()
{
    iPropertyManufacturerInfo = new PropertyString(new ParameterString("ManufacturerInfo"));
    iService->AddProperty(iPropertyManufacturerInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyManufacturerUrl()
{
    iPropertyManufacturerUrl = new PropertyString(new ParameterString("ManufacturerUrl"));
    iService->AddProperty(iPropertyManufacturerUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyManufacturerImageUri()
{
    iPropertyManufacturerImageUri = new PropertyString(new ParameterString("ManufacturerImageUri"));
    iService->AddProperty(iPropertyManufacturerImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyModelName()
{
    iPropertyModelName = new PropertyString(new ParameterString("ModelName"));
    iService->AddProperty(iPropertyModelName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyModelInfo()
{
    iPropertyModelInfo = new PropertyString(new ParameterString("ModelInfo"));
    iService->AddProperty(iPropertyModelInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyModelUrl()
{
    iPropertyModelUrl = new PropertyString(new ParameterString("ModelUrl"));
    iService->AddProperty(iPropertyModelUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyModelImageUri()
{
    iPropertyModelImageUri = new PropertyString(new ParameterString("ModelImageUri"));
    iService->AddProperty(iPropertyModelImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyProductRoom()
{
    iPropertyProductRoom = new PropertyString(new ParameterString("ProductRoom"));
    iService->AddProperty(iPropertyProductRoom); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyProductName()
{
    iPropertyProductName = new PropertyString(new ParameterString("ProductName"));
    iService->AddProperty(iPropertyProductName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyProductInfo()
{
    iPropertyProductInfo = new PropertyString(new ParameterString("ProductInfo"));
    iService->AddProperty(iPropertyProductInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyProductUrl()
{
    iPropertyProductUrl = new PropertyString(new ParameterString("ProductUrl"));
    iService->AddProperty(iPropertyProductUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyProductImageUri()
{
    iPropertyProductImageUri = new PropertyString(new ParameterString("ProductImageUri"));
    iService->AddProperty(iPropertyProductImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyStandby()
{
    iPropertyStandby = new PropertyBool(new ParameterBool("Standby"));
    iService->AddProperty(iPropertyStandby); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyStandbyTransitioning()
{
    iPropertyStandbyTransitioning = new PropertyBool(new ParameterBool("StandbyTransitioning"));
    iService->AddProperty(iPropertyStandbyTransitioning); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertySourceIndex()
{
    iPropertySourceIndex = new PropertyUint(new ParameterUint("SourceIndex"));
    iService->AddProperty(iPropertySourceIndex); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertySourceCount()
{
    iPropertySourceCount = new PropertyUint(new ParameterUint("SourceCount"));
    iService->AddProperty(iPropertySourceCount); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertySourceXml()
{
    iPropertySourceXml = new PropertyString(new ParameterString("SourceXml"));
    iService->AddProperty(iPropertySourceXml); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionManufacturer()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Manufacturer");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyManufacturerName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyManufacturerInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyManufacturerUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyManufacturerImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoManufacturer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionModel()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Model");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyModelName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyModelInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyModelUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyModelImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoModel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionProduct()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Product");
    action->AddOutputParameter(new ParameterRelated("Room", *iPropertyProductRoom));
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyProductName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyProductInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyProductUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoProduct);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionStandby()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Standby");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionStandbyTransitioning()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StandbyTransitioning");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandbyTransitioning));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoStandbyTransitioning);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSetStandby()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetStandby");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSetStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSourceCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceCount");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSourceXml()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXml");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceXml);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSourceIndex()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceIndex");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSetSourceIndex()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndex");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSetSourceIndexByName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndexByName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceIndexByName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSetSourceBySystemName()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceBySystemName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceBySystemName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSource()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Source");
    action->AddInputParameter(new ParameterRelated("Index", *iPropertySourceIndex));
    action->AddOutputParameter(new ParameterString("SystemName"));
    action->AddOutputParameter(new ParameterString("Type"));
    action->AddOutputParameter(new ParameterString("Name"));
    action->AddOutputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSource);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionAttributes()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::EnableActionSourceXmlChangeCount()
{
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXmlChangeCount");
    action->AddOutputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceXmlChangeCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoManufacturer(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respName;
    std::string respInfo;
    std::string respUrl;
    std::string respImageUri;
    DvInvocationStd invocation(aInvocation);
    Manufacturer(invocation, respName, respInfo, respUrl, respImageUri);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterName(aInvocation, "Name");
    Brn buf_Name((const TByte*)respName.c_str(), (TUint)respName.length());
    respWriterName.Write(buf_Name);
    aInvocation.InvocationWriteStringEnd("Name");
    DviInvocationResponseString respWriterInfo(aInvocation, "Info");
    Brn buf_Info((const TByte*)respInfo.c_str(), (TUint)respInfo.length());
    respWriterInfo.Write(buf_Info);
    aInvocation.InvocationWriteStringEnd("Info");
    DviInvocationResponseString respWriterUrl(aInvocation, "Url");
    Brn buf_Url((const TByte*)respUrl.c_str(), (TUint)respUrl.length());
    respWriterUrl.Write(buf_Url);
    aInvocation.InvocationWriteStringEnd("Url");
    DviInvocationResponseString respWriterImageUri(aInvocation, "ImageUri");
    Brn buf_ImageUri((const TByte*)respImageUri.c_str(), (TUint)respImageUri.length());
    respWriterImageUri.Write(buf_ImageUri);
    aInvocation.InvocationWriteStringEnd("ImageUri");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoModel(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respName;
    std::string respInfo;
    std::string respUrl;
    std::string respImageUri;
    DvInvocationStd invocation(aInvocation);
    Model(invocation, respName, respInfo, respUrl, respImageUri);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterName(aInvocation, "Name");
    Brn buf_Name((const TByte*)respName.c_str(), (TUint)respName.length());
    respWriterName.Write(buf_Name);
    aInvocation.InvocationWriteStringEnd("Name");
    DviInvocationResponseString respWriterInfo(aInvocation, "Info");
    Brn buf_Info((const TByte*)respInfo.c_str(), (TUint)respInfo.length());
    respWriterInfo.Write(buf_Info);
    aInvocation.InvocationWriteStringEnd("Info");
    DviInvocationResponseString respWriterUrl(aInvocation, "Url");
    Brn buf_Url((const TByte*)respUrl.c_str(), (TUint)respUrl.length());
    respWriterUrl.Write(buf_Url);
    aInvocation.InvocationWriteStringEnd("Url");
    DviInvocationResponseString respWriterImageUri(aInvocation, "ImageUri");
    Brn buf_ImageUri((const TByte*)respImageUri.c_str(), (TUint)respImageUri.length());
    respWriterImageUri.Write(buf_ImageUri);
    aInvocation.InvocationWriteStringEnd("ImageUri");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoProduct(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respRoom;
    std::string respName;
    std::string respInfo;
    std::string respUrl;
    std::string respImageUri;
    DvInvocationStd invocation(aInvocation);
    Product(invocation, respRoom, respName, respInfo, respUrl, respImageUri);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterRoom(aInvocation, "Room");
    Brn buf_Room((const TByte*)respRoom.c_str(), (TUint)respRoom.length());
    respWriterRoom.Write(buf_Room);
    aInvocation.InvocationWriteStringEnd("Room");
    DviInvocationResponseString respWriterName(aInvocation, "Name");
    Brn buf_Name((const TByte*)respName.c_str(), (TUint)respName.length());
    respWriterName.Write(buf_Name);
    aInvocation.InvocationWriteStringEnd("Name");
    DviInvocationResponseString respWriterInfo(aInvocation, "Info");
    Brn buf_Info((const TByte*)respInfo.c_str(), (TUint)respInfo.length());
    respWriterInfo.Write(buf_Info);
    aInvocation.InvocationWriteStringEnd("Info");
    DviInvocationResponseString respWriterUrl(aInvocation, "Url");
    Brn buf_Url((const TByte*)respUrl.c_str(), (TUint)respUrl.length());
    respWriterUrl.Write(buf_Url);
    aInvocation.InvocationWriteStringEnd("Url");
    DviInvocationResponseString respWriterImageUri(aInvocation, "ImageUri");
    Brn buf_ImageUri((const TByte*)respImageUri.c_str(), (TUint)respImageUri.length());
    respWriterImageUri.Write(buf_ImageUri);
    aInvocation.InvocationWriteStringEnd("ImageUri");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoStandby(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    Standby(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoStandbyTransitioning(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    bool respValue;
    DvInvocationStd invocation(aInvocation);
    StandbyTransitioning(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseBool respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSetStandby(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    bool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetStandby(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respValue;
    DvInvocationStd invocation(aInvocation);
    SourceCount(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceXml(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    std::string respValue;
    DvInvocationStd invocation(aInvocation);
    SourceXml(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterValue(aInvocation, "Value");
    Brn buf_Value((const TByte*)respValue.c_str(), (TUint)respValue.length());
    respWriterValue.Write(buf_Value);
    aInvocation.InvocationWriteStringEnd("Value");
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceIndex(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respValue;
    DvInvocationStd invocation(aInvocation);
    SourceIndex(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceIndex(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetSourceIndex(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceIndexByName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Value;
    aInvocation.InvocationReadString("Value", buf_Value);
    std::string Value((const char*)buf_Value.Ptr(), buf_Value.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetSourceIndexByName(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSetSourceBySystemName(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    Brhz buf_Value;
    aInvocation.InvocationReadString("Value", buf_Value);
    std::string Value((const char*)buf_Value.Ptr(), buf_Value.Bytes());
    aInvocation.InvocationReadEnd();
    DvInvocationStd invocation(aInvocation);
    SetSourceBySystemName(invocation, Value);
    aInvocation.InvocationWriteStart();
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSource(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    uint32_t Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    std::string respSystemName;
    std::string respType;
    std::string respName;
    bool respVisible;
    DvInvocationStd invocation(aInvocation);
    Source(invocation, Index, respSystemName, respType, respName, respVisible);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseString respWriterSystemName(aInvocation, "SystemName");
    Brn buf_SystemName((const TByte*)respSystemName.c_str(), (TUint)respSystemName.length());
    respWriterSystemName.Write(buf_SystemName);
    aInvocation.InvocationWriteStringEnd("SystemName");
    DviInvocationResponseString respWriterType(aInvocation, "Type");
    Brn buf_Type((const TByte*)respType.c_str(), (TUint)respType.length());
    respWriterType.Write(buf_Type);
    aInvocation.InvocationWriteStringEnd("Type");
    DviInvocationResponseString respWriterName(aInvocation, "Name");
    Brn buf_Name((const TByte*)respName.c_str(), (TUint)respName.length());
    respWriterName.Write(buf_Name);
    aInvocation.InvocationWriteStringEnd("Name");
    DviInvocationResponseBool respWriterVisible(aInvocation, "Visible");
    respWriterVisible.Write(respVisible);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::DoAttributes(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3Cpp::DoSourceXmlChangeCount(IDviInvocation& aInvocation)
{
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    uint32_t respValue;
    DvInvocationStd invocation(aInvocation);
    SourceXmlChangeCount(invocation, respValue);
    aInvocation.InvocationWriteStart();
    DviInvocationResponseUint respWriterValue(aInvocation, "Value");
    respWriterValue.Write(respValue);
    aInvocation.InvocationWriteEnd();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Manufacturer(IDvInvocationStd& /*aInvocation*/, std::string& /*aName*/, std::string& /*aInfo*/, std::string& /*aUrl*/, std::string& /*aImageUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Model(IDvInvocationStd& /*aInvocation*/, std::string& /*aName*/, std::string& /*aInfo*/, std::string& /*aUrl*/, std::string& /*aImageUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Product(IDvInvocationStd& /*aInvocation*/, std::string& /*aRoom*/, std::string& /*aName*/, std::string& /*aInfo*/, std::string& /*aUrl*/, std::string& /*aImageUri*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Standby(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::StandbyTransitioning(IDvInvocationStd& /*aInvocation*/, bool& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SetStandby(IDvInvocationStd& /*aInvocation*/, bool /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SourceCount(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SourceXml(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SourceIndex(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SetSourceIndex(IDvInvocationStd& /*aInvocation*/, uint32_t /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SetSourceIndexByName(IDvInvocationStd& /*aInvocation*/, const std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SetSourceBySystemName(IDvInvocationStd& /*aInvocation*/, const std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Source(IDvInvocationStd& /*aInvocation*/, uint32_t /*aIndex*/, std::string& /*aSystemName*/, std::string& /*aType*/, std::string& /*aName*/, bool& /*aVisible*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::Attributes(IDvInvocationStd& /*aInvocation*/, std::string& /*aValue*/)
{
    ASSERTS();
}

void DvProviderAvOpenhomeOrgProduct3Cpp::SourceXmlChangeCount(IDvInvocationStd& /*aInvocation*/, uint32_t& /*aValue*/)
{
    ASSERTS();
}

