#include "CpLinnCoUkVolkano3.h"
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


class SyncRebootLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncRebootLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncRebootLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
};

SyncRebootLinnCoUkVolkano3Cpp::SyncRebootLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncRebootLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndReboot(aAsync);
}


class SyncBootModeLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncBootModeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMode);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBootModeLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaMode;
};

SyncBootModeLinnCoUkVolkano3Cpp::SyncBootModeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMode)
    : iService(aProxy)
    , iaMode(aaMode)
{
}

void SyncBootModeLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBootMode(aAsync, iaMode);
}


class SyncSetBootModeLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncSetBootModeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSetBootModeLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
};

SyncSetBootModeLinnCoUkVolkano3Cpp::SyncSetBootModeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy)
    : iService(aProxy)
{
}

void SyncSetBootModeLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSetBootMode(aAsync);
}


class SyncBspTypeLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncBspTypeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBspType);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBspTypeLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaBspType;
};

SyncBspTypeLinnCoUkVolkano3Cpp::SyncBspTypeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBspType)
    : iService(aProxy)
    , iaBspType(aaBspType)
{
}

void SyncBspTypeLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBspType(aAsync, iaBspType);
}


class SyncUglyNameLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncUglyNameLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaUglyName);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncUglyNameLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaUglyName;
};

SyncUglyNameLinnCoUkVolkano3Cpp::SyncUglyNameLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaUglyName)
    : iService(aProxy)
    , iaUglyName(aaUglyName)
{
}

void SyncUglyNameLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndUglyName(aAsync, iaUglyName);
}


class SyncIpAddressLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncIpAddressLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaIpAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaIpAddress;
};

SyncIpAddressLinnCoUkVolkano3Cpp::SyncIpAddressLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaIpAddress)
    : iService(aProxy)
    , iaIpAddress(aaIpAddress)
{
}

void SyncIpAddressLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddress(aAsync, iaIpAddress);
}


class SyncIpAddressListLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncIpAddressListLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaIpAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncIpAddressListLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaIpAddressList;
};

SyncIpAddressListLinnCoUkVolkano3Cpp::SyncIpAddressListLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaIpAddressList)
    : iService(aProxy)
    , iaIpAddressList(aaIpAddressList)
{
}

void SyncIpAddressListLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndIpAddressList(aAsync, iaIpAddressList);
}


class SyncMacAddressLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncMacAddressLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMacAddress);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaMacAddress;
};

SyncMacAddressLinnCoUkVolkano3Cpp::SyncMacAddressLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMacAddress)
    : iService(aProxy)
    , iaMacAddress(aaMacAddress)
{
}

void SyncMacAddressLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddress(aAsync, iaMacAddress);
}


class SyncMacAddressListLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncMacAddressListLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMacAddressList);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMacAddressListLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaMacAddressList;
};

SyncMacAddressListLinnCoUkVolkano3Cpp::SyncMacAddressListLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaMacAddressList)
    : iService(aProxy)
    , iaMacAddressList(aaMacAddressList)
{
}

void SyncMacAddressListLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMacAddressList(aAsync, iaMacAddressList);
}


class SyncProductIdLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncProductIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaProductNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncProductIdLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaProductNumber;
};

SyncProductIdLinnCoUkVolkano3Cpp::SyncProductIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaProductNumber)
    : iService(aProxy)
    , iaProductNumber(aaProductNumber)
{
}

void SyncProductIdLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndProductId(aAsync, iaProductNumber);
}


class SyncBoardIdLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncBoardIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardIdLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardIdLinnCoUkVolkano3Cpp::SyncBoardIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardIdLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardId(aAsync, iaBoardNumber);
}


class SyncBoardTypeLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncBoardTypeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBoardNumber);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncBoardTypeLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaBoardNumber;
};

SyncBoardTypeLinnCoUkVolkano3Cpp::SyncBoardTypeLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaBoardNumber)
    : iService(aProxy)
    , iaBoardNumber(aaBoardNumber)
{
}

void SyncBoardTypeLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndBoardType(aAsync, iaBoardNumber);
}


class SyncMaxBoardsLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncMaxBoardsLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, uint32_t& aaMaxBoards);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncMaxBoardsLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    uint32_t& iaMaxBoards;
};

SyncMaxBoardsLinnCoUkVolkano3Cpp::SyncMaxBoardsLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, uint32_t& aaMaxBoards)
    : iService(aProxy)
    , iaMaxBoards(aaMaxBoards)
{
}

void SyncMaxBoardsLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndMaxBoards(aAsync, iaMaxBoards);
}


class SyncSoftwareVersionLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncSoftwareVersionLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareVersionLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaSoftwareVersion;
};

