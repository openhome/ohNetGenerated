#include "CpAvOpenhomeOrgMediaServer1.h"
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/C/CpProxyCPrivate.h>
#include <OpenHome/Net/Core/FunctorAsync.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>
#include <OpenHome/Exception.h>
#include <OpenHome/Functor.h>
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/CpiDevice.h>

using namespace OpenHome;
using namespace OpenHome::Net;

class CpProxyAvOpenhomeOrgMediaServer1C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgMediaServer1C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgMediaServer1C();
    //CpProxyAvOpenhomeOrgMediaServer1* Proxy() { return static_cast<CpProxyAvOpenhomeOrgMediaServer1*>(iProxy); }

    void SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginManufacturer(FunctorAsync& aFunctor);
    void EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginModel(FunctorAsync& aFunctor);
    void EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncProduct(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginProduct(FunctorAsync& aFunctor);
    void EndProduct(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncAttributes(Brh& aValue);
    void BeginAttributes(FunctorAsync& aFunctor);
    void EndAttributes(IAsync& aAsync, Brh& aValue);

    void SyncQueryPort(TUint& aValue);
    void BeginQueryPort(FunctorAsync& aFunctor);
    void EndQueryPort(IAsync& aAsync, TUint& aValue);

    void SyncBrowsePort(TUint& aValue);
    void BeginBrowsePort(FunctorAsync& aFunctor);
    void EndBrowsePort(IAsync& aAsync, TUint& aValue);

    void SyncUpdateCount(TUint& aValue);
    void BeginUpdateCount(FunctorAsync& aFunctor);
    void EndUpdateCount(IAsync& aAsync, TUint& aValue);

    void SetPropertyManufacturerNameChanged(Functor& aFunctor);
    void SetPropertyManufacturerInfoChanged(Functor& aFunctor);
    void SetPropertyManufacturerUrlChanged(Functor& aFunctor);
    void SetPropertyManufacturerImageUriChanged(Functor& aFunctor);
    void SetPropertyModelNameChanged(Functor& aFunctor);
    void SetPropertyModelInfoChanged(Functor& aFunctor);
    void SetPropertyModelUrlChanged(Functor& aFunctor);
    void SetPropertyModelImageUriChanged(Functor& aFunctor);
    void SetPropertyProductNameChanged(Functor& aFunctor);
    void SetPropertyProductInfoChanged(Functor& aFunctor);
    void SetPropertyProductUrlChanged(Functor& aFunctor);
    void SetPropertyProductImageUriChanged(Functor& aFunctor);
    void SetPropertyAttributesChanged(Functor& aFunctor);
    void SetPropertyQueryPortChanged(Functor& aFunctor);
    void SetPropertyBrowsePortChanged(Functor& aFunctor);
    void SetPropertyUpdateCountChanged(Functor& aFunctor);

    void PropertyManufacturerName(Brhz& aManufacturerName) const;
    void PropertyManufacturerInfo(Brhz& aManufacturerInfo) const;
    void PropertyManufacturerUrl(Brhz& aManufacturerUrl) const;
    void PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const;
    void PropertyModelName(Brhz& aModelName) const;
    void PropertyModelInfo(Brhz& aModelInfo) const;
    void PropertyModelUrl(Brhz& aModelUrl) const;
    void PropertyModelImageUri(Brhz& aModelImageUri) const;
    void PropertyProductName(Brhz& aProductName) const;
    void PropertyProductInfo(Brhz& aProductInfo) const;
    void PropertyProductUrl(Brhz& aProductUrl) const;
    void PropertyProductImageUri(Brhz& aProductImageUri) const;
    void PropertyAttributes(Brhz& aAttributes) const;
    void PropertyQueryPort(TUint& aQueryPort) const;
    void PropertyBrowsePort(TUint& aBrowsePort) const;
    void PropertyUpdateCount(TUint& aUpdateCount) const;
private:
    void ManufacturerNamePropertyChanged();
    void ManufacturerInfoPropertyChanged();
    void ManufacturerUrlPropertyChanged();
    void ManufacturerImageUriPropertyChanged();
    void ModelNamePropertyChanged();
    void ModelInfoPropertyChanged();
    void ModelUrlPropertyChanged();
    void ModelImageUriPropertyChanged();
    void ProductNamePropertyChanged();
    void ProductInfoPropertyChanged();
    void ProductUrlPropertyChanged();
    void ProductImageUriPropertyChanged();
    void AttributesPropertyChanged();
    void QueryPortPropertyChanged();
    void BrowsePortPropertyChanged();
    void UpdateCountPropertyChanged();
private:
    Mutex iLock;
    Action* iActionManufacturer;
    Action* iActionModel;
    Action* iActionProduct;
    Action* iActionAttributes;
    Action* iActionQueryPort;
    Action* iActionBrowsePort;
    Action* iActionUpdateCount;
    PropertyString* iManufacturerName;
    PropertyString* iManufacturerInfo;
    PropertyString* iManufacturerUrl;
    PropertyString* iManufacturerImageUri;
    PropertyString* iModelName;
    PropertyString* iModelInfo;
    PropertyString* iModelUrl;
    PropertyString* iModelImageUri;
    PropertyString* iProductName;
    PropertyString* iProductInfo;
    PropertyString* iProductUrl;
    PropertyString* iProductImageUri;
    PropertyString* iAttributes;
    PropertyUint* iQueryPort;
    PropertyUint* iBrowsePort;
    PropertyUint* iUpdateCount;
    Functor iManufacturerNameChanged;
    Functor iManufacturerInfoChanged;
    Functor iManufacturerUrlChanged;
    Functor iManufacturerImageUriChanged;
    Functor iModelNameChanged;
    Functor iModelInfoChanged;
    Functor iModelUrlChanged;
    Functor iModelImageUriChanged;
    Functor iProductNameChanged;
    Functor iProductInfoChanged;
    Functor iProductUrlChanged;
    Functor iProductImageUriChanged;
    Functor iAttributesChanged;
    Functor iQueryPortChanged;
    Functor iBrowsePortChanged;
    Functor iUpdateCountChanged;
};


class SyncManufacturerAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncManufacturerAvOpenhomeOrgMediaServer1C::SyncManufacturerAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncModelAvOpenhomeOrgMediaServer1C::SyncModelAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncProductAvOpenhomeOrgMediaServer1C::SyncProductAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncAttributesAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    Brh& iValue;
};

