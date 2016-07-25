#include "CpAvOpenhomeOrgProduct2.h"
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

class CpProxyAvOpenhomeOrgProduct2C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgProduct2C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgProduct2C();
    //CpProxyAvOpenhomeOrgProduct2* Proxy() { return static_cast<CpProxyAvOpenhomeOrgProduct2*>(iProxy); }

    void SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginManufacturer(FunctorAsync& aFunctor);
    void EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginModel(FunctorAsync& aFunctor);
    void EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginProduct(FunctorAsync& aFunctor);
    void EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncStandby(TBool& aValue);
    void BeginStandby(FunctorAsync& aFunctor);
    void EndStandby(IAsync& aAsync, TBool& aValue);

    void SyncSetStandby(TBool aValue);
    void BeginSetStandby(TBool aValue, FunctorAsync& aFunctor);
    void EndSetStandby(IAsync& aAsync);

    void SyncSourceCount(TUint& aValue);
    void BeginSourceCount(FunctorAsync& aFunctor);
    void EndSourceCount(IAsync& aAsync, TUint& aValue);

    void SyncSourceXml(Brh& aValue);
    void BeginSourceXml(FunctorAsync& aFunctor);
    void EndSourceXml(IAsync& aAsync, Brh& aValue);

    void SyncSourceIndex(TUint& aValue);
    void BeginSourceIndex(FunctorAsync& aFunctor);
    void EndSourceIndex(IAsync& aAsync, TUint& aValue);

    void SyncSetSourceIndex(TUint aValue);
    void BeginSetSourceIndex(TUint aValue, FunctorAsync& aFunctor);
    void EndSetSourceIndex(IAsync& aAsync);

    void SyncSetSourceIndexByName(const Brx& aValue);
    void BeginSetSourceIndexByName(const Brx& aValue, FunctorAsync& aFunctor);
    void EndSetSourceIndexByName(IAsync& aAsync);

    void SyncSetSourceBySystemName(const Brx& aValue);
    void BeginSetSourceBySystemName(const Brx& aValue, FunctorAsync& aFunctor);
    void EndSetSourceBySystemName(IAsync& aAsync);

    void SyncSource(TUint aIndex, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);
    void BeginSource(TUint aIndex, FunctorAsync& aFunctor);
    void EndSource(IAsync& aAsync, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);

    void SyncAttributes(Brh& aValue);
    void BeginAttributes(FunctorAsync& aFunctor);
    void EndAttributes(IAsync& aAsync, Brh& aValue);

    void SyncSourceXmlChangeCount(TUint& aValue);
    void BeginSourceXmlChangeCount(FunctorAsync& aFunctor);
    void EndSourceXmlChangeCount(IAsync& aAsync, TUint& aValue);

    void SetPropertyManufacturerNameChanged(Functor& aFunctor);
    void SetPropertyManufacturerInfoChanged(Functor& aFunctor);
    void SetPropertyManufacturerUrlChanged(Functor& aFunctor);
    void SetPropertyManufacturerImageUriChanged(Functor& aFunctor);
    void SetPropertyModelNameChanged(Functor& aFunctor);
    void SetPropertyModelInfoChanged(Functor& aFunctor);
    void SetPropertyModelUrlChanged(Functor& aFunctor);
    void SetPropertyModelImageUriChanged(Functor& aFunctor);
    void SetPropertyProductRoomChanged(Functor& aFunctor);
    void SetPropertyProductNameChanged(Functor& aFunctor);
    void SetPropertyProductInfoChanged(Functor& aFunctor);
    void SetPropertyProductUrlChanged(Functor& aFunctor);
    void SetPropertyProductImageUriChanged(Functor& aFunctor);
    void SetPropertyStandbyChanged(Functor& aFunctor);
    void SetPropertySourceIndexChanged(Functor& aFunctor);
    void SetPropertySourceCountChanged(Functor& aFunctor);
    void SetPropertySourceXmlChanged(Functor& aFunctor);
    void SetPropertyAttributesChanged(Functor& aFunctor);

    void PropertyManufacturerName(Brhz& aManufacturerName) const;
    void PropertyManufacturerInfo(Brhz& aManufacturerInfo) const;
    void PropertyManufacturerUrl(Brhz& aManufacturerUrl) const;
    void PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const;
    void PropertyModelName(Brhz& aModelName) const;
    void PropertyModelInfo(Brhz& aModelInfo) const;
    void PropertyModelUrl(Brhz& aModelUrl) const;
    void PropertyModelImageUri(Brhz& aModelImageUri) const;
    void PropertyProductRoom(Brhz& aProductRoom) const;
    void PropertyProductName(Brhz& aProductName) const;
    void PropertyProductInfo(Brhz& aProductInfo) const;
    void PropertyProductUrl(Brhz& aProductUrl) const;
    void PropertyProductImageUri(Brhz& aProductImageUri) const;
    void PropertyStandby(TBool& aStandby) const;
    void PropertySourceIndex(TUint& aSourceIndex) const;
    void PropertySourceCount(TUint& aSourceCount) const;
    void PropertySourceXml(Brhz& aSourceXml) const;
    void PropertyAttributes(Brhz& aAttributes) const;
