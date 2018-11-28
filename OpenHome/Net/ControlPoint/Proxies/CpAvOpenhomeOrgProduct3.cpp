#include "CpAvOpenhomeOrgProduct3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncManufacturerAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncModelAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncProductAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iRoom;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncStandbyAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    TBool& iValue;
};

class SyncStandbyTransitioningAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncStandbyTransitioningAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    TBool& iValue;
};

class SyncSetStandbyAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
};

class SyncSourceCountAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    TUint& iValue;
};

class SyncSourceXmlAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iValue;
};

class SyncSourceIndexAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    TUint& iValue;
};

class SyncSetSourceIndexAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
};

class SyncSetSourceIndexByNameAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
};

class SyncSetSourceBySystemNameAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
};

class SyncSourceAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iSystemName;
    Brh& iType;
    Brh& iName;
    TBool& iVisible;
};

class SyncAttributesAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    Brh& iValue;
};

class SyncSourceXmlChangeCountAvOpenhomeOrgProduct3 : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgProduct3& iService;
    TUint& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncManufacturerAvOpenhomeOrgProduct3

SyncManufacturerAvOpenhomeOrgProduct3::SyncManufacturerAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}

// SyncModelAvOpenhomeOrgProduct3

SyncModelAvOpenhomeOrgProduct3::SyncModelAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}

// SyncProductAvOpenhomeOrgProduct3

SyncProductAvOpenhomeOrgProduct3::SyncProductAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri);
}

// SyncStandbyAvOpenhomeOrgProduct3

SyncStandbyAvOpenhomeOrgProduct3::SyncStandbyAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}

// SyncStandbyTransitioningAvOpenhomeOrgProduct3

SyncStandbyTransitioningAvOpenhomeOrgProduct3::SyncStandbyTransitioningAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyTransitioningAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandbyTransitioning(aAsync, iValue);
}

// SyncSetStandbyAvOpenhomeOrgProduct3

SyncSetStandbyAvOpenhomeOrgProduct3::SyncSetStandbyAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}

// SyncSourceCountAvOpenhomeOrgProduct3

SyncSourceCountAvOpenhomeOrgProduct3::SyncSourceCountAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}

// SyncSourceXmlAvOpenhomeOrgProduct3

SyncSourceXmlAvOpenhomeOrgProduct3::SyncSourceXmlAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}

// SyncSourceIndexAvOpenhomeOrgProduct3

SyncSourceIndexAvOpenhomeOrgProduct3::SyncSourceIndexAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}

// SyncSetSourceIndexAvOpenhomeOrgProduct3

SyncSetSourceIndexAvOpenhomeOrgProduct3::SyncSetSourceIndexAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}

// SyncSetSourceIndexByNameAvOpenhomeOrgProduct3

SyncSetSourceIndexByNameAvOpenhomeOrgProduct3::SyncSetSourceIndexByNameAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}

// SyncSetSourceBySystemNameAvOpenhomeOrgProduct3

SyncSetSourceBySystemNameAvOpenhomeOrgProduct3::SyncSetSourceBySystemNameAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}

// SyncSourceAvOpenhomeOrgProduct3

SyncSourceAvOpenhomeOrgProduct3::SyncSourceAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}

// SyncAttributesAvOpenhomeOrgProduct3

SyncAttributesAvOpenhomeOrgProduct3::SyncAttributesAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}

// SyncSourceXmlChangeCountAvOpenhomeOrgProduct3

SyncSourceXmlChangeCountAvOpenhomeOrgProduct3::SyncSourceXmlChangeCountAvOpenhomeOrgProduct3(CpProxyAvOpenhomeOrgProduct3& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct3::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgProduct3

CpProxyAvOpenhomeOrgProduct3::CpProxyAvOpenhomeOrgProduct3(CpDevice& aDevice)
    : iCpProxy("av-openhome-org", "Product", 3, aDevice.Device())
{
    OpenHome::Net::Parameter* param;

    iActionManufacturer = new Action("Manufacturer");
    param = new OpenHome::Net::ParameterString("Name");
    iActionManufacturer->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Info");
    iActionManufacturer->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Url");
    iActionManufacturer->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("ImageUri");
    iActionManufacturer->AddOutputParameter(param);

    iActionModel = new Action("Model");
    param = new OpenHome::Net::ParameterString("Name");
    iActionModel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Info");
    iActionModel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Url");
    iActionModel->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("ImageUri");
    iActionModel->AddOutputParameter(param);

    iActionProduct = new Action("Product");
    param = new OpenHome::Net::ParameterString("Room");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Name");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Info");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Url");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("ImageUri");
    iActionProduct->AddOutputParameter(param);

    iActionStandby = new Action("Standby");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionStandby->AddOutputParameter(param);

    iActionStandbyTransitioning = new Action("StandbyTransitioning");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionStandbyTransitioning->AddOutputParameter(param);

    iActionSetStandby = new Action("SetStandby");
    param = new OpenHome::Net::ParameterBool("Value");
    iActionSetStandby->AddInputParameter(param);

    iActionSourceCount = new Action("SourceCount");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSourceCount->AddOutputParameter(param);

    iActionSourceXml = new Action("SourceXml");
    param = new OpenHome::Net::ParameterString("Value");
    iActionSourceXml->AddOutputParameter(param);

    iActionSourceIndex = new Action("SourceIndex");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSourceIndex->AddOutputParameter(param);

    iActionSetSourceIndex = new Action("SetSourceIndex");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSetSourceIndex->AddInputParameter(param);

    iActionSetSourceIndexByName = new Action("SetSourceIndexByName");
    param = new OpenHome::Net::ParameterString("Value");
    iActionSetSourceIndexByName->AddInputParameter(param);

    iActionSetSourceBySystemName = new Action("SetSourceBySystemName");
    param = new OpenHome::Net::ParameterString("Value");
    iActionSetSourceBySystemName->AddInputParameter(param);

    iActionSource = new Action("Source");
    param = new OpenHome::Net::ParameterUint("Index");
    iActionSource->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("SystemName");
    iActionSource->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Type");
    iActionSource->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Name");
    iActionSource->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterBool("Visible");
    iActionSource->AddOutputParameter(param);

    iActionAttributes = new Action("Attributes");
    param = new OpenHome::Net::ParameterString("Value");
    iActionAttributes->AddOutputParameter(param);

    iActionSourceXmlChangeCount = new Action("SourceXmlChangeCount");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionSourceXmlChangeCount->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::StandbyTransitioningPropertyChanged);
    iStandbyTransitioning = new PropertyBool("StandbyTransitioning", functor);
    AddProperty(iStandbyTransitioning);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct3::~CpProxyAvOpenhomeOrgProduct3()
{
    DestroyService();
    delete iActionManufacturer;
    delete iActionModel;
    delete iActionProduct;
    delete iActionStandby;
    delete iActionStandbyTransitioning;
    delete iActionSetStandby;
    delete iActionSourceCount;
    delete iActionSourceXml;
    delete iActionSourceIndex;
    delete iActionSetSourceIndex;
    delete iActionSetSourceIndexByName;
    delete iActionSetSourceBySystemName;
    delete iActionSource;
    delete iActionAttributes;
    delete iActionSourceXmlChangeCount;
}

