#include "CpAvOpenhomeOrgProduct3.h"
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

class CpProxyAvOpenhomeOrgProduct3C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgProduct3C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgProduct3C();
    //CpProxyAvOpenhomeOrgProduct3* Proxy() { return static_cast<CpProxyAvOpenhomeOrgProduct3*>(iProxy); }

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

    void SyncStandbyTransitioning(TBool& aValue);
    void BeginStandbyTransitioning(FunctorAsync& aFunctor);
    void EndStandbyTransitioning(IAsync& aAsync, TBool& aValue);

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
    void SetPropertyStandbyTransitioningChanged(Functor& aFunctor);
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
    void PropertyStandbyTransitioning(TBool& aStandbyTransitioning) const;
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
    void StandbyTransitioningPropertyChanged();
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
    Action* iActionStandbyTransitioning;
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
    PropertyBool* iStandbyTransitioning;
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
    Functor iStandbyTransitioningChanged;
    Functor iSourceIndexChanged;
    Functor iSourceCountChanged;
    Functor iSourceXmlChanged;
    Functor iAttributesChanged;
};


class SyncManufacturerAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncManufacturerAvOpenhomeOrgProduct3C::SyncManufacturerAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncModelAvOpenhomeOrgProduct3C::SyncModelAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iRoom;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncProductAvOpenhomeOrgProduct3C::SyncProductAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncProductAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri);
}


class SyncStandbyAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    TBool& iValue;
};

SyncStandbyAvOpenhomeOrgProduct3C::SyncStandbyAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}


class SyncStandbyTransitioningAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncStandbyTransitioningAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyTransitioningAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    TBool& iValue;
};

SyncStandbyTransitioningAvOpenhomeOrgProduct3C::SyncStandbyTransitioningAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyTransitioningAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandbyTransitioning(aAsync, iValue);
}


class SyncSetStandbyAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetStandbyAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
};

SyncSetStandbyAvOpenhomeOrgProduct3C::SyncSetStandbyAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}


class SyncSourceCountAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceCountAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    TUint& iValue;
};

SyncSourceCountAvOpenhomeOrgProduct3C::SyncSourceCountAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}


class SyncSourceXmlAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iValue;
};

SyncSourceXmlAvOpenhomeOrgProduct3C::SyncSourceXmlAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}


class SyncSourceIndexAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceIndexAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    TUint& iValue;
};

SyncSourceIndexAvOpenhomeOrgProduct3C::SyncSourceIndexAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}


class SyncSetSourceIndexAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
};

SyncSetSourceIndexAvOpenhomeOrgProduct3C::SyncSetSourceIndexAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}


class SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
};

SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C::SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}


class SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
};

SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C::SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}


class SyncSourceAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iSystemName;
    Brh& iType;
    Brh& iName;
    TBool& iVisible;
};

SyncSourceAvOpenhomeOrgProduct3C::SyncSourceAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}


class SyncAttributesAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    Brh& iValue;
};

SyncAttributesAvOpenhomeOrgProduct3C::SyncAttributesAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C() {};
private:
    CpProxyAvOpenhomeOrgProduct3C& iService;
    TUint& iValue;
};

SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C::SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C(CpProxyAvOpenhomeOrgProduct3C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}

CpProxyAvOpenhomeOrgProduct3C::CpProxyAvOpenhomeOrgProduct3C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Product", 3, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::StandbyTransitioningPropertyChanged);
    iStandbyTransitioning = new PropertyBool("StandbyTransitioning", functor);
    AddProperty(iStandbyTransitioning);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct3C::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct3C::~CpProxyAvOpenhomeOrgProduct3C()
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