private:
    void ManufacturerNamePropertyChanged();
    void ManufacturerInfoPropertyChanged();
    void ManufacturerUrlPropertyChanged();
    void ManufacturerImageUriPropertyChanged();
    void ModelNamePropertyChanged();
    void ModelInfoPropertyChanged();
    void ModelUrlPropertyChanged();
    void ModelImageUriPropertyChanged();
    void ProductRoomPropertyChanged();
    void ProductNamePropertyChanged();
    void ProductInfoPropertyChanged();
    void ProductUrlPropertyChanged();
    void ProductImageUriPropertyChanged();
    void StandbyPropertyChanged();
    void SourceIndexPropertyChanged();
    void SourceCountPropertyChanged();
    void SourceXmlPropertyChanged();
    void AttributesPropertyChanged();
private:
    Mutex iLock;
    Action* iActionManufacturer;
    Action* iActionModel;
    Action* iActionProduct;
    Action* iActionStandby;
    Action* iActionSetStandby;
    Action* iActionSourceCount;
    Action* iActionSourceXml;
    Action* iActionSourceIndex;
    Action* iActionSetSourceIndex;
    Action* iActionSetSourceIndexByName;
    Action* iActionSetSourceBySystemName;
    Action* iActionSource;
    Action* iActionAttributes;
    Action* iActionSourceXmlChangeCount;
    PropertyString* iManufacturerName;
    PropertyString* iManufacturerInfo;
    PropertyString* iManufacturerUrl;
    PropertyString* iManufacturerImageUri;
    PropertyString* iModelName;
    PropertyString* iModelInfo;
    PropertyString* iModelUrl;
    PropertyString* iModelImageUri;
    PropertyString* iProductRoom;
    PropertyString* iProductName;
    PropertyString* iProductInfo;
    PropertyString* iProductUrl;
    PropertyString* iProductImageUri;
    PropertyBool* iStandby;
    PropertyUint* iSourceIndex;
    PropertyUint* iSourceCount;
    PropertyString* iSourceXml;
    PropertyString* iAttributes;
    Functor iManufacturerNameChanged;
    Functor iManufacturerInfoChanged;
    Functor iManufacturerUrlChanged;
    Functor iManufacturerImageUriChanged;
    Functor iModelNameChanged;
    Functor iModelInfoChanged;
    Functor iModelUrlChanged;
    Functor iModelImageUriChanged;
    Functor iProductRoomChanged;
    Functor iProductNameChanged;
    Functor iProductInfoChanged;
    Functor iProductUrlChanged;
    Functor iProductImageUriChanged;
    Functor iStandbyChanged;
    Functor iSourceIndexChanged;
    Functor iSourceCountChanged;
    Functor iSourceXmlChanged;
    Functor iAttributesChanged;
};


class SyncManufacturerAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncManufacturerAvOpenhomeOrgProduct2C::SyncManufacturerAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncModelAvOpenhomeOrgProduct2C::SyncModelAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iRoom;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncProductAvOpenhomeOrgProduct2C::SyncProductAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri);
}


class SyncStandbyAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    TBool& iValue;
};

SyncStandbyAvOpenhomeOrgProduct2C::SyncStandbyAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}


class SyncSetStandbyAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetStandbyAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
};

SyncSetStandbyAvOpenhomeOrgProduct2C::SyncSetStandbyAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}


class SyncSourceCountAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceCountAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    TUint& iValue;
};

SyncSourceCountAvOpenhomeOrgProduct2C::SyncSourceCountAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}


class SyncSourceXmlAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iValue;
};

SyncSourceXmlAvOpenhomeOrgProduct2C::SyncSourceXmlAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}


class SyncSourceIndexAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceIndexAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    TUint& iValue;
};

SyncSourceIndexAvOpenhomeOrgProduct2C::SyncSourceIndexAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}


class SyncSetSourceIndexAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
};

SyncSetSourceIndexAvOpenhomeOrgProduct2C::SyncSetSourceIndexAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}


class SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
};

SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C::SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}


class SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
};

SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C::SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}


class SyncSourceAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iSystemName;
    Brh& iType;
    Brh& iName;
    TBool& iVisible;
};

SyncSourceAvOpenhomeOrgProduct2C::SyncSourceAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}


class SyncAttributesAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    Brh& iValue;
};

SyncAttributesAvOpenhomeOrgProduct2C::SyncAttributesAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C() {};
private:
    CpProxyAvOpenhomeOrgProduct2C& iService;
    TUint& iValue;
};

SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C::SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C(CpProxyAvOpenhomeOrgProduct2C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}

CpProxyAvOpenhomeOrgProduct2C::CpProxyAvOpenhomeOrgProduct2C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Product", 2, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct2C::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct2C::~CpProxyAvOpenhomeOrgProduct2C()
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