SyncAttributesAvOpenhomeOrgMediaServer1C::SyncAttributesAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncQueryPortAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncQueryPortAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncQueryPortAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    TUint& iValue;
};

SyncQueryPortAvOpenhomeOrgMediaServer1C::SyncQueryPortAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncQueryPortAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndQueryPort(aAsync, iValue);
}


class SyncBrowsePortAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncBrowsePortAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBrowsePortAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    TUint& iValue;
};

SyncBrowsePortAvOpenhomeOrgMediaServer1C::SyncBrowsePortAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBrowsePortAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBrowsePort(aAsync, iValue);
}


class SyncUpdateCountAvOpenhomeOrgMediaServer1C : public SyncProxyAction
{
public:
    SyncUpdateCountAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUpdateCountAvOpenhomeOrgMediaServer1C() {};
private:
    CpProxyAvOpenhomeOrgMediaServer1C& iService;
    TUint& iValue;
};

SyncUpdateCountAvOpenhomeOrgMediaServer1C::SyncUpdateCountAvOpenhomeOrgMediaServer1C(CpProxyAvOpenhomeOrgMediaServer1C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUpdateCountAvOpenhomeOrgMediaServer1C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateCount(aAsync, iValue);
}

CpProxyAvOpenhomeOrgMediaServer1C::CpProxyAvOpenhomeOrgMediaServer1C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "MediaServer", 1, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::QueryPortPropertyChanged);
    iQueryPort = new PropertyUint("QueryPort", functor);
    AddProperty(iQueryPort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::BrowsePortPropertyChanged);
    iBrowsePort = new PropertyUint("BrowsePort", functor);
    AddProperty(iBrowsePort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1C::UpdateCountPropertyChanged);
    iUpdateCount = new PropertyUint("UpdateCount", functor);
    AddProperty(iUpdateCount);
}

