#include "CpLinnCoUkVolkano3.h"
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

class CpProxyLinnCoUkVolkano3C : public CpProxyC
{
public:
    CpProxyLinnCoUkVolkano3C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkVolkano3C();
    //CpProxyLinnCoUkVolkano3* Proxy() { return static_cast<CpProxyLinnCoUkVolkano3*>(iProxy); }

    void SyncReboot();
    void BeginReboot(FunctorAsync& aFunctor);
    void EndReboot(IAsync& aAsync);

    void SyncBootMode(Brh& aaMode);
    void BeginBootMode(FunctorAsync& aFunctor);
    void EndBootMode(IAsync& aAsync, Brh& aaMode);

    void SyncSetBootMode(const Brx& aaMode);
    void BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor);
    void EndSetBootMode(IAsync& aAsync);

    void SyncBspType(Brh& aaBspType);
    void BeginBspType(FunctorAsync& aFunctor);
    void EndBspType(IAsync& aAsync, Brh& aaBspType);

    void SyncUglyName(Brh& aaUglyName);
    void BeginUglyName(FunctorAsync& aFunctor);
    void EndUglyName(IAsync& aAsync, Brh& aaUglyName);

    void SyncIpAddress(Brh& aaIpAddress);
    void BeginIpAddress(FunctorAsync& aFunctor);
    void EndIpAddress(IAsync& aAsync, Brh& aaIpAddress);

    void SyncIpAddressList(Brh& aaIpAddressList);
    void BeginIpAddressList(FunctorAsync& aFunctor);
    void EndIpAddressList(IAsync& aAsync, Brh& aaIpAddressList);

    void SyncMacAddress(Brh& aaMacAddress);
    void BeginMacAddress(FunctorAsync& aFunctor);
    void EndMacAddress(IAsync& aAsync, Brh& aaMacAddress);

    void SyncMacAddressList(Brh& aaMacAddressList);
    void BeginMacAddressList(FunctorAsync& aFunctor);
    void EndMacAddressList(IAsync& aAsync, Brh& aaMacAddressList);

    void SyncProductId(Brh& aaProductNumber);
    void BeginProductId(FunctorAsync& aFunctor);
    void EndProductId(IAsync& aAsync, Brh& aaProductNumber);

    void SyncBoardId(TUint aaIndex, Brh& aaBoardNumber);
    void BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor);
    void EndBoardId(IAsync& aAsync, Brh& aaBoardNumber);

    void SyncBoardType(TUint aaIndex, Brh& aaBoardNumber);
    void BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor);
    void EndBoardType(IAsync& aAsync, Brh& aaBoardNumber);

    void SyncMaxBoards(TUint& aaMaxBoards);
    void BeginMaxBoards(FunctorAsync& aFunctor);
    void EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards);

    void SyncSoftwareVersion(Brh& aaSoftwareVersion);
    void BeginSoftwareVersion(FunctorAsync& aFunctor);
    void EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion);

    void SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion);
    void BeginSoftwareUpdate(FunctorAsync& aFunctor);
    void EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion);

    void SyncDeviceInfo(Brh& aaDeviceInfoXml);
    void BeginDeviceInfo(FunctorAsync& aFunctor);
    void EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml);

    void SyncCoreBoardId(Brh& aaCoreBoardId);
    void BeginCoreBoardId(FunctorAsync& aFunctor);
    void EndCoreBoardId(IAsync& aAsync, Brh& aaCoreBoardId);

    void SetPropertyDeviceInfoChanged(Functor& aFunctor);
    void SetPropertyIpAddressChanged(Functor& aFunctor);
    void SetPropertyIpAddressListChanged(Functor& aFunctor);
    void SetPropertyMacAddressListChanged(Functor& aFunctor);
    void SetPropertyCoreBoardIdChanged(Functor& aFunctor);

    void PropertyDeviceInfo(Brhz& aDeviceInfo) const;
    void PropertyIpAddress(Brhz& aIpAddress) const;
    void PropertyIpAddressList(Brhz& aIpAddressList) const;
    void PropertyMacAddressList(Brhz& aMacAddressList) const;
    void PropertyCoreBoardId(Brhz& aCoreBoardId) const;
