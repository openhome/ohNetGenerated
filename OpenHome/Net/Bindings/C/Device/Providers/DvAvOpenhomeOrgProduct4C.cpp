#include "DvAvOpenhomeOrgProduct4.h"
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

class DvProviderAvOpenhomeOrgProduct4C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgProduct4C(DvDeviceC aDevice);
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
    TBool SetPropertyProductImageHiresUri(const Brx& aValue);
    void GetPropertyProductImageHiresUri(Brhz& aValue);
    TBool SetPropertyStandby(TBool aValue);
    void GetPropertyStandby(TBool& aValue);
    TBool SetPropertyStandbyTransitioning(TBool aValue);
    void GetPropertyStandbyTransitioning(TBool& aValue);
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
    void EnablePropertyProductImageHiresUri();
    void EnablePropertyStandby();
    void EnablePropertyStandbyTransitioning();
    void EnablePropertySourceIndex();
    void EnablePropertySourceCount();
    void EnablePropertySourceXml();
    void EnablePropertyAttributes();
    void EnableActionManufacturer(CallbackProduct4Manufacturer aCallback, void* aPtr);
    void EnableActionModel(CallbackProduct4Model aCallback, void* aPtr);
    void EnableActionProduct(CallbackProduct4Product aCallback, void* aPtr);
    void EnableActionStandby(CallbackProduct4Standby aCallback, void* aPtr);
    void EnableActionStandbyTransitioning(CallbackProduct4StandbyTransitioning aCallback, void* aPtr);
    void EnableActionSetStandby(CallbackProduct4SetStandby aCallback, void* aPtr);
    void EnableActionSourceCount(CallbackProduct4SourceCount aCallback, void* aPtr);
    void EnableActionSourceXml(CallbackProduct4SourceXml aCallback, void* aPtr);
    void EnableActionSourceIndex(CallbackProduct4SourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndex(CallbackProduct4SetSourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndexByName(CallbackProduct4SetSourceIndexByName aCallback, void* aPtr);
    void EnableActionSetSourceBySystemName(CallbackProduct4SetSourceBySystemName aCallback, void* aPtr);
    void EnableActionSource(CallbackProduct4Source aCallback, void* aPtr);
    void EnableActionAttributes(CallbackProduct4Attributes aCallback, void* aPtr);
    void EnableActionSourceXmlChangeCount(CallbackProduct4SourceXmlChangeCount aCallback, void* aPtr);
    void EnableActionGetImageUri(CallbackProduct4GetImageUri aCallback, void* aPtr);
private:
    void DoManufacturer(IDviInvocation& aInvocation);
    void DoModel(IDviInvocation& aInvocation);
    void DoProduct(IDviInvocation& aInvocation);
    void DoStandby(IDviInvocation& aInvocation);
    void DoStandbyTransitioning(IDviInvocation& aInvocation);
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
    void DoGetImageUri(IDviInvocation& aInvocation);
private:
    CallbackProduct4Manufacturer iCallbackManufacturer;
    void* iPtrManufacturer;
    CallbackProduct4Model iCallbackModel;
    void* iPtrModel;
    CallbackProduct4Product iCallbackProduct;
    void* iPtrProduct;
    CallbackProduct4Standby iCallbackStandby;
    void* iPtrStandby;
    CallbackProduct4StandbyTransitioning iCallbackStandbyTransitioning;
    void* iPtrStandbyTransitioning;
    CallbackProduct4SetStandby iCallbackSetStandby;
    void* iPtrSetStandby;
    CallbackProduct4SourceCount iCallbackSourceCount;
    void* iPtrSourceCount;
    CallbackProduct4SourceXml iCallbackSourceXml;
    void* iPtrSourceXml;
    CallbackProduct4SourceIndex iCallbackSourceIndex;
    void* iPtrSourceIndex;
    CallbackProduct4SetSourceIndex iCallbackSetSourceIndex;
    void* iPtrSetSourceIndex;
    CallbackProduct4SetSourceIndexByName iCallbackSetSourceIndexByName;
    void* iPtrSetSourceIndexByName;
    CallbackProduct4SetSourceBySystemName iCallbackSetSourceBySystemName;
    void* iPtrSetSourceBySystemName;
    CallbackProduct4Source iCallbackSource;
    void* iPtrSource;
    CallbackProduct4Attributes iCallbackAttributes;
    void* iPtrAttributes;
    CallbackProduct4SourceXmlChangeCount iCallbackSourceXmlChangeCount;
    void* iPtrSourceXmlChangeCount;
    CallbackProduct4GetImageUri iCallbackGetImageUri;
    void* iPtrGetImageUri;
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
    PropertyString* iPropertyProductImageHiresUri;
    PropertyBool* iPropertyStandby;
    PropertyBool* iPropertyStandbyTransitioning;
    PropertyUint* iPropertySourceIndex;
    PropertyUint* iPropertySourceCount;
    PropertyString* iPropertySourceXml;
    PropertyString* iPropertyAttributes;
};

DvProviderAvOpenhomeOrgProduct4C::DvProviderAvOpenhomeOrgProduct4C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Product", 4)
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
    iPropertyProductImageHiresUri = NULL;
    iPropertyStandby = NULL;
    iPropertyStandbyTransitioning = NULL;
    iPropertySourceIndex = NULL;
    iPropertySourceCount = NULL;
    iPropertySourceXml = NULL;
    iPropertyAttributes = NULL;
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyManufacturerName(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    return SetPropertyString(*iPropertyManufacturerName, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyManufacturerName(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    aValue.Set(iPropertyManufacturerName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyManufacturerInfo(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    return SetPropertyString(*iPropertyManufacturerInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyManufacturerInfo(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    aValue.Set(iPropertyManufacturerInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyManufacturerUrl(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    return SetPropertyString(*iPropertyManufacturerUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyManufacturerUrl(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    aValue.Set(iPropertyManufacturerUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyManufacturerImageUri(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    return SetPropertyString(*iPropertyManufacturerImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyManufacturerImageUri(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    aValue.Set(iPropertyManufacturerImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyModelName(const Brx& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    return SetPropertyString(*iPropertyModelName, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyModelName(Brhz& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    aValue.Set(iPropertyModelName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyModelInfo(const Brx& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    return SetPropertyString(*iPropertyModelInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyModelInfo(Brhz& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    aValue.Set(iPropertyModelInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyModelUrl(const Brx& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    return SetPropertyString(*iPropertyModelUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyModelUrl(Brhz& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    aValue.Set(iPropertyModelUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyModelImageUri(const Brx& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    return SetPropertyString(*iPropertyModelImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyModelImageUri(Brhz& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    aValue.Set(iPropertyModelImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductRoom(const Brx& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    return SetPropertyString(*iPropertyProductRoom, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductRoom(Brhz& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    aValue.Set(iPropertyProductRoom->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductName(const Brx& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    return SetPropertyString(*iPropertyProductName, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductName(Brhz& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    aValue.Set(iPropertyProductName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductInfo(const Brx& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    return SetPropertyString(*iPropertyProductInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductInfo(Brhz& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    aValue.Set(iPropertyProductInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductUrl(const Brx& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    return SetPropertyString(*iPropertyProductUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductUrl(Brhz& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    aValue.Set(iPropertyProductUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductImageUri(const Brx& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    return SetPropertyString(*iPropertyProductImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductImageUri(Brhz& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    aValue.Set(iPropertyProductImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyProductImageHiresUri(const Brx& aValue)
{
    ASSERT(iPropertyProductImageHiresUri != NULL);
    return SetPropertyString(*iPropertyProductImageHiresUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyProductImageHiresUri(Brhz& aValue)
{
    ASSERT(iPropertyProductImageHiresUri != NULL);
    aValue.Set(iPropertyProductImageHiresUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyStandby(TBool aValue)
{
    ASSERT(iPropertyStandby != NULL);
    return SetPropertyBool(*iPropertyStandby, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyStandby(TBool& aValue)
{
    ASSERT(iPropertyStandby != NULL);
    aValue = iPropertyStandby->Value();
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyStandbyTransitioning(TBool aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    return SetPropertyBool(*iPropertyStandbyTransitioning, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyStandbyTransitioning(TBool& aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    aValue = iPropertyStandbyTransitioning->Value();
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertySourceIndex(TUint aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    return SetPropertyUint(*iPropertySourceIndex, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertySourceIndex(TUint& aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    aValue = iPropertySourceIndex->Value();
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertySourceCount(TUint aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    return SetPropertyUint(*iPropertySourceCount, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertySourceCount(TUint& aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    aValue = iPropertySourceCount->Value();
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertySourceXml(const Brx& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    return SetPropertyString(*iPropertySourceXml, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertySourceXml(Brhz& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    aValue.Set(iPropertySourceXml->Value());
}

TBool DvProviderAvOpenhomeOrgProduct4C::SetPropertyAttributes(const Brx& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgProduct4C::GetPropertyAttributes(Brhz& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    aValue.Set(iPropertyAttributes->Value());
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyManufacturerName()
{
    iPropertyManufacturerName = new PropertyString(new ParameterString("ManufacturerName"));
    iService->AddProperty(iPropertyManufacturerName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyManufacturerInfo()
{
    iPropertyManufacturerInfo = new PropertyString(new ParameterString("ManufacturerInfo"));
    iService->AddProperty(iPropertyManufacturerInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyManufacturerUrl()
{
    iPropertyManufacturerUrl = new PropertyString(new ParameterString("ManufacturerUrl"));
    iService->AddProperty(iPropertyManufacturerUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyManufacturerImageUri()
{
    iPropertyManufacturerImageUri = new PropertyString(new ParameterString("ManufacturerImageUri"));
    iService->AddProperty(iPropertyManufacturerImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyModelName()
{
    iPropertyModelName = new PropertyString(new ParameterString("ModelName"));
    iService->AddProperty(iPropertyModelName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyModelInfo()
{
    iPropertyModelInfo = new PropertyString(new ParameterString("ModelInfo"));
    iService->AddProperty(iPropertyModelInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyModelUrl()
{
    iPropertyModelUrl = new PropertyString(new ParameterString("ModelUrl"));
    iService->AddProperty(iPropertyModelUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyModelImageUri()
{
    iPropertyModelImageUri = new PropertyString(new ParameterString("ModelImageUri"));
    iService->AddProperty(iPropertyModelImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductRoom()
{
    iPropertyProductRoom = new PropertyString(new ParameterString("ProductRoom"));
    iService->AddProperty(iPropertyProductRoom); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductName()
{
    iPropertyProductName = new PropertyString(new ParameterString("ProductName"));
    iService->AddProperty(iPropertyProductName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductInfo()
{
    iPropertyProductInfo = new PropertyString(new ParameterString("ProductInfo"));
    iService->AddProperty(iPropertyProductInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductUrl()
{
    iPropertyProductUrl = new PropertyString(new ParameterString("ProductUrl"));
    iService->AddProperty(iPropertyProductUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductImageUri()
{
    iPropertyProductImageUri = new PropertyString(new ParameterString("ProductImageUri"));
    iService->AddProperty(iPropertyProductImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyProductImageHiresUri()
{
    iPropertyProductImageHiresUri = new PropertyString(new ParameterString("ProductImageHiresUri"));
    iService->AddProperty(iPropertyProductImageHiresUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyStandby()
{
    iPropertyStandby = new PropertyBool(new ParameterBool("Standby"));
    iService->AddProperty(iPropertyStandby); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyStandbyTransitioning()
{
    iPropertyStandbyTransitioning = new PropertyBool(new ParameterBool("StandbyTransitioning"));
    iService->AddProperty(iPropertyStandbyTransitioning); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertySourceIndex()
{
    iPropertySourceIndex = new PropertyUint(new ParameterUint("SourceIndex"));
    iService->AddProperty(iPropertySourceIndex); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertySourceCount()
{
    iPropertySourceCount = new PropertyUint(new ParameterUint("SourceCount"));
    iService->AddProperty(iPropertySourceCount); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertySourceXml()
{
    iPropertySourceXml = new PropertyString(new ParameterString("SourceXml"));
    iService->AddProperty(iPropertySourceXml); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionManufacturer(CallbackProduct4Manufacturer aCallback, void* aPtr)
{
    iCallbackManufacturer = aCallback;
    iPtrManufacturer = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Manufacturer");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyManufacturerName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyManufacturerInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyManufacturerUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyManufacturerImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoManufacturer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionModel(CallbackProduct4Model aCallback, void* aPtr)
{
    iCallbackModel = aCallback;
    iPtrModel = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Model");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyModelName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyModelInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyModelUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyModelImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoModel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionProduct(CallbackProduct4Product aCallback, void* aPtr)
{
    iCallbackProduct = aCallback;
    iPtrProduct = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Product");
    action->AddOutputParameter(new ParameterRelated("Room", *iPropertyProductRoom));
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyProductName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyProductInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyProductUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    action->AddOutputParameter(new ParameterRelated("ImageHiresUri", *iPropertyProductImageHiresUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoProduct);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionStandby(CallbackProduct4Standby aCallback, void* aPtr)
{
    iCallbackStandby = aCallback;
    iPtrStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Standby");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionStandbyTransitioning(CallbackProduct4StandbyTransitioning aCallback, void* aPtr)
{
    iCallbackStandbyTransitioning = aCallback;
    iPtrStandbyTransitioning = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StandbyTransitioning");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandbyTransitioning));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoStandbyTransitioning);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSetStandby(CallbackProduct4SetStandby aCallback, void* aPtr)
{
    iCallbackSetStandby = aCallback;
    iPtrSetStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetStandby");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSetStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSourceCount(CallbackProduct4SourceCount aCallback, void* aPtr)
{
    iCallbackSourceCount = aCallback;
    iPtrSourceCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceCount");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSourceCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSourceXml(CallbackProduct4SourceXml aCallback, void* aPtr)
{
    iCallbackSourceXml = aCallback;
    iPtrSourceXml = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXml");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSourceXml);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSourceIndex(CallbackProduct4SourceIndex aCallback, void* aPtr)
{
    iCallbackSourceIndex = aCallback;
    iPtrSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceIndex");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSetSourceIndex(CallbackProduct4SetSourceIndex aCallback, void* aPtr)
{
    iCallbackSetSourceIndex = aCallback;
    iPtrSetSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndex");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSetSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSetSourceIndexByName(CallbackProduct4SetSourceIndexByName aCallback, void* aPtr)
{
    iCallbackSetSourceIndexByName = aCallback;
    iPtrSetSourceIndexByName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndexByName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSetSourceIndexByName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSetSourceBySystemName(CallbackProduct4SetSourceBySystemName aCallback, void* aPtr)
{
    iCallbackSetSourceBySystemName = aCallback;
    iPtrSetSourceBySystemName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceBySystemName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSetSourceBySystemName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSource(CallbackProduct4Source aCallback, void* aPtr)
{
    iCallbackSource = aCallback;
    iPtrSource = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Source");
    action->AddInputParameter(new ParameterRelated("Index", *iPropertySourceIndex));
    action->AddOutputParameter(new ParameterString("SystemName"));
    action->AddOutputParameter(new ParameterString("Type"));
    action->AddOutputParameter(new ParameterString("Name"));
    action->AddOutputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSource);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionAttributes(CallbackProduct4Attributes aCallback, void* aPtr)
{
    iCallbackAttributes = aCallback;
    iPtrAttributes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionSourceXmlChangeCount(CallbackProduct4SourceXmlChangeCount aCallback, void* aPtr)
{
    iCallbackSourceXmlChangeCount = aCallback;
    iPtrSourceXmlChangeCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXmlChangeCount");
    action->AddOutputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoSourceXmlChangeCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::EnableActionGetImageUri(CallbackProduct4GetImageUri aCallback, void* aPtr)
{
    iCallbackGetImageUri = aCallback;
    iPtrGetImageUri = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("GetImageUri");
    TChar** allowedValues;
    TUint index;
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"Low";
    allowedValues[index++] = (TChar*)"High";
    action->AddInputParameter(new ParameterString("Resolution", allowedValues, 2));
    delete[] allowedValues;
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct4C::DoGetImageUri);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct4C::DoManufacturer(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoModel(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoProduct(IDviInvocation& aInvocation)
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
    char* ImageHiresUri;
    ASSERT(iCallbackProduct != NULL);
    if (0 != iCallbackProduct(iPtrProduct, invocationC, invocationCPtr, &Room, &Name, &Info, &Url, &ImageUri, &ImageHiresUri)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respRoom(aInvocation, "Room");
    DviInvocationResponseString respName(aInvocation, "Name");
    DviInvocationResponseString respInfo(aInvocation, "Info");
    DviInvocationResponseString respUrl(aInvocation, "Url");
    DviInvocationResponseString respImageUri(aInvocation, "ImageUri");
    DviInvocationResponseString respImageHiresUri(aInvocation, "ImageHiresUri");
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
    Brhz bufImageHiresUri((const TChar*)ImageHiresUri);
    OhNetFreeExternal(ImageHiresUri);
    respImageHiresUri.Write(bufImageHiresUri);
    respImageHiresUri.WriteFlush();
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct4C::DoStandby(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoStandbyTransitioning(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    uint32_t Value;
    ASSERT(iCallbackStandbyTransitioning != NULL);
    if (0 != iCallbackStandbyTransitioning(iPtrStandbyTransitioning, invocationC, invocationCPtr, &Value)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseBool respValue(aInvocation, "Value");
    invocation.StartResponse();
    respValue.Write((Value!=0));
    invocation.EndResponse();
}

void DvProviderAvOpenhomeOrgProduct4C::DoSetStandby(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSourceCount(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSourceXml(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSourceIndex(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSetSourceIndex(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSetSourceIndexByName(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSetSourceBySystemName(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSource(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoAttributes(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoSourceXmlChangeCount(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct4C::DoGetImageUri(IDviInvocation& aInvocation)
{
    DvInvocationCPrivate invocationWrapper(aInvocation);
    IDvInvocationC* invocationC;
    void* invocationCPtr;
    invocationWrapper.GetInvocationC(&invocationC, &invocationCPtr);
    aInvocation.InvocationReadStart();
    Brhz Resolution;
    aInvocation.InvocationReadString("Resolution", Resolution);
    aInvocation.InvocationReadEnd();
    DviInvocation invocation(aInvocation);
    char* ImageUri;
    ASSERT(iCallbackGetImageUri != NULL);
    if (0 != iCallbackGetImageUri(iPtrGetImageUri, invocationC, invocationCPtr, (const char*)Resolution.Ptr(), &ImageUri)) {
        invocation.Error(502, Brn("Action failed"));
        return;
    }
    DviInvocationResponseString respImageUri(aInvocation, "ImageUri");
    invocation.StartResponse();
    Brhz bufImageUri((const TChar*)ImageUri);
    OhNetFreeExternal(ImageUri);
    respImageUri.Write(bufImageUri);
    respImageUri.WriteFlush();
    invocation.EndResponse();
}



THandle STDCALL DvProviderAvOpenhomeOrgProduct4Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgProduct4C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionManufacturer(THandle aProvider, CallbackProduct4Manufacturer aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionManufacturer(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionModel(THandle aProvider, CallbackProduct4Model aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionModel(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionProduct(THandle aProvider, CallbackProduct4Product aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionProduct(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionStandby(THandle aProvider, CallbackProduct4Standby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionStandbyTransitioning(THandle aProvider, CallbackProduct4StandbyTransitioning aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionStandbyTransitioning(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSetStandby(THandle aProvider, CallbackProduct4SetStandby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSetStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSourceCount(THandle aProvider, CallbackProduct4SourceCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSourceCount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSourceXml(THandle aProvider, CallbackProduct4SourceXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSourceXml(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSourceIndex(THandle aProvider, CallbackProduct4SourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSetSourceIndex(THandle aProvider, CallbackProduct4SetSourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSetSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSetSourceIndexByName(THandle aProvider, CallbackProduct4SetSourceIndexByName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSetSourceIndexByName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSetSourceBySystemName(THandle aProvider, CallbackProduct4SetSourceBySystemName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSetSourceBySystemName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSource(THandle aProvider, CallbackProduct4Source aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSource(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionAttributes(THandle aProvider, CallbackProduct4Attributes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionAttributes(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionSourceXmlChangeCount(THandle aProvider, CallbackProduct4SourceXmlChangeCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionSourceXmlChangeCount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnableActionGetImageUri(THandle aProvider, CallbackProduct4GetImageUri aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnableActionGetImageUri(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyManufacturerName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyManufacturerName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyManufacturerName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyManufacturerName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyManufacturerInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyManufacturerInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyManufacturerInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyManufacturerInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyManufacturerUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyManufacturerUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyManufacturerUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyManufacturerUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyManufacturerImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyManufacturerImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyManufacturerImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyManufacturerImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyModelName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyModelName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyModelName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyModelName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyModelInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyModelInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyModelInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyModelInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyModelUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyModelUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyModelUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyModelUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyModelImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyModelImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyModelImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyModelImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductRoom(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductRoom(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductRoom(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductRoom(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyProductImageHiresUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyProductImageHiresUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyProductImageHiresUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyProductImageHiresUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyStandby(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyStandby((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyStandby(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyStandby(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyStandbyTransitioning(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyStandbyTransitioning((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyStandbyTransitioning(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyStandbyTransitioning(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertySourceIndex(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertySourceIndex(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertySourceIndex(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertySourceIndex(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertySourceCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertySourceCount(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertySourceCount(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertySourceCount(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertySourceXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertySourceXml(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertySourceXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertySourceXml(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct4SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->SetPropertyAttributes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct4GetPropertyAttributes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->GetPropertyAttributes(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyManufacturerName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyManufacturerName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyManufacturerInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyManufacturerInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyManufacturerUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyManufacturerUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyManufacturerImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyManufacturerImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyModelName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyModelName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyModelInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyModelInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyModelUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyModelUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyModelImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyModelImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductRoom(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductRoom();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyProductImageHiresUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyProductImageHiresUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyStandby(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyStandby();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyStandbyTransitioning(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyStandbyTransitioning();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertySourceIndex(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertySourceIndex();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertySourceCount(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertySourceCount();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertySourceXml(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertySourceXml();
}

void STDCALL DvProviderAvOpenhomeOrgProduct4EnablePropertyAttributes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct4C*>(aProvider)->EnablePropertyAttributes();
}

