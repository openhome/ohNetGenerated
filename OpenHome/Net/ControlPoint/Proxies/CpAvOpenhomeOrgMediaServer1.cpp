#include "CpAvOpenhomeOrgMediaServer1.h"
#include <OpenHome/Net/Core/CpProxy.h>
#include <OpenHome/Net/Private/CpiService.h>
#include <OpenHome/Private/Thread.h>
#include <OpenHome/Net/Private/AsyncPrivate.h>
#include <OpenHome/Net/Core/CpDevice.h>
#include <OpenHome/Net/Private/Error.h>
#include <OpenHome/Net/Private/CpiDevice.h>

namespace OpenHome {
namespace Net {

class SyncManufacturerAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncModelAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncProductAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

class SyncAttributesAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    Brh& iValue;
};

class SyncQueryPortAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncQueryPortAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    TUint& iValue;
};

class SyncBrowsePortAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncBrowsePortAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    TUint& iValue;
};

class SyncUpdateCountAvOpenhomeOrgMediaServer1 : public SyncProxyAction
{
public:
    SyncUpdateCountAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
private:
    CpProxyAvOpenhomeOrgMediaServer1& iService;
    TUint& iValue;
};

} // namespace Net
} // namespace OpenHome


using namespace OpenHome;
using namespace OpenHome::Net;


// SyncManufacturerAvOpenhomeOrgMediaServer1

SyncManufacturerAvOpenhomeOrgMediaServer1::SyncManufacturerAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}

// SyncModelAvOpenhomeOrgMediaServer1

SyncModelAvOpenhomeOrgMediaServer1::SyncModelAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}

// SyncProductAvOpenhomeOrgMediaServer1

SyncProductAvOpenhomeOrgMediaServer1::SyncProductAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iName, iInfo, iUrl, iImageUri);
}

// SyncAttributesAvOpenhomeOrgMediaServer1

SyncAttributesAvOpenhomeOrgMediaServer1::SyncAttributesAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}

// SyncQueryPortAvOpenhomeOrgMediaServer1

SyncQueryPortAvOpenhomeOrgMediaServer1::SyncQueryPortAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncQueryPortAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndQueryPort(aAsync, iValue);
}

// SyncBrowsePortAvOpenhomeOrgMediaServer1

SyncBrowsePortAvOpenhomeOrgMediaServer1::SyncBrowsePortAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncBrowsePortAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndBrowsePort(aAsync, iValue);
}

// SyncUpdateCountAvOpenhomeOrgMediaServer1

SyncUpdateCountAvOpenhomeOrgMediaServer1::SyncUpdateCountAvOpenhomeOrgMediaServer1(CpProxyAvOpenhomeOrgMediaServer1& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncUpdateCountAvOpenhomeOrgMediaServer1::CompleteRequest(IAsync& aAsync)
{
    iService.EndUpdateCount(aAsync, iValue);
}


// CpProxyAvOpenhomeOrgMediaServer1

CpProxyAvOpenhomeOrgMediaServer1::CpProxyAvOpenhomeOrgMediaServer1(CpDevice& aDevice)
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::QueryPortPropertyChanged);
    iQueryPort = new PropertyUint("QueryPort", functor);
    AddProperty(iQueryPort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::BrowsePortPropertyChanged);
    iBrowsePort = new PropertyUint("BrowsePort", functor);
    AddProperty(iBrowsePort);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgMediaServer1::UpdateCountPropertyChanged);
    iUpdateCount = new PropertyUint("UpdateCount", functor);
    AddProperty(iUpdateCount);
}

CpProxyAvOpenhomeOrgMediaServer1::~CpProxyAvOpenhomeOrgMediaServer1()
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgMediaServer1 sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMediaServer1::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgMediaServer1 sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMediaServer1::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncProduct(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncProductAvOpenhomeOrgMediaServer1 sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginProduct(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgMediaServer1::EndProduct(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgMediaServer1 sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncQueryPort(TUint& aValue)
{
    SyncQueryPortAvOpenhomeOrgMediaServer1 sync(*this, aValue);
    BeginQueryPort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginQueryPort(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionQueryPort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionQueryPort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1::EndQueryPort(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncBrowsePort(TUint& aValue)
{
    SyncBrowsePortAvOpenhomeOrgMediaServer1 sync(*this, aValue);
    BeginBrowsePort(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginBrowsePort(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBrowsePort, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBrowsePort->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1::EndBrowsePort(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1::SyncUpdateCount(TUint& aValue)
{
    SyncUpdateCountAvOpenhomeOrgMediaServer1 sync(*this, aValue);
    BeginUpdateCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgMediaServer1::BeginUpdateCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUpdateCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUpdateCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgMediaServer1::EndUpdateCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iManufacturerImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iModelImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductNameChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductUrlChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iProductImageUriChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iAttributesChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyQueryPortChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iQueryPortChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyBrowsePortChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iBrowsePortChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyUpdateCountChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iUpdateCountChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyQueryPort(TUint& aQueryPort) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aQueryPort = iQueryPort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyBrowsePort(TUint& aBrowsePort) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aBrowsePort = iBrowsePort->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1::PropertyUpdateCount(TUint& aUpdateCount) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    aUpdateCount = iUpdateCount->Value();
}

void CpProxyAvOpenhomeOrgMediaServer1::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::QueryPortPropertyChanged()
{
    ReportEvent(iQueryPortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::BrowsePortPropertyChanged()
{
    ReportEvent(iBrowsePortChanged);
}

void CpProxyAvOpenhomeOrgMediaServer1::UpdateCountPropertyChanged()
{
    ReportEvent(iUpdateCountChanged);
}


void CpProxyAvOpenhomeOrgMediaServer1::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyAvOpenhomeOrgMediaServer1::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyAvOpenhomeOrgMediaServer1::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyAvOpenhomeOrgMediaServer1::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyAvOpenhomeOrgMediaServer1::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyAvOpenhomeOrgMediaServer1::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyAvOpenhomeOrgMediaServer1::Version() const
{
  return iCpProxy.Version();
}


