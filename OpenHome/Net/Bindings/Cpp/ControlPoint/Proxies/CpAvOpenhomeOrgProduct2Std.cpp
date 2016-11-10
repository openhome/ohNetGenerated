#include "CpAvOpenhomeOrgProduct2.h"
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


class SyncManufacturerAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncManufacturerAvOpenhomeOrgProduct2Cpp::SyncManufacturerAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncModelAvOpenhomeOrgProduct2Cpp::SyncModelAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iRoom;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncProductAvOpenhomeOrgProduct2Cpp::SyncProductAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri);
}


class SyncStandbyAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, bool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    bool& iValue;
};

SyncStandbyAvOpenhomeOrgProduct2Cpp::SyncStandbyAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, bool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}


class SyncSetStandbyAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetStandbyAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
};

SyncSetStandbyAvOpenhomeOrgProduct2Cpp::SyncSetStandbyAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}


class SyncSourceCountAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceCountAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    uint32_t& iValue;
};

SyncSourceCountAvOpenhomeOrgProduct2Cpp::SyncSourceCountAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}


class SyncSourceXmlAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iValue;
};

SyncSourceXmlAvOpenhomeOrgProduct2Cpp::SyncSourceXmlAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}


class SyncSourceIndexAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceIndexAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    uint32_t& iValue;
};

SyncSourceIndexAvOpenhomeOrgProduct2Cpp::SyncSourceIndexAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}


class SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
};

SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp::SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}


class SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
};

SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp::SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}


class SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
};

SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp::SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}


class SyncSourceAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iSystemName;
    std::string& iType;
    std::string& iName;
    bool& iVisible;
};

SyncSourceAvOpenhomeOrgProduct2Cpp::SyncSourceAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}


class SyncAttributesAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    std::string& iValue;
};

SyncAttributesAvOpenhomeOrgProduct2Cpp::SyncAttributesAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp() {}
private:
    CpProxyAvOpenhomeOrgProduct2Cpp& iService;
    uint32_t& iValue;
};

SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp::SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp(CpProxyAvOpenhomeOrgProduct2Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}


CpProxyAvOpenhomeOrgProduct2Cpp::CpProxyAvOpenhomeOrgProduct2Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "Product", 2, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2Cpp::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct2Cpp::~CpProxyAvOpenhomeOrgProduct2Cpp()
{
    DestroyService();
    delete iActionManufacturer;
    delete iActionModel;
    delete iActionProduct;
    delete iActionStandby;
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncManufacturer(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct2Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndManufacturer(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncModel(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct2Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndModel(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncProduct(std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncProductAvOpenhomeOrgProduct2Cpp sync(*this, aRoom, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginProduct(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndProduct(IAsync& aAsync, std::string& aRoom, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncStandby(bool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndStandby(IAsync& aAsync, bool& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSetStandby(bool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct2Cpp sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSetStandby(bool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSetStandby(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSourceCount(uint32_t& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSourceCount(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSourceXml(std::string& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSourceXml(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSourceIndex(uint32_t& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSourceIndex(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSetSourceIndex(uint32_t aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct2Cpp sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSetSourceIndex(uint32_t aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSetSourceIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSetSourceIndexByName(const std::string& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct2Cpp sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSetSourceIndexByName(const std::string& aValue, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSetSourceIndexByName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSetSourceBySystemName(const std::string& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct2Cpp sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSetSourceBySystemName(const std::string& aValue, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSetSourceBySystemName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSource(uint32_t aIndex, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct2Cpp sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSource(uint32_t aIndex, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSource(IAsync& aAsync, std::string& aSystemName, std::string& aType, std::string& aName, bool& aVisible)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncAttributes(std::string& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndAttributes(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SyncSourceXmlChangeCount(uint32_t& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct2Cpp sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::EndSourceXmlChangeCount(IAsync& aAsync, uint32_t& aValue)
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

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductRoomChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iStandbyChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceIndexChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iSourceXmlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyManufacturerName(std::string& aManufacturerName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerName->Value();
    aManufacturerName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyManufacturerInfo(std::string& aManufacturerInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerInfo->Value();
    aManufacturerInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyManufacturerUrl(std::string& aManufacturerUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerUrl->Value();
    aManufacturerUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyManufacturerImageUri(std::string& aManufacturerImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerImageUri->Value();
    aManufacturerImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyModelName(std::string& aModelName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelName->Value();
    aModelName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyModelInfo(std::string& aModelInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelInfo->Value();
    aModelInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyModelUrl(std::string& aModelUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelUrl->Value();
    aModelUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyModelImageUri(std::string& aModelImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelImageUri->Value();
    aModelImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyProductRoom(std::string& aProductRoom) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductRoom->Value();
    aProductRoom.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyProductName(std::string& aProductName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductName->Value();
    aProductName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyProductInfo(std::string& aProductInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductInfo->Value();
    aProductInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyProductUrl(std::string& aProductUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductUrl->Value();
    aProductUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyProductImageUri(std::string& aProductImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductImageUri->Value();
    aProductImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyStandby(bool& aStandby) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertySourceIndex(uint32_t& aSourceIndex) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertySourceCount(uint32_t& aSourceCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertySourceXml(std::string& aSourceXml) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iSourceXml->Value();
    aSourceXml.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::PropertyAttributes(std::string& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAttributes->Value();
    aAttributes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgProduct2Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgProduct2Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgProduct2Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgProduct2Cpp::Version() const
{
  return iCpProxy.Version();
}

