#include "CpAvOpenhomeOrgProduct4.h"
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

class CpProxyAvOpenhomeOrgProduct4C : public CpProxyC
{
public:
    CpProxyAvOpenhomeOrgProduct4C(CpDeviceC aDevice);
    ~CpProxyAvOpenhomeOrgProduct4C();
    //CpProxyAvOpenhomeOrgProduct4* Proxy() { return static_cast<CpProxyAvOpenhomeOrgProduct4*>(iProxy); }

    void SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginManufacturer(FunctorAsync& aFunctor);
    void EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    void BeginModel(FunctorAsync& aFunctor);
    void EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);

    void SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri);
    void BeginProduct(FunctorAsync& aFunctor);
    void EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri);

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

    void SyncGetImageUri(const Brx& aResolution, Brh& aImageUri);
    void BeginGetImageUri(const Brx& aResolution, FunctorAsync& aFunctor);
    void EndGetImageUri(IAsync& aAsync, Brh& aImageUri);

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
    void SetPropertyProductImageHiresUriChanged(Functor& aFunctor);
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
    void PropertyProductImageHiresUri(Brhz& aProductImageHiresUri) const;
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
    void ProductImageHiresUriPropertyChanged();
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
    Action* iActionGetImageUri;
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
    PropertyString* iProductImageHiresUri;
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
    Functor iProductImageHiresUriChanged;
    Functor iStandbyChanged;
    Functor iStandbyTransitioningChanged;
    Functor iSourceIndexChanged;
    Functor iSourceCountChanged;
    Functor iSourceXmlChanged;
    Functor iAttributesChanged;
};


class SyncManufacturerAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncManufacturerAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncManufacturerAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncManufacturerAvOpenhomeOrgProduct4C::SyncManufacturerAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncManufacturerAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndManufacturer(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncModelAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncModelAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncModelAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
};

SyncModelAvOpenhomeOrgProduct4C::SyncModelAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
    : iService(aProxy)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
{
}

void SyncModelAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndModel(aAsync, iName, iInfo, iUrl, iImageUri);
}


class SyncProductAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncProductAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iRoom;
    Brh& iName;
    Brh& iInfo;
    Brh& iUrl;
    Brh& iImageUri;
    Brh& iImageHiresUri;
};

SyncProductAvOpenhomeOrgProduct4C::SyncProductAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri)
    : iService(aProxy)
    , iRoom(aRoom)
    , iName(aName)
    , iInfo(aInfo)
    , iUrl(aUrl)
    , iImageUri(aImageUri)
    , iImageHiresUri(aImageHiresUri)
{
}

void SyncProductAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProduct(aAsync, iRoom, iName, iInfo, iUrl, iImageUri, iImageHiresUri);
}


class SyncStandbyAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncStandbyAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    TBool& iValue;
};

SyncStandbyAvOpenhomeOrgProduct4C::SyncStandbyAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandby(aAsync, iValue);
}


class SyncStandbyTransitioningAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncStandbyTransitioningAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TBool& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncStandbyTransitioningAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    TBool& iValue;
};

SyncStandbyTransitioningAvOpenhomeOrgProduct4C::SyncStandbyTransitioningAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TBool& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncStandbyTransitioningAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndStandbyTransitioning(aAsync, iValue);
}


class SyncSetStandbyAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSetStandbyAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetStandbyAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
};

SyncSetStandbyAvOpenhomeOrgProduct4C::SyncSetStandbyAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetStandbyAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetStandby(aAsync);
}


class SyncSourceCountAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSourceCountAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceCountAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    TUint& iValue;
};

SyncSourceCountAvOpenhomeOrgProduct4C::SyncSourceCountAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceCountAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceCount(aAsync, iValue);
}


class SyncSourceXmlAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSourceXmlAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iValue;
};

SyncSourceXmlAvOpenhomeOrgProduct4C::SyncSourceXmlAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXml(aAsync, iValue);
}


class SyncSourceIndexAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSourceIndexAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceIndexAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    TUint& iValue;
};

SyncSourceIndexAvOpenhomeOrgProduct4C::SyncSourceIndexAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceIndexAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceIndex(aAsync, iValue);
}


class SyncSetSourceIndexAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSetSourceIndexAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
};

SyncSetSourceIndexAvOpenhomeOrgProduct4C::SyncSetSourceIndexAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndex(aAsync);
}


class SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
};

SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C::SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceIndexByName(aAsync);
}


class SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
};

SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C::SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy)
    : iService(aProxy)
{
}

void SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetSourceBySystemName(aAsync);
}


class SyncSourceAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSourceAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iSystemName;
    Brh& iType;
    Brh& iName;
    TBool& iVisible;
};

SyncSourceAvOpenhomeOrgProduct4C::SyncSourceAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
    : iService(aProxy)
    , iSystemName(aSystemName)
    , iType(aType)
    , iName(aName)
    , iVisible(aVisible)
{
}

void SyncSourceAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSource(aAsync, iSystemName, iType, iName, iVisible);
}


class SyncAttributesAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncAttributesAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncAttributesAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iValue;
};

SyncAttributesAvOpenhomeOrgProduct4C::SyncAttributesAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncAttributesAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndAttributes(aAsync, iValue);
}


class SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    TUint& iValue;
};

SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C::SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, TUint& aValue)
    : iService(aProxy)
    , iValue(aValue)
{
}

void SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSourceXmlChangeCount(aAsync, iValue);
}


class SyncGetImageUriAvOpenhomeOrgProduct4C : public SyncProxyAction
{
public:
    SyncGetImageUriAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aImageUri);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncGetImageUriAvOpenhomeOrgProduct4C() {};
private:
    CpProxyAvOpenhomeOrgProduct4C& iService;
    Brh& iImageUri;
};

SyncGetImageUriAvOpenhomeOrgProduct4C::SyncGetImageUriAvOpenhomeOrgProduct4C(CpProxyAvOpenhomeOrgProduct4C& aProxy, Brh& aImageUri)
    : iService(aProxy)
    , iImageUri(aImageUri)
{
}

void SyncGetImageUriAvOpenhomeOrgProduct4C::CompleteRequest(IAsync& aAsync)
{
    iService.EndGetImageUri(aAsync, iImageUri);
}

CpProxyAvOpenhomeOrgProduct4C::CpProxyAvOpenhomeOrgProduct4C(CpDeviceC aDevice)
    : CpProxyC("av-openhome-org", "Product", 4, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

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
    param = new OpenHome::Net::ParameterString("ImageHiresUri");
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

    iActionGetImageUri = new Action("GetImageUri");
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"Low";
    allowedValues[index++] = (TChar*)"High";
    param = new OpenHome::Net::ParameterString("Resolution", allowedValues, 2);
    iActionGetImageUri->AddInputParameter(param);
    delete[] allowedValues;
    param = new OpenHome::Net::ParameterString("ImageUri");
    iActionGetImageUri->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ManufacturerNamePropertyChanged);
    iManufacturerName = new PropertyString("ManufacturerName", functor);
    AddProperty(iManufacturerName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ManufacturerInfoPropertyChanged);
    iManufacturerInfo = new PropertyString("ManufacturerInfo", functor);
    AddProperty(iManufacturerInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ManufacturerUrlPropertyChanged);
    iManufacturerUrl = new PropertyString("ManufacturerUrl", functor);
    AddProperty(iManufacturerUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ManufacturerImageUriPropertyChanged);
    iManufacturerImageUri = new PropertyString("ManufacturerImageUri", functor);
    AddProperty(iManufacturerImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ModelNamePropertyChanged);
    iModelName = new PropertyString("ModelName", functor);
    AddProperty(iModelName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ModelInfoPropertyChanged);
    iModelInfo = new PropertyString("ModelInfo", functor);
    AddProperty(iModelInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ModelUrlPropertyChanged);
    iModelUrl = new PropertyString("ModelUrl", functor);
    AddProperty(iModelUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ModelImageUriPropertyChanged);
    iModelImageUri = new PropertyString("ModelImageUri", functor);
    AddProperty(iModelImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductRoomPropertyChanged);
    iProductRoom = new PropertyString("ProductRoom", functor);
    AddProperty(iProductRoom);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductNamePropertyChanged);
    iProductName = new PropertyString("ProductName", functor);
    AddProperty(iProductName);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductInfoPropertyChanged);
    iProductInfo = new PropertyString("ProductInfo", functor);
    AddProperty(iProductInfo);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductUrlPropertyChanged);
    iProductUrl = new PropertyString("ProductUrl", functor);
    AddProperty(iProductUrl);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductImageUriPropertyChanged);
    iProductImageUri = new PropertyString("ProductImageUri", functor);
    AddProperty(iProductImageUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::ProductImageHiresUriPropertyChanged);
    iProductImageHiresUri = new PropertyString("ProductImageHiresUri", functor);
    AddProperty(iProductImageHiresUri);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::StandbyPropertyChanged);
    iStandby = new PropertyBool("Standby", functor);
    AddProperty(iStandby);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::StandbyTransitioningPropertyChanged);
    iStandbyTransitioning = new PropertyBool("StandbyTransitioning", functor);
    AddProperty(iStandbyTransitioning);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::SourceIndexPropertyChanged);
    iSourceIndex = new PropertyUint("SourceIndex", functor);
    AddProperty(iSourceIndex);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::SourceCountPropertyChanged);
    iSourceCount = new PropertyUint("SourceCount", functor);
    AddProperty(iSourceCount);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::SourceXmlPropertyChanged);
    iSourceXml = new PropertyString("SourceXml", functor);
    AddProperty(iSourceXml);
    functor = MakeFunctor(*this, &CpProxyAvOpenhomeOrgProduct4C::AttributesPropertyChanged);
    iAttributes = new PropertyString("Attributes", functor);
    AddProperty(iAttributes);
}