void CpProxyAvOpenhomeOrgProduct3C::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct3C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3C::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct3C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3C::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncProductAvOpenhomeOrgProduct3C sync(*this, aRoom, aName, aInfo, aUrl, aImageUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginProduct(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3C::EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncStandby(TBool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndStandby(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncStandbyTransitioning(TBool& aValue)
{
    SyncStandbyTransitioningAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginStandbyTransitioning(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginStandbyTransitioning(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStandbyTransitioning, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandbyTransitioning->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndStandbyTransitioning(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSetStandby(TBool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct3C sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSetStandby(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSetStandby(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSourceCount(TUint& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSourceCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSourceXml(Brh& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSourceXml(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSourceIndex(TUint& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSourceIndex(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSetSourceIndex(TUint aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct3C sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSetSourceIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSetSourceIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSetSourceIndexByName(const Brx& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct3C sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSetSourceIndexByName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndexByName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndexByName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSetSourceIndexByName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSetSourceBySystemName(const Brx& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct3C sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSetSourceBySystemName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceBySystemName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceBySystemName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSetSourceBySystemName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSource(TUint aIndex, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct3C sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSource(TUint aIndex, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct3C::EndSource(IAsync& aAsync, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SyncSourceXmlChangeCount(TUint& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct3C sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct3C::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct3C::EndSourceXmlChangeCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductRoomChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStandbyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyStandbyTransitioningChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStandbyTransitioningChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceIndexChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceCountChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceXmlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAttributesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyProductRoom(Brhz& aProductRoom) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductRoom.Set(iProductRoom->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyStandby(TBool& aStandby) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyStandbyTransitioning(TBool& aStandbyTransitioning) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStandbyTransitioning = iStandbyTransitioning->Value();
}

void CpProxyAvOpenhomeOrgProduct3C::PropertySourceIndex(TUint& aSourceIndex) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct3C::PropertySourceCount(TUint& aSourceCount) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct3C::PropertySourceXml(Brhz& aSourceXml) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceXml.Set(iSourceXml->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgProduct3C::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::StandbyTransitioningPropertyChanged()
{
    ReportEvent(iStandbyTransitioningChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct3C::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgProduct3Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgProduct3C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncManufacturer(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginManufacturer(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginManufacturer(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndManufacturer(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncModel(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginModel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndModel(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncProduct(THandle aHandle, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginProduct(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProduct(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndProduct(THandle aHandle, OhNetHandleAsync aAsync, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncStandby(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginStandby(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStandby(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndStandby(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncStandbyTransitioning(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Value;
    int32_t err = 0;
    try {
        proxyC->SyncStandbyTransitioning(Value);
        *aValue = Value? 1 : 0;
    }
    catch (ProxyError& ) {
        err = -1;
        *aValue = false;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginStandbyTransitioning(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStandbyTransitioning(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndStandbyTransitioning(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool Value;
    try {
        proxyC->EndStandbyTransitioning(*async, Value);
        *aValue = Value? 1 : 0;
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSetStandby(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSetStandby(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetStandby((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSetStandby(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSourceCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSourceCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSourceCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSourceXml(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSourceXml(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXml(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSourceXml(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSourceIndex(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSourceIndex(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceIndex(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSourceIndex(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSetSourceIndex(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSetSourceIndex(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndex(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSetSourceIndex(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSetSourceIndexByName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSetSourceIndexByName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndexByName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSetSourceIndexByName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSetSourceBySystemName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSetSourceBySystemName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceBySystemName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSetSourceBySystemName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSource(THandle aHandle, uint32_t aIndex, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSource(THandle aHandle, uint32_t aIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSource(aIndex, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSource(THandle aHandle, OhNetHandleAsync aAsync, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncAttributes(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginAttributes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAttributes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndAttributes(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3SyncSourceXmlChangeCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3BeginSourceXmlChangeCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXmlChangeCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3EndSourceXmlChangeCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyManufacturerNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyManufacturerInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyManufacturerUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyManufacturerImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyModelNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyModelInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyModelUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyModelImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyProductRoomChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductRoomChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyProductNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyProductInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyProductUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyProductImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyStandbyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStandbyChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyStandbyTransitioningChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStandbyTransitioningChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertySourceIndexChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceIndexChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertySourceCountChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceCountChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertySourceXmlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceXmlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct3SetPropertyAttributesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAttributesChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyManufacturerName(THandle aHandle, char** aManufacturerName)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyManufacturerInfo(THandle aHandle, char** aManufacturerInfo)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyManufacturerUrl(THandle aHandle, char** aManufacturerUrl)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyManufacturerImageUri(THandle aHandle, char** aManufacturerImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyModelName(THandle aHandle, char** aModelName)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyModelInfo(THandle aHandle, char** aModelInfo)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyModelUrl(THandle aHandle, char** aModelUrl)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyModelImageUri(THandle aHandle, char** aModelImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyProductRoom(THandle aHandle, char** aProductRoom)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductRoom;
    try {
        proxyC->PropertyProductRoom(buf_aProductRoom);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductRoom = buf_aProductRoom.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyProductName(THandle aHandle, char** aProductName)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyProductInfo(THandle aHandle, char** aProductInfo)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyProductUrl(THandle aHandle, char** aProductUrl)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyProductImageUri(THandle aHandle, char** aProductImageUri)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyStandby(THandle aHandle, uint32_t* aStandby)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool Standby;
    try {
        proxyC->PropertyStandby(Standby);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aStandby = Standby? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyStandbyTransitioning(THandle aHandle, uint32_t* aStandbyTransitioning)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool StandbyTransitioning;
    try {
        proxyC->PropertyStandbyTransitioning(StandbyTransitioning);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aStandbyTransitioning = StandbyTransitioning? 1 : 0;
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertySourceIndex(THandle aHandle, uint32_t* aSourceIndex)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySourceIndex(*aSourceIndex);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertySourceCount(THandle aHandle, uint32_t* aSourceCount)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySourceCount(*aSourceCount);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertySourceXml(THandle aHandle, char** aSourceXml)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aSourceXml;
    try {
        proxyC->PropertySourceXml(buf_aSourceXml);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aSourceXml = buf_aSourceXml.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct3PropertyAttributes(THandle aHandle, char** aAttributes)
{
    CpProxyAvOpenhomeOrgProduct3C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct3C*>(aHandle);
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