CpProxyAvOpenhomeOrgMediaServer1C::~CpProxyAvOpenhomeOrgMediaServer1C()
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgMediaServer1C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginManufacturer(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionManufacturer, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionManufacturer->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgMediaServer1C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginModel(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionModel, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionModel->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncProduct(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncProductAvOpenhomeOrgMediaServer1C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginProduct(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProduct, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProduct->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndProduct(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aName);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aInfo);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aUrl);
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageUri);
}

void CpProxyAvOpenhomeOrgMediaServer1C::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgMediaServer1C sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncQueryPort(TUint& aValue)
{
    SyncQueryPortAvOpenhomeOrgMediaServer1C sync(*this, aValue);
    BeginQueryPort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginQueryPort(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionQueryPort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQueryPort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndQueryPort(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncBrowsePort(TUint& aValue)
{
    SyncBrowsePortAvOpenhomeOrgMediaServer1C sync(*this, aValue);
    BeginBrowsePort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginBrowsePort(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBrowsePort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBrowsePort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndBrowsePort(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SyncUpdateCount(TUint& aValue)
{
    SyncUpdateCountAvOpenhomeOrgMediaServer1C sync(*this, aValue);
    BeginUpdateCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1C::BeginUpdateCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUpdateCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUpdateCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1C::EndUpdateCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAttributesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyQueryPortChanged(Functor& aFunctor)
{
    iLock.Wait();
    iQueryPortChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyBrowsePortChanged(Functor& aFunctor)
{
    iLock.Wait();
    iBrowsePortChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::SetPropertyUpdateCountChanged(Functor& aFunctor)
{
    iLock.Wait();
    iUpdateCountChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyQueryPort(TUint& aQueryPort) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aQueryPort = iQueryPort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyBrowsePort(TUint& aBrowsePort) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aBrowsePort = iBrowsePort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1C::PropertyUpdateCount(TUint& aUpdateCount) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aUpdateCount = iUpdateCount->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::QueryPortPropertyChanged()
{
    ReportEvent(iQueryPortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::BrowsePortPropertyChanged()
{
    ReportEvent(iBrowsePortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1C::UpdateCountPropertyChanged()
{
    ReportEvent(iUpdateCountChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgMediaServer1Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgMediaServer1C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncManufacturer(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aName;
    Brh buf_aInfo;
    Brh buf_aUrl;
    Brh buf_aImageUri;
    int32_t err = 0;
    try {
        proxyC->SyncManufacturer(buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aName = NULL;
        *aInfo = NULL;
        *aUrl = NULL;
        *aImageUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginManufacturer(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginManufacturer(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndManufacturer(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aName;
    *aName = NULL;
    Brh buf_aInfo;
    *aInfo = NULL;
    Brh buf_aUrl;
    *aUrl = NULL;
    Brh buf_aImageUri;
    *aImageUri = NULL;
    try {
        proxyC->EndManufacturer(*async, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncModel(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aName;
    Brh buf_aInfo;
    Brh buf_aUrl;
    Brh buf_aImageUri;
    int32_t err = 0;
    try {
        proxyC->SyncModel(buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aName = NULL;
        *aInfo = NULL;
        *aUrl = NULL;
        *aImageUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginModel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndModel(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aName;
    *aName = NULL;
    Brh buf_aInfo;
    *aInfo = NULL;
    Brh buf_aUrl;
    *aUrl = NULL;
    Brh buf_aImageUri;
    *aImageUri = NULL;
    try {
        proxyC->EndModel(*async, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncProduct(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aName;
    Brh buf_aInfo;
    Brh buf_aUrl;
    Brh buf_aImageUri;
    int32_t err = 0;
    try {
        proxyC->SyncProduct(buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aName = NULL;
        *aInfo = NULL;
        *aUrl = NULL;
        *aImageUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginProduct(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProduct(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndProduct(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aName;
    *aName = NULL;
    Brh buf_aInfo;
    *aInfo = NULL;
    Brh buf_aUrl;
    *aUrl = NULL;
    Brh buf_aImageUri;
    *aImageUri = NULL;
    try {
        proxyC->EndProduct(*async, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncAttributes(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncAttributes(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginAttributes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAttributes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndAttributes(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndAttributes(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncQueryPort(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncQueryPort(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginQueryPort(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginQueryPort(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndQueryPort(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndQueryPort(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncBrowsePort(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncBrowsePort(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginBrowsePort(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBrowsePort(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndBrowsePort(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndBrowsePort(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1SyncUpdateCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncUpdateCount(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1BeginUpdateCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUpdateCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1EndUpdateCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndUpdateCount(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyManufacturerNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyManufacturerInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyManufacturerUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyManufacturerImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyModelNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyModelInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyModelUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyModelImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyProductNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyProductInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyProductUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyProductImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyAttributesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAttributesChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyQueryPortChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyQueryPortChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyBrowsePortChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyBrowsePortChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgMediaServer1SetPropertyUpdateCountChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyUpdateCountChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyManufacturerName(THandle aHandle, char** aManufacturerName)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerName;
    try {
        proxyC->PropertyManufacturerName(buf_aManufacturerName);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aManufacturerName = buf_aManufacturerName.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyManufacturerInfo(THandle aHandle, char** aManufacturerInfo)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerInfo;
    try {
        proxyC->PropertyManufacturerInfo(buf_aManufacturerInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aManufacturerInfo = buf_aManufacturerInfo.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyManufacturerUrl(THandle aHandle, char** aManufacturerUrl)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerUrl;
    try {
        proxyC->PropertyManufacturerUrl(buf_aManufacturerUrl);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aManufacturerUrl = buf_aManufacturerUrl.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyManufacturerImageUri(THandle aHandle, char** aManufacturerImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerImageUri;
    try {
        proxyC->PropertyManufacturerImageUri(buf_aManufacturerImageUri);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aManufacturerImageUri = buf_aManufacturerImageUri.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyModelName(THandle aHandle, char** aModelName)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelName;
    try {
        proxyC->PropertyModelName(buf_aModelName);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModelName = buf_aModelName.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyModelInfo(THandle aHandle, char** aModelInfo)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelInfo;
    try {
        proxyC->PropertyModelInfo(buf_aModelInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModelInfo = buf_aModelInfo.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyModelUrl(THandle aHandle, char** aModelUrl)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelUrl;
    try {
        proxyC->PropertyModelUrl(buf_aModelUrl);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModelUrl = buf_aModelUrl.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyModelImageUri(THandle aHandle, char** aModelImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelImageUri;
    try {
        proxyC->PropertyModelImageUri(buf_aModelImageUri);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aModelImageUri = buf_aModelImageUri.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyProductName(THandle aHandle, char** aProductName)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductName;
    try {
        proxyC->PropertyProductName(buf_aProductName);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductName = buf_aProductName.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyProductInfo(THandle aHandle, char** aProductInfo)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductInfo;
    try {
        proxyC->PropertyProductInfo(buf_aProductInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductInfo = buf_aProductInfo.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyProductUrl(THandle aHandle, char** aProductUrl)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductUrl;
    try {
        proxyC->PropertyProductUrl(buf_aProductUrl);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductUrl = buf_aProductUrl.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyProductImageUri(THandle aHandle, char** aProductImageUri)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductImageUri;
    try {
        proxyC->PropertyProductImageUri(buf_aProductImageUri);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductImageUri = buf_aProductImageUri.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyAttributes(THandle aHandle, char** aAttributes)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAttributes;
    try {
        proxyC->PropertyAttributes(buf_aAttributes);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aAttributes = buf_aAttributes.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyQueryPort(THandle aHandle, uint32_t* aQueryPort)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyQueryPort(*aQueryPort);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyBrowsePort(THandle aHandle, uint32_t* aBrowsePort)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyBrowsePort(*aBrowsePort);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgMediaServer1PropertyUpdateCount(THandle aHandle, uint32_t* aUpdateCount)
{
    CpProxyAvOpenhomeOrgMediaServer1C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgMediaServer1C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertyUpdateCount(*aUpdateCount);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