private:
    void DeviceInfoPropertyChanged();
    void IpAddressPropertyChanged();
    void IpAddressListPropertyChanged();
    void MacAddressListPropertyChanged();
    void CoreBoardIdPropertyChanged();
private:
    Mutex iLock;
    Action* iActionReboot;
    Action* iActionBootMode;
    Action* iActionSetBootMode;
    Action* iActionBspType;
    Action* iActionUglyName;
    Action* iActionIpAddress;
    Action* iActionIpAddressList;
    Action* iActionMacAddress;
    Action* iActionMacAddressList;
    Action* iActionProductId;
    Action* iActionBoardId;
    Action* iActionBoardType;
    Action* iActionMaxBoards;
    Action* iActionSoftwareVersion;
    Action* iActionSoftwareUpdate;
    Action* iActionDeviceInfo;
    Action* iActionCoreBoardId;
    PropertyString* iDeviceInfo;
    PropertyString* iIpAddress;
    PropertyString* iIpAddressList;
    PropertyString* iMacAddressList;
    PropertyString* iCoreBoardId;
    Functor iDeviceInfoChanged;
    Functor iIpAddressChanged;
    Functor iIpAddressListChanged;
    Functor iMacAddressListChanged;
    Functor iCoreBoardIdChanged;
};


class SyncRebootLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
};

SyncRebootLinnCoUkVolkano3C::SyncRebootLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaMode;
};

SyncBootModeLinnCoUkVolkano3C::SyncBootModeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
};

SyncSetBootModeLinnCoUkVolkano3C::SyncSetBootModeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaBspType;
};

SyncBspTypeLinnCoUkVolkano3C::SyncBspTypeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano3C::SyncUglyNameLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncIpAddressLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaIpAddress;
};

SyncIpAddressLinnCoUkVolkano3C::SyncIpAddressLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}


class SyncIpAddressListLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressListLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaIpAddressList;
};

SyncIpAddressListLinnCoUkVolkano3C::SyncIpAddressListLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}


class SyncMacAddressLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano3C::SyncMacAddressLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncMacAddressListLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressListLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaMacAddressList;
};

SyncMacAddressListLinnCoUkVolkano3C::SyncMacAddressListLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}


class SyncProductIdLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano3C::SyncProductIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano3C::SyncBoardIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano3C::SyncBoardTypeLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, TUint& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    TUint& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano3C::SyncMaxBoardsLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, TUint& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano3C::SyncSoftwareVersionLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    TBool& iaAvailable;
    Brh& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano3C::SyncSoftwareUpdateLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano3C::SyncDeviceInfoLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}


class SyncCoreBoardIdLinnCoUkVolkano3C : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCoreBoardIdLinnCoUkVolkano3C() {};
private:
    CpProxyLinnCoUkVolkano3C& iService;
    Brh& iaCoreBoardId;
};

SyncCoreBoardIdLinnCoUkVolkano3C::SyncCoreBoardIdLinnCoUkVolkano3C(CpProxyLinnCoUkVolkano3C& aProxy, Brh& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano3C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}