CpProxyAvOpenhomeOrgProduct4C::~CpProxyAvOpenhomeOrgProduct4C()
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
    delete iActionGetImageUri;
}

void CpProxyAvOpenhomeOrgProduct4C::SyncManufacturer(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncManufacturerAvOpenhomeOrgProduct4C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginManufacturer(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginManufacturer(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct4C::EndManufacturer(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncModel(Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
{
    SyncModelAvOpenhomeOrgProduct4C sync(*this, aName, aInfo, aUrl, aImageUri);
    BeginModel(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginModel(FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct4C::EndModel(IAsync& aAsync, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncProduct(Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri)
{
    SyncProductAvOpenhomeOrgProduct4C sync(*this, aRoom, aName, aInfo, aUrl, aImageUri, aImageHiresUri);
    BeginProduct(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginProduct(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProduct, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProduct->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndProduct(IAsync& aAsync, Brh& aRoom, Brh& aName, Brh& aInfo, Brh& aUrl, Brh& aImageUri, Brh& aImageHiresUri)
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
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageHiresUri);
}

void CpProxyAvOpenhomeOrgProduct4C::SyncStandby(TBool& aValue)
{
    SyncStandbyAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginStandby(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginStandby(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStandby, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandby->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndStandby(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncStandbyTransitioning(TBool& aValue)
{
    SyncStandbyTransitioningAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginStandbyTransitioning(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginStandbyTransitioning(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionStandbyTransitioning, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionStandbyTransitioning->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndStandbyTransitioning(IAsync& aAsync, TBool& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSetStandby(TBool aValue)
{
    SyncSetStandbyAvOpenhomeOrgProduct4C sync(*this);
    BeginSetStandby(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSetStandby(TBool aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetStandby, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetStandby->InputParameters();
    invocation->AddInput(new ArgumentBool(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSetStandby(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSourceCount(TUint& aValue)
{
    SyncSourceCountAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginSourceCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSourceCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSourceCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSourceXml(Brh& aValue)
{
    SyncSourceXmlAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginSourceXml(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSourceXml(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXml, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXml->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSourceXml(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSourceIndex(TUint& aValue)
{
    SyncSourceIndexAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginSourceIndex(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSourceIndex(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceIndex, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceIndex->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSourceIndex(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSetSourceIndex(TUint aValue)
{
    SyncSetSourceIndexAvOpenhomeOrgProduct4C sync(*this);
    BeginSetSourceIndex(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSetSourceIndex(TUint aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndex, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndex->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSetSourceIndex(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSetSourceIndexByName(const Brx& aValue)
{
    SyncSetSourceIndexByNameAvOpenhomeOrgProduct4C sync(*this);
    BeginSetSourceIndexByName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSetSourceIndexByName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceIndexByName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceIndexByName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSetSourceIndexByName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSetSourceBySystemName(const Brx& aValue)
{
    SyncSetSourceBySystemNameAvOpenhomeOrgProduct4C sync(*this);
    BeginSetSourceBySystemName(aValue, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSetSourceBySystemName(const Brx& aValue, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetSourceBySystemName, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetSourceBySystemName->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aValue));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSetSourceBySystemName(IAsync& aAsync)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSource(TUint aIndex, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
{
    SyncSourceAvOpenhomeOrgProduct4C sync(*this, aSystemName, aType, aName, aVisible);
    BeginSource(aIndex, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSource(TUint aIndex, FunctorAsync& aFunctor)
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

void CpProxyAvOpenhomeOrgProduct4C::EndSource(IAsync& aAsync, Brh& aSystemName, Brh& aType, Brh& aName, TBool& aVisible)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncAttributes(Brh& aValue)
{
    SyncAttributesAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginAttributes(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginAttributes(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionAttributes, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionAttributes->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndAttributes(IAsync& aAsync, Brh& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncSourceXmlChangeCount(TUint& aValue)
{
    SyncSourceXmlChangeCountAvOpenhomeOrgProduct4C sync(*this, aValue);
    BeginSourceXmlChangeCount(sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginSourceXmlChangeCount(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSourceXmlChangeCount, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSourceXmlChangeCount->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndSourceXmlChangeCount(IAsync& aAsync, TUint& aValue)
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

void CpProxyAvOpenhomeOrgProduct4C::SyncGetImageUri(const Brx& aResolution, Brh& aImageUri)
{
    SyncGetImageUriAvOpenhomeOrgProduct4C sync(*this, aImageUri);
    BeginGetImageUri(aResolution, sync.Functor());
    sync.Wait();
}

void CpProxyAvOpenhomeOrgProduct4C::BeginGetImageUri(const Brx& aResolution, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionGetImageUri, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionGetImageUri->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aResolution));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionGetImageUri->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyAvOpenhomeOrgProduct4C::EndGetImageUri(IAsync& aAsync, Brh& aImageUri)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("GetImageUri"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aImageUri);
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyManufacturerNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyManufacturerInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyManufacturerUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyManufacturerImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iManufacturerImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyModelNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyModelInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyModelUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyModelImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iModelImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductRoomChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductRoomChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductNameChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductNameChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductUrlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductUrlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductImageUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductImageUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyProductImageHiresUriChanged(Functor& aFunctor)
{
    iLock.Wait();
    iProductImageHiresUriChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyStandbyChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStandbyChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyStandbyTransitioningChanged(Functor& aFunctor)
{
    iLock.Wait();
    iStandbyTransitioningChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertySourceIndexChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceIndexChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertySourceCountChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceCountChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertySourceXmlChanged(Functor& aFunctor)
{
    iLock.Wait();
    iSourceXmlChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::SetPropertyAttributesChanged(Functor& aFunctor)
{
    iLock.Wait();
    iAttributesChanged = aFunctor;
    iLock.Signal();
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyManufacturerName(Brhz& aManufacturerName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerName.Set(iManufacturerName->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyManufacturerInfo(Brhz& aManufacturerInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerInfo.Set(iManufacturerInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyManufacturerUrl(Brhz& aManufacturerUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerUrl.Set(iManufacturerUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyManufacturerImageUri(Brhz& aManufacturerImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aManufacturerImageUri.Set(iManufacturerImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyModelName(Brhz& aModelName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelName.Set(iModelName->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyModelInfo(Brhz& aModelInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelInfo.Set(iModelInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyModelUrl(Brhz& aModelUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelUrl.Set(iModelUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyModelImageUri(Brhz& aModelImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aModelImageUri.Set(iModelImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductRoom(Brhz& aProductRoom) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductRoom.Set(iProductRoom->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductName(Brhz& aProductName) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductName.Set(iProductName->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductInfo(Brhz& aProductInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductInfo.Set(iProductInfo->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductUrl(Brhz& aProductUrl) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductUrl.Set(iProductUrl->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductImageUri(Brhz& aProductImageUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductImageUri.Set(iProductImageUri->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyProductImageHiresUri(Brhz& aProductImageHiresUri) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aProductImageHiresUri.Set(iProductImageHiresUri->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyStandby(TBool& aStandby) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStandby = iStandby->Value();
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyStandbyTransitioning(TBool& aStandbyTransitioning) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aStandbyTransitioning = iStandbyTransitioning->Value();
}

void CpProxyAvOpenhomeOrgProduct4C::PropertySourceIndex(TUint& aSourceIndex) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceIndex = iSourceIndex->Value();
}

void CpProxyAvOpenhomeOrgProduct4C::PropertySourceCount(TUint& aSourceCount) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceCount = iSourceCount->Value();
}

void CpProxyAvOpenhomeOrgProduct4C::PropertySourceXml(Brhz& aSourceXml) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aSourceXml.Set(iSourceXml->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::PropertyAttributes(Brhz& aAttributes) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aAttributes.Set(iAttributes->Value());
}

void CpProxyAvOpenhomeOrgProduct4C::ManufacturerNamePropertyChanged()
{
    ReportEvent(iManufacturerNameChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ManufacturerInfoPropertyChanged()
{
    ReportEvent(iManufacturerInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ManufacturerUrlPropertyChanged()
{
    ReportEvent(iManufacturerUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ManufacturerImageUriPropertyChanged()
{
    ReportEvent(iManufacturerImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ModelNamePropertyChanged()
{
    ReportEvent(iModelNameChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ModelInfoPropertyChanged()
{
    ReportEvent(iModelInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ModelUrlPropertyChanged()
{
    ReportEvent(iModelUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ModelImageUriPropertyChanged()
{
    ReportEvent(iModelImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductRoomPropertyChanged()
{
    ReportEvent(iProductRoomChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductNamePropertyChanged()
{
    ReportEvent(iProductNameChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductInfoPropertyChanged()
{
    ReportEvent(iProductInfoChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductUrlPropertyChanged()
{
    ReportEvent(iProductUrlChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductImageUriPropertyChanged()
{
    ReportEvent(iProductImageUriChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::ProductImageHiresUriPropertyChanged()
{
    ReportEvent(iProductImageHiresUriChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::StandbyPropertyChanged()
{
    ReportEvent(iStandbyChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::StandbyTransitioningPropertyChanged()
{
    ReportEvent(iStandbyTransitioningChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::SourceIndexPropertyChanged()
{
    ReportEvent(iSourceIndexChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::SourceCountPropertyChanged()
{
    ReportEvent(iSourceCountChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::SourceXmlPropertyChanged()
{
    ReportEvent(iSourceXmlChanged);
}

void CpProxyAvOpenhomeOrgProduct4C::AttributesPropertyChanged()
{
    ReportEvent(iAttributesChanged);
}


THandle STDCALL CpProxyAvOpenhomeOrgProduct4Create(CpDeviceC aDevice)
{
    return new CpProxyAvOpenhomeOrgProduct4C(aDevice);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4Destroy(THandle aHandle)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncManufacturer(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginManufacturer(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginManufacturer(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndManufacturer(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncModel(THandle aHandle, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginModel(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginModel(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndModel(THandle aHandle, OhNetHandleAsync aAsync, char** aName, char** aInfo, char** aUrl, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncProduct(THandle aHandle, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri, char** aImageHiresUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aRoom;
    Brh buf_aName;
    Brh buf_aInfo;
    Brh buf_aUrl;
    Brh buf_aImageUri;
    Brh buf_aImageHiresUri;
    int32_t err = 0;
    try {
        proxyC->SyncProduct(buf_aRoom, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri, buf_aImageHiresUri);
        *aRoom = buf_aRoom.Extract();
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
        *aImageHiresUri = buf_aImageHiresUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aRoom = NULL;
        *aName = NULL;
        *aInfo = NULL;
        *aUrl = NULL;
        *aImageUri = NULL;
        *aImageHiresUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginProduct(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProduct(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndProduct(THandle aHandle, OhNetHandleAsync aAsync, char** aRoom, char** aName, char** aInfo, char** aUrl, char** aImageUri, char** aImageHiresUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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
    Brh buf_aImageHiresUri;
    *aImageHiresUri = NULL;
    try {
        proxyC->EndProduct(*async, buf_aRoom, buf_aName, buf_aInfo, buf_aUrl, buf_aImageUri, buf_aImageHiresUri);
        *aRoom = buf_aRoom.Extract();
        *aName = buf_aName.Extract();
        *aInfo = buf_aInfo.Extract();
        *aUrl = buf_aUrl.Extract();
        *aImageUri = buf_aImageUri.Extract();
        *aImageHiresUri = buf_aImageHiresUri.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncStandby(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginStandby(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStandby(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndStandby(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncStandbyTransitioning(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginStandbyTransitioning(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginStandbyTransitioning(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndStandbyTransitioning(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSetStandby(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSetStandby(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetStandby((aValue==0? false : true), functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSetStandby(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSourceCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSourceCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSourceCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSourceXml(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSourceXml(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXml(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSourceXml(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSourceIndex(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSourceIndex(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceIndex(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSourceIndex(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSetSourceIndex(THandle aHandle, uint32_t aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSetSourceIndex(THandle aHandle, uint32_t aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndex(aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSetSourceIndex(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSetSourceIndexByName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSetSourceIndexByName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceIndexByName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSetSourceIndexByName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSetSourceBySystemName(THandle aHandle, const char* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSetSourceBySystemName(THandle aHandle, const char* aValue, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aValue(aValue);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetSourceBySystemName(buf_aValue, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSetSourceBySystemName(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSource(THandle aHandle, uint32_t aIndex, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSource(THandle aHandle, uint32_t aIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSource(aIndex, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSource(THandle aHandle, OhNetHandleAsync aAsync, char** aSystemName, char** aType, char** aName, uint32_t* aVisible)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncAttributes(THandle aHandle, char** aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginAttributes(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginAttributes(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndAttributes(THandle aHandle, OhNetHandleAsync aAsync, char** aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncSourceXmlChangeCount(THandle aHandle, uint32_t* aValue)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginSourceXmlChangeCount(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSourceXmlChangeCount(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndSourceXmlChangeCount(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aValue)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4SyncGetImageUri(THandle aHandle, const char* aResolution, char** aImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResolution(aResolution);
    Brh buf_aImageUri;
    int32_t err = 0;
    try {
        proxyC->SyncGetImageUri(buf_aResolution, buf_aImageUri);
        *aImageUri = buf_aImageUri.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aImageUri = NULL;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct4BeginGetImageUri(THandle aHandle, const char* aResolution, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aResolution(aResolution);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginGetImageUri(buf_aResolution, functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4EndGetImageUri(THandle aHandle, OhNetHandleAsync aAsync, char** aImageUri)
{
    int32_t err = 0;
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aImageUri;
    *aImageUri = NULL;
    try {
        proxyC->EndGetImageUri(*async, buf_aImageUri);
        *aImageUri = buf_aImageUri.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyManufacturerNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyManufacturerInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyManufacturerUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyManufacturerImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyManufacturerImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyModelNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyModelInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyModelUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyModelImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyModelImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductRoomChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductRoomChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductNameChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductNameChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductInfoChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductUrlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductUrlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductImageUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductImageUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyProductImageHiresUriChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyProductImageHiresUriChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyStandbyChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStandbyChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyStandbyTransitioningChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyStandbyTransitioningChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertySourceIndexChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceIndexChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertySourceCountChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceCountChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertySourceXmlChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertySourceXmlChanged(functor);
}

void STDCALL CpProxyAvOpenhomeOrgProduct4SetPropertyAttributesChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyAttributesChanged(functor);
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyManufacturerName(THandle aHandle, char** aManufacturerName)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyManufacturerInfo(THandle aHandle, char** aManufacturerInfo)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyManufacturerUrl(THandle aHandle, char** aManufacturerUrl)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyManufacturerImageUri(THandle aHandle, char** aManufacturerImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyModelName(THandle aHandle, char** aModelName)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyModelInfo(THandle aHandle, char** aModelInfo)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyModelUrl(THandle aHandle, char** aModelUrl)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyModelImageUri(THandle aHandle, char** aModelImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductRoom(THandle aHandle, char** aProductRoom)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductName(THandle aHandle, char** aProductName)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductInfo(THandle aHandle, char** aProductInfo)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductUrl(THandle aHandle, char** aProductUrl)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductImageUri(THandle aHandle, char** aProductImageUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyProductImageHiresUri(THandle aHandle, char** aProductImageHiresUri)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aProductImageHiresUri;
    try {
        proxyC->PropertyProductImageHiresUri(buf_aProductImageHiresUri);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aProductImageHiresUri = buf_aProductImageHiresUri.Transfer();
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyStandby(THandle aHandle, uint32_t* aStandby)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyStandbyTransitioning(THandle aHandle, uint32_t* aStandbyTransitioning)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertySourceIndex(THandle aHandle, uint32_t* aSourceIndex)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySourceIndex(*aSourceIndex);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertySourceCount(THandle aHandle, uint32_t* aSourceCount)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
    ASSERT(proxyC != NULL);
    try {
        proxyC->PropertySourceCount(*aSourceCount);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    return 0;
}

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertySourceXml(THandle aHandle, char** aSourceXml)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

int32_t STDCALL CpProxyAvOpenhomeOrgProduct4PropertyAttributes(THandle aHandle, char** aAttributes)
{
    CpProxyAvOpenhomeOrgProduct4C* proxyC = reinterpret_cast<CpProxyAvOpenhomeOrgProduct4C*>(aHandle);
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