SyncSoftwareVersionLinnCoUkVolkano3Cpp::SyncSoftwareVersionLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareVersionLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareVersion(aAsync, iaSoftwareVersion);
}


class SyncSoftwareUpdateLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncSoftwareUpdateLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncSoftwareUpdateLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    bool& iaAvailable;
    std::string& iaSoftwareVersion;
};

SyncSoftwareUpdateLinnCoUkVolkano3Cpp::SyncSoftwareUpdateLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, bool& aaAvailable, std::string& aaSoftwareVersion)
    : iService(aProxy)
    , iaAvailable(aaAvailable)
    , iaSoftwareVersion(aaSoftwareVersion)
{
}

void SyncSoftwareUpdateLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndSoftwareUpdate(aAsync, iaAvailable, iaSoftwareVersion);
}


class SyncDeviceInfoLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncDeviceInfoLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaDeviceInfoXml);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncDeviceInfoLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaDeviceInfoXml;
};

SyncDeviceInfoLinnCoUkVolkano3Cpp::SyncDeviceInfoLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaDeviceInfoXml)
    : iService(aProxy)
    , iaDeviceInfoXml(aaDeviceInfoXml)
{
}

void SyncDeviceInfoLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndDeviceInfo(aAsync, iaDeviceInfoXml);
}


class SyncCoreBoardIdLinnCoUkVolkano3Cpp : public SyncProxyAction
{
public:
    SyncCoreBoardIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaCoreBoardId);
    virtual void CompleteRequest(IAsync& aAsync);
    virtual ~SyncCoreBoardIdLinnCoUkVolkano3Cpp() {}
private:
    CpProxyLinnCoUkVolkano3Cpp& iService;
    std::string& iaCoreBoardId;
};

SyncCoreBoardIdLinnCoUkVolkano3Cpp::SyncCoreBoardIdLinnCoUkVolkano3Cpp(CpProxyLinnCoUkVolkano3Cpp& aProxy, std::string& aaCoreBoardId)
    : iService(aProxy)
    , iaCoreBoardId(aaCoreBoardId)
{
}

void SyncCoreBoardIdLinnCoUkVolkano3Cpp::CompleteRequest(IAsync& aAsync)
{
    iService.EndCoreBoardId(aAsync, iaCoreBoardId);
}


CpProxyLinnCoUkVolkano3Cpp::CpProxyLinnCoUkVolkano3Cpp(CpDeviceCpp& aDevice)
    : iCpProxy("linn-co-uk", "Volkano", 3, aDevice.Device())
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
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3Cpp::DeviceInfoPropertyChanged);
    iDeviceInfo = new PropertyString("DeviceInfo", functor);
    AddProperty(iDeviceInfo);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3Cpp::IpAddressPropertyChanged);
    iIpAddress = new PropertyString("IpAddress", functor);
    AddProperty(iIpAddress);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3Cpp::IpAddressListPropertyChanged);
    iIpAddressList = new PropertyString("IpAddressList", functor);
    AddProperty(iIpAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3Cpp::MacAddressListPropertyChanged);
    iMacAddressList = new PropertyString("MacAddressList", functor);
    AddProperty(iMacAddressList);
    functor = MakeFunctor(*this, &CpProxyLinnCoUkVolkano3Cpp::CoreBoardIdPropertyChanged);
    iCoreBoardId = new PropertyString("CoreBoardId", functor);
    AddProperty(iCoreBoardId);
}

CpProxyLinnCoUkVolkano3Cpp::~CpProxyLinnCoUkVolkano3Cpp()
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