CpProxyLinnCoUkVolkano3C::CpProxyLinnCoUkVolkano3C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Volkano", 3, *reinterpret_cast<CpiDevice*>(aDevice))
    , iLock("MPCS")
{
    OpenHome::Net::Parameter* param;
    TChar** allowedValues;
    TUint index;

    iActionReboot = new Action("Reboot");

    iActionBootMode = new Action("BootMode");
    index = 0;
    allowedValues = new TChar*[3];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    allowedValues[index++] = (TChar*)"Ram";
    param = new OpenHome::Net::ParameterString("aMode", allowedValues, 3);
    iActionBootMode->AddOutputParameter(param);
    delete[] allowedValues;

    iActionSetBootMode = new Action("SetBootMode");
    index = 0;
    allowedValues = new TChar*[2];
    allowedValues[index++] = (TChar*)"Main";
    allowedValues[index++] = (TChar*)"Fallback";
    param = new OpenHome::Net::ParameterString("aMode", allowedValues, 2);
    iActionSetBootMode->AddInputParameter(param);
    delete[] allowedValues;

    iActionBspType = new Action("BspType");
    param = new OpenHome::Net::ParameterString("aBspType");
    iActionBspType->AddOutputParameter(param);

    iActionUglyName = new Action("UglyName");
    param = new OpenHome::Net::ParameterString("aUglyName");
    iActionUglyName->AddOutputParameter(param);

    iActionIpAddress = new Action("IpAddress");
    param = new OpenHome::Net::ParameterString("aIpAddress");
    iActionIpAddress->AddOutputParameter(param);

    iActionIpAddressList = new Action("IpAddressList");
    param = new OpenHome::Net::ParameterString("aIpAddressList");
    iActionIpAddressList->AddOutputParameter(param);

    iActionMacAddress = new Action("MacAddress");
    param = new OpenHome::Net::ParameterString("aMacAddress");
    iActionMacAddress->AddOutputParameter(param);

    iActionMacAddressList = new Action("MacAddressList");
    param = new OpenHome::Net::ParameterString("aMacAddressList");
    iActionMacAddressList->AddOutputParameter(param);

    iActionProductId = new Action("ProductId");
    param = new OpenHome::Net::ParameterString("aProductNumber");
    iActionProductId->AddOutputParameter(param);

    iActionBoardId = new Action("BoardId");
    param = new OpenHome::Net::ParameterUint("aIndex");
    iActionBoardId->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aBoardNumber");
    iActionBoardId->AddOutputParameter(param);

    iActionBoardType = new Action("BoardType");
    param = new OpenHome::Net::ParameterUint("aIndex");
    iActionBoardType->AddInputParameter(param);
    param = new OpenHome::Net::ParameterString("aBoardNumber");
    iActionBoardType->AddOutputParameter(param);

    iActionMaxBoards = new Action("MaxBoards");
    param = new OpenHome::Net::ParameterUint("aMaxBoards");
    iActionMaxBoards->AddOutputParameter(param);

    iActionSoftwareVersion = new Action("SoftwareVersion");
    param = new OpenHome::Net::ParameterString("aSoftwareVersion");
    iActionSoftwareVersion->AddOutputParameter(param);

    iActionSoftwareUpdate = new Action("SoftwareUpdate");
    param = new OpenHome::Net::ParameterBool("aAvailable");
    iActionSoftwareUpdate->AddOutputParameter(param);
    param = new OpenHome::Net::ParameterString("aSoftwareVersion");
    iActionSoftwareUpdate->AddOutputParameter(param);

    iActionDeviceInfo = new Action("DeviceInfo");
    param = new OpenHome::Net::ParameterString("aDeviceInfoXml");
    iActionDeviceInfo->AddOutputParameter(param);

    iActionCoreBoardId = new Action("CoreBoardId");
    param = new OpenHome::Net::ParameterString("aCoreBoardId");
    iActionCoreBoardId->AddOutputParameter(param);

    Functor functor;
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3C::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3C::IpAddressPropertyChanged);
    iIpAddress = new PropertyString("IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3C::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3C::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3C::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano3C::~CpProxyLinnCoUkVolkano3C()
{
    DestroyService();
    delete iActionReboot;
    delete iActionBootMode;
    delete iActionSetBootMode;
    delete iActionBspType;
    delete iActionUglyName;
    delete iActionIpAddress;
    delete iActionIpAddressList;
    delete iActionMacAddress;
    delete iActionMacAddressList;
    delete iActionProductId;
    delete iActionBoardId;
    delete iActionBoardType;
    delete iActionMaxBoards;
    delete iActionSoftwareVersion;
    delete iActionSoftwareUpdate;
    delete iActionDeviceInfo;
    delete iActionCoreBoardId;
}

void CpProxyLinnCoUkVolkano3C::SyncReboot()
{
    SyncRebootLinnCoUkVolkano3C sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReboot, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndReboot(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("Reboot"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkVolkano3C::SyncBootMode(Brh& aaMode)
{
    SyncBootModeLinnCoUkVolkano3C sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndBootMode(IAsync& aAsync, Brh& aaMode)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BootMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaMode);
}

void CpProxyLinnCoUkVolkano3C::SyncSetBootMode(const Brx& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano3C sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaMode));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndSetBootMode(IAsync& aAsync)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SetBootMode"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
}

void CpProxyLinnCoUkVolkano3C::SyncBspType(Brh& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano3C sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndBspType(IAsync& aAsync, Brh& aaBspType)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BspType"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaBspType);
}

void CpProxyLinnCoUkVolkano3C::SyncUglyName(Brh& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano3C sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndUglyName(IAsync& aAsync, Brh& aaUglyName)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("UglyName"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaUglyName);
}

void CpProxyLinnCoUkVolkano3C::SyncIpAddress(Brh& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano3C sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndIpAddress(IAsync& aAsync, Brh& aaIpAddress)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IpAddress"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaIpAddress);
}

void CpProxyLinnCoUkVolkano3C::SyncIpAddressList(Brh& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano3C sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndIpAddressList(IAsync& aAsync, Brh& aaIpAddressList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("IpAddressList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaIpAddressList);
}

void CpProxyLinnCoUkVolkano3C::SyncMacAddress(Brh& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano3C sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndMacAddress(IAsync& aAsync, Brh& aaMacAddress)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("MacAddress"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaMacAddress);
}

void CpProxyLinnCoUkVolkano3C::SyncMacAddressList(Brh& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano3C sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndMacAddressList(IAsync& aAsync, Brh& aaMacAddressList)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("MacAddressList"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaMacAddressList);
}

void CpProxyLinnCoUkVolkano3C::SyncProductId(Brh& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano3C sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndProductId(IAsync& aAsync, Brh& aaProductNumber)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("ProductId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaProductNumber);
}

void CpProxyLinnCoUkVolkano3C::SyncBoardId(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano3C sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBoardId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndBoardId(IAsync& aAsync, Brh& aaBoardNumber)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BoardId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaBoardNumber);
}

void CpProxyLinnCoUkVolkano3C::SyncBoardType(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano3C sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBoardType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardType->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndBoardType(IAsync& aAsync, Brh& aaBoardNumber)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("BoardType"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaBoardNumber);
}

void CpProxyLinnCoUkVolkano3C::SyncMaxBoards(TUint& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano3C sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("MaxBoards"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aaMaxBoards = ((ArgumentUint*)invocation.OutputArguments()[index++])->Value();
}

void CpProxyLinnCoUkVolkano3C::SyncSoftwareVersion(Brh& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano3C sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SoftwareVersion"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaSoftwareVersion);
}

void CpProxyLinnCoUkVolkano3C::SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano3C sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("SoftwareUpdate"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    aaAvailable = ((ArgumentBool*)invocation.OutputArguments()[index++])->Value();
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaSoftwareVersion);
}

void CpProxyLinnCoUkVolkano3C::SyncDeviceInfo(Brh& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano3C sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("DeviceInfo"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaDeviceInfoXml);
}

void CpProxyLinnCoUkVolkano3C::SyncCoreBoardId(Brh& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano3C sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3C::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3C::EndCoreBoardId(IAsync& aAsync, Brh& aaCoreBoardId)
{
    ASSERT(((Async&)aAsync).Type() == Async::eInvocation);
    Invocation& invocation = (Invocation&)aAsync;
    ASSERT(invocation.Action().Name() == Brn("CoreBoardId"));

    Error::ELevel level;
    TUint code;
    const TChar* ignore;
    if (invocation.Error(level, code, ignore)) {
        THROW_PROXYERROR(level, code);
    }
    TUint index = 0;
    ((ArgumentString*)invocation.OutputArguments()[index++])->TransferTo(aaCoreBoardId);
}

void CpProxyLinnCoUkVolkano3C::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano3C::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIpAddressChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano3C::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIpAddressListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano3C::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMacAddressListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano3C::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCoreBoardIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano3C::PropertyDeviceInfo(Brhz& aDeviceInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceInfo.Set(iDeviceInfo->Value());
}

void CpProxyLinnCoUkVolkano3C::PropertyIpAddress(Brhz& aIpAddress) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIpAddress.Set(iIpAddress->Value());
}

void CpProxyLinnCoUkVolkano3C::PropertyIpAddressList(Brhz& aIpAddressList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIpAddressList.Set(iIpAddressList->Value());
}

void CpProxyLinnCoUkVolkano3C::PropertyMacAddressList(Brhz& aMacAddressList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMacAddressList.Set(iMacAddressList->Value());
}

void CpProxyLinnCoUkVolkano3C::PropertyCoreBoardId(Brhz& aCoreBoardId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCoreBoardId.Set(iCoreBoardId->Value());
}

void CpProxyLinnCoUkVolkano3C::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano3C::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyLinnCoUkVolkano3C::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano3C::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano3C::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}


THandle STDCALL CpProxyLinnCoUkVolkano3Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkVolkano3C(aDevice);
}

void STDCALL CpProxyLinnCoUkVolkano3Destroy(THandle aHandle)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncReboot(THandle aHandle)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncReboot();
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginReboot(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReboot(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndReboot(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndReboot(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncBootMode(THandle aHandle, char** aaMode)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMode;
    int32_t err = 0;
    try {
        proxyC->SyncBootMode(buf_aaMode);
        *aaMode = buf_aaMode.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaMode = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginBootMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootMode(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndBootMode(THandle aHandle, OhNetHandleAsync aAsync, char** aaMode)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaMode;
    *aaMode = NULL;
    try {
        proxyC->EndBootMode(*async, buf_aaMode);
        *aaMode = buf_aaMode.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncSetBootMode(THandle aHandle, const char* aaMode)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMode(aaMode);
    int32_t err = 0;
    try {
        proxyC->SyncSetBootMode(buf_aaMode);
    }
    catch (ProxyError& ) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginSetBootMode(THandle aHandle, const char* aaMode, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMode(aaMode);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBootMode(buf_aaMode, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndSetBootMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndSetBootMode(*async);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncBspType(THandle aHandle, char** aaBspType)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaBspType;
    int32_t err = 0;
    try {
        proxyC->SyncBspType(buf_aaBspType);
        *aaBspType = buf_aaBspType.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaBspType = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginBspType(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBspType(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndBspType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBspType)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaBspType;
    *aaBspType = NULL;
    try {
        proxyC->EndBspType(*async, buf_aaBspType);
        *aaBspType = buf_aaBspType.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncUglyName(THandle aHandle, char** aaUglyName)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaUglyName;
    int32_t err = 0;
    try {
        proxyC->SyncUglyName(buf_aaUglyName);
        *aaUglyName = buf_aaUglyName.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaUglyName = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginUglyName(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUglyName(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndUglyName(THandle aHandle, OhNetHandleAsync aAsync, char** aaUglyName)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaUglyName;
    *aaUglyName = NULL;
    try {
        proxyC->EndUglyName(*async, buf_aaUglyName);
        *aaUglyName = buf_aaUglyName.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncIpAddress(THandle aHandle, char** aaIpAddress)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaIpAddress;
    int32_t err = 0;
    try {
        proxyC->SyncIpAddress(buf_aaIpAddress);
        *aaIpAddress = buf_aaIpAddress.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaIpAddress = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginIpAddress(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIpAddress(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndIpAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aaIpAddress)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaIpAddress;
    *aaIpAddress = NULL;
    try {
        proxyC->EndIpAddress(*async, buf_aaIpAddress);
        *aaIpAddress = buf_aaIpAddress.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncIpAddressList(THandle aHandle, char** aaIpAddressList)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaIpAddressList;
    int32_t err = 0;
    try {
        proxyC->SyncIpAddressList(buf_aaIpAddressList);
        *aaIpAddressList = buf_aaIpAddressList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaIpAddressList = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginIpAddressList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIpAddressList(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndIpAddressList(THandle aHandle, OhNetHandleAsync aAsync, char** aaIpAddressList)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaIpAddressList;
    *aaIpAddressList = NULL;
    try {
        proxyC->EndIpAddressList(*async, buf_aaIpAddressList);
        *aaIpAddressList = buf_aaIpAddressList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncMacAddress(THandle aHandle, char** aaMacAddress)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMacAddress;
    int32_t err = 0;
    try {
        proxyC->SyncMacAddress(buf_aaMacAddress);
        *aaMacAddress = buf_aaMacAddress.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaMacAddress = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginMacAddress(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMacAddress(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndMacAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aaMacAddress)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaMacAddress;
    *aaMacAddress = NULL;
    try {
        proxyC->EndMacAddress(*async, buf_aaMacAddress);
        *aaMacAddress = buf_aaMacAddress.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncMacAddressList(THandle aHandle, char** aaMacAddressList)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMacAddressList;
    int32_t err = 0;
    try {
        proxyC->SyncMacAddressList(buf_aaMacAddressList);
        *aaMacAddressList = buf_aaMacAddressList.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaMacAddressList = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginMacAddressList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMacAddressList(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndMacAddressList(THandle aHandle, OhNetHandleAsync aAsync, char** aaMacAddressList)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaMacAddressList;
    *aaMacAddressList = NULL;
    try {
        proxyC->EndMacAddressList(*async, buf_aaMacAddressList);
        *aaMacAddressList = buf_aaMacAddressList.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncProductId(THandle aHandle, char** aaProductNumber)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaProductNumber;
    int32_t err = 0;
    try {
        proxyC->SyncProductId(buf_aaProductNumber);
        *aaProductNumber = buf_aaProductNumber.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaProductNumber = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginProductId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProductId(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndProductId(THandle aHandle, OhNetHandleAsync aAsync, char** aaProductNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaProductNumber;
    *aaProductNumber = NULL;
    try {
        proxyC->EndProductId(*async, buf_aaProductNumber);
        *aaProductNumber = buf_aaProductNumber.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncBoardId(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaBoardNumber;
    int32_t err = 0;
    try {
        proxyC->SyncBoardId(aaIndex, buf_aaBoardNumber);
        *aaBoardNumber = buf_aaBoardNumber.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaBoardNumber = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginBoardId(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardId(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndBoardId(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaBoardNumber;
    *aaBoardNumber = NULL;
    try {
        proxyC->EndBoardId(*async, buf_aaBoardNumber);
        *aaBoardNumber = buf_aaBoardNumber.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncBoardType(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaBoardNumber;
    int32_t err = 0;
    try {
        proxyC->SyncBoardType(aaIndex, buf_aaBoardNumber);
        *aaBoardNumber = buf_aaBoardNumber.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaBoardNumber = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginBoardType(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardType(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndBoardType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaBoardNumber;
    *aaBoardNumber = NULL;
    try {
        proxyC->EndBoardType(*async, buf_aaBoardNumber);
        *aaBoardNumber = buf_aaBoardNumber.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncMaxBoards(THandle aHandle, uint32_t* aaMaxBoards)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    int32_t err = 0;
    try {
        proxyC->SyncMaxBoards(*aaMaxBoards);
    }
    catch (ProxyError& ) {
        err = -1;
        *aaMaxBoards = 0;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginMaxBoards(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMaxBoards(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndMaxBoards(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaMaxBoards)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    try {
        proxyC->EndMaxBoards(*async, *aaMaxBoards);
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncSoftwareVersion(THandle aHandle, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaSoftwareVersion;
    int32_t err = 0;
    try {
        proxyC->SyncSoftwareVersion(buf_aaSoftwareVersion);
        *aaSoftwareVersion = buf_aaSoftwareVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaSoftwareVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginSoftwareVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndSoftwareVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaSoftwareVersion;
    *aaSoftwareVersion = NULL;
    try {
        proxyC->EndSoftwareVersion(*async, buf_aaSoftwareVersion);
        *aaSoftwareVersion = buf_aaSoftwareVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncSoftwareUpdate(THandle aHandle, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    TBool aAvailable;
    Brh buf_aaSoftwareVersion;
    int32_t err = 0;
    try {
        proxyC->SyncSoftwareUpdate(aAvailable, buf_aaSoftwareVersion);
        *aaAvailable = aAvailable? 1 : 0;
        *aaSoftwareVersion = buf_aaSoftwareVersion.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaAvailable = false;
        *aaSoftwareVersion = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginSoftwareUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareUpdate(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndSoftwareUpdate(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    TBool aAvailable;
    Brh buf_aaSoftwareVersion;
    *aaSoftwareVersion = NULL;
    try {
        proxyC->EndSoftwareUpdate(*async, aAvailable, buf_aaSoftwareVersion);
        *aaAvailable = aAvailable? 1 : 0;
        *aaSoftwareVersion = buf_aaSoftwareVersion.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncDeviceInfo(THandle aHandle, char** aaDeviceInfoXml)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaDeviceInfoXml;
    int32_t err = 0;
    try {
        proxyC->SyncDeviceInfo(buf_aaDeviceInfoXml);
        *aaDeviceInfoXml = buf_aaDeviceInfoXml.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaDeviceInfoXml = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginDeviceInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndDeviceInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aaDeviceInfoXml)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaDeviceInfoXml;
    *aaDeviceInfoXml = NULL;
    try {
        proxyC->EndDeviceInfo(*async, buf_aaDeviceInfoXml);
        *aaDeviceInfoXml = buf_aaDeviceInfoXml.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3SyncCoreBoardId(THandle aHandle, char** aaCoreBoardId)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaCoreBoardId;
    int32_t err = 0;
    try {
        proxyC->SyncCoreBoardId(buf_aaCoreBoardId);
        *aaCoreBoardId = buf_aaCoreBoardId.Extract();
    }
    catch (ProxyError& ) {
        err = -1;
        *aaCoreBoardId = NULL;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3BeginCoreBoardId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCoreBoardId(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3EndCoreBoardId(THandle aHandle, OhNetHandleAsync aAsync, char** aaCoreBoardId)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    IAsync* async = reinterpret_cast<IAsync*>(aAsync);
    ASSERT(async != NULL);
    Brh buf_aaCoreBoardId;
    *aaCoreBoardId = NULL;
    try {
        proxyC->EndCoreBoardId(*async, buf_aaCoreBoardId);
        *aaCoreBoardId = buf_aaCoreBoardId.Extract();
    }
    catch(...) {
        err = -1;
    }
    return err;
}

void STDCALL CpProxyLinnCoUkVolkano3SetPropertyDeviceInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceInfoChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano3SetPropertyIpAddressChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIpAddressChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano3SetPropertyIpAddressListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIpAddressListChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano3SetPropertyMacAddressListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMacAddressListChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano3SetPropertyCoreBoardIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCoreBoardIdChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano3PropertyDeviceInfo(THandle aHandle, char** aDeviceInfo)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aDeviceInfo;
    try {
        proxyC->PropertyDeviceInfo(buf_aDeviceInfo);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aDeviceInfo = buf_aDeviceInfo.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3PropertyIpAddress(THandle aHandle, char** aIpAddress)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aIpAddress;
    try {
        proxyC->PropertyIpAddress(buf_aIpAddress);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aIpAddress = buf_aIpAddress.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3PropertyIpAddressList(THandle aHandle, char** aIpAddressList)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aIpAddressList;
    try {
        proxyC->PropertyIpAddressList(buf_aIpAddressList);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aIpAddressList = buf_aIpAddressList.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3PropertyMacAddressList(THandle aHandle, char** aMacAddressList)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aMacAddressList;
    try {
        proxyC->PropertyMacAddressList(buf_aMacAddressList);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aMacAddressList = buf_aMacAddressList.Transfer();
    return 0;
}

int32_t STDCALL CpProxyLinnCoUkVolkano3PropertyCoreBoardId(THandle aHandle, char** aCoreBoardId)
{
    CpProxyLinnCoUkVolkano3C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano3C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brhz buf_aCoreBoardId;
    try {
        proxyC->PropertyCoreBoardId(buf_aCoreBoardId);
    }
    catch (ProxyNotSubscribed&) {
        return -1;
    }
    *aCoreBoardId = buf_aCoreBoardId.Transfer();
    return 0;
}

