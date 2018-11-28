#include "DvAvOpenhomeOrgProduct3.h"
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

class DvProviderAvOpenhomeOrgProduct3C : public DvProvider
{
public:
    DvProviderAvOpenhomeOrgProduct3C(DvDeviceC aDevice);
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
    void EnablePropertyStandby();
    void EnablePropertyStandbyTransitioning();
    void EnablePropertySourceIndex();
    void EnablePropertySourceCount();
    void EnablePropertySourceXml();
    void EnablePropertyAttributes();
    void EnableActionManufacturer(CallbackProduct3Manufacturer aCallback, void* aPtr);
    void EnableActionModel(CallbackProduct3Model aCallback, void* aPtr);
    void EnableActionProduct(CallbackProduct3Product aCallback, void* aPtr);
    void EnableActionStandby(CallbackProduct3Standby aCallback, void* aPtr);
    void EnableActionStandbyTransitioning(CallbackProduct3StandbyTransitioning aCallback, void* aPtr);
    void EnableActionSetStandby(CallbackProduct3SetStandby aCallback, void* aPtr);
    void EnableActionSourceCount(CallbackProduct3SourceCount aCallback, void* aPtr);
    void EnableActionSourceXml(CallbackProduct3SourceXml aCallback, void* aPtr);
    void EnableActionSourceIndex(CallbackProduct3SourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndex(CallbackProduct3SetSourceIndex aCallback, void* aPtr);
    void EnableActionSetSourceIndexByName(CallbackProduct3SetSourceIndexByName aCallback, void* aPtr);
    void EnableActionSetSourceBySystemName(CallbackProduct3SetSourceBySystemName aCallback, void* aPtr);
    void EnableActionSource(CallbackProduct3Source aCallback, void* aPtr);
    void EnableActionAttributes(CallbackProduct3Attributes aCallback, void* aPtr);
    void EnableActionSourceXmlChangeCount(CallbackProduct3SourceXmlChangeCount aCallback, void* aPtr);
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
private:
    CallbackProduct3Manufacturer iCallbackManufacturer;
    void* iPtrManufacturer;
    CallbackProduct3Model iCallbackModel;
    void* iPtrModel;
    CallbackProduct3Product iCallbackProduct;
    void* iPtrProduct;
    CallbackProduct3Standby iCallbackStandby;
    void* iPtrStandby;
    CallbackProduct3StandbyTransitioning iCallbackStandbyTransitioning;
    void* iPtrStandbyTransitioning;
    CallbackProduct3SetStandby iCallbackSetStandby;
    void* iPtrSetStandby;
    CallbackProduct3SourceCount iCallbackSourceCount;
    void* iPtrSourceCount;
    CallbackProduct3SourceXml iCallbackSourceXml;
    void* iPtrSourceXml;
    CallbackProduct3SourceIndex iCallbackSourceIndex;
    void* iPtrSourceIndex;
    CallbackProduct3SetSourceIndex iCallbackSetSourceIndex;
    void* iPtrSetSourceIndex;
    CallbackProduct3SetSourceIndexByName iCallbackSetSourceIndexByName;
    void* iPtrSetSourceIndexByName;
    CallbackProduct3SetSourceBySystemName iCallbackSetSourceBySystemName;
    void* iPtrSetSourceBySystemName;
    CallbackProduct3Source iCallbackSource;
    void* iPtrSource;
    CallbackProduct3Attributes iCallbackAttributes;
    void* iPtrAttributes;
    CallbackProduct3SourceXmlChangeCount iCallbackSourceXmlChangeCount;
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
    PropertyBool* iPropertyStandbyTransitioning;
    PropertyUint* iPropertySourceIndex;
    PropertyUint* iPropertySourceCount;
    PropertyString* iPropertySourceXml;
    PropertyString* iPropertyAttributes;
};

DvProviderAvOpenhomeOrgProduct3C::DvProviderAvOpenhomeOrgProduct3C(DvDeviceC aDevice)
    : DvProvider(DviDeviceC::DeviceFromHandle(aDevice)->Device(), "av.openhome.org", "Product", 3)
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

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyManufacturerName(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    return SetPropertyString(*iPropertyManufacturerName, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyManufacturerName(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerName != NULL);
    aValue.Set(iPropertyManufacturerName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyManufacturerInfo(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    return SetPropertyString(*iPropertyManufacturerInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyManufacturerInfo(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerInfo != NULL);
    aValue.Set(iPropertyManufacturerInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyManufacturerUrl(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    return SetPropertyString(*iPropertyManufacturerUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyManufacturerUrl(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerUrl != NULL);
    aValue.Set(iPropertyManufacturerUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyManufacturerImageUri(const Brx& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    return SetPropertyString(*iPropertyManufacturerImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyManufacturerImageUri(Brhz& aValue)
{
    ASSERT(iPropertyManufacturerImageUri != NULL);
    aValue.Set(iPropertyManufacturerImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyModelName(const Brx& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    return SetPropertyString(*iPropertyModelName, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyModelName(Brhz& aValue)
{
    ASSERT(iPropertyModelName != NULL);
    aValue.Set(iPropertyModelName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyModelInfo(const Brx& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    return SetPropertyString(*iPropertyModelInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyModelInfo(Brhz& aValue)
{
    ASSERT(iPropertyModelInfo != NULL);
    aValue.Set(iPropertyModelInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyModelUrl(const Brx& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    return SetPropertyString(*iPropertyModelUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyModelUrl(Brhz& aValue)
{
    ASSERT(iPropertyModelUrl != NULL);
    aValue.Set(iPropertyModelUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyModelImageUri(const Brx& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    return SetPropertyString(*iPropertyModelImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyModelImageUri(Brhz& aValue)
{
    ASSERT(iPropertyModelImageUri != NULL);
    aValue.Set(iPropertyModelImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyProductRoom(const Brx& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    return SetPropertyString(*iPropertyProductRoom, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyProductRoom(Brhz& aValue)
{
    ASSERT(iPropertyProductRoom != NULL);
    aValue.Set(iPropertyProductRoom->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyProductName(const Brx& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    return SetPropertyString(*iPropertyProductName, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyProductName(Brhz& aValue)
{
    ASSERT(iPropertyProductName != NULL);
    aValue.Set(iPropertyProductName->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyProductInfo(const Brx& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    return SetPropertyString(*iPropertyProductInfo, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyProductInfo(Brhz& aValue)
{
    ASSERT(iPropertyProductInfo != NULL);
    aValue.Set(iPropertyProductInfo->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyProductUrl(const Brx& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    return SetPropertyString(*iPropertyProductUrl, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyProductUrl(Brhz& aValue)
{
    ASSERT(iPropertyProductUrl != NULL);
    aValue.Set(iPropertyProductUrl->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyProductImageUri(const Brx& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    return SetPropertyString(*iPropertyProductImageUri, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyProductImageUri(Brhz& aValue)
{
    ASSERT(iPropertyProductImageUri != NULL);
    aValue.Set(iPropertyProductImageUri->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyStandby(TBool aValue)
{
    ASSERT(iPropertyStandby != NULL);
    return SetPropertyBool(*iPropertyStandby, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyStandby(TBool& aValue)
{
    ASSERT(iPropertyStandby != NULL);
    aValue = iPropertyStandby->Value();
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyStandbyTransitioning(TBool aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    return SetPropertyBool(*iPropertyStandbyTransitioning, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyStandbyTransitioning(TBool& aValue)
{
    ASSERT(iPropertyStandbyTransitioning != NULL);
    aValue = iPropertyStandbyTransitioning->Value();
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertySourceIndex(TUint aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    return SetPropertyUint(*iPropertySourceIndex, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertySourceIndex(TUint& aValue)
{
    ASSERT(iPropertySourceIndex != NULL);
    aValue = iPropertySourceIndex->Value();
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertySourceCount(TUint aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    return SetPropertyUint(*iPropertySourceCount, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertySourceCount(TUint& aValue)
{
    ASSERT(iPropertySourceCount != NULL);
    aValue = iPropertySourceCount->Value();
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertySourceXml(const Brx& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    return SetPropertyString(*iPropertySourceXml, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertySourceXml(Brhz& aValue)
{
    ASSERT(iPropertySourceXml != NULL);
    aValue.Set(iPropertySourceXml->Value());
}

TBool DvProviderAvOpenhomeOrgProduct3C::SetPropertyAttributes(const Brx& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    return SetPropertyString(*iPropertyAttributes, aValue);
}

void DvProviderAvOpenhomeOrgProduct3C::GetPropertyAttributes(Brhz& aValue)
{
    ASSERT(iPropertyAttributes != NULL);
    aValue.Set(iPropertyAttributes->Value());
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyManufacturerName()
{
    iPropertyManufacturerName = new PropertyString(new ParameterString("ManufacturerName"));
    iService->AddProperty(iPropertyManufacturerName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyManufacturerInfo()
{
    iPropertyManufacturerInfo = new PropertyString(new ParameterString("ManufacturerInfo"));
    iService->AddProperty(iPropertyManufacturerInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyManufacturerUrl()
{
    iPropertyManufacturerUrl = new PropertyString(new ParameterString("ManufacturerUrl"));
    iService->AddProperty(iPropertyManufacturerUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyManufacturerImageUri()
{
    iPropertyManufacturerImageUri = new PropertyString(new ParameterString("ManufacturerImageUri"));
    iService->AddProperty(iPropertyManufacturerImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyModelName()
{
    iPropertyModelName = new PropertyString(new ParameterString("ModelName"));
    iService->AddProperty(iPropertyModelName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyModelInfo()
{
    iPropertyModelInfo = new PropertyString(new ParameterString("ModelInfo"));
    iService->AddProperty(iPropertyModelInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyModelUrl()
{
    iPropertyModelUrl = new PropertyString(new ParameterString("ModelUrl"));
    iService->AddProperty(iPropertyModelUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyModelImageUri()
{
    iPropertyModelImageUri = new PropertyString(new ParameterString("ModelImageUri"));
    iService->AddProperty(iPropertyModelImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyProductRoom()
{
    iPropertyProductRoom = new PropertyString(new ParameterString("ProductRoom"));
    iService->AddProperty(iPropertyProductRoom); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyProductName()
{
    iPropertyProductName = new PropertyString(new ParameterString("ProductName"));
    iService->AddProperty(iPropertyProductName); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyProductInfo()
{
    iPropertyProductInfo = new PropertyString(new ParameterString("ProductInfo"));
    iService->AddProperty(iPropertyProductInfo); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyProductUrl()
{
    iPropertyProductUrl = new PropertyString(new ParameterString("ProductUrl"));
    iService->AddProperty(iPropertyProductUrl); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyProductImageUri()
{
    iPropertyProductImageUri = new PropertyString(new ParameterString("ProductImageUri"));
    iService->AddProperty(iPropertyProductImageUri); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyStandby()
{
    iPropertyStandby = new PropertyBool(new ParameterBool("Standby"));
    iService->AddProperty(iPropertyStandby); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyStandbyTransitioning()
{
    iPropertyStandbyTransitioning = new PropertyBool(new ParameterBool("StandbyTransitioning"));
    iService->AddProperty(iPropertyStandbyTransitioning); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertySourceIndex()
{
    iPropertySourceIndex = new PropertyUint(new ParameterUint("SourceIndex"));
    iService->AddProperty(iPropertySourceIndex); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertySourceCount()
{
    iPropertySourceCount = new PropertyUint(new ParameterUint("SourceCount"));
    iService->AddProperty(iPropertySourceCount); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertySourceXml()
{
    iPropertySourceXml = new PropertyString(new ParameterString("SourceXml"));
    iService->AddProperty(iPropertySourceXml); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnablePropertyAttributes()
{
    iPropertyAttributes = new PropertyString(new ParameterString("Attributes"));
    iService->AddProperty(iPropertyAttributes); // passes ownership
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionManufacturer(CallbackProduct3Manufacturer aCallback, void* aPtr)
{
    iCallbackManufacturer = aCallback;
    iPtrManufacturer = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Manufacturer");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyManufacturerName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyManufacturerInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyManufacturerUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyManufacturerImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoManufacturer);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionModel(CallbackProduct3Model aCallback, void* aPtr)
{
    iCallbackModel = aCallback;
    iPtrModel = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Model");
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyModelName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyModelInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyModelUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyModelImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoModel);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionProduct(CallbackProduct3Product aCallback, void* aPtr)
{
    iCallbackProduct = aCallback;
    iPtrProduct = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Product");
    action->AddOutputParameter(new ParameterRelated("Room", *iPropertyProductRoom));
    action->AddOutputParameter(new ParameterRelated("Name", *iPropertyProductName));
    action->AddOutputParameter(new ParameterRelated("Info", *iPropertyProductInfo));
    action->AddOutputParameter(new ParameterRelated("Url", *iPropertyProductUrl));
    action->AddOutputParameter(new ParameterRelated("ImageUri", *iPropertyProductImageUri));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoProduct);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionStandby(CallbackProduct3Standby aCallback, void* aPtr)
{
    iCallbackStandby = aCallback;
    iPtrStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Standby");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionStandbyTransitioning(CallbackProduct3StandbyTransitioning aCallback, void* aPtr)
{
    iCallbackStandbyTransitioning = aCallback;
    iPtrStandbyTransitioning = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("StandbyTransitioning");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyStandbyTransitioning));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoStandbyTransitioning);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSetStandby(CallbackProduct3SetStandby aCallback, void* aPtr)
{
    iCallbackSetStandby = aCallback;
    iPtrSetStandby = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetStandby");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertyStandby));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSetStandby);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSourceCount(CallbackProduct3SourceCount aCallback, void* aPtr)
{
    iCallbackSourceCount = aCallback;
    iPtrSourceCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceCount");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceCount));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSourceCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSourceXml(CallbackProduct3SourceXml aCallback, void* aPtr)
{
    iCallbackSourceXml = aCallback;
    iPtrSourceXml = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXml");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceXml));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSourceXml);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSourceIndex(CallbackProduct3SourceIndex aCallback, void* aPtr)
{
    iCallbackSourceIndex = aCallback;
    iPtrSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceIndex");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSetSourceIndex(CallbackProduct3SetSourceIndex aCallback, void* aPtr)
{
    iCallbackSetSourceIndex = aCallback;
    iPtrSetSourceIndex = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndex");
    action->AddInputParameter(new ParameterRelated("Value", *iPropertySourceIndex));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSetSourceIndex);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSetSourceIndexByName(CallbackProduct3SetSourceIndexByName aCallback, void* aPtr)
{
    iCallbackSetSourceIndexByName = aCallback;
    iPtrSetSourceIndexByName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceIndexByName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSetSourceIndexByName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSetSourceBySystemName(CallbackProduct3SetSourceBySystemName aCallback, void* aPtr)
{
    iCallbackSetSourceBySystemName = aCallback;
    iPtrSetSourceBySystemName = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SetSourceBySystemName");
    action->AddInputParameter(new ParameterString("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSetSourceBySystemName);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSource(CallbackProduct3Source aCallback, void* aPtr)
{
    iCallbackSource = aCallback;
    iPtrSource = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Source");
    action->AddInputParameter(new ParameterRelated("Index", *iPropertySourceIndex));
    action->AddOutputParameter(new ParameterString("SystemName"));
    action->AddOutputParameter(new ParameterString("Type"));
    action->AddOutputParameter(new ParameterString("Name"));
    action->AddOutputParameter(new ParameterBool("Visible"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSource);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionAttributes(CallbackProduct3Attributes aCallback, void* aPtr)
{
    iCallbackAttributes = aCallback;
    iPtrAttributes = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("Attributes");
    action->AddOutputParameter(new ParameterRelated("Value", *iPropertyAttributes));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoAttributes);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::EnableActionSourceXmlChangeCount(CallbackProduct3SourceXmlChangeCount aCallback, void* aPtr)
{
    iCallbackSourceXmlChangeCount = aCallback;
    iPtrSourceXmlChangeCount = aPtr;
    OpenHome::Net::Action* action = new OpenHome::Net::Action("SourceXmlChangeCount");
    action->AddOutputParameter(new ParameterUint("Value"));
    FunctorDviInvocation functor = MakeFunctorDviInvocation(*this, &DvProviderAvOpenhomeOrgProduct3C::DoSourceXmlChangeCount);
    iService->AddAction(action, functor);
}

void DvProviderAvOpenhomeOrgProduct3C::DoManufacturer(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoModel(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoProduct(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoStandby(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoStandbyTransitioning(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSetStandby(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSourceCount(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSourceXml(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSourceIndex(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSetSourceIndex(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSetSourceIndexByName(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSetSourceBySystemName(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSource(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoAttributes(IDviInvocation& aInvocation)
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

void DvProviderAvOpenhomeOrgProduct3C::DoSourceXmlChangeCount(IDviInvocation& aInvocation)
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



THandle STDCALL DvProviderAvOpenhomeOrgProduct3Create(DvDeviceC aDevice)
{
    return new DvProviderAvOpenhomeOrgProduct3C(aDevice);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3Destroy(THandle aProvider)
{
    delete reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionManufacturer(THandle aProvider, CallbackProduct3Manufacturer aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionManufacturer(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionModel(THandle aProvider, CallbackProduct3Model aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionModel(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionProduct(THandle aProvider, CallbackProduct3Product aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionProduct(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionStandby(THandle aProvider, CallbackProduct3Standby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionStandbyTransitioning(THandle aProvider, CallbackProduct3StandbyTransitioning aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionStandbyTransitioning(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetStandby(THandle aProvider, CallbackProduct3SetStandby aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSetStandby(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceCount(THandle aProvider, CallbackProduct3SourceCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSourceCount(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceXml(THandle aProvider, CallbackProduct3SourceXml aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSourceXml(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceIndex(THandle aProvider, CallbackProduct3SourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndex(THandle aProvider, CallbackProduct3SetSourceIndex aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSetSourceIndex(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceIndexByName(THandle aProvider, CallbackProduct3SetSourceIndexByName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSetSourceIndexByName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSetSourceBySystemName(THandle aProvider, CallbackProduct3SetSourceBySystemName aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSetSourceBySystemName(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSource(THandle aProvider, CallbackProduct3Source aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSource(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionAttributes(THandle aProvider, CallbackProduct3Attributes aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionAttributes(aCallback, aPtr);
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnableActionSourceXmlChangeCount(THandle aProvider, CallbackProduct3SourceXmlChangeCount aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnableActionSourceXmlChangeCount(aCallback, aPtr);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyManufacturerName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyManufacturerName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyManufacturerInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyManufacturerInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyManufacturerUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyManufacturerUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyManufacturerImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyManufacturerImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyManufacturerImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyManufacturerImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyModelName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyModelName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyModelInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyModelInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyModelUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyModelUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyModelImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyModelImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyModelImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyModelImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductRoom(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyProductRoom(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductRoom(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyProductRoom(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductName(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyProductName(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductName(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyProductName(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductInfo(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyProductInfo(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductInfo(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyProductInfo(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductUrl(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyProductUrl(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductUrl(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyProductUrl(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyProductImageUri(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyProductImageUri(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyProductImageUri(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyProductImageUri(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyStandby(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyStandby((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyStandby(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyStandby(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyStandbyTransitioning(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyStandbyTransitioning((aValue!=0))? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyStandbyTransitioning(THandle aProvider, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyStandbyTransitioning(val);
    *aValue = (val? 1 : 0);
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceIndex(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertySourceIndex(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceIndex(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertySourceIndex(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceCount(THandle aProvider, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertySourceCount(aValue)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceCount(THandle aProvider, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertySourceCount(val);
    *aValue = val;
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertySourceXml(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertySourceXml(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertySourceXml(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertySourceXml(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t STDCALL DvProviderAvOpenhomeOrgProduct3SetPropertyAttributes(THandle aProvider, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->SetPropertyAttributes(buf)? 1 : 0);
    return 0;
}

void STDCALL DvProviderAvOpenhomeOrgProduct3GetPropertyAttributes(THandle aProvider, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->GetPropertyAttributes(buf);
    *aValue = (char*)buf.Transfer();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyManufacturerName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyManufacturerInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyManufacturerUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyManufacturerImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyManufacturerImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyModelName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyModelInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyModelUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyModelImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyModelImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductRoom(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyProductRoom();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductName(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyProductName();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductInfo(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyProductInfo();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductUrl(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyProductUrl();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyProductImageUri(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyProductImageUri();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyStandby(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyStandby();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyStandbyTransitioning(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyStandbyTransitioning();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceIndex(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertySourceIndex();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceCount(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertySourceCount();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertySourceXml(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertySourceXml();
}

void STDCALL DvProviderAvOpenhomeOrgProduct3EnablePropertyAttributes(THandle aProvider)
{
    reinterpret_cast<DvProviderAvOpenhomeOrgProduct3C*>(aProvider)->EnablePropertyAttributes();
}

