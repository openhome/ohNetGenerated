#include "CpLinnCoUkVolkano2.h"
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

class CpProxyLinnCoUkVolkano2C : public CpProxyC
{
public:
    CpProxyLinnCoUkVolkano2C(CpDeviceC aDevice);
    ~CpProxyLinnCoUkVolkano2C();
    //CpProxyLinnCoUkVolkano2* Proxy() { return static_cast<CpProxyLinnCoUkVolkano2*>(iProxy); }

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
    void SetPropertyIpAddressListChanged(Functor& aFunctor);
    void SetPropertyMacAddressListChanged(Functor& aFunctor);
    void SetPropertyCoreBoardIdChanged(Functor& aFunctor);

    void PropertyDeviceInfo(Brhz& aDeviceInfo) const;
    void PropertyIpAddressList(Brhz& aIpAddressList) const;
    void PropertyMacAddressList(Brhz& aMacAddressList) const;
    void PropertyCoreBoardId(Brhz& aCoreBoardId) const;
private:
    void DeviceInfoPropertyChanged();
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
    PropertyString* iIpAddressList;
    PropertyString* iMacAddressList;
    PropertyString* iCoreBoardId;
    Functor iDeviceInfoChanged;
    Functor iIpAddressListChanged;
    Functor iMacAddressListChanged;
    Functor iCoreBoardIdChanged;
};


class SyncRebootLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
};

SyncRebootLinnCoUkVolkano2C::SyncRebootLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaMode;
};

SyncBootModeLinnCoUkVolkano2C::SyncBootModeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
};

SyncSetBootModeLinnCoUkVolkano2C::SyncSetBootModeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaBspType;
};

SyncBspTypeLinnCoUkVolkano2C::SyncBspTypeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano2C::SyncUglyNameLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncIpAddressLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaIpAddress;
};

SyncIpAddressLinnCoUkVolkano2C::SyncIpAddressLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}


class SyncIpAddressListLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressListLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaIpAddressList;
};

SyncIpAddressListLinnCoUkVolkano2C::SyncIpAddressListLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}


class SyncMacAddressLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano2C::SyncMacAddressLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncMacAddressListLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressListLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaMacAddressList;
};

SyncMacAddressListLinnCoUkVolkano2C::SyncMacAddressListLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}


class SyncProductIdLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano2C::SyncProductIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano2C::SyncBoardIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano2C::SyncBoardTypeLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, TUint& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    TUint& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano2C::SyncMaxBoardsLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, TUint& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano2C::SyncSoftwareVersionLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    TBool& iaAvailable;
    Brh& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano2C::SyncSoftwareUpdateLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, TBool& aaAvailable, Brh& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano2C::SyncDeviceInfoLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}


class SyncCoreBoardIdLinnCoUkVolkano2C : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCoreBoardIdLinnCoUkVolkano2C() {};
private:
    CpProxyLinnCoUkVolkano2C& iService;
    Brh& iaCoreBoardId;
};

SyncCoreBoardIdLinnCoUkVolkano2C::SyncCoreBoardIdLinnCoUkVolkano2C(CpProxyLinnCoUkVolkano2C& aProxy, Brh& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano2C::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}

CpProxyLinnCoUkVolkano2C::CpProxyLinnCoUkVolkano2C(CpDeviceC aDevice)
    : CpProxyC("linn-co-uk", "Volkano", 2, *reinterpret_cast<CpiDevice*>(aDevice))
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2C::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2C::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2C::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano2C::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano2C::~CpProxyLinnCoUkVolkano2C()
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