void CpProxyAvOpenhomeOrgProduct3::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct3 sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginManufacturer(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionManufacturer, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionManufacturer->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Manufacturer"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUrl);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageUri);
}

void CpProxyAvOpenhomeOrgProduct3::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct3 sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginModel(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionModel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModel->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Model"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUrl);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageUri);
}

void CpProxyAvOpenhomeOrgProduct3::SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncProductAvOpenhomeOrgProduct3 sync(*this, aRoom, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginProduct(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProduct, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProduct->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Product"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aRoom);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUrl);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageUri);
}

void CpProxyAvOpenhomeOrgProduct3::SyncStandby(TBool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndStandby(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Standby"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SyncStandbyTransitioning(TBool& aValue)
{
    SyncStandbyTransitioningAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginStandbyTransitioning(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginStandbyTransitioning(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStandbyTransitioning, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandbyTransitioning->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndStandbyTransitioning(IAsync& aAsync, TBool& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("StandbyTransitioning"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SyncSetStandby(TBool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct3 sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSetStandby(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSetStandby(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetStandby"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgProduct3::SyncSourceCount(TUint& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSourceCount(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SourceCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SyncSourceXml(Brh& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSourceXml(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SourceXml"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgProduct3::SyncSourceIndex(TUint& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSourceIndex(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SourceIndex"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SyncSetSourceIndex(TUint aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct3 sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSetSourceIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSetSourceIndex(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSourceIndex"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgProduct3::SyncSetSourceIndexByName(const Brx& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3 sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSetSourceIndexByName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceIndexByName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndexByName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSetSourceIndexByName(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSourceIndexByName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgProduct3::SyncSetSourceBySystemName(const Brx& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3 sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSetSourceBySystemName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceBySystemName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceBySystemName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSetSourceBySystemName(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetSourceBySystemName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyAvOpenhomeOrgProduct3::SyncSource(TUint aIndex, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct3 sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSource(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSource->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSource->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSource(IAsync& aAsync, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Source"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aSystemName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aType);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    aVisible = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndAttributes(IAsync& aAsync, Brh& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Attributes"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aValue);
}

void CpProxyAvOpenhomeOrgProduct3::SyncSourceXmlChangeCount(TUint& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3 sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3::EndSourceXmlChangeCount(IAsync& aAsync, TUint& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SourceXmlChangeCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductRoomChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStandbyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyStandbyTransitioningChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStandbyTransitioningChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceIndexChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyProductRoom(Brhz& aProductRoom) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductRoom.Set(iProductRoom->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyStandby(TBool& aStandby) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct3::PropertyStandbyTransitioning(TBool& aStandbyTransitioning) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStandbyTransitioning = iStandbyTransitioning->Value();
}

void CpProxyAvOpenhomeOrgProduct3::PropertySourceIndex(TUint& aSourceIndex) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct3::PropertySourceCount(TUint& aSourceCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct3::PropertySourceXml(Brhz& aSourceXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceXml.Set(iSourceXml->Value());
}

void CpProxyAvOpenhomeOrgProduct3::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgProduct3::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct3::StandbyTransitioningPropertyChanged()
{
    ReportEvent(iStandbyTransitioningChanged);
}

void CpProxyAvOpenhomeOrgProduct3::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct3::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct3::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct3::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


void CpProxyAvOpenhomeOrgProduct3::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgProduct3::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgProduct3::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgProduct3::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgProduct3::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgProduct3::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgProduct3::Version() const
{
  return iCpProxy.Version();
}


