#include "CpAvOpenhomeOrgMediaServer1.h"
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


class SyncManufacturerAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncManufacturerAvOpenhomeOrgMediaServer1Cpp::SyncManufacturerAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncModelAvOpenhomeOrgMediaServer1Cpp::SyncModelAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    std::string& iName;
    std::string& iInfo;
    std::string& iUrl;
    std::string& iImageUri;
};

SyncProductAvOpenhomeOrgMediaServer1Cpp::SyncProductAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncAttributesAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    std::string& iValue;
};

SyncAttributesAvOpenhomeOrgMediaServer1Cpp::SyncAttributesAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, std::string& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncQueryPortAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncQueryPortAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncQueryPortAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    uint32_t& iValue;
};

SyncQueryPortAvOpenhomeOrgMediaServer1Cpp::SyncQueryPortAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncQueryPortAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndQueryPort(aAsync, iValue);
}


class SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    uint32_t& iValue;
};

SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp::SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBrowsePort(aAsync, iValue);
}


class SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp : public SyncProxyAction
{
public:
    SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp() {}
private:
    CpProxyAvOpenhomeOrgMediaServer1Cpp& iService;
    uint32_t& iValue;
};

SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp::SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp(CpProxyAvOpenhomeOrgMediaServer1Cpp& aProxy, uint32_t& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateCount(aAsync, iValue);
}


CpProxyAvOpenhomeOrgMediaServer1Cpp::CpProxyAvOpenhomeOrgMediaServer1Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("av-openhome-org", "MediaServer", 1, aDevice.Device())
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
    param = new OpenHome::Net::ParameterString("Name");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Info");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("Url");
    iActionProduct->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("ImageUri");
    iActionProduct->AddOutputParameter(param);

    iActionAttributes = new Action("Attributes");
    param = new OpenHome::Net::ParameterString("Value");
    iActionAttributes->AddOutputParameter(param);

    iActionQueryPort = new Action("QueryPort");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionQueryPort->AddOutputParameter(param);

    iActionBrowsePort = new Action("BrowsePort");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionBrowsePort->AddOutputParameter(param);

    iActionUpdateCount = new Action("UpdateCount");
    param = new OpenHome::Net::ParameterUint("Value");
    iActionUpdateCount->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::QueryPortPropertyChanged);
    iQueryPort = new PropertyUint("QueryPort", functor);
    AddProperty(iQueryPort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::BrowsePortPropertyChanged);
    iBrowsePort = new PropertyUint("BrowsePort", functor);
    AddProperty(iBrowsePort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1Cpp::UpdateCountPropertyChanged);
    iUpdateCount = new PropertyUint("UpdateCount", functor);
    AddProperty(iUpdateCount);
}

CpProxyAvOpenhomeOrgMediaServer1Cpp::~CpProxyAvOpenhomeOrgMediaServer1Cpp()
{
    DestroyService();
    delete iActionManufacturer;
    delete iActionModel;
    delete iActionProduct;
    delete iActionAttributes;
    delete iActionQueryPort;
    delete iActionBrowsePort;
    delete iActionUpdateCount;
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncManufacturer(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgMediaServer1Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndManufacturer(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncModel(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncModelAvOpenhomeOrgMediaServer1Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndModel(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncProduct(std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
{
    SyncProductAvOpenhomeOrgMediaServer1Cpp sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginProduct(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProduct, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProduct->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndProduct(IAsync& aAsync, std::string& aName, std::string& aInfo, std::string& aUrl, std::string& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncAttributes(std::string& aValue)
{
    SyncAttributesAvOpenhomeOrgMediaServer1Cpp sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndAttributes(IAsync& aAsync, std::string& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncQueryPort(uint32_t& aValue)
{
    SyncQueryPortAvOpenhomeOrgMediaServer1Cpp sync(*this, aValue);
    BeginQueryPort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginQueryPort(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionQueryPort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQueryPort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndQueryPort(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("QueryPort"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncBrowsePort(uint32_t& aValue)
{
    SyncBrowsePortAvOpenhomeOrgMediaServer1Cpp sync(*this, aValue);
    BeginBrowsePort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginBrowsePort(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBrowsePort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBrowsePort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndBrowsePort(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BrowsePort"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SyncUpdateCount(uint32_t& aValue)
{
    SyncUpdateCountAvOpenhomeOrgMediaServer1Cpp sync(*this, aValue);
    BeginUpdateCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BeginUpdateCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUpdateCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::EndUpdateCount(IAsync& aAsync, uint32_t& aValue)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("UpdateCount"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aValue = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyQueryPortChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iQueryPortChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyBrowsePortChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBrowsePortChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyUpdateCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyManufacturerName(std::string& aManufacturerName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerName->Value();
    aManufacturerName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyManufacturerInfo(std::string& aManufacturerInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerInfo->Value();
    aManufacturerInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyManufacturerUrl(std::string& aManufacturerUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerUrl->Value();
    aManufacturerUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyManufacturerImageUri(std::string& aManufacturerImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iManufacturerImageUri->Value();
    aManufacturerImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyModelName(std::string& aModelName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelName->Value();
    aModelName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyModelInfo(std::string& aModelInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelInfo->Value();
    aModelInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyModelUrl(std::string& aModelUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelUrl->Value();
    aModelUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyModelImageUri(std::string& aModelImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iModelImageUri->Value();
    aModelImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyProductName(std::string& aProductName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductName->Value();
    aProductName.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyProductInfo(std::string& aProductInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductInfo->Value();
    aProductInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyProductUrl(std::string& aProductUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductUrl->Value();
    aProductUrl.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyProductImageUri(std::string& aProductImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iProductImageUri->Value();
    aProductImageUri.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyAttributes(std::string& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iAttributes->Value();
    aAttributes.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyQueryPort(uint32_t& aQueryPort) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aQueryPort = iQueryPort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyBrowsePort(uint32_t& aBrowsePort) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBrowsePort = iBrowsePort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::PropertyUpdateCount(uint32_t& aUpdateCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateCount = iUpdateCount->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::QueryPortPropertyChanged()
{
    ReportEvent(iQueryPortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::BrowsePortPropertyChanged()
{
    ReportEvent(iBrowsePortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::UpdateCountPropertyChanged()
{
    ReportEvent(iUpdateCountChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMediaServer1Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMediaServer1Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMediaServer1Cpp::Version() const
{
  return iCpProxy.Version();
}

