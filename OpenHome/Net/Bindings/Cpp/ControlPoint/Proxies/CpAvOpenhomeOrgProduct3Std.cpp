#include "CpAvOpenhomeOrgProduct3.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Net/Cpp/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

#include <string>

using namespace OpenHome;
using namespace OpenHome::Net;


class SyncManufacturerAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncManufacturerAvOpenhomeOrgProduct3Cpp::SyncManufacturerAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncModelAvOpenhomeOrgProduct3Cpp::SyncModelAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iRoom;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncProductAvOpenhomeOrgProduct3Cpp::SyncProductAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri);
}


class SyncStandbyAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    bool& iValue;
};

SyncStandbyAvOpenhomeOrgProduct3Cpp::SyncStandbyAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}


class SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    bool& iValue;
};

SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp::SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandbyTransitioning(aAsync, iValue);
}


class SyncSetStandbyAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetStandbyAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
};

SyncSetStandbyAvOpenhomeOrgProduct3Cpp::SyncSetStandbyAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}


class SyncSourceCountAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceCountAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    uint32_t& iValue;
};

SyncSourceCountAvOpenhomeOrgProduct3Cpp::SyncSourceCountAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}


class SyncSourceXmlAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iValue;
};

SyncSourceXmlAvOpenhomeOrgProduct3Cpp::SyncSourceXmlAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}


class SyncSourceIndexAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceIndexAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    uint32_t& iValue;
};

SyncSourceIndexAvOpenhomeOrgProduct3Cpp::SyncSourceIndexAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}


class SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
};

SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp::SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}


class SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
};

SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp::SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}


class SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
};

SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp::SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}


class SyncSourceAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iSystemName;
    std::string& iType;
    std::string& iName;
    bool& iVisible;
};

SyncSourceAvOpenhomeOrgProduct3Cpp::SyncSourceAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}


class SyncAttributesAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    std::string& iValue;
};

SyncAttributesAvOpenhomeOrgProduct3Cpp::SyncAttributesAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct3Cpp& iService;
    uint32_t& iValue;
};

SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp::SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp(CpProxyAvOpenhomeOrgProduct3Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}


CpProxyAvOpenhomeOrgProduct3Cpp::CpProxyAvOpenhomeOrgProduct3Cpp(CpDeviceCpp& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::StandbyTransitioningPropertyChanged);
    iStandbyTransitioning = new PropertyBool("StandbyTransitioning", functor);
    AddProperty(iStandbyTransitioning);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3Cpp::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct3Cpp::~CpProxyAvOpenhomeOrgProduct3Cpp()
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncManufacturer(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct3Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::EndManufacturer(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUrl.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aImageUri.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncModel(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct3Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::EndModel(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUrl.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aImageUri.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncProduct(std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncProductAvOpenhomeOrgProduct3Cpp sync(*this, aRoom, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginProduct(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::EndProduct(IAsync& aAsync, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aRoom.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aInfo.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aUrl.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aImageUri.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncStandby(bool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndStandby(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncStandbyTransitioning(bool& aValue)
{
    SyncStandbyTransitioningAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginStandbyTransitioning(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginStandbyTransitioning(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStandbyTransitioning, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandbyTransitioning->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndStandbyTransitioning(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSetStandby(bool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct3Cpp sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSetStandby(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSetStandby(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSourceCount(uint32_t& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSourceCount(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSourceXml(std::string& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSourceXml(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSourceIndex(uint32_t& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSourceIndex(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSetSourceIndex(uint32_t aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct3Cpp sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSetSourceIndex(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSetSourceIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSetSourceIndexByName(const std::string& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3Cpp sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSetSourceIndexByName(const std::string& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceIndexByName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndexByName->InputParameters();
    {
        Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSetSourceIndexByName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSetSourceBySystemName(const std::string& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3Cpp sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSetSourceBySystemName(const std::string& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceBySystemName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceBySystemName->InputParameters();
    {
        Brn buf((const TByte*)aValue.c_str(), (TUint)aValue.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSetSourceBySystemName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSource(uint32_t aIndex, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct3Cpp sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSource(uint32_t aIndex, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSource(IAsync& aAsync, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aSystemName.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aType.assign((const char*)val.Ptr(), val.Bytes());
    }
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aName.assign((const char*)val.Ptr(), val.Bytes());
    }
    aVisible = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncAttributes(std::string& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndAttributes(IAsync& aAsync, std::string& aValue)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aValue.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SyncSourceXmlChangeCount(uint32_t& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3Cpp sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::EndSourceXmlChangeCount(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductRoomChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStandbyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyStandbyTransitioningChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStandbyTransitioningChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceIndexChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyManufacturerName(std::string& aManufacturerName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerName->Value();
    aManufacturerName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyManufacturerInfo(std::string& aManufacturerInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerInfo->Value();
    aManufacturerInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyManufacturerUrl(std::string& aManufacturerUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerUrl->Value();
    aManufacturerUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyManufacturerImageUri(std::string& aManufacturerImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerImageUri->Value();
    aManufacturerImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyModelName(std::string& aModelName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelName->Value();
    aModelName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyModelInfo(std::string& aModelInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelInfo->Value();
    aModelInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyModelUrl(std::string& aModelUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelUrl->Value();
    aModelUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyModelImageUri(std::string& aModelImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelImageUri->Value();
    aModelImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyProductRoom(std::string& aProductRoom) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductRoom->Value();
    aProductRoom.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyProductName(std::string& aProductName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductName->Value();
    aProductName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyProductInfo(std::string& aProductInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductInfo->Value();
    aProductInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyProductUrl(std::string& aProductUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductUrl->Value();
    aProductUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyProductImageUri(std::string& aProductImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductImageUri->Value();
    aProductImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyStandby(bool& aStandby) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyStandbyTransitioning(bool& aStandbyTransitioning) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStandbyTransitioning = iStandbyTransitioning->Value();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertySourceIndex(uint32_t& aSourceIndex) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertySourceCount(uint32_t& aSourceCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertySourceXml(std::string& aSourceXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSourceXml->Value();
    aSourceXml.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::PropertyAttributes(std::string& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAttributes->Value();
    aAttributes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::StandbyTransitioningPropertyChanged()
{
    ReportEvent(iStandbyTransitioningChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgProduct3Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgProduct3Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgProduct3Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgProduct3Cpp::Version() const
{
  return iCpProxy.Version();
}

