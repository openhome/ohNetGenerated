#include "DvAvOpenhomeOrgProduct2.h"
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/C/DviDeviceC.h>
#include <OpenHome/Net/Core/DvProvider.h>
#include <OpenHome/Net/C/OhNet.h>
#include <OpenHome/Net/Core/DvInvocationResponse.h>
#include <OpenHome/Net/Private/Service.h>
#include <OpenHome/Net/Private/FunctorDviInvocation.h>
#include <OpenHome/Net/C/DvInvocation.h>
#include <OpenHome/Net/C/DvInvocationPrivate.h>
#include <OpenHome/Net/Private/DviStack.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class DvProviderAvOpenhomeOrgProduct2C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgProduct2C(DvDeviceC aDevice);
    TBool SetPropertyManufacturerName(const Brx& aValue);
    void GetPropertyManufacturerName(Brhz& aValue);
    TBool SetPropertyManufacturerInfo(const Brx& aValue);
    void GetPropertyManufacturerInfo(Brhz& aValue);
    TBool SetPropertyManufacturerUrl(const Brx& aValue);
    void GetPropertyManufacturerUrl(Brhz& aValue);
    TBool SetPropertyManufacturerImageUri(const Brx& aValue);
    void GetPropertyManufacturerImageUri(Brhz& aValue);
    TBool SetPropertyModelName(const Brx& aValue);
    void GetPropertyModelName(Brhz& aValue);
    TBool SetPropertyModelInfo(const Brx& aValue);
    void GetPropertyModelInfo(Brhz& aValue);
    TBool SetPropertyModelUrl(const Brx& aValue);
    void GetPropertyModelUrl(Brhz& aValue);
    TBool SetPropertyModelImageUri(const Brx& aValue);
    void GetPropertyModelImageUri(Brhz& aValue);
    TBool SetPropertyProductRoom(const Brx& aValue);
    void GetPropertyProductRoom(Brhz& aValue);
    TBool SetPropertyProductName(const Brx& aValue);
    void GetPropertyProductName(Brhz& aValue);
    TBool SetPropertyProductInfo(const Brx& aValue);
    void GetPropertyProductInfo(Brhz& aValue);
    TBool SetPropertyProductUrl(const Brx& aValue);
    void GetPropertyProductUrl(Brhz& aValue);
    TBool SetPropertyProductImageUri(const Brx& aValue);
    void GetPropertyProductImageUri(Brhz& aValue);
    TBool SetPropertyStandby(TBool aValue);
    void GetPropertyStandby(TBool& aValue);
    TBool SetPropertySourceIndex(TUint aValue);
    void GetPropertySourceIndex(TUint& aValue);
    TBool SetPropertySourceCount(TUint aValue);
    void GetPropertySourceCount(TUint& aValue);
    TBool SetPropertySourceXml(const Brx& aValue);
    void GetPropertySourceXml(Brhz& aValue);
    TBool SetPropertyAttributes(const Brx& aValue);
    void GetPropertyAttributes(Brhz& aValue);
    void EnablePropertyManufacturerName();
    void EnablePropertyManufacturerInfo();
    void EnablePropertyManufacturerUrl();
    void EnablePropertyManufacturerImageUri();
    void EnablePropertyModelName();
    void EnablePropertyModelInfo();
    void EnablePropertyModelUrl();
    void EnablePropertyModelImageUri();
    void EnablePropertyProductRoom();
    void EnablePropertyProductName();
    void EnablePropertyProductInfo();
    void EnablePropertyProductUrl();
    void EnablePropertyProductImageUri();
    void EnablePropertyStandby();
    void EnablePropertySourceIndex();
    void EnablePropertySourceCount();
    void EnablePropertySourceXml();
    void EnablePropertyAttributes();
    void EnableActionManufacturer(CallbackProduct2Manufacturer aCallback, void* aPtr);
    void EnableActionModel(CallbackProduct2Model aCallback, void* aPtr);
    void EnableActionProduct(CallbackProduct2Product aCallback, void* aPtr);
    void EnableActionStandby(CallbackProduct2Standby aCallback, void* aPtr);
    void EnableActionSetStandby(CallbackProduct2SetStandby aCallback, void* aPtr);
    void EnableActionSourceCount(CallbackProduct2SourceCount aCallback, void* aPtr);
    void EnableActionSourceXml(CallbackProduct2SourceXml aCallback, void* aPtr);
    void EnableActionSourceIndex(CallbackProduct2SourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndex(CallbackProduct2SetSourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndexByName(CallbackProduct2SetSourceIndexByName aCallback, void* aPtr);
    void EnableActionSetSourceBySystemName(CallbackProduct2SetSourceBySystemName aCallback, void* aPtr);
    void EnableActionSource(CallbackProduct2Source aCallback, void* aPtr);
    void EnableActionAttributes(CallbackProduct2Attributes aCallback, void* aPtr);
    void EnableActionSourceXmlChangeCount(CallbackProduct2SourceXmlChangeCount aCallback, void* aPtr);
private:
    void DoManufacturer(IDviInvocation& aInvocation);
    void DoModel(IDviInvocation& aInvocation);
    void DoProduct(IDviInvocation& aInvocation);
    void DoStandby(IDviInvocation& aInvocation);
    void DoSetStandby(IDviInvocation& aInvocation);
    void DoSourceCount(IDviInvocation& aInvocation);
    void DoSourceXml(IDviInvocation& aInvocation);
    void DoSourceIndex(IDviInvocation& aInvocation);
    void DoSetSourceIndex(IDviInvocation& aInvocation);
    void DoSetSourceIndexByName(IDviInvocation& aInvocation);
    void DoSetSourceBySystemName(IDviInvocation& aInvocation);
    void DoSource(IDviInvocation& aInvocation);
    void DoAttributes(IDviInvocation& aInvocation);
    void DoSourceXmlChangeCount(IDviInvocation& aInvocation);
private:
    CallbackProduct2Manufacturer iCallbackManufacturer;
    void* iPtrManufacturer;
    CallbackProduct2Model iCallbackModel;
    void* iPtrModel;
    CallbackProduct2Product iCallbackProduct;
    void* iPtrProduct;
    CallbackProduct2Standby iCallbackStandby;
    void* iPtrStandby;
    CallbackProduct2SetStandby iCallbackSetStandby;
    void* iPtrSetStandby;
    CallbackProduct2SourceCount iCallbackSourceCount;
    void* iPtrSourceCount;
    CallbackProduct2SourceXml iCallbackSourceXml;
    void* iPtrSourceXml;
    CallbackProduct2SourceIndex iCallbackSourceIndex;
    void* iPtrSourceIndex;
    CallbackProduct2SetSourceIndex iCallbackSetSourceIndex;
    void* iPtrSetSourceIndex;
    CallbackProduct2SetSourceIndexByName iCallbackSetSourceIndexByName;
    void* iPtrSetSourceIndexByName;
    CallbackProduct2SetSourceBySystemName iCallbackSetSourceBySystemName;
    void* iPtrSetSourceBySystemName;
    CallbackProduct2Source iCallbackSource;
    void* iPtrSource;
    CallbackProduct2Attributes iCallbackAttributes;
    void* iPtrAttributes;
    CallbackProduct2SourceXmlChangeCount iCallbackSourceXmlChangeCount;
    void* iPtrSourceXmlChangeCount;
    PropertyString* iPropertyManufacturerName;
    PropertyString* iPropertyManufacturerInfo;
    PropertyString* iPropertyManufacturerUrl;
    PropertyString* iPropertyManufacturerImageUri;
    PropertyString* iPropertyModelName;
    PropertyString* iPropertyModelInfo;
    PropertyString* iPropertyModelUrl;
    PropertyString* iPropertyModelImageUri;
    PropertyString* iPropertyProductRoom;
    PropertyString* iPropertyProductName;
    PropertyString* iPropertyProductInfo;
    PropertyString* iPropertyProductUrl;
    PropertyString* iPropertyProductImageUri;
    PropertyBool* iPropertyStandby;
    PropertyUint* iPropertySourceIndex;
    PropertyUint* iPropertySourceCount;
    PropertyString* iPropertySourceXml;
    PropertyString* iPropertyAttributes;
};

DvProviderAvOpenhomeOrgProduct2C::DvProviderAvOpenhomeOrgProduct2C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Product", 2)
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
    iPropertySourceIndex = NULL;
    iPropertySourceCount = NULL;
    iPropertySourceXml = NULL;
    iPropertyAttributes = NULL;
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyManufacturerName(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    return SetPropertyString(*iPropertyManufacturerName, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyManufacturerName(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    aValue.Set(iPropertyManufacturerName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyManufacturerInfo(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    return SetPropertyString(*iPropertyManufacturerInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyManufacturerInfo(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    aValue.Set(iPropertyManufacturerInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyManufacturerUrl(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    return SetPropertyString(*iPropertyManufacturerUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyManufacturerUrl(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    aValue.Set(iPropertyManufacturerUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyManufacturerImageUri(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    return SetPropertyString(*iPropertyManufacturerImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyManufacturerImageUri(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    aValue.Set(iPropertyManufacturerImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyModelName(const Brx& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    return SetPropertyString(*iPropertyModelName, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyModelName(Brhz& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    aValue.Set(iPropertyModelName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyModelInfo(const Brx& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    return SetPropertyString(*iPropertyModelInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyModelInfo(Brhz& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    aValue.Set(iPropertyModelInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyModelUrl(const Brx& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    return SetPropertyString(*iPropertyModelUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyModelUrl(Brhz& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    aValue.Set(iPropertyModelUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyModelImageUri(const Brx& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    return SetPropertyString(*iPropertyModelImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyModelImageUri(Brhz& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    aValue.Set(iPropertyModelImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyProductRoom(const Brx& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    return SetPropertyString(*iPropertyProductRoom, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyProductRoom(Brhz& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    aValue.Set(iPropertyProductRoom->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyProductName(const Brx& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    return SetPropertyString(*iPropertyProductName, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyProductName(Brhz& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    aValue.Set(iPropertyProductName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyProductInfo(const Brx& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    return SetPropertyString(*iPropertyProductInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyProductInfo(Brhz& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    aValue.Set(iPropertyProductInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyProductUrl(const Brx& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    return SetPropertyString(*iPropertyProductUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyProductUrl(Brhz& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    aValue.Set(iPropertyProductUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyProductImageUri(const Brx& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    return SetPropertyString(*iPropertyProductImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyProductImageUri(Brhz& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    aValue.Set(iPropertyProductImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyStandby(TBool aValue)
{
    ASSERT(iPropertyStandby != NULL);
    return SetPropertyBool(*iPropertyStandby, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyStandby(TBool& aValue)
{
    ASSERT(iPropertyStandby != NULL);
    aValue = iPropertyStandby->Value();
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertySourceIndex(TUint aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    return SetPropertyUint(*iPropertySourceIndex, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertySourceIndex(TUint& aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    aValue = iPropertySourceIndex->Value();
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertySourceCount(TUint aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    return SetPropertyUint(*iPropertySourceCount, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertySourceCount(TUint& aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    aValue = iPropertySourceCount->Value();
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertySourceXml(const Brx& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    return SetPropertyString(*iPropertySourceXml, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertySourceXml(Brhz& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    aValue.Set(iPropertySourceXml->Value());
}

TBool DvProviderAvOpenhomeOrgProduct2C::SetPropertyAttributes(const Brx& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgProduct2C::GetPropertyAttributes(Brhz& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    aValue.Set(iPropertyAttributes->Value());
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyManufacturerName()
{
    iPropertyManufacturerName = new PropertyString(new ParameterString("ManufacturerName"));
    iService->AddProperty(iPropertyManufacturerName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyManufacturerInfo()
{
    iPropertyManufacturerInfo = new PropertyString(new ParameterString("ManufacturerInfo"));
    iService->AddProperty(iPropertyManufacturerInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyManufacturerUrl()
{
    iPropertyManufacturerUrl = new PropertyString(new ParameterString("ManufacturerUrl"));
    iService->AddProperty(iPropertyManufacturerUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyManufacturerImageUri()
{
    iPropertyManufacturerImageUri = new PropertyString(new ParameterString("ManufacturerImageUri"));
    iService->AddProperty(iPropertyManufacturerImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyModelName()
{
    iPropertyModelName = new PropertyString(new ParameterString("ModelName"));
    iService->AddProperty(iPropertyModelName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyModelInfo()
{
    iPropertyModelInfo = new PropertyString(new ParameterString("ModelInfo"));
    iService->AddProperty(iPropertyModelInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyModelUrl()
{
    iPropertyModelUrl = new PropertyString(new ParameterString("ModelUrl"));
    iService->AddProperty(iPropertyModelUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyModelImageUri()
{
    iPropertyModelImageUri = new PropertyString(new ParameterString("ModelImageUri"));
    iService->AddProperty(iPropertyModelImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyProductRoom()
{
    iPropertyProductRoom = new PropertyString(new ParameterString("ProductRoom"));
    iService->AddProperty(iPropertyProductRoom); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyProductName()
{
    iPropertyProductName = new PropertyString(new ParameterString("ProductName"));
    iService->AddProperty(iPropertyProductName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyProductInfo()
{
    iPropertyProductInfo = new PropertyString(new ParameterString("ProductInfo"));
    iService->AddProperty(iPropertyProductInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyProductUrl()
{
    iPropertyProductUrl = new PropertyString(new ParameterString("ProductUrl"));
    iService->AddProperty(iPropertyProductUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyProductImageUri()
{
    iPropertyProductImageUri = new PropertyString(new ParameterString("ProductImageUri"));
    iService->AddProperty(iPropertyProductImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyStandby()
{
    iPropertyStandby = new PropertyBool(new ParameterBool("Standby"));
    iService->AddProperty(iPropertyStandby); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertySourceIndex()
{
    iPropertySourceIndex = new PropertyUint(new ParameterUint("SourceIndex"));
    iService->AddProperty(iPropertySourceIndex); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertySourceCount()
{
    iPropertySourceCount = new PropertyUint(new ParameterUint("SourceCount"));
    iService->AddProperty(iPropertySourceCount); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertySourceXml()
{
    iPropertySourceXml = new PropertyString(new ParameterString("SourceXml"));
    iService->AddProperty(iPropertySourceXml); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionManufacturer(CallbackProduct2Manufacturer aCallback, void* aPtr)
{
    iCallbackManufacturer = aCallback;
    iPtrManufacturer = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Manufacturer");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyManufacturerName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyManufacturerInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyManufacturerUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyManufacturerImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoManufacturer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionModel(CallbackProduct2Model aCallback, void* aPtr)
{
    iCallbackModel = aCallback;
    iPtrModel = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Model");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyModelName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyModelInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyModelUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyModelImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoModel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionProduct(CallbackProduct2Product aCallback, void* aPtr)
{
    iCallbackProduct = aCallback;
    iPtrProduct = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Product");
    action->AddOutputParameter(new ParameterRelated("Room", *iPropertyProductRoom));
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyProductName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyProductInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyProductUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoProduct);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionStandby(CallbackProduct2Standby aCallback, void* aPtr)
{
    iCallbackStandby = aCallback;
    iPtrStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Standby");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSetStandby(CallbackProduct2SetStandby aCallback, void* aPtr)
{
    iCallbackSetStandby = aCallback;
    iPtrSetStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetStandby");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSetStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSourceCount(CallbackProduct2SourceCount aCallback, void* aPtr)
{
    iCallbackSourceCount = aCallback;
    iPtrSourceCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceCount");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSourceCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSourceXml(CallbackProduct2SourceXml aCallback, void* aPtr)
{
    iCallbackSourceXml = aCallback;
    iPtrSourceXml = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXml");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSourceXml);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSourceIndex(CallbackProduct2SourceIndex aCallback, void* aPtr)
{
    iCallbackSourceIndex = aCallback;
    iPtrSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceIndex");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSetSourceIndex(CallbackProduct2SetSourceIndex aCallback, void* aPtr)
{
    iCallbackSetSourceIndex = aCallback;
    iPtrSetSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndex");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSetSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSetSourceIndexByName(CallbackProduct2SetSourceIndexByName aCallback, void* aPtr)
{
    iCallbackSetSourceIndexByName = aCallback;
    iPtrSetSourceIndexByName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndexByName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSetSourceIndexByName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSetSourceBySystemName(CallbackProduct2SetSourceBySystemName aCallback, void* aPtr)
{
    iCallbackSetSourceBySystemName = aCallback;
    iPtrSetSourceBySystemName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceBySystemName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSetSourceBySystemName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSource(CallbackProduct2Source aCallback, void* aPtr)
{
    iCallbackSource = aCallback;
    iPtrSource = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Source");
    action->AddInputParameter(new ParameterRelated("Index", *iPropertySourceIndex));
    action->AddOutputParameter(new ParameterString("SystemName"));
    action->AddOutputParameter(new ParameterString("Type"));
    action->AddOutputParameter(new ParameterString("Name"));
    action->AddOutputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSource);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionAttributes(CallbackProduct2Attributes aCallback, void* aPtr)
{
    iCallbackAttributes = aCallback;
    iPtrAttributes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::EnableActionSourceXmlChangeCount(CallbackProduct2SourceXmlChangeCount aCallback, void* aPtr)
{
    iCallbackSourceXmlChangeCount = aCallback;
    iPtrSourceXmlChangeCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXmlChangeCount");
    action->AddOutputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct2C::DoSourceXmlChangeCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct2C::DoManufacturer(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackManufacturer != NULL);
    if (0 != iCallbackManufacturer(iPtrManufacturer, invocationC, invocationCPtr, &Name, &Info, &Url, &ImageUri)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respName(aInvocation, "Name");
    DviInvocationResponseString respInfo(aInvocation, "Info");
    DviInvocationResponseString respUrl(aInvocation, "Url");
    DviInvocationResponseString respImageUri(aInvocation, "ImageUri");
    invocation.StartResponse();
    Brhz bufName((const TChar*)Name);
    OhNetFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    OhNetFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    OhNetFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    OhNetFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoModel(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackModel != NULL);
    if (0 != iCallbackModel(iPtrModel, invocationC, invocationCPtr, &Name, &Info, &Url, &ImageUri)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respName(aInvocation, "Name");
    DviInvocationResponseString respInfo(aInvocation, "Info");
    DviInvocationResponseString respUrl(aInvocation, "Url");
    DviInvocationResponseString respImageUri(aInvocation, "ImageUri");
    invocation.StartResponse();
    Brhz bufName((const TChar*)Name);
    OhNetFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    OhNetFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    OhNetFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    OhNetFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoProduct(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Room;
    char* Name;
    char* Info;
    char* Url;
    char* ImageUri;
    ASSERT(iCallbackProduct != NULL);
    if (0 != iCallbackProduct(iPtrProduct, invocationC, invocationCPtr, &Room, &Name, &Info, &Url, &ImageUri)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respRoom(aInvocation, "Room");
    DviInvocationResponseString respName(aInvocation, "Name");
    DviInvocationResponseString respInfo(aInvocation, "Info");
    DviInvocationResponseString respUrl(aInvocation, "Url");
    DviInvocationResponseString respImageUri(aInvocation, "ImageUri");
    invocation.StartResponse();
    Brhz bufRoom((const TChar*)Room);
    OhNetFreeExternal(Room);
    respRoom.Write(bufRoom);
    respRoom.WriteFlush();
    Brhz bufName((const TChar*)Name);
    OhNetFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    Brhz bufInfo((const TChar*)Info);
    OhNetFreeExternal(Info);
    respInfo.Write(bufInfo);
    respInfo.WriteFlush();
    Brhz bufUrl((const TChar*)Url);
    OhNetFreeExternal(Url);
    respUrl.Write(bufUrl);
    respUrl.WriteFlush();
    Brhz bufImageUri((const TChar*)ImageUri);
    OhNetFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoStandby(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackStandby != NULL);
    if (0 != iCallbackStandby(iPtrStandby, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSetStandby(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TBool Value = aInvocation.InvocationReadBool("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetStandby != NULL);
    if (0 != iCallbackSetStandby(iPtrSetStandby, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSourceCount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceCount != NULL);
    if (0 != iCallbackSourceCount(iPtrSourceCount, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSourceXml(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackSourceXml != NULL);
    if (0 != iCallbackSourceXml(iPtrSourceXml, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSourceIndex(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceIndex != NULL);
    if (0 != iCallbackSourceIndex(iPtrSourceIndex, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSetSourceIndex(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Value = aInvocation.InvocationReadUint("Value");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSourceIndex != NULL);
    if (0 != iCallbackSetSourceIndex(iPtrSetSourceIndex, invocationC, invocationCPtr, Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSetSourceIndexByName(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Value;
    aInvocation.InvocationReadString("Value", Value);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSourceIndexByName != NULL);
    if (0 != iCallbackSetSourceIndexByName(iPtrSetSourceIndexByName, invocationC, invocationCPtr, (const char*)Value.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSetSourceBySystemName(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Value;
    aInvocation.InvocationReadString("Value", Value);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    ASSERT(iCallbackSetSourceBySystemName != NULL);
    if (0 != iCallbackSetSourceBySystemName(iPtrSetSourceBySystemName, invocationC, invocationCPtr, (const char*)Value.Ptr())) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    invocation.StartResponse();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSource(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    TUint Index = aInvocation.InvocationReadUint("Index");
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* SystemName;
    char* Type;
    char* Name;
    uint32_t Visible;
    ASSERT(iCallbackSource != NULL);
    if (0 != iCallbackSource(iPtrSource, invocationC, invocationCPtr, Index, &SystemName, &Type, &Name, &Visible)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respSystemName(aInvocation, "SystemName");
    DviInvocationResponseString respType(aInvocation, "Type");
    DviInvocationResponseString respName(aInvocation, "Name");
    DviInvocationResponseBool respVisible(aInvocation, "Visible");
    invocation.StartResponse();
    Brhz bufSystemName((const TChar*)SystemName);
    OhNetFreeExternal(SystemName);
    respSystemName.Write(bufSystemName);
    respSystemName.WriteFlush();
    Brhz bufType((const TChar*)Type);
    OhNetFreeExternal(Type);
    respType.Write(bufType);
    respType.WriteFlush();
    Brhz bufName((const TChar*)Name);
    OhNetFreeExternal(Name);
    respName.Write(bufName);
    respName.WriteFlush();
    respVisible.Write((Visible!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoAttributes(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* Value;
    ASSERT(iCallbackAttributes != NULL);
    if (0 != iCallbackAttributes(iPtrAttributes, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respValue(aInvocation, "Value");
    invocation.StartResponse();
    Brhz bufValue((const TChar*)Value);
    OhNetFreeExternal(Value);
    respValue.Write(bufValue);
    respValue.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct2C::DoSourceXmlChangeCount(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackSourceXmlChangeCount != NULL);
    if (0 != iCallbackSourceXmlChangeCount(iPtrSourceXmlChangeCount, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseUint respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write(Value);
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgProduct2Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgProduct2C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionManufacturer(THandle aProvider, CallbackProduct2Manufacturer aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionManufacturer(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionModel(THandle aProvider, CallbackProduct2Model aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionModel(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionProduct(THandle aProvider, CallbackProduct2Product aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionProduct(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionStandby(THandle aProvider, CallbackProduct2Standby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSetStandby(THandle aProvider, CallbackProduct2SetStandby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSetStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSourceCount(THandle aProvider, CallbackProduct2SourceCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSourceCount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSourceXml(THandle aProvider, CallbackProduct2SourceXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSourceXml(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSourceIndex(THandle aProvider, CallbackProduct2SourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSetSourceIndex(THandle aProvider, CallbackProduct2SetSourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSetSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSetSourceIndexByName(THandle aProvider, CallbackProduct2SetSourceIndexByName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSetSourceIndexByName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSetSourceBySystemName(THandle aProvider, CallbackProduct2SetSourceBySystemName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSetSourceBySystemName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSource(THandle aProvider, CallbackProduct2Source aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSource(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionAttributes(THandle aProvider, CallbackProduct2Attributes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionAttributes(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnableActionSourceXmlChangeCount(THandle aProvider, CallbackProduct2SourceXmlChangeCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnableActionSourceXmlChangeCount(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyManufacturerName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyManufacturerName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyManufacturerName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyManufacturerName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyManufacturerInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyManufacturerInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyManufacturerInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyManufacturerInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyManufacturerUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyManufacturerUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyManufacturerUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyManufacturerUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyManufacturerImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyManufacturerImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyManufacturerImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyManufacturerImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyModelName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyModelName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyModelName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyModelName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyModelInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyModelInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyModelInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyModelInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyModelUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyModelUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyModelUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyModelUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyModelImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyModelImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyModelImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyModelImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyProductRoom(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyProductRoom(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyProductRoom(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyProductRoom(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyProductName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyProductName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyProductName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyProductName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyProductInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyProductInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyProductInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyProductInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyProductUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyProductUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyProductUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyProductUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyProductImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyProductImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyProductImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyProductImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyStandby(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyStandby((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyStandby(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyStandby(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertySourceIndex(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertySourceIndex(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertySourceIndex(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertySourceIndex(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertySourceCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertySourceCount(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertySourceCount(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertySourceCount(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertySourceXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertySourceXml(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertySourceXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertySourceXml(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct2SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->SetPropertyAttributes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct2GetPropertyAttributes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->GetPropertyAttributes(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyManufacturerName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyManufacturerName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyManufacturerInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyManufacturerInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyManufacturerUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyManufacturerUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyManufacturerImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyManufacturerImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyModelName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyModelName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyModelInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyModelInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyModelUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyModelUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyModelImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyModelImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyProductRoom(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyProductRoom();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyProductName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyProductName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyProductInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyProductInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyProductUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyProductUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyProductImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyProductImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyStandby(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyStandby();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertySourceIndex(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertySourceIndex();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertySourceCount(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertySourceCount();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertySourceXml(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertySourceXml();
}

void STDCALL DvProviderAvOpenhomeOrgProduct2EnablePropertyAttributes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct2C*>(aProvider)->EnablePropertyAttributes();
}