void CpProxyAvOpenhomeOrgProduct2C::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct2C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2C::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct2C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct2C::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncProductAvOpenhomeOrgProduct2C sync(*this, aRoom, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginProduct(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProduct, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProduct->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncStandby(TBool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndStandby(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSetStandby(TBool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct2C sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSetStandby(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSetStandby(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSourceCount(TUint& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSourceCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSourceXml(Brh& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSourceXml(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSourceIndex(TUint& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSourceIndex(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSetSourceIndex(TUint aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct2C sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSetSourceIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSetSourceIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSetSourceIndexByName(const Brx& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct2C sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSetSourceIndexByName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndexByName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndexByName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSetSourceIndexByName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSetSourceBySystemName(const Brx& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct2C sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSetSourceBySystemName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceBySystemName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceBySystemName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSetSourceBySystemName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSource(TUint aIndex, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct2C sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSource(TUint aIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSource, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSource->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSource->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSource(IAsync& aAsync, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SyncSourceXmlChangeCount(TUint& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct2C sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct2C::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct2C::EndSourceXmlChangeCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductRoomChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStandbyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceIndexChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceCountChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceXmlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAttributesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyProductRoom(Brhz& aProductRoom) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProductRoom.Set(iProductRoom->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyStandby(TBool& aStandby) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct2C::PropertySourceIndex(TUint& aSourceIndex) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct2C::PropertySourceCount(TUint& aSourceCount) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct2C::PropertySourceXml(Brhz& aSourceXml) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aSourceXml.Set(iSourceXml->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(GetPropertyReadLock());
    ASSERT(IsSubscribed());
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgProduct2C::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct2C::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgProduct2Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgProduct2C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncManufacturer(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginManufacturer(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginManufacturer(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndManufacturer(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncModel(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginModel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndModel(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncProduct(THandle aHandle, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRoom;
    Brh buf_aName;
    Brh buf_aInfo;
    Brh buf_aUrl;
    Brh buf_aImageUri;
    int32_t err = 0;
    try {
        proxyC->SyncProduct(buf_aRoom, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aRoom = buf_aRoom.Extract();
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aRoom = NULL;
        *aName = NULL;
        *aInfo = NULL;
        *aUrl = NULL;
        *aImageUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginProduct(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProduct(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndProduct(THandle aHandle, OhNetHandleAsync aAsync, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aRoom;
    *aRoom = NULL;
    Brh buf_aName;
    *aName = NULL;
    Brh buf_aInfo;
    *aInfo = NULL;
    Brh buf_aUrl;
    *aUrl = NULL;
    Brh buf_aImageUri;
    *aImageUri = NULL;
    try {
        proxyC->EndProduct(*async, buf_aRoom, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri);
        *aRoom = buf_aRoom.Extract();
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncStandby(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncStandby(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginStandby(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStandby(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndStandby(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndStandby(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSetStandby(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetStandby((aValue==0? false : true));
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSetStandby(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetStandby((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSetStandby(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetStandby(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSourceCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSourceCount(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSourceCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSourceCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSourceCount(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSourceXml(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue;
    int32_t err = 0;
    try {
        proxyC->SyncSourceXml(buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSourceXml(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXml(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSourceXml(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aValue;
    *aValue = NULL;
    try {
        proxyC->EndSourceXml(*async, buf_aValue);
        *aValue = buf_aValue.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSourceIndex(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSourceIndex(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSourceIndex(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceIndex(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSourceIndex(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSourceIndex(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSetSourceIndex(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSetSourceIndex(aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSetSourceIndex(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndex(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSetSourceIndex(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSourceIndex(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSetSourceIndexByName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    int32_t err = 0;
    try {
        proxyC->SyncSetSourceIndexByName(buf_aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSetSourceIndexByName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndexByName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSetSourceIndexByName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSourceIndexByName(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSetSourceBySystemName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    int32_t err = 0;
    try {
        proxyC->SyncSetSourceBySystemName(buf_aValue);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSetSourceBySystemName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceBySystemName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSetSourceBySystemName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetSourceBySystemName(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSource(THandle aHandle, uint32_t aIndex, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aSystemName;
    Brh buf_aType;
    Brh buf_aName;
    TBool Visible;
    int32_t err = 0;
    try {
        proxyC->SyncSource(aIndex, buf_aSystemName, buf_aType, buf_aName, Visible);
        *aSystemName = buf_aSystemName.Extract();
        *aType = buf_aType.Extract();
        *aName = buf_aName.Extract();
        *aVisible = Visible? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aSystemName = NULL;
        *aType = NULL;
        *aName = NULL;
        *aVisible = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSource(THandle aHandle, uint32_t aIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSource(aIndex, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSource(THandle aHandle, OhNetHandleAsync aAsync, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aSystemName;
    *aSystemName = NULL;
    Brh buf_aType;
    *aType = NULL;
    Brh buf_aName;
    *aName = NULL;
    TBool Visible;
    try {
        proxyC->EndSource(*async, buf_aSystemName, buf_aType, buf_aName, Visible);
        *aSystemName = buf_aSystemName.Extract();
        *aType = buf_aType.Extract();
        *aName = buf_aName.Extract();
        *aVisible = Visible? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncAttributes(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginAttributes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAttributes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndAttributes(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2SyncSourceXmlChangeCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncSourceXmlChangeCount(*aValue);
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = 0;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2BeginSourceXmlChangeCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXmlChangeCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct2EndSourceXmlChangeCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSourceXmlChangeCount(*async, *aValue);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyManufacturerNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyManufacturerInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyManufacturerUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyManufacturerImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyModelNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyModelInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyModelUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyModelImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyProductRoomChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductRoomChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyProductNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyProductInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyProductUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyProductImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyStandbyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStandbyChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertySourceIndexChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceIndexChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertySourceCountChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceCountChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertySourceXmlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceXmlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2SetPropertyAttributesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAttributesChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyManufacturerName(THandle aHandle, char** aManufacturerName)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerName;
    proxyC->PropertyManufacturerName(buf_aManufacturerName);
    *aManufacturerName = buf_aManufacturerName.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyManufacturerInfo(THandle aHandle, char** aManufacturerInfo)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerInfo;
    proxyC->PropertyManufacturerInfo(buf_aManufacturerInfo);
    *aManufacturerInfo = buf_aManufacturerInfo.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyManufacturerUrl(THandle aHandle, char** aManufacturerUrl)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerUrl;
    proxyC->PropertyManufacturerUrl(buf_aManufacturerUrl);
    *aManufacturerUrl = buf_aManufacturerUrl.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyManufacturerImageUri(THandle aHandle, char** aManufacturerImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aManufacturerImageUri;
    proxyC->PropertyManufacturerImageUri(buf_aManufacturerImageUri);
    *aManufacturerImageUri = buf_aManufacturerImageUri.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyModelName(THandle aHandle, char** aModelName)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelName;
    proxyC->PropertyModelName(buf_aModelName);
    *aModelName = buf_aModelName.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyModelInfo(THandle aHandle, char** aModelInfo)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelInfo;
    proxyC->PropertyModelInfo(buf_aModelInfo);
    *aModelInfo = buf_aModelInfo.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyModelUrl(THandle aHandle, char** aModelUrl)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelUrl;
    proxyC->PropertyModelUrl(buf_aModelUrl);
    *aModelUrl = buf_aModelUrl.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyModelImageUri(THandle aHandle, char** aModelImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aModelImageUri;
    proxyC->PropertyModelImageUri(buf_aModelImageUri);
    *aModelImageUri = buf_aModelImageUri.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyProductRoom(THandle aHandle, char** aProductRoom)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductRoom;
    proxyC->PropertyProductRoom(buf_aProductRoom);
    *aProductRoom = buf_aProductRoom.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyProductName(THandle aHandle, char** aProductName)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductName;
    proxyC->PropertyProductName(buf_aProductName);
    *aProductName = buf_aProductName.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyProductInfo(THandle aHandle, char** aProductInfo)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductInfo;
    proxyC->PropertyProductInfo(buf_aProductInfo);
    *aProductInfo = buf_aProductInfo.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyProductUrl(THandle aHandle, char** aProductUrl)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductUrl;
    proxyC->PropertyProductUrl(buf_aProductUrl);
    *aProductUrl = buf_aProductUrl.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyProductImageUri(THandle aHandle, char** aProductImageUri)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductImageUri;
    proxyC->PropertyProductImageUri(buf_aProductImageUri);
    *aProductImageUri = buf_aProductImageUri.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyStandby(THandle aHandle, uint32_t* aStandby)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Standby;
    proxyC->PropertyStandby(Standby);
    *aStandby = Standby? 1 : 0;
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertySourceIndex(THandle aHandle, uint32_t* aSourceIndex)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertySourceIndex(*aSourceIndex);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertySourceCount(THandle aHandle, uint32_t* aSourceCount)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    proxyC->PropertySourceCount(*aSourceCount);
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertySourceXml(THandle aHandle, char** aSourceXml)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSourceXml;
    proxyC->PropertySourceXml(buf_aSourceXml);
    *aSourceXml = buf_aSourceXml.Transfer();
}

void STDCALL CpProxyAvOpenhomeOrgProduct2PropertyAttributes(THandle aHandle, char** aAttributes)
{
    CpProxyAvOpenhomeOrgProduct2C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aAttributes;
    proxyC->PropertyAttributes(buf_aAttributes);
    *aAttributes = buf_aAttributes.Transfer();
}