void CpProxyLinnCoUkVolkano3Cpp::SyncReboot()
{
    SyncRebootLinnCoUkVolkano3Cpp sync(*this);
    BeginReboot(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginReboot(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionReboot, aFunctor);
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndReboot(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano3Cpp::SyncBootMode(std::string& aaMode)
{
    SyncBootModeLinnCoUkVolkano3Cpp sync(*this, aaMode);
    BeginBootMode(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginBootMode(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBootMode, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBootMode->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndBootMode(IAsync& aAsync, std::string& aaMode)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaMode.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncSetBootMode(const std::string& aaMode)
{
    SyncSetBootModeLinnCoUkVolkano3Cpp sync(*this);
    BeginSetBootMode(aaMode, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginSetBootMode(const std::string& aaMode, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSetBootMode, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionSetBootMode->InputParameters();
    {
        Brn buf((const TByte*)aaMode.c_str(), (TUint)aaMode.length());
        invocation->AddInput(new ArgumentString(*inParams[inIndex++], buf));
    }
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndSetBootMode(IAsync& aAsync)
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

void CpProxyLinnCoUkVolkano3Cpp::SyncBspType(std::string& aaBspType)
{
    SyncBspTypeLinnCoUkVolkano3Cpp sync(*this, aaBspType);
    BeginBspType(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginBspType(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBspType, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBspType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndBspType(IAsync& aAsync, std::string& aaBspType)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaBspType.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncUglyName(std::string& aaUglyName)
{
    SyncUglyNameLinnCoUkVolkano3Cpp sync(*this, aaUglyName);
    BeginUglyName(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginUglyName(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionUglyName, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionUglyName->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndUglyName(IAsync& aAsync, std::string& aaUglyName)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaUglyName.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncIpAddress(std::string& aaIpAddress)
{
    SyncIpAddressLinnCoUkVolkano3Cpp sync(*this, aaIpAddress);
    BeginIpAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginIpAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndIpAddress(IAsync& aAsync, std::string& aaIpAddress)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaIpAddress.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncIpAddressList(std::string& aaIpAddressList)
{
    SyncIpAddressListLinnCoUkVolkano3Cpp sync(*this, aaIpAddressList);
    BeginIpAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginIpAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionIpAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionIpAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndIpAddressList(IAsync& aAsync, std::string& aaIpAddressList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaIpAddressList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncMacAddress(std::string& aaMacAddress)
{
    SyncMacAddressLinnCoUkVolkano3Cpp sync(*this, aaMacAddress);
    BeginMacAddress(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginMacAddress(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddress, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddress->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndMacAddress(IAsync& aAsync, std::string& aaMacAddress)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaMacAddress.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncMacAddressList(std::string& aaMacAddressList)
{
    SyncMacAddressListLinnCoUkVolkano3Cpp sync(*this, aaMacAddressList);
    BeginMacAddressList(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginMacAddressList(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMacAddressList, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMacAddressList->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndMacAddressList(IAsync& aAsync, std::string& aaMacAddressList)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaMacAddressList.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncProductId(std::string& aaProductNumber)
{
    SyncProductIdLinnCoUkVolkano3Cpp sync(*this, aaProductNumber);
    BeginProductId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginProductId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionProductId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionProductId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndProductId(IAsync& aAsync, std::string& aaProductNumber)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaProductNumber.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncBoardId(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardIdLinnCoUkVolkano3Cpp sync(*this, aaBoardNumber);
    BeginBoardId(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginBoardId(uint32_t aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBoardId, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardId->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndBoardId(IAsync& aAsync, std::string& aaBoardNumber)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaBoardNumber.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncBoardType(uint32_t aaIndex, std::string& aaBoardNumber)
{
    SyncBoardTypeLinnCoUkVolkano3Cpp sync(*this, aaBoardNumber);
    BeginBoardType(aaIndex, sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginBoardType(uint32_t aaIndex, FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionBoardType, aFunctor);
    TUint inIndex = 0;
    const Action::VectorParameters& inParams = iActionBoardType->InputParameters();
    invocation->AddInput(new ArgumentUint(*inParams[inIndex++], aaIndex));
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionBoardType->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndBoardType(IAsync& aAsync, std::string& aaBoardNumber)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaBoardNumber.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncMaxBoards(uint32_t& aaMaxBoards)
{
    SyncMaxBoardsLinnCoUkVolkano3Cpp sync(*this, aaMaxBoards);
    BeginMaxBoards(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginMaxBoards(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionMaxBoards, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionMaxBoards->OutputParameters();
    invocation->AddOutput(new ArgumentUint(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndMaxBoards(IAsync& aAsync, uint32_t& aaMaxBoards)
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

void CpProxyLinnCoUkVolkano3Cpp::SyncSoftwareVersion(std::string& aaSoftwareVersion)
{
    SyncSoftwareVersionLinnCoUkVolkano3Cpp sync(*this, aaSoftwareVersion);
    BeginSoftwareVersion(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginSoftwareVersion(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareVersion, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareVersion->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndSoftwareVersion(IAsync& aAsync, std::string& aaSoftwareVersion)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaSoftwareVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncSoftwareUpdate(bool& aaAvailable, std::string& aaSoftwareVersion)
{
    SyncSoftwareUpdateLinnCoUkVolkano3Cpp sync(*this, aaAvailable, aaSoftwareVersion);
    BeginSoftwareUpdate(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginSoftwareUpdate(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionSoftwareUpdate, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionSoftwareUpdate->OutputParameters();
    invocation->AddOutput(new ArgumentBool(*outParams[outIndex++]));
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndSoftwareUpdate(IAsync& aAsync, bool& aaAvailable, std::string& aaSoftwareVersion)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaSoftwareVersion.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncDeviceInfo(std::string& aaDeviceInfoXml)
{
    SyncDeviceInfoLinnCoUkVolkano3Cpp sync(*this, aaDeviceInfoXml);
    BeginDeviceInfo(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginDeviceInfo(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionDeviceInfo, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionDeviceInfo->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndDeviceInfo(IAsync& aAsync, std::string& aaDeviceInfoXml)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaDeviceInfoXml.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SyncCoreBoardId(std::string& aaCoreBoardId)
{
    SyncCoreBoardIdLinnCoUkVolkano3Cpp sync(*this, aaCoreBoardId);
    BeginCoreBoardId(sync.Functor());
    sync.Wait();
}

void CpProxyLinnCoUkVolkano3Cpp::BeginCoreBoardId(FunctorAsync& aFunctor)
{
    Invocation* invocation = iCpProxy.GetService().Invocation(*iActionCoreBoardId, aFunctor);
    TUint outIndex = 0;
    const Action::VectorParameters& outParams = iActionCoreBoardId->OutputParameters();
    invocation->AddOutput(new ArgumentString(*outParams[outIndex++]));
    iCpProxy.GetInvocable().InvokeAction(*invocation);
}

void CpProxyLinnCoUkVolkano3Cpp::EndCoreBoardId(IAsync& aAsync, std::string& aaCoreBoardId)
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
    {
        const Brx& val = ((ArgumentString*)invocation.OutputArguments()[index++])->Value();
        aaCoreBoardId.assign((const char*)val.Ptr(), val.Bytes());
    }
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyDeviceInfoChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iDeviceInfoChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyIpAddressChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyIpAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iIpAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyMacAddressListChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iMacAddressListChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyCoreBoardIdChanged(Functor& aFunctor)
{
    iCpProxy.GetLock().Wait();
    iCoreBoardIdChanged = aFunctor;
    iCpProxy.GetLock().Signal();
}

void CpProxyLinnCoUkVolkano3Cpp::PropertyDeviceInfo(std::string& aDeviceInfo) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iDeviceInfo->Value();
    aDeviceInfo.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano3Cpp::PropertyIpAddress(std::string& aIpAddress) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIpAddress->Value();
    aIpAddress.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano3Cpp::PropertyIpAddressList(std::string& aIpAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iIpAddressList->Value();
    aIpAddressList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano3Cpp::PropertyMacAddressList(std::string& aMacAddressList) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iMacAddressList->Value();
    aMacAddressList.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano3Cpp::PropertyCoreBoardId(std::string& aCoreBoardId) const
{
    AutoMutex a(iCpProxy.PropertyReadLock());
    if (iCpProxy.GetSubscriptionStatus() != CpProxy::eSubscribed) {
        THROW(ProxyNotSubscribed);
    }
    const Brx& val = iCoreBoardId->Value();
    aCoreBoardId.assign((const char*)val.Ptr(), val.Bytes());
}

void CpProxyLinnCoUkVolkano3Cpp::DeviceInfoPropertyChanged()
{
    ReportEvent(iDeviceInfoChanged);
}

void CpProxyLinnCoUkVolkano3Cpp::IpAddressPropertyChanged()
{
    ReportEvent(iIpAddressChanged);
}

void CpProxyLinnCoUkVolkano3Cpp::IpAddressListPropertyChanged()
{
    ReportEvent(iIpAddressListChanged);
}

void CpProxyLinnCoUkVolkano3Cpp::MacAddressListPropertyChanged()
{
    ReportEvent(iMacAddressListChanged);
}

void CpProxyLinnCoUkVolkano3Cpp::CoreBoardIdPropertyChanged()
{
    ReportEvent(iCoreBoardIdChanged);
}

void CpProxyLinnCoUkVolkano3Cpp::Subscribe()
{
  iCpProxy.Subscribe();
}

void CpProxyLinnCoUkVolkano3Cpp::Unsubscribe()
{
 iCpProxy.Unsubscribe();
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyChanged(Functor& aFunctor)
{
  iCpProxy.SetPropertyChanged(aFunctor);
}

void CpProxyLinnCoUkVolkano3Cpp::SetPropertyInitialEvent(Functor& aFunctor)
{
  iCpProxy.SetPropertyInitialEvent(aFunctor);
}
void CpProxyLinnCoUkVolkano3Cpp::AddProperty(Property* aProperty)
{
  iCpProxy.AddProperty(aProperty);
}

void CpProxyLinnCoUkVolkano3Cpp::DestroyService()
{
  iCpProxy.DestroyService();
}

void CpProxyLinnCoUkVolkano3Cpp::ReportEvent(Functor aFunctor)
{
  iCpProxy.ReportEvent(aFunctor);
}

TUint CpProxyLinnCoUkVolkano3Cpp::Version() const
{
  return iCpProxy.Version();
}