void CpProxyLinnCoUkVolkano2C::SyncReboot()
{
    SyncRebootLinnCoUkVolkano2C sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionReboot, aFunctor);
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2C::SyncBootMode(Brh& aaMode)
{
    SyncBootModeLinnCoUkVolkano2C sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndBootMode(IAsync& aAsync, Brh& aaMode)
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

void CpProxyLinnCoUkVolkano2C::SyncSetBootMode(const Brx& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano2C sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginSetBootMode(const Brx& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    invocation->AddInput(new ArgumentString(*inParams[inIndex++], aaMode));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano2C::SyncBspType(Brh& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano2C sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndBspType(IAsync& aAsync, Brh& aaBspType)
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

void CpProxyLinnCoUkVolkano2C::SyncUglyName(Brh& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano2C sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndUglyName(IAsync& aAsync, Brh& aaUglyName)
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

void CpProxyLinnCoUkVolkano2C::SyncIpAddress(Brh& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano2C sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndIpAddress(IAsync& aAsync, Brh& aaIpAddress)
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

void CpProxyLinnCoUkVolkano2C::SyncIpAddressList(Brh& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano2C sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndIpAddressList(IAsync& aAsync, Brh& aaIpAddressList)
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

void CpProxyLinnCoUkVolkano2C::SyncMacAddress(Brh& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano2C sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndMacAddress(IAsync& aAsync, Brh& aaMacAddress)
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

void CpProxyLinnCoUkVolkano2C::SyncMacAddressList(Brh& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano2C sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndMacAddressList(IAsync& aAsync, Brh& aaMacAddressList)
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

void CpProxyLinnCoUkVolkano2C::SyncProductId(Brh& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano2C sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndProductId(IAsync& aAsync, Brh& aaProductNumber)
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

void CpProxyLinnCoUkVolkano2C::SyncBoardId(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano2C sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginBoardId(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2C::EndBoardId(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2C::SyncBoardType(TUint aaIndex, Brh& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano2C sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginBoardType(TUint aaIndex, FunctorAsync& aFunctor)
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

void CpProxyLinnCoUkVolkano2C::EndBoardType(IAsync& aAsync, Brh& aaBoardNumber)
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

void CpProxyLinnCoUkVolkano2C::SyncMaxBoards(TUint& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano2C sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndMaxBoards(IAsync& aAsync, TUint& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano2C::SyncSoftwareVersion(Brh& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano2C sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndSoftwareVersion(IAsync& aAsync, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2C::SyncSoftwareUpdate(TBool& aaAvailable, Brh& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano2C sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndSoftwareUpdate(IAsync& aAsync, TBool& aaAvailable, Brh& aaSoftwareVersion)
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

void CpProxyLinnCoUkVolkano2C::SyncDeviceInfo(Brh& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano2C sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndDeviceInfo(IAsync& aAsync, Brh& aaDeviceInfoXml)
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

void CpProxyLinnCoUkVolkano2C::SyncCoreBoardId(Brh& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano2C sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano2C::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = Service()->Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    Invocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano2C::EndCoreBoardId(IAsync& aAsync, Brh& aaCoreBoardId)
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

void CpProxyLinnCoUkVolkano2C::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iLock.Wait();
    iDeviceInfoChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano2C::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iIpAddressListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano2C::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iLock.Wait();
    iMacAddressListChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano2C::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iLock.Wait();
    iCoreBoardIdChanged = aFunctor;
    iLock.Signal();
}

void CpProxyLinnCoUkVolkano2C::PropertyDeviceInfo(Brhz& aDeviceInfo) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aDeviceInfo.Set(iDeviceInfo->Value());
}

void CpProxyLinnCoUkVolkano2C::PropertyIpAddressList(Brhz& aIpAddressList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aIpAddressList.Set(iIpAddressList->Value());
}

void CpProxyLinnCoUkVolkano2C::PropertyMacAddressList(Brhz& aMacAddressList) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aMacAddressList.Set(iMacAddressList->Value());
}

void CpProxyLinnCoUkVolkano2C::PropertyCoreBoardId(Brhz& aCoreBoardId) const
{
    AutoMutex a(GetPropertyReadLock());
    CheckSubscribed();
    aCoreBoardId.Set(iCoreBoardId->Value());
}

void CpProxyLinnCoUkVolkano2C::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano2C::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano2C::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano2C::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}


THandle STDCALL CpProxyLinnCoUkVolkano2Create(CpDeviceC aDevice)
{
    return new CpProxyLinnCoUkVolkano2C(aDevice);
}

void STDCALL CpProxyLinnCoUkVolkano2Destroy(THandle aHandle)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    delete proxyC;
}

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncReboot(THandle aHandle)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginReboot(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginReboot(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndReboot(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncBootMode(THandle aHandle, char** aaMode)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginBootMode(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBootMode(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndBootMode(THandle aHandle, OhNetHandleAsync aAsync, char** aaMode)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncSetBootMode(THandle aHandle, const char* aaMode)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginSetBootMode(THandle aHandle, const char* aaMode, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Brh buf_aaMode(aaMode);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSetBootMode(buf_aaMode, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndSetBootMode(THandle aHandle, OhNetHandleAsync aAsync)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncBspType(THandle aHandle, char** aaBspType)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginBspType(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBspType(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndBspType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBspType)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncUglyName(THandle aHandle, char** aaUglyName)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginUglyName(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginUglyName(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndUglyName(THandle aHandle, OhNetHandleAsync aAsync, char** aaUglyName)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncIpAddress(THandle aHandle, char** aaIpAddress)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginIpAddress(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIpAddress(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndIpAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aaIpAddress)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncIpAddressList(THandle aHandle, char** aaIpAddressList)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginIpAddressList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginIpAddressList(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndIpAddressList(THandle aHandle, OhNetHandleAsync aAsync, char** aaIpAddressList)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncMacAddress(THandle aHandle, char** aaMacAddress)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginMacAddress(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMacAddress(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndMacAddress(THandle aHandle, OhNetHandleAsync aAsync, char** aaMacAddress)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncMacAddressList(THandle aHandle, char** aaMacAddressList)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginMacAddressList(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMacAddressList(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndMacAddressList(THandle aHandle, OhNetHandleAsync aAsync, char** aaMacAddressList)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncProductId(THandle aHandle, char** aaProductNumber)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginProductId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginProductId(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndProductId(THandle aHandle, OhNetHandleAsync aAsync, char** aaProductNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncBoardId(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginBoardId(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardId(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndBoardId(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncBoardType(THandle aHandle, uint32_t aaIndex, char** aaBoardNumber)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginBoardType(THandle aHandle, uint32_t aaIndex, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginBoardType(aaIndex, functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndBoardType(THandle aHandle, OhNetHandleAsync aAsync, char** aaBoardNumber)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncMaxBoards(THandle aHandle, uint32_t* aaMaxBoards)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginMaxBoards(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginMaxBoards(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndMaxBoards(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaMaxBoards)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncSoftwareVersion(THandle aHandle, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginSoftwareVersion(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareVersion(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndSoftwareVersion(THandle aHandle, OhNetHandleAsync aAsync, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncSoftwareUpdate(THandle aHandle, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginSoftwareUpdate(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginSoftwareUpdate(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndSoftwareUpdate(THandle aHandle, OhNetHandleAsync aAsync, uint32_t* aaAvailable, char** aaSoftwareVersion)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncDeviceInfo(THandle aHandle, char** aaDeviceInfoXml)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginDeviceInfo(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginDeviceInfo(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndDeviceInfo(THandle aHandle, OhNetHandleAsync aAsync, char** aaDeviceInfoXml)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2SyncCoreBoardId(THandle aHandle, char** aaCoreBoardId)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2BeginCoreBoardId(THandle aHandle, OhNetCallbackAsync aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    FunctorAsync functor = MakeFunctorAsync(aPtr, (OhNetFunctorAsync)aCallback);
    proxyC->BeginCoreBoardId(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2EndCoreBoardId(THandle aHandle, OhNetHandleAsync aAsync, char** aaCoreBoardId)
{
    int32_t err = 0;
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

void STDCALL CpProxyLinnCoUkVolkano2SetPropertyDeviceInfoChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyDeviceInfoChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano2SetPropertyIpAddressListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyIpAddressListChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano2SetPropertyMacAddressListChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyMacAddressListChanged(functor);
}

void STDCALL CpProxyLinnCoUkVolkano2SetPropertyCoreBoardIdChanged(THandle aHandle, OhNetCallback aCallback, void* aPtr)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
    ASSERT(proxyC != NULL);
    Functor functor = MakeFunctor(aPtr, aCallback);
    proxyC->SetPropertyCoreBoardIdChanged(functor);
}

int32_t STDCALL CpProxyLinnCoUkVolkano2PropertyDeviceInfo(THandle aHandle, char** aDeviceInfo)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2PropertyIpAddressList(THandle aHandle, char** aIpAddressList)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2PropertyMacAddressList(THandle aHandle, char** aMacAddressList)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

int32_t STDCALL CpProxyLinnCoUkVolkano2PropertyCoreBoardId(THandle aHandle, char** aCoreBoardId)
{
    CpProxyLinnCoUkVolkano2C* proxyC = reinterpret_cast<CpProxyLinnCoUkVolkano2C*>(aHandle);
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

